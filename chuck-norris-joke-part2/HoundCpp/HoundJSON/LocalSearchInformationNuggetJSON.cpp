/* file "LocalSearchInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchInformationNuggetJSON.h"

#include "LocalSearchInformationNuggetJSON.h"


LocalSearchInformationNuggetJSON::TypeLocalSearchCommandKind LocalSearchInformationNuggetJSON::stringToLocalSearchCommandKind(const char *chars)
  {
    if (strcmp(chars, "ShowList") == 0)
        return LocalSearchCommandKind_ShowList;
    throw("The value for field `LocalSearchCommandKind' is not one of the legal values.");
  }

const char *LocalSearchInformationNuggetJSON::stringFromLocalSearchCommandKind(TypeLocalSearchCommandKind the_enum)
  {
    switch (the_enum)
      {
        case LocalSearchCommandKind_ShowList:
            return "ShowList";
        default:
            assert(false);
            return NULL;
      }
  }

LocalSearchInformationNuggetJSON::LocalSearchInformationNuggetJSON(const LocalSearchInformationNuggetJSON &)
  {
    assert(false);
  }

LocalSearchInformationNuggetJSON &LocalSearchInformationNuggetJSON::operator=(const LocalSearchInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalSearchCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_LocalSearchCommandKind;
    generated_string_LocalSearchCommandKind = new JSONStringValue("ShowList");
    return generated_string_LocalSearchCommandKind;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_LocalSearchCriteria;
    storeLocalSearchCriteria->write_as_json(&handler_LocalSearchCriteria);
    handler_LocalSearchCriteria.result->add_reference();
    return handler_LocalSearchCriteria.result;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalSearchCriteriaIncrementalToJSON(void) const
  {
    JSONValueHandler handler_LocalSearchCriteriaIncremental;
    storeLocalSearchCriteriaIncremental->write_as_json(&handler_LocalSearchCriteriaIncremental);
    handler_LocalSearchCriteriaIncremental.result->add_reference();
    return handler_LocalSearchCriteriaIncremental.result;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocationNotSupportedToJSON(void) const
  {
    JSONValue *generated_boolean_LocationNotSupported = (storeLocationNotSupported ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_LocationNotSupported;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraResultNameSingularSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_ResultNameSingularSpoken = new JSONStringValue(storeResultNameSingularSpoken.c_str());
    return generated_string_ResultNameSingularSpoken;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraResultNamePluralSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_ResultNamePluralSpoken = new JSONStringValue(storeResultNamePluralSpoken.c_str());
    return generated_string_ResultNamePluralSpoken;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraResultNameSingularWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_ResultNameSingularWritten = new JSONStringValue(storeResultNameSingularWritten.c_str());
    return generated_string_ResultNameSingularWritten;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraResultNamePluralWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_ResultNamePluralWritten = new JSONStringValue(storeResultNamePluralWritten.c_str());
    return generated_string_ResultNamePluralWritten;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultsReturnedToJSON(void) const
  {
    JSONValue *generated_boolean_SimilarResultsReturned = (storeSimilarResultsReturned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_SimilarResultsReturned;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultLocalSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_SimilarResultLocalSearchCriteria;
    storeSimilarResultLocalSearchCriteria->write_as_json(&handler_SimilarResultLocalSearchCriteria);
    handler_SimilarResultLocalSearchCriteria.result->add_reference();
    return handler_SimilarResultLocalSearchCriteria.result;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraMessageUserSimilarResultsReturnedToJSON(void) const
  {
    JSONValue *generated_boolean_MessageUserSimilarResultsReturned = (storeMessageUserSimilarResultsReturned ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_MessageUserSimilarResultsReturned;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultNameSingularSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_SimilarResultNameSingularSpoken = new JSONStringValue(storeSimilarResultNameSingularSpoken.c_str());
    return generated_string_SimilarResultNameSingularSpoken;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultNamePluralSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_SimilarResultNamePluralSpoken = new JSONStringValue(storeSimilarResultNamePluralSpoken.c_str());
    return generated_string_SimilarResultNamePluralSpoken;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultNameSingularWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_SimilarResultNameSingularWritten = new JSONStringValue(storeSimilarResultNameSingularWritten.c_str());
    return generated_string_SimilarResultNameSingularWritten;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraSimilarResultNamePluralWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_SimilarResultNamePluralWritten = new JSONStringValue(storeSimilarResultNamePluralWritten.c_str());
    return generated_string_SimilarResultNamePluralWritten;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalSearchQuestionsResponseSpokenToJSON(void) const
  {
    JSONStringValue *generated_string_LocalSearchQuestionsResponseSpoken = new JSONStringValue(storeLocalSearchQuestionsResponseSpoken.c_str());
    return generated_string_LocalSearchQuestionsResponseSpoken;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalSearchQuestionsResponseWrittenToJSON(void) const
  {
    JSONStringValue *generated_string_LocalSearchQuestionsResponseWritten = new JSONStringValue(storeLocalSearchQuestionsResponseWritten.c_str());
    return generated_string_LocalSearchQuestionsResponseWritten;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraLocalResultsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_LocalResults = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeLocalResults.size(); ++num1)
      {
        JSONValueHandler handler_LocalResults;
        storeLocalResults[num1]->write_as_json(&handler_LocalResults);
        handler_LocalResults.result->add_reference();
        generated_array_1_LocalResults->appendComponent(handler_LocalResults.result);
        handler_LocalResults.result->remove_reference();
      }
    return generated_array_1_LocalResults;
  }

JSONValue *LocalSearchInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalSearchCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchCommandKind of LocalSearchInformationNuggetJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ShowList") == 0))
        throw("The value for field LocalSearchCommandKind of LocalSearchInformationNuggetJSON is not `ShowList'.");
    setLocalSearchCommandKind();
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteriaIncremental(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchInformationNuggetJSON::fromJSONLocationNotSupported(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LocationNotSupported of LocalSearchInformationNuggetJSON is not true for false.");
          }
      }
    setLocationNotSupported(the_bool);
  }

void LocalSearchInformationNuggetJSON::fromJSONResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNameSingularSpoken of LocalSearchInformationNuggetJSON is not a string.");
    setResultNameSingularSpoken(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNamePluralSpoken of LocalSearchInformationNuggetJSON is not a string.");
    setResultNamePluralSpoken(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONResultNameSingularWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNameSingularWritten of LocalSearchInformationNuggetJSON is not a string.");
    setResultNameSingularWritten(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONResultNamePluralWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNamePluralWritten of LocalSearchInformationNuggetJSON is not a string.");
    setResultNamePluralWritten(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultsReturned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SimilarResultsReturned of LocalSearchInformationNuggetJSON is not true for false.");
          }
      }
    setSimilarResultsReturned(the_bool);
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSimilarResultLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchInformationNuggetJSON::fromJSONMessageUserSimilarResultsReturned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MessageUserSimilarResultsReturned of LocalSearchInformationNuggetJSON is not true for false.");
          }
      }
    setMessageUserSimilarResultsReturned(the_bool);
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNameSingularSpoken of LocalSearchInformationNuggetJSON is not a string.");
    setSimilarResultNameSingularSpoken(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNamePluralSpoken of LocalSearchInformationNuggetJSON is not a string.");
    setSimilarResultNamePluralSpoken(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultNameSingularWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNameSingularWritten of LocalSearchInformationNuggetJSON is not a string.");
    setSimilarResultNameSingularWritten(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONSimilarResultNamePluralWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNamePluralWritten of LocalSearchInformationNuggetJSON is not a string.");
    setSimilarResultNamePluralWritten(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalSearchQuestionsResponseSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchQuestionsResponseSpoken of LocalSearchInformationNuggetJSON is not a string.");
    setLocalSearchQuestionsResponseSpoken(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalSearchQuestionsResponseWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchQuestionsResponseWritten of LocalSearchInformationNuggetJSON is not a string.");
    setLocalSearchQuestionsResponseWritten(std::string(json_string->getData()));
  }

void LocalSearchInformationNuggetJSON::fromJSONLocalResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LocalResults of LocalSearchInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultJSON * > vector_LocalResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultJSON *convert_classy = LocalResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LocalResults1[num1] = convert_classy;
      }
    initLocalResults();
    for (size_t num2 = 0; num2 < vector_LocalResults1.size(); ++num2)
        appendLocalResults(vector_LocalResults1[num2]);
    for (size_t num1 = 0; num1 < vector_LocalResults1.size(); ++num1)
      {
        vector_LocalResults1[num1]->remove_reference();
      }
  }

void LocalSearchInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

LocalSearchInformationNuggetJSON::LocalSearchInformationNuggetJSON(void) :
        flagHasLocalSearchCommandKind(false),
        flagHasLocalSearchCriteria(false),
        flagHasLocalSearchCriteriaIncremental(false),
        flagHasLocationNotSupported(false),
        flagHasResultNameSingularSpoken(false),
        flagHasResultNamePluralSpoken(false),
        flagHasResultNameSingularWritten(false),
        flagHasResultNamePluralWritten(false),
        flagHasSimilarResultsReturned(false),
        flagHasSimilarResultLocalSearchCriteria(false),
        flagHasMessageUserSimilarResultsReturned(false),
        flagHasSimilarResultNameSingularSpoken(false),
        flagHasSimilarResultNamePluralSpoken(false),
        flagHasSimilarResultNameSingularWritten(false),
        flagHasSimilarResultNamePluralWritten(false),
        flagHasLocalSearchQuestionsResponseSpoken(false),
        flagHasLocalSearchQuestionsResponseWritten(false),
        flagHasLocalResults(false),
        flagHasAttribution(false)
  {
    storeResultNameSingularSpoken = "result";
    storeResultNamePluralSpoken = "results";
    storeResultNameSingularWritten = "result";
    storeResultNamePluralWritten = "results";
    storeSimilarResultsReturned = false;
    storeMessageUserSimilarResultsReturned = false;
    storeSimilarResultNameSingularSpoken = "similar result";
    storeSimilarResultNamePluralSpoken = "similar results";
    storeSimilarResultNameSingularWritten = "similar result";
    storeSimilarResultNamePluralWritten = "similar results";
    extraIndex = create_string_index();
  }

LocalSearchInformationNuggetJSON::~LocalSearchInformationNuggetJSON(void)
  {
    if (flagHasLocalSearchCriteria)
      {
        storeLocalSearchCriteria->remove_reference();
      }
    if (flagHasLocalSearchCriteriaIncremental)
      {
        storeLocalSearchCriteriaIncremental->remove_reference();
      }
    if (flagHasSimilarResultLocalSearchCriteria)
      {
        storeSimilarResultLocalSearchCriteria->remove_reference();
      }
    if (flagHasLocalResults)
      {
        for (size_t num4 = 0; num4 < storeLocalResults.size(); ++num4)
          {
            storeLocalResults[num4]->remove_reference();
          }
      }
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *LocalSearchInformationNuggetJSON::getNuggetKind(void) const
  {
    return "LocalSearch";
  }

bool LocalSearchInformationNuggetJSON::hasLocalSearchCommandKind(void) const
  {
    return flagHasLocalSearchCommandKind;
  }

LocalSearchInformationNuggetJSON::TypeLocalSearchCommandKind LocalSearchInformationNuggetJSON::getLocalSearchCommandKind(void)
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const LocalSearchInformationNuggetJSON::TypeLocalSearchCommandKind LocalSearchInformationNuggetJSON::getLocalSearchCommandKind(void) const
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const char *LocalSearchInformationNuggetJSON::getLocalSearchCommandKindAsChars(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

std::string LocalSearchInformationNuggetJSON::getLocalSearchCommandKindAsString(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

bool LocalSearchInformationNuggetJSON::hasLocalSearchCriteria(void) const
  {
    return flagHasLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getLocalSearchCriteria(void)
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getLocalSearchCriteria(void) const
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

bool LocalSearchInformationNuggetJSON::hasLocalSearchCriteriaIncremental(void) const
  {
    return flagHasLocalSearchCriteriaIncremental;
  }

LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getLocalSearchCriteriaIncremental(void)
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

const LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getLocalSearchCriteriaIncremental(void) const
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

bool LocalSearchInformationNuggetJSON::hasLocationNotSupported(void) const
  {
    return flagHasLocationNotSupported;
  }

bool LocalSearchInformationNuggetJSON::getLocationNotSupported(void)
  {
    assert(flagHasLocationNotSupported);
    return storeLocationNotSupported;
  }

const bool LocalSearchInformationNuggetJSON::getLocationNotSupported(void) const
  {
    assert(flagHasLocationNotSupported);
    return storeLocationNotSupported;
  }

bool LocalSearchInformationNuggetJSON::hasResultNameSingularSpoken(void) const
  {
    return flagHasResultNameSingularSpoken;
  }

std::string LocalSearchInformationNuggetJSON::getResultNameSingularSpoken(void)
  {
    return storeResultNameSingularSpoken;
  }

const std::string LocalSearchInformationNuggetJSON::getResultNameSingularSpoken(void) const
  {
    return storeResultNameSingularSpoken;
  }

bool LocalSearchInformationNuggetJSON::hasResultNamePluralSpoken(void) const
  {
    return flagHasResultNamePluralSpoken;
  }

std::string LocalSearchInformationNuggetJSON::getResultNamePluralSpoken(void)
  {
    return storeResultNamePluralSpoken;
  }

const std::string LocalSearchInformationNuggetJSON::getResultNamePluralSpoken(void) const
  {
    return storeResultNamePluralSpoken;
  }

bool LocalSearchInformationNuggetJSON::hasResultNameSingularWritten(void) const
  {
    return flagHasResultNameSingularWritten;
  }

std::string LocalSearchInformationNuggetJSON::getResultNameSingularWritten(void)
  {
    return storeResultNameSingularWritten;
  }

const std::string LocalSearchInformationNuggetJSON::getResultNameSingularWritten(void) const
  {
    return storeResultNameSingularWritten;
  }

bool LocalSearchInformationNuggetJSON::hasResultNamePluralWritten(void) const
  {
    return flagHasResultNamePluralWritten;
  }

std::string LocalSearchInformationNuggetJSON::getResultNamePluralWritten(void)
  {
    return storeResultNamePluralWritten;
  }

const std::string LocalSearchInformationNuggetJSON::getResultNamePluralWritten(void) const
  {
    return storeResultNamePluralWritten;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultsReturned(void) const
  {
    return flagHasSimilarResultsReturned;
  }

bool LocalSearchInformationNuggetJSON::getSimilarResultsReturned(void)
  {
    return storeSimilarResultsReturned;
  }

const bool LocalSearchInformationNuggetJSON::getSimilarResultsReturned(void) const
  {
    return storeSimilarResultsReturned;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultLocalSearchCriteria(void) const
  {
    return flagHasSimilarResultLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getSimilarResultLocalSearchCriteria(void)
  {
    assert(flagHasSimilarResultLocalSearchCriteria);
    return storeSimilarResultLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * LocalSearchInformationNuggetJSON::getSimilarResultLocalSearchCriteria(void) const
  {
    assert(flagHasSimilarResultLocalSearchCriteria);
    return storeSimilarResultLocalSearchCriteria;
  }

bool LocalSearchInformationNuggetJSON::hasMessageUserSimilarResultsReturned(void) const
  {
    return flagHasMessageUserSimilarResultsReturned;
  }

bool LocalSearchInformationNuggetJSON::getMessageUserSimilarResultsReturned(void)
  {
    return storeMessageUserSimilarResultsReturned;
  }

const bool LocalSearchInformationNuggetJSON::getMessageUserSimilarResultsReturned(void) const
  {
    return storeMessageUserSimilarResultsReturned;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultNameSingularSpoken(void) const
  {
    return flagHasSimilarResultNameSingularSpoken;
  }

std::string LocalSearchInformationNuggetJSON::getSimilarResultNameSingularSpoken(void)
  {
    return storeSimilarResultNameSingularSpoken;
  }

const std::string LocalSearchInformationNuggetJSON::getSimilarResultNameSingularSpoken(void) const
  {
    return storeSimilarResultNameSingularSpoken;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultNamePluralSpoken(void) const
  {
    return flagHasSimilarResultNamePluralSpoken;
  }

std::string LocalSearchInformationNuggetJSON::getSimilarResultNamePluralSpoken(void)
  {
    return storeSimilarResultNamePluralSpoken;
  }

const std::string LocalSearchInformationNuggetJSON::getSimilarResultNamePluralSpoken(void) const
  {
    return storeSimilarResultNamePluralSpoken;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultNameSingularWritten(void) const
  {
    return flagHasSimilarResultNameSingularWritten;
  }

std::string LocalSearchInformationNuggetJSON::getSimilarResultNameSingularWritten(void)
  {
    return storeSimilarResultNameSingularWritten;
  }

const std::string LocalSearchInformationNuggetJSON::getSimilarResultNameSingularWritten(void) const
  {
    return storeSimilarResultNameSingularWritten;
  }

bool LocalSearchInformationNuggetJSON::hasSimilarResultNamePluralWritten(void) const
  {
    return flagHasSimilarResultNamePluralWritten;
  }

std::string LocalSearchInformationNuggetJSON::getSimilarResultNamePluralWritten(void)
  {
    return storeSimilarResultNamePluralWritten;
  }

const std::string LocalSearchInformationNuggetJSON::getSimilarResultNamePluralWritten(void) const
  {
    return storeSimilarResultNamePluralWritten;
  }

bool LocalSearchInformationNuggetJSON::hasLocalSearchQuestionsResponseSpoken(void) const
  {
    return flagHasLocalSearchQuestionsResponseSpoken;
  }

std::string LocalSearchInformationNuggetJSON::getLocalSearchQuestionsResponseSpoken(void)
  {
    assert(flagHasLocalSearchQuestionsResponseSpoken);
    return storeLocalSearchQuestionsResponseSpoken;
  }

const std::string LocalSearchInformationNuggetJSON::getLocalSearchQuestionsResponseSpoken(void) const
  {
    assert(flagHasLocalSearchQuestionsResponseSpoken);
    return storeLocalSearchQuestionsResponseSpoken;
  }

bool LocalSearchInformationNuggetJSON::hasLocalSearchQuestionsResponseWritten(void) const
  {
    return flagHasLocalSearchQuestionsResponseWritten;
  }

std::string LocalSearchInformationNuggetJSON::getLocalSearchQuestionsResponseWritten(void)
  {
    assert(flagHasLocalSearchQuestionsResponseWritten);
    return storeLocalSearchQuestionsResponseWritten;
  }

const std::string LocalSearchInformationNuggetJSON::getLocalSearchQuestionsResponseWritten(void) const
  {
    assert(flagHasLocalSearchQuestionsResponseWritten);
    return storeLocalSearchQuestionsResponseWritten;
  }

bool LocalSearchInformationNuggetJSON::hasLocalResults(void) const
  {
    return flagHasLocalResults;
  }

size_t LocalSearchInformationNuggetJSON::countOfLocalResults(void) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults.size();
  }

LocalResultJSON * LocalSearchInformationNuggetJSON::elementOfLocalResults(size_t element_num)
  {
    assert(flagHasLocalResults);
    return storeLocalResults[element_num];
  }

const LocalResultJSON * LocalSearchInformationNuggetJSON::elementOfLocalResults(size_t element_num) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults[element_num];
  }

std::vector< LocalResultJSON * > LocalSearchInformationNuggetJSON::getLocalResults(void)
  {
    assert(flagHasLocalResults);
    return storeLocalResults;
  }

const std::vector< LocalResultJSON * > LocalSearchInformationNuggetJSON::getLocalResults(void) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults;
  }

bool LocalSearchInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * LocalSearchInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * LocalSearchInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

LocalSearchInformationNuggetJSON *LocalSearchInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchInformationNuggetJSON>, LocalSearchInformationNuggetJSON *, bool> generator("Type LocalSearchInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
