/* file "CarControlClimateModeNotUnderstoodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlClimateModeNotUnderstoodJSON.h"

#include "CarControlClimateModeNotUnderstoodJSON.h"


CarControlClimateModeNotUnderstoodJSON::TypeCommandType CarControlClimateModeNotUnderstoodJSON::stringToCommandType(const char *chars)
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

const char *CarControlClimateModeNotUnderstoodJSON::stringFromCommandType(TypeCommandType the_enum)
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

CarControlClimateModeNotUnderstoodJSON::CarControlClimateModeNotUnderstoodJSON(const CarControlClimateModeNotUnderstoodJSON &)
  {
    assert(false);
  }

CarControlClimateModeNotUnderstoodJSON &CarControlClimateModeNotUnderstoodJSON::operator=(const CarControlClimateModeNotUnderstoodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlClimateModeNotUnderstoodJSON::extraCommandTypeToJSON(void) const
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

void CarControlClimateModeNotUnderstoodJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlClimateModeNotUnderstoodJSON is not a string.");
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
    throw("The value for field CommandType of CarControlClimateModeNotUnderstoodJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlClimateModeNotUnderstoodJSON::CarControlClimateModeNotUnderstoodJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlClimateModeNotUnderstoodJSON::~CarControlClimateModeNotUnderstoodJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlClimateModeNotUnderstoodJSON::getCarControlCommandKind(void) const
  {
    return "CarControlClimateModeNotUnderstood";
  }

bool CarControlClimateModeNotUnderstoodJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlClimateModeNotUnderstoodJSON::TypeCommandType CarControlClimateModeNotUnderstoodJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlClimateModeNotUnderstoodJSON::TypeCommandType CarControlClimateModeNotUnderstoodJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlClimateModeNotUnderstoodJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlClimateModeNotUnderstoodJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlClimateModeNotUnderstoodJSON *CarControlClimateModeNotUnderstoodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlClimateModeNotUnderstoodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlClimateModeNotUnderstoodJSON>, CarControlClimateModeNotUnderstoodJSON *, bool> generator("Type CarControlClimateModeNotUnderstood", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
