/* file "HomeAutomationMotionStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationMotionStatusJSON.h"

#include "HomeAutomationMotionStatusJSON.h"


HomeAutomationMotionStatusJSON::TypeRecentStatus::TypeRecentStatus(void)
  {
  }

HomeAutomationMotionStatusJSON::TypeRecentStatus::TypeRecentStatus(const TypeRecentStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationMotionStatusJSON::TypeRecentStatus::TypeRecentStatus(TypeRecentStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator==(const TypeRecentStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator!=(const TypeRecentStatus &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator<(const TypeRecentStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator>(const TypeRecentStatus &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator>=(const TypeRecentStatus &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationMotionStatusJSON::TypeRecentStatus::operator<=(const TypeRecentStatus &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationMotionStatusJSON::TypeRecentStatusKnownValues HomeAutomationMotionStatusJSON::stringToRecentStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "otionDetected") == 0)
                return RecentStatus_MotionDetected;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oMotionDetected") == 0)
                return RecentStatus_NoMotionDetected;
            break;
        default:
            break;
      }
    return RecentStatus__none;
  }

const char *HomeAutomationMotionStatusJSON::stringFromRecentStatus(TypeRecentStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case RecentStatus_NoMotionDetected:
            return "NoMotionDetected";
        case RecentStatus_MotionDetected:
            return "MotionDetected";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationMotionStatusJSON::HomeAutomationMotionStatusJSON(const HomeAutomationMotionStatusJSON &)
  {
    assert(false);
  }

HomeAutomationMotionStatusJSON &HomeAutomationMotionStatusJSON::operator=(const HomeAutomationMotionStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationMotionStatusJSON::fromJSONRecentStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecentStatus of HomeAutomationMotionStatusJSON is not a string.");
    TypeRecentStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "otionDetected") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RecentStatus_MotionDetected;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oMotionDetected") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RecentStatus_NoMotionDetected;
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

HomeAutomationMotionStatusJSON::HomeAutomationMotionStatusJSON(void) :
        flagHasRecentStatus(false)
  {
    extraIndex = create_string_index();
  }

HomeAutomationMotionStatusJSON::~HomeAutomationMotionStatusJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationMotionStatusJSON::hasRecentStatus(void) const
  {
    return flagHasRecentStatus;
  }

HomeAutomationMotionStatusJSON::TypeRecentStatus HomeAutomationMotionStatusJSON::getRecentStatus(void)
  {
    assert(flagHasRecentStatus);
    return storeRecentStatus;
  }

const HomeAutomationMotionStatusJSON::TypeRecentStatus HomeAutomationMotionStatusJSON::getRecentStatus(void) const
  {
    assert(flagHasRecentStatus);
    return storeRecentStatus;
  }

const char *HomeAutomationMotionStatusJSON::getRecentStatusAsChars(void) const
  {
    TypeRecentStatus result = getRecentStatus();
    if (result.in_known_list)
        return stringFromRecentStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationMotionStatusJSON::getRecentStatusAsString(void) const
  {
    return getRecentStatusAsChars();
  }

HomeAutomationMotionStatusJSON *HomeAutomationMotionStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationMotionStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationMotionStatusJSON>, HomeAutomationMotionStatusJSON *, bool> generator("Type HomeAutomationMotionStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
