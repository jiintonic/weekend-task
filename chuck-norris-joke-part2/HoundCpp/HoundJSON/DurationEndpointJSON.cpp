/* file "DurationEndpointJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DurationEndpointJSON.h"

#include "DurationEndpointJSON.h"


DurationEndpointJSON::DurationEndpointJSON(const DurationEndpointJSON &)
  {
    assert(false);
  }

DurationEndpointJSON &DurationEndpointJSON::operator=(const DurationEndpointJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DurationEndpointJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of DurationEndpointJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

void DurationEndpointJSON::fromJSONInclusive(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field Inclusive of DurationEndpointJSON is not true for false.");
          }
      }
    setInclusive(the_bool);
  }

DurationEndpointJSON::DurationEndpointJSON(void) :
        flagHasValue(false),
        flagHasInclusive(false)
  {
    extraIndex = create_string_index();
  }

DurationEndpointJSON::~DurationEndpointJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DurationEndpointJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double DurationEndpointJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double DurationEndpointJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string DurationEndpointJSON::getValueAsText(void) const
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

bool DurationEndpointJSON::hasInclusive(void) const
  {
    return flagHasInclusive;
  }

bool DurationEndpointJSON::getInclusive(void)
  {
    assert(flagHasInclusive);
    return storeInclusive;
  }

const bool DurationEndpointJSON::getInclusive(void) const
  {
    assert(flagHasInclusive);
    return storeInclusive;
  }

DurationEndpointJSON *DurationEndpointJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DurationEndpointJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DurationEndpointJSON>, DurationEndpointJSON *, bool> generator("Type DurationEndpoint", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
