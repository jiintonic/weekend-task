/* file "HotelIntentOnlyInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelIntentOnlyInformationNuggetJSON.h"

#include "HotelIntentOnlyInformationNuggetJSON.h"


HotelIntentOnlyInformationNuggetJSON::TypeHotelIntentOnlyCommandKind HotelIntentOnlyInformationNuggetJSON::stringToHotelIntentOnlyCommandKind(const char *chars)
  {
    if (strcmp(chars, "ShowList") == 0)
        return HotelIntentOnlyCommandKind_ShowList;
    throw("The value for field `HotelIntentOnlyCommandKind' is not one of the legal values.");
  }

const char *HotelIntentOnlyInformationNuggetJSON::stringFromHotelIntentOnlyCommandKind(TypeHotelIntentOnlyCommandKind the_enum)
  {
    switch (the_enum)
      {
        case HotelIntentOnlyCommandKind_ShowList:
            return "ShowList";
        default:
            assert(false);
            return NULL;
      }
  }

HotelIntentOnlyInformationNuggetJSON::HotelIntentOnlyInformationNuggetJSON(const HotelIntentOnlyInformationNuggetJSON &)
  {
    assert(false);
  }

HotelIntentOnlyInformationNuggetJSON &HotelIntentOnlyInformationNuggetJSON::operator=(const HotelIntentOnlyInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraHotelIntentOnlyCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_HotelIntentOnlyCommandKind;
    generated_string_HotelIntentOnlyCommandKind = new JSONStringValue("ShowList");
    return generated_string_HotelIntentOnlyCommandKind;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraHotelSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_HotelSearchCriteria;
    storeHotelSearchCriteria->write_as_json(&handler_HotelSearchCriteria);
    handler_HotelSearchCriteria.result->add_reference();
    return handler_HotelSearchCriteria.result;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraHotelSearchCriteriaIncrementalToJSON(void) const
  {
    JSONValueHandler handler_HotelSearchCriteriaIncremental;
    storeHotelSearchCriteriaIncremental->write_as_json(&handler_HotelSearchCriteriaIncremental);
    handler_HotelSearchCriteriaIncremental.result->add_reference();
    return handler_HotelSearchCriteriaIncremental.result;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraSpokenResponseNoResultsToJSON(void) const
  {
    JSONStringValue *generated_string_SpokenResponseNoResults = new JSONStringValue(storeSpokenResponseNoResults.c_str());
    return generated_string_SpokenResponseNoResults;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraSpokenResponseWithResultsToJSON(void) const
  {
    JSONStringValue *generated_string_SpokenResponseWithResults = new JSONStringValue(storeSpokenResponseWithResults.c_str());
    return generated_string_SpokenResponseWithResults;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraWrittenResponseNoResultsToJSON(void) const
  {
    JSONStringValue *generated_string_WrittenResponseNoResults = new JSONStringValue(storeWrittenResponseNoResults.c_str());
    return generated_string_WrittenResponseNoResults;
  }

JSONValue *HotelIntentOnlyInformationNuggetJSON::extraWrittenResponseWithResultsToJSON(void) const
  {
    JSONStringValue *generated_string_WrittenResponseWithResults = new JSONStringValue(storeWrittenResponseWithResults.c_str());
    return generated_string_WrittenResponseWithResults;
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONHotelIntentOnlyCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelIntentOnlyCommandKind of HotelIntentOnlyInformationNuggetJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ShowList") == 0))
        throw("The value for field HotelIntentOnlyCommandKind of HotelIntentOnlyInformationNuggetJSON is not `ShowList'.");
    setHotelIntentOnlyCommandKind();
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONHotelSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelFilterSpecJSON *convert_classy = HotelFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONHotelSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelFilterSpecJSON *convert_classy = HotelFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelSearchCriteriaIncremental(convert_classy);
    convert_classy->remove_reference();
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONSpokenResponseNoResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseNoResults of HotelIntentOnlyInformationNuggetJSON is not a string.");
    setSpokenResponseNoResults(std::string(json_string->getData()));
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONSpokenResponseWithResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseWithResults of HotelIntentOnlyInformationNuggetJSON is not a string.");
    setSpokenResponseWithResults(std::string(json_string->getData()));
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONWrittenResponseNoResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseNoResults of HotelIntentOnlyInformationNuggetJSON is not a string.");
    setWrittenResponseNoResults(std::string(json_string->getData()));
  }

void HotelIntentOnlyInformationNuggetJSON::fromJSONWrittenResponseWithResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseWithResults of HotelIntentOnlyInformationNuggetJSON is not a string.");
    setWrittenResponseWithResults(std::string(json_string->getData()));
  }

HotelIntentOnlyInformationNuggetJSON::HotelIntentOnlyInformationNuggetJSON(void) :
        flagHasHotelIntentOnlyCommandKind(false),
        flagHasHotelSearchCriteria(false),
        flagHasHotelSearchCriteriaIncremental(false),
        flagHasSpokenResponseNoResults(false),
        flagHasSpokenResponseWithResults(false),
        flagHasWrittenResponseNoResults(false),
        flagHasWrittenResponseWithResults(false)
  {
    extraIndex = create_string_index();
  }

HotelIntentOnlyInformationNuggetJSON::~HotelIntentOnlyInformationNuggetJSON(void)
  {
    if (flagHasHotelSearchCriteria)
      {
        storeHotelSearchCriteria->remove_reference();
      }
    if (flagHasHotelSearchCriteriaIncremental)
      {
        storeHotelSearchCriteriaIncremental->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HotelIntentOnlyInformationNuggetJSON::getNuggetKind(void) const
  {
    return "HotelIntentOnly";
  }

bool HotelIntentOnlyInformationNuggetJSON::hasHotelIntentOnlyCommandKind(void) const
  {
    return flagHasHotelIntentOnlyCommandKind;
  }

HotelIntentOnlyInformationNuggetJSON::TypeHotelIntentOnlyCommandKind HotelIntentOnlyInformationNuggetJSON::getHotelIntentOnlyCommandKind(void)
  {
    assert(flagHasHotelIntentOnlyCommandKind);
    return HotelIntentOnlyCommandKind_ShowList;
  }

const HotelIntentOnlyInformationNuggetJSON::TypeHotelIntentOnlyCommandKind HotelIntentOnlyInformationNuggetJSON::getHotelIntentOnlyCommandKind(void) const
  {
    assert(flagHasHotelIntentOnlyCommandKind);
    return HotelIntentOnlyCommandKind_ShowList;
  }

const char *HotelIntentOnlyInformationNuggetJSON::getHotelIntentOnlyCommandKindAsChars(void) const
  {
    return stringFromHotelIntentOnlyCommandKind(getHotelIntentOnlyCommandKind());
  }

std::string HotelIntentOnlyInformationNuggetJSON::getHotelIntentOnlyCommandKindAsString(void) const
  {
    return stringFromHotelIntentOnlyCommandKind(getHotelIntentOnlyCommandKind());
  }

bool HotelIntentOnlyInformationNuggetJSON::hasHotelSearchCriteria(void) const
  {
    return flagHasHotelSearchCriteria;
  }

HotelFilterSpecJSON * HotelIntentOnlyInformationNuggetJSON::getHotelSearchCriteria(void)
  {
    assert(flagHasHotelSearchCriteria);
    return storeHotelSearchCriteria;
  }

const HotelFilterSpecJSON * HotelIntentOnlyInformationNuggetJSON::getHotelSearchCriteria(void) const
  {
    assert(flagHasHotelSearchCriteria);
    return storeHotelSearchCriteria;
  }

bool HotelIntentOnlyInformationNuggetJSON::hasHotelSearchCriteriaIncremental(void) const
  {
    return flagHasHotelSearchCriteriaIncremental;
  }

HotelFilterSpecJSON * HotelIntentOnlyInformationNuggetJSON::getHotelSearchCriteriaIncremental(void)
  {
    assert(flagHasHotelSearchCriteriaIncremental);
    return storeHotelSearchCriteriaIncremental;
  }

const HotelFilterSpecJSON * HotelIntentOnlyInformationNuggetJSON::getHotelSearchCriteriaIncremental(void) const
  {
    assert(flagHasHotelSearchCriteriaIncremental);
    return storeHotelSearchCriteriaIncremental;
  }

bool HotelIntentOnlyInformationNuggetJSON::hasSpokenResponseNoResults(void) const
  {
    return flagHasSpokenResponseNoResults;
  }

std::string HotelIntentOnlyInformationNuggetJSON::getSpokenResponseNoResults(void)
  {
    assert(flagHasSpokenResponseNoResults);
    return storeSpokenResponseNoResults;
  }

const std::string HotelIntentOnlyInformationNuggetJSON::getSpokenResponseNoResults(void) const
  {
    assert(flagHasSpokenResponseNoResults);
    return storeSpokenResponseNoResults;
  }

bool HotelIntentOnlyInformationNuggetJSON::hasSpokenResponseWithResults(void) const
  {
    return flagHasSpokenResponseWithResults;
  }

std::string HotelIntentOnlyInformationNuggetJSON::getSpokenResponseWithResults(void)
  {
    assert(flagHasSpokenResponseWithResults);
    return storeSpokenResponseWithResults;
  }

const std::string HotelIntentOnlyInformationNuggetJSON::getSpokenResponseWithResults(void) const
  {
    assert(flagHasSpokenResponseWithResults);
    return storeSpokenResponseWithResults;
  }

bool HotelIntentOnlyInformationNuggetJSON::hasWrittenResponseNoResults(void) const
  {
    return flagHasWrittenResponseNoResults;
  }

std::string HotelIntentOnlyInformationNuggetJSON::getWrittenResponseNoResults(void)
  {
    assert(flagHasWrittenResponseNoResults);
    return storeWrittenResponseNoResults;
  }

const std::string HotelIntentOnlyInformationNuggetJSON::getWrittenResponseNoResults(void) const
  {
    assert(flagHasWrittenResponseNoResults);
    return storeWrittenResponseNoResults;
  }

bool HotelIntentOnlyInformationNuggetJSON::hasWrittenResponseWithResults(void) const
  {
    return flagHasWrittenResponseWithResults;
  }

std::string HotelIntentOnlyInformationNuggetJSON::getWrittenResponseWithResults(void)
  {
    assert(flagHasWrittenResponseWithResults);
    return storeWrittenResponseWithResults;
  }

const std::string HotelIntentOnlyInformationNuggetJSON::getWrittenResponseWithResults(void) const
  {
    assert(flagHasWrittenResponseWithResults);
    return storeWrittenResponseWithResults;
  }

HotelIntentOnlyInformationNuggetJSON *HotelIntentOnlyInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelIntentOnlyInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelIntentOnlyInformationNuggetJSON>, HotelIntentOnlyInformationNuggetJSON *, bool> generator("Type HotelIntentOnlyInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
