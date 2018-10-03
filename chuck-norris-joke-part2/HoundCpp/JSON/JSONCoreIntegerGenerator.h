/* file "JSONCoreIntegerGenerator.h" */

/* Copyright 2015 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONCOREINTEGERGENERATOR_H
#define JSONCOREINTEGERGENERATOR_H

#include "JSONIntegerGenerator.h"
#include <sstream>


class JSONCoreIntegerGenerator : public JSONIntegerGenerator
  {
  protected:
    virtual void handle_result(o_integer result) = 0;
    std::string oi_to_string(o_integer the_oi)
      {
        switch (oi_kind(the_oi))
          {
            case IIK_FINITE:
                break;
            case IIK_POSITIVE_INFINITY:
                return "positive infinity";
            case IIK_NEGATIVE_INFINITY:
                return "negative infinity";
            case IIK_UNSIGNED_INFINITY:
                return "infinity";
            case IIK_ZERO_ZERO:
                return "undefined";
            default:
                assert(false);
          }
        size_t digit_count;
        oi_decimal_digit_count(the_oi, &digit_count);
        char *buffer = new char[digit_count + 2];
        char *location = buffer;
        if (oi_is_negative(the_oi))
          {
            *location = '-';
            ++location;
          }
        oi_write_decimal_digits(the_oi, location);
        location[digit_count] = 0;
        std::string result = buffer;
        delete[] buffer;
        return result;
      }

    class OICleaner
      {
      private:
        o_integer to_clean;

      public:
        OICleaner(o_integer to_clean) : to_clean(to_clean)  { }
        ~OICleaner(void)
          {
            oi_remove_reference(to_clean);
          }
      };

  public:
    using JSONIntegerGenerator::number_value;

    void number_value(double to_write, int precision = DBL_DIG)
      {
        char *buffer = new char[precision + 100];
        sprintf(buffer, "%*e", precision, to_write);
        std::string text = buffer;
        delete[] buffer;
        number_value(text.c_str());
      }
    void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent)
      {
        std::stringstream stream;
        std::string whole_part_string = oi_to_string(mantissa_whole_part);
        const char *digits = whole_part_string.c_str();
        if (*digits == '-')
            ++digits;
        stream << digits;
        o_integer new_exponent = exponent;
        oi_add_reference(new_exponent);
        if (mantissa_fraction_digit_count > 0)
          {
            size_t non_zero_count;
            oi_decimal_digit_count(mantissa_fraction_numerator,
                                   &non_zero_count);
            while (non_zero_count < mantissa_fraction_digit_count)
              {
                stream << '0';
                ++non_zero_count;
              }
            std::string fraction_string =
                    oi_to_string(mantissa_fraction_numerator);
            stream << fraction_string;
            o_integer exponent_delta;
            oi_create_from_size_t(exponent_delta,
                                  mantissa_fraction_digit_count);
            o_integer sum;
            oi_subtract(sum, new_exponent, exponent_delta);
            oi_remove_reference(new_exponent);
            oi_remove_reference(exponent_delta);
            new_exponent = sum;
          }
        o_integer result;
        if (oi_is_negative(new_exponent))
          {
            std::string pre_exponent = stream.str();
            size_t count = strlen(pre_exponent.c_str());
            while (!(oi_equal(new_exponent, oi_zero)))
              {
                if (count == 0)
                  {
                    number_value(oi_zero);
                    return;
                  }
                --count;
                if (pre_exponent.c_str()[count] != '0')
                  {
                    error("Expected an integer value for %what%, found a "
                          "non-integer number.");
                  }
                o_integer sum;
                oi_add(sum, new_exponent, oi_one);
                oi_remove_reference(new_exponent);
                new_exponent = sum;
              }
            oi_remove_reference(new_exponent);
            oi_create_from_decimal_ascii(result, count, pre_exponent.c_str(),
                                         oi_is_negative(mantissa_whole_part));
          }
        else
          {
            while (!(oi_equal(new_exponent, oi_zero)))
              {
                stream << "0";
                o_integer sum;
                oi_subtract(sum, new_exponent, oi_one);
                oi_remove_reference(new_exponent);
                new_exponent = sum;
              }
            oi_remove_reference(new_exponent);
            std::string all_digits = stream.str();
            oi_create_from_decimal_ascii(result, strlen(all_digits.c_str()),
                    all_digits.c_str(), oi_is_negative(mantissa_whole_part));
          }
        OICleaner result_cleaner(result);
        number_value(result);
      }
    void number_value(const char *number_text)
      {
        assert(number_text != NULL);

        bool is_negative = false;
        const char *digits = number_text;
        if (*digits == '-')
          {
            is_negative = true;
            ++digits;
          }
        else if (*digits == '+')
          {
            ++digits;
          }
        const char *follow = digits;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
        o_integer the_oi;
        oi_create_from_decimal_ascii(the_oi, follow - digits, digits,
                                     is_negative);
        OICleaner the_cleaner(the_oi);
        if (*follow == 0)
          {
            number_value(the_oi);
            return;
          }
        o_integer mantissa_fraction_numerator;
        size_t fraction_digit_count;
        if (*follow != '.')
          {
            mantissa_fraction_numerator = oi_zero;
            oi_add_reference(mantissa_fraction_numerator);
            fraction_digit_count = 0;
          }
        else
          {
            ++follow;
            const char *start = follow;
            while ((*follow >= '0') && (*follow <= '9'))
                ++follow;
            fraction_digit_count = follow - start;
            oi_create_from_decimal_ascii(mantissa_fraction_numerator,
                    fraction_digit_count, start, is_negative);
          }
        OICleaner numerator_cleaner(mantissa_fraction_numerator);
        o_integer exponent;
        if ((*follow != 'e') && (*follow != 'E'))
          {
            exponent = oi_zero;
            oi_add_reference(exponent);
          }
        else
          {
            ++follow;
            bool exponent_is_negative = false;
            if (*follow == '-')
              {
                exponent_is_negative = true;
                ++follow;
              }
            else if (*follow == '+')
              {
                ++follow;
              }
            const char *start = follow;
            while ((*follow >= '0') && (*follow <= '9'))
                ++follow;
            oi_create_from_decimal_ascii(exponent, follow - start, start,
                                         exponent_is_negative);
          }
        OICleaner exponent_cleaner(exponent);
        assert(*follow == 0);
        number_value(the_oi, mantissa_fraction_numerator, fraction_digit_count,
                     exponent);
      }
  };


#endif /* JSONCOREINTEGERGENERATOR_H */
