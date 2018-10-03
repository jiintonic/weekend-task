/* file "UberCancelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCancelCommandJSON.h"

#include "UberCancelCommandJSON.h"


UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(void)
  {
  }

UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

UberCancelCommandJSON::TypeNativeDataJSON::TypeStatusKnownValues UberCancelCommandJSON::TypeNativeDataJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'c':
            if (strcmp(&(chars[1]), "ancel_cash_trip_not_allowed") == 0)
                return Status_cancel_cash_trip_not_allowed;
            break;
        case 'f':
            if (strcmp(&(chars[1]), "ailure") == 0)
                return Status_failure;
            break;
        case 'n':
            if (strcmp(&(chars[1]), "o_current_trip") == 0)
                return Status_no_current_trip;
            break;
        case 's':
            if (strcmp(&(chars[1]), "uccess") == 0)
                return Status_success;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nauthorized") == 0)
                return Status_unauthorized;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *UberCancelCommandJSON::TypeNativeDataJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_success:
            return "success";
        case Status_no_current_trip:
            return "no_current_trip";
        case Status_cancel_cash_trip_not_allowed:
            return "cancel_cash_trip_not_allowed";
        case Status_failure:
            return "failure";
        case Status_unauthorized:
            return "unauthorized";
        default:
            assert(false);
            return NULL;
      }
  }

UberCancelCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberCancelCommandJSON::TypeNativeDataJSON &UberCancelCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberCancelCommandJSON::TypeNativeDataJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of TypeNativeDataJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "ancel_cash_trip_not_allowed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_cancel_cash_trip_not_allowed;
                    goto open_enum_is_done;
                  }
            break;
        case 'f':
            if (strcmp(&(json_string->getData()[1]), "ailure") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_failure;
                    goto open_enum_is_done;
                  }
            break;
        case 'n':
            if (strcmp(&(json_string->getData()[1]), "o_current_trip") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_no_current_trip;
                    goto open_enum_is_done;
                  }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "uccess") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_success;
                    goto open_enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nauthorized") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_unauthorized;
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

UberCancelCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasStatus(false)
  {
    extraIndex = create_string_index();
  }

UberCancelCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberCancelCommandJSON::TypeNativeDataJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus UberCancelCommandJSON::TypeNativeDataJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const UberCancelCommandJSON::TypeNativeDataJSON::TypeStatus UberCancelCommandJSON::TypeNativeDataJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *UberCancelCommandJSON::TypeNativeDataJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberCancelCommandJSON::TypeNativeDataJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

UberCancelCommandJSON::UberCancelCommandJSON(const UberCancelCommandJSON &)
  {
    assert(false);
  }

UberCancelCommandJSON &UberCancelCommandJSON::operator=(const UberCancelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberCancelCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberCancelCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberCancelCommandJSON::UberCancelCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberCancelCommandJSON::~UberCancelCommandJSON(void)
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

const char *UberCancelCommandJSON::getUberCommandKind(void) const
  {
    return "UberCancel";
  }

bool UberCancelCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberCancelCommandJSON::TypeNativeDataJSON * UberCancelCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberCancelCommandJSON::TypeNativeDataJSON * UberCancelCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberCancelCommandJSON::TypeNativeDataJSON *UberCancelCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberCancelCommandJSON *UberCancelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCancelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCancelCommandJSON>, UberCancelCommandJSON *, bool> generator("Type UberCancelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
