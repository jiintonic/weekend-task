/* file "ContactJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactJSON.h"

#include "ContactJSON.h"
#include "EmailContactJSON.h"
#include "SMSContactJSON.h"


ContactJSON::ContactJSON(const ContactJSON &)
  {
    assert(false);
  }

ContactJSON &ContactJSON::operator=(const ContactJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of ContactJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void ContactJSON::fromJSONId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Id of ContactJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Id of ContactJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setId(extracted_integer);
  }

void ContactJSON::fromJSONIsDefault(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsDefault of ContactJSON is not true for false.");
          }
      }
    setIsDefault(the_bool);
  }

void ContactJSON::fromJSONIsSelected(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSelected of ContactJSON is not true for false.");
          }
      }
    setIsSelected(the_bool);
  }

ContactJSON::ContactJSON(void) :
        flagHasName(false),
        flagHasId(false),
        flagHasIsDefault(false),
        flagHasIsSelected(false)
  {
    extraIndex = create_string_index();
  }

ContactJSON::~ContactJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string ContactJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string ContactJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool ContactJSON::hasId(void) const
  {
    return flagHasId;
  }

OInteger ContactJSON::getId(void)
  {
    assert(flagHasId);
    return storeId;
  }

const OInteger ContactJSON::getId(void) const
  {
    assert(flagHasId);
    return storeId;
  }

bool ContactJSON::hasIsDefault(void) const
  {
    return flagHasIsDefault;
  }

bool ContactJSON::getIsDefault(void)
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

const bool ContactJSON::getIsDefault(void) const
  {
    assert(flagHasIsDefault);
    return storeIsDefault;
  }

bool ContactJSON::hasIsSelected(void) const
  {
    return flagHasIsSelected;
  }

bool ContactJSON::getIsSelected(void)
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

const bool ContactJSON::getIsSelected(void) const
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

char ContactJSON::Generator::lowerBoundId[] = "-1";
ContactJSON *ContactJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactJSON>, ContactJSON *, bool> generator("Type Contact", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
