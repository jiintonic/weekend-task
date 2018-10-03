/* file "CurrencyConversionErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CurrencyConversionErrorJSON.h"

#include "CurrencyConversionErrorJSON.h"


CurrencyConversionErrorJSON::TypeType::TypeType(void)
  {
  }

CurrencyConversionErrorJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

CurrencyConversionErrorJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool CurrencyConversionErrorJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool CurrencyConversionErrorJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool CurrencyConversionErrorJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool CurrencyConversionErrorJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool CurrencyConversionErrorJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool CurrencyConversionErrorJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

CurrencyConversionErrorJSON::TypeTypeKnownValues CurrencyConversionErrorJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "adResponse") == 0)
                return Type_BadResponse;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "odeNotFound") == 0)
                return Type_CodeNotFound;
            break;
        default:
            break;
      }
    return Type__none;
  }

const char *CurrencyConversionErrorJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_BadResponse:
            return "BadResponse";
        case Type_CodeNotFound:
            return "CodeNotFound";
        default:
            assert(false);
            return NULL;
      }
  }

CurrencyConversionErrorJSON::CurrencyConversionErrorJSON(const CurrencyConversionErrorJSON &)
  {
    assert(false);
  }

CurrencyConversionErrorJSON &CurrencyConversionErrorJSON::operator=(const CurrencyConversionErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CurrencyConversionErrorJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of CurrencyConversionErrorJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "adResponse") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_BadResponse;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "odeNotFound") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_CodeNotFound;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setType(the_open_enum);
  }

void CurrencyConversionErrorJSON::fromJSONCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Code of CurrencyConversionErrorJSON is not a string.");
    setCode(std::string(json_string->getData()));
  }

CurrencyConversionErrorJSON::CurrencyConversionErrorJSON(void) :
        flagHasType(false),
        flagHasCode(false)
  {
  }

CurrencyConversionErrorJSON::~CurrencyConversionErrorJSON(void)
  {
  }

bool CurrencyConversionErrorJSON::hasType(void) const
  {
    return flagHasType;
  }

CurrencyConversionErrorJSON::TypeType CurrencyConversionErrorJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const CurrencyConversionErrorJSON::TypeType CurrencyConversionErrorJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *CurrencyConversionErrorJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string CurrencyConversionErrorJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool CurrencyConversionErrorJSON::hasCode(void) const
  {
    return flagHasCode;
  }

std::string CurrencyConversionErrorJSON::getCode(void)
  {
    assert(flagHasCode);
    return storeCode;
  }

const std::string CurrencyConversionErrorJSON::getCode(void) const
  {
    assert(flagHasCode);
    return storeCode;
  }

CurrencyConversionErrorJSON *CurrencyConversionErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CurrencyConversionErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionErrorJSON>, CurrencyConversionErrorJSON *, bool> generator("Type CurrencyConversionError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
