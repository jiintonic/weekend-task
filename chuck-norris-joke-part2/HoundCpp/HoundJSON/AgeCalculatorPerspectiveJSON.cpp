/* file "AgeCalculatorPerspectiveJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AgeCalculatorPerspectiveJSON.h"

#include "AgeCalculatorPerspectiveJSON.h"


AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorPerspectiveJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "irst") == 0)
                return Value_First;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "econd") == 0)
                return Value_Second;
            break;
        case 'T':
            if (strncmp(&(chars[1]), "hird", 4) == 0)
              {
                switch ((unsigned char)(chars[5]))
                  {
                    case 0:
                        return Value_Third;
                    case 'F':
                        if (strcmp(&(chars[6]), "emale") == 0)
                            return Value_ThirdFemale;
                        break;
                    case 'M':
                        if (strcmp(&(chars[6]), "ale") == 0)
                            return Value_ThirdMale;
                        break;
                    case 'O':
                        if (strcmp(&(chars[6]), "bject") == 0)
                            return Value_ThirdObject;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *AgeCalculatorPerspectiveJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_First:
            return "First";
        case Value_Second:
            return "Second";
        case Value_Third:
            return "Third";
        case Value_ThirdMale:
            return "ThirdMale";
        case Value_ThirdFemale:
            return "ThirdFemale";
        case Value_ThirdObject:
            return "ThirdObject";
        default:
            assert(false);
            return NULL;
      }
  }

AgeCalculatorPerspectiveJSON::AgeCalculatorPerspectiveJSON(const AgeCalculatorPerspectiveJSON &)
  {
    assert(false);
  }

AgeCalculatorPerspectiveJSON &AgeCalculatorPerspectiveJSON::operator=(const AgeCalculatorPerspectiveJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AgeCalculatorPerspectiveJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of AgeCalculatorPerspectiveJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "irst") == 0)
                  {
                    the_enum = Value_First;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "econd") == 0)
                  {
                    the_enum = Value_Second;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "hird", 4) == 0)
              {
                switch ((unsigned char)(json_string->getData()[5]))
                  {
                    case 0:
                          {
                            the_enum = Value_Third;
                            goto enum_is_done;
                          }
                    case 'F':
                        if (strcmp(&(json_string->getData()[6]), "emale") == 0)
                              {
                                the_enum = Value_ThirdFemale;
                                goto enum_is_done;
                              }
                        break;
                    case 'M':
                        if (strcmp(&(json_string->getData()[6]), "ale") == 0)
                              {
                                the_enum = Value_ThirdMale;
                                goto enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[6]), "bject") == 0)
                              {
                                the_enum = Value_ThirdObject;
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
    throw("The value for field Value of AgeCalculatorPerspectiveJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

AgeCalculatorPerspectiveJSON::AgeCalculatorPerspectiveJSON(void) :
        flagHasValue(false)
  {
  }

AgeCalculatorPerspectiveJSON::AgeCalculatorPerspectiveJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

AgeCalculatorPerspectiveJSON::AgeCalculatorPerspectiveJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

AgeCalculatorPerspectiveJSON::AgeCalculatorPerspectiveJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

AgeCalculatorPerspectiveJSON::~AgeCalculatorPerspectiveJSON(void)
  {
  }

bool AgeCalculatorPerspectiveJSON::hasValue(void) const
  {
    return flagHasValue;
  }

AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorPerspectiveJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorPerspectiveJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *AgeCalculatorPerspectiveJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string AgeCalculatorPerspectiveJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

AgeCalculatorPerspectiveJSON *AgeCalculatorPerspectiveJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AgeCalculatorPerspectiveJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorPerspectiveJSON>, AgeCalculatorPerspectiveJSON *, bool> generator("Type AgeCalculatorPerspective", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
