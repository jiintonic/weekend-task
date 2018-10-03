/* file "TimeBetweenTimesConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimeBetweenTimesConversationStateJSON.h"

#include "TimeBetweenTimesConversationStateJSON.h"


TimeBetweenTimesConversationStateJSON::TypeDateAndTimeKind TimeBetweenTimesConversationStateJSON::stringToDateAndTimeKind(const char *chars)
  {
    if (strcmp(chars, "TimeBetweenTimes") == 0)
        return DateAndTimeKind_TimeBetweenTimes;
    throw("The value for field `DateAndTimeKind' is not one of the legal values.");
  }

const char *TimeBetweenTimesConversationStateJSON::stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum)
  {
    switch (the_enum)
      {
        case DateAndTimeKind_TimeBetweenTimes:
            return "TimeBetweenTimes";
        default:
            assert(false);
            return NULL;
      }
  }

TimeBetweenTimesConversationStateJSON::TypeUnits::TypeUnits(void)
  {
  }

TimeBetweenTimesConversationStateJSON::TypeUnits::TypeUnits(const TypeUnits &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

TimeBetweenTimesConversationStateJSON::TypeUnits::TypeUnits(TypeUnitsKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator==(const TypeUnits &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator!=(const TypeUnits &other) const
  {
    return !(operator==(other));
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator<(const TypeUnits &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator>(const TypeUnits &other) const
  {
    return other.operator<(*this);
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator>=(const TypeUnits &other) const
  {
    return !(operator<(other));
  }

bool TimeBetweenTimesConversationStateJSON::TypeUnits::operator<=(const TypeUnits &other) const
  {
    return !(other.operator<(*this));
  }

TimeBetweenTimesConversationStateJSON::TypeUnitsKnownValues TimeBetweenTimesConversationStateJSON::stringToUnits(const char *chars)
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

const char *TimeBetweenTimesConversationStateJSON::stringFromUnits(TypeUnitsKnownValues the_enum)
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

TimeBetweenTimesConversationStateJSON::TimeBetweenTimesConversationStateJSON(const TimeBetweenTimesConversationStateJSON &)
  {
    assert(false);
  }

TimeBetweenTimesConversationStateJSON &TimeBetweenTimesConversationStateJSON::operator=(const TimeBetweenTimesConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimeBetweenTimesConversationStateJSON::fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DateAndTimeKind of TimeBetweenTimesConversationStateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TimeBetweenTimes") == 0))
        throw("The value for field DateAndTimeKind of TimeBetweenTimesConversationStateJSON is not `TimeBetweenTimes'.");
    setDateAndTimeKind();
  }

void TimeBetweenTimesConversationStateJSON::fromJSONSourceDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSourceDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesConversationStateJSON::fromJSONDestinationDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesConversationStateJSON::fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesConversationStateJSON::fromJSONUnitOfMeasureAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitOfMeasureAmountJSON *convert_classy = UnitOfMeasureAmountJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnitOfMeasureAmount(convert_classy);
    convert_classy->remove_reference();
  }

void TimeBetweenTimesConversationStateJSON::fromJSONTimeDifference(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TimeDifference of TimeBetweenTimesConversationStateJSON is not a number.");
          }
      }
    setTimeDifferenceText(the_rational_text);
  }

void TimeBetweenTimesConversationStateJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of TimeBetweenTimesConversationStateJSON is not a string.");
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

void TimeBetweenTimesConversationStateJSON::fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedInThePast of TimeBetweenTimesConversationStateJSON is not true for false.");
          }
      }
    setRequestedInThePast(the_bool);
  }

void TimeBetweenTimesConversationStateJSON::fromJSONIsBetweenTwoDateTimes(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsBetweenTwoDateTimes of TimeBetweenTimesConversationStateJSON is not true for false.");
          }
      }
    setIsBetweenTwoDateTimes(the_bool);
  }

TimeBetweenTimesConversationStateJSON::TimeBetweenTimesConversationStateJSON(void) :
        flagHasDateAndTimeKind(false),
        flagHasSourceDateAndOrTimeSpec(false),
        flagHasDestinationDateAndOrTimeSpec(false),
        flagHasDateAndOrTimeSpec(false),
        flagHasUnitOfMeasureAmount(false),
        flagHasTimeDifference(false),
        flagHasUnits(false),
        flagHasRequestedInThePast(false),
        flagHasIsBetweenTwoDateTimes(false)
  {
    storeRequestedInThePast = false;
    extraIndex = create_string_index();
  }

TimeBetweenTimesConversationStateJSON::~TimeBetweenTimesConversationStateJSON(void)
  {
    if (flagHasSourceDateAndOrTimeSpec)
      {
        storeSourceDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasDestinationDateAndOrTimeSpec)
      {
        storeDestinationDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasDateAndOrTimeSpec)
      {
        storeDateAndOrTimeSpec->remove_reference();
      }
    if (flagHasUnitOfMeasureAmount)
      {
        storeUnitOfMeasureAmount->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimeBetweenTimesConversationStateJSON::hasDateAndTimeKind(void) const
  {
    return flagHasDateAndTimeKind;
  }

TimeBetweenTimesConversationStateJSON::TypeDateAndTimeKind TimeBetweenTimesConversationStateJSON::getDateAndTimeKind(void)
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeBetweenTimes;
  }

const TimeBetweenTimesConversationStateJSON::TypeDateAndTimeKind TimeBetweenTimesConversationStateJSON::getDateAndTimeKind(void) const
  {
    assert(flagHasDateAndTimeKind);
    return DateAndTimeKind_TimeBetweenTimes;
  }

const char *TimeBetweenTimesConversationStateJSON::getDateAndTimeKindAsChars(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

std::string TimeBetweenTimesConversationStateJSON::getDateAndTimeKindAsString(void) const
  {
    return stringFromDateAndTimeKind(getDateAndTimeKind());
  }

bool TimeBetweenTimesConversationStateJSON::hasSourceDateAndOrTimeSpec(void) const
  {
    return flagHasSourceDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getSourceDateAndOrTimeSpec(void)
  {
    assert(flagHasSourceDateAndOrTimeSpec);
    return storeSourceDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getSourceDateAndOrTimeSpec(void) const
  {
    assert(flagHasSourceDateAndOrTimeSpec);
    return storeSourceDateAndOrTimeSpec;
  }

bool TimeBetweenTimesConversationStateJSON::hasDestinationDateAndOrTimeSpec(void) const
  {
    return flagHasDestinationDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getDestinationDateAndOrTimeSpec(void)
  {
    assert(flagHasDestinationDateAndOrTimeSpec);
    return storeDestinationDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getDestinationDateAndOrTimeSpec(void) const
  {
    assert(flagHasDestinationDateAndOrTimeSpec);
    return storeDestinationDateAndOrTimeSpec;
  }

bool TimeBetweenTimesConversationStateJSON::hasDateAndOrTimeSpec(void) const
  {
    return flagHasDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getDateAndOrTimeSpec(void)
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * TimeBetweenTimesConversationStateJSON::getDateAndOrTimeSpec(void) const
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

bool TimeBetweenTimesConversationStateJSON::hasUnitOfMeasureAmount(void) const
  {
    return flagHasUnitOfMeasureAmount;
  }

UnitOfMeasureAmountJSON * TimeBetweenTimesConversationStateJSON::getUnitOfMeasureAmount(void)
  {
    assert(flagHasUnitOfMeasureAmount);
    return storeUnitOfMeasureAmount;
  }

const UnitOfMeasureAmountJSON * TimeBetweenTimesConversationStateJSON::getUnitOfMeasureAmount(void) const
  {
    assert(flagHasUnitOfMeasureAmount);
    return storeUnitOfMeasureAmount;
  }

bool TimeBetweenTimesConversationStateJSON::hasTimeDifference(void) const
  {
    return flagHasTimeDifference;
  }

double TimeBetweenTimesConversationStateJSON::getTimeDifference(void)
  {
    assert(flagHasTimeDifference);
    if (textStoreTimeDifference != "")
      {
        return atof(textStoreTimeDifference.c_str());
      }
    return storeTimeDifference;
  }

const double TimeBetweenTimesConversationStateJSON::getTimeDifference(void) const
  {
    assert(flagHasTimeDifference);
    if (textStoreTimeDifference != "")
      {
        return atof(textStoreTimeDifference.c_str());
      }
    return storeTimeDifference;
  }

std::string TimeBetweenTimesConversationStateJSON::getTimeDifferenceAsText(void) const
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

bool TimeBetweenTimesConversationStateJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

TimeBetweenTimesConversationStateJSON::TypeUnits TimeBetweenTimesConversationStateJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const TimeBetweenTimesConversationStateJSON::TypeUnits TimeBetweenTimesConversationStateJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const char *TimeBetweenTimesConversationStateJSON::getUnitsAsChars(void) const
  {
    TypeUnits result = getUnits();
    if (result.in_known_list)
        return stringFromUnits(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string TimeBetweenTimesConversationStateJSON::getUnitsAsString(void) const
  {
    return getUnitsAsChars();
  }

bool TimeBetweenTimesConversationStateJSON::hasRequestedInThePast(void) const
  {
    return flagHasRequestedInThePast;
  }

bool TimeBetweenTimesConversationStateJSON::getRequestedInThePast(void)
  {
    return storeRequestedInThePast;
  }

const bool TimeBetweenTimesConversationStateJSON::getRequestedInThePast(void) const
  {
    return storeRequestedInThePast;
  }

bool TimeBetweenTimesConversationStateJSON::hasIsBetweenTwoDateTimes(void) const
  {
    return flagHasIsBetweenTwoDateTimes;
  }

bool TimeBetweenTimesConversationStateJSON::getIsBetweenTwoDateTimes(void)
  {
    assert(flagHasIsBetweenTwoDateTimes);
    return storeIsBetweenTwoDateTimes;
  }

const bool TimeBetweenTimesConversationStateJSON::getIsBetweenTwoDateTimes(void) const
  {
    assert(flagHasIsBetweenTwoDateTimes);
    return storeIsBetweenTwoDateTimes;
  }

TimeBetweenTimesConversationStateJSON *TimeBetweenTimesConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimeBetweenTimesConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesConversationStateJSON>, TimeBetweenTimesConversationStateJSON *, bool> generator("Type TimeBetweenTimesConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
