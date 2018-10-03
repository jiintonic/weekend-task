/* file "CarControlLightsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlLightsCommandJSON.h"

#include "CarControlLightsCommandJSON.h"


CarControlLightsCommandJSON::TypeCommandType CarControlLightsCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "lash") == 0)
                return CommandType_Flash;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "etAuto") == 0)
                return CommandType_SetAuto;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "urnO", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'f':
                        if (strcmp(&(chars[6]), "f") == 0)
                            return CommandType_TurnOff;
                        break;
                    case 'n':
                        if (chars[6] == 0)
                            return CommandType_TurnOn;
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

const char *CarControlLightsCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnOn:
            return "TurnOn";
        case CommandType_TurnOff:
            return "TurnOff";
        case CommandType_SetAuto:
            return "SetAuto";
        case CommandType_Flash:
            return "Flash";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlLightsCommandJSON::TypeLightSelection CarControlLightsCommandJSON::stringToLightSelection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "othTurnSignals") == 0)
                return LightSelection_BothTurnSignals;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ogLights") == 0)
                return LightSelection_FogLights;
            break;
        case 'H':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "zardLights") == 0)
                        return LightSelection_HazardLights;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ghBeams") == 0)
                        return LightSelection_HighBeams;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ftTurnSignal") == 0)
                        return LightSelection_LeftTurnSignal;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "wBeams") == 0)
                        return LightSelection_LowBeams;
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ightTurnSignal") == 0)
                return LightSelection_RightTurnSignal;
            break;
        default:
            break;
      }
    throw("The value for field `LightSelection' is not one of the legal values.");
  }

const char *CarControlLightsCommandJSON::stringFromLightSelection(TypeLightSelection the_enum)
  {
    switch (the_enum)
      {
        case LightSelection_LowBeams:
            return "LowBeams";
        case LightSelection_HighBeams:
            return "HighBeams";
        case LightSelection_FogLights:
            return "FogLights";
        case LightSelection_LeftTurnSignal:
            return "LeftTurnSignal";
        case LightSelection_RightTurnSignal:
            return "RightTurnSignal";
        case LightSelection_BothTurnSignals:
            return "BothTurnSignals";
        case LightSelection_HazardLights:
            return "HazardLights";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlLightsCommandJSON::CarControlLightsCommandJSON(const CarControlLightsCommandJSON &)
  {
    assert(false);
  }

CarControlLightsCommandJSON &CarControlLightsCommandJSON::operator=(const CarControlLightsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlLightsCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnOn:
            generated_string_CommandType = new JSONStringValue("TurnOn");
            break;
        case CommandType_TurnOff:
            generated_string_CommandType = new JSONStringValue("TurnOff");
            break;
        case CommandType_SetAuto:
            generated_string_CommandType = new JSONStringValue("SetAuto");
            break;
        case CommandType_Flash:
            generated_string_CommandType = new JSONStringValue("Flash");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlLightsCommandJSON::extraLightSelectionToJSON(void) const
  {
    JSONStringValue *generated_string_LightSelection;
    switch (storeLightSelection)
      {
        case LightSelection_LowBeams:
            generated_string_LightSelection = new JSONStringValue("LowBeams");
            break;
        case LightSelection_HighBeams:
            generated_string_LightSelection = new JSONStringValue("HighBeams");
            break;
        case LightSelection_FogLights:
            generated_string_LightSelection = new JSONStringValue("FogLights");
            break;
        case LightSelection_LeftTurnSignal:
            generated_string_LightSelection = new JSONStringValue("LeftTurnSignal");
            break;
        case LightSelection_RightTurnSignal:
            generated_string_LightSelection = new JSONStringValue("RightTurnSignal");
            break;
        case LightSelection_BothTurnSignals:
            generated_string_LightSelection = new JSONStringValue("BothTurnSignals");
            break;
        case LightSelection_HazardLights:
            generated_string_LightSelection = new JSONStringValue("HazardLights");
            break;
        default:
            assert(false);
            generated_string_LightSelection = NULL;
      }
    return generated_string_LightSelection;
  }

void CarControlLightsCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlLightsCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "lash") == 0)
                  {
                    the_enum = CommandType_Flash;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "etAuto") == 0)
                  {
                    the_enum = CommandType_SetAuto;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "urnO", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 'f':
                        if (strcmp(&(json_string->getData()[6]), "f") == 0)
                              {
                                the_enum = CommandType_TurnOff;
                                goto enum_is_done;
                              }
                        break;
                    case 'n':
                        if (json_string->getData()[6] == 0)
                              {
                                the_enum = CommandType_TurnOn;
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
    throw("The value for field CommandType of CarControlLightsCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlLightsCommandJSON::fromJSONLightSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LightSelection of CarControlLightsCommandJSON is not a string.");
    TypeLightSelection the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "othTurnSignals") == 0)
                  {
                    the_enum = LightSelection_BothTurnSignals;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ogLights") == 0)
                  {
                    the_enum = LightSelection_FogLights;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "zardLights") == 0)
                          {
                            the_enum = LightSelection_HazardLights;
                            goto enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ghBeams") == 0)
                          {
                            the_enum = LightSelection_HighBeams;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ftTurnSignal") == 0)
                          {
                            the_enum = LightSelection_LeftTurnSignal;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "wBeams") == 0)
                          {
                            the_enum = LightSelection_LowBeams;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ightTurnSignal") == 0)
                  {
                    the_enum = LightSelection_RightTurnSignal;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field LightSelection of CarControlLightsCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setLightSelection(the_enum);
  }

CarControlLightsCommandJSON::CarControlLightsCommandJSON(void) :
        flagHasCommandType(false),
        flagHasLightSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlLightsCommandJSON::~CarControlLightsCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlLightsCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlLightCommand";
  }

bool CarControlLightsCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlLightsCommandJSON::TypeCommandType CarControlLightsCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlLightsCommandJSON::TypeCommandType CarControlLightsCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlLightsCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlLightsCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlLightsCommandJSON::hasLightSelection(void) const
  {
    return flagHasLightSelection;
  }

CarControlLightsCommandJSON::TypeLightSelection CarControlLightsCommandJSON::getLightSelection(void)
  {
    assert(flagHasLightSelection);
    return storeLightSelection;
  }

const CarControlLightsCommandJSON::TypeLightSelection CarControlLightsCommandJSON::getLightSelection(void) const
  {
    assert(flagHasLightSelection);
    return storeLightSelection;
  }

const char *CarControlLightsCommandJSON::getLightSelectionAsChars(void) const
  {
    return stringFromLightSelection(getLightSelection());
  }

std::string CarControlLightsCommandJSON::getLightSelectionAsString(void) const
  {
    return stringFromLightSelection(getLightSelection());
  }

CarControlLightsCommandJSON *CarControlLightsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlLightsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlLightsCommandJSON>, CarControlLightsCommandJSON *, bool> generator("Type CarControlLightsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
