/* file "CarControlSeatCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlSeatCommandJSON.h"

#include "CarControlSeatCommandJSON.h"


CarControlSeatCommandJSON::TypeCommandType CarControlSeatCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "oadSeatPosition") == 0)
                return CommandType_LoadSeatPosition;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "veSeatPosition") == 0)
                        return CommandType_SaveSeatPosition;
                    break;
                case 'e':
                    if (strncmp(&(chars[2]), "at", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'B':
                                if (strcmp(&(chars[5]), "ackward") == 0)
                                    return CommandType_SeatBackward;
                                break;
                            case 'D':
                                if (strcmp(&(chars[5]), "own") == 0)
                                    return CommandType_SeatDown;
                                break;
                            case 'F':
                                if (strcmp(&(chars[5]), "orward") == 0)
                                    return CommandType_SeatForward;
                                break;
                            case 'L':
                                if (strncmp(&(chars[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[6]))
                                      {
                                        case 'a':
                                            if (strncmp(&(chars[7]), "n", 1) == 0)
                                              {
                                                switch ((unsigned char)(chars[8]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(chars[9]), "ack") == 0)
                                                            return CommandType_SeatLeanBack;
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(chars[9]), "orward") == 0)
                                                            return CommandType_SeatLeanForward;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 's':
                                            if (strcmp(&(chars[7]), "sLumbar") == 0)
                                                return CommandType_SeatLessLumbar;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(chars[5]), "oreLumbar") == 0)
                                    return CommandType_SeatMoreLumbar;
                                break;
                            case 'U':
                                if (strcmp(&(chars[5]), "p") == 0)
                                    return CommandType_SeatUp;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlSeatCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_SeatForward:
            return "SeatForward";
        case CommandType_SeatBackward:
            return "SeatBackward";
        case CommandType_SeatUp:
            return "SeatUp";
        case CommandType_SeatDown:
            return "SeatDown";
        case CommandType_SeatLeanBack:
            return "SeatLeanBack";
        case CommandType_SeatLeanForward:
            return "SeatLeanForward";
        case CommandType_SeatMoreLumbar:
            return "SeatMoreLumbar";
        case CommandType_SeatLessLumbar:
            return "SeatLessLumbar";
        case CommandType_SaveSeatPosition:
            return "SaveSeatPosition";
        case CommandType_LoadSeatPosition:
            return "LoadSeatPosition";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlSeatCommandJSON::CarControlSeatCommandJSON(const CarControlSeatCommandJSON &)
  {
    assert(false);
  }

CarControlSeatCommandJSON &CarControlSeatCommandJSON::operator=(const CarControlSeatCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlSeatCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_SeatForward:
            generated_string_CommandType = new JSONStringValue("SeatForward");
            break;
        case CommandType_SeatBackward:
            generated_string_CommandType = new JSONStringValue("SeatBackward");
            break;
        case CommandType_SeatUp:
            generated_string_CommandType = new JSONStringValue("SeatUp");
            break;
        case CommandType_SeatDown:
            generated_string_CommandType = new JSONStringValue("SeatDown");
            break;
        case CommandType_SeatLeanBack:
            generated_string_CommandType = new JSONStringValue("SeatLeanBack");
            break;
        case CommandType_SeatLeanForward:
            generated_string_CommandType = new JSONStringValue("SeatLeanForward");
            break;
        case CommandType_SeatMoreLumbar:
            generated_string_CommandType = new JSONStringValue("SeatMoreLumbar");
            break;
        case CommandType_SeatLessLumbar:
            generated_string_CommandType = new JSONStringValue("SeatLessLumbar");
            break;
        case CommandType_SaveSeatPosition:
            generated_string_CommandType = new JSONStringValue("SaveSeatPosition");
            break;
        case CommandType_LoadSeatPosition:
            generated_string_CommandType = new JSONStringValue("LoadSeatPosition");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlSeatCommandJSON::extraMovementAmountToJSON(void) const
  {
    JSONValue *generated_rational_MovementAmount;
    if (((double)(long int)storeMovementAmount) == storeMovementAmount)
        generated_rational_MovementAmount = new JSONIntegerValue((long int)(storeMovementAmount));
    else
        generated_rational_MovementAmount = new JSONRationalValue(storeMovementAmount, DBL_DIG);
    return generated_rational_MovementAmount;
  }

JSONValue *CarControlSeatCommandJSON::extraSeatSelectionToJSON(void) const
  {
    JSONArrayValue *generated_array_1_SeatSelection = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeSeatSelection.size(); ++num1)
      {
        JSONValueHandler handler_SeatSelection;
        storeSeatSelection[num1]->write_as_json(&handler_SeatSelection);
        handler_SeatSelection.result->add_reference();
        generated_array_1_SeatSelection->appendComponent(handler_SeatSelection.result);
        handler_SeatSelection.result->remove_reference();
      }
    return generated_array_1_SeatSelection;
  }

void CarControlSeatCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlSeatCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "oadSeatPosition") == 0)
                  {
                    the_enum = CommandType_LoadSeatPosition;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "veSeatPosition") == 0)
                          {
                            the_enum = CommandType_SaveSeatPosition;
                            goto enum_is_done;
                          }
                    break;
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "at", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'B':
                                if (strcmp(&(json_string->getData()[5]), "ackward") == 0)
                                      {
                                        the_enum = CommandType_SeatBackward;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'D':
                                if (strcmp(&(json_string->getData()[5]), "own") == 0)
                                      {
                                        the_enum = CommandType_SeatDown;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'F':
                                if (strcmp(&(json_string->getData()[5]), "orward") == 0)
                                      {
                                        the_enum = CommandType_SeatForward;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strncmp(&(json_string->getData()[5]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[6]))
                                      {
                                        case 'a':
                                            if (strncmp(&(json_string->getData()[7]), "n", 1) == 0)
                                              {
                                                switch ((unsigned char)(json_string->getData()[8]))
                                                  {
                                                    case 'B':
                                                        if (strcmp(&(json_string->getData()[9]), "ack") == 0)
                                                              {
                                                                the_enum = CommandType_SeatLeanBack;
                                                                goto enum_is_done;
                                                              }
                                                        break;
                                                    case 'F':
                                                        if (strcmp(&(json_string->getData()[9]), "orward") == 0)
                                                              {
                                                                the_enum = CommandType_SeatLeanForward;
                                                                goto enum_is_done;
                                                              }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 's':
                                            if (strcmp(&(json_string->getData()[7]), "sLumbar") == 0)
                                                  {
                                                    the_enum = CommandType_SeatLessLumbar;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "oreLumbar") == 0)
                                      {
                                        the_enum = CommandType_SeatMoreLumbar;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'U':
                                if (strcmp(&(json_string->getData()[5]), "p") == 0)
                                      {
                                        the_enum = CommandType_SeatUp;
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
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlSeatCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlSeatCommandJSON::fromJSONMovementAmount(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MovementAmount of CarControlSeatCommandJSON is not a number.");
          }
      }
    setMovementAmountText(the_rational_text);
  }

void CarControlSeatCommandJSON::fromJSONSeatSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SeatSelection of CarControlSeatCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SeatSelection of CarControlSeatCommandJSON has too few elements.");
    std::vector< CarSeatSelectionEnumJSON * > vector_SeatSelection1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CarSeatSelectionEnumJSON *convert_classy = CarSeatSelectionEnumJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SeatSelection1[num1] = convert_classy;
      }
    assert(vector_SeatSelection1.size() >= 1);
    initSeatSelection();
    for (size_t num2 = 0; num2 < vector_SeatSelection1.size(); ++num2)
        appendSeatSelection(vector_SeatSelection1[num2]);
    for (size_t num1 = 0; num1 < vector_SeatSelection1.size(); ++num1)
      {
        vector_SeatSelection1[num1]->remove_reference();
      }
  }

CarControlSeatCommandJSON::CarControlSeatCommandJSON(void) :
        flagHasCommandType(false),
        flagHasMovementAmount(false),
        flagHasSeatSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlSeatCommandJSON::~CarControlSeatCommandJSON(void)
  {
    if (flagHasSeatSelection)
      {
        for (size_t num4 = 0; num4 < storeSeatSelection.size(); ++num4)
          {
            storeSeatSelection[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlSeatCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlSeatCommand";
  }

bool CarControlSeatCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlSeatCommandJSON::TypeCommandType CarControlSeatCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlSeatCommandJSON::TypeCommandType CarControlSeatCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlSeatCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlSeatCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlSeatCommandJSON::hasMovementAmount(void) const
  {
    return flagHasMovementAmount;
  }

double CarControlSeatCommandJSON::getMovementAmount(void)
  {
    assert(flagHasMovementAmount);
    if (textStoreMovementAmount != "")
      {
        return atof(textStoreMovementAmount.c_str());
      }
    return storeMovementAmount;
  }

const double CarControlSeatCommandJSON::getMovementAmount(void) const
  {
    assert(flagHasMovementAmount);
    if (textStoreMovementAmount != "")
      {
        return atof(textStoreMovementAmount.c_str());
      }
    return storeMovementAmount;
  }

std::string CarControlSeatCommandJSON::getMovementAmountAsText(void) const
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

bool CarControlSeatCommandJSON::hasSeatSelection(void) const
  {
    return flagHasSeatSelection;
  }

size_t CarControlSeatCommandJSON::countOfSeatSelection(void) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection.size();
  }

CarSeatSelectionEnumJSON * CarControlSeatCommandJSON::elementOfSeatSelection(size_t element_num)
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection[element_num];
  }

const CarSeatSelectionEnumJSON * CarControlSeatCommandJSON::elementOfSeatSelection(size_t element_num) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection[element_num];
  }

std::vector< CarSeatSelectionEnumJSON * > CarControlSeatCommandJSON::getSeatSelection(void)
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection;
  }

const std::vector< CarSeatSelectionEnumJSON * > CarControlSeatCommandJSON::getSeatSelection(void) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection;
  }

CarControlSeatCommandJSON *CarControlSeatCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlSeatCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlSeatCommandJSON>, CarControlSeatCommandJSON *, bool> generator("Type CarControlSeatCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
