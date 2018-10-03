/* file "DisambiguateLocationActionOnSelectionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateLocationActionOnSelectionJSON.h"

#include "DisambiguateLocationActionOnSelectionJSON.h"


DisambiguateLocationActionOnSelectionJSON::TypeValue::TypeValue(void)
  {
  }

DisambiguateLocationActionOnSelectionJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DisambiguateLocationActionOnSelectionJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool DisambiguateLocationActionOnSelectionJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

DisambiguateLocationActionOnSelectionJSON::TypeValueKnownValues DisambiguateLocationActionOnSelectionJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "all") == 0)
                return Value_Call;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nformation") == 0)
                return Value_Information;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "avigate") == 0)
                return Value_Navigate;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "howDirections") == 0)
                return Value_ShowDirections;
            break;
        case 'V':
            if (strcmp(&(chars[1]), "iew") == 0)
                return Value_View;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *DisambiguateLocationActionOnSelectionJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_View:
            return "View";
        case Value_Navigate:
            return "Navigate";
        case Value_ShowDirections:
            return "ShowDirections";
        case Value_Call:
            return "Call";
        case Value_Information:
            return "Information";
        default:
            assert(false);
            return NULL;
      }
  }

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(const DisambiguateLocationActionOnSelectionJSON &)
  {
    assert(false);
  }

DisambiguateLocationActionOnSelectionJSON &DisambiguateLocationActionOnSelectionJSON::operator=(const DisambiguateLocationActionOnSelectionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateLocationActionOnSelectionJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of DisambiguateLocationActionOnSelectionJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "all") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Call;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nformation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Information;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "avigate") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Navigate;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "howDirections") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ShowDirections;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "iew") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_View;
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

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(void) :
        flagHasValue(false)
  {
  }

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(const char *init_value) :
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

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(std::string init_value) :
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

DisambiguateLocationActionOnSelectionJSON::DisambiguateLocationActionOnSelectionJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

DisambiguateLocationActionOnSelectionJSON::~DisambiguateLocationActionOnSelectionJSON(void)
  {
  }

bool DisambiguateLocationActionOnSelectionJSON::hasValue(void) const
  {
    return flagHasValue;
  }

DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationActionOnSelectionJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const DisambiguateLocationActionOnSelectionJSON::TypeValue DisambiguateLocationActionOnSelectionJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *DisambiguateLocationActionOnSelectionJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string DisambiguateLocationActionOnSelectionJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

DisambiguateLocationActionOnSelectionJSON *DisambiguateLocationActionOnSelectionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateLocationActionOnSelectionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateLocationActionOnSelectionJSON>, DisambiguateLocationActionOnSelectionJSON *, bool> generator("Type DisambiguateLocationActionOnSelection", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
