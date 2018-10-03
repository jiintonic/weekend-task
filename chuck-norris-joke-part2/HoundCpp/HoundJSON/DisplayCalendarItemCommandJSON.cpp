/* file "DisplayCalendarItemCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisplayCalendarItemCommandJSON.h"

#include "DisplayCalendarItemCommandJSON.h"


DisplayCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DisplayCalendarItemCommandJSON::TypeNativeDataJSON &DisplayCalendarItemCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisplayCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventIDs of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventIDs of TypeNativeDataJSON has too few elements.");
    std::vector< std::string > vector_EventIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EventIDs of TypeNativeDataJSON is not a string.");
        vector_EventIDs1[num1] = std::string(json_string->getData());
      }
    assert(vector_EventIDs1.size() >= 1);
    initEventIDs();
    for (size_t num3 = 0; num3 < vector_EventIDs1.size(); ++num3)
        appendEventIDs(vector_EventIDs1[num3]);
    for (size_t num1 = 0; num1 < vector_EventIDs1.size(); ++num1)
      {
      }
  }

void DisplayCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

DisplayCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false)
  {
    extraIndex = create_string_index();
  }

DisplayCalendarItemCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasQuery)
      {
        storeQuery->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisplayCalendarItemCommandJSON::TypeNativeDataJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t DisplayCalendarItemCommandJSON::TypeNativeDataJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string DisplayCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string DisplayCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > DisplayCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > DisplayCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool DisplayCalendarItemCommandJSON::TypeNativeDataJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * DisplayCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * DisplayCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

DisplayCalendarItemCommandJSON::DisplayCalendarItemCommandJSON(const DisplayCalendarItemCommandJSON &)
  {
    assert(false);
  }

DisplayCalendarItemCommandJSON &DisplayCalendarItemCommandJSON::operator=(const DisplayCalendarItemCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisplayCalendarItemCommandJSON::extraEventIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_EventIDs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
      {
        JSONStringValue *generated_string_EventIDs = new JSONStringValue(storeEventIDs[num1].c_str());
        generated_array_1_EventIDs->appendComponent(generated_string_EventIDs);
      }
    return generated_array_1_EventIDs;
  }

JSONValue *DisplayCalendarItemCommandJSON::extraQueryToJSON(void) const
  {
    JSONValueHandler handler_Query;
    storeQuery->write_as_json(&handler_Query);
    handler_Query.result->add_reference();
    return handler_Query.result;
  }

JSONValue *DisplayCalendarItemCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *DisplayCalendarItemCommandJSON::extraCalendarPreferenceIsNotSetResultToJSON(void) const
  {
    JSONValueHandler handler_CalendarPreferenceIsNotSetResult;
    storeCalendarPreferenceIsNotSetResult->write_as_json(&handler_CalendarPreferenceIsNotSetResult);
    handler_CalendarPreferenceIsNotSetResult.result->add_reference();
    return handler_CalendarPreferenceIsNotSetResult.result;
  }

JSONValue *DisplayCalendarItemCommandJSON::extraNoMatchResultToJSON(void) const
  {
    JSONValueHandler handler_NoMatchResult;
    storeNoMatchResult->write_as_json(&handler_NoMatchResult);
    handler_NoMatchResult.result->add_reference();
    return handler_NoMatchResult.result;
  }

void DisplayCalendarItemCommandJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventIDs of DisplayCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventIDs of DisplayCalendarItemCommandJSON has too few elements.");
    std::vector< std::string > vector_EventIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EventIDs of DisplayCalendarItemCommandJSON is not a string.");
        vector_EventIDs1[num1] = std::string(json_string->getData());
      }
    assert(vector_EventIDs1.size() >= 1);
    initEventIDs();
    for (size_t num4 = 0; num4 < vector_EventIDs1.size(); ++num4)
        appendEventIDs(vector_EventIDs1[num4]);
    for (size_t num1 = 0; num1 < vector_EventIDs1.size(); ++num1)
      {
      }
  }

void DisplayCalendarItemCommandJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemCommandJSON::fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCalendarPreferenceIsNotSetResult(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemCommandJSON::fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoMatchResult(convert_classy);
    convert_classy->remove_reference();
  }

DisplayCalendarItemCommandJSON::DisplayCalendarItemCommandJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false),
        flagHasNativeData(false),
        flagHasCalendarPreferenceIsNotSetResult(false),
        flagHasNoMatchResult(false)
  {
    extraIndex = create_string_index();
  }

DisplayCalendarItemCommandJSON::~DisplayCalendarItemCommandJSON(void)
  {
    if (flagHasQuery)
      {
        storeQuery->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    if (flagHasCalendarPreferenceIsNotSetResult)
      {
        storeCalendarPreferenceIsNotSetResult->remove_reference();
      }
    if (flagHasNoMatchResult)
      {
        storeNoMatchResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DisplayCalendarItemCommandJSON::getCalendarCommandKind(void) const
  {
    return "DisplayItem";
  }

bool DisplayCalendarItemCommandJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t DisplayCalendarItemCommandJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string DisplayCalendarItemCommandJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string DisplayCalendarItemCommandJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > DisplayCalendarItemCommandJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > DisplayCalendarItemCommandJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool DisplayCalendarItemCommandJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * DisplayCalendarItemCommandJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * DisplayCalendarItemCommandJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

bool DisplayCalendarItemCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

DisplayCalendarItemCommandJSON::TypeNativeDataJSON * DisplayCalendarItemCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const DisplayCalendarItemCommandJSON::TypeNativeDataJSON * DisplayCalendarItemCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool DisplayCalendarItemCommandJSON::hasCalendarPreferenceIsNotSetResult(void) const
  {
    return flagHasCalendarPreferenceIsNotSetResult;
  }

DynamicResponseJSON * DisplayCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void)
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

const DynamicResponseJSON * DisplayCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void) const
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

bool DisplayCalendarItemCommandJSON::hasNoMatchResult(void) const
  {
    return flagHasNoMatchResult;
  }

DynamicResponseJSON * DisplayCalendarItemCommandJSON::getNoMatchResult(void)
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

const DynamicResponseJSON * DisplayCalendarItemCommandJSON::getNoMatchResult(void) const
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

DisplayCalendarItemCommandJSON::TypeNativeDataJSON *DisplayCalendarItemCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DisplayCalendarItemCommandJSON *DisplayCalendarItemCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisplayCalendarItemCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisplayCalendarItemCommandJSON>, DisplayCalendarItemCommandJSON *, bool> generator("Type DisplayCalendarItemCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
