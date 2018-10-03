/* file "MusicChartsCommandNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicChartsCommandNativeDataJSON.h"

#include "MusicChartsCommandNativeDataJSON.h"


MusicChartsCommandNativeDataJSON::MusicChartsCommandNativeDataJSON(const MusicChartsCommandNativeDataJSON &)
  {
    assert(false);
  }

MusicChartsCommandNativeDataJSON &MusicChartsCommandNativeDataJSON::operator=(const MusicChartsCommandNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicChartsCommandNativeDataJSON::extraSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_SearchCriteria;
    storeSearchCriteria->write_as_json(&handler_SearchCriteria);
    handler_SearchCriteria.result->add_reference();
    return handler_SearchCriteria.result;
  }

JSONValue *MusicChartsCommandNativeDataJSON::extraChartTitleToJSON(void) const
  {
    JSONStringValue *generated_string_ChartTitle = new JSONStringValue(storeChartTitle.c_str());
    return generated_string_ChartTitle;
  }

JSONValue *MusicChartsCommandNativeDataJSON::extraVideosToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Videos = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeVideos.size(); ++num1)
      {
        JSONValueHandler handler_Videos;
        storeVideos[num1]->write_as_json(&handler_Videos);
        handler_Videos.result->add_reference();
        generated_array_1_Videos->appendComponent(handler_Videos.result);
        handler_Videos.result->remove_reference();
      }
    return generated_array_1_Videos;
  }

void MusicChartsCommandNativeDataJSON::fromJSONSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicChartsSearchCriteriaJSON *convert_classy = MusicChartsSearchCriteriaJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void MusicChartsCommandNativeDataJSON::fromJSONChartTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChartTitle of MusicChartsCommandNativeDataJSON is not a string.");
    setChartTitle(std::string(json_string->getData()));
  }

void MusicChartsCommandNativeDataJSON::fromJSONVideos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Videos of MusicChartsCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicVideoJSON * > vector_Videos1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicVideoJSON *convert_classy = MusicVideoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Videos1[num1] = convert_classy;
      }
    initVideos();
    for (size_t num2 = 0; num2 < vector_Videos1.size(); ++num2)
        appendVideos(vector_Videos1[num2]);
    for (size_t num1 = 0; num1 < vector_Videos1.size(); ++num1)
      {
        vector_Videos1[num1]->remove_reference();
      }
  }

MusicChartsCommandNativeDataJSON::MusicChartsCommandNativeDataJSON(void) :
        flagHasSearchCriteria(false),
        flagHasChartTitle(false),
        flagHasVideos(false)
  {
    extraIndex = create_string_index();
  }

MusicChartsCommandNativeDataJSON::~MusicChartsCommandNativeDataJSON(void)
  {
    if (flagHasSearchCriteria)
      {
        storeSearchCriteria->remove_reference();
      }
    if (flagHasVideos)
      {
        for (size_t num4 = 0; num4 < storeVideos.size(); ++num4)
          {
            storeVideos[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicChartsCommandNativeDataJSON::getMusicCommandNativeDataKind(void) const
  {
    return "MusicChartsCommandNativeData";
  }

bool MusicChartsCommandNativeDataJSON::hasSearchCriteria(void) const
  {
    return flagHasSearchCriteria;
  }

MusicChartsSearchCriteriaJSON * MusicChartsCommandNativeDataJSON::getSearchCriteria(void)
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

const MusicChartsSearchCriteriaJSON * MusicChartsCommandNativeDataJSON::getSearchCriteria(void) const
  {
    assert(flagHasSearchCriteria);
    return storeSearchCriteria;
  }

bool MusicChartsCommandNativeDataJSON::hasChartTitle(void) const
  {
    return flagHasChartTitle;
  }

std::string MusicChartsCommandNativeDataJSON::getChartTitle(void)
  {
    assert(flagHasChartTitle);
    return storeChartTitle;
  }

const std::string MusicChartsCommandNativeDataJSON::getChartTitle(void) const
  {
    assert(flagHasChartTitle);
    return storeChartTitle;
  }

bool MusicChartsCommandNativeDataJSON::hasVideos(void) const
  {
    return flagHasVideos;
  }

size_t MusicChartsCommandNativeDataJSON::countOfVideos(void) const
  {
    assert(flagHasVideos);
    return storeVideos.size();
  }

MusicVideoJSON * MusicChartsCommandNativeDataJSON::elementOfVideos(size_t element_num)
  {
    assert(flagHasVideos);
    return storeVideos[element_num];
  }

const MusicVideoJSON * MusicChartsCommandNativeDataJSON::elementOfVideos(size_t element_num) const
  {
    assert(flagHasVideos);
    return storeVideos[element_num];
  }

std::vector< MusicVideoJSON * > MusicChartsCommandNativeDataJSON::getVideos(void)
  {
    assert(flagHasVideos);
    return storeVideos;
  }

const std::vector< MusicVideoJSON * > MusicChartsCommandNativeDataJSON::getVideos(void) const
  {
    assert(flagHasVideos);
    return storeVideos;
  }

MusicChartsCommandNativeDataJSON *MusicChartsCommandNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicChartsCommandNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicChartsCommandNativeDataJSON>, MusicChartsCommandNativeDataJSON *, bool> generator("Type MusicChartsCommandNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
