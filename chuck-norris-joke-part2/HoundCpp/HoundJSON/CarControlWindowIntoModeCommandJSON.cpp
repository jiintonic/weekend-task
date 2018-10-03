/* file "CarControlWindowIntoModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlWindowIntoModeCommandJSON.h"

#include "CarControlWindowIntoModeCommandJSON.h"


CarControlWindowIntoModeCommandJSON::TypeCommandType CarControlWindowIntoModeCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'R':
            if (strcmp(&(chars[1]), "aining") == 0)
                return CommandType_Raining;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "tinks") == 0)
                return CommandType_Stinks;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlWindowIntoModeCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Raining:
            return "Raining";
        case CommandType_Stinks:
            return "Stinks";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlWindowIntoModeCommandJSON::CarControlWindowIntoModeCommandJSON(const CarControlWindowIntoModeCommandJSON &)
  {
    assert(false);
  }

CarControlWindowIntoModeCommandJSON &CarControlWindowIntoModeCommandJSON::operator=(const CarControlWindowIntoModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlWindowIntoModeCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Raining:
            generated_string_CommandType = new JSONStringValue("Raining");
            break;
        case CommandType_Stinks:
            generated_string_CommandType = new JSONStringValue("Stinks");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlWindowIntoModeCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlWindowIntoModeCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "aining") == 0)
                  {
                    the_enum = CommandType_Raining;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "tinks") == 0)
                  {
                    the_enum = CommandType_Stinks;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlWindowIntoModeCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlWindowIntoModeCommandJSON::CarControlWindowIntoModeCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlWindowIntoModeCommandJSON::~CarControlWindowIntoModeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlWindowIntoModeCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlWindowIntoModeCommand";
  }

bool CarControlWindowIntoModeCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlWindowIntoModeCommandJSON::TypeCommandType CarControlWindowIntoModeCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlWindowIntoModeCommandJSON::TypeCommandType CarControlWindowIntoModeCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlWindowIntoModeCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlWindowIntoModeCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlWindowIntoModeCommandJSON *CarControlWindowIntoModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlWindowIntoModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlWindowIntoModeCommandJSON>, CarControlWindowIntoModeCommandJSON *, bool> generator("Type CarControlWindowIntoModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
