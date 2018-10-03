/* file "RadioControlOtherAMBandsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioControlOtherAMBandsJSON.h"

#include "RadioControlOtherAMBandsJSON.h"


RadioControlOtherAMBandsJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

RadioControlOtherAMBandsJSON::TypeValueJSON &RadioControlOtherAMBandsJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlOtherAMBandsJSON::TypeValueJSON::fromJSONMinimum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Minimum of TypeValueJSON is not a number.");
          }
      }
    setMinimumText(the_rational_text);
  }

void RadioControlOtherAMBandsJSON::TypeValueJSON::fromJSONMaximum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Maximum of TypeValueJSON is not a number.");
          }
      }
    setMaximumText(the_rational_text);
  }

void RadioControlOtherAMBandsJSON::TypeValueJSON::fromJSONStep(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Step of TypeValueJSON is not a number.");
          }
      }
    setStepText(the_rational_text);
  }

RadioControlOtherAMBandsJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasMinimum(false),
        flagHasMaximum(false),
        flagHasStep(false)
  {
    extraIndex = create_string_index();
  }

RadioControlOtherAMBandsJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RadioControlOtherAMBandsJSON::TypeValueJSON::hasMinimum(void) const
  {
    return flagHasMinimum;
  }

double RadioControlOtherAMBandsJSON::TypeValueJSON::getMinimum(void)
  {
    assert(flagHasMinimum);
    if (textStoreMinimum != "")
      {
        return atof(textStoreMinimum.c_str());
      }
    return storeMinimum;
  }

const double RadioControlOtherAMBandsJSON::TypeValueJSON::getMinimum(void) const
  {
    assert(flagHasMinimum);
    if (textStoreMinimum != "")
      {
        return atof(textStoreMinimum.c_str());
      }
    return storeMinimum;
  }

std::string RadioControlOtherAMBandsJSON::TypeValueJSON::getMinimumAsText(void) const
  {
    assert(flagHasMinimum);
    if (textStoreMinimum == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMinimum);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMinimum);
      }
  }

bool RadioControlOtherAMBandsJSON::TypeValueJSON::hasMaximum(void) const
  {
    return flagHasMaximum;
  }

double RadioControlOtherAMBandsJSON::TypeValueJSON::getMaximum(void)
  {
    assert(flagHasMaximum);
    if (textStoreMaximum != "")
      {
        return atof(textStoreMaximum.c_str());
      }
    return storeMaximum;
  }

const double RadioControlOtherAMBandsJSON::TypeValueJSON::getMaximum(void) const
  {
    assert(flagHasMaximum);
    if (textStoreMaximum != "")
      {
        return atof(textStoreMaximum.c_str());
      }
    return storeMaximum;
  }

std::string RadioControlOtherAMBandsJSON::TypeValueJSON::getMaximumAsText(void) const
  {
    assert(flagHasMaximum);
    if (textStoreMaximum == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaximum);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaximum);
      }
  }

bool RadioControlOtherAMBandsJSON::TypeValueJSON::hasStep(void) const
  {
    return flagHasStep;
  }

double RadioControlOtherAMBandsJSON::TypeValueJSON::getStep(void)
  {
    assert(flagHasStep);
    if (textStoreStep != "")
      {
        return atof(textStoreStep.c_str());
      }
    return storeStep;
  }

const double RadioControlOtherAMBandsJSON::TypeValueJSON::getStep(void) const
  {
    assert(flagHasStep);
    if (textStoreStep != "")
      {
        return atof(textStoreStep.c_str());
      }
    return storeStep;
  }

std::string RadioControlOtherAMBandsJSON::TypeValueJSON::getStepAsText(void) const
  {
    assert(flagHasStep);
    if (textStoreStep == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStep);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStep);
      }
  }

RadioControlOtherAMBandsJSON::RadioControlOtherAMBandsJSON(const RadioControlOtherAMBandsJSON &)
  {
    assert(false);
  }

RadioControlOtherAMBandsJSON &RadioControlOtherAMBandsJSON::operator=(const RadioControlOtherAMBandsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlOtherAMBandsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of RadioControlOtherAMBandsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    initValue();
    for (size_t num2 = 0; num2 < vector_Value1.size(); ++num2)
        appendValue(vector_Value1[num2]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

RadioControlOtherAMBandsJSON::RadioControlOtherAMBandsJSON(void) :
        flagHasValue(false)
  {
  }

RadioControlOtherAMBandsJSON::~RadioControlOtherAMBandsJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool RadioControlOtherAMBandsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t RadioControlOtherAMBandsJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

RadioControlOtherAMBandsJSON::TypeValueJSON * RadioControlOtherAMBandsJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const RadioControlOtherAMBandsJSON::TypeValueJSON * RadioControlOtherAMBandsJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< RadioControlOtherAMBandsJSON::TypeValueJSON * > RadioControlOtherAMBandsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< RadioControlOtherAMBandsJSON::TypeValueJSON * > RadioControlOtherAMBandsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

RadioControlOtherAMBandsJSON::TypeValueJSON *RadioControlOtherAMBandsJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
RadioControlOtherAMBandsJSON *RadioControlOtherAMBandsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioControlOtherAMBandsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioControlOtherAMBandsJSON>, RadioControlOtherAMBandsJSON *, bool> generator("Type RadioControlOtherAMBands", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
