/* file "CarControlLightsIntoModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlLightsIntoModeCommandJSON.h"

#include "CarControlLightsIntoModeCommandJSON.h"


CarControlLightsIntoModeCommandJSON::TypeCommandType CarControlLightsIntoModeCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "arkOut") == 0)
                return CommandType_DarkOut;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "oggy") == 0)
                return CommandType_Foggy;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlLightsIntoModeCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Foggy:
            return "Foggy";
        case CommandType_DarkOut:
            return "DarkOut";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlLightsIntoModeCommandJSON::CarControlLightsIntoModeCommandJSON(const CarControlLightsIntoModeCommandJSON &)
  {
    assert(false);
  }

CarControlLightsIntoModeCommandJSON &CarControlLightsIntoModeCommandJSON::operator=(const CarControlLightsIntoModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlLightsIntoModeCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Foggy:
            generated_string_CommandType = new JSONStringValue("Foggy");
            break;
        case CommandType_DarkOut:
            generated_string_CommandType = new JSONStringValue("DarkOut");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlLightsIntoModeCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlLightsIntoModeCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "arkOut") == 0)
                  {
                    the_enum = CommandType_DarkOut;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "oggy") == 0)
                  {
                    the_enum = CommandType_Foggy;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlLightsIntoModeCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlLightsIntoModeCommandJSON::CarControlLightsIntoModeCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlLightsIntoModeCommandJSON::~CarControlLightsIntoModeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlLightsIntoModeCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlLightsIntoModeCommand";
  }

bool CarControlLightsIntoModeCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlLightsIntoModeCommandJSON::TypeCommandType CarControlLightsIntoModeCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlLightsIntoModeCommandJSON::TypeCommandType CarControlLightsIntoModeCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlLightsIntoModeCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlLightsIntoModeCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlLightsIntoModeCommandJSON *CarControlLightsIntoModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlLightsIntoModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlLightsIntoModeCommandJSON>, CarControlLightsIntoModeCommandJSON *, bool> generator("Type CarControlLightsIntoModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
