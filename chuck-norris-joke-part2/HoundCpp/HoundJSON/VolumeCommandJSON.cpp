/* file "VolumeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "VolumeCommandJSON.h"

#include "VolumeCommandJSON.h"


VolumeCommandJSON::TypeCommandType VolumeCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "djustVolume") == 0)
                return CommandType_AdjustVolume;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "uteSound") == 0)
                return CommandType_MuteSound;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "etVolume") == 0)
                return CommandType_SetVolume;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nMuteSound") == 0)
                return CommandType_UnMuteSound;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *VolumeCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_AdjustVolume:
            return "AdjustVolume";
        case CommandType_SetVolume:
            return "SetVolume";
        case CommandType_MuteSound:
            return "MuteSound";
        case CommandType_UnMuteSound:
            return "UnMuteSound";
        default:
            assert(false);
            return NULL;
      }
  }

VolumeCommandJSON::VolumeCommandJSON(const VolumeCommandJSON &)
  {
    assert(false);
  }

VolumeCommandJSON &VolumeCommandJSON::operator=(const VolumeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *VolumeCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_AdjustVolume:
            generated_string_CommandType = new JSONStringValue("AdjustVolume");
            break;
        case CommandType_SetVolume:
            generated_string_CommandType = new JSONStringValue("SetVolume");
            break;
        case CommandType_MuteSound:
            generated_string_CommandType = new JSONStringValue("MuteSound");
            break;
        case CommandType_UnMuteSound:
            generated_string_CommandType = new JSONStringValue("UnMuteSound");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *VolumeCommandJSON::extraVolumeValueToJSON(void) const
  {
    JSONValue *generated_rational_VolumeValue;
    if (((double)(long int)storeVolumeValue) == storeVolumeValue)
        generated_rational_VolumeValue = new JSONIntegerValue((long int)(storeVolumeValue));
    else
        generated_rational_VolumeValue = new JSONRationalValue(storeVolumeValue, DBL_DIG);
    return generated_rational_VolumeValue;
  }

JSONValue *VolumeCommandJSON::extraVolumeLevelToJSON(void) const
  {
    JSONValue *generated_rational_VolumeLevel;
    if (((double)(long int)storeVolumeLevel) == storeVolumeLevel)
        generated_rational_VolumeLevel = new JSONIntegerValue((long int)(storeVolumeLevel));
    else
        generated_rational_VolumeLevel = new JSONRationalValue(storeVolumeLevel, DBL_DIG);
    return generated_rational_VolumeLevel;
  }

JSONValue *VolumeCommandJSON::extraVolumeDeltaToJSON(void) const
  {
    JSONValue *generated_rational_VolumeDelta;
    if (((double)(long int)storeVolumeDelta) == storeVolumeDelta)
        generated_rational_VolumeDelta = new JSONIntegerValue((long int)(storeVolumeDelta));
    else
        generated_rational_VolumeDelta = new JSONRationalValue(storeVolumeDelta, DBL_DIG);
    return generated_rational_VolumeDelta;
  }

void VolumeCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of VolumeCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "djustVolume") == 0)
                  {
                    the_enum = CommandType_AdjustVolume;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "uteSound") == 0)
                  {
                    the_enum = CommandType_MuteSound;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "etVolume") == 0)
                  {
                    the_enum = CommandType_SetVolume;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nMuteSound") == 0)
                  {
                    the_enum = CommandType_UnMuteSound;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of VolumeCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void VolumeCommandJSON::fromJSONVolumeValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field VolumeValue of VolumeCommandJSON is not a number.");
          }
      }
    setVolumeValueText(the_rational_text);
  }

void VolumeCommandJSON::fromJSONVolumeLevel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field VolumeLevel of VolumeCommandJSON is not a number.");
          }
      }
    setVolumeLevelText(the_rational_text);
  }

void VolumeCommandJSON::fromJSONVolumeDelta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field VolumeDelta of VolumeCommandJSON is not a number.");
          }
      }
    setVolumeDeltaText(the_rational_text);
  }

VolumeCommandJSON::VolumeCommandJSON(void) :
        flagHasCommandType(false),
        flagHasVolumeValue(false),
        flagHasVolumeLevel(false),
        flagHasVolumeDelta(false)
  {
    extraIndex = create_string_index();
  }

VolumeCommandJSON::~VolumeCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *VolumeCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "VolumeCommand";
  }

bool VolumeCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

VolumeCommandJSON::TypeCommandType VolumeCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const VolumeCommandJSON::TypeCommandType VolumeCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *VolumeCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string VolumeCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool VolumeCommandJSON::hasVolumeValue(void) const
  {
    return flagHasVolumeValue;
  }

double VolumeCommandJSON::getVolumeValue(void)
  {
    assert(flagHasVolumeValue);
    if (textStoreVolumeValue != "")
      {
        return atof(textStoreVolumeValue.c_str());
      }
    return storeVolumeValue;
  }

const double VolumeCommandJSON::getVolumeValue(void) const
  {
    assert(flagHasVolumeValue);
    if (textStoreVolumeValue != "")
      {
        return atof(textStoreVolumeValue.c_str());
      }
    return storeVolumeValue;
  }

std::string VolumeCommandJSON::getVolumeValueAsText(void) const
  {
    assert(flagHasVolumeValue);
    if (textStoreVolumeValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeVolumeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreVolumeValue);
      }
  }

bool VolumeCommandJSON::hasVolumeLevel(void) const
  {
    return flagHasVolumeLevel;
  }

double VolumeCommandJSON::getVolumeLevel(void)
  {
    assert(flagHasVolumeLevel);
    if (textStoreVolumeLevel != "")
      {
        return atof(textStoreVolumeLevel.c_str());
      }
    return storeVolumeLevel;
  }

const double VolumeCommandJSON::getVolumeLevel(void) const
  {
    assert(flagHasVolumeLevel);
    if (textStoreVolumeLevel != "")
      {
        return atof(textStoreVolumeLevel.c_str());
      }
    return storeVolumeLevel;
  }

std::string VolumeCommandJSON::getVolumeLevelAsText(void) const
  {
    assert(flagHasVolumeLevel);
    if (textStoreVolumeLevel == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeVolumeLevel);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreVolumeLevel);
      }
  }

bool VolumeCommandJSON::hasVolumeDelta(void) const
  {
    return flagHasVolumeDelta;
  }

double VolumeCommandJSON::getVolumeDelta(void)
  {
    assert(flagHasVolumeDelta);
    if (textStoreVolumeDelta != "")
      {
        return atof(textStoreVolumeDelta.c_str());
      }
    return storeVolumeDelta;
  }

const double VolumeCommandJSON::getVolumeDelta(void) const
  {
    assert(flagHasVolumeDelta);
    if (textStoreVolumeDelta != "")
      {
        return atof(textStoreVolumeDelta.c_str());
      }
    return storeVolumeDelta;
  }

std::string VolumeCommandJSON::getVolumeDeltaAsText(void) const
  {
    assert(flagHasVolumeDelta);
    if (textStoreVolumeDelta == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeVolumeDelta);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreVolumeDelta);
      }
  }

VolumeCommandJSON *VolumeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    VolumeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<VolumeCommandJSON>, VolumeCommandJSON *, bool> generator("Type VolumeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
