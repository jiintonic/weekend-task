/* file "LabeledEmailAddressJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LabeledEmailAddressJSON.h"

#include "LabeledEmailAddressJSON.h"


LabeledEmailAddressJSON::LabeledEmailAddressJSON(const LabeledEmailAddressJSON &)
  {
    assert(false);
  }

LabeledEmailAddressJSON &LabeledEmailAddressJSON::operator=(const LabeledEmailAddressJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LabeledEmailAddressJSON::fromJSONId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Id of LabeledEmailAddressJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Id of LabeledEmailAddressJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setId(extracted_integer);
  }

void LabeledEmailAddressJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of LabeledEmailAddressJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void LabeledEmailAddressJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of LabeledEmailAddressJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

void LabeledEmailAddressJSON::fromJSONIsSelected(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSelected of LabeledEmailAddressJSON is not true for false.");
          }
      }
    setIsSelected(the_bool);
  }

void LabeledEmailAddressJSON::fromJSONIsDefault(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDefault of LabeledEmailAddressJSON is not true for false.");
          }
      }
    setIsDefault(the_bool);
  }

LabeledEmailAddressJSON::LabeledEmailAddressJSON(void) :
        flagHasId(false),
        flagHasLabel(false),
        flagHasAddress(false),
        flagHasIsSelected(false),
        flagHasIsDefault(false)
  {
  }

LabeledEmailAddressJSON::~LabeledEmailAddressJSON(void)
  {
  }

bool LabeledEmailAddressJSON::hasId(void) const
  {
    return flagHasId;
  }

OInteger LabeledEmailAddressJSON::getId(void)
  {
    assert(flagHasId);
    return storeId;
  }

const OInteger LabeledEmailAddressJSON::getId(void) const
  {
    assert(flagHasId);
    return storeId;
  }

bool LabeledEmailAddressJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string LabeledEmailAddressJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string LabeledEmailAddressJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool LabeledEmailAddressJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string LabeledEmailAddressJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string LabeledEmailAddressJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

bool LabeledEmailAddressJSON::hasIsSelected(void) const
  {
    return flagHasIsSelected;
  }

bool LabeledEmailAddressJSON::getIsSelected(void)
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

const bool LabeledEmailAddressJSON::getIsSelected(void) const
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

bool LabeledEmailAddressJSON::hasIsDefault(void) const
  {
    return flagHasIsDefault;
  }

bool LabeledEmailAddressJSON::getIsDefault(void)
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

const bool LabeledEmailAddressJSON::getIsDefault(void) const
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

char LabeledEmailAddressJSON::Generator::lowerBoundId[] = "-1";
LabeledEmailAddressJSON *LabeledEmailAddressJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LabeledEmailAddressJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LabeledEmailAddressJSON>, LabeledEmailAddressJSON *, bool> generator("Type LabeledEmailAddress", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
