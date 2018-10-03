/* file "CarControlSeatHeaterCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlSeatHeaterCommandJSON.h"

#include "CarControlSeatHeaterCommandJSON.h"


CarControlSeatHeaterCommandJSON::TypeCommandType CarControlSeatHeaterCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strncmp(&(chars[1]), "et", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'H':
                        if (strncmp(&(chars[4]), "igh", 3) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 0:
                                    return CommandType_SetHigh;
                                case 'e':
                                    if (strcmp(&(chars[8]), "r") == 0)
                                        return CommandType_SetHigher;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'L':
                        if (strncmp(&(chars[4]), "ow", 2) == 0)
                          {
                            switch ((unsigned char)(chars[6]))
                              {
                                case 0:
                                    return CommandType_SetLow;
                                case 'e':
                                    if (strcmp(&(chars[7]), "r") == 0)
                                        return CommandType_SetLower;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'M':
                        if (strcmp(&(chars[4]), "edium") == 0)
                            return CommandType_SetMedium;
                        break;
                    default:
                        break;
                  }
              }
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

const char *CarControlSeatHeaterCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnOff:
            return "TurnOff";
        case CommandType_TurnOn:
            return "TurnOn";
        case CommandType_SetLow:
            return "SetLow";
        case CommandType_SetMedium:
            return "SetMedium";
        case CommandType_SetHigh:
            return "SetHigh";
        case CommandType_SetLower:
            return "SetLower";
        case CommandType_SetHigher:
            return "SetHigher";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlSeatHeaterCommandJSON::CarControlSeatHeaterCommandJSON(const CarControlSeatHeaterCommandJSON &)
  {
    assert(false);
  }

CarControlSeatHeaterCommandJSON &CarControlSeatHeaterCommandJSON::operator=(const CarControlSeatHeaterCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlSeatHeaterCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnOff:
            generated_string_CommandType = new JSONStringValue("TurnOff");
            break;
        case CommandType_TurnOn:
            generated_string_CommandType = new JSONStringValue("TurnOn");
            break;
        case CommandType_SetLow:
            generated_string_CommandType = new JSONStringValue("SetLow");
            break;
        case CommandType_SetMedium:
            generated_string_CommandType = new JSONStringValue("SetMedium");
            break;
        case CommandType_SetHigh:
            generated_string_CommandType = new JSONStringValue("SetHigh");
            break;
        case CommandType_SetLower:
            generated_string_CommandType = new JSONStringValue("SetLower");
            break;
        case CommandType_SetHigher:
            generated_string_CommandType = new JSONStringValue("SetHigher");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlSeatHeaterCommandJSON::extraSeatSelectionToJSON(void) const
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

void CarControlSeatHeaterCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlSeatHeaterCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "et", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'H':
                        if (strncmp(&(json_string->getData()[4]), "igh", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 0:
                                      {
                                        the_enum = CommandType_SetHigh;
                                        goto enum_is_done;
                                      }
                                case 'e':
                                    if (strcmp(&(json_string->getData()[8]), "r") == 0)
                                          {
                                            the_enum = CommandType_SetHigher;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'L':
                        if (strncmp(&(json_string->getData()[4]), "ow", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[6]))
                              {
                                case 0:
                                      {
                                        the_enum = CommandType_SetLow;
                                        goto enum_is_done;
                                      }
                                case 'e':
                                    if (strcmp(&(json_string->getData()[7]), "r") == 0)
                                          {
                                            the_enum = CommandType_SetLower;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[4]), "edium") == 0)
                              {
                                the_enum = CommandType_SetMedium;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
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
    throw("The value for field CommandType of CarControlSeatHeaterCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlSeatHeaterCommandJSON::fromJSONSeatSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SeatSelection of CarControlSeatHeaterCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SeatSelection of CarControlSeatHeaterCommandJSON has too few elements.");
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

CarControlSeatHeaterCommandJSON::CarControlSeatHeaterCommandJSON(void) :
        flagHasCommandType(false),
        flagHasSeatSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlSeatHeaterCommandJSON::~CarControlSeatHeaterCommandJSON(void)
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

const char *CarControlSeatHeaterCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlSeatHeaterCommand";
  }

bool CarControlSeatHeaterCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlSeatHeaterCommandJSON::TypeCommandType CarControlSeatHeaterCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlSeatHeaterCommandJSON::TypeCommandType CarControlSeatHeaterCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlSeatHeaterCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlSeatHeaterCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlSeatHeaterCommandJSON::hasSeatSelection(void) const
  {
    return flagHasSeatSelection;
  }

size_t CarControlSeatHeaterCommandJSON::countOfSeatSelection(void) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection.size();
  }

CarSeatSelectionEnumJSON * CarControlSeatHeaterCommandJSON::elementOfSeatSelection(size_t element_num)
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection[element_num];
  }

const CarSeatSelectionEnumJSON * CarControlSeatHeaterCommandJSON::elementOfSeatSelection(size_t element_num) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection[element_num];
  }

std::vector< CarSeatSelectionEnumJSON * > CarControlSeatHeaterCommandJSON::getSeatSelection(void)
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection;
  }

const std::vector< CarSeatSelectionEnumJSON * > CarControlSeatHeaterCommandJSON::getSeatSelection(void) const
  {
    assert(flagHasSeatSelection);
    return storeSeatSelection;
  }

CarControlSeatHeaterCommandJSON *CarControlSeatHeaterCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlSeatHeaterCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlSeatHeaterCommandJSON>, CarControlSeatHeaterCommandJSON *, bool> generator("Type CarControlSeatHeaterCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
