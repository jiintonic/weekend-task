/* file "VoiceSynthesisCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "VoiceSynthesisCommandJSON.h"

#include "VoiceSynthesisCommandJSON.h"


VoiceSynthesisCommandJSON::TypeCommandType VoiceSynthesisCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strncmp(&(chars[1]), "itch", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'D':
                        if (strcmp(&(chars[6]), "efault") == 0)
                            return CommandType_PitchDefault;
                        break;
                    case 'H':
                        if (strcmp(&(chars[6]), "igher") == 0)
                            return CommandType_PitchHigher;
                        break;
                    case 'L':
                        if (strcmp(&(chars[6]), "ower") == 0)
                            return CommandType_PitchLower;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strcmp(&(chars[1]), "epeatSlower") == 0)
                return CommandType_RepeatSlower;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "peed", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'F':
                        if (strcmp(&(chars[6]), "aster") == 0)
                            return CommandType_SpeedFaster;
                        break;
                    case 'N':
                        if (strcmp(&(chars[6]), "ormal") == 0)
                            return CommandType_SpeedNormal;
                        break;
                    case 'S':
                        if (strcmp(&(chars[6]), "lower") == 0)
                            return CommandType_SpeedSlower;
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

const char *VoiceSynthesisCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_SpeedFaster:
            return "SpeedFaster";
        case CommandType_SpeedSlower:
            return "SpeedSlower";
        case CommandType_SpeedNormal:
            return "SpeedNormal";
        case CommandType_RepeatSlower:
            return "RepeatSlower";
        case CommandType_PitchHigher:
            return "PitchHigher";
        case CommandType_PitchLower:
            return "PitchLower";
        case CommandType_PitchDefault:
            return "PitchDefault";
        default:
            assert(false);
            return NULL;
      }
  }

VoiceSynthesisCommandJSON::VoiceSynthesisCommandJSON(const VoiceSynthesisCommandJSON &)
  {
    assert(false);
  }

VoiceSynthesisCommandJSON &VoiceSynthesisCommandJSON::operator=(const VoiceSynthesisCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *VoiceSynthesisCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_SpeedFaster:
            generated_string_CommandType = new JSONStringValue("SpeedFaster");
            break;
        case CommandType_SpeedSlower:
            generated_string_CommandType = new JSONStringValue("SpeedSlower");
            break;
        case CommandType_SpeedNormal:
            generated_string_CommandType = new JSONStringValue("SpeedNormal");
            break;
        case CommandType_RepeatSlower:
            generated_string_CommandType = new JSONStringValue("RepeatSlower");
            break;
        case CommandType_PitchHigher:
            generated_string_CommandType = new JSONStringValue("PitchHigher");
            break;
        case CommandType_PitchLower:
            generated_string_CommandType = new JSONStringValue("PitchLower");
            break;
        case CommandType_PitchDefault:
            generated_string_CommandType = new JSONStringValue("PitchDefault");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void VoiceSynthesisCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of VoiceSynthesisCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strncmp(&(json_string->getData()[1]), "itch", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[6]), "efault") == 0)
                              {
                                the_enum = CommandType_PitchDefault;
                                goto enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[6]), "igher") == 0)
                              {
                                the_enum = CommandType_PitchHigher;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[6]), "ower") == 0)
                              {
                                the_enum = CommandType_PitchLower;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "epeatSlower") == 0)
                  {
                    the_enum = CommandType_RepeatSlower;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "peed", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'F':
                        if (strcmp(&(json_string->getData()[6]), "aster") == 0)
                              {
                                the_enum = CommandType_SpeedFaster;
                                goto enum_is_done;
                              }
                        break;
                    case 'N':
                        if (strcmp(&(json_string->getData()[6]), "ormal") == 0)
                              {
                                the_enum = CommandType_SpeedNormal;
                                goto enum_is_done;
                              }
                        break;
                    case 'S':
                        if (strcmp(&(json_string->getData()[6]), "lower") == 0)
                              {
                                the_enum = CommandType_SpeedSlower;
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
    throw("The value for field CommandType of VoiceSynthesisCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

VoiceSynthesisCommandJSON::VoiceSynthesisCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

VoiceSynthesisCommandJSON::~VoiceSynthesisCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *VoiceSynthesisCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "VoiceSynthesisCommand";
  }

bool VoiceSynthesisCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

VoiceSynthesisCommandJSON::TypeCommandType VoiceSynthesisCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const VoiceSynthesisCommandJSON::TypeCommandType VoiceSynthesisCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *VoiceSynthesisCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string VoiceSynthesisCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

VoiceSynthesisCommandJSON *VoiceSynthesisCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    VoiceSynthesisCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<VoiceSynthesisCommandJSON>, VoiceSynthesisCommandJSON *, bool> generator("Type VoiceSynthesisCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
