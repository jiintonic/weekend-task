/* file "CarControlWindowCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlWindowCommandJSON.h"

#include "CarControlWindowCommandJSON.h"


CarControlWindowCommandJSON::TypeCommandType CarControlWindowCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "loseWindow") == 0)
                return CommandType_CloseWindow;
            break;
        case 'D':
            if (strncmp(&(chars[1]), "efog", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 0:
                        return CommandType_Defog;
                    case 'O':
                        if (strcmp(&(chars[6]), "ff") == 0)
                            return CommandType_DefogOff;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            if (strcmp(&(chars[1]), "penWindow") == 0)
                return CommandType_OpenWindow;
            break;
        case 'W':
            if (strncmp(&(chars[1]), "ipers", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'A':
                        if (strcmp(&(chars[7]), "utomatic") == 0)
                            return CommandType_WipersAutomatic;
                        break;
                    case 'H':
                        if (strcmp(&(chars[7]), "ighSpeed") == 0)
                            return CommandType_WipersHighSpeed;
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "owSpeed") == 0)
                            return CommandType_WipersLowSpeed;
                        break;
                    case 'O':
                        if (strcmp(&(chars[7]), "ff") == 0)
                            return CommandType_WipersOff;
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

const char *CarControlWindowCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_OpenWindow:
            return "OpenWindow";
        case CommandType_CloseWindow:
            return "CloseWindow";
        case CommandType_WipersAutomatic:
            return "WipersAutomatic";
        case CommandType_WipersLowSpeed:
            return "WipersLowSpeed";
        case CommandType_WipersHighSpeed:
            return "WipersHighSpeed";
        case CommandType_WipersOff:
            return "WipersOff";
        case CommandType_Defog:
            return "Defog";
        case CommandType_DefogOff:
            return "DefogOff";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlWindowCommandJSON::CarControlWindowCommandJSON(const CarControlWindowCommandJSON &)
  {
    assert(false);
  }

CarControlWindowCommandJSON &CarControlWindowCommandJSON::operator=(const CarControlWindowCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlWindowCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_OpenWindow:
            generated_string_CommandType = new JSONStringValue("OpenWindow");
            break;
        case CommandType_CloseWindow:
            generated_string_CommandType = new JSONStringValue("CloseWindow");
            break;
        case CommandType_WipersAutomatic:
            generated_string_CommandType = new JSONStringValue("WipersAutomatic");
            break;
        case CommandType_WipersLowSpeed:
            generated_string_CommandType = new JSONStringValue("WipersLowSpeed");
            break;
        case CommandType_WipersHighSpeed:
            generated_string_CommandType = new JSONStringValue("WipersHighSpeed");
            break;
        case CommandType_WipersOff:
            generated_string_CommandType = new JSONStringValue("WipersOff");
            break;
        case CommandType_Defog:
            generated_string_CommandType = new JSONStringValue("Defog");
            break;
        case CommandType_DefogOff:
            generated_string_CommandType = new JSONStringValue("DefogOff");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlWindowCommandJSON::extraMovementAmountToJSON(void) const
  {
    JSONValue *generated_rational_MovementAmount;
    if (((double)(long int)storeMovementAmount) == storeMovementAmount)
        generated_rational_MovementAmount = new JSONIntegerValue((long int)(storeMovementAmount));
    else
        generated_rational_MovementAmount = new JSONRationalValue(storeMovementAmount, DBL_DIG);
    return generated_rational_MovementAmount;
  }

JSONValue *CarControlWindowCommandJSON::extraWindowSelectionToJSON(void) const
  {
    JSONArrayValue *generated_array_1_WindowSelection = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeWindowSelection.size(); ++num1)
      {
        JSONValueHandler handler_WindowSelection;
        storeWindowSelection[num1]->write_as_json(&handler_WindowSelection);
        handler_WindowSelection.result->add_reference();
        generated_array_1_WindowSelection->appendComponent(handler_WindowSelection.result);
        handler_WindowSelection.result->remove_reference();
      }
    return generated_array_1_WindowSelection;
  }

void CarControlWindowCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlWindowCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "loseWindow") == 0)
                  {
                    the_enum = CommandType_CloseWindow;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "efog", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 0:
                          {
                            the_enum = CommandType_Defog;
                            goto enum_is_done;
                          }
                    case 'O':
                        if (strcmp(&(json_string->getData()[6]), "ff") == 0)
                              {
                                the_enum = CommandType_DefogOff;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "penWindow") == 0)
                  {
                    the_enum = CommandType_OpenWindow;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strncmp(&(json_string->getData()[1]), "ipers", 5) == 0)
              {
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[7]), "utomatic") == 0)
                              {
                                the_enum = CommandType_WipersAutomatic;
                                goto enum_is_done;
                              }
                        break;
                    case 'H':
                        if (strcmp(&(json_string->getData()[7]), "ighSpeed") == 0)
                              {
                                the_enum = CommandType_WipersHighSpeed;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[7]), "owSpeed") == 0)
                              {
                                the_enum = CommandType_WipersLowSpeed;
                                goto enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[7]), "ff") == 0)
                              {
                                the_enum = CommandType_WipersOff;
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
    throw("The value for field CommandType of CarControlWindowCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlWindowCommandJSON::fromJSONMovementAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MovementAmount of CarControlWindowCommandJSON is not a number.");
          }
      }
    setMovementAmountText(the_rational_text);
  }

void CarControlWindowCommandJSON::fromJSONWindowSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WindowSelection of CarControlWindowCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field WindowSelection of CarControlWindowCommandJSON has too few elements.");
    std::vector< CarWindowSelectionEnumJSON * > vector_WindowSelection1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CarWindowSelectionEnumJSON *convert_classy = CarWindowSelectionEnumJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_WindowSelection1[num1] = convert_classy;
      }
    assert(vector_WindowSelection1.size() >= 1);
    initWindowSelection();
    for (size_t num2 = 0; num2 < vector_WindowSelection1.size(); ++num2)
        appendWindowSelection(vector_WindowSelection1[num2]);
    for (size_t num1 = 0; num1 < vector_WindowSelection1.size(); ++num1)
      {
        vector_WindowSelection1[num1]->remove_reference();
      }
  }

CarControlWindowCommandJSON::CarControlWindowCommandJSON(void) :
        flagHasCommandType(false),
        flagHasMovementAmount(false),
        flagHasWindowSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlWindowCommandJSON::~CarControlWindowCommandJSON(void)
  {
    if (flagHasWindowSelection)
      {
        for (size_t num4 = 0; num4 < storeWindowSelection.size(); ++num4)
          {
            storeWindowSelection[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlWindowCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlWindowCommand";
  }

bool CarControlWindowCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlWindowCommandJSON::TypeCommandType CarControlWindowCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlWindowCommandJSON::TypeCommandType CarControlWindowCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlWindowCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlWindowCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlWindowCommandJSON::hasMovementAmount(void) const
  {
    return flagHasMovementAmount;
  }

double CarControlWindowCommandJSON::getMovementAmount(void)
  {
    assert(flagHasMovementAmount);
    if (textStoreMovementAmount != "")
      {
        return atof(textStoreMovementAmount.c_str());
      }
    return storeMovementAmount;
  }

const double CarControlWindowCommandJSON::getMovementAmount(void) const
  {
    assert(flagHasMovementAmount);
    if (textStoreMovementAmount != "")
      {
        return atof(textStoreMovementAmount.c_str());
      }
    return storeMovementAmount;
  }

std::string CarControlWindowCommandJSON::getMovementAmountAsText(void) const
  {
    assert(flagHasMovementAmount);
    if (textStoreMovementAmount == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMovementAmount);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMovementAmount);
      }
  }

bool CarControlWindowCommandJSON::hasWindowSelection(void) const
  {
    return flagHasWindowSelection;
  }

size_t CarControlWindowCommandJSON::countOfWindowSelection(void) const
  {
    assert(flagHasWindowSelection);
    return storeWindowSelection.size();
  }

CarWindowSelectionEnumJSON * CarControlWindowCommandJSON::elementOfWindowSelection(size_t element_num)
  {
    assert(flagHasWindowSelection);
    return storeWindowSelection[element_num];
  }

const CarWindowSelectionEnumJSON * CarControlWindowCommandJSON::elementOfWindowSelection(size_t element_num) const
  {
    assert(flagHasWindowSelection);
    return storeWindowSelection[element_num];
  }

std::vector< CarWindowSelectionEnumJSON * > CarControlWindowCommandJSON::getWindowSelection(void)
  {
    assert(flagHasWindowSelection);
    return storeWindowSelection;
  }

const std::vector< CarWindowSelectionEnumJSON * > CarControlWindowCommandJSON::getWindowSelection(void) const
  {
    assert(flagHasWindowSelection);
    return storeWindowSelection;
  }

CarControlWindowCommandJSON *CarControlWindowCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlWindowCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlWindowCommandJSON>, CarControlWindowCommandJSON *, bool> generator("Type CarControlWindowCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
