/* file "JSONRep.h" */

/* Copyright 2012-2018 SoundHound, Incorporated.  All rights reserved. */


#ifndef JSONREP_H
#define JSONREP_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <limits.h>
#include <sstream>
#include "JSONWriter.h"
#include "JSONParse.h"
extern "C"
  {
#include "o_integer.h"
#include "rational.h"
#include "string_index.h"
  };


class JSONStringValue;
class JSONIntegerValue;
class JSONRationalValue;
class JSONTrueValue;
class JSONFalseValue;
class JSONNullValue;
class JSONObjectValue;
class JSONArrayValue;

class JSONValue
  {
  private:
    size_t reference_count;

  protected:
    JSONValue(void) : reference_count(1)  { }

  public:
    virtual ~JSONValue(void);

    enum Kind
      {
        JVK_STRING,
        JVK_INTEGER,
        JVK_RATIONAL,
        JVK_TRUE,
        JVK_FALSE,
        JVK_NULL,
        JVK_OBJECT,
        JVK_ARRAY
      };

    virtual Kind kind(void) const = 0;
    virtual void write(JSONHandler *handler) const = 0;
    virtual JSONStringValue *string_value(void);
    virtual const JSONStringValue *string_value(void) const;
    virtual JSONIntegerValue *integer_value(void);
    virtual const JSONIntegerValue *integer_value(void) const;
    virtual JSONRationalValue *rational_value(void);
    virtual const JSONRationalValue *rational_value(void) const;
    virtual JSONTrueValue *true_value(void);
    virtual const JSONTrueValue *true_value(void) const;
    virtual JSONFalseValue *false_value(void);
    virtual const JSONFalseValue *false_value(void) const;
    virtual JSONNullValue *null_value(void);
    virtual const JSONNullValue *null_value(void) const;
    virtual JSONObjectValue *object_value(void);
    virtual const JSONObjectValue *object_value(void) const;
    virtual JSONArrayValue *array_value(void);
    virtual const JSONArrayValue *array_value(void) const;

    virtual JSONValue *clone(void) const = 0;
    virtual bool is_equal_to(const JSONValue *other) const = 0;

    inline void add_reference(void)
      {
        assert(reference_count > 0);
        ++reference_count;
      }
    inline void remove_reference(void)
      {
        assert(reference_count > 0);
        --reference_count;
        if (reference_count == 0)
            delete this;
      }
  };

class JSONStringValue : public JSONValue
  {
  private:
    char *data;

  public:
    JSONStringValue(const char *init_data);
    ~JSONStringValue(void);

    Kind kind(void) const;
    const char *getData(void) const;
    void write(JSONHandler *handler) const;
    JSONStringValue *string_value(void);
    const JSONStringValue *string_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;
  };

class JSONIntegerValue : public JSONValue
  {
  private:
    o_integer data;

  public:
    JSONIntegerValue(o_integer init_data);
    JSONIntegerValue(char init_data);
    JSONIntegerValue(signed char init_data);
    JSONIntegerValue(short init_data);
    JSONIntegerValue(int init_data);
    JSONIntegerValue(long init_data);
    JSONIntegerValue(unsigned char init_data);
    JSONIntegerValue(unsigned short init_data);
    JSONIntegerValue(unsigned int init_data);
    JSONIntegerValue(unsigned long init_data);
    ~JSONIntegerValue(void);

    Kind kind(void) const;
    o_integer getData(void) const;
    std::string getText(void) const;
    int getInt(void) const;
    long int getLongInt(void) const;
    unsigned long int getUnsignedLongInt(void) const;
    void write(JSONHandler *handler) const;
    JSONIntegerValue *integer_value(void);
    const JSONIntegerValue *integer_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;
  };

class JSONRationalValue : public JSONValue
  {
  private:
    o_integer mantissa_whole_part;
    o_integer mantissa_fraction_numerator;
    size_t mantissa_fraction_digit_count;
    o_integer exponent;
    bool show_exponent;
    bool exponent_plus;
    size_t exponent_prefix_zero_count;

  public:
    JSONRationalValue(o_integer init_mantissa_whole_part,
            o_integer init_mantissa_fraction_numerator,
            size_t init_mantissa_fraction_digit_count, o_integer init_exponent,
            bool init_show_exponent = true, bool init_exponent_plus = true,
            size_t init_exponent_prefix_zero_count = 0);
    JSONRationalValue(double init_double, int precision);
    ~JSONRationalValue(void);

    Kind kind(void) const;
    o_integer getMantissaWholePart(void) const;
    o_integer getMantissaFractionNumerator(void) const;
    size_t getMantissaFractionDigitCount(void) const;
    o_integer getExponent(void) const;
    std::string getText(void) const;
    double getDouble(void) const;
    float getFloat(void) const;
    bool isInteger(void) const;
    o_integer getInteger(void) const;
    int getInt(void) const;
    long int getLongInt(void) const;
    unsigned long int getUnsignedLongInt(void) const;
    void write(JSONHandler *handler) const;
    JSONRationalValue *rational_value(void);
    const JSONRationalValue *rational_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;

    static double getDouble(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent);
    static std::string getText(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent);
  };

class JSONTrueValue : public JSONValue
  {
  public:
    JSONTrueValue(void);
    ~JSONTrueValue(void);

    Kind kind(void) const;
    void write(JSONHandler *handler) const;
    JSONTrueValue *true_value(void);
    const JSONTrueValue *true_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;
  };

class JSONFalseValue : public JSONValue
  {
  public:
    JSONFalseValue(void);
    ~JSONFalseValue(void);

    Kind kind(void) const;
    void write(JSONHandler *handler) const;
    JSONFalseValue *false_value(void);
    const JSONFalseValue *false_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;
  };

class JSONNullValue : public JSONValue
  {
  public:
    JSONNullValue(void);
    ~JSONNullValue(void);

    Kind kind(void) const;
    void write(JSONHandler *handler) const;
    JSONNullValue *null_value(void);
    const JSONNullValue *null_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;
  };

class JSONObjectValue : public JSONValue
  {
  private:
    std::vector<std::string> keys;
    std::vector<JSONValue *> values;
    string_index *index;

  public:
    JSONObjectValue(void);
    ~JSONObjectValue(void);

    Kind kind(void) const;
    size_t componentCount(void) const;
    const char *componentKey(size_t component_num) const;
    JSONValue *componentValue(size_t component_num);
    const JSONValue *componentValue(size_t component_num) const;
    JSONValue *lookup(const char *field_name);
    const JSONValue *lookup(const char *field_name) const;

    void write(JSONHandler *handler) const;
    JSONObjectValue *object_value(void);
    const JSONObjectValue *object_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;

    void appendPair(const char *key, JSONValue *new_component);
    void setField(const char *key, JSONValue *new_component);
    void clearField(const char *key);
    void clearField(size_t field_num);

    void sortKeys(void);
  };

class JSONArrayValue : public JSONValue
  {
  private:
    std::vector<JSONValue *> values;

  public:
    JSONArrayValue(void);
    ~JSONArrayValue(void);

    Kind kind(void) const;
    size_t componentCount(void) const;
    JSONValue *component(size_t component_num);
    const JSONValue *component(size_t component_num) const;

    void write(JSONHandler *handler) const;
    JSONArrayValue *array_value(void);
    const JSONArrayValue *array_value(void) const;
    JSONValue *clone(void) const;
    bool is_equal_to(const JSONValue *other) const;

    void appendComponent(JSONValue *new_component);
  };


class JSONValueHandler : public JSONHandler
  {
  public:
    void handle_value(JSONValue *item);

  protected:
    void set_what(const char *what);

  public:
    JSONValueHandler(void);
    JSONValueHandler(const char *what);
    ~JSONValueHandler(void);

    JSONValue *result;
    std::vector<JSONValue *> stack;
    std::vector<std::string> label_stack;
    std::string label;

    virtual void new_value(JSONValue *item);
    virtual void handle_result(JSONValue *item);

    void true_value(void);
    void false_value(void);
    void boolean_value(bool to_write);
    void null_value(void);
    void string_value(const char *to_write);
    void string_value(const std::string &to_write);
    void number_value(int to_write);
    void number_value(unsigned int to_write);
    void number_value(long to_write);
    void number_value(unsigned long to_write);
    void number_value(o_integer to_write);
    void number_value(double to_write, int precision = DBL_DIG);
    void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent);
    void number_value(o_integer mantissa_whole_part,
            o_integer mantissa_fraction_numerator,
            size_t mantissa_fraction_digit_count, o_integer exponent,
            bool show_exponent, bool exponent_plus,
            size_t exponent_digit_count);
    void number_value(const char *number_text);
    void start_object(void);
    void start_pair(const char *name);
    void pair(const char *name, const char *value);
    void pair(const char *name, const std::string &value);
    void pair(const char *name, bool value);
    void pair(const char *name, int value);
    void pair(const char *name, unsigned int value);
    void pair(const char *name, long value);
    void pair(const char *name, unsigned long value);
    void pair(const char *name, double value, int precision = DBL_DIG);
    void finish_object(void);
    void start_array(void);
    void finish_array(void);

    void sort_keys(void);

    JSONValue *getResult(void);
  };


extern JSONValue *parse_json_value(JSONTextSource *source);
extern JSONValue *parse_json_value(FILE *fp, const char *file_name);
extern JSONValue *parse_json_value(const char *text, const char *file_name);
extern JSONValue *parse_json_value(std::string text, const char *file_name);


#endif /* JSONREP_H */
