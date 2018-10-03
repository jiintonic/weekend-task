/* file "LabeledPhoneNumberJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LabeledPhoneNumberJSON.h"

#include "LabeledPhoneNumberJSON.h"


LabeledPhoneNumberJSON::LabeledPhoneNumberJSON(const LabeledPhoneNumberJSON &)
  {
    assert(false);
  }

LabeledPhoneNumberJSON &LabeledPhoneNumberJSON::operator=(const LabeledPhoneNumberJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LabeledPhoneNumberJSON::fromJSONId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Id of LabeledPhoneNumberJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Id of LabeledPhoneNumberJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setId(extracted_integer);
  }

void LabeledPhoneNumberJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of LabeledPhoneNumberJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void LabeledPhoneNumberJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of LabeledPhoneNumberJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

void LabeledPhoneNumberJSON::fromJSONIsSelected(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSelected of LabeledPhoneNumberJSON is not true for false.");
          }
      }
    setIsSelected(the_bool);
  }

void LabeledPhoneNumberJSON::fromJSONIsDefault(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDefault of LabeledPhoneNumberJSON is not true for false.");
          }
      }
    setIsDefault(the_bool);
  }

LabeledPhoneNumberJSON::LabeledPhoneNumberJSON(void) :
        flagHasId(false),
        flagHasLabel(false),
        flagHasNumber(false),
        flagHasIsSelected(false),
        flagHasIsDefault(false)
  {
  }

LabeledPhoneNumberJSON::~LabeledPhoneNumberJSON(void)
  {
  }

bool LabeledPhoneNumberJSON::hasId(void) const
  {
    return flagHasId;
  }

OInteger LabeledPhoneNumberJSON::getId(void)
  {
    assert(flagHasId);
    return storeId;
  }

const OInteger LabeledPhoneNumberJSON::getId(void) const
  {
    assert(flagHasId);
    return storeId;
  }

bool LabeledPhoneNumberJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string LabeledPhoneNumberJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string LabeledPhoneNumberJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool LabeledPhoneNumberJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string LabeledPhoneNumberJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string LabeledPhoneNumberJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

bool LabeledPhoneNumberJSON::hasIsSelected(void) const
  {
    return flagHasIsSelected;
  }

bool LabeledPhoneNumberJSON::getIsSelected(void)
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

const bool LabeledPhoneNumberJSON::getIsSelected(void) const
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

bool LabeledPhoneNumberJSON::hasIsDefault(void) const
  {
    return flagHasIsDefault;
  }

bool LabeledPhoneNumberJSON::getIsDefault(void)
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

const bool LabeledPhoneNumberJSON::getIsDefault(void) const
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

char LabeledPhoneNumberJSON::Generator::lowerBoundId[] = "-1";
LabeledPhoneNumberJSON *LabeledPhoneNumberJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LabeledPhoneNumberJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LabeledPhoneNumberJSON>, LabeledPhoneNumberJSON *, bool> generator("Type LabeledPhoneNumber", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
