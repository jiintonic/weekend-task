/* file "AcapelaPauseValueJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AcapelaPauseValueJSON.h"

#include "AcapelaPauseValueJSON.h"


AcapelaPauseValueJSON::TypeValue::TypeValue(void)
  {
  }

AcapelaPauseValueJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

AcapelaPauseValueJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool AcapelaPauseValueJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool AcapelaPauseValueJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool AcapelaPauseValueJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool AcapelaPauseValueJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool AcapelaPauseValueJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool AcapelaPauseValueJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

AcapelaPauseValueJSON::TypeValueKnownValues AcapelaPauseValueJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ong") == 0)
                return Value_Long;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "edium") == 0)
                return Value_Medium;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "hort") == 0)
                return Value_Short;
            break;
        case 'V':
            if (strncmp(&(chars[1]), "ery", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'L':
                        if (strcmp(&(chars[5]), "ong") == 0)
                            return Value_VeryLong;
                        break;
                    case 'S':
                        if (strcmp(&(chars[5]), "hort") == 0)
                            return Value_VeryShort;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *AcapelaPauseValueJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_VeryShort:
            return "VeryShort";
        case Value_Short:
            return "Short";
        case Value_Medium:
            return "Medium";
        case Value_Long:
            return "Long";
        case Value_VeryLong:
            return "VeryLong";
        default:
            assert(false);
            return NULL;
      }
  }

AcapelaPauseValueJSON::AcapelaPauseValueJSON(const AcapelaPauseValueJSON &)
  {
    assert(false);
  }

AcapelaPauseValueJSON &AcapelaPauseValueJSON::operator=(const AcapelaPauseValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AcapelaPauseValueJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of AcapelaPauseValueJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ong") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Long;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edium") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Medium;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "hort") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Short;
                    goto open_enum_is_done;
                  }
            break;
        case 'V':
            if (strncmp(&(json_string->getData()[1]), "ery", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'L':
                        if (strcmp(&(json_string->getData()[5]), "ong") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_VeryLong;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[5]), "hort") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_VeryShort;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
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

AcapelaPauseValueJSON::AcapelaPauseValueJSON(void) :
        flagHasValue(false)
  {
  }

AcapelaPauseValueJSON::AcapelaPauseValueJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

AcapelaPauseValueJSON::AcapelaPauseValueJSON(const char *init_value) :
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

AcapelaPauseValueJSON::AcapelaPauseValueJSON(std::string init_value) :
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

AcapelaPauseValueJSON::AcapelaPauseValueJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

AcapelaPauseValueJSON::~AcapelaPauseValueJSON(void)
  {
  }

bool AcapelaPauseValueJSON::hasValue(void) const
  {
    return flagHasValue;
  }

AcapelaPauseValueJSON::TypeValue AcapelaPauseValueJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const AcapelaPauseValueJSON::TypeValue AcapelaPauseValueJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *AcapelaPauseValueJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string AcapelaPauseValueJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

AcapelaPauseValueJSON *AcapelaPauseValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AcapelaPauseValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool> generator("Type AcapelaPauseValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
