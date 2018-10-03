/* file "CarControlClimateIntoModeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlClimateIntoModeCommandJSON.h"

#include "CarControlClimateIntoModeCommandJSON.h"


CarControlClimateIntoModeCommandJSON::TypeCommandType CarControlClimateIntoModeCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "skFor", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'F':
                        if (strcmp(&(chars[7]), "anMode") == 0)
                            return CommandType_AskForFanMode;
                        break;
                    case 'T':
                        if (strcmp(&(chars[7]), "emperature") == 0)
                            return CommandType_AskForTemperature;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'B':
            if (strcmp(&(chars[1]), "adAir") == 0)
                return CommandType_BadAir;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "oo", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'C':
                        if (strcmp(&(chars[4]), "old") == 0)
                            return CommandType_TooCold;
                        break;
                    case 'H':
                        if (strcmp(&(chars[4]), "ot") == 0)
                            return CommandType_TooHot;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlClimateIntoModeCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TooHot:
            return "TooHot";
        case CommandType_TooCold:
            return "TooCold";
        case CommandType_BadAir:
            return "BadAir";
        case CommandType_AskForFanMode:
            return "AskForFanMode";
        case CommandType_AskForTemperature:
            return "AskForTemperature";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlClimateIntoModeCommandJSON::CarControlClimateIntoModeCommandJSON(const CarControlClimateIntoModeCommandJSON &)
  {
    assert(false);
  }

CarControlClimateIntoModeCommandJSON &CarControlClimateIntoModeCommandJSON::operator=(const CarControlClimateIntoModeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlClimateIntoModeCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TooHot:
            generated_string_CommandType = new JSONStringValue("TooHot");
            break;
        case CommandType_TooCold:
            generated_string_CommandType = new JSONStringValue("TooCold");
            break;
        case CommandType_BadAir:
            generated_string_CommandType = new JSONStringValue("BadAir");
            break;
        case CommandType_AskForFanMode:
            generated_string_CommandType = new JSONStringValue("AskForFanMode");
            break;
        case CommandType_AskForTemperature:
            generated_string_CommandType = new JSONStringValue("AskForTemperature");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlClimateIntoModeCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlClimateIntoModeCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strncmp(&(json_string->getData()[1]), "skFor", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[7]), "anMode") == 0)
                              {
                                the_enum = CommandType_AskForFanMode;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[7]), "emperature") == 0)
                              {
                                the_enum = CommandType_AskForTemperature;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "adAir") == 0)
                  {
                    the_enum = CommandType_BadAir;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "oo", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'C':
                        if (strcmp(&(json_string->getData()[4]), "old") == 0)
                              {
                                the_enum = CommandType_TooCold;
                                goto enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[4]), "ot") == 0)
                              {
                                the_enum = CommandType_TooHot;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlClimateIntoModeCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlClimateIntoModeCommandJSON::CarControlClimateIntoModeCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlClimateIntoModeCommandJSON::~CarControlClimateIntoModeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlClimateIntoModeCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlClimateIntoModeCommand";
  }

bool CarControlClimateIntoModeCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlClimateIntoModeCommandJSON::TypeCommandType CarControlClimateIntoModeCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlClimateIntoModeCommandJSON::TypeCommandType CarControlClimateIntoModeCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlClimateIntoModeCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlClimateIntoModeCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlClimateIntoModeCommandJSON *CarControlClimateIntoModeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlClimateIntoModeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlClimateIntoModeCommandJSON>, CarControlClimateIntoModeCommandJSON *, bool> generator("Type CarControlClimateIntoModeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
