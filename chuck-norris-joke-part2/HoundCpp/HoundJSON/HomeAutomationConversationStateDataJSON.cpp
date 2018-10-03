/* file "HomeAutomationConversationStateDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationConversationStateDataJSON.h"

#include "HomeAutomationConversationStateDataJSON.h"
#include "HomeAutomationDisambiguateSpecifierDataJSON.h"


HomeAutomationConversationStateDataJSON::TypeCommandKind HomeAutomationConversationStateDataJSON::stringToCommandKind(const char *chars)
  {
    if (strncmp(chars, "HomeAutomation", 14) == 0)
      {
        switch ((unsigned char)(chars[14]))
          {
            case 'C':
                if (strcmp(&(chars[15]), "ontrolCommand") == 0)
                    return CommandKind_HomeAutomationControlCommand;
                break;
            case 'L':
                if (strcmp(&(chars[15]), "istUserDataCommand") == 0)
                    return CommandKind_HomeAutomationListUserDataCommand;
                break;
            case 'Q':
                if (strcmp(&(chars[15]), "ueryCommand") == 0)
                    return CommandKind_HomeAutomationQueryCommand;
                break;
            default:
                break;
          }
      }
    throw("The value for field `CommandKind' is not one of the legal values.");
  }

const char *HomeAutomationConversationStateDataJSON::stringFromCommandKind(TypeCommandKind the_enum)
  {
    switch (the_enum)
      {
        case CommandKind_HomeAutomationControlCommand:
            return "HomeAutomationControlCommand";
        case CommandKind_HomeAutomationListUserDataCommand:
            return "HomeAutomationListUserDataCommand";
        case CommandKind_HomeAutomationQueryCommand:
            return "HomeAutomationQueryCommand";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationConversationStateDataJSON::HomeAutomationConversationStateDataJSON(const HomeAutomationConversationStateDataJSON &)
  {
    assert(false);
  }

HomeAutomationConversationStateDataJSON &HomeAutomationConversationStateDataJSON::operator=(const HomeAutomationConversationStateDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationConversationStateDataJSON::fromJSONCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandKind of HomeAutomationConversationStateDataJSON is not a string.");
    TypeCommandKind the_enum;
    if (strncmp(json_string->getData(), "HomeAutomation", 14) == 0)
      {
        switch ((unsigned char)(json_string->getData()[14]))
          {
            case 'C':
                if (strcmp(&(json_string->getData()[15]), "ontrolCommand") == 0)
                      {
                        the_enum = CommandKind_HomeAutomationControlCommand;
                        goto enum_is_done;
                      }
                break;
            case 'L':
                if (strcmp(&(json_string->getData()[15]), "istUserDataCommand") == 0)
                      {
                        the_enum = CommandKind_HomeAutomationListUserDataCommand;
                        goto enum_is_done;
                      }
                break;
            case 'Q':
                if (strcmp(&(json_string->getData()[15]), "ueryCommand") == 0)
                      {
                        the_enum = CommandKind_HomeAutomationQueryCommand;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field CommandKind of HomeAutomationConversationStateDataJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandKind(the_enum);
  }

void HomeAutomationConversationStateDataJSON::fromJSONCompactDeviceSpecifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationCompactDeviceSpecifierJSON *convert_classy = HomeAutomationCompactDeviceSpecifierJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCompactDeviceSpecifier(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationConversationStateDataJSON::fromJSONFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationQueryHintJSON *convert_classy = HomeAutomationQueryHintJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFilter(convert_classy);
    convert_classy->remove_reference();
  }

void HomeAutomationConversationStateDataJSON::fromJSONNegativeDelta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field NegativeDelta of HomeAutomationConversationStateDataJSON is not true for false.");
          }
      }
    setNegativeDelta(the_bool);
  }

HomeAutomationConversationStateDataJSON::HomeAutomationConversationStateDataJSON(void) :
        flagHasCommandKind(false),
        flagHasCompactDeviceSpecifier(false),
        flagHasFilter(false),
        flagHasNegativeDelta(false)
  {
    storeNegativeDelta = false;
    extraIndex = create_string_index();
  }

HomeAutomationConversationStateDataJSON::~HomeAutomationConversationStateDataJSON(void)
  {
    if (flagHasCompactDeviceSpecifier)
      {
        storeCompactDeviceSpecifier->remove_reference();
      }
    if (flagHasFilter)
      {
        storeFilter->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationConversationStateDataJSON::hasCommandKind(void) const
  {
    return flagHasCommandKind;
  }

HomeAutomationConversationStateDataJSON::TypeCommandKind HomeAutomationConversationStateDataJSON::getCommandKind(void)
  {
    assert(flagHasCommandKind);
    return storeCommandKind;
  }

const HomeAutomationConversationStateDataJSON::TypeCommandKind HomeAutomationConversationStateDataJSON::getCommandKind(void) const
  {
    assert(flagHasCommandKind);
    return storeCommandKind;
  }

const char *HomeAutomationConversationStateDataJSON::getCommandKindAsChars(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

std::string HomeAutomationConversationStateDataJSON::getCommandKindAsString(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

bool HomeAutomationConversationStateDataJSON::hasCompactDeviceSpecifier(void) const
  {
    return flagHasCompactDeviceSpecifier;
  }

HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationConversationStateDataJSON::getCompactDeviceSpecifier(void)
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

const HomeAutomationCompactDeviceSpecifierJSON * HomeAutomationConversationStateDataJSON::getCompactDeviceSpecifier(void) const
  {
    assert(flagHasCompactDeviceSpecifier);
    return storeCompactDeviceSpecifier;
  }

bool HomeAutomationConversationStateDataJSON::hasFilter(void) const
  {
    return flagHasFilter;
  }

HomeAutomationQueryHintJSON * HomeAutomationConversationStateDataJSON::getFilter(void)
  {
    assert(flagHasFilter);
    return storeFilter;
  }

const HomeAutomationQueryHintJSON * HomeAutomationConversationStateDataJSON::getFilter(void) const
  {
    assert(flagHasFilter);
    return storeFilter;
  }

bool HomeAutomationConversationStateDataJSON::hasNegativeDelta(void) const
  {
    return flagHasNegativeDelta;
  }

bool HomeAutomationConversationStateDataJSON::getNegativeDelta(void)
  {
    return storeNegativeDelta;
  }

const bool HomeAutomationConversationStateDataJSON::getNegativeDelta(void) const
  {
    return storeNegativeDelta;
  }

HomeAutomationConversationStateDataJSON *HomeAutomationConversationStateDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationConversationStateDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationConversationStateDataJSON>, HomeAutomationConversationStateDataJSON *, bool> generator("Type HomeAutomationConversationStateData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
