/* file "StockListingRequestTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockListingRequestTypeJSON.h"

#include "StockListingRequestTypeJSON.h"


StockListingRequestTypeJSON::TypeValue::TypeValue(void)
  {
  }

StockListingRequestTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

StockListingRequestTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool StockListingRequestTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool StockListingRequestTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool StockListingRequestTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool StockListingRequestTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool StockListingRequestTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool StockListingRequestTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

StockListingRequestTypeJSON::TypeValueKnownValues StockListingRequestTypeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "ompanyName") == 0)
                return Value_CompanyName;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "ndexName") == 0)
                return Value_IndexName;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ymbol") == 0)
                return Value_Symbol;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *StockListingRequestTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_CompanyName:
            return "CompanyName";
        case Value_Symbol:
            return "Symbol";
        case Value_IndexName:
            return "IndexName";
        default:
            assert(false);
            return NULL;
      }
  }

StockListingRequestTypeJSON::StockListingRequestTypeJSON(const StockListingRequestTypeJSON &)
  {
    assert(false);
  }

StockListingRequestTypeJSON &StockListingRequestTypeJSON::operator=(const StockListingRequestTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockListingRequestTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of StockListingRequestTypeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ompanyName") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_CompanyName;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "ndexName") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_IndexName;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ymbol") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Symbol;
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

StockListingRequestTypeJSON::StockListingRequestTypeJSON(void) :
        flagHasValue(false)
  {
  }

StockListingRequestTypeJSON::StockListingRequestTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

StockListingRequestTypeJSON::StockListingRequestTypeJSON(const char *init_value) :
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

StockListingRequestTypeJSON::StockListingRequestTypeJSON(std::string init_value) :
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

StockListingRequestTypeJSON::StockListingRequestTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

StockListingRequestTypeJSON::~StockListingRequestTypeJSON(void)
  {
  }

bool StockListingRequestTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

StockListingRequestTypeJSON::TypeValue StockListingRequestTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const StockListingRequestTypeJSON::TypeValue StockListingRequestTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *StockListingRequestTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string StockListingRequestTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

StockListingRequestTypeJSON *StockListingRequestTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockListingRequestTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool> generator("Type StockListingRequestType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
