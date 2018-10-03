/* file "SetClientUberServerTokenCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SetClientUberServerTokenCommandJSON.h"

#include "SetClientUberServerTokenCommandJSON.h"


SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(void)
  {
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatusKnownValues SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'f':
            if (strcmp(&(chars[1]), "ailed") == 0)
                return Status_failed;
            break;
        case 's':
            if (strcmp(&(chars[1]), "et") == 0)
                return Status_set;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_set:
            return "set";
        case Status_failed:
            return "failed";
        default:
            assert(false);
            return NULL;
      }
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON &SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of TypeNativeDataJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'f':
            if (strcmp(&(json_string->getData()[1]), "ailed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_failed;
                    goto open_enum_is_done;
                  }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "et") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_set;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setStatus(the_open_enum);
  }

void SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of TypeNativeDataJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasStatus(false),
        flagHasDescription(false)
  {
    extraIndex = create_string_index();
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::TypeStatus SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

SetClientUberServerTokenCommandJSON::SetClientUberServerTokenCommandJSON(const SetClientUberServerTokenCommandJSON &)
  {
    assert(false);
  }

SetClientUberServerTokenCommandJSON &SetClientUberServerTokenCommandJSON::operator=(const SetClientUberServerTokenCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SetClientUberServerTokenCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SetClientUberServerTokenCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SetClientUberServerTokenCommandJSON::SetClientUberServerTokenCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SetClientUberServerTokenCommandJSON::~SetClientUberServerTokenCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SetClientUberServerTokenCommandJSON::getUberCommandKind(void) const
  {
    return "SetClientUberServerToken";
  }

bool SetClientUberServerTokenCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON * SetClientUberServerTokenCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SetClientUberServerTokenCommandJSON::TypeNativeDataJSON * SetClientUberServerTokenCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SetClientUberServerTokenCommandJSON::TypeNativeDataJSON *SetClientUberServerTokenCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SetClientUberServerTokenCommandJSON *SetClientUberServerTokenCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SetClientUberServerTokenCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SetClientUberServerTokenCommandJSON>, SetClientUberServerTokenCommandJSON *, bool> generator("Type SetClientUberServerTokenCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
