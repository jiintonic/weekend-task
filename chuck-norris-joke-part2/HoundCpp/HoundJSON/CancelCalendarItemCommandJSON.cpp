/* file "CancelCalendarItemCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CancelCalendarItemCommandJSON.h"

#include "CancelCalendarItemCommandJSON.h"


CancelCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

CancelCalendarItemCommandJSON::TypeNativeDataJSON &CancelCalendarItemCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CancelCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
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

void CancelCalendarItemCommandJSON::TypeNativeDataJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

CancelCalendarItemCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false)
  {
    extraIndex = create_string_index();
  }

CancelCalendarItemCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool CancelCalendarItemCommandJSON::TypeNativeDataJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t CancelCalendarItemCommandJSON::TypeNativeDataJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string CancelCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string CancelCalendarItemCommandJSON::TypeNativeDataJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > CancelCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > CancelCalendarItemCommandJSON::TypeNativeDataJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool CancelCalendarItemCommandJSON::TypeNativeDataJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * CancelCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * CancelCalendarItemCommandJSON::TypeNativeDataJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

CancelCalendarItemCommandJSON::CancelCalendarItemCommandJSON(const CancelCalendarItemCommandJSON &)
  {
    assert(false);
  }

CancelCalendarItemCommandJSON &CancelCalendarItemCommandJSON::operator=(const CancelCalendarItemCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CancelCalendarItemCommandJSON::extraEventIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_EventIDs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeEventIDs.size(); ++num1)
      {
        JSONStringValue *generated_string_EventIDs = new JSONStringValue(storeEventIDs[num1].c_str());
        generated_array_1_EventIDs->appendComponent(generated_string_EventIDs);
      }
    return generated_array_1_EventIDs;
  }

JSONValue *CancelCalendarItemCommandJSON::extraQueryToJSON(void) const
  {
    JSONValueHandler handler_Query;
    storeQuery->write_as_json(&handler_Query);
    handler_Query.result->add_reference();
    return handler_Query.result;
  }

JSONValue *CancelCalendarItemCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *CancelCalendarItemCommandJSON::extraCalendarPreferenceIsNotSetResultToJSON(void) const
  {
    JSONValueHandler handler_CalendarPreferenceIsNotSetResult;
    storeCalendarPreferenceIsNotSetResult->write_as_json(&handler_CalendarPreferenceIsNotSetResult);
    handler_CalendarPreferenceIsNotSetResult.result->add_reference();
    return handler_CalendarPreferenceIsNotSetResult.result;
  }

JSONValue *CancelCalendarItemCommandJSON::extraNoMatchResultToJSON(void) const
  {
    JSONValueHandler handler_NoMatchResult;
    storeNoMatchResult->write_as_json(&handler_NoMatchResult);
    handler_NoMatchResult.result->add_reference();
    return handler_NoMatchResult.result;
  }

void CancelCalendarItemCommandJSON::fromJSONEventIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EventIDs of CancelCalendarItemCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field EventIDs of CancelCalendarItemCommandJSON has too few elements.");
    std::vector< std::string > vector_EventIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field EventIDs of CancelCalendarItemCommandJSON is not a string.");
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

void CancelCalendarItemCommandJSON::fromJSONQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CalendarQueryJSON *convert_classy = CalendarQueryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuery(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemCommandJSON::fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCalendarPreferenceIsNotSetResult(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemCommandJSON::fromJSONNoMatchResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoMatchResult(convert_classy);
    convert_classy->remove_reference();
  }

CancelCalendarItemCommandJSON::CancelCalendarItemCommandJSON(void) :
        flagHasEventIDs(false),
        flagHasQuery(false),
        flagHasNativeData(false),
        flagHasCalendarPreferenceIsNotSetResult(false),
        flagHasNoMatchResult(false)
  {
    extraIndex = create_string_index();
  }

CancelCalendarItemCommandJSON::~CancelCalendarItemCommandJSON(void)
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

const char *CancelCalendarItemCommandJSON::getCalendarCommandKind(void) const
  {
    return "CancelItem";
  }

bool CancelCalendarItemCommandJSON::hasEventIDs(void) const
  {
    return flagHasEventIDs;
  }

size_t CancelCalendarItemCommandJSON::countOfEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs.size();
  }

std::string CancelCalendarItemCommandJSON::elementOfEventIDs(size_t element_num)
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

const std::string CancelCalendarItemCommandJSON::elementOfEventIDs(size_t element_num) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs[element_num];
  }

std::vector< std::string > CancelCalendarItemCommandJSON::getEventIDs(void)
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

const std::vector< std::string > CancelCalendarItemCommandJSON::getEventIDs(void) const
  {
    assert(flagHasEventIDs);
    return storeEventIDs;
  }

bool CancelCalendarItemCommandJSON::hasQuery(void) const
  {
    return flagHasQuery;
  }

CalendarQueryJSON * CancelCalendarItemCommandJSON::getQuery(void)
  {
    assert(flagHasQuery);
    return storeQuery;
  }

const CalendarQueryJSON * CancelCalendarItemCommandJSON::getQuery(void) const
  {
    assert(flagHasQuery);
    return storeQuery;
  }

bool CancelCalendarItemCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

CancelCalendarItemCommandJSON::TypeNativeDataJSON * CancelCalendarItemCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const CancelCalendarItemCommandJSON::TypeNativeDataJSON * CancelCalendarItemCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool CancelCalendarItemCommandJSON::hasCalendarPreferenceIsNotSetResult(void) const
  {
    return flagHasCalendarPreferenceIsNotSetResult;
  }

DynamicResponseJSON * CancelCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void)
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

const DynamicResponseJSON * CancelCalendarItemCommandJSON::getCalendarPreferenceIsNotSetResult(void) const
  {
    assert(flagHasCalendarPreferenceIsNotSetResult);
    return storeCalendarPreferenceIsNotSetResult;
  }

bool CancelCalendarItemCommandJSON::hasNoMatchResult(void) const
  {
    return flagHasNoMatchResult;
  }

DynamicResponseJSON * CancelCalendarItemCommandJSON::getNoMatchResult(void)
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

const DynamicResponseJSON * CancelCalendarItemCommandJSON::getNoMatchResult(void) const
  {
    assert(flagHasNoMatchResult);
    return storeNoMatchResult;
  }

CancelCalendarItemCommandJSON::TypeNativeDataJSON *CancelCalendarItemCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CancelCalendarItemCommandJSON *CancelCalendarItemCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CancelCalendarItemCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemCommandJSON>, CancelCalendarItemCommandJSON *, bool> generator("Type CancelCalendarItemCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
