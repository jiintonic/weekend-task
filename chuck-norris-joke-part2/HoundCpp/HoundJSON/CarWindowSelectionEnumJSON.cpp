/* file "CarWindowSelectionEnumJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarWindowSelectionEnumJSON.h"

#include "CarWindowSelectionEnumJSON.h"


CarWindowSelectionEnumJSON::TypeValue CarWindowSelectionEnumJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ll") == 0)
                return Value_All;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "othTop") == 0)
                return Value_BothTop;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "riverAll") == 0)
                return Value_DriverAll;
            break;
        case 'F':
            if (strncmp(&(chars[1]), "ront", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 0:
                        return Value_Front;
                    case 'B':
                        if (strcmp(&(chars[6]), "oth") == 0)
                            return Value_FrontBoth;
                        break;
                    case 'D':
                        if (strcmp(&(chars[6]), "river") == 0)
                            return Value_FrontDriver;
                        break;
                    case 'L':
                        if (strcmp(&(chars[6]), "eft") == 0)
                            return Value_FrontLeft;
                        break;
                    case 'P':
                        if (strcmp(&(chars[6]), "assenger") == 0)
                            return Value_FrontPassenger;
                        break;
                    case 'R':
                        if (strcmp(&(chars[6]), "ight") == 0)
                            return Value_FrontRight;
                        break;
                    case 'T':
                        if (strcmp(&(chars[6]), "op") == 0)
                            return Value_FrontTop;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eftAll") == 0)
                return Value_LeftAll;
            break;
        case 'M':
            if (strncmp(&(chars[1]), "iddle", 5) == 0)
              {
                switch ((unsigned char)(chars[6]))
                  {
                    case 'B':
                        if (strcmp(&(chars[7]), "oth") == 0)
                            return Value_MiddleBoth;
                        break;
                    case 'D':
                        if (strcmp(&(chars[7]), "river") == 0)
                            return Value_MiddleDriver;
                        break;
                    case 'L':
                        if (strcmp(&(chars[7]), "eft") == 0)
                            return Value_MiddleLeft;
                        break;
                    case 'P':
                        if (strcmp(&(chars[7]), "assenger") == 0)
                            return Value_MiddlePassenger;
                        break;
                    case 'R':
                        if (strcmp(&(chars[7]), "ight") == 0)
                            return Value_MiddleRight;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(chars[1]), "assengerAll") == 0)
                return Value_PassengerAll;
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
                                return Value_Rear;
                            case 'B':
                                if (strcmp(&(chars[5]), "oth") == 0)
                                    return Value_RearBoth;
                                break;
                            case 'D':
                                if (strcmp(&(chars[5]), "river") == 0)
                                    return Value_RearDriver;
                                break;
                            case 'L':
                                if (strcmp(&(chars[5]), "eft") == 0)
                                    return Value_RearLeft;
                                break;
                            case 'P':
                                if (strcmp(&(chars[5]), "assenger") == 0)
                                    return Value_RearPassenger;
                                break;
                            case 'R':
                                if (strcmp(&(chars[5]), "ight") == 0)
                                    return Value_RearRight;
                                break;
                            case 'T':
                                if (strcmp(&(chars[5]), "op") == 0)
                                    return Value_RearTop;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ghtAll") == 0)
                        return Value_RightAll;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "op") == 0)
                return Value_Top;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *CarWindowSelectionEnumJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_FrontLeft:
            return "FrontLeft";
        case Value_FrontRight:
            return "FrontRight";
        case Value_FrontDriver:
            return "FrontDriver";
        case Value_FrontPassenger:
            return "FrontPassenger";
        case Value_FrontBoth:
            return "FrontBoth";
        case Value_RearLeft:
            return "RearLeft";
        case Value_RearRight:
            return "RearRight";
        case Value_RearDriver:
            return "RearDriver";
        case Value_RearPassenger:
            return "RearPassenger";
        case Value_RearBoth:
            return "RearBoth";
        case Value_MiddleLeft:
            return "MiddleLeft";
        case Value_MiddleRight:
            return "MiddleRight";
        case Value_MiddleDriver:
            return "MiddleDriver";
        case Value_MiddlePassenger:
            return "MiddlePassenger";
        case Value_MiddleBoth:
            return "MiddleBoth";
        case Value_LeftAll:
            return "LeftAll";
        case Value_RightAll:
            return "RightAll";
        case Value_DriverAll:
            return "DriverAll";
        case Value_PassengerAll:
            return "PassengerAll";
        case Value_All:
            return "All";
        case Value_FrontTop:
            return "FrontTop";
        case Value_RearTop:
            return "RearTop";
        case Value_BothTop:
            return "BothTop";
        case Value_Top:
            return "Top";
        case Value_Rear:
            return "Rear";
        case Value_Front:
            return "Front";
        default:
            assert(false);
            return NULL;
      }
  }

CarWindowSelectionEnumJSON::CarWindowSelectionEnumJSON(const CarWindowSelectionEnumJSON &)
  {
    assert(false);
  }

CarWindowSelectionEnumJSON &CarWindowSelectionEnumJSON::operator=(const CarWindowSelectionEnumJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CarWindowSelectionEnumJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of CarWindowSelectionEnumJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ll") == 0)
                  {
                    the_enum = Value_All;
                    goto enum_is_done;
                  }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "othTop") == 0)
                  {
                    the_enum = Value_BothTop;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "riverAll") == 0)
                  {
                    the_enum = Value_DriverAll;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strncmp(&(json_string->getData()[1]), "ront", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 0:
                          {
                            the_enum = Value_Front;
                            goto enum_is_done;
                          }
                    case 'B':
                        if (strcmp(&(json_string->getData()[6]), "oth") == 0)
                              {
                                the_enum = Value_FrontBoth;
                                goto enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[6]), "river") == 0)
                              {
                                the_enum = Value_FrontDriver;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[6]), "eft") == 0)
                              {
                                the_enum = Value_FrontLeft;
                                goto enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[6]), "assenger") == 0)
                              {
                                the_enum = Value_FrontPassenger;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[6]), "ight") == 0)
                              {
                                the_enum = Value_FrontRight;
                                goto enum_is_done;
                              }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[6]), "op") == 0)
                              {
                                the_enum = Value_FrontTop;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eftAll") == 0)
                  {
                    the_enum = Value_LeftAll;
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
                                the_enum = Value_MiddleBoth;
                                goto enum_is_done;
                              }
                        break;
                    case 'D':
                        if (strcmp(&(json_string->getData()[7]), "river") == 0)
                              {
                                the_enum = Value_MiddleDriver;
                                goto enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strcmp(&(json_string->getData()[7]), "eft") == 0)
                              {
                                the_enum = Value_MiddleLeft;
                                goto enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[7]), "assenger") == 0)
                              {
                                the_enum = Value_MiddlePassenger;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strcmp(&(json_string->getData()[7]), "ight") == 0)
                              {
                                the_enum = Value_MiddleRight;
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
                    the_enum = Value_PassengerAll;
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
                                    the_enum = Value_Rear;
                                    goto enum_is_done;
                                  }
                            case 'B':
                                if (strcmp(&(json_string->getData()[5]), "oth") == 0)
                                      {
                                        the_enum = Value_RearBoth;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'D':
                                if (strcmp(&(json_string->getData()[5]), "river") == 0)
                                      {
                                        the_enum = Value_RearDriver;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strcmp(&(json_string->getData()[5]), "eft") == 0)
                                      {
                                        the_enum = Value_RearLeft;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'P':
                                if (strcmp(&(json_string->getData()[5]), "assenger") == 0)
                                      {
                                        the_enum = Value_RearPassenger;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'R':
                                if (strcmp(&(json_string->getData()[5]), "ight") == 0)
                                      {
                                        the_enum = Value_RearRight;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[5]), "op") == 0)
                                      {
                                        the_enum = Value_RearTop;
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
                            the_enum = Value_RightAll;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "op") == 0)
                  {
                    the_enum = Value_Top;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of CarWindowSelectionEnumJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

CarWindowSelectionEnumJSON::CarWindowSelectionEnumJSON(void) :
        flagHasValue(false)
  {
  }

CarWindowSelectionEnumJSON::CarWindowSelectionEnumJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

CarWindowSelectionEnumJSON::CarWindowSelectionEnumJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

CarWindowSelectionEnumJSON::CarWindowSelectionEnumJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

CarWindowSelectionEnumJSON::~CarWindowSelectionEnumJSON(void)
  {
  }

bool CarWindowSelectionEnumJSON::hasValue(void) const
  {
    return flagHasValue;
  }

CarWindowSelectionEnumJSON::TypeValue CarWindowSelectionEnumJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const CarWindowSelectionEnumJSON::TypeValue CarWindowSelectionEnumJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *CarWindowSelectionEnumJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string CarWindowSelectionEnumJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

CarWindowSelectionEnumJSON *CarWindowSelectionEnumJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarWindowSelectionEnumJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarWindowSelectionEnumJSON>, CarWindowSelectionEnumJSON *, bool> generator("Type CarWindowSelectionEnum", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
