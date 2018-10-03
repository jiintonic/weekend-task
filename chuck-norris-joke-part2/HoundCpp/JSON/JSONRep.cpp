/* file "JSONRep.cpp" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#include "JSONRep.h"
#include "FloatingPointToFullJSON.h"
#include <stdlib.h>
#include <assert.h>
#include <vector>


JSONValue::~JSONValue(void)
  {
  }

JSONStringValue *JSONValue::string_value(void)
  {
    return NULL;
  }

const JSONStringValue *JSONValue::string_value(void) const
  {
    return NULL;
  }

JSONIntegerValue *JSONValue::integer_value(void)
  {
    return NULL;
  }

const JSONIntegerValue *JSONValue::integer_value(void) const
  {
    return NULL;
  }

JSONRationalValue *JSONValue::rational_value(void)
  {
    return NULL;
  }

const JSONRationalValue *JSONValue::rational_value(void) const
  {
    return NULL;
  }

JSONTrueValue *JSONValue::true_value(void)
  {
    return NULL;
  }

const JSONTrueValue *JSONValue::true_value(void) const
  {
    return NULL;
  }

JSONFalseValue *JSONValue::false_value(void)
  {
    return NULL;
  }

const JSONFalseValue *JSONValue::false_value(void) const
  {
    return NULL;
  }

JSONNullValue *JSONValue::null_value(void)
  {
    return NULL;
  }

const JSONNullValue *JSONValue::null_value(void) const
  {
    return NULL;
  }

JSONObjectValue *JSONValue::object_value(void)
  {
    return NULL;
  }

const JSONObjectValue *JSONValue::object_value(void) const
  {
    return NULL;
  }

JSONArrayValue *JSONValue::array_value(void)
  {
    return NULL;
  }

const JSONArrayValue *JSONValue::array_value(void) const
  {
    return NULL;
  }


JSONStringValue::JSONStringValue(const char *init_data)
  {
    assert(init_data != NULL);
    data = (char *)(malloc(strlen(init_data) + 1));
    strcpy(data, init_data);
  }

JSONStringValue::~JSONStringValue(void)
  {
    free(data);
  }

JSONValue::Kind JSONStringValue::kind(void) const
  {
    return JVK_STRING;
  }

const char *JSONStringValue::getData(void) const
  {
    return data;
  }

void JSONStringValue::write(JSONHandler *handler) const
  {
    handler->string_value(data);
  }

JSONStringValue *JSONStringValue::string_value(void)
  {
    return this;
  }

const JSONStringValue *JSONStringValue::string_value(void) const
  {
    return this;
  }

JSONValue *JSONStringValue::clone(void) const
  {
    return new JSONStringValue(data);
  }

bool JSONStringValue::is_equal_to(const JSONValue *other) const
  {
    const JSONStringValue *other_string_value = other->string_value();
    if (other_string_value == NULL)
        return false;
    return (strcmp(getData(), other_string_value->getData()) == 0);
  }


JSONIntegerValue::JSONIntegerValue(o_integer init_data)
  {
    data = init_data;
    oi_add_reference(data);
  }

JSONIntegerValue::JSONIntegerValue(char init_data)
  {
    oi_create_from_long_int(data, (long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(signed char init_data)
  {
    oi_create_from_long_int(data, (long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(short init_data)
  {
    oi_create_from_long_int(data, (long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(int init_data)
  {
    oi_create_from_long_int(data, (long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(long init_data)
  {
    oi_create_from_long_int(data, (long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(unsigned char init_data)
  {
    oi_create_from_unsigned_long_int(data, (unsigned long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(unsigned short init_data)
  {
    oi_create_from_unsigned_long_int(data, (unsigned long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(unsigned int init_data)
  {
    oi_create_from_unsigned_long_int(data, (unsigned long)init_data);
  }

JSONIntegerValue::JSONIntegerValue(unsigned long init_data)
  {
    oi_create_from_unsigned_long_int(data, (unsigned long)init_data);
  }

JSONIntegerValue::~JSONIntegerValue(void)
  {
    oi_remove_reference(data);
  }

JSONValue::Kind JSONIntegerValue::kind(void) const
  {
    return JVK_INTEGER;
  }

o_integer JSONIntegerValue::getData(void) const
  {
    return data;
  }

std::string JSONIntegerValue::getText(void) const
  {
    size_t digit_count;
    oi_decimal_digit_count(data, &digit_count);
    if (digit_count == 0)
        return "0";
    bool is_negative = oi_is_negative(data);
    char *buffer = (char *)(malloc(digit_count + 1 + (is_negative ? 1 : 0)));
    char *digit_start = buffer;
    if (is_negative)
      {
        digit_start[0] = '-';
        ++digit_start;
      }
    oi_write_decimal_digits(data, digit_start);
    digit_start[digit_count] = 0;
    std::string result = buffer;
    free(buffer);
    return result;
  }

int JSONIntegerValue::getInt(void) const
  {
    long int result;
    verdict the_verdict = oi_to_long_int(data, &result);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw("Overflow in JSONIntegerValue::getInt().");
    if ((result >= (long int)INT_MAX) || (result < (long int)INT_MIN))
        throw("Overflow in JSONIntegerValue::getInt().");
    return (int)result;
  }

long int JSONIntegerValue::getLongInt(void) const
  {
    long int result;
    verdict the_verdict = oi_to_long_int(data, &result);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw("Overflow in JSONIntegerValue::getLongInt().");
    return result;
  }

unsigned long int JSONIntegerValue::getUnsignedLongInt(void) const
  {
    unsigned long int result;
    verdict the_verdict = oi_to_unsigned_long_int(data, &result);
    if (the_verdict != MISSION_ACCOMPLISHED)
        throw("Overflow in JSONIntegerValue::getUnsignedLongInt().");
    return result;
  }

void JSONIntegerValue::write(JSONHandler *handler) const
  {
    size_t digit_count;
    oi_decimal_digit_count(data, &digit_count);
    if (digit_count == 0)
      {
        handler->number_value("0");
        return;
      }
    bool is_negative = oi_is_negative(data);
    char *buffer = (char *)(malloc(digit_count + 1 + (is_negative ? 1 : 0)));
    char *digit_start = buffer;
    if (is_negative)
      {
        digit_start[0] = '-';
        ++digit_start;
      }
    oi_write_decimal_digits(data, digit_start);
    digit_start[digit_count] = 0;
    handler->number_value(buffer);
    free(buffer);
  }

JSONIntegerValue *JSONIntegerValue::integer_value(void)
  {
    return this;
  }

const JSONIntegerValue *JSONIntegerValue::integer_value(void) const
  {
    return this;
  }

JSONValue *JSONIntegerValue::clone(void) const
  {
    return new JSONIntegerValue(data);
  }

bool JSONIntegerValue::is_equal_to(const JSONValue *other) const
  {
    const JSONIntegerValue *other_integer_value = other->integer_value();
    if (other_integer_value == NULL)
        return false;
    return oi_equal(getData(), other_integer_value->getData());
  }


JSONRationalValue::JSONRationalValue(o_integer init_mantissa_whole_part,
        o_integer init_mantissa_fraction_numerator,
        size_t init_mantissa_fraction_digit_count, o_integer init_exponent,
        bool init_show_exponent, bool init_exponent_plus,
        size_t init_exponent_prefix_zero_count)
  {
    mantissa_whole_part = init_mantissa_whole_part;
    mantissa_fraction_numerator = init_mantissa_fraction_numerator;
    mantissa_fraction_digit_count = init_mantissa_fraction_digit_count;
    exponent = init_exponent;
    show_exponent = init_show_exponent;
    exponent_plus = init_exponent_plus;
    exponent_prefix_zero_count = init_exponent_prefix_zero_count;
    oi_add_reference(mantissa_whole_part);
    oi_add_reference(mantissa_fraction_numerator);
    oi_add_reference(exponent);
  }

JSONRationalValue::JSONRationalValue(double init_double, int precision)
  {
    char buffer[200];
    char scratch_buffer[200];
    floating_point_to_full_json(init_double, &(buffer[0]), &(scratch_buffer[0]),
                                "%.*e", precision);
    const char *start_mantissa_whole = &(buffer[0]);
    if (*start_mantissa_whole == '-')
        ++start_mantissa_whole;
    const char *decimal_point = start_mantissa_whole;
    do
      {
        assert((*decimal_point >= '0') && (*decimal_point <= '9'));
        ++decimal_point;
      } while (*decimal_point != '.');
    oi_create_from_decimal_ascii(mantissa_whole_part,
            decimal_point - start_mantissa_whole, start_mantissa_whole,
            (buffer[0] == '-'));
    assert(!oi_out_of_memory(mantissa_whole_part));

    const char *exponent_marker = decimal_point + 1;
    while (*exponent_marker != 'e')
      {
        assert((*exponent_marker >= '0') && (*exponent_marker <= '9'));
        ++exponent_marker;
      }
    oi_create_from_decimal_ascii(mantissa_fraction_numerator,
            exponent_marker - (decimal_point + 1), (decimal_point + 1), false);
    assert(!oi_out_of_memory(mantissa_fraction_numerator));
    mantissa_fraction_digit_count = exponent_marker - (decimal_point + 1);

    const char *exponent_start = exponent_marker + 1;
    assert((*exponent_start == '-') || (*exponent_start == '+'));
    ++exponent_start;
    oi_create_from_decimal_ascii(exponent, strlen(exponent_start),
                                 exponent_start, (exponent_marker[1] == '-'));
    assert(!oi_out_of_memory(exponent));
    show_exponent = !(oi_equal(exponent, oi_zero));
    exponent_plus = true;
    exponent_prefix_zero_count = 0;
    while (*exponent_start == '0')
      {
        ++exponent_prefix_zero_count;
        ++exponent_start;
      }
  }

JSONRationalValue::~JSONRationalValue(void)
  {
    oi_remove_reference(mantissa_whole_part);
    oi_remove_reference(mantissa_fraction_numerator);
    oi_remove_reference(exponent);
  }

JSONValue::Kind JSONRationalValue::kind(void) const
  {
    return JVK_RATIONAL;
  }

o_integer JSONRationalValue::getMantissaWholePart(void) const
  {
    return mantissa_whole_part;
  }

o_integer JSONRationalValue::getMantissaFractionNumerator(void) const
  {
    return mantissa_fraction_numerator;
  }

size_t JSONRationalValue::getMantissaFractionDigitCount(void) const
  {
    return mantissa_fraction_digit_count;
  }

o_integer JSONRationalValue::getExponent(void) const
  {
    return exponent;
  }

std::string JSONRationalValue::getText(void) const
  {
    std::stringstream stream;
    JSONStreamWriter writer(stream);
    write(&writer);
    return stream.str();
  }

double JSONRationalValue::getDouble(void) const
  {
    std::stringstream stream;
    JSONStreamWriter writer(stream);
    write(&writer);
    return strtod(stream.str().c_str(), NULL);
  }

float JSONRationalValue::getFloat(void) const
  {
    return (float)(getDouble());
  }

bool JSONRationalValue::isInteger(void) const
  {
    size_t non_zero_mantissa_fraction_digit_count =
            mantissa_fraction_digit_count;
    o_integer remainder = mantissa_fraction_numerator;
    oi_add_reference(remainder);
    o_integer ten_oi;
    oi_create_from_size_t(ten_oi, 10);
    while (non_zero_mantissa_fraction_digit_count > 0)
      {
        size_t remainder_digit_count;
        oi_decimal_digit_count(remainder, &remainder_digit_count);
        if (remainder_digit_count == 0)
          {
            non_zero_mantissa_fraction_digit_count = 0;
            break;
          }
        o_integer new_remainder;
        o_integer this_digit;
        oi_divide(new_remainder, remainder, ten_oi, &this_digit);
        oi_remove_reference(remainder);
        remainder = new_remainder;
        bool is_non_zero = !(oi_equal(this_digit, oi_zero));
        oi_remove_reference(this_digit);
        if (is_non_zero)
            break;
        --non_zero_mantissa_fraction_digit_count;
      }
    oi_remove_reference(ten_oi);
    oi_remove_reference(remainder);
    o_integer mantissa_fraction_digit_count_oi;
    oi_create_from_size_t(mantissa_fraction_digit_count_oi,
                          non_zero_mantissa_fraction_digit_count);
    o_integer digits_after_decimal_point;
    oi_subtract(digits_after_decimal_point, mantissa_fraction_digit_count_oi,
                exponent);
    oi_remove_reference(mantissa_fraction_digit_count_oi);
    bool result = !(oi_is_negative(digits_after_decimal_point));
    oi_remove_reference(digits_after_decimal_point);
    return result;
  }

o_integer JSONRationalValue::getInteger(void) const
  {
    o_integer result;
    result = mantissa_whole_part;
    oi_add_reference(result);
    size_t digits_left = mantissa_fraction_digit_count;
    o_integer ten_oi;
    oi_create_from_size_t(ten_oi, 10);
    while (digits_left > 0)
      {
        o_integer new_result;
        oi_multiply(new_result, result, ten_oi);
        oi_remove_reference(result);
        result = new_result;
        --digits_left;
      }

    o_integer the_sum;
    oi_add(the_sum, result, mantissa_fraction_numerator);
    oi_remove_reference(result);
    result = the_sum;

    o_integer digits_oi;
    oi_create_from_size_t(digits_oi, mantissa_fraction_digit_count);
    o_integer remaining_exponent;
    oi_subtract(remaining_exponent, exponent, digits_oi);
    oi_remove_reference(digits_oi);

    while (oi_less_than(oi_zero, remaining_exponent))
      {
        o_integer new_result;
        oi_multiply(new_result, result, ten_oi);
        oi_remove_reference(result);
        result = new_result;

        o_integer new_exponent;
        oi_subtract(new_exponent, remaining_exponent, oi_one);
        oi_remove_reference(remaining_exponent);
        remaining_exponent = new_exponent;
      }

    while (oi_less_than(remaining_exponent, oi_zero))
      {
        o_integer new_result;
        o_integer this_digit;
        oi_divide(new_result, result, ten_oi, &this_digit);
        assert(oi_equal(this_digit, oi_zero));
        oi_remove_reference(this_digit);
        oi_remove_reference(result);
        result = new_result;

        o_integer new_exponent;
        oi_add(new_exponent, remaining_exponent, oi_one);
        oi_remove_reference(remaining_exponent);
        remaining_exponent = new_exponent;
      }

    oi_remove_reference(remaining_exponent);
    oi_remove_reference(ten_oi);

    return result;
  }

int JSONRationalValue::getInt(void) const
  {
    o_integer the_oi = getInteger();
    long int result;
    oi_to_long_int(the_oi, &result);
    oi_remove_reference(the_oi);
    return (int)result;
  }

long int JSONRationalValue::getLongInt(void) const
  {
    o_integer the_oi = getInteger();
    long int result;
    oi_to_long_int(the_oi, &result);
    oi_remove_reference(the_oi);
    return result;
  }

unsigned long int JSONRationalValue::getUnsignedLongInt(void) const
  {
    o_integer the_oi = getInteger();
    unsigned long int result;
    oi_to_unsigned_long_int(the_oi, &result);
    oi_remove_reference(the_oi);
    return result;
  }

void JSONRationalValue::write(JSONHandler *handler) const
  {
    size_t mantissa_whole_digit_count;
    oi_decimal_digit_count(mantissa_whole_part, &mantissa_whole_digit_count);
    size_t exponent_digits;
    oi_decimal_digit_count(exponent, &exponent_digits);
    char *buffer = (char *)(malloc(
            mantissa_whole_digit_count + mantissa_fraction_digit_count +
            exponent_prefix_zero_count + exponent_digits + 7));
    char *follow = buffer;
    if (mantissa_whole_digit_count > 0)
      {
        if (oi_is_negative(mantissa_whole_part))
          {
            *follow = '-';
            ++follow;
          }
        oi_write_decimal_digits(mantissa_whole_part, follow);
        follow += mantissa_whole_digit_count;
      }
    else
      {
        if (oi_is_negative(mantissa_fraction_numerator))
          {
            *follow = '-';
            ++follow;
          }
        *follow = '0';
        ++follow;
      }
    if (mantissa_fraction_digit_count > 0)
      {
        *follow = '.';
        ++follow;
        size_t non_zero_digits;
        oi_decimal_digit_count(mantissa_fraction_numerator, &non_zero_digits);
        assert(non_zero_digits <= mantissa_fraction_digit_count);
        size_t zero_count = (mantissa_fraction_digit_count - non_zero_digits);
        while (zero_count > 0)
          {
            *follow = '0';
            ++follow;
            --zero_count;
          }
        oi_write_decimal_digits(mantissa_fraction_numerator, follow);
        follow += non_zero_digits;
      }
    if (show_exponent)
      {
        *follow = 'e';
        ++follow;
        if (oi_is_negative(exponent))
          {
            *follow = '-';
            ++follow;
          }
        else if (exponent_plus)
          {
            *follow = '+';
            ++follow;
          }
        size_t exponent_zeros_left = exponent_prefix_zero_count;
        while (exponent_zeros_left > 0)
          {
            *follow = '0';
            ++follow;
            --exponent_zeros_left;
          }
        if (exponent_digits > 0)
          {
            oi_write_decimal_digits(exponent, follow);
            follow += exponent_digits;
          }
      }
    *follow = 0;
    handler->number_value(buffer);
    free(buffer);
  }

JSONRationalValue *JSONRationalValue::rational_value(void)
  {
    return this;
  }

const JSONRationalValue *JSONRationalValue::rational_value(void) const
  {
    return this;
  }

JSONValue *JSONRationalValue::clone(void) const
  {
    return new JSONRationalValue(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, show_exponent, exponent_plus, exponent_prefix_zero_count);
  }

bool JSONRationalValue::is_equal_to(const JSONValue *other) const
  {
    const JSONRationalValue *other_rational_value = other->rational_value();
    if (other_rational_value == NULL)
        return false;
    if (!(oi_equal(getExponent(), other_rational_value->getExponent())))
        return false;
    if (!(oi_equal(getMantissaWholePart(),
                   other_rational_value->getMantissaWholePart())))
      {
        return false;
      }
    if (getMantissaFractionDigitCount() !=
        other_rational_value->getMantissaFractionDigitCount())
      {
        return false;
      }
    return oi_equal(getMantissaFractionNumerator(),
                    other_rational_value->getMantissaFractionNumerator());
  }

std::string JSONRationalValue::getText(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    std::stringstream stream;
    JSONStreamWriter writer(stream);
    writer.number_value(mantissa_whole_part, mantissa_fraction_numerator,
                        mantissa_fraction_digit_count, exponent);
    return stream.str().c_str();
  }

double JSONRationalValue::getDouble(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    std::stringstream stream;
    JSONStreamWriter writer(stream);
    writer.number_value(mantissa_whole_part, mantissa_fraction_numerator,
                        mantissa_fraction_digit_count, exponent);
    return strtod(stream.str().c_str(), NULL);
  }


JSONTrueValue::JSONTrueValue(void)
  {
  }

JSONTrueValue::~JSONTrueValue(void)
  {
  }

JSONValue::Kind JSONTrueValue::kind(void) const
  {
    return JVK_TRUE;
  }

void JSONTrueValue::write(JSONHandler *handler) const
  {
    handler->true_value();
  }

JSONTrueValue *JSONTrueValue::true_value(void)
  {
    return this;
  }

const JSONTrueValue *JSONTrueValue::true_value(void) const
  {
    return this;
  }

JSONValue *JSONTrueValue::clone(void) const
  {
    return new JSONTrueValue();
  }

bool JSONTrueValue::is_equal_to(const JSONValue *other) const
  {
    return (other->true_value() != NULL);
  }


JSONFalseValue::JSONFalseValue(void)
  {
  }

JSONFalseValue::~JSONFalseValue(void)
  {
  }

JSONValue::Kind JSONFalseValue::kind(void) const
  {
    return JVK_FALSE;
  }

void JSONFalseValue::write(JSONHandler *handler) const
  {
    handler->false_value();
  }

JSONFalseValue *JSONFalseValue::false_value(void)
  {
    return this;
  }

const JSONFalseValue *JSONFalseValue::false_value(void) const
  {
    return this;
  }

JSONValue *JSONFalseValue::clone(void) const
  {
    return new JSONFalseValue();
  }

bool JSONFalseValue::is_equal_to(const JSONValue *other) const
  {
    return (other->false_value() != NULL);
  }


JSONNullValue::JSONNullValue(void)
  {
  }

JSONNullValue::~JSONNullValue(void)
  {
  }

JSONValue::Kind JSONNullValue::kind(void) const
  {
    return JVK_NULL;
  }

void JSONNullValue::write(JSONHandler *handler) const
  {
    handler->null_value();
  }

JSONNullValue *JSONNullValue::null_value(void)
  {
    return this;
  }

const JSONNullValue *JSONNullValue::null_value(void) const
  {
    return this;
  }

JSONValue *JSONNullValue::clone(void) const
  {
    return new JSONNullValue();
  }

bool JSONNullValue::is_equal_to(const JSONValue *other) const
  {
    return (other->null_value() != NULL);
  }


JSONObjectValue::JSONObjectValue(void)
  {
    index = create_string_index();
  }

JSONObjectValue::~JSONObjectValue(void)
  {
    size_t value_count = values.size();
    for (size_t value_num = 0; value_num < value_count; ++value_num)
        values[value_num]->remove_reference();
    destroy_string_index(index);
  }

JSONValue::Kind JSONObjectValue::kind(void) const
  {
    return JVK_OBJECT;
  }

size_t JSONObjectValue::componentCount(void) const
  {
    return values.size();
  }

const char *JSONObjectValue::componentKey(size_t component_num) const
  {
    assert(keys.size() == values.size());
    assert(component_num < values.size());
    return keys[component_num].c_str();
  }

JSONValue *JSONObjectValue::componentValue(size_t component_num)
  {
    assert(keys.size() == values.size());
    assert(component_num < values.size());
    return values[component_num];
  }

const JSONValue *JSONObjectValue::componentValue(size_t component_num) const
  {
    assert(keys.size() == values.size());
    assert(component_num < values.size());
    return values[component_num];
  }

JSONValue *JSONObjectValue::lookup(const char *field_name)
  {
    return (JSONValue *)(lookup_in_string_index(index, field_name));
  }

const JSONValue *JSONObjectValue::lookup(const char *field_name) const
  {
    return (const JSONValue *)(lookup_in_string_index(index, field_name));
  }

void JSONObjectValue::write(JSONHandler *handler) const
  {
    handler->start_object();
    size_t count = keys.size();
    assert(count == values.size());
    for (size_t num = 0; num < count; ++num)
      {
        handler->start_pair(keys[num].c_str());
        values[num]->write(handler);
      }
    handler->finish_object();
  }

JSONObjectValue *JSONObjectValue::object_value(void)
  {
    return this;
  }

const JSONObjectValue *JSONObjectValue::object_value(void) const
  {
    return this;
  }

JSONValue *JSONObjectValue::clone(void) const
  {
    JSONObjectValue *result = new JSONObjectValue();
    size_t count = keys.size();
    assert(count == values.size());
    for (size_t num = 0; num < count; ++num)
        result->appendPair(keys[num].c_str(), values[num]);
    return result;
  }

bool JSONObjectValue::is_equal_to(const JSONValue *other) const
  {
    const JSONObjectValue *other_object_value = other->object_value();
    if (other_object_value == NULL)
        return false;

    size_t local_count = componentCount();
    for (size_t local_num = 0; local_num < local_count; ++local_num)
      {
        const char *key = componentKey(local_num);
        const JSONValue *local_value = componentValue(local_num);
        const JSONValue *other_value = other_object_value->lookup(key);
        if ((other_value == NULL) || (!(local_value->is_equal_to(other_value))))
            return false;
      }

    size_t other_count = other_object_value->componentCount();
    for (size_t other_num = 0; other_num < other_count; ++other_num)
      {
        if (lookup(other_object_value->componentKey(other_num)) == NULL)
            return false;
      }
    return true;
  }

void JSONObjectValue::appendPair(const char *key, JSONValue *new_component)
  {
    assert(key != NULL);
    assert(new_component != NULL);

    assert(keys.size() == values.size());
    keys.push_back(key);
    values.push_back(new_component);
    enter_into_string_index(index, key, new_component);
    new_component->add_reference();
  }

void JSONObjectValue::setField(const char *key, JSONValue *new_component)
  {
    assert(key != NULL);
    assert(new_component != NULL);

    JSONValue *old_field = lookup(key);
    if (old_field == NULL)
      {
        appendPair(key, new_component);
      }
    else
      {
        size_t count = keys.size();
        assert(count == values.size());
        for (size_t num = 0; num < count; ++num)
          {
            if (strcmp(keys[num].c_str(), key) == 0)
              {
                values[num] = new_component;
                break;
              }
          }
        enter_into_string_index(index, key, new_component);
        new_component->add_reference();
        old_field->remove_reference();
      }
  }

void JSONObjectValue::clearField(const char *key)
  {
    assert(key != NULL);

    JSONValue *old_field = lookup(key);
    if (old_field == NULL)
        return;
    size_t count = keys.size();
    assert(count == values.size());
    for (size_t num = 0; num < count; ++num)
      {
        if (strcmp(keys[num].c_str(), key) == 0)
          {
            keys.erase(keys.begin() + num, keys.begin() + num + 1);
            values.erase(values.begin() + num, values.begin() + num + 1);
            break;
          }
      }
    remove_from_string_index(index, key);
    old_field->remove_reference();
  }

void JSONObjectValue::clearField(size_t field_num)
  {
    assert(field_num < keys.size());
    assert(field_num < values.size());
    remove_from_string_index(index, keys[field_num].c_str());
    values[field_num]->remove_reference();
    keys.erase(keys.begin() + field_num, keys.begin() + field_num + 1);
    values.erase(values.begin() + field_num,
                 values.begin() + field_num + 1);
  }

struct JSONObjectValueSortElement
  {
    size_t index;
    const char *key;

    static int compare(const void *left, const void *right)
      {
        JSONObjectValueSortElement *typed_left =
                (JSONObjectValueSortElement *)left;
        JSONObjectValueSortElement *typed_right =
                (JSONObjectValueSortElement *)right;
        int result = strcmp(typed_left->key, typed_right->key);
        if (result != 0)
            return result;
        return ((typed_left->index == typed_right->index) ? 0 :
                ((typed_left->index < typed_right->index) ? 1 : -1));
      }
  };

void JSONObjectValue::sortKeys(void)
  {
    size_t count = keys.size();
    assert(count == values.size());
    if (count == 0)
        return;

    JSONObjectValueSortElement *to_sort = new JSONObjectValueSortElement[count];
    for (size_t num = 0; num < count; ++num)
      {
        to_sort[num].index = num;
        to_sort[num].key = keys[num].c_str();
      }
    qsort(to_sort, count, sizeof(JSONObjectValueSortElement),
          &JSONObjectValueSortElement::compare);
    std::string *new_keys = new std::string[count];
    JSONValue **new_values = new JSONValue *[count];
    for (size_t num = 0; num < count; ++num)
      {
        size_t old_index = to_sort[num].index;
        new_keys[num] = keys[old_index];
        new_values[num] = values[old_index];
      }
    delete[] to_sort;
    keys.clear();
    values.clear();
    destroy_string_index(index);
    index = create_string_index();
    for (size_t num = 0; num < count; ++num)
      {
        keys.push_back(new_keys[num]);
        values.push_back(new_values[num]);
        enter_into_string_index(index, new_keys[num].c_str(), new_values[num]);
      }
    delete[] new_keys;
    delete[] new_values;
  }


JSONArrayValue::JSONArrayValue(void)
  {
  }

JSONArrayValue::~JSONArrayValue(void)
  {
    size_t value_count = values.size();
    for (size_t value_num = 0; value_num < value_count; ++value_num)
        values[value_num]->remove_reference();
  }

JSONValue::Kind JSONArrayValue::kind(void) const
  {
    return JVK_ARRAY;
  }

size_t JSONArrayValue::componentCount(void) const
  {
    return values.size();
  }

JSONValue *JSONArrayValue::component(size_t component_num)
  {
    assert(component_num < values.size());
    return values[component_num];
  }

const JSONValue *JSONArrayValue::component(size_t component_num) const
  {
    assert(component_num < values.size());
    return values[component_num];
  }

void JSONArrayValue::write(JSONHandler *handler) const
  {
    handler->start_array();
    size_t count = values.size();
    for (size_t num = 0; num < count; ++num)
        values[num]->write(handler);
    handler->finish_array();
  }

JSONArrayValue *JSONArrayValue::array_value(void)
  {
    return this;
  }

const JSONArrayValue *JSONArrayValue::array_value(void) const
  {
    return this;
  }

JSONValue *JSONArrayValue::clone(void) const
  {
    JSONArrayValue *result = new JSONArrayValue();
    size_t count = values.size();
    for (size_t num = 0; num < count; ++num)
        result->appendComponent(values[num]);
    return result;
  }

bool JSONArrayValue::is_equal_to(const JSONValue *other) const
  {
    const JSONArrayValue *other_array_value = other->array_value();
    if (other_array_value == NULL)
        return false;
    size_t count = componentCount();
    if (other_array_value->componentCount() != count)
        return false;
    for (size_t num = 0; num < count; ++num)
      {
        if (!(component(num)->is_equal_to(other_array_value->component(num))))
            return false;
      }
    return true;
  }

void JSONArrayValue::appendComponent(JSONValue *new_component)
  {
    assert(new_component != NULL);
    values.push_back(new_component);
    new_component->add_reference();
  }


void JSONValueHandler::handle_value(JSONValue *item)
  {
    if (stack.size() == 0)
      {
        if (result != NULL)
            result->remove_reference();
        result = item;
        new_value(result);
        handle_result(result);
      }
    else
      {
        JSONValue *top = stack[stack.size() - 1];
        if (top->kind() == JSONValue::JVK_ARRAY)
          {
            ((JSONArrayValue *)top)->appendComponent(item);
          }
        else
          {
            assert(top->kind() == JSONValue::JVK_OBJECT);
            ((JSONObjectValue *)top)->appendPair(label.c_str(), item);
          }
        item->remove_reference();
      }
  }

void JSONValueHandler::set_what(const char *what)
  {
  }

JSONValueHandler::JSONValueHandler(void) : result(NULL)
  {
  }

JSONValueHandler::JSONValueHandler(const char *what) : result(NULL)
  {
  }

JSONValueHandler::~JSONValueHandler(void)
  {
    if (result != NULL)
        result->remove_reference();
    for (size_t num = 0; num < stack.size(); ++num)
        stack[num]->remove_reference();
  }

void JSONValueHandler::new_value(JSONValue *item)
  {
  }

void JSONValueHandler::handle_result(JSONValue *item)
  {
  }

void JSONValueHandler::true_value(void)
  {
    handle_value(new JSONTrueValue());
  }

void JSONValueHandler::false_value(void)
  {
    handle_value(new JSONFalseValue());
  }

void JSONValueHandler::boolean_value(bool to_write)
  {
    if (to_write)
        true_value();
    else
        false_value();
  }

void JSONValueHandler::null_value(void)
  {
    handle_value(new JSONNullValue());
  }

void JSONValueHandler::string_value(const char *to_write)
  {
    handle_value(new JSONStringValue(to_write));
  }

void JSONValueHandler::string_value(const std::string &to_write)
  {
    string_value(to_write.c_str());
  }

void JSONValueHandler::number_value(int to_write)
  {
    o_integer the_oi;
    oi_create_from_long_int(the_oi, to_write);
    number_value(the_oi);
    oi_remove_reference(the_oi);
  }

void JSONValueHandler::number_value(unsigned int to_write)
  {
    o_integer the_oi;
    oi_create_from_unsigned_long_int(the_oi, to_write);
    number_value(the_oi);
    oi_remove_reference(the_oi);
  }

void JSONValueHandler::number_value(long to_write)
  {
    o_integer the_oi;
    oi_create_from_long_int(the_oi, to_write);
    number_value(the_oi);
    oi_remove_reference(the_oi);
  }

void JSONValueHandler::number_value(unsigned long to_write)
  {
    o_integer the_oi;
    oi_create_from_unsigned_long_int(the_oi, to_write);
    number_value(the_oi);
    oi_remove_reference(the_oi);
  }

void JSONValueHandler::number_value(o_integer to_write)
  {
    handle_value(new JSONIntegerValue(to_write));
  }

void JSONValueHandler::number_value(double to_write, int precision)
  {
    handle_value(new JSONRationalValue(to_write, precision));
  }

void JSONValueHandler::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent)
  {
    handle_value(new JSONRationalValue(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, !(oi_equal(exponent, oi_zero))));
  }

void JSONValueHandler::number_value(o_integer mantissa_whole_part,
        o_integer mantissa_fraction_numerator,
        size_t mantissa_fraction_digit_count, o_integer exponent,
        bool show_exponent, bool exponent_plus, size_t exponent_digit_count)
  {
    size_t core_exponent_digit_count;
    oi_decimal_digit_count(exponent, &core_exponent_digit_count);
    handle_value(new JSONRationalValue(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, (exponent_digit_count > 0), exponent_plus,
            (exponent_digit_count -  core_exponent_digit_count)));
  }

void JSONValueHandler::number_value(const char *number_text)
  {
    const char *follow = number_text;
    bool mantissa_is_negative = false;
    if (*follow == '-')
      {
        mantissa_is_negative = true;
        ++follow;
      }
    const char *mantissa_start = follow;
    while ((*follow >= '0') && (*follow <= '9'))
        ++follow;
    o_integer mantissa_whole_part;
    oi_create_from_decimal_ascii(mantissa_whole_part, follow - mantissa_start,
                                 mantissa_start, mantissa_is_negative);
    if (*follow == 0)
      {
        number_value(mantissa_whole_part);
        oi_remove_reference(mantissa_whole_part);
        return;
      }
    o_integer mantissa_fraction_numerator;
    size_t mantissa_fraction_digit_count;
    if (*follow == '.')
      {
        ++follow;
        const char *start_fraction = follow;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
        mantissa_fraction_digit_count = follow - start_fraction;
        oi_create_from_decimal_ascii(mantissa_fraction_numerator,
                mantissa_fraction_digit_count, start_fraction,
                (mantissa_is_negative &&
                 oi_equal(mantissa_whole_part, oi_zero)));
      }
    else
      {
        mantissa_fraction_numerator = oi_zero;
        oi_add_reference(mantissa_fraction_numerator);
        mantissa_fraction_digit_count = 0;
      }
    o_integer exponent;
    bool show_exponent = false;
    bool exponent_plus = false;
    size_t exponent_prefix_zero_count = 0;
    if ((*follow == 'e') || (*follow == 'E'))
      {
        show_exponent = true;
        ++follow;
        bool exponent_is_negative = false;
        if (*follow == '-')
          {
            exponent_is_negative = true;
            ++follow;
          }
        else if (*follow == '+')
          {
            exponent_plus = true;
            ++follow;
          }
        const char *start_exponent = follow;
        while (*follow == '0')
            ++follow;
        exponent_prefix_zero_count = follow - start_exponent;
        while ((*follow >= '0') && (*follow <= '9'))
            ++follow;
        oi_create_from_decimal_ascii(exponent, follow - start_exponent,
                                     start_exponent, exponent_is_negative);
      }
    else
      {
        exponent = oi_zero;
        oi_add_reference(exponent);
      }
    assert(*follow == 0);
    handle_value(new JSONRationalValue(mantissa_whole_part,
            mantissa_fraction_numerator, mantissa_fraction_digit_count,
            exponent, show_exponent, exponent_plus,
            exponent_prefix_zero_count));
    oi_remove_reference(mantissa_whole_part);
    oi_remove_reference(mantissa_fraction_numerator);
    oi_remove_reference(exponent);
  }

void JSONValueHandler::start_object(void)
  {
    stack.push_back(new JSONObjectValue());
    label_stack.push_back(label);
  }

void JSONValueHandler::start_pair(const char *name)
  {
    label = name;
  }

void JSONValueHandler::pair(const char *name, const char *value)
  {
    start_pair(name);
    string_value(value);
  }

void JSONValueHandler::pair(const char *name, const std::string &value)
  {
    start_pair(name);
    string_value(value);
  }

void JSONValueHandler::pair(const char *name, bool value)
  {
    start_pair(name);
    boolean_value(value);
  }

void JSONValueHandler::pair(const char *name, int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONValueHandler::pair(const char *name, unsigned int value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONValueHandler::pair(const char *name, long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONValueHandler::pair(const char *name, unsigned long value)
  {
    start_pair(name);
    number_value(value);
  }

void JSONValueHandler::pair(const char *name, double value, int precision)
  {
    start_pair(name);
    number_value(value, precision);
  }

void JSONValueHandler::finish_object(void)
  {
    assert(stack.size() > 0);
    assert(label_stack.size() == stack.size());
    JSONValue *item = stack[stack.size() - 1];
    assert(item->kind() == JSONValue::JVK_OBJECT);
    label = label_stack[label_stack.size() - 1];
    stack.pop_back();
    label_stack.pop_back();
    handle_value(item);
  }

void JSONValueHandler::start_array(void)
  {
    stack.push_back(new JSONArrayValue());
    label_stack.push_back(label);
  }

void JSONValueHandler::finish_array(void)
  {
    assert(stack.size() > 0);
    assert(label_stack.size() == stack.size());
    JSONValue *item = stack[stack.size() - 1];
    assert(item->kind() == JSONValue::JVK_ARRAY);
    label = label_stack[label_stack.size() - 1];
    stack.pop_back();
    label_stack.pop_back();
    handle_value(item);
  }

void JSONValueHandler::sort_keys(void)
  {
    if (stack.size() == 0)
        return;
    JSONObjectValue *the_object = stack[stack.size() - 1]->object_value();
    if (the_object == NULL)
        return;
    the_object->sortKeys();
  }

JSONValue *JSONValueHandler::getResult(void)
  {
    if (result != NULL)
        result->add_reference();
    return result;
  }


extern JSONValue *parse_json_value(JSONTextSource *source)
  {
    JSONValueHandler my_handler;
    parse_json_value(source, &my_handler);
    return my_handler.getResult();
  }

extern JSONValue *parse_json_value(FILE *fp, const char *file_name)
  {
    JSONValueHandler my_handler;
    parse_json_value(fp, file_name, &my_handler);
    return my_handler.getResult();
  }

extern JSONValue *parse_json_value(const char *text, const char *file_name)
  {
    JSONValueHandler my_handler;
    parse_json_value(text, file_name, &my_handler);
    return my_handler.getResult();
  }

extern JSONValue *parse_json_value(std::string text, const char *file_name)
  {
    JSONValueHandler my_handler;
    parse_json_value(text, file_name, &my_handler);
    return my_handler.getResult();
  }
