/* file "UberRequestsAbortCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsAbortCommandJSON.h"

#include "UberRequestsAbortCommandJSON.h"


UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::TypeReason(void)
  {
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::TypeReason(const TypeReason &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::TypeReason(TypeReasonKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator==(const TypeReason &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator!=(const TypeReason &other) const
  {
    return !(operator==(other));
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator<(const TypeReason &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator>(const TypeReason &other) const
  {
    return other.operator<(*this);
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator>=(const TypeReason &other) const
  {
    return !(operator<(other));
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason::operator<=(const TypeReason &other) const
  {
    return !(other.operator<(*this));
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReasonKnownValues UberRequestsAbortCommandJSON::TypeNativeDataJSON::stringToReason(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'c':
            if (strcmp(&(chars[1]), "lient_error") == 0)
                return Reason_client_error;
            break;
        case 'n':
            if (strcmp(&(chars[1]), "o_uber_product") == 0)
                return Reason_no_uber_product;
            break;
        case 'o':
            if (strcmp(&(chars[1]), "ngoing_request") == 0)
                return Reason_ongoing_request;
            break;
        case 's':
            if (strcmp(&(chars[1]), "ame_pickup_dropoff") == 0)
                return Reason_same_pickup_dropoff;
            break;
        case 'u':
            switch ((unsigned char)(chars[1]))
              {
                case 'b':
                    if (strcmp(&(chars[2]), "er_api_error") == 0)
                        return Reason_uber_api_error;
                    break;
                case 's':
                    if (strcmp(&(chars[2]), "er_cancelled") == 0)
                        return Reason_user_cancelled;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Reason__none;
  }

const char *UberRequestsAbortCommandJSON::TypeNativeDataJSON::stringFromReason(TypeReasonKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Reason_user_cancelled:
            return "user_cancelled";
        case Reason_no_uber_product:
            return "no_uber_product";
        case Reason_uber_api_error:
            return "uber_api_error";
        case Reason_client_error:
            return "client_error";
        case Reason_ongoing_request:
            return "ongoing_request";
        case Reason_same_pickup_dropoff:
            return "same_pickup_dropoff";
        default:
            assert(false);
            return NULL;
      }
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON &UberRequestsAbortCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsAbortCommandJSON::TypeNativeDataJSON::fromJSONReason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Reason of TypeNativeDataJSON is not a string.");
    TypeReason the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "lient_error") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Reason_client_error;
                    goto open_enum_is_done;
                  }
            break;
        case 'n':
            if (strcmp(&(json_string->getData()[1]), "o_uber_product") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Reason_no_uber_product;
                    goto open_enum_is_done;
                  }
            break;
        case 'o':
            if (strcmp(&(json_string->getData()[1]), "ngoing_request") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Reason_ongoing_request;
                    goto open_enum_is_done;
                  }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "ame_pickup_dropoff") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Reason_same_pickup_dropoff;
                    goto open_enum_is_done;
                  }
            break;
        case 'u':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'b':
                    if (strcmp(&(json_string->getData()[2]), "er_api_error") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Reason_uber_api_error;
                            goto open_enum_is_done;
                          }
                    break;
                case 's':
                    if (strcmp(&(json_string->getData()[2]), "er_cancelled") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Reason_user_cancelled;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setReason(the_open_enum);
  }

void UberRequestsAbortCommandJSON::TypeNativeDataJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of TypeNativeDataJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

void UberRequestsAbortCommandJSON::TypeNativeDataJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasReason(false),
        flagHasErrorMessage(false),
        flagHasUberRequestsSpec(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasUberRequestsSpec)
      {
        storeUberRequestsSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::hasReason(void) const
  {
    return flagHasReason;
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason UberRequestsAbortCommandJSON::TypeNativeDataJSON::getReason(void)
  {
    assert(flagHasReason);
    return storeReason;
  }

const UberRequestsAbortCommandJSON::TypeNativeDataJSON::TypeReason UberRequestsAbortCommandJSON::TypeNativeDataJSON::getReason(void) const
  {
    assert(flagHasReason);
    return storeReason;
  }

const char *UberRequestsAbortCommandJSON::TypeNativeDataJSON::getReasonAsChars(void) const
  {
    TypeReason result = getReason();
    if (result.in_known_list)
        return stringFromReason(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberRequestsAbortCommandJSON::TypeNativeDataJSON::getReasonAsString(void) const
  {
    return getReasonAsChars();
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string UberRequestsAbortCommandJSON::TypeNativeDataJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string UberRequestsAbortCommandJSON::TypeNativeDataJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

bool UberRequestsAbortCommandJSON::TypeNativeDataJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsAbortCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsAbortCommandJSON::TypeNativeDataJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

UberRequestsAbortCommandJSON::UberRequestsAbortCommandJSON(const UberRequestsAbortCommandJSON &)
  {
    assert(false);
  }

UberRequestsAbortCommandJSON &UberRequestsAbortCommandJSON::operator=(const UberRequestsAbortCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberRequestsAbortCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void UberRequestsAbortCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsAbortCommandJSON::UberRequestsAbortCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsAbortCommandJSON::~UberRequestsAbortCommandJSON(void)
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

const char *UberRequestsAbortCommandJSON::getUberRequestsCommandKind(void) const
  {
    return "UberRequestsAbort";
  }

bool UberRequestsAbortCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON * UberRequestsAbortCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const UberRequestsAbortCommandJSON::TypeNativeDataJSON * UberRequestsAbortCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

UberRequestsAbortCommandJSON::TypeNativeDataJSON *UberRequestsAbortCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
UberRequestsAbortCommandJSON *UberRequestsAbortCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsAbortCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsAbortCommandJSON>, UberRequestsAbortCommandJSON *, bool> generator("Type UberRequestsAbortCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
