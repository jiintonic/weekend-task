/* file "HomeAutomationDomainSettingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationDomainSettingsJSON.h"

#include "HomeAutomationDomainSettingsJSON.h"


HomeAutomationDomainSettingsJSON::TypeHereBehavior::TypeHereBehavior(void)
  {
  }

HomeAutomationDomainSettingsJSON::TypeHereBehavior::TypeHereBehavior(const TypeHereBehavior &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationDomainSettingsJSON::TypeHereBehavior::TypeHereBehavior(TypeHereBehaviorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator==(const TypeHereBehavior &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator!=(const TypeHereBehavior &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator<(const TypeHereBehavior &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator>(const TypeHereBehavior &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator>=(const TypeHereBehavior &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationDomainSettingsJSON::TypeHereBehavior::operator<=(const TypeHereBehavior &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationDomainSettingsJSON::TypeHereBehaviorKnownValues HomeAutomationDomainSettingsJSON::stringToHereBehavior(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'A':
                        if (strcmp(&(chars[4]), "lways") == 0)
                            return HereBehavior_AskAlways;
                        break;
                    case 'W':
                        if (strcmp(&(chars[4]), "henNoHere") == 0)
                            return HereBehavior_AskWhenNoHere;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "oNotMatch") == 0)
                return HereBehavior_DoNotMatch;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "seHere") == 0)
                return HereBehavior_UseHere;
            break;
        default:
            break;
      }
    return HereBehavior__none;
  }

const char *HomeAutomationDomainSettingsJSON::stringFromHereBehavior(TypeHereBehaviorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case HereBehavior_UseHere:
            return "UseHere";
        case HereBehavior_AskWhenNoHere:
            return "AskWhenNoHere";
        case HereBehavior_AskAlways:
            return "AskAlways";
        case HereBehavior_DoNotMatch:
            return "DoNotMatch";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::TypeAmbiguousMatchBehavior(void)
  {
  }

HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::TypeAmbiguousMatchBehavior(const TypeAmbiguousMatchBehavior &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::TypeAmbiguousMatchBehavior(TypeAmbiguousMatchBehaviorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator==(const TypeAmbiguousMatchBehavior &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator!=(const TypeAmbiguousMatchBehavior &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator<(const TypeAmbiguousMatchBehavior &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator>(const TypeAmbiguousMatchBehavior &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator>=(const TypeAmbiguousMatchBehavior &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior::operator<=(const TypeAmbiguousMatchBehavior &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehaviorKnownValues HomeAutomationDomainSettingsJSON::stringToAmbiguousMatchBehavior(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "skAlways") == 0)
                return AmbiguousMatchBehavior_AskAlways;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eturnAllMatches") == 0)
                return AmbiguousMatchBehavior_ReturnAllMatches;
            break;
        default:
            break;
      }
    return AmbiguousMatchBehavior__none;
  }

const char *HomeAutomationDomainSettingsJSON::stringFromAmbiguousMatchBehavior(TypeAmbiguousMatchBehaviorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case AmbiguousMatchBehavior_ReturnAllMatches:
            return "ReturnAllMatches";
        case AmbiguousMatchBehavior_AskAlways:
            return "AskAlways";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationDomainSettingsJSON::HomeAutomationDomainSettingsJSON(const HomeAutomationDomainSettingsJSON &)
  {
    assert(false);
  }

HomeAutomationDomainSettingsJSON &HomeAutomationDomainSettingsJSON::operator=(const HomeAutomationDomainSettingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationDomainSettingsJSON::fromJSONHereBehavior(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HereBehavior of HomeAutomationDomainSettingsJSON is not a string.");
    TypeHereBehavior the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "sk", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[4]), "lways") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = HereBehavior_AskAlways;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[4]), "henNoHere") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = HereBehavior_AskWhenNoHere;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "oNotMatch") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HereBehavior_DoNotMatch;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "seHere") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HereBehavior_UseHere;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setHereBehavior(the_open_enum);
  }

void HomeAutomationDomainSettingsJSON::fromJSONHereDevices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDeviceListJSON *convert_classy = HomeAutomationDeviceListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHereDevices(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDomainSettingsJSON::fromJSONHereGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationGroupListJSON *convert_classy = HomeAutomationGroupListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHereGroups(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationDomainSettingsJSON::fromJSONAmbiguousMatchBehavior(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmbiguousMatchBehavior of HomeAutomationDomainSettingsJSON is not a string.");
    TypeAmbiguousMatchBehavior the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "skAlways") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = AmbiguousMatchBehavior_AskAlways;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "eturnAllMatches") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = AmbiguousMatchBehavior_ReturnAllMatches;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setAmbiguousMatchBehavior(the_open_enum);
  }

HomeAutomationDomainSettingsJSON::HomeAutomationDomainSettingsJSON(void) :
        flagHasHereBehavior(false),
        flagHasHereDevices(false),
        flagHasHereGroups(false),
        flagHasAmbiguousMatchBehavior(false)
  {
    storeHereBehavior.in_known_list = true;
    storeHereBehavior.list_value = HereBehavior_AskWhenNoHere;
    storeAmbiguousMatchBehavior.in_known_list = true;
    storeAmbiguousMatchBehavior.list_value = AmbiguousMatchBehavior_AskAlways;
    extraIndex = create_string_index();
  }

HomeAutomationDomainSettingsJSON::~HomeAutomationDomainSettingsJSON(void)
  {
    if (flagHasHereDevices)
      {
        storeHereDevices->remove_reference();
      }
    if (flagHasHereGroups)
      {
        storeHereGroups->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationDomainSettingsJSON::hasHereBehavior(void) const
  {
    return flagHasHereBehavior;
  }

HomeAutomationDomainSettingsJSON::TypeHereBehavior HomeAutomationDomainSettingsJSON::getHereBehavior(void)
  {
    return storeHereBehavior;
  }

const HomeAutomationDomainSettingsJSON::TypeHereBehavior HomeAutomationDomainSettingsJSON::getHereBehavior(void) const
  {
    return storeHereBehavior;
  }

const char *HomeAutomationDomainSettingsJSON::getHereBehaviorAsChars(void) const
  {
    TypeHereBehavior result = getHereBehavior();
    if (result.in_known_list)
        return stringFromHereBehavior(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationDomainSettingsJSON::getHereBehaviorAsString(void) const
  {
    return getHereBehaviorAsChars();
  }

bool HomeAutomationDomainSettingsJSON::hasHereDevices(void) const
  {
    return flagHasHereDevices;
  }

HomeAutomationDeviceListJSON * HomeAutomationDomainSettingsJSON::getHereDevices(void)
  {
    assert(flagHasHereDevices);
    return storeHereDevices;
  }

const HomeAutomationDeviceListJSON * HomeAutomationDomainSettingsJSON::getHereDevices(void) const
  {
    assert(flagHasHereDevices);
    return storeHereDevices;
  }

bool HomeAutomationDomainSettingsJSON::hasHereGroups(void) const
  {
    return flagHasHereGroups;
  }

HomeAutomationGroupListJSON * HomeAutomationDomainSettingsJSON::getHereGroups(void)
  {
    assert(flagHasHereGroups);
    return storeHereGroups;
  }

const HomeAutomationGroupListJSON * HomeAutomationDomainSettingsJSON::getHereGroups(void) const
  {
    assert(flagHasHereGroups);
    return storeHereGroups;
  }

bool HomeAutomationDomainSettingsJSON::hasAmbiguousMatchBehavior(void) const
  {
    return flagHasAmbiguousMatchBehavior;
  }

HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior HomeAutomationDomainSettingsJSON::getAmbiguousMatchBehavior(void)
  {
    return storeAmbiguousMatchBehavior;
  }

const HomeAutomationDomainSettingsJSON::TypeAmbiguousMatchBehavior HomeAutomationDomainSettingsJSON::getAmbiguousMatchBehavior(void) const
  {
    return storeAmbiguousMatchBehavior;
  }

const char *HomeAutomationDomainSettingsJSON::getAmbiguousMatchBehaviorAsChars(void) const
  {
    TypeAmbiguousMatchBehavior result = getAmbiguousMatchBehavior();
    if (result.in_known_list)
        return stringFromAmbiguousMatchBehavior(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationDomainSettingsJSON::getAmbiguousMatchBehaviorAsString(void) const
  {
    return getAmbiguousMatchBehaviorAsChars();
  }

HomeAutomationDomainSettingsJSON *HomeAutomationDomainSettingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationDomainSettingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDomainSettingsJSON>, HomeAutomationDomainSettingsJSON *, bool> generator("Type HomeAutomationDomainSettings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
