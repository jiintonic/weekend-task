/* file "CalendarQueryJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarQueryJSON.h"

#include "CalendarQueryJSON.h"


CalendarQueryJSON::TypeSelectionTarget CalendarQueryJSON::stringToSelectionTarget(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ll") == 0)
                return SelectionTarget_All;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "irst") == 0)
                return SelectionTarget_First;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ast") == 0)
                return SelectionTarget_Last;
            break;
        default:
            break;
      }
    throw("The value for field `SelectionTarget' is not one of the legal values.");
  }

const char *CalendarQueryJSON::stringFromSelectionTarget(TypeSelectionTarget the_enum)
  {
    switch (the_enum)
      {
        case SelectionTarget_First:
            return "First";
        case SelectionTarget_Last:
            return "Last";
        case SelectionTarget_All:
            return "All";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarQueryJSON::TypeRecurringTarget CalendarQueryJSON::stringToRecurringTarget(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "llFollowing") == 0)
                return RecurringTarget_AllFollowing;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "pecifiedOnly") == 0)
                return RecurringTarget_SpecifiedOnly;
            break;
        default:
            break;
      }
    throw("The value for field `RecurringTarget' is not one of the legal values.");
  }

const char *CalendarQueryJSON::stringFromRecurringTarget(TypeRecurringTarget the_enum)
  {
    switch (the_enum)
      {
        case RecurringTarget_SpecifiedOnly:
            return "SpecifiedOnly";
        case RecurringTarget_AllFollowing:
            return "AllFollowing";
        default:
            assert(false);
            return NULL;
      }
  }

CalendarQueryJSON::TypeStartTimeRangeJSON::TypeStartTimeRangeJSON(const TypeStartTimeRangeJSON &)
  {
    assert(false);
  }

CalendarQueryJSON::TypeStartTimeRangeJSON &CalendarQueryJSON::TypeStartTimeRangeJSON::operator=(const TypeStartTimeRangeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarQueryJSON::TypeStartTimeRangeJSON::fromJSONRangeStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarQueryJSON::TypeStartTimeRangeJSON::fromJSONRangeEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeEnd(convert_classy);
    convert_classy->remove_reference();
  }

CalendarQueryJSON::TypeStartTimeRangeJSON::TypeStartTimeRangeJSON(void) :
        flagHasRangeStart(false),
        flagHasRangeEnd(false)
  {
    extraIndex = create_string_index();
  }

CalendarQueryJSON::TypeStartTimeRangeJSON::~TypeStartTimeRangeJSON(void)
  {
    if (flagHasRangeStart)
      {
        storeRangeStart->remove_reference();
      }
    if (flagHasRangeEnd)
      {
        storeRangeEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CalendarQueryJSON::TypeStartTimeRangeJSON::hasRangeStart(void) const
  {
    return flagHasRangeStart;
  }

DateAndOrTimeJSON * CalendarQueryJSON::TypeStartTimeRangeJSON::getRangeStart(void)
  {
    assert(flagHasRangeStart);
    return storeRangeStart;
  }

const DateAndOrTimeJSON * CalendarQueryJSON::TypeStartTimeRangeJSON::getRangeStart(void) const
  {
    assert(flagHasRangeStart);
    return storeRangeStart;
  }

bool CalendarQueryJSON::TypeStartTimeRangeJSON::hasRangeEnd(void) const
  {
    return flagHasRangeEnd;
  }

DateAndOrTimeJSON * CalendarQueryJSON::TypeStartTimeRangeJSON::getRangeEnd(void)
  {
    assert(flagHasRangeEnd);
    return storeRangeEnd;
  }

const DateAndOrTimeJSON * CalendarQueryJSON::TypeStartTimeRangeJSON::getRangeEnd(void) const
  {
    assert(flagHasRangeEnd);
    return storeRangeEnd;
  }

CalendarQueryJSON::TypeEndTimeRangeJSON::TypeEndTimeRangeJSON(const TypeEndTimeRangeJSON &)
  {
    assert(false);
  }

CalendarQueryJSON::TypeEndTimeRangeJSON &CalendarQueryJSON::TypeEndTimeRangeJSON::operator=(const TypeEndTimeRangeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarQueryJSON::TypeEndTimeRangeJSON::fromJSONRangeStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeStart(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarQueryJSON::TypeEndTimeRangeJSON::fromJSONRangeEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRangeEnd(convert_classy);
    convert_classy->remove_reference();
  }

CalendarQueryJSON::TypeEndTimeRangeJSON::TypeEndTimeRangeJSON(void) :
        flagHasRangeStart(false),
        flagHasRangeEnd(false)
  {
    extraIndex = create_string_index();
  }

CalendarQueryJSON::TypeEndTimeRangeJSON::~TypeEndTimeRangeJSON(void)
  {
    if (flagHasRangeStart)
      {
        storeRangeStart->remove_reference();
      }
    if (flagHasRangeEnd)
      {
        storeRangeEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CalendarQueryJSON::TypeEndTimeRangeJSON::hasRangeStart(void) const
  {
    return flagHasRangeStart;
  }

DateAndOrTimeJSON * CalendarQueryJSON::TypeEndTimeRangeJSON::getRangeStart(void)
  {
    assert(flagHasRangeStart);
    return storeRangeStart;
  }

const DateAndOrTimeJSON * CalendarQueryJSON::TypeEndTimeRangeJSON::getRangeStart(void) const
  {
    assert(flagHasRangeStart);
    return storeRangeStart;
  }

bool CalendarQueryJSON::TypeEndTimeRangeJSON::hasRangeEnd(void) const
  {
    return flagHasRangeEnd;
  }

DateAndOrTimeJSON * CalendarQueryJSON::TypeEndTimeRangeJSON::getRangeEnd(void)
  {
    assert(flagHasRangeEnd);
    return storeRangeEnd;
  }

const DateAndOrTimeJSON * CalendarQueryJSON::TypeEndTimeRangeJSON::getRangeEnd(void) const
  {
    assert(flagHasRangeEnd);
    return storeRangeEnd;
  }

CalendarQueryJSON::CalendarQueryJSON(const CalendarQueryJSON &)
  {
    assert(false);
  }

CalendarQueryJSON &CalendarQueryJSON::operator=(const CalendarQueryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CalendarQueryJSON::fromJSONSelectionTarget(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SelectionTarget of CalendarQueryJSON is not a string.");
    TypeSelectionTarget the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ll") == 0)
                  {
                    the_enum = SelectionTarget_All;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "irst") == 0)
                  {
                    the_enum = SelectionTarget_First;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ast") == 0)
                  {
                    the_enum = SelectionTarget_Last;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field SelectionTarget of CalendarQueryJSON is not one of the legal strings.");
  enum_is_done:;
    setSelectionTarget(the_enum);
  }

void CalendarQueryJSON::fromJSONRecurringTarget(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RecurringTarget of CalendarQueryJSON is not a string.");
    TypeRecurringTarget the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "llFollowing") == 0)
                  {
                    the_enum = RecurringTarget_AllFollowing;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "pecifiedOnly") == 0)
                  {
                    the_enum = RecurringTarget_SpecifiedOnly;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field RecurringTarget of CalendarQueryJSON is not one of the legal strings.");
  enum_is_done:;
    setRecurringTarget(the_enum);
  }

void CalendarQueryJSON::fromJSONExactCalendarName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactCalendarName of CalendarQueryJSON is not a string.");
    setExactCalendarName(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONPartialCalendarName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialCalendarName of CalendarQueryJSON is not a string.");
    setPartialCalendarName(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONCalendarIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CalendarIDs of CalendarQueryJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field CalendarIDs of CalendarQueryJSON has too few elements.");
    std::vector< std::string > vector_CalendarIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field CalendarIDs of CalendarQueryJSON is not a string.");
        vector_CalendarIDs1[num1] = std::string(json_string->getData());
      }
    assert(vector_CalendarIDs1.size() >= 1);
    initCalendarIDs();
    for (size_t num2 = 0; num2 < vector_CalendarIDs1.size(); ++num2)
        appendCalendarIDs(vector_CalendarIDs1[num2]);
    for (size_t num1 = 0; num1 < vector_CalendarIDs1.size(); ++num1)
      {
      }
  }

void CalendarQueryJSON::fromJSONItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemType of CalendarQueryJSON is not a string.");
    setItemType(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONExactTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactTitle of CalendarQueryJSON is not a string.");
    setExactTitle(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTitle of CalendarQueryJSON is not a string.");
    setPartialTitle(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONExactLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactLocation of CalendarQueryJSON is not a string.");
    setExactLocation(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialLocation of CalendarQueryJSON is not a string.");
    setPartialLocation(std::string(json_string->getData()));
  }

void CalendarQueryJSON::fromJSONStartTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeStartTimeRangeJSON *convert_classy = TypeStartTimeRangeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarQueryJSON::fromJSONEndTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeEndTimeRangeJSON *convert_classy = TypeEndTimeRangeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void CalendarQueryJSON::fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRecurring of CalendarQueryJSON is not true for false.");
          }
      }
    setIsRecurring(the_bool);
  }

void CalendarQueryJSON::fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsAllDay of CalendarQueryJSON is not true for false.");
          }
      }
    setIsAllDay(the_bool);
  }

CalendarQueryJSON::CalendarQueryJSON(void) :
        flagHasSelectionTarget(false),
        flagHasRecurringTarget(false),
        flagHasExactCalendarName(false),
        flagHasPartialCalendarName(false),
        flagHasCalendarIDs(false),
        flagHasItemType(false),
        flagHasExactTitle(false),
        flagHasPartialTitle(false),
        flagHasExactLocation(false),
        flagHasPartialLocation(false),
        flagHasStartTimeRange(false),
        flagHasEndTimeRange(false),
        flagHasIsRecurring(false),
        flagHasIsAllDay(false)
  {
    extraIndex = create_string_index();
  }

CalendarQueryJSON::~CalendarQueryJSON(void)
  {
    if (flagHasStartTimeRange)
      {
        storeStartTimeRange->remove_reference();
      }
    if (flagHasEndTimeRange)
      {
        storeEndTimeRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CalendarQueryJSON::hasSelectionTarget(void) const
  {
    return flagHasSelectionTarget;
  }

CalendarQueryJSON::TypeSelectionTarget CalendarQueryJSON::getSelectionTarget(void)
  {
    assert(flagHasSelectionTarget);
    return storeSelectionTarget;
  }

const CalendarQueryJSON::TypeSelectionTarget CalendarQueryJSON::getSelectionTarget(void) const
  {
    assert(flagHasSelectionTarget);
    return storeSelectionTarget;
  }

const char *CalendarQueryJSON::getSelectionTargetAsChars(void) const
  {
    return stringFromSelectionTarget(getSelectionTarget());
  }

std::string CalendarQueryJSON::getSelectionTargetAsString(void) const
  {
    return stringFromSelectionTarget(getSelectionTarget());
  }

bool CalendarQueryJSON::hasRecurringTarget(void) const
  {
    return flagHasRecurringTarget;
  }

CalendarQueryJSON::TypeRecurringTarget CalendarQueryJSON::getRecurringTarget(void)
  {
    assert(flagHasRecurringTarget);
    return storeRecurringTarget;
  }

const CalendarQueryJSON::TypeRecurringTarget CalendarQueryJSON::getRecurringTarget(void) const
  {
    assert(flagHasRecurringTarget);
    return storeRecurringTarget;
  }

const char *CalendarQueryJSON::getRecurringTargetAsChars(void) const
  {
    return stringFromRecurringTarget(getRecurringTarget());
  }

std::string CalendarQueryJSON::getRecurringTargetAsString(void) const
  {
    return stringFromRecurringTarget(getRecurringTarget());
  }

bool CalendarQueryJSON::hasExactCalendarName(void) const
  {
    return flagHasExactCalendarName;
  }

std::string CalendarQueryJSON::getExactCalendarName(void)
  {
    assert(flagHasExactCalendarName);
    return storeExactCalendarName;
  }

const std::string CalendarQueryJSON::getExactCalendarName(void) const
  {
    assert(flagHasExactCalendarName);
    return storeExactCalendarName;
  }

bool CalendarQueryJSON::hasPartialCalendarName(void) const
  {
    return flagHasPartialCalendarName;
  }

std::string CalendarQueryJSON::getPartialCalendarName(void)
  {
    assert(flagHasPartialCalendarName);
    return storePartialCalendarName;
  }

const std::string CalendarQueryJSON::getPartialCalendarName(void) const
  {
    assert(flagHasPartialCalendarName);
    return storePartialCalendarName;
  }

bool CalendarQueryJSON::hasCalendarIDs(void) const
  {
    return flagHasCalendarIDs;
  }

size_t CalendarQueryJSON::countOfCalendarIDs(void) const
  {
    assert(flagHasCalendarIDs);
    return storeCalendarIDs.size();
  }

std::string CalendarQueryJSON::elementOfCalendarIDs(size_t element_num)
  {
    assert(flagHasCalendarIDs);
    return storeCalendarIDs[element_num];
  }

const std::string CalendarQueryJSON::elementOfCalendarIDs(size_t element_num) const
  {
    assert(flagHasCalendarIDs);
    return storeCalendarIDs[element_num];
  }

std::vector< std::string > CalendarQueryJSON::getCalendarIDs(void)
  {
    assert(flagHasCalendarIDs);
    return storeCalendarIDs;
  }

const std::vector< std::string > CalendarQueryJSON::getCalendarIDs(void) const
  {
    assert(flagHasCalendarIDs);
    return storeCalendarIDs;
  }

bool CalendarQueryJSON::hasItemType(void) const
  {
    return flagHasItemType;
  }

std::string CalendarQueryJSON::getItemType(void)
  {
    assert(flagHasItemType);
    return storeItemType;
  }

const std::string CalendarQueryJSON::getItemType(void) const
  {
    assert(flagHasItemType);
    return storeItemType;
  }

bool CalendarQueryJSON::hasExactTitle(void) const
  {
    return flagHasExactTitle;
  }

std::string CalendarQueryJSON::getExactTitle(void)
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

const std::string CalendarQueryJSON::getExactTitle(void) const
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

bool CalendarQueryJSON::hasPartialTitle(void) const
  {
    return flagHasPartialTitle;
  }

std::string CalendarQueryJSON::getPartialTitle(void)
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

const std::string CalendarQueryJSON::getPartialTitle(void) const
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

bool CalendarQueryJSON::hasExactLocation(void) const
  {
    return flagHasExactLocation;
  }

std::string CalendarQueryJSON::getExactLocation(void)
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

const std::string CalendarQueryJSON::getExactLocation(void) const
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

bool CalendarQueryJSON::hasPartialLocation(void) const
  {
    return flagHasPartialLocation;
  }

std::string CalendarQueryJSON::getPartialLocation(void)
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

const std::string CalendarQueryJSON::getPartialLocation(void) const
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

bool CalendarQueryJSON::hasStartTimeRange(void) const
  {
    return flagHasStartTimeRange;
  }

CalendarQueryJSON::TypeStartTimeRangeJSON * CalendarQueryJSON::getStartTimeRange(void)
  {
    assert(flagHasStartTimeRange);
    return storeStartTimeRange;
  }

const CalendarQueryJSON::TypeStartTimeRangeJSON * CalendarQueryJSON::getStartTimeRange(void) const
  {
    assert(flagHasStartTimeRange);
    return storeStartTimeRange;
  }

bool CalendarQueryJSON::hasEndTimeRange(void) const
  {
    return flagHasEndTimeRange;
  }

CalendarQueryJSON::TypeEndTimeRangeJSON * CalendarQueryJSON::getEndTimeRange(void)
  {
    assert(flagHasEndTimeRange);
    return storeEndTimeRange;
  }

const CalendarQueryJSON::TypeEndTimeRangeJSON * CalendarQueryJSON::getEndTimeRange(void) const
  {
    assert(flagHasEndTimeRange);
    return storeEndTimeRange;
  }

bool CalendarQueryJSON::hasIsRecurring(void) const
  {
    return flagHasIsRecurring;
  }

bool CalendarQueryJSON::getIsRecurring(void)
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

const bool CalendarQueryJSON::getIsRecurring(void) const
  {
    assert(flagHasIsRecurring);
    return storeIsRecurring;
  }

bool CalendarQueryJSON::hasIsAllDay(void) const
  {
    return flagHasIsAllDay;
  }

bool CalendarQueryJSON::getIsAllDay(void)
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

const bool CalendarQueryJSON::getIsAllDay(void) const
  {
    assert(flagHasIsAllDay);
    return storeIsAllDay;
  }

CalendarQueryJSON::TypeStartTimeRangeJSON *CalendarQueryJSON::TypeStartTimeRangeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeStartTimeRangeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeStartTimeRangeJSON>, TypeStartTimeRangeJSON *, bool> generator("Type TypeStartTimeRange", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CalendarQueryJSON::TypeEndTimeRangeJSON *CalendarQueryJSON::TypeEndTimeRangeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeEndTimeRangeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeEndTimeRangeJSON>, TypeEndTimeRangeJSON *, bool> generator("Type TypeEndTimeRange", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
CalendarQueryJSON *CalendarQueryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarQueryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarQueryJSON>, CalendarQueryJSON *, bool> generator("Type CalendarQuery", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
