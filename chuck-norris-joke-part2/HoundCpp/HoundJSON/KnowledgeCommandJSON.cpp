/* file "KnowledgeCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "KnowledgeCommandJSON.h"

#include "KnowledgeCommandJSON.h"


KnowledgeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

KnowledgeCommandJSON::TypeNativeDataJSON &KnowledgeCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void KnowledgeCommandJSON::TypeNativeDataJSON::fromJSONLongResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LongResult of TypeNativeDataJSON is not a string.");
    setLongResult(std::string(json_string->getData()));
  }

void KnowledgeCommandJSON::TypeNativeDataJSON::fromJSONShortResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ShortResult of TypeNativeDataJSON is not a string.");
    setShortResult(std::string(json_string->getData()));
  }

void KnowledgeCommandJSON::TypeNativeDataJSON::fromJSONConciseResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ConciseResult of TypeNativeDataJSON is not a string.");
    setConciseResult(std::string(json_string->getData()));
  }

KnowledgeCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasLongResult(false),
        flagHasShortResult(false),
        flagHasConciseResult(false)
  {
    extraIndex = create_string_index();
  }

KnowledgeCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool KnowledgeCommandJSON::TypeNativeDataJSON::hasLongResult(void) const
  {
    return flagHasLongResult;
  }

std::string KnowledgeCommandJSON::TypeNativeDataJSON::getLongResult(void)
  {
    assert(flagHasLongResult);
    return storeLongResult;
  }

const std::string KnowledgeCommandJSON::TypeNativeDataJSON::getLongResult(void) const
  {
    assert(flagHasLongResult);
    return storeLongResult;
  }

bool KnowledgeCommandJSON::TypeNativeDataJSON::hasShortResult(void) const
  {
    return flagHasShortResult;
  }

std::string KnowledgeCommandJSON::TypeNativeDataJSON::getShortResult(void)
  {
    assert(flagHasShortResult);
    return storeShortResult;
  }

const std::string KnowledgeCommandJSON::TypeNativeDataJSON::getShortResult(void) const
  {
    assert(flagHasShortResult);
    return storeShortResult;
  }

bool KnowledgeCommandJSON::TypeNativeDataJSON::hasConciseResult(void) const
  {
    return flagHasConciseResult;
  }

std::string KnowledgeCommandJSON::TypeNativeDataJSON::getConciseResult(void)
  {
    assert(flagHasConciseResult);
    return storeConciseResult;
  }

const std::string KnowledgeCommandJSON::TypeNativeDataJSON::getConciseResult(void) const
  {
    assert(flagHasConciseResult);
    return storeConciseResult;
  }

KnowledgeCommandJSON::KnowledgeCommandJSON(const KnowledgeCommandJSON &)
  {
    assert(false);
  }

KnowledgeCommandJSON &KnowledgeCommandJSON::operator=(const KnowledgeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *KnowledgeCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void KnowledgeCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

KnowledgeCommandJSON::KnowledgeCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

KnowledgeCommandJSON::~KnowledgeCommandJSON(void)
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

const char *KnowledgeCommandJSON::getCommandKind(void) const
  {
    return "KnowledgeCommand";
  }

bool KnowledgeCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

KnowledgeCommandJSON::TypeNativeDataJSON * KnowledgeCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const KnowledgeCommandJSON::TypeNativeDataJSON * KnowledgeCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

KnowledgeCommandJSON::TypeNativeDataJSON *KnowledgeCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
KnowledgeCommandJSON *KnowledgeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    KnowledgeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<KnowledgeCommandJSON>, KnowledgeCommandJSON *, bool> generator("Type KnowledgeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
