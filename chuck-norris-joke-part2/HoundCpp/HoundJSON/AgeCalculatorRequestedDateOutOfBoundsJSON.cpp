/* file "AgeCalculatorRequestedDateOutOfBoundsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AgeCalculatorRequestedDateOutOfBoundsJSON.h"

#include "AgeCalculatorRequestedDateOutOfBoundsJSON.h"


AgeCalculatorRequestedDateOutOfBoundsJSON::TypeDatesSpecified AgeCalculatorRequestedDateOutOfBoundsJSON::stringToDatesSpecified(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'r':
                        if (strcmp(&(chars[3]), "n") == 0)
                            return DatesSpecified_Born;
                        break;
                    case 't':
                        if (strcmp(&(chars[3]), "h") == 0)
                            return DatesSpecified_Both;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "estination") == 0)
                return DatesSpecified_Destination;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return DatesSpecified_None;
            break;
        default:
            break;
      }
    throw("The value for field `DatesSpecified' is not one of the legal values.");
  }

const char *AgeCalculatorRequestedDateOutOfBoundsJSON::stringFromDatesSpecified(TypeDatesSpecified the_enum)
  {
    switch (the_enum)
      {
        case DatesSpecified_Both:
            return "Both";
        case DatesSpecified_Born:
            return "Born";
        case DatesSpecified_Destination:
            return "Destination";
        case DatesSpecified_None:
            return "None";
        default:
            assert(false);
            return NULL;
      }
  }

AgeCalculatorRequestedDateOutOfBoundsJSON::AgeCalculatorRequestedDateOutOfBoundsJSON(const AgeCalculatorRequestedDateOutOfBoundsJSON &)
  {
    assert(false);
  }

AgeCalculatorRequestedDateOutOfBoundsJSON &AgeCalculatorRequestedDateOutOfBoundsJSON::operator=(const AgeCalculatorRequestedDateOutOfBoundsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AgeCalculatorRequestedDateOutOfBoundsJSON::extraDestinationIsNowToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsNow = (storeDestinationIsNow ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsNow;
  }

JSONValue *AgeCalculatorRequestedDateOutOfBoundsJSON::extraDestinationIsTodayToJSON(void) const
  {
    JSONValue *generated_boolean_DestinationIsToday = (storeDestinationIsToday ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DestinationIsToday;
  }

JSONValue *AgeCalculatorRequestedDateOutOfBoundsJSON::extraDatesSpecifiedToJSON(void) const
  {
    JSONStringValue *generated_string_DatesSpecified;
    switch (storeDatesSpecified)
      {
        case DatesSpecified_Both:
            generated_string_DatesSpecified = new JSONStringValue("Both");
            break;
        case DatesSpecified_Born:
            generated_string_DatesSpecified = new JSONStringValue("Born");
            break;
        case DatesSpecified_Destination:
            generated_string_DatesSpecified = new JSONStringValue("Destination");
            break;
        case DatesSpecified_None:
            generated_string_DatesSpecified = new JSONStringValue("None");
            break;
        default:
            assert(false);
            generated_string_DatesSpecified = NULL;
      }
    return generated_string_DatesSpecified;
  }

JSONValue *AgeCalculatorRequestedDateOutOfBoundsJSON::extraPerspectiveToJSON(void) const
  {
    JSONValueHandler handler_Perspective;
    storePerspective->write_as_json(&handler_Perspective);
    handler_Perspective.result->add_reference();
    return handler_Perspective.result;
  }

void AgeCalculatorRequestedDateOutOfBoundsJSON::fromJSONDestinationIsNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DestinationIsNow of AgeCalculatorRequestedDateOutOfBoundsJSON is not true for false.");
          }
      }
    setDestinationIsNow(the_bool);
  }

void AgeCalculatorRequestedDateOutOfBoundsJSON::fromJSONDestinationIsToday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DestinationIsToday of AgeCalculatorRequestedDateOutOfBoundsJSON is not true for false.");
          }
      }
    setDestinationIsToday(the_bool);
  }

void AgeCalculatorRequestedDateOutOfBoundsJSON::fromJSONDatesSpecified(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DatesSpecified of AgeCalculatorRequestedDateOutOfBoundsJSON is not a string.");
    TypeDatesSpecified the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'r':
                        if (strcmp(&(json_string->getData()[3]), "n") == 0)
                              {
                                the_enum = DatesSpecified_Born;
                                goto enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), "h") == 0)
                              {
                                the_enum = DatesSpecified_Both;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "estination") == 0)
                  {
                    the_enum = DatesSpecified_Destination;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = DatesSpecified_None;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field DatesSpecified of AgeCalculatorRequestedDateOutOfBoundsJSON is not one of the legal strings.");
  enum_is_done:;
    setDatesSpecified(the_enum);
  }

void AgeCalculatorRequestedDateOutOfBoundsJSON::fromJSONPerspective(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AgeCalculatorPerspectiveJSON *convert_classy = AgeCalculatorPerspectiveJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPerspective(convert_classy);
    convert_classy->remove_reference();
  }

AgeCalculatorRequestedDateOutOfBoundsJSON::AgeCalculatorRequestedDateOutOfBoundsJSON(void) :
        flagHasDestinationIsNow(false),
        flagHasDestinationIsToday(false),
        flagHasDatesSpecified(false),
        flagHasPerspective(false)
  {
    extraIndex = create_string_index();
  }

AgeCalculatorRequestedDateOutOfBoundsJSON::~AgeCalculatorRequestedDateOutOfBoundsJSON(void)
  {
    if (flagHasPerspective)
      {
        storePerspective->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AgeCalculatorRequestedDateOutOfBoundsJSON::getErrorType(void) const
  {
    return "AgeCalculatorRequestedDateOutOfBounds";
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::hasDestinationIsNow(void) const
  {
    return flagHasDestinationIsNow;
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::getDestinationIsNow(void)
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

const bool AgeCalculatorRequestedDateOutOfBoundsJSON::getDestinationIsNow(void) const
  {
    assert(flagHasDestinationIsNow);
    return storeDestinationIsNow;
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::hasDestinationIsToday(void) const
  {
    return flagHasDestinationIsToday;
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::getDestinationIsToday(void)
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

const bool AgeCalculatorRequestedDateOutOfBoundsJSON::getDestinationIsToday(void) const
  {
    assert(flagHasDestinationIsToday);
    return storeDestinationIsToday;
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::hasDatesSpecified(void) const
  {
    return flagHasDatesSpecified;
  }

AgeCalculatorRequestedDateOutOfBoundsJSON::TypeDatesSpecified AgeCalculatorRequestedDateOutOfBoundsJSON::getDatesSpecified(void)
  {
    assert(flagHasDatesSpecified);
    return storeDatesSpecified;
  }

const AgeCalculatorRequestedDateOutOfBoundsJSON::TypeDatesSpecified AgeCalculatorRequestedDateOutOfBoundsJSON::getDatesSpecified(void) const
  {
    assert(flagHasDatesSpecified);
    return storeDatesSpecified;
  }

const char *AgeCalculatorRequestedDateOutOfBoundsJSON::getDatesSpecifiedAsChars(void) const
  {
    return stringFromDatesSpecified(getDatesSpecified());
  }

std::string AgeCalculatorRequestedDateOutOfBoundsJSON::getDatesSpecifiedAsString(void) const
  {
    return stringFromDatesSpecified(getDatesSpecified());
  }

bool AgeCalculatorRequestedDateOutOfBoundsJSON::hasPerspective(void) const
  {
    return flagHasPerspective;
  }

AgeCalculatorPerspectiveJSON * AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspective(void)
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

const AgeCalculatorPerspectiveJSON * AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspective(void) const
  {
    assert(flagHasPerspective);
    return storePerspective;
  }

AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspectiveValue(void)
  {
    return getPerspective()->getValue();
  }

const AgeCalculatorPerspectiveJSON::TypeValue AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspectiveValue(void) const
  {
    return getPerspective()->getValue();
  }

const char *AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspectiveAsChars(void) const
  {
    return getPerspective()->getValueAsChars();
  }

std::string AgeCalculatorRequestedDateOutOfBoundsJSON::getPerspectiveAsString(void) const
  {
    return getPerspective()->getValueAsString();
  }

AgeCalculatorRequestedDateOutOfBoundsJSON *AgeCalculatorRequestedDateOutOfBoundsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AgeCalculatorRequestedDateOutOfBoundsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AgeCalculatorRequestedDateOutOfBoundsJSON>, AgeCalculatorRequestedDateOutOfBoundsJSON *, bool> generator("Type AgeCalculatorRequestedDateOutOfBounds", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
