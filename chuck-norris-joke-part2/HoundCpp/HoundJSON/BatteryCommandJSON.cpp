/* file "BatteryCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BatteryCommandJSON.h"

#include "BatteryCommandJSON.h"


BatteryCommandJSON::TypeCommandType BatteryCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckBatteryState") == 0)
                return CommandType_CheckBatteryState;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "hatsUsingBattery") == 0)
                return CommandType_WhatsUsingBattery;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *BatteryCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_CheckBatteryState:
            return "CheckBatteryState";
        case CommandType_WhatsUsingBattery:
            return "WhatsUsingBattery";
        default:
            assert(false);
            return NULL;
      }
  }

BatteryCommandJSON::BatteryCommandJSON(const BatteryCommandJSON &)
  {
    assert(false);
  }

BatteryCommandJSON &BatteryCommandJSON::operator=(const BatteryCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BatteryCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_CheckBatteryState:
            generated_string_CommandType = new JSONStringValue("CheckBatteryState");
            break;
        case CommandType_WhatsUsingBattery:
            generated_string_CommandType = new JSONStringValue("WhatsUsingBattery");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void BatteryCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of BatteryCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckBatteryState") == 0)
                  {
                    the_enum = CommandType_CheckBatteryState;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "hatsUsingBattery") == 0)
                  {
                    the_enum = CommandType_WhatsUsingBattery;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of BatteryCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

BatteryCommandJSON::BatteryCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

BatteryCommandJSON::~BatteryCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BatteryCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "BatteryCommand";
  }

bool BatteryCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

BatteryCommandJSON::TypeCommandType BatteryCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const BatteryCommandJSON::TypeCommandType BatteryCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *BatteryCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string BatteryCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

BatteryCommandJSON *BatteryCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BatteryCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BatteryCommandJSON>, BatteryCommandJSON *, bool> generator("Type BatteryCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
