/* file "UberCancelInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCancelInformationNuggetJSON.h"

#include "UberCancelInformationNuggetJSON.h"


UberCancelInformationNuggetJSON::TypeStatus::TypeStatus(void)
  {
  }

UberCancelInformationNuggetJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberCancelInformationNuggetJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool UberCancelInformationNuggetJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

UberCancelInformationNuggetJSON::TypeStatusKnownValues UberCancelInformationNuggetJSON::stringToStatus(const char *chars)
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

const char *UberCancelInformationNuggetJSON::stringFromStatus(TypeStatusKnownValues the_enum)
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

UberCancelInformationNuggetJSON::UberCancelInformationNuggetJSON(const UberCancelInformationNuggetJSON &)
  {
    assert(false);
  }

UberCancelInformationNuggetJSON &UberCancelInformationNuggetJSON::operator=(const UberCancelInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberCancelInformationNuggetJSON::extraStatusToJSON(void) const
  {
    JSONStringValue *generated_string_Status;
    if (!(storeStatus.in_known_list))
      {
    generated_string_Status = new JSONStringValue(storeStatus.string_value.c_str());
      }
    else
      {
    switch (storeStatus.list_value)
      {
        case Status_success:
            generated_string_Status = new JSONStringValue("success");
            break;
        case Status_no_current_trip:
            generated_string_Status = new JSONStringValue("no_current_trip");
            break;
        case Status_cancel_cash_trip_not_allowed:
            generated_string_Status = new JSONStringValue("cancel_cash_trip_not_allowed");
            break;
        case Status_failure:
            generated_string_Status = new JSONStringValue("failure");
            break;
        case Status_unauthorized:
            generated_string_Status = new JSONStringValue("unauthorized");
            break;
        default:
            assert(false);
            generated_string_Status = NULL;
      }
      }
    return generated_string_Status;
  }

void UberCancelInformationNuggetJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of UberCancelInformationNuggetJSON is not a string.");
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

UberCancelInformationNuggetJSON::UberCancelInformationNuggetJSON(void) :
        flagHasStatus(false)
  {
    extraIndex = create_string_index();
  }

UberCancelInformationNuggetJSON::~UberCancelInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberCancelInformationNuggetJSON::getUberNuggetKind(void) const
  {
    return "UberCancel";
  }

bool UberCancelInformationNuggetJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

UberCancelInformationNuggetJSON::TypeStatus UberCancelInformationNuggetJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const UberCancelInformationNuggetJSON::TypeStatus UberCancelInformationNuggetJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *UberCancelInformationNuggetJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberCancelInformationNuggetJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

UberCancelInformationNuggetJSON *UberCancelInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCancelInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCancelInformationNuggetJSON>, UberCancelInformationNuggetJSON *, bool> generator("Type UberCancelInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
