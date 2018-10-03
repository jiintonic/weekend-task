/* file "RadioControlOtherFMBandsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioControlOtherFMBandsJSON.h"

#include "RadioControlOtherFMBandsJSON.h"


RadioControlOtherFMBandsJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

RadioControlOtherFMBandsJSON::TypeValueJSON &RadioControlOtherFMBandsJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlOtherFMBandsJSON::TypeValueJSON::fromJSONMinimum(JSONValue *json_value, bool ignore_extras)
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

void RadioControlOtherFMBandsJSON::TypeValueJSON::fromJSONMaximum(JSONValue *json_value, bool ignore_extras)
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

void RadioControlOtherFMBandsJSON::TypeValueJSON::fromJSONStep(JSONValue *json_value, bool ignore_extras)
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

RadioControlOtherFMBandsJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasMinimum(false),
        flagHasMaximum(false),
        flagHasStep(false)
  {
    extraIndex = create_string_index();
  }

RadioControlOtherFMBandsJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RadioControlOtherFMBandsJSON::TypeValueJSON::hasMinimum(void) const
  {
    return flagHasMinimum;
  }

double RadioControlOtherFMBandsJSON::TypeValueJSON::getMinimum(void)
  {
    assert(flagHasMinimum);
    if (textStoreMinimum != "")
      {
        return atof(textStoreMinimum.c_str());
      }
    return storeMinimum;
  }

const double RadioControlOtherFMBandsJSON::TypeValueJSON::getMinimum(void) const
  {
    assert(flagHasMinimum);
    if (textStoreMinimum != "")
      {
        return atof(textStoreMinimum.c_str());
      }
    return storeMinimum;
  }

std::string RadioControlOtherFMBandsJSON::TypeValueJSON::getMinimumAsText(void) const
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

bool RadioControlOtherFMBandsJSON::TypeValueJSON::hasMaximum(void) const
  {
    return flagHasMaximum;
  }

double RadioControlOtherFMBandsJSON::TypeValueJSON::getMaximum(void)
  {
    assert(flagHasMaximum);
    if (textStoreMaximum != "")
      {
        return atof(textStoreMaximum.c_str());
      }
    return storeMaximum;
  }

const double RadioControlOtherFMBandsJSON::TypeValueJSON::getMaximum(void) const
  {
    assert(flagHasMaximum);
    if (textStoreMaximum != "")
      {
        return atof(textStoreMaximum.c_str());
      }
    return storeMaximum;
  }

std::string RadioControlOtherFMBandsJSON::TypeValueJSON::getMaximumAsText(void) const
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

bool RadioControlOtherFMBandsJSON::TypeValueJSON::hasStep(void) const
  {
    return flagHasStep;
  }

double RadioControlOtherFMBandsJSON::TypeValueJSON::getStep(void)
  {
    assert(flagHasStep);
    if (textStoreStep != "")
      {
        return atof(textStoreStep.c_str());
      }
    return storeStep;
  }

const double RadioControlOtherFMBandsJSON::TypeValueJSON::getStep(void) const
  {
    assert(flagHasStep);
    if (textStoreStep != "")
      {
        return atof(textStoreStep.c_str());
      }
    return storeStep;
  }

std::string RadioControlOtherFMBandsJSON::TypeValueJSON::getStepAsText(void) const
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

RadioControlOtherFMBandsJSON::RadioControlOtherFMBandsJSON(const RadioControlOtherFMBandsJSON &)
  {
    assert(false);
  }

RadioControlOtherFMBandsJSON &RadioControlOtherFMBandsJSON::operator=(const RadioControlOtherFMBandsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RadioControlOtherFMBandsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of RadioControlOtherFMBandsJSON is not an array.");
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

RadioControlOtherFMBandsJSON::RadioControlOtherFMBandsJSON(void) :
        flagHasValue(false)
  {
  }

RadioControlOtherFMBandsJSON::~RadioControlOtherFMBandsJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num4 = 0; num4 < storeValue.size(); ++num4)
          {
            storeValue[num4]->remove_reference();
          }
      }
  }

bool RadioControlOtherFMBandsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t RadioControlOtherFMBandsJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

RadioControlOtherFMBandsJSON::TypeValueJSON * RadioControlOtherFMBandsJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const RadioControlOtherFMBandsJSON::TypeValueJSON * RadioControlOtherFMBandsJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< RadioControlOtherFMBandsJSON::TypeValueJSON * > RadioControlOtherFMBandsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< RadioControlOtherFMBandsJSON::TypeValueJSON * > RadioControlOtherFMBandsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

RadioControlOtherFMBandsJSON::TypeValueJSON *RadioControlOtherFMBandsJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
RadioControlOtherFMBandsJSON *RadioControlOtherFMBandsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioControlOtherFMBandsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioControlOtherFMBandsJSON>, RadioControlOtherFMBandsJSON *, bool> generator("Type RadioControlOtherFMBands", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
