/* file "GeonameFactsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameFactsInformationNuggetJSON.h"

#include "GeonameFactsInformationNuggetJSON.h"


GeonameFactsInformationNuggetJSON::GeonameFactsInformationNuggetJSON(const GeonameFactsInformationNuggetJSON &)
  {
    assert(false);
  }

GeonameFactsInformationNuggetJSON &GeonameFactsInformationNuggetJSON::operator=(const GeonameFactsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GeonameFactsInformationNuggetJSON::extraTextResponseToJSON(void) const
  {
    JSONStringValue *generated_string_TextResponse = new JSONStringValue(storeTextResponse.c_str());
    return generated_string_TextResponse;
  }

JSONValue *GeonameFactsInformationNuggetJSON::extraResultsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Results = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeResults.size(); ++num1)
      {
        JSONValueHandler handler_Results;
        storeResults[num1]->write_as_json(&handler_Results);
        handler_Results.result->add_reference();
        generated_array_1_Results->appendComponent(handler_Results.result);
        handler_Results.result->remove_reference();
      }
    return generated_array_1_Results;
  }

void GeonameFactsInformationNuggetJSON::fromJSONTextResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextResponse of GeonameFactsInformationNuggetJSON is not a string.");
    setTextResponse(std::string(json_string->getData()));
  }

void GeonameFactsInformationNuggetJSON::fromJSONResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Results of GeonameFactsInformationNuggetJSON is not an array.");
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

GeonameFactsInformationNuggetJSON::GeonameFactsInformationNuggetJSON(void) :
        flagHasTextResponse(false),
        flagHasResults(false)
  {
    extraIndex = create_string_index();
  }

GeonameFactsInformationNuggetJSON::~GeonameFactsInformationNuggetJSON(void)
  {
    if (flagHasResults)
      {
        for (size_t num4 = 0; num4 < storeResults.size(); ++num4)
          {
            storeResults[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *GeonameFactsInformationNuggetJSON::getNuggetKind(void) const
  {
    return "GeonameFactsInformationNugget";
  }

bool GeonameFactsInformationNuggetJSON::hasTextResponse(void) const
  {
    return flagHasTextResponse;
  }

std::string GeonameFactsInformationNuggetJSON::getTextResponse(void)
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

const std::string GeonameFactsInformationNuggetJSON::getTextResponse(void) const
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

bool GeonameFactsInformationNuggetJSON::hasResults(void) const
  {
    return flagHasResults;
  }

size_t GeonameFactsInformationNuggetJSON::countOfResults(void) const
  {
    assert(flagHasResults);
    return storeResults.size();
  }

GeonameObjectJSON * GeonameFactsInformationNuggetJSON::elementOfResults(size_t element_num)
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

const GeonameObjectJSON * GeonameFactsInformationNuggetJSON::elementOfResults(size_t element_num) const
  {
    assert(flagHasResults);
    return storeResults[element_num];
  }

std::vector< GeonameObjectJSON * > GeonameFactsInformationNuggetJSON::getResults(void)
  {
    assert(flagHasResults);
    return storeResults;
  }

const std::vector< GeonameObjectJSON * > GeonameFactsInformationNuggetJSON::getResults(void) const
  {
    assert(flagHasResults);
    return storeResults;
  }

GeonameFactsInformationNuggetJSON *GeonameFactsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameFactsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameFactsInformationNuggetJSON>, GeonameFactsInformationNuggetJSON *, bool> generator("Type GeonameFactsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
