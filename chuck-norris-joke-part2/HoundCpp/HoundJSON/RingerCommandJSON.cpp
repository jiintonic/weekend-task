/* file "RingerCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RingerCommandJSON.h"

#include "RingerCommandJSON.h"


RingerCommandJSON::TypeCommandType RingerCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckRingerState") == 0)
                return CommandType_CheckRingerState;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "uteMode") == 0)
                return CommandType_MuteMode;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ingingMode") == 0)
                return CommandType_RingingMode;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "urnVibrateO", 11) == 0)
              {
                switch ((unsigned char)(chars[12]))
                  {
                    case 'f':
                        if (strcmp(&(chars[13]), "f") == 0)
                            return CommandType_TurnVibrateOff;
                        break;
                    case 'n':
                        if (chars[13] == 0)
                            return CommandType_TurnVibrateOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'V':
            if (strcmp(&(chars[1]), "ibrateMode") == 0)
                return CommandType_VibrateMode;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *RingerCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_RingingMode:
            return "RingingMode";
        case CommandType_VibrateMode:
            return "VibrateMode";
        case CommandType_MuteMode:
            return "MuteMode";
        case CommandType_CheckRingerState:
            return "CheckRingerState";
        case CommandType_TurnVibrateOn:
            return "TurnVibrateOn";
        case CommandType_TurnVibrateOff:
            return "TurnVibrateOff";
        default:
            assert(false);
            return NULL;
      }
  }

RingerCommandJSON::RingerCommandJSON(const RingerCommandJSON &)
  {
    assert(false);
  }

RingerCommandJSON &RingerCommandJSON::operator=(const RingerCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RingerCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_RingingMode:
            generated_string_CommandType = new JSONStringValue("RingingMode");
            break;
        case CommandType_VibrateMode:
            generated_string_CommandType = new JSONStringValue("VibrateMode");
            break;
        case CommandType_MuteMode:
            generated_string_CommandType = new JSONStringValue("MuteMode");
            break;
        case CommandType_CheckRingerState:
            generated_string_CommandType = new JSONStringValue("CheckRingerState");
            break;
        case CommandType_TurnVibrateOn:
            generated_string_CommandType = new JSONStringValue("TurnVibrateOn");
            break;
        case CommandType_TurnVibrateOff:
            generated_string_CommandType = new JSONStringValue("TurnVibrateOff");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void RingerCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of RingerCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckRingerState") == 0)
                  {
                    the_enum = CommandType_CheckRingerState;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "uteMode") == 0)
                  {
                    the_enum = CommandType_MuteMode;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ingingMode") == 0)
                  {
                    the_enum = CommandType_RingingMode;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "urnVibrateO", 11) == 0)
              {
                switch ((unsigned char)(json_string->getData()[12]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[13]), "f") == 0)
                              {
                                the_enum = CommandType_TurnVibrateOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[13] == 0)
                              {
                                the_enum = CommandType_TurnVibrateOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'V':
            if (strcmp(&(json_string->getData()[1]), "ibrateMode") == 0)
                  {
                    the_enum = CommandType_VibrateMode;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of RingerCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

RingerCommandJSON::RingerCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

RingerCommandJSON::~RingerCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RingerCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "RingerCommand";
  }

bool RingerCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

RingerCommandJSON::TypeCommandType RingerCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const RingerCommandJSON::TypeCommandType RingerCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *RingerCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string RingerCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

RingerCommandJSON *RingerCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RingerCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RingerCommandJSON>, RingerCommandJSON *, bool> generator("Type RingerCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
