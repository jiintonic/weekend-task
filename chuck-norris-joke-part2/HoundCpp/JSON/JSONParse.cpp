/* file "JSONParse.cpp" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdarg.h>
extern "C"
  {
#include "buffer_print.h"
#include "unicode.h"
  };


class JSONFILETextSource : public JSONTextSource
  {
  private:
    FILE *fp;
    std::string source_file_name;

  public:
    JSONFILETextSource(FILE *fp, const char *file_name) : fp(fp),
            source_file_name(file_name)  { }
    ~JSONFILETextSource(void)  { }

    int getchar(void)  { return getc(fp); }
    void ungetchar(int to_unget)  { ungetc(to_unget, fp); }
    const char *file_name(void)  { return source_file_name.c_str(); }
  };

class JSONStringTextSource : public JSONTextSource
  {
  private:
    const char *text;
    const char *current;
    std::string source_file_name;

  public:
    JSONStringTextSource(const char *text, const char *file_name) : text(text),
            current(text), source_file_name(file_name)
      { assert(text != NULL); }
    ~JSONStringTextSource(void)  { }

    int getchar(void)
      {
        if (*current == 0)
            return EOF;
        int result = *current;
        ++current;
        return result;
      }
    void ungetchar(int to_unget)
      {
        assert(to_unget != EOF);
        assert(text < current);
        --current;
        assert(*current == to_unget);
      }
    const char *file_name(void)  { return source_file_name.c_str(); }
  };

class JSONLabelHandler : public JSONHandler
  {
  public:
    std::string label;
    void string_value(const char *to_write)  { label = to_write; }
    void string_value(const std::string &to_write)  { label = to_write; }
  };


class JSONParser
  {
  private:
    JSONTextSource *source;
    size_t line_num;
    size_t column_num;
    size_t last_line_num;
    size_t last_column_num;
    size_t last_line_column_num;

    void skip_whitespace(void);
    void do_exponent(string_buffer *buffer, o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, JSONHandler *handler);
    o_integer parse_decimal_digits(string_buffer *buffer,
                                   size_t *digit_count_location = NULL);
    int getchar(void)
      {
        int result = source->getchar();
        last_line_num = line_num;
        last_column_num = column_num;
        if (result == '\n')
          {
            ++line_num;
            last_line_column_num = column_num;
            column_num = 1;
          }
        else
          {
            ++column_num;
          }
        return result;
      }
    void ungetchar(int to_unget)
      {
        if (to_unget == '\n')
          {
            assert(line_num > 1);
            --line_num;
            assert(column_num == 1);
            column_num = last_line_column_num;
          }
        else
          {
            assert(column_num > 1);
            --column_num;
          }
        source->ungetchar(to_unget);
      }
    void error(const char *format, ...)
      {
        va_list ap;

        va_start(ap, format);
        const char *file_name = source->file_name();
        assert(file_name != NULL);
        string_buffer buffer;
        string_buffer_init(&buffer, 10);
        buffer_printf(&buffer, 0, "Error [%s:%lu:%lu]: ", file_name,
                (unsigned long)last_line_num, (unsigned long)last_column_num);
        vbuffer_printf(&buffer, buffer.element_count, format, ap);
        va_end(ap);
        throw buffer.array;
      }

  public:
    JSONParser(JSONTextSource *source) : source(source), line_num(1),
            column_num(1)  { }
    ~JSONParser(void)  { }

    void parse_value(JSONHandler *handler);
  };

void JSONParser::parse_value(JSONHandler *handler)
  {
    skip_whitespace();

    int inchar = getchar();
    if (inchar == EOF)
      {
        error("Expected a value, found end-of-input.\n");
        return;
      }

    switch (inchar)
      {
        case '\"':
          {
            string_buffer buffer;
            string_buffer_init(&buffer, 10);
            while (true)
              {
                int inchar = getchar();
                if (inchar == EOF)
                  {
                    error("End-of-input was encountered in a string value.\n");
                    free(buffer.array);
                    return;
                  }

                switch (inchar)
                  {
                    case '\"':
                      {
                        string_buffer_append(&buffer, 0);
                        handler->string_value(buffer.array);
                        free(buffer.array);
                        return;
                      }
                    case '\\':
                      {
                        int nextchar = getchar();
                        switch (nextchar)
                          {
                            case '\"':
                              {
                                string_buffer_append(&buffer, '\"');
                                break;
                              }
                            case '\\':
                              {
                                string_buffer_append(&buffer, '\\');
                                break;
                              }
                            case '/':
                              {
                                string_buffer_append(&buffer, '/');
                                break;
                              }
                            case 'b':
                              {
                                string_buffer_append(&buffer, '\b');
                                break;
                              }
                            case 'f':
                              {
                                string_buffer_append(&buffer, '\f');
                                break;
                              }
                            case 'n':
                              {
                                string_buffer_append(&buffer, '\n');
                                break;
                              }
                            case 'r':
                              {
                                string_buffer_append(&buffer, '\r');
                                break;
                              }
                            case 't':
                              {
                                string_buffer_append(&buffer, '\t');
                                break;
                              }
                            case 'u':
                              {
                                unsigned long code_point = 0;
                                for (size_t digit_num = 0; digit_num < 4;
                                     ++digit_num)
                                  {
                                    int digitchar = getchar();
                                    if ((digitchar >= '0') &&
                                        (digitchar <= '9'))
                                      {
                                        digitchar -= '0';
                                      }
                                    else if ((digitchar >= 'a') &&
                                             (digitchar <= 'f'))
                                      {
                                        digitchar -= 'a' - 0xa;
                                      }
                                    else if ((digitchar >= 'A') &&
                                             (digitchar <= 'F'))
                                      {
                                        digitchar -= 'A' - 0xa;
                                      }
                                    else
                                      {
                                        free(buffer.array);
                                        error("%s was encountered in a hex "
                                              "escape sequence of a string "
                                              "value.\n",
                                              ((digitchar == EOF) ?
                                               "End-of-input" :
                                               "A non-hex digit"));
                                        return;
                                      }
                                    code_point *= 16;
                                    code_point += digitchar;
                                  }
                                assert(code_point >= 0);
                                assert(code_point <= 0xffff);
                                if (code_point == 0)
                                  {
                                    string_buffer_append(&buffer, 0);
                                    break;
                                  }
                                if ((code_point >= 0xd800) &&
                                    (code_point <= 0xe000))
                                  {
                                    if (code_point >= 0xdc00)
                                      {
                                        free(buffer.array);
                                        error("A starting hex escape sequence "
                                              "specified a value (0x%04lx) that"
                                              " is not a legal starting UTF-16 "
                                              "code unit.\n", code_point);
                                        return;
                                      };

                                    int check = getchar();
                                    if (check != '\\')
                                      {
                                        free(buffer.array);
                                        error("A lead surrogate hex escape "
                                              "sequence (\\u%04lx) was not "
                                              "followed by an escape "
                                              "sequence.\n", code_point);
                                        return;
                                      };

                                    check = getchar();
                                    if (check != 'u')
                                      {
                                        free(buffer.array);
                                        error("A lead surrogate hex escape "
                                              "sequence (\\u%04lx) was not "
                                              "followed by a hex escape "
                                              "sequence.\n", code_point);
                                        return;
                                      };

                                    unsigned long second_code_unit = 0;
                                    for (size_t digit_num = 0; digit_num < 4;
                                         ++digit_num)
                                      {
                                        int digitchar = getchar();
                                        if ((digitchar >= '0') &&
                                            (digitchar <= '9'))
                                          {
                                            digitchar -= '0';
                                          }
                                        else if ((digitchar >= 'a') &&
                                                 (digitchar <= 'f'))
                                          {
                                            digitchar -= 'a' - 0xa;
                                          }
                                        else if ((digitchar >= 'A') &&
                                                 (digitchar <= 'F'))
                                          {
                                            digitchar -= 'A' - 0xa;
                                          }
                                        else
                                          {
                                            free(buffer.array);
                                            error("%s was encountered in a hex "
                                                  "escape sequence of a string "
                                                  "value.\n",
                                                  ((digitchar == EOF) ?
                                                   "End-of-input" :
                                                   "A non-hex digit"));
                                            return;
                                          }
                                        second_code_unit *= 16;
                                        second_code_unit += digitchar;
                                      }
                                    assert(second_code_unit >= 0);
                                    assert(second_code_unit <= 0xffff);

                                    if ((second_code_unit < 0xdc00) &&
                                        (second_code_unit >= 0xe000))
                                      {
                                        free(buffer.array);
                                        error("A lead surrogate hex escape "
                                              "sequence (\\u%04lx) was not "
                                              "followed by a trail surrogate "
                                              "hex escape sequence.\n",
                                              code_point);
                                        return;
                                      };

                                    code_point =
                                            (((code_point - 0xd800) << 10) |
                                             (second_code_unit - 0xdc00)) +
                                            0x10000;
                                  }
                                char utf8[4];
                                size_t byte_count = code_point_to_utf8(
                                        code_point, &(utf8[0]));
                                assert((byte_count > 0) && (byte_count <= 4));
                                string_buffer_append_array(&buffer, byte_count,
                                                           &(utf8[0]));
                                break;
                              }
                            case EOF:
                            default:
                              {
                                free(buffer.array);
                                error("%s was encountered in an escape sequence"
                                      " of a string value.\n",
                                      ((nextchar == EOF) ? "End-of-input" :
                                       "A non-hex digit"));
                                return;
                              }
                          }
                        break;
                      }
                    default:
                      {
                        string_buffer_append(&buffer, (char)inchar);
                        break;
                      }
                  }
              }
          }
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '-':
          {
            string_buffer buffer;
            string_buffer_init(&buffer, 10);
            bool negate = false;
            if (inchar == '-')
              {
                string_buffer_append(&buffer, (char)inchar);
                negate = true;
                inchar = getchar();
                switch (inchar)
                  {
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                        break;
                    default:
                        free(buffer.array);
                        error("A non-digit was encountered following a minus "
                              "sign in an integer value.\n");
                        return;
                  }
              }

            assert((inchar >= '0') && (inchar <= '9'));

            o_integer the_oi;
            if (inchar == '0')
              {
                the_oi = oi_zero;
                string_buffer_append(&buffer, (char)inchar);
              }
            else
              {
                ungetchar(inchar);
                the_oi = parse_decimal_digits(&buffer);
              }

            if (negate)
              {
                o_integer negated;
                oi_negate(negated, the_oi);
                oi_remove_reference(the_oi);
                the_oi = negated;
              }

            int next = getchar();
            switch (next)
              {
                case '.':
                  {
                    string_buffer_append(&buffer, (char)next);
                    int first_digit = getchar();
                    if ((first_digit < '0') || (first_digit > '9'))
                      {
                        free(buffer.array);
                        oi_remove_reference(the_oi);
                        error("In a JSON number, there was no digit after the "
                              "decimal point.\n");
                        return;
                      }
                    if (first_digit != EOF)
                        ungetchar(first_digit);
                    size_t fraction_digit_count;
                    o_integer fraction = parse_decimal_digits(&buffer,
                            &fraction_digit_count);
                    if (negate && oi_equal(the_oi, oi_zero))
                      {
                        o_integer negated;
                        oi_negate(negated, fraction);
                        oi_remove_reference(fraction);
                        fraction = negated;
                      }

                    int trailer = getchar();
                    if ((trailer == 'e') || (trailer == 'E'))
                      {
                        string_buffer_append(&buffer, (char)trailer);
                        do_exponent(&buffer, the_oi, fraction,
                                    fraction_digit_count, handler);
                        free(buffer.array);
                        return;
                      }
                    if (trailer != EOF)
                        ungetchar(trailer);
                    string_buffer_append(&buffer, 0);
                    handler->number_value(buffer.array);
                    oi_remove_reference(fraction);
                    oi_remove_reference(the_oi);
                    free(buffer.array);
                    return;
                  }
                case 'e':
                case 'E':
                  {
                    string_buffer_append(&buffer, (char)next);
                    do_exponent(&buffer, the_oi, oi_zero, 0, handler);
                    free(buffer.array);
                    return;
                  }
                default:
                  {
                    ungetchar(next);
                  }
                case EOF:
                  {
                    string_buffer_append(&buffer, 0);
                    handler->number_value(buffer.array);
                    oi_remove_reference(the_oi);
                    free(buffer.array);
                    return;
                  }
              }
          }
        case 't':
          {
            inchar = getchar();
            if (inchar != 'r')
              {
                error("A partial true value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'u')
              {
                error("A partial true value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'e')
              {
                error("A partial true value was encountered as a JSON "
                      "value.\n");
                return;
              }
            handler->true_value();
            return;
          }
        case 'f':
          {
            inchar = getchar();
            if (inchar != 'a')
              {
                error("A partial false value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'l')
              {
                error("A partial false value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 's')
              {
                error("A partial false value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'e')
              {
                error("A partial false value was encountered as a JSON "
                      "value.\n");
                return;
              }
            handler->false_value();
            return;
          }
        case 'n':
          {
            inchar = getchar();
            if (inchar != 'u')
              {
                error("A partial null value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'l')
              {
                error("A partial null value was encountered as a JSON "
                      "value.\n");
                return;
              }
            inchar = getchar();
            if (inchar != 'l')
              {
                error("A partial null value was encountered as a JSON "
                      "value.\n");
                return;
              }
            handler->null_value();
            return;
          }
        case '{':
          {
            handler->start_object();

            skip_whitespace();
            int next = getchar();
            if (next == '}')
              {
                handler->finish_object();
                return;
              }
            if (next != EOF)
                ungetchar(next);

            while (true)
              {
                int quote = getchar();
                if (quote != '\"')
                  {
                    error("A non-string was found where the label for an object"
                          " item was expected.\n");
                    return;
                  }
                ungetchar(quote);

                JSONLabelHandler label_handler;
                parse_value(&label_handler);
                handler->start_pair(label_handler.label.c_str());

                skip_whitespace();
                int colon = getchar();
                if (colon != ':')
                  {
                    error("Expected a colon but didn't find it.\n");
                    return;
                  }

                parse_value(handler);

                skip_whitespace();
                int comma = getchar();
                if (comma == '}')
                  {
                    handler->finish_object();
                    return;
                  }
                if (comma != ',')
                  {
                    error("Expected a comma or right curly brace but didn't "
                          "find it.\n");
                    return;
                  }

                skip_whitespace();
              }
          }
        case '[':
          {
            skip_whitespace();

            handler->start_array();
            int next = getchar();
            if (next == ']')
              {
                handler->finish_array();
                return;
              }
            if (next != EOF)
                ungetchar(next);

            while (true)
              {
                parse_value(handler);

                skip_whitespace();
                int comma = getchar();
                if (comma == ']')
                  {
                    handler->finish_array();
                    return;
                  }
                if (comma != ',')
                  {
                    error("Expected a comma or right square brace but didn't "
                          "find it.\n");
                    return;
                  }
              }
          }
        default:
          {
            error("Expected a JSON value, found `%c'.\n", inchar);
            return;
          }
      }
  }

void JSONParser::skip_whitespace(void)
  {
    while (true)
      {
        int inchar = getchar();
        if (inchar == EOF)
            return;
        switch (inchar)
          {
            case ' ':
            case '\t':
            case '\n':
            case '\f':
            case '\r':
                break;
            default:
                ungetchar(inchar);
                return;
          }
      }
  }

void JSONParser::do_exponent(string_buffer *buffer,
        o_integer mantissa_whole_part, o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, JSONHandler *handler)
  {
    int inchar = getchar();
    bool negate = false;
    if (inchar == '-')
      {
        negate = true;
        string_buffer_append(buffer, (char)inchar);
      }
    else if (inchar == '+')
      {
        string_buffer_append(buffer, (char)inchar);
      }
    else if (inchar != EOF)
      {
        ungetchar(inchar);
      }

    int first_digit = getchar();
    if ((first_digit < '0') || (first_digit > '9'))
      {
        oi_remove_reference(mantissa_fraction_numerator);
        oi_remove_reference(mantissa_whole_part);
        error("In a JSON number, there was no digit in the exponent part though"
              " there was an `e'.\n");
        return;
      }
    if (first_digit != EOF)
        ungetchar(first_digit);

    o_integer exponent = parse_decimal_digits(buffer);

    if (negate)
      {
        o_integer negated;
        oi_negate(negated, exponent);
        oi_remove_reference(exponent);
        exponent = negated;
      }

    string_buffer_append(buffer, 0);
    handler->number_value(buffer->array);
    oi_remove_reference(exponent);
    oi_remove_reference(mantissa_fraction_numerator);
    oi_remove_reference(mantissa_whole_part);
  }

o_integer JSONParser::parse_decimal_digits(string_buffer *buffer,
                                           size_t *digit_count_location)
  {
    int inchar = getchar();
    assert((inchar >= '0') && (inchar <= '9'));

    o_integer result;
    oi_create_from_long_int(result, inchar - '0');
    string_buffer_append(buffer, (char)inchar);
    size_t digit_count = 1;
    while (true)
      {
        int digit = getchar();
        if ((digit < '0') || (digit > '9'))
          {
            if (digit != EOF)
                ungetchar(digit);
            if (digit_count_location != NULL)
                *digit_count_location = digit_count;
            return result;
          }

        string_buffer_append(buffer, (char)digit);
        ++digit_count;

        o_integer factor;
        oi_create_from_long_int(factor, 10);
        o_integer product;
        oi_multiply(product, result, factor);
        oi_remove_reference(result);
        oi_remove_reference(factor);

        o_integer to_add;
        oi_create_from_long_int(to_add, digit - '0');
        oi_add(result, product, to_add);
        oi_remove_reference(product);
        oi_remove_reference(to_add);
      }
  }


extern void parse_json_value(JSONTextSource *source, JSONHandler *handler)
  {
    JSONParser parser(source);
    parser.parse_value(handler);
  }

extern void parse_json_value(FILE *fp, const char *file_name,
                             JSONHandler *handler)
  {
    JSONFILETextSource source(fp, file_name);
    parse_json_value(&source, handler);
  }

extern void parse_json_value(const char *text, const char *file_name,
                             JSONHandler *handler)
  {
    JSONStringTextSource source(text, file_name);
    parse_json_value(&source, handler);
  }

extern void parse_json_value(std::string text, const char *file_name,
                             JSONHandler *handler)
  {
    parse_json_value(text.c_str(), file_name, handler);
  }
