/* file "UberAccessDataSyncCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberAccessDataSyncCommandJSON.h"

#include "UberAccessDataSyncCommandJSON.h"


UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(void)
  {
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatusKnownValues UberAccessDataSyncCommandJSON::TypeNativeDataJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'f':
            if (strcmp(&(chars[1]), "ailed") == 0)
                return Status_failed;
            break;
        case 's':
            if (strcmp(&(chars[1]), "ynced") == 0)
                return Status_synced;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *UberAccessDataSyncCommandJSON::TypeNativeDataJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_synced:
            return "synced";
        case Status_failed:
            return "failed";
        default:
            assert(false);
            return NULL;
      }
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON &UberAccessDataSyncCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberAccessDataSyncCommandJSON::TypeNativeDataJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
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
            if (strcmp(&(json_string->getData()[1]), "ynced") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_synced;
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

void UberAccessDataSyncCommandJSON::TypeNativeDataJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of TypeNativeDataJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasStatus(false),
        flagHasDescription(false)
  {
    extraIndex = create_string_index();
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const UberAccessDataSyncCommandJSON::TypeNativeDataJSON::TypeStatus UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool UberAccessDataSyncCommandJSON::TypeNativeDataJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string UberAccessDataSyncCommandJSON::TypeNativeDataJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

UberAccessDataSyncCommandJSON::UberAccessDataSyncCommandJSON(const UberAccessDataSyncCommandJSON &)
  {
    assert(false);
  }

UberAccessDataSyncCommandJSON &UberAccessDataSyncCommandJSON::operator=(const UberAccessDataSyncCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberAccessDataSyncCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberAccessDataSyncCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberAccessDataSyncCommandJSON::UberAccessDataSyncCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberAccessDataSyncCommandJSON::~UberAccessDataSyncCommandJSON(void)
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

const char *UberAccessDataSyncCommandJSON::getUberCommandKind(void) const
  {
    return "UberAccessDataSync";
  }

bool UberAccessDataSyncCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON * UberAccessDataSyncCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberAccessDataSyncCommandJSON::TypeNativeDataJSON * UberAccessDataSyncCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberAccessDataSyncCommandJSON::TypeNativeDataJSON *UberAccessDataSyncCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberAccessDataSyncCommandJSON *UberAccessDataSyncCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberAccessDataSyncCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberAccessDataSyncCommandJSON>, UberAccessDataSyncCommandJSON *, bool> generator("Type UberAccessDataSyncCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
