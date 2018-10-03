/* file "MusicSearchTargetTypeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchTargetTypeJSON.h"

#include "MusicSearchTargetTypeJSON.h"


MusicSearchTargetTypeJSON::TypeValue::TypeValue(void)
  {
  }

MusicSearchTargetTypeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicSearchTargetTypeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool MusicSearchTargetTypeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

MusicSearchTargetTypeJSON::TypeValueKnownValues MusicSearchTargetTypeJSON::stringToValue(const char *chars)
  {
    if (strncmp(chars, "MUSIC_SEARCH_TARGET_TYPE_", 25) == 0)
      {
        switch ((unsigned char)(chars[25]))
          {
            case 'E':
                if (strcmp(&(chars[26]), "ARLIEST") == 0)
                    return Value_MUSIC_SEARCH_TARGET_TYPE_EARLIEST;
                break;
            case 'L':
                if (strcmp(&(chars[26]), "ATEST") == 0)
                    return Value_MUSIC_SEARCH_TARGET_TYPE_LATEST;
                break;
            case 'T':
                if (strcmp(&(chars[26]), "OP") == 0)
                    return Value_MUSIC_SEARCH_TARGET_TYPE_TOP;
                break;
            default:
                break;
          }
      }
    return Value__none;
  }

const char *MusicSearchTargetTypeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_MUSIC_SEARCH_TARGET_TYPE_TOP:
            return "MUSIC_SEARCH_TARGET_TYPE_TOP";
        case Value_MUSIC_SEARCH_TARGET_TYPE_LATEST:
            return "MUSIC_SEARCH_TARGET_TYPE_LATEST";
        case Value_MUSIC_SEARCH_TARGET_TYPE_EARLIEST:
            return "MUSIC_SEARCH_TARGET_TYPE_EARLIEST";
        default:
            assert(false);
            return NULL;
      }
  }

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(const MusicSearchTargetTypeJSON &)
  {
    assert(false);
  }

MusicSearchTargetTypeJSON &MusicSearchTargetTypeJSON::operator=(const MusicSearchTargetTypeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchTargetTypeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of MusicSearchTargetTypeJSON is not a string.");
    TypeValue the_open_enum;
    if (strncmp(json_string->getData(), "MUSIC_SEARCH_TARGET_TYPE_", 25) == 0)
      {
        switch ((unsigned char)(json_string->getData()[25]))
          {
            case 'E':
                if (strcmp(&(json_string->getData()[26]), "ARLIEST") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_MUSIC_SEARCH_TARGET_TYPE_EARLIEST;
                        goto open_enum_is_done;
                      }
                break;
            case 'L':
                if (strcmp(&(json_string->getData()[26]), "ATEST") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_MUSIC_SEARCH_TARGET_TYPE_LATEST;
                        goto open_enum_is_done;
                      }
                break;
            case 'T':
                if (strcmp(&(json_string->getData()[26]), "OP") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Value_MUSIC_SEARCH_TARGET_TYPE_TOP;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(void) :
        flagHasValue(false)
  {
  }

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(const char *init_value) :
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

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(std::string init_value) :
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

MusicSearchTargetTypeJSON::MusicSearchTargetTypeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

MusicSearchTargetTypeJSON::~MusicSearchTargetTypeJSON(void)
  {
  }

bool MusicSearchTargetTypeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

MusicSearchTargetTypeJSON::TypeValue MusicSearchTargetTypeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const MusicSearchTargetTypeJSON::TypeValue MusicSearchTargetTypeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *MusicSearchTargetTypeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicSearchTargetTypeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

MusicSearchTargetTypeJSON *MusicSearchTargetTypeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchTargetTypeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchTargetTypeJSON>, MusicSearchTargetTypeJSON *, bool> generator("Type MusicSearchTargetType", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
