/* file "CarControlDoorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlDoorCommandJSON.h"

#include "CarControlDoorCommandJSON.h"


CarControlDoorCommandJSON::TypeCommandType CarControlDoorCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "loseDoor") == 0)
                return CommandType_CloseDoor;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ockDoor") == 0)
                return CommandType_LockDoor;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "penDoor") == 0)
                return CommandType_OpenDoor;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nlockDoor") == 0)
                return CommandType_UnlockDoor;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlDoorCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_OpenDoor:
            return "OpenDoor";
        case CommandType_CloseDoor:
            return "CloseDoor";
        case CommandType_LockDoor:
            return "LockDoor";
        case CommandType_UnlockDoor:
            return "UnlockDoor";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlDoorCommandJSON::TypeDoorSelection CarControlDoorCommandJSON::stringToDoorSelection(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strncmp(&(chars[1]), "ll", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 0:
                        return DoorSelection_All;
                    case 'E':
                        if (strcmp(&(chars[4]), "xceptDriver") == 0)
                            return DoorSelection_AllExceptDriver;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "riverAll") == 0)
                return DoorSelection_DriverAll;
            break;
        case 'F':
            if (strncmp(&(chars[1]), "ront", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 'B':
                        if (strcmp(&(chars[6]), "oth") == 0)
                            return DoorSelection_FrontBoth;
                        break;
                    case 'D':
                        if (strcmp(&(chars[6]), "river") == 0)
                            return DoorSelection_FrontDriver;
                        break;
                    case 'L':
                        if (strcmp(&(chars[6]), "eft") == 0)
                            return DoorSelection_FrontLeft;
                        break;
                    case 'P':
                        if (strcmp(&(chars[6]), "assenger") == 0)
                            return DoorSelection_FrontPassenger;
                        break;
                    case 'R':
                        if (strcmp(&(chars[6]), "ight") == 0)
                            return DoorSelection_FrontRight;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ood") == 0)
                return DoorSelection_Hood;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eftAll") == 0)
                return DoorSelection_LeftAll;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "iddle", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'B':
                        if (strcmp(&(chars[7]), "oth") == 0)
                            return DoorSelection_MiddleBoth;
                        break;
                    case 'D':
                        if (strcmp(&(chars[7]), "river") == 0)
                            return DoorSelection_MiddleDriver;
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "eft") == 0)
                            return DoorSelection_MiddleLeft;
                        break;
                    case 'P':
                        if (strcmp(&(chars[7]), "assenger") == 0)
                            return DoorSelection_MiddlePassenger;
                        break;
                    case 'R':
                        if (strcmp(&(chars[7]), "ight") == 0)
                            return DoorSelection_MiddleRight;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(chars[1]), "assengerAll") == 0)
                return DoorSelection_PassengerAll;
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "ar", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 0:
                                return DoorSelection_Rear;
                            case 'B':
                                if (strcmp(&(chars[5]), "oth") == 0)
                                    return DoorSelection_RearBoth;
                                break;
                            case 'D':
                                if (strcmp(&(chars[5]), "river") == 0)
                                    return DoorSelection_RearDriver;
                                break;
                            case 'L':
                                if (strcmp(&(chars[5]), "eft") == 0)
                                    return DoorSelection_RearLeft;
                                break;
                            case 'P':
                                if (strcmp(&(chars[5]), "assenger") == 0)
                                    return DoorSelection_RearPassenger;
                                break;
                            case 'R':
                                if (strcmp(&(chars[5]), "ight") == 0)
                                    return DoorSelection_RearRight;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ghtAll") == 0)
                        return DoorSelection_RightAll;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "runk") == 0)
                return DoorSelection_Trunk;
            break;
        default:
            break;
      }
    throw("The value for field `DoorSelection' is not one of the legal values.");
  }

const char *CarControlDoorCommandJSON::stringFromDoorSelection(TypeDoorSelection the_enum)
  {
    switch (the_enum)
      {
        case DoorSelection_FrontLeft:
            return "FrontLeft";
        case DoorSelection_FrontRight:
            return "FrontRight";
        case DoorSelection_FrontDriver:
            return "FrontDriver";
        case DoorSelection_FrontPassenger:
            return "FrontPassenger";
        case DoorSelection_FrontBoth:
            return "FrontBoth";
        case DoorSelection_RearLeft:
            return "RearLeft";
        case DoorSelection_RearRight:
            return "RearRight";
        case DoorSelection_RearDriver:
            return "RearDriver";
        case DoorSelection_RearPassenger:
            return "RearPassenger";
        case DoorSelection_RearBoth:
            return "RearBoth";
        case DoorSelection_MiddleLeft:
            return "MiddleLeft";
        case DoorSelection_MiddleRight:
            return "MiddleRight";
        case DoorSelection_MiddleDriver:
            return "MiddleDriver";
        case DoorSelection_MiddlePassenger:
            return "MiddlePassenger";
        case DoorSelection_MiddleBoth:
            return "MiddleBoth";
        case DoorSelection_LeftAll:
            return "LeftAll";
        case DoorSelection_RightAll:
            return "RightAll";
        case DoorSelection_DriverAll:
            return "DriverAll";
        case DoorSelection_PassengerAll:
            return "PassengerAll";
        case DoorSelection_All:
            return "All";
        case DoorSelection_Rear:
            return "Rear";
        case DoorSelection_Trunk:
            return "Trunk";
        case DoorSelection_Hood:
            return "Hood";
        case DoorSelection_AllExceptDriver:
            return "AllExceptDriver";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlDoorCommandJSON::CarControlDoorCommandJSON(const CarControlDoorCommandJSON &)
  {
    assert(false);
  }

CarControlDoorCommandJSON &CarControlDoorCommandJSON::operator=(const CarControlDoorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlDoorCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_OpenDoor:
            generated_string_CommandType = new JSONStringValue("OpenDoor");
            break;
        case CommandType_CloseDoor:
            generated_string_CommandType = new JSONStringValue("CloseDoor");
            break;
        case CommandType_LockDoor:
            generated_string_CommandType = new JSONStringValue("LockDoor");
            break;
        case CommandType_UnlockDoor:
            generated_string_CommandType = new JSONStringValue("UnlockDoor");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

JSONValue *CarControlDoorCommandJSON::extraDoorSelectionToJSON(void) const
  {
    JSONArrayValue *generated_array_1_DoorSelection = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeDoorSelection.size(); ++num1)
      {
        JSONStringValue *generated_string_DoorSelection;
        switch (storeDoorSelection[num1])
          {
            case DoorSelection_FrontLeft:
                generated_string_DoorSelection = new JSONStringValue("FrontLeft");
                break;
            case DoorSelection_FrontRight:
                generated_string_DoorSelection = new JSONStringValue("FrontRight");
                break;
            case DoorSelection_FrontDriver:
                generated_string_DoorSelection = new JSONStringValue("FrontDriver");
                break;
            case DoorSelection_FrontPassenger:
                generated_string_DoorSelection = new JSONStringValue("FrontPassenger");
                break;
            case DoorSelection_FrontBoth:
                generated_string_DoorSelection = new JSONStringValue("FrontBoth");
                break;
            case DoorSelection_RearLeft:
                generated_string_DoorSelection = new JSONStringValue("RearLeft");
                break;
            case DoorSelection_RearRight:
                generated_string_DoorSelection = new JSONStringValue("RearRight");
                break;
            case DoorSelection_RearDriver:
                generated_string_DoorSelection = new JSONStringValue("RearDriver");
                break;
            case DoorSelection_RearPassenger:
                generated_string_DoorSelection = new JSONStringValue("RearPassenger");
                break;
            case DoorSelection_RearBoth:
                generated_string_DoorSelection = new JSONStringValue("RearBoth");
                break;
            case DoorSelection_MiddleLeft:
                generated_string_DoorSelection = new JSONStringValue("MiddleLeft");
                break;
            case DoorSelection_MiddleRight:
                generated_string_DoorSelection = new JSONStringValue("MiddleRight");
                break;
            case DoorSelection_MiddleDriver:
                generated_string_DoorSelection = new JSONStringValue("MiddleDriver");
                break;
            case DoorSelection_MiddlePassenger:
                generated_string_DoorSelection = new JSONStringValue("MiddlePassenger");
                break;
            case DoorSelection_MiddleBoth:
                generated_string_DoorSelection = new JSONStringValue("MiddleBoth");
                break;
            case DoorSelection_LeftAll:
                generated_string_DoorSelection = new JSONStringValue("LeftAll");
                break;
            case DoorSelection_RightAll:
                generated_string_DoorSelection = new JSONStringValue("RightAll");
                break;
            case DoorSelection_DriverAll:
                generated_string_DoorSelection = new JSONStringValue("DriverAll");
                break;
            case DoorSelection_PassengerAll:
                generated_string_DoorSelection = new JSONStringValue("PassengerAll");
                break;
            case DoorSelection_All:
                generated_string_DoorSelection = new JSONStringValue("All");
                break;
            case DoorSelection_Rear:
                generated_string_DoorSelection = new JSONStringValue("Rear");
                break;
            case DoorSelection_Trunk:
                generated_string_DoorSelection = new JSONStringValue("Trunk");
                break;
            case DoorSelection_Hood:
                generated_string_DoorSelection = new JSONStringValue("Hood");
                break;
            case DoorSelection_AllExceptDriver:
                generated_string_DoorSelection = new JSONStringValue("AllExceptDriver");
                break;
            default:
                assert(false);
                generated_string_DoorSelection = NULL;
          }
        generated_array_1_DoorSelection->appendComponent(generated_string_DoorSelection);
      }
    return generated_array_1_DoorSelection;
  }

void CarControlDoorCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlDoorCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "loseDoor") == 0)
                  {
                    the_enum = CommandType_CloseDoor;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ockDoor") == 0)
                  {
                    the_enum = CommandType_LockDoor;
                    goto enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "penDoor") == 0)
                  {
                    the_enum = CommandType_OpenDoor;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nlockDoor") == 0)
                  {
                    the_enum = CommandType_UnlockDoor;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlDoorCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

void CarControlDoorCommandJSON::fromJSONDoorSelection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DoorSelection of CarControlDoorCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DoorSelection of CarControlDoorCommandJSON has too few elements.");
    std::vector< TypeDoorSelection > vector_DoorSelection1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DoorSelection of CarControlDoorCommandJSON is not a string.");
        TypeDoorSelection the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                if (strncmp(&(json_string->getData()[1]), "ll", 2) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[3]))
                      {
                        case 0:
                              {
                                the_enum = DoorSelection_All;
                                goto enum_is_done;
                              }
                        case 'E':
                            if (strcmp(&(json_string->getData()[4]), "xceptDriver") == 0)
                                  {
                                    the_enum = DoorSelection_AllExceptDriver;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                if (strcmp(&(json_string->getData()[1]), "riverAll") == 0)
                      {
                        the_enum = DoorSelection_DriverAll;
                        goto enum_is_done;
                      }
                break;
            case 'F':
                if (strncmp(&(json_string->getData()[1]), "ront", 4) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[5]))
                      {
                        case 'B':
                            if (strcmp(&(json_string->getData()[6]), "oth") == 0)
                                  {
                                    the_enum = DoorSelection_FrontBoth;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'D':
                            if (strcmp(&(json_string->getData()[6]), "river") == 0)
                                  {
                                    the_enum = DoorSelection_FrontDriver;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'L':
                            if (strcmp(&(json_string->getData()[6]), "eft") == 0)
                                  {
                                    the_enum = DoorSelection_FrontLeft;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'P':
                            if (strcmp(&(json_string->getData()[6]), "assenger") == 0)
                                  {
                                    the_enum = DoorSelection_FrontPassenger;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'R':
                            if (strcmp(&(json_string->getData()[6]), "ight") == 0)
                                  {
                                    the_enum = DoorSelection_FrontRight;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(json_string->getData()[1]), "ood") == 0)
                      {
                        the_enum = DoorSelection_Hood;
                        goto enum_is_done;
                      }
                break;
            case 'L':
                if (strcmp(&(json_string->getData()[1]), "eftAll") == 0)
                      {
                        the_enum = DoorSelection_LeftAll;
                        goto enum_is_done;
                      }
                break;
            case 'M':
                if (strncmp(&(json_string->getData()[1]), "iddle", 5) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[6]))
                      {
                        case 'B':
                            if (strcmp(&(json_string->getData()[7]), "oth") == 0)
                                  {
                                    the_enum = DoorSelection_MiddleBoth;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'D':
                            if (strcmp(&(json_string->getData()[7]), "river") == 0)
                                  {
                                    the_enum = DoorSelection_MiddleDriver;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'L':
                            if (strcmp(&(json_string->getData()[7]), "eft") == 0)
                                  {
                                    the_enum = DoorSelection_MiddleLeft;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'P':
                            if (strcmp(&(json_string->getData()[7]), "assenger") == 0)
                                  {
                                    the_enum = DoorSelection_MiddlePassenger;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'R':
                            if (strcmp(&(json_string->getData()[7]), "ight") == 0)
                                  {
                                    the_enum = DoorSelection_MiddleRight;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'P':
                if (strcmp(&(json_string->getData()[1]), "assengerAll") == 0)
                      {
                        the_enum = DoorSelection_PassengerAll;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'e':
                        if (strncmp(&(json_string->getData()[2]), "ar", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[4]))
                              {
                                case 0:
                                      {
                                        the_enum = DoorSelection_Rear;
                                        goto enum_is_done;
                                      }
                                case 'B':
                                    if (strcmp(&(json_string->getData()[5]), "oth") == 0)
                                          {
                                            the_enum = DoorSelection_RearBoth;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'D':
                                    if (strcmp(&(json_string->getData()[5]), "river") == 0)
                                          {
                                            the_enum = DoorSelection_RearDriver;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'L':
                                    if (strcmp(&(json_string->getData()[5]), "eft") == 0)
                                          {
                                            the_enum = DoorSelection_RearLeft;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'P':
                                    if (strcmp(&(json_string->getData()[5]), "assenger") == 0)
                                          {
                                            the_enum = DoorSelection_RearPassenger;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'R':
                                    if (strcmp(&(json_string->getData()[5]), "ight") == 0)
                                          {
                                            the_enum = DoorSelection_RearRight;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strcmp(&(json_string->getData()[2]), "ghtAll") == 0)
                              {
                                the_enum = DoorSelection_RightAll;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strcmp(&(json_string->getData()[1]), "runk") == 0)
                      {
                        the_enum = DoorSelection_Trunk;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field DoorSelection of CarControlDoorCommandJSON is not one of the legal strings.");
      enum_is_done:;
        vector_DoorSelection1[num1] = the_enum;
      }
    assert(vector_DoorSelection1.size() >= 1);
    initDoorSelection();
    for (size_t num2 = 0; num2 < vector_DoorSelection1.size(); ++num2)
        appendDoorSelection(vector_DoorSelection1[num2]);
    for (size_t num1 = 0; num1 < vector_DoorSelection1.size(); ++num1)
      {
      }
  }

CarControlDoorCommandJSON::CarControlDoorCommandJSON(void) :
        flagHasCommandType(false),
        flagHasDoorSelection(false)
  {
    extraIndex = create_string_index();
  }

CarControlDoorCommandJSON::~CarControlDoorCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlDoorCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlDoorCommand";
  }

bool CarControlDoorCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlDoorCommandJSON::TypeCommandType CarControlDoorCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlDoorCommandJSON::TypeCommandType CarControlDoorCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlDoorCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlDoorCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

bool CarControlDoorCommandJSON::hasDoorSelection(void) const
  {
    return flagHasDoorSelection;
  }

size_t CarControlDoorCommandJSON::countOfDoorSelection(void) const
  {
    assert(flagHasDoorSelection);
    return storeDoorSelection.size();
  }

CarControlDoorCommandJSON::TypeDoorSelection CarControlDoorCommandJSON::elementOfDoorSelection(size_t element_num)
  {
    assert(flagHasDoorSelection);
    return storeDoorSelection[element_num];
  }

const CarControlDoorCommandJSON::TypeDoorSelection CarControlDoorCommandJSON::elementOfDoorSelection(size_t element_num) const
  {
    assert(flagHasDoorSelection);
    return storeDoorSelection[element_num];
  }

std::vector< CarControlDoorCommandJSON::TypeDoorSelection > CarControlDoorCommandJSON::getDoorSelection(void)
  {
    assert(flagHasDoorSelection);
    return storeDoorSelection;
  }

const std::vector< CarControlDoorCommandJSON::TypeDoorSelection > CarControlDoorCommandJSON::getDoorSelection(void) const
  {
    assert(flagHasDoorSelection);
    return storeDoorSelection;
  }

CarControlDoorCommandJSON *CarControlDoorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlDoorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlDoorCommandJSON>, CarControlDoorCommandJSON *, bool> generator("Type CarControlDoorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
