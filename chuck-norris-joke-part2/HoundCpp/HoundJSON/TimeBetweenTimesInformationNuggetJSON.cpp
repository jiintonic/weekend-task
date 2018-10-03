/* file "TimeBetweenTimesInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeBetweenTimesInformationNuggetJSON.h"

#include "TimeBetweenTimesInformationNuggetJSON.h"


TimeBetweenTimesInformationNuggetJSON::TypeUnits::TypeUnits(void)
  {
  }

TimeBetweenTimesInformationNuggetJSON::TypeUnits::TypeUnits(const TypeUnits &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

TimeBetweenTimesInformationNuggetJSON::TypeUnits::TypeUnits(TypeUnitsKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator==(const TypeUnits &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator!=(const TypeUnits &other) const
  {
    return !(operator==(other));
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator<(const TypeUnits &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator>(const TypeUnits &other) const
  {
    return other.operator<(*this);
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator>=(const TypeUnits &other) const
  {
    return !(operator<(other));
  }

bool TimeBetweenTimesInformationNuggetJSON::TypeUnits::operator<=(const TypeUnits &other) const
  {
    return !(other.operator<(*this));
  }

TimeBetweenTimesInformationNuggetJSON::TypeUnitsKnownValues TimeBetweenTimesInformationNuggetJSON::stringToUnits(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'c':
            if (strcmp(&(chars[1]), "enturies") == 0)
                return Units_centuries;
            break;
        case 'd':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ys") == 0)
                        return Units_days;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "cades") == 0)
                        return Units_decades;
                    break;
                default:
                    break;
              }
            break;
        case 'h':
            if (strcmp(&(chars[1]), "ours") == 0)
                return Units_hours;
            break;
        case 'm':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "nutes") == 0)
                        return Units_minutes;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "nths") == 0)
                        return Units_months;
                    break;
                default:
                    break;
              }
            break;
        case 's':
            if (strcmp(&(chars[1]), "econds") == 0)
                return Units_seconds;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Units_unknown;
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eeks") == 0)
                return Units_weeks;
            break;
        case 'y':
            if (strcmp(&(chars[1]), "ears") == 0)
                return Units_years;
            break;
        default:
            break;
      }
    return Units__none;
  }

const char *TimeBetweenTimesInformationNuggetJSON::stringFromUnits(TypeUnitsKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Units_unknown:
            return "unknown";
        case Units_days:
            return "days";
        case Units_weeks:
            return "weeks";
        case Units_months:
            return "months";
        case Units_years:
            return "years";
        case Units_decades:
            return "decades";
        case Units_centuries:
            return "centuries";
        case Units_seconds:
            return "seconds";
        case Units_minutes:
            return "minutes";
        case Units_hours:
            return "hours";
        default:
            assert(false);
            return NULL;
      }
  }

TimeBetweenTimesInformationNuggetJSON::TimeBetweenTimesInformationNuggetJSON(const TimeBetweenTimesInformationNuggetJSON &)
  {
    assert(false);
  }

TimeBetweenTimesInformationNuggetJSON &TimeBetweenTimesInformationNuggetJSON::operator=(const TimeBetweenTimesInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraSourceDateAndOrTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_SourceDateAndOrTimeSpec;
    storeSourceDateAndOrTimeSpec->write_as_json(&handler_SourceDateAndOrTimeSpec);
    handler_SourceDateAndOrTimeSpec.result->add_reference();
    return handler_SourceDateAndOrTimeSpec.result;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraDestinationDateAndOrTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_DestinationDateAndOrTimeSpec;
    storeDestinationDateAndOrTimeSpec->write_as_json(&handler_DestinationDateAndOrTimeSpec);
    handler_DestinationDateAndOrTimeSpec.result->add_reference();
    return handler_DestinationDateAndOrTimeSpec.result;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraUnitOfMeasureAmountToJSON(void) const
  {
    JSONValueHandler handler_UnitOfMeasureAmount;
    storeUnitOfMeasureAmount->write_as_json(&handler_UnitOfMeasureAmount);
    handler_UnitOfMeasureAmount.result->add_reference();
    return handler_UnitOfMeasureAmount.result;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraTimeDifferenceToJSON(void) const
  {
    JSONValue *generated_rational_TimeDifference;
    if (((double)(long int)storeTimeDifference) == storeTimeDifference)
        generated_rational_TimeDifference = new JSONIntegerValue((long int)(storeTimeDifference));
    else
        generated_rational_TimeDifference = new JSONRationalValue(storeTimeDifference, DBL_DIG);
    return generated_rational_TimeDifference;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraUnitsToJSON(void) const
  {
    JSONStringValue *generated_string_Units;
    if (!(storeUnits.in_known_list))
      {
    generated_string_Units = new JSONStringValue(storeUnits.string_value.c_str());
      }
    else
      {
    switch (storeUnits.list_value)
      {
        case Units_unknown:
            generated_string_Units = new JSONStringValue("unknown");
            break;
        case Units_days:
            generated_string_Units = new JSONStringValue("days");
            break;
        case Units_weeks:
            generated_string_Units = new JSONStringValue("weeks");
            break;
        case Units_months:
            generated_string_Units = new JSONStringValue("months");
            break;
        case Units_years:
            generated_string_Units = new JSONStringValue("years");
            break;
        case Units_decades:
            generated_string_Units = new JSONStringValue("decades");
            break;
        case Units_centuries:
            generated_string_Units = new JSONStringValue("centuries");
            break;
        case Units_seconds:
            generated_string_Units = new JSONStringValue("seconds");
            break;
        case Units_minutes:
            generated_string_Units = new JSONStringValue("minutes");
            break;
        case Units_hours:
            generated_string_Units = new JSONStringValue("hours");
            break;
        default:
            assert(false);
            generated_string_Units = NULL;
      }
      }
    return generated_string_Units;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraMultipleUnitTimeDifferenceToJSON(void) const
  {
    JSONArrayValue *generated_array_1_MultipleUnitTimeDifference = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeMultipleUnitTimeDifference.size(); ++num1)
      {
        JSONValueHandler handler_MultipleUnitTimeDifference;
        storeMultipleUnitTimeDifference[num1]->write_as_json(&handler_MultipleUnitTimeDifference);
        handler_MultipleUnitTimeDifference.result->add_reference();
        generated_array_1_MultipleUnitTimeDifference->appendComponent(handler_MultipleUnitTimeDifference.result);
        handler_MultipleUnitTimeDifference.result->remove_reference();
      }
    return generated_array_1_MultipleUnitTimeDifference;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraMultipleUnitTimeDifferenceWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_MultipleUnitTimeDifferenceWritten = new JSONStringValue(storeMultipleUnitTimeDifferenceWritten.c_str());
    return generated_string_MultipleUnitTimeDifferenceWritten;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraMultipleUnitTimeDifferenceSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_MultipleUnitTimeDifferenceSpoken = new JSONStringValue(storeMultipleUnitTimeDifferenceSpoken.c_str());
    return generated_string_MultipleUnitTimeDifferenceSpoken;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraRequestedInThePastToJSON(void) const
  {
    JSONValue *generated_boolean_RequestedInThePast = (storeRequestedInThePast ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RequestedInThePast;
  }

JSONValue *TimeBetweenTimesInformationNuggetJSON::extraIsBetweenTwoDateTimesToJSON(void) const
  {
    JSONValue *generated_boolean_IsBetweenTwoDateTimes = (storeIsBetweenTwoDateTimes ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IsBetweenTwoDateTimes;
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONSourceDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONDestinationDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONUnitOfMeasureAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitOfMeasureAmountJSON *convert_classy = UnitOfMeasureAmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnitOfMeasureAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONTimeDifference(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TimeDifference of TimeBetweenTimesInformationNuggetJSON is not a number.");
          }
      }
    setTimeDifferenceText(the_rational_text);
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimeBetweenTimesInformationNuggetJSON is not a string.");
    TypeUnits the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "enturies") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_centuries;
                    goto open_enum_is_done;
                  }
            break;
        case 'd':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ys") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Units_days;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "cades") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Units_decades;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'h':
            if (strcmp(&(json_string->getData()[1]), "ours") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_hours;
                    goto open_enum_is_done;
                  }
            break;
        case 'm':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "nutes") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Units_minutes;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "nths") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Units_months;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "econds") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_seconds;
                    goto open_enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_unknown;
                    goto open_enum_is_done;
                  }
            break;
        case 'w':
            if (strcmp(&(json_string->getData()[1]), "eeks") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_weeks;
                    goto open_enum_is_done;
                  }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "ears") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Units_years;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setUnits(the_open_enum);
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONMultipleUnitTimeDifference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MultipleUnitTimeDifference of TimeBetweenTimesInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MultipleUnitTimeDifference of TimeBetweenTimesInformationNuggetJSON has too few elements.");
    std::vector< AmountJSON * > vector_MultipleUnitTimeDifference1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmountJSON *convert_classy = AmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MultipleUnitTimeDifference1[num1] = convert_classy;
      }
    assert(vector_MultipleUnitTimeDifference1.size() >= 1);
    initMultipleUnitTimeDifference();
    for (size_t num2 = 0; num2 < vector_MultipleUnitTimeDifference1.size(); ++num2)
        appendMultipleUnitTimeDifference(vector_MultipleUnitTimeDifference1[num2]);
    for (size_t num1 = 0; num1 < vector_MultipleUnitTimeDifference1.size(); ++num1)
      {
        vector_MultipleUnitTimeDifference1[num1]->remove_reference();
      }
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONMultipleUnitTimeDifferenceWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MultipleUnitTimeDifferenceWritten of TimeBetweenTimesInformationNuggetJSON is not a string.");
    setMultipleUnitTimeDifferenceWritten(std::string(json_string->getData()));
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONMultipleUnitTimeDifferenceSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MultipleUnitTimeDifferenceSpoken of TimeBetweenTimesInformationNuggetJSON is not a string.");
    setMultipleUnitTimeDifferenceSpoken(std::string(json_string->getData()));
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedInThePast of TimeBetweenTimesInformationNuggetJSON is not true for false.");
          }
      }
    setRequestedInThePast(the_bool);
  }

void TimeBetweenTimesInformationNuggetJSON::fromJSONIsBetweenTwoDateTimes(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsBetweenTwoDateTimes of TimeBetweenTimesInformationNuggetJSON is not true for false.");
          }
      }
    setIsBetweenTwoDateTimes(the_bool);
  }

TimeBetweenTimesInformationNuggetJSON::TimeBetweenTimesInformationNuggetJSON(void) :
        flagHasSourceDateAndOrTimeSpec(false),
        flagHasDestinationDateAndOrTimeSpec(false),
        flagHasUnitOfMeasureAmount(false),
        flagHasTimeDifference(false),
        flagHasUnits(false),
        flagHasMultipleUnitTimeDifference(false),
        flagHasMultipleUnitTimeDifferenceWritten(false),
        flagHasMultipleUnitTimeDifferenceSpoken(false),
        flagHasRequestedInThePast(false),
        flagHasIsBetweenTwoDateTimes(false)
  {
    storeRequestedInThePast = false;
    extraIndex = create_string_index();
  }

TimeBetweenTimesInformationNuggetJSON::~TimeBetweenTimesInformationNuggetJSON(void)
  {
    if (flagHasSourceDateAndOrTimeSpec)
      {
        storeSourceDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasDestinationDateAndOrTimeSpec)
      {
        storeDestinationDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasUnitOfMeasureAmount)
      {
        storeUnitOfMeasureAmount->remove_reference();
      }
    if (flagHasMultipleUnitTimeDifference)
      {
        for (size_t num4 = 0; num4 < storeMultipleUnitTimeDifference.size(); ++num4)
          {
            storeMultipleUnitTimeDifference[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *TimeBetweenTimesInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "TimeBetweenTimes";
  }

bool TimeBetweenTimesInformationNuggetJSON::hasSourceDateAndOrTimeSpec(void) const
  {
    return flagHasSourceDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * TimeBetweenTimesInformationNuggetJSON::getSourceDateAndOrTimeSpec(void)
  {
    assert(flagHasSourceDateAndOrTimeSpec);
    return storeSourceDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * TimeBetweenTimesInformationNuggetJSON::getSourceDateAndOrTimeSpec(void) const
  {
    assert(flagHasSourceDateAndOrTimeSpec);
    return storeSourceDateAndOrTimeSpec;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasDestinationDateAndOrTimeSpec(void) const
  {
    return flagHasDestinationDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * TimeBetweenTimesInformationNuggetJSON::getDestinationDateAndOrTimeSpec(void)
  {
    assert(flagHasDestinationDateAndOrTimeSpec);
    return storeDestinationDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * TimeBetweenTimesInformationNuggetJSON::getDestinationDateAndOrTimeSpec(void) const
  {
    assert(flagHasDestinationDateAndOrTimeSpec);
    return storeDestinationDateAndOrTimeSpec;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasUnitOfMeasureAmount(void) const
  {
    return flagHasUnitOfMeasureAmount;
  }

UnitOfMeasureAmountJSON * TimeBetweenTimesInformationNuggetJSON::getUnitOfMeasureAmount(void)
  {
    assert(flagHasUnitOfMeasureAmount);
    return storeUnitOfMeasureAmount;
  }

const UnitOfMeasureAmountJSON * TimeBetweenTimesInformationNuggetJSON::getUnitOfMeasureAmount(void) const
  {
    assert(flagHasUnitOfMeasureAmount);
    return storeUnitOfMeasureAmount;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasTimeDifference(void) const
  {
    return flagHasTimeDifference;
  }

double TimeBetweenTimesInformationNuggetJSON::getTimeDifference(void)
  {
    assert(flagHasTimeDifference);
    if (textStoreTimeDifference != "")
      {
        return atof(textStoreTimeDifference.c_str());
      }
    return storeTimeDifference;
  }

const double TimeBetweenTimesInformationNuggetJSON::getTimeDifference(void) const
  {
    assert(flagHasTimeDifference);
    if (textStoreTimeDifference != "")
      {
        return atof(textStoreTimeDifference.c_str());
      }
    return storeTimeDifference;
  }

std::string TimeBetweenTimesInformationNuggetJSON::getTimeDifferenceAsText(void) const
  {
    assert(flagHasTimeDifference);
    if (textStoreTimeDifference == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTimeDifference);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTimeDifference);
      }
  }

bool TimeBetweenTimesInformationNuggetJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

TimeBetweenTimesInformationNuggetJSON::TypeUnits TimeBetweenTimesInformationNuggetJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const TimeBetweenTimesInformationNuggetJSON::TypeUnits TimeBetweenTimesInformationNuggetJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const char *TimeBetweenTimesInformationNuggetJSON::getUnitsAsChars(void) const
  {
    TypeUnits result = getUnits();
    if (result.in_known_list)
        return stringFromUnits(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string TimeBetweenTimesInformationNuggetJSON::getUnitsAsString(void) const
  {
    return getUnitsAsChars();
  }

bool TimeBetweenTimesInformationNuggetJSON::hasMultipleUnitTimeDifference(void) const
  {
    return flagHasMultipleUnitTimeDifference;
  }

size_t TimeBetweenTimesInformationNuggetJSON::countOfMultipleUnitTimeDifference(void) const
  {
    assert(flagHasMultipleUnitTimeDifference);
    return storeMultipleUnitTimeDifference.size();
  }

AmountJSON * TimeBetweenTimesInformationNuggetJSON::elementOfMultipleUnitTimeDifference(size_t element_num)
  {
    assert(flagHasMultipleUnitTimeDifference);
    return storeMultipleUnitTimeDifference[element_num];
  }

const AmountJSON * TimeBetweenTimesInformationNuggetJSON::elementOfMultipleUnitTimeDifference(size_t element_num) const
  {
    assert(flagHasMultipleUnitTimeDifference);
    return storeMultipleUnitTimeDifference[element_num];
  }

std::vector< AmountJSON * > TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifference(void)
  {
    assert(flagHasMultipleUnitTimeDifference);
    return storeMultipleUnitTimeDifference;
  }

const std::vector< AmountJSON * > TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifference(void) const
  {
    assert(flagHasMultipleUnitTimeDifference);
    return storeMultipleUnitTimeDifference;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasMultipleUnitTimeDifferenceWritten(void) const
  {
    return flagHasMultipleUnitTimeDifferenceWritten;
  }

std::string TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifferenceWritten(void)
  {
    assert(flagHasMultipleUnitTimeDifferenceWritten);
    return storeMultipleUnitTimeDifferenceWritten;
  }

const std::string TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifferenceWritten(void) const
  {
    assert(flagHasMultipleUnitTimeDifferenceWritten);
    return storeMultipleUnitTimeDifferenceWritten;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasMultipleUnitTimeDifferenceSpoken(void) const
  {
    return flagHasMultipleUnitTimeDifferenceSpoken;
  }

std::string TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifferenceSpoken(void)
  {
    assert(flagHasMultipleUnitTimeDifferenceSpoken);
    return storeMultipleUnitTimeDifferenceSpoken;
  }

const std::string TimeBetweenTimesInformationNuggetJSON::getMultipleUnitTimeDifferenceSpoken(void) const
  {
    assert(flagHasMultipleUnitTimeDifferenceSpoken);
    return storeMultipleUnitTimeDifferenceSpoken;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasRequestedInThePast(void) const
  {
    return flagHasRequestedInThePast;
  }

bool TimeBetweenTimesInformationNuggetJSON::getRequestedInThePast(void)
  {
    return storeRequestedInThePast;
  }

const bool TimeBetweenTimesInformationNuggetJSON::getRequestedInThePast(void) const
  {
    return storeRequestedInThePast;
  }

bool TimeBetweenTimesInformationNuggetJSON::hasIsBetweenTwoDateTimes(void) const
  {
    return flagHasIsBetweenTwoDateTimes;
  }

bool TimeBetweenTimesInformationNuggetJSON::getIsBetweenTwoDateTimes(void)
  {
    assert(flagHasIsBetweenTwoDateTimes);
    return storeIsBetweenTwoDateTimes;
  }

const bool TimeBetweenTimesInformationNuggetJSON::getIsBetweenTwoDateTimes(void) const
  {
    assert(flagHasIsBetweenTwoDateTimes);
    return storeIsBetweenTwoDateTimes;
  }

TimeBetweenTimesInformationNuggetJSON *TimeBetweenTimesInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeBetweenTimesInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesInformationNuggetJSON>, TimeBetweenTimesInformationNuggetJSON *, bool> generator("Type TimeBetweenTimesInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
