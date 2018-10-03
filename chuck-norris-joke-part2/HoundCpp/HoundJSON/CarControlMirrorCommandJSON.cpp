/* file "CarControlMirrorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlMirrorCommandJSON.h"

#include "CarControlMirrorCommandJSON.h"


CarControlMirrorCommandJSON::TypeCommandType CarControlMirrorCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "efrost") == 0)
                return CommandType_Defrost;
            break;
        case 'R':
            if (strncmp(&(chars[1]), "otate", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'D':
                        if (strcmp(&(chars[7]), "own") == 0)
                            return CommandType_RotateDown;
                        break;
                    case 'I':
                        if (strcmp(&(chars[7]), "n") == 0)
                            return CommandType_RotateIn;
                        break;
                    case 'O':
                        if (strcmp(&(chars[7]), "ut") == 0)
                            return CommandType_RotateOut;
                        break;
                    case 'T':
                        if (strcmp(&(chars[7]), "oDefault") == 0)
                            return CommandType_RotateToDefault;
                        break;
                    case 'U':
                        if (strcmp(&(chars[7]), "p") == 0)
                            return CommandType_RotateUp;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "aveDefaultRotation") == 0)
                return CommandType_SaveDefaultRotation;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlMirrorCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_RotateUp:
            return "RotateUp";
        case CommandType_RotateDown:
            return "RotateDown";
        case CommandType_RotateIn:
            return "RotateIn";
        case CommandType_RotateOut:
            return "RotateOut";
        case CommandType_Defrost:
            return "Defrost";
        case CommandType_RotateToDefault:
            return "RotateToDefault";
        case CommandType_SaveDefaultRotation:
            return "SaveDefaultRotation";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlMirrorCommandJSON::CarControlMirrorCommandJSON(const CarControlMirrorCommandJSON &)
  {
    assert(false);
  }

CarControlMirrorCommandJSON &CarControlMirrorCommandJSON::operator=(const CarControlMirrorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlMirrorCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_RotateUp:
            generated_string_CommandType = new JSONStringValue("RotateUp");
            break;
        case CommandType_RotateDown:
            generated_string_CommandType = new JSONStringValue("RotateDown");
            break;
        case CommandType_RotateIn:
            generated_string_CommandType = new JSONStringValue("RotateIn");
            break;
        case CommandType_RotateOut:
            generated_string_CommandType = new JSONStringValue("RotateOut");
            break;
        case CommandType_Defrost:
            generated_string_CommandType = new JSONStringValue("Defrost");
            break;
        case CommandType_RotateToDefault:
            generated_string_CommandType = new JSONStringValue("RotateToDefault");
            break;
        case CommandType_SaveDefaultRotation:
            generated_string_CommandType = new JSONStringValue("SaveDefaultRotation");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlMirrorCommandJSON::extraMirrorSelectionToJSON(void) const
  {
    JSONValueHandler handler_MirrorSelection;
    storeMirrorSelection->write_as_json(&handler_MirrorSelection);
    handler_MirrorSelection.result->add_reference();
    return handler_MirrorSelection.result;
  }

void CarControlMirrorCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlMirrorCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efrost") == 0)
                  {
                    the_enum = CommandType_Defrost;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "otate", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'D':
                        if (strcmp(&(json_string->getData()[7]), "own") == 0)
                              {
                                the_enum = CommandType_RotateDown;
                                goto enum_is_done;
                              }
                        break;
                    case 'I':
                        if (strcmp(&(json_string->getData()[7]), "n") == 0)
                              {
                                the_enum = CommandType_RotateIn;
                                goto enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[7]), "ut") == 0)
                              {
                                the_enum = CommandType_RotateOut;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[7]), "oDefault") == 0)
                              {
                                the_enum = CommandType_RotateToDefault;
                                goto enum_is_done;
                              }
                        break;
                    case 'U':
                        if (strcmp(&(json_string->getData()[7]), "p") == 0)
                              {
                                the_enum = CommandType_RotateUp;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "aveDefaultRotation") == 0)
                  {
                    the_enum = CommandType_SaveDefaultRotation;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlMirrorCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlMirrorCommandJSON::fromJSONMirrorSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CarMirrorSelectionEnumJSON *convert_classy = CarMirrorSelectionEnumJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMirrorSelection(convert_classy);
    convert_classy->remove_reference();
  }

CarControlMirrorCommandJSON::CarControlMirrorCommandJSON(void) :
        flagHasCommandType(false),
        flagHasMirrorSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlMirrorCommandJSON::~CarControlMirrorCommandJSON(void)
  {
    if (flagHasMirrorSelection)
      {
        storeMirrorSelection->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlMirrorCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlMirrorCommand";
  }

bool CarControlMirrorCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlMirrorCommandJSON::TypeCommandType CarControlMirrorCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlMirrorCommandJSON::TypeCommandType CarControlMirrorCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlMirrorCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlMirrorCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlMirrorCommandJSON::hasMirrorSelection(void) const
  {
    return flagHasMirrorSelection;
  }

CarMirrorSelectionEnumJSON * CarControlMirrorCommandJSON::getMirrorSelection(void)
  {
    assert(flagHasMirrorSelection);
    return storeMirrorSelection;
  }

const CarMirrorSelectionEnumJSON * CarControlMirrorCommandJSON::getMirrorSelection(void) const
  {
    assert(flagHasMirrorSelection);
    return storeMirrorSelection;
  }

CarMirrorSelectionEnumJSON::TypeValue CarControlMirrorCommandJSON::getMirrorSelectionValue(void)
  {
    return getMirrorSelection()->getValue();
  }

const CarMirrorSelectionEnumJSON::TypeValue CarControlMirrorCommandJSON::getMirrorSelectionValue(void) const
  {
    return getMirrorSelection()->getValue();
  }

const char *CarControlMirrorCommandJSON::getMirrorSelectionAsChars(void) const
  {
    return getMirrorSelection()->getValueAsChars();
  }

std::string CarControlMirrorCommandJSON::getMirrorSelectionAsString(void) const
  {
    return getMirrorSelection()->getValueAsString();
  }

CarControlMirrorCommandJSON *CarControlMirrorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlMirrorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlMirrorCommandJSON>, CarControlMirrorCommandJSON *, bool> generator("Type CarControlMirrorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
