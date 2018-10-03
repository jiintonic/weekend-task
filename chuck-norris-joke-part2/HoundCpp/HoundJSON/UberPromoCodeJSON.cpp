/* file "UberPromoCodeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberPromoCodeJSON.h"

#include "UberPromoCodeJSON.h"


UberPromoCodeJSON::TypeStatus::TypeStatus(void)
  {
  }

UberPromoCodeJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberPromoCodeJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberPromoCodeJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberPromoCodeJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool UberPromoCodeJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberPromoCodeJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool UberPromoCodeJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool UberPromoCodeJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

UberPromoCodeJSON::TypeStatusKnownValues UberPromoCodeJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            if (strcmp(&(chars[1]), "pplied") == 0)
                return Status_applied;
            break;
        case 'f':
            if (strcmp(&(chars[1]), "ailed") == 0)
                return Status_failed;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *UberPromoCodeJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_applied:
            return "applied";
        case Status_failed:
            return "failed";
        default:
            assert(false);
            return NULL;
      }
  }

UberPromoCodeJSON::UberPromoCodeJSON(const UberPromoCodeJSON &)
  {
    assert(false);
  }

UberPromoCodeJSON &UberPromoCodeJSON::operator=(const UberPromoCodeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberPromoCodeJSON::fromJSONCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Code of UberPromoCodeJSON is not a string.");
    setCode(std::string(json_string->getData()));
  }

void UberPromoCodeJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of UberPromoCodeJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'a':
            if (strcmp(&(json_string->getData()[1]), "pplied") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_applied;
                    goto open_enum_is_done;
                  }
            break;
        case 'f':
            if (strcmp(&(json_string->getData()[1]), "ailed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_failed;
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

void UberPromoCodeJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of UberPromoCodeJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

UberPromoCodeJSON::UberPromoCodeJSON(void) :
        flagHasCode(false),
        flagHasStatus(false),
        flagHasDescription(false)
  {
    extraIndex = create_string_index();
  }

UberPromoCodeJSON::~UberPromoCodeJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberPromoCodeJSON::hasCode(void) const
  {
    return flagHasCode;
  }

std::string UberPromoCodeJSON::getCode(void)
  {
    assert(flagHasCode);
    return storeCode;
  }

const std::string UberPromoCodeJSON::getCode(void) const
  {
    assert(flagHasCode);
    return storeCode;
  }

bool UberPromoCodeJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

UberPromoCodeJSON::TypeStatus UberPromoCodeJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const UberPromoCodeJSON::TypeStatus UberPromoCodeJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *UberPromoCodeJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberPromoCodeJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool UberPromoCodeJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string UberPromoCodeJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string UberPromoCodeJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

UberPromoCodeJSON *UberPromoCodeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberPromoCodeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberPromoCodeJSON>, UberPromoCodeJSON *, bool> generator("Type UberPromoCode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
