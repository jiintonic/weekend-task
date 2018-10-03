/* file "GeonameFactsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameFactsCommandJSON.h"

#include "GeonameFactsCommandJSON.h"


GeonameFactsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

GeonameFactsCommandJSON::TypeNativeDataJSON &GeonameFactsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameFactsCommandJSON::TypeNativeDataJSON::fromJSONTextResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextResponse of TypeNativeDataJSON is not a string.");
    setTextResponse(std::string(json_string->getData()));
  }

void GeonameFactsCommandJSON::TypeNativeDataJSON::fromJSONResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Results of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< GeonameObjectJSON * > vector_Results1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GeonameObjectJSON *convert_classy = GeonameObjectJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Results1[num1] = convert_classy;
      }
    initResults();
    for (size_t num2 = 0; num2 < vector_Results1.size(); ++num2)
        appendResults(vector_Results1[num2]);
    for (size_t num1 = 0; num1 < vector_Results1.size(); ++num1)
      {
        vector_Results1[num1]->remove_reference();
      }
  }

GeonameFactsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTextResponse(false),
        flagHasResults(false)
  {
  }

GeonameFactsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasResults)
      {
        for (size_t num4 = 0; num4 < storeResults.size(); ++num4)
          {
            storeResults[num4]->remove_reference();
          }
      }
  }

bool GeonameFactsCommandJSON::TypeNativeDataJSON::hasTextResponse(void) const
  {
    return flagHasTextResponse;
  }

std::string GeonameFactsCommandJSON::TypeNativeDataJSON::getTextResponse(void)
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

const std::string GeonameFactsCommandJSON::TypeNativeDataJSON::getTextResponse(void) const
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

bool GeonameFactsCommandJSON::TypeNativeDataJSON::hasResults(void) const
  {
    return flagHasResults;
  }

size_t GeonameFactsCommandJSON::TypeNativeDataJSON::countOfResults(void) const
  {
    assert(flagHasResults);
    return storeResults.size();
  }

GeonameObjectJSON * GeonameFactsCommandJSON::TypeNativeDataJSON::elementOfResults(size_t element_num)
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

const GeonameObjectJSON * GeonameFactsCommandJSON::TypeNativeDataJSON::elementOfResults(size_t element_num) const
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

std::vector< GeonameObjectJSON * > GeonameFactsCommandJSON::TypeNativeDataJSON::getResults(void)
  {
    assert(flagHasResults);
    return storeResults;
  }

const std::vector< GeonameObjectJSON * > GeonameFactsCommandJSON::TypeNativeDataJSON::getResults(void) const
  {
    assert(flagHasResults);
    return storeResults;
  }

GeonameFactsCommandJSON::GeonameFactsCommandJSON(const GeonameFactsCommandJSON &)
  {
    assert(false);
  }

GeonameFactsCommandJSON &GeonameFactsCommandJSON::operator=(const GeonameFactsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GeonameFactsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void GeonameFactsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

GeonameFactsCommandJSON::GeonameFactsCommandJSON(void) :
        flagHasNativeData(false)
  {
  }

GeonameFactsCommandJSON::~GeonameFactsCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *GeonameFactsCommandJSON::getCommandKind(void) const
  {
    return "GeonameFactsCommand";
  }

bool GeonameFactsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

GeonameFactsCommandJSON::TypeNativeDataJSON * GeonameFactsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const GeonameFactsCommandJSON::TypeNativeDataJSON * GeonameFactsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

GeonameFactsCommandJSON::TypeNativeDataJSON *GeonameFactsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
GeonameFactsCommandJSON *GeonameFactsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameFactsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameFactsCommandJSON>, GeonameFactsCommandJSON *, bool> generator("Type GeonameFactsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
