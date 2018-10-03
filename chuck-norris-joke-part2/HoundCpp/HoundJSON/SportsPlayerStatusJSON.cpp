/* file "SportsPlayerStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerStatusJSON.h"

#include "SportsPlayerStatusJSON.h"


SportsPlayerStatusJSON::TypeValue::TypeValue(void)
  {
  }

SportsPlayerStatusJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerStatusJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerStatusJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerStatusJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerStatusJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerStatusJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerStatusJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerStatusJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerStatusJSON::TypeValueKnownValues SportsPlayerStatusJSON::stringToValue(const char *chars)
  {
    if (strcmp(chars, "Active") == 0)
        return Value_Active;
    return Value__none;
  }

const char *SportsPlayerStatusJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Active:
            return "Active";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(const SportsPlayerStatusJSON &)
  {
    assert(false);
  }

SportsPlayerStatusJSON &SportsPlayerStatusJSON::operator=(const SportsPlayerStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerStatusJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsPlayerStatusJSON is not a string.");
    TypeValue the_open_enum;
    if (strcmp(json_string->getData(), "Active") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Value_Active;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(void) :
        flagHasValue(false)
  {
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayerStatusJSON::SportsPlayerStatusJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsPlayerStatusJSON::~SportsPlayerStatusJSON(void)
  {
  }

bool SportsPlayerStatusJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsPlayerStatusJSON::TypeValue SportsPlayerStatusJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsPlayerStatusJSON::TypeValue SportsPlayerStatusJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsPlayerStatusJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerStatusJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsPlayerStatusJSON *SportsPlayerStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerStatusJSON>, SportsPlayerStatusJSON *, bool> generator("Type SportsPlayerStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
