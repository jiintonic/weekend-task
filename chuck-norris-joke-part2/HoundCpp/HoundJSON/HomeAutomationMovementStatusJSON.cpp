/* file "HomeAutomationMovementStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationMovementStatusJSON.h"

#include "HomeAutomationMovementStatusJSON.h"


HomeAutomationMovementStatusJSON::TypeRecentStatus::TypeRecentStatus(void)
  {
  }

HomeAutomationMovementStatusJSON::TypeRecentStatus::TypeRecentStatus(const TypeRecentStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationMovementStatusJSON::TypeRecentStatus::TypeRecentStatus(TypeRecentStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator==(const TypeRecentStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator!=(const TypeRecentStatus &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator<(const TypeRecentStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator>(const TypeRecentStatus &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator>=(const TypeRecentStatus &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationMovementStatusJSON::TypeRecentStatus::operator<=(const TypeRecentStatus &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationMovementStatusJSON::TypeRecentStatusKnownValues HomeAutomationMovementStatusJSON::stringToRecentStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "ovementDetected") == 0)
                return RecentStatus_MovementDetected;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oMovementDetected") == 0)
                return RecentStatus_NoMovementDetected;
            break;
        default:
            break;
      }
    return RecentStatus__none;
  }

const char *HomeAutomationMovementStatusJSON::stringFromRecentStatus(TypeRecentStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case RecentStatus_NoMovementDetected:
            return "NoMovementDetected";
        case RecentStatus_MovementDetected:
            return "MovementDetected";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationMovementStatusJSON::HomeAutomationMovementStatusJSON(const HomeAutomationMovementStatusJSON &)
  {
    assert(false);
  }

HomeAutomationMovementStatusJSON &HomeAutomationMovementStatusJSON::operator=(const HomeAutomationMovementStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationMovementStatusJSON::fromJSONRecentStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecentStatus of HomeAutomationMovementStatusJSON is not a string.");
    TypeRecentStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ovementDetected") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RecentStatus_MovementDetected;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oMovementDetected") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RecentStatus_NoMovementDetected;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setRecentStatus(the_open_enum);
  }

HomeAutomationMovementStatusJSON::HomeAutomationMovementStatusJSON(void) :
        flagHasRecentStatus(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationMovementStatusJSON::~HomeAutomationMovementStatusJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationMovementStatusJSON::hasRecentStatus(void) const
  {
    return flagHasRecentStatus;
  }

HomeAutomationMovementStatusJSON::TypeRecentStatus HomeAutomationMovementStatusJSON::getRecentStatus(void)
  {
    assert(flagHasRecentStatus);
    return storeRecentStatus;
  }

const HomeAutomationMovementStatusJSON::TypeRecentStatus HomeAutomationMovementStatusJSON::getRecentStatus(void) const
  {
    assert(flagHasRecentStatus);
    return storeRecentStatus;
  }

const char *HomeAutomationMovementStatusJSON::getRecentStatusAsChars(void) const
  {
    TypeRecentStatus result = getRecentStatus();
    if (result.in_known_list)
        return stringFromRecentStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationMovementStatusJSON::getRecentStatusAsString(void) const
  {
    return getRecentStatusAsChars();
  }

HomeAutomationMovementStatusJSON *HomeAutomationMovementStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationMovementStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationMovementStatusJSON>, HomeAutomationMovementStatusJSON *, bool> generator("Type HomeAutomationMovementStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
