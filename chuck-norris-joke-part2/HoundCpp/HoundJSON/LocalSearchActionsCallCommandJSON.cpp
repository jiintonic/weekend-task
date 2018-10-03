/* file "LocalSearchActionsCallCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchActionsCallCommandJSON.h"

#include "LocalSearchActionsCallCommandJSON.h"


LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

LocalSearchActionsCallCommandJSON::TypeNativeDataJSON &LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of TypeNativeDataJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

void LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteriaIncremental(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::fromJSONLocalResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalResultJSON *convert_classy = LocalResultJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalResult(convert_classy);
    convert_classy->remove_reference();
  }

LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasNumber(false),
        flagHasLocalSearchCriteria(false),
        flagHasLocalSearchCriteriaIncremental(false),
        flagHasLocalResult(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasLocalSearchCriteria)
      {
        storeLocalSearchCriteria->remove_reference();
      }
    if (flagHasLocalSearchCriteriaIncremental)
      {
        storeLocalSearchCriteriaIncremental->remove_reference();
      }
    if (flagHasLocalResult)
      {
        storeLocalResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

bool LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::hasLocalSearchCriteria(void) const
  {
    return flagHasLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalSearchCriteria(void)
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalSearchCriteria(void) const
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

bool LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::hasLocalSearchCriteriaIncremental(void) const
  {
    return flagHasLocalSearchCriteriaIncremental;
  }

LocalSearchFilterSpecJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalSearchCriteriaIncremental(void)
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

const LocalSearchFilterSpecJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalSearchCriteriaIncremental(void) const
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

bool LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::hasLocalResult(void) const
  {
    return flagHasLocalResult;
  }

LocalResultJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalResult(void)
  {
    assert(flagHasLocalResult);
    return storeLocalResult;
  }

const LocalResultJSON * LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::getLocalResult(void) const
  {
    assert(flagHasLocalResult);
    return storeLocalResult;
  }

LocalSearchActionsCallCommandJSON::LocalSearchActionsCallCommandJSON(const LocalSearchActionsCallCommandJSON &)
  {
    assert(false);
  }

LocalSearchActionsCallCommandJSON &LocalSearchActionsCallCommandJSON::operator=(const LocalSearchActionsCallCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *LocalSearchActionsCallCommandJSON::extraNumberToJSON(void) const
  {
    JSONStringValue *generated_string_Number = new JSONStringValue(storeNumber.c_str());
    return generated_string_Number;
  }

JSONValue *LocalSearchActionsCallCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void LocalSearchActionsCallCommandJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of LocalSearchActionsCallCommandJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

void LocalSearchActionsCallCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

LocalSearchActionsCallCommandJSON::LocalSearchActionsCallCommandJSON(void) :
        flagHasNumber(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchActionsCallCommandJSON::~LocalSearchActionsCallCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *LocalSearchActionsCallCommandJSON::getPhoneCommandKind(void) const
  {
    return "CallLocalBusiness";
  }

bool LocalSearchActionsCallCommandJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string LocalSearchActionsCallCommandJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string LocalSearchActionsCallCommandJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

bool LocalSearchActionsCallCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

LocalSearchActionsCallCommandJSON::TypeNativeDataJSON * LocalSearchActionsCallCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const LocalSearchActionsCallCommandJSON::TypeNativeDataJSON * LocalSearchActionsCallCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

LocalSearchActionsCallCommandJSON::TypeNativeDataJSON *LocalSearchActionsCallCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
LocalSearchActionsCallCommandJSON *LocalSearchActionsCallCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchActionsCallCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchActionsCallCommandJSON>, LocalSearchActionsCallCommandJSON *, bool> generator("Type LocalSearchActionsCallCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
