/* file "ScientificNotationQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ScientificNotationQuantityJSON.h"

#include "ScientificNotationQuantityJSON.h"


ScientificNotationQuantityJSON::ScientificNotationQuantityJSON(const ScientificNotationQuantityJSON &)
  {
    assert(false);
  }

ScientificNotationQuantityJSON &ScientificNotationQuantityJSON::operator=(const ScientificNotationQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ScientificNotationQuantityJSON::extraValueToJSON(void) const
  {
    JSONValue *generated_rational_Value;
    if (((double)(long int)storeValue) == storeValue)
        generated_rational_Value = new JSONIntegerValue((long int)(storeValue));
    else
        generated_rational_Value = new JSONRationalValue(storeValue, DBL_DIG);
    return generated_rational_Value;
  }

void ScientificNotationQuantityJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of ScientificNotationQuantityJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

ScientificNotationQuantityJSON::ScientificNotationQuantityJSON(void) :
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

ScientificNotationQuantityJSON::~ScientificNotationQuantityJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ScientificNotationQuantityJSON::getQuantityKind(void) const
  {
    return "ScientificNotation";
  }

bool ScientificNotationQuantityJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double ScientificNotationQuantityJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double ScientificNotationQuantityJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string ScientificNotationQuantityJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

ScientificNotationQuantityJSON *ScientificNotationQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ScientificNotationQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ScientificNotationQuantityJSON>, ScientificNotationQuantityJSON *, bool> generator("Type ScientificNotationQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
