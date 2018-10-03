/* file "AgeCalculatorStartCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AgeCalculatorStartCommandJSON.h"

#include "AgeCalculatorStartCommandJSON.h"


AgeCalculatorStartCommandJSON::TypeMode AgeCalculatorStartCommandJSON::stringToMode(const char *chars)
  {
    if (strcmp(chars, "AgeCalculatorStart") == 0)
        return Mode_AgeCalculatorStart;
    throw("The value for field `Mode' is not one of the legal values.");
  }

const char *AgeCalculatorStartCommandJSON::stringFromMode(TypeMode the_enum)
  {
    switch (the_enum)
      {
        case Mode_AgeCalculatorStart:
            return "AgeCalculatorStart";
        default:
            assert(false);
            return NULL;
      }
  }

AgeCalculatorStartCommandJSON::AgeCalculatorStartCommandJSON(const AgeCalculatorStartCommandJSON &)
  {
    assert(false);
  }

AgeCalculatorStartCommandJSON &AgeCalculatorStartCommandJSON::operator=(const AgeCalculatorStartCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AgeCalculatorStartCommandJSON::extraModeToJSON(void) const
  {
    JSONStringValue *generated_string_Mode;
    generated_string_Mode = new JSONStringValue("AgeCalculatorStart");
    return generated_string_Mode;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraUnderstoodToJSON(void) const
  {
    JSONValue *generated_boolean_Understood = (storeUnderstood ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Understood;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraInvalidBornDateWasGivenToJSON(void) const
  {
    JSONValue *generated_boolean_InvalidBornDateWasGiven = (storeInvalidBornDateWasGiven ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_InvalidBornDateWasGiven;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraDestinationDateToJSON(void) const
  {
    JSONValueHandler handler_DestinationDate;
    storeDestinationDate->write_as_json(&handler_DestinationDate);
    handler_DestinationDate.result->add_reference();
    return handler_DestinationDate.result;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraDestinationIsNowToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsNow = (storeDestinationIsNow ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsNow;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraDestinationIsTodayToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsToday = (storeDestinationIsToday ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsToday;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraNowDateToJSON(void) const
  {
    JSONValueHandler handler_NowDate;
    storeNowDate->write_as_json(&handler_NowDate);
    handler_NowDate.result->add_reference();
    return handler_NowDate.result;
  }

JSONValue *AgeCalculatorStartCommandJSON::extraPerspectiveToJSON(void) const
  {
    JSONValueHandler handler_Perspective;
    storePerspective->write_as_json(&handler_Perspective);
    handler_Perspective.result->add_reference();
    return handler_Perspective.result;
  }

void AgeCalculatorStartCommandJSON::fromJSONMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Mode of AgeCalculatorStartCommandJSON is not a string.");
    if (!(strcmp(json_string->getData(), "AgeCalculatorStart") == 0))
        throw("The value for field Mode of AgeCalculatorStartCommandJSON is not `AgeCalculatorStart'.");
    setMode();
  }

void AgeCalculatorStartCommandJSON::fromJSONUnderstood(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Understood of AgeCalculatorStartCommandJSON is not true for false.");
          }
      }
    setUnderstood(the_bool);
  }

void AgeCalculatorStartCommandJSON::fromJSONInvalidBornDateWasGiven(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InvalidBornDateWasGiven of AgeCalculatorStartCommandJSON is not true for false.");
          }
      }
    setInvalidBornDateWasGiven(the_bool);
  }

void AgeCalculatorStartCommandJSON::fromJSONDestinationDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDate(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorStartCommandJSON::fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DestinationIsNow of AgeCalculatorStartCommandJSON is not true for false.");
          }
      }
    setDestinationIsNow(the_bool);
  }

void AgeCalculatorStartCommandJSON::fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DestinationIsToday of AgeCalculatorStartCommandJSON is not true for false.");
          }
      }
    setDestinationIsToday(the_bool);
  }

void AgeCalculatorStartCommandJSON::fromJSONNowDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNowDate(convert_classy);
    convert_classy->remove_reference();
  }

void AgeCalculatorStartCommandJSON::fromJSONPerspective(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AgeCalculatorPerspectiveJSON *convert_classy = AgeCalculatorPerspectiveJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPerspective(convert_classy);
    convert_classy->remove_reference();
  }

AgeCalculatorStartCommandJSON::AgeCalculatorStartCommandJSON(void) :
        flagHasMode(false),
        flagHasUnderstood(false),
        flagHasInvalidBornDateWasGiven(false),
        flagHasDestinationDate(false),
        flagHasDestinationIsNow(false),
        flagHasDestinationIsToday(false),
        flagHasNowDate(false),
        flagHasPerspective(false)
  {
  }

AgeCalculatorStartCommandJSON::~AgeCalculatorStartCommandJSON(void)
  {
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
  }

const char *AgeCalculatorStartCommandJSON::getCommandKind(void) const
  {
    return "AgeCalculatorStartCommand";
  }

bool AgeCalculatorStartCommandJSON::hasMode(void) const
  {
    return flagHasMode;
  }

AgeCalculatorStartCommandJSON::TypeMode AgeCalculatorStartCommandJSON::getMode(void)
  {
    assert(flagHasMode);
    return Mode_AgeCalculatorStart;
  }

const AgeCalculatorStartCommandJSON::TypeMode AgeCalculatorStartCommandJSON::getMode(void) const
  {
    assert(flagHasMode);
    return Mode_AgeCalculatorStart;
  }

const char *AgeCalculatorStartCommandJSON::getModeAsChars(void) const
  {
    return stringFromMode(getMode());
  }

std::string AgeCalculatorStartCommandJSON::getModeAsString(void) const
  {
    return stringFromMode(getMode());
  }

bool AgeCalculatorStartCommandJSON::hasUnderstood(void) const
  {
    return flagHasUnderstood;
  }

bool AgeCalculatorStartCommandJSON::getUnderstood(void)
  {
    assert(flagHasUnderstood);
    return storeUnderstood;
  }

const bool AgeCalculatorStartCommandJSON::getUnderstood(void) const
  {
    assert(flagHasUnderstood);
    return storeUnderstood;
  }

bool AgeCalculatorStartCommandJSON::hasInvalidBornDateWasGiven(void) const
  {
    return flagHasInvalidBornDateWasGiven;
  }

bool AgeCalculatorStartCommandJSON::getInvalidBornDateWasGiven(void)
  {
    assert(flagHasInvalidBornDateWasGiven);
    return storeInvalidBornDateWasGiven;
  }

const bool AgeCalculatorStartCommandJSON::getInvalidBornDateWasGiven(void) const
  {
    assert(flagHasInvalidBornDateWasGiven);
    return storeInvalidBornDateWasGiven;
  }

bool AgeCalculatorStartCommandJSON::hasDestinationDate(void) const
  {
    return flagHasDestinationDate;
  }

DateAndOrTimeJSON * AgeCalculatorStartCommandJSON::getDestinationDate(void)
  {
    assert(flagHasDestinationDate);
    return storeDestinationDate;
  }

const DateAndOrTimeJSON * AgeCalculatorStartCommandJSON::getDestinationDate(void) const
  {
    assert(flagHasDestinationDate);
    return storeDestinationDate;
  }

bool AgeCalculatorStartCommandJSON::hasDestinationIsNow(void) const
  {
    return flagHasDestinationIsNow;
  }

bool AgeCalculatorStartCommandJSON::getDestinationIsNow(void)
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

const bool AgeCalculatorStartCommandJSON::getDestinationIsNow(void) const
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

bool AgeCalculatorStartCommandJSON::hasDestinationIsToday(void) const
  {
    return flagHasDestinationIsToday;
  }

bool AgeCalculatorStartCommandJSON::getDestinationIsToday(void)
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

const bool AgeCalculatorStartCommandJSON::getDestinationIsToday(void) const
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

bool AgeCalculatorStartCommandJSON::hasNowDate(void) const
  {
    return flagHasNowDate;
  }

DateAndOrTimeJSON * AgeCalculatorStartCommandJSON::getNowDate(void)
  {
    assert(flagHasNowDate);
    return storeNowDate;
  }

const DateAndOrTimeJSON * AgeCalculatorStartCommandJSON::getNowDate(void) const
  {
    assert(flagHasNowDate);
    return storeNowDate;
  }

bool AgeCalculatorStartCommandJSON::hasPerspective(void) const
  {
    return flagHasPerspective;
  }

AgeCalculatorPerspectiveJSON * AgeCalculatorStartCommandJSON::getPerspective(void)
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

const AgeCalculatorPerspectiveJSON * AgeCalculatorStartCommandJSON::getPerspective(void) const
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorStartCommandJSON::getPerspectiveValue(void)
  {
    return getPerspective()->getValue();
  }

const AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorStartCommandJSON::getPerspectiveValue(void) const
  {
    return getPerspective()->getValue();
  }

const char *AgeCalculatorStartCommandJSON::getPerspectiveAsChars(void) const
  {
    return getPerspective()->getValueAsChars();
  }

std::string AgeCalculatorStartCommandJSON::getPerspectiveAsString(void) const
  {
    return getPerspective()->getValueAsString();
  }

AgeCalculatorStartCommandJSON *AgeCalculatorStartCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AgeCalculatorStartCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorStartCommandJSON>, AgeCalculatorStartCommandJSON *, bool> generator("Type AgeCalculatorStartCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
