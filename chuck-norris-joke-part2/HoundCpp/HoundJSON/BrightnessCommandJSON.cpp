/* file "BrightnessCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BrightnessCommandJSON.h"

#include "BrightnessCommandJSON.h"


BrightnessCommandJSON::TypeCommandType BrightnessCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "djustBrightness") == 0)
                return CommandType_AdjustBrightness;
            break;
        case 'I':
            if (strncmp(&(chars[1]), "nvertColorsO", 12) == 0)
              {
                switch ((unsigned char)(chars[13]))
                  {
                    case 'f':
                        if (strcmp(&(chars[14]), "f") == 0)
                            return CommandType_InvertColorsOff;
                        break;
                    case 'n':
                        if (chars[14] == 0)
                            return CommandType_InvertColorsOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strncmp(&(chars[1]), "ightShiftO", 10) == 0)
              {
                switch ((unsigned char)(chars[11]))
                  {
                    case 'f':
                        if (strcmp(&(chars[12]), "f") == 0)
                            return CommandType_NightShiftOff;
                        break;
                    case 'n':
                        if (chars[12] == 0)
                            return CommandType_NightShiftOn;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "etBrightness") == 0)
                return CommandType_SetBrightness;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *BrightnessCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_AdjustBrightness:
            return "AdjustBrightness";
        case CommandType_SetBrightness:
            return "SetBrightness";
        case CommandType_InvertColorsOn:
            return "InvertColorsOn";
        case CommandType_InvertColorsOff:
            return "InvertColorsOff";
        case CommandType_NightShiftOn:
            return "NightShiftOn";
        case CommandType_NightShiftOff:
            return "NightShiftOff";
        default:
            assert(false);
            return NULL;
      }
  }

BrightnessCommandJSON::BrightnessCommandJSON(const BrightnessCommandJSON &)
  {
    assert(false);
  }

BrightnessCommandJSON &BrightnessCommandJSON::operator=(const BrightnessCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BrightnessCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_AdjustBrightness:
            generated_string_CommandType = new JSONStringValue("AdjustBrightness");
            break;
        case CommandType_SetBrightness:
            generated_string_CommandType = new JSONStringValue("SetBrightness");
            break;
        case CommandType_InvertColorsOn:
            generated_string_CommandType = new JSONStringValue("InvertColorsOn");
            break;
        case CommandType_InvertColorsOff:
            generated_string_CommandType = new JSONStringValue("InvertColorsOff");
            break;
        case CommandType_NightShiftOn:
            generated_string_CommandType = new JSONStringValue("NightShiftOn");
            break;
        case CommandType_NightShiftOff:
            generated_string_CommandType = new JSONStringValue("NightShiftOff");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *BrightnessCommandJSON::extraBrightnessValueToJSON(void) const
  {
    JSONValue *generated_rational_BrightnessValue;
    if (((double)(long int)storeBrightnessValue) == storeBrightnessValue)
        generated_rational_BrightnessValue = new JSONIntegerValue((long int)(storeBrightnessValue));
    else
        generated_rational_BrightnessValue = new JSONRationalValue(storeBrightnessValue, DBL_DIG);
    return generated_rational_BrightnessValue;
  }

JSONValue *BrightnessCommandJSON::extraBrightnessLevelToJSON(void) const
  {
    JSONValue *generated_rational_BrightnessLevel;
    if (((double)(long int)storeBrightnessLevel) == storeBrightnessLevel)
        generated_rational_BrightnessLevel = new JSONIntegerValue((long int)(storeBrightnessLevel));
    else
        generated_rational_BrightnessLevel = new JSONRationalValue(storeBrightnessLevel, DBL_DIG);
    return generated_rational_BrightnessLevel;
  }

JSONValue *BrightnessCommandJSON::extraBrightnessDeltaToJSON(void) const
  {
    JSONValue *generated_rational_BrightnessDelta;
    if (((double)(long int)storeBrightnessDelta) == storeBrightnessDelta)
        generated_rational_BrightnessDelta = new JSONIntegerValue((long int)(storeBrightnessDelta));
    else
        generated_rational_BrightnessDelta = new JSONRationalValue(storeBrightnessDelta, DBL_DIG);
    return generated_rational_BrightnessDelta;
  }

void BrightnessCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of BrightnessCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "djustBrightness") == 0)
                  {
                    the_enum = CommandType_AdjustBrightness;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strncmp(&(json_string->getData()[1]), "nvertColorsO", 12) == 0)
              {
                switch ((unsigned char)(json_string->getData()[13]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[14]), "f") == 0)
                              {
                                the_enum = CommandType_InvertColorsOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[14] == 0)
                              {
                                the_enum = CommandType_InvertColorsOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "ightShiftO", 10) == 0)
              {
                switch ((unsigned char)(json_string->getData()[11]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[12]), "f") == 0)
                              {
                                the_enum = CommandType_NightShiftOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[12] == 0)
                              {
                                the_enum = CommandType_NightShiftOn;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "etBrightness") == 0)
                  {
                    the_enum = CommandType_SetBrightness;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of BrightnessCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void BrightnessCommandJSON::fromJSONBrightnessValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BrightnessValue of BrightnessCommandJSON is not a number.");
          }
      }
    setBrightnessValueText(the_rational_text);
  }

void BrightnessCommandJSON::fromJSONBrightnessLevel(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BrightnessLevel of BrightnessCommandJSON is not a number.");
          }
      }
    setBrightnessLevelText(the_rational_text);
  }

void BrightnessCommandJSON::fromJSONBrightnessDelta(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BrightnessDelta of BrightnessCommandJSON is not a number.");
          }
      }
    setBrightnessDeltaText(the_rational_text);
  }

BrightnessCommandJSON::BrightnessCommandJSON(void) :
        flagHasCommandType(false),
        flagHasBrightnessValue(false),
        flagHasBrightnessLevel(false),
        flagHasBrightnessDelta(false)
  {
    extraIndex = create_string_index();
  }

BrightnessCommandJSON::~BrightnessCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *BrightnessCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "BrightnessCommand";
  }

bool BrightnessCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

BrightnessCommandJSON::TypeCommandType BrightnessCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const BrightnessCommandJSON::TypeCommandType BrightnessCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *BrightnessCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string BrightnessCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool BrightnessCommandJSON::hasBrightnessValue(void) const
  {
    return flagHasBrightnessValue;
  }

double BrightnessCommandJSON::getBrightnessValue(void)
  {
    assert(flagHasBrightnessValue);
    if (textStoreBrightnessValue != "")
      {
        return atof(textStoreBrightnessValue.c_str());
      }
    return storeBrightnessValue;
  }

const double BrightnessCommandJSON::getBrightnessValue(void) const
  {
    assert(flagHasBrightnessValue);
    if (textStoreBrightnessValue != "")
      {
        return atof(textStoreBrightnessValue.c_str());
      }
    return storeBrightnessValue;
  }

std::string BrightnessCommandJSON::getBrightnessValueAsText(void) const
  {
    assert(flagHasBrightnessValue);
    if (textStoreBrightnessValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBrightnessValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBrightnessValue);
      }
  }

bool BrightnessCommandJSON::hasBrightnessLevel(void) const
  {
    return flagHasBrightnessLevel;
  }

double BrightnessCommandJSON::getBrightnessLevel(void)
  {
    assert(flagHasBrightnessLevel);
    if (textStoreBrightnessLevel != "")
      {
        return atof(textStoreBrightnessLevel.c_str());
      }
    return storeBrightnessLevel;
  }

const double BrightnessCommandJSON::getBrightnessLevel(void) const
  {
    assert(flagHasBrightnessLevel);
    if (textStoreBrightnessLevel != "")
      {
        return atof(textStoreBrightnessLevel.c_str());
      }
    return storeBrightnessLevel;
  }

std::string BrightnessCommandJSON::getBrightnessLevelAsText(void) const
  {
    assert(flagHasBrightnessLevel);
    if (textStoreBrightnessLevel == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBrightnessLevel);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBrightnessLevel);
      }
  }

bool BrightnessCommandJSON::hasBrightnessDelta(void) const
  {
    return flagHasBrightnessDelta;
  }

double BrightnessCommandJSON::getBrightnessDelta(void)
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta != "")
      {
        return atof(textStoreBrightnessDelta.c_str());
      }
    return storeBrightnessDelta;
  }

const double BrightnessCommandJSON::getBrightnessDelta(void) const
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta != "")
      {
        return atof(textStoreBrightnessDelta.c_str());
      }
    return storeBrightnessDelta;
  }

std::string BrightnessCommandJSON::getBrightnessDeltaAsText(void) const
  {
    assert(flagHasBrightnessDelta);
    if (textStoreBrightnessDelta == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBrightnessDelta);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBrightnessDelta);
      }
  }

BrightnessCommandJSON *BrightnessCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BrightnessCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BrightnessCommandJSON>, BrightnessCommandJSON *, bool> generator("Type BrightnessCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
