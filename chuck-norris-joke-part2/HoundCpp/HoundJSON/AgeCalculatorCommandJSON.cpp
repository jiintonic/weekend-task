/* file "AgeCalculatorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AgeCalculatorCommandJSON.h"

#include "AgeCalculatorCommandJSON.h"


AgeCalculatorCommandJSON::TypeAgesJSON::TypeUnit AgeCalculatorCommandJSON::TypeAgesJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ays") == 0)
                return Unit_Days;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ours") == 0)
                return Unit_Hours;
            break;
        case 'M':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "nutes") == 0)
                        return Unit_Minutes;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "nths") == 0)
                        return Unit_Months;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "econds") == 0)
                return Unit_Seconds;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Unit_Unknown;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "eeks") == 0)
                return Unit_Weeks;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "ears") == 0)
                return Unit_Years;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *AgeCalculatorCommandJSON::TypeAgesJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_Years:
            return "Years";
        case Unit_Months:
            return "Months";
        case Unit_Weeks:
            return "Weeks";
        case Unit_Days:
            return "Days";
        case Unit_Hours:
            return "Hours";
        case Unit_Minutes:
            return "Minutes";
        case Unit_Seconds:
            return "Seconds";
        case Unit_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

AgeCalculatorCommandJSON::TypeAgesJSON::TypeAgesJSON(const TypeAgesJSON &)
  {
    assert(false);
  }

AgeCalculatorCommandJSON::TypeAgesJSON &AgeCalculatorCommandJSON::TypeAgesJSON::operator=(const TypeAgesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AgeCalculatorCommandJSON::TypeAgesJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of TypeAgesJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ays") == 0)
                  {
                    the_enum = Unit_Days;
                    goto enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ours") == 0)
                  {
                    the_enum = Unit_Hours;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "nutes") == 0)
                          {
                            the_enum = Unit_Minutes;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "nths") == 0)
                          {
                            the_enum = Unit_Months;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "econds") == 0)
                  {
                    the_enum = Unit_Seconds;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = Unit_Unknown;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "eeks") == 0)
                  {
                    the_enum = Unit_Weeks;
                    goto enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "ears") == 0)
                  {
                    the_enum = Unit_Years;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of TypeAgesJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

void AgeCalculatorCommandJSON::TypeAgesJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Value of TypeAgesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Value of TypeAgesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setValue(extracted_integer);
  }

void AgeCalculatorCommandJSON::TypeAgesJSON::fromJSONValueIsInferred(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ValueIsInferred of TypeAgesJSON is not true for false.");
          }
      }
    setValueIsInferred(the_bool);
  }

void AgeCalculatorCommandJSON::TypeAgesJSON::fromJSONWasRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field WasRequested of TypeAgesJSON is not true for false.");
          }
      }
    setWasRequested(the_bool);
  }

AgeCalculatorCommandJSON::TypeAgesJSON::TypeAgesJSON(void) :
        flagHasUnit(false),
        flagHasValue(false),
        flagHasValueIsInferred(false),
        flagHasWasRequested(false)
  {
  }

AgeCalculatorCommandJSON::TypeAgesJSON::~TypeAgesJSON(void)
  {
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

AgeCalculatorCommandJSON::TypeAgesJSON::TypeUnit AgeCalculatorCommandJSON::TypeAgesJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const AgeCalculatorCommandJSON::TypeAgesJSON::TypeUnit AgeCalculatorCommandJSON::TypeAgesJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const char *AgeCalculatorCommandJSON::TypeAgesJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string AgeCalculatorCommandJSON::TypeAgesJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::hasValue(void) const
  {
    return flagHasValue;
  }

OInteger AgeCalculatorCommandJSON::TypeAgesJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const OInteger AgeCalculatorCommandJSON::TypeAgesJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::hasValueIsInferred(void) const
  {
    return flagHasValueIsInferred;
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::getValueIsInferred(void)
  {
    assert(flagHasValueIsInferred);
    return storeValueIsInferred;
  }

const bool AgeCalculatorCommandJSON::TypeAgesJSON::getValueIsInferred(void) const
  {
    assert(flagHasValueIsInferred);
    return storeValueIsInferred;
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::hasWasRequested(void) const
  {
    return flagHasWasRequested;
  }

bool AgeCalculatorCommandJSON::TypeAgesJSON::getWasRequested(void)
  {
    assert(flagHasWasRequested);
    return storeWasRequested;
  }

const bool AgeCalculatorCommandJSON::TypeAgesJSON::getWasRequested(void) const
  {
    assert(flagHasWasRequested);
    return storeWasRequested;
  }

AgeCalculatorCommandJSON::AgeCalculatorCommandJSON(const AgeCalculatorCommandJSON &)
  {
    assert(false);
  }

AgeCalculatorCommandJSON &AgeCalculatorCommandJSON::operator=(const AgeCalculatorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AgeCalculatorCommandJSON::extraBornDateToJSON(void) const
  {
    JSONValueHandler handler_BornDate;
    storeBornDate->write_as_json(&handler_BornDate);
    handler_BornDate.result->add_reference();
    return handler_BornDate.result;
  }

JSONValue *AgeCalculatorCommandJSON::extraDestinationDateToJSON(void) const
  {
    JSONValueHandler handler_DestinationDate;
    storeDestinationDate->write_as_json(&handler_DestinationDate);
    handler_DestinationDate.result->add_reference();
    return handler_DestinationDate.result;
  }

JSONValue *AgeCalculatorCommandJSON::extraDestinationIsNowToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsNow = (storeDestinationIsNow ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsNow;
  }

JSONValue *AgeCalculatorCommandJSON::extraDestinationIsTodayToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsToday = (storeDestinationIsToday ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsToday;
  }

JSONValue *AgeCalculatorCommandJSON::extraNowDateToJSON(void) const
  {
    JSONValueHandler handler_NowDate;
    storeNowDate->write_as_json(&handler_NowDate);
    handler_NowDate.result->add_reference();
    return handler_NowDate.result;
  }

JSONValue *AgeCalculatorCommandJSON::extraPerspectiveToJSON(void) const
  {
    JSONValueHandler handler_Perspective;
    storePerspective->write_as_json(&handler_Perspective);
    handler_Perspective.result->add_reference();
    return handler_Perspective.result;
  }

JSONValue *AgeCalculatorCommandJSON::extraAgesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Ages = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAges.size(); ++num1)
      {
        JSONValueHandler handler_Ages;
        storeAges[num1]->write_as_json(&handler_Ages);
        handler_Ages.result->add_reference();
        generated_array_1_Ages->appendComponent(handler_Ages.result);
        handler_Ages.result->remove_reference();
      }
    return generated_array_1_Ages;
  }

void AgeCalculatorCommandJSON::fromJSONBornDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBornDate(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorCommandJSON::fromJSONDestinationDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDate(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorCommandJSON::fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DestinationIsNow of AgeCalculatorCommandJSON is not true for false.");
          }
      }
    setDestinationIsNow(the_bool);
  }

void AgeCalculatorCommandJSON::fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DestinationIsToday of AgeCalculatorCommandJSON is not true for false.");
          }
      }
    setDestinationIsToday(the_bool);
  }

void AgeCalculatorCommandJSON::fromJSONNowDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNowDate(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorCommandJSON::fromJSONPerspective(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AgeCalculatorPerspectiveJSON *convert_classy = AgeCalculatorPerspectiveJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPerspective(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorCommandJSON::fromJSONAges(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ages of AgeCalculatorCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAgesJSON * > vector_Ages1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAgesJSON *convert_classy = TypeAgesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Ages1[num1] = convert_classy;
      }
    initAges();
    for (size_t num2 = 0; num2 < vector_Ages1.size(); ++num2)
        appendAges(vector_Ages1[num2]);
    for (size_t num1 = 0; num1 < vector_Ages1.size(); ++num1)
      {
        vector_Ages1[num1]->remove_reference();
      }
  }

AgeCalculatorCommandJSON::AgeCalculatorCommandJSON(void) :
        flagHasBornDate(false),
        flagHasDestinationDate(false),
        flagHasDestinationIsNow(false),
        flagHasDestinationIsToday(false),
        flagHasNowDate(false),
        flagHasPerspective(false),
        flagHasAges(false)
  {
  }

AgeCalculatorCommandJSON::~AgeCalculatorCommandJSON(void)
  {
    if (flagHasBornDate)
      {
        storeBornDate->remove_reference();
      }
    if (flagHasDestinationDate)
      {
        storeDestinationDate->remove_reference();
      }
    if (flagHasNowDate)
      {
        storeNowDate->remove_reference();
      }
    if (flagHasPerspective)
      {
        storePerspective->remove_reference();
      }
    if (flagHasAges)
      {
        for (size_t num4 = 0; num4 < storeAges.size(); ++num4)
          {
            storeAges[num4]->remove_reference();
          }
      }
  }

const char *AgeCalculatorCommandJSON::getCommandKind(void) const
  {
    return "AgeCalculatorCommand";
  }

bool AgeCalculatorCommandJSON::hasBornDate(void) const
  {
    return flagHasBornDate;
  }

DateAndOrTimeJSON * AgeCalculatorCommandJSON::getBornDate(void)
  {
    assert(flagHasBornDate);
    return storeBornDate;
  }

const DateAndOrTimeJSON * AgeCalculatorCommandJSON::getBornDate(void) const
  {
    assert(flagHasBornDate);
    return storeBornDate;
  }

bool AgeCalculatorCommandJSON::hasDestinationDate(void) const
  {
    return flagHasDestinationDate;
  }

DateAndOrTimeJSON * AgeCalculatorCommandJSON::getDestinationDate(void)
  {
    assert(flagHasDestinationDate);
    return storeDestinationDate;
  }

const DateAndOrTimeJSON * AgeCalculatorCommandJSON::getDestinationDate(void) const
  {
    assert(flagHasDestinationDate);
    return storeDestinationDate;
  }

bool AgeCalculatorCommandJSON::hasDestinationIsNow(void) const
  {
    return flagHasDestinationIsNow;
  }

bool AgeCalculatorCommandJSON::getDestinationIsNow(void)
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

const bool AgeCalculatorCommandJSON::getDestinationIsNow(void) const
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

bool AgeCalculatorCommandJSON::hasDestinationIsToday(void) const
  {
    return flagHasDestinationIsToday;
  }

bool AgeCalculatorCommandJSON::getDestinationIsToday(void)
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

const bool AgeCalculatorCommandJSON::getDestinationIsToday(void) const
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

bool AgeCalculatorCommandJSON::hasNowDate(void) const
  {
    return flagHasNowDate;
  }

DateAndOrTimeJSON * AgeCalculatorCommandJSON::getNowDate(void)
  {
    assert(flagHasNowDate);
    return storeNowDate;
  }

const DateAndOrTimeJSON * AgeCalculatorCommandJSON::getNowDate(void) const
  {
    assert(flagHasNowDate);
    return storeNowDate;
  }

bool AgeCalculatorCommandJSON::hasPerspective(void) const
  {
    return flagHasPerspective;
  }

AgeCalculatorPerspectiveJSON * AgeCalculatorCommandJSON::getPerspective(void)
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

const AgeCalculatorPerspectiveJSON * AgeCalculatorCommandJSON::getPerspective(void) const
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorCommandJSON::getPerspectiveValue(void)
  {
    return getPerspective()->getValue();
  }

const AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorCommandJSON::getPerspectiveValue(void) const
  {
    return getPerspective()->getValue();
  }

const char *AgeCalculatorCommandJSON::getPerspectiveAsChars(void) const
  {
    return getPerspective()->getValueAsChars();
  }

std::string AgeCalculatorCommandJSON::getPerspectiveAsString(void) const
  {
    return getPerspective()->getValueAsString();
  }

bool AgeCalculatorCommandJSON::hasAges(void) const
  {
    return flagHasAges;
  }

size_t AgeCalculatorCommandJSON::countOfAges(void) const
  {
    assert(flagHasAges);
    return storeAges.size();
  }

AgeCalculatorCommandJSON::TypeAgesJSON * AgeCalculatorCommandJSON::elementOfAges(size_t element_num)
  {
    assert(flagHasAges);
    return storeAges[element_num];
  }

const AgeCalculatorCommandJSON::TypeAgesJSON * AgeCalculatorCommandJSON::elementOfAges(size_t element_num) const
  {
    assert(flagHasAges);
    return storeAges[element_num];
  }

std::vector< AgeCalculatorCommandJSON::TypeAgesJSON * > AgeCalculatorCommandJSON::getAges(void)
  {
    assert(flagHasAges);
    return storeAges;
  }

const std::vector< AgeCalculatorCommandJSON::TypeAgesJSON * > AgeCalculatorCommandJSON::getAges(void) const
  {
    assert(flagHasAges);
    return storeAges;
  }

char AgeCalculatorCommandJSON::TypeAgesJSON::Generator::lowerBoundValue[] = "0";
AgeCalculatorCommandJSON::TypeAgesJSON *AgeCalculatorCommandJSON::TypeAgesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAgesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAgesJSON>, TypeAgesJSON *, bool> generator("Type TypeAges", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AgeCalculatorCommandJSON *AgeCalculatorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AgeCalculatorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorCommandJSON>, AgeCalculatorCommandJSON *, bool> generator("Type AgeCalculatorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
