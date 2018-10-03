/* file "CabinClassJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CabinClassJSON.h"

#include "CabinClassJSON.h"


CabinClassJSON::TypeValue::TypeValue(void)
  {
  }

CabinClassJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

CabinClassJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool CabinClassJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool CabinClassJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool CabinClassJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool CabinClassJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool CabinClassJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool CabinClassJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

CabinClassJSON::TypeValueKnownValues CabinClassJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "usiness") == 0)
                return Value_Business;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "conomy") == 0)
                return Value_Economy;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "irst") == 0)
                return Value_First;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "remiumEconomy") == 0)
                return Value_PremiumEconomy;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *CabinClassJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_First:
            return "First";
        case Value_Business:
            return "Business";
        case Value_PremiumEconomy:
            return "PremiumEconomy";
        case Value_Economy:
            return "Economy";
        default:
            assert(false);
            return NULL;
      }
  }

CabinClassJSON::CabinClassJSON(const CabinClassJSON &)
  {
    assert(false);
  }

CabinClassJSON &CabinClassJSON::operator=(const CabinClassJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CabinClassJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of CabinClassJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "usiness") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Business;
                    goto open_enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "conomy") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Economy;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "irst") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_First;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "remiumEconomy") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_PremiumEconomy;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

CabinClassJSON::CabinClassJSON(void) :
        flagHasValue(false)
  {
  }

CabinClassJSON::CabinClassJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

CabinClassJSON::CabinClassJSON(const char *init_value) :
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

CabinClassJSON::CabinClassJSON(std::string init_value) :
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

CabinClassJSON::CabinClassJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

CabinClassJSON::~CabinClassJSON(void)
  {
  }

bool CabinClassJSON::hasValue(void) const
  {
    return flagHasValue;
  }

CabinClassJSON::TypeValue CabinClassJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const CabinClassJSON::TypeValue CabinClassJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *CabinClassJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string CabinClassJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

CabinClassJSON *CabinClassJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CabinClassJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CabinClassJSON>, CabinClassJSON *, bool> generator("Type CabinClass", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
