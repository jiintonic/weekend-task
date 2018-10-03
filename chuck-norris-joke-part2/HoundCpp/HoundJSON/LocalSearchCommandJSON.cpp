/* file "LocalSearchCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchCommandJSON.h"

#include "LocalSearchCommandJSON.h"


LocalSearchCommandJSON::TypeLocalSearchCommandKind LocalSearchCommandJSON::stringToLocalSearchCommandKind(const char *chars)
  {
    if (strcmp(chars, "ShowList") == 0)
        return LocalSearchCommandKind_ShowList;
    throw("The value for field `LocalSearchCommandKind' is not one of the legal values.");
  }

const char *LocalSearchCommandJSON::stringFromLocalSearchCommandKind(TypeLocalSearchCommandKind the_enum)
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

LocalSearchCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

LocalSearchCommandJSON::TypeNativeDataJSON &LocalSearchCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteriaIncremental(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocationNotSupported(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LocationNotSupported of TypeNativeDataJSON is not true for false.");
          }
      }
    setLocationNotSupported(the_bool);
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNameSingularSpoken of TypeNativeDataJSON is not a string.");
    setResultNameSingularSpoken(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNamePluralSpoken of TypeNativeDataJSON is not a string.");
    setResultNamePluralSpoken(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONResultNameSingularWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNameSingularWritten of TypeNativeDataJSON is not a string.");
    setResultNameSingularWritten(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONResultNamePluralWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultNamePluralWritten of TypeNativeDataJSON is not a string.");
    setResultNamePluralWritten(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultsReturned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SimilarResultsReturned of TypeNativeDataJSON is not true for false.");
          }
      }
    setSimilarResultsReturned(the_bool);
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSimilarResultLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONMessageUserSimilarResultsReturned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MessageUserSimilarResultsReturned of TypeNativeDataJSON is not true for false.");
          }
      }
    setMessageUserSimilarResultsReturned(the_bool);
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNameSingularSpoken of TypeNativeDataJSON is not a string.");
    setSimilarResultNameSingularSpoken(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNamePluralSpoken of TypeNativeDataJSON is not a string.");
    setSimilarResultNamePluralSpoken(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultNameSingularWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNameSingularWritten of TypeNativeDataJSON is not a string.");
    setSimilarResultNameSingularWritten(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONSimilarResultNamePluralWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SimilarResultNamePluralWritten of TypeNativeDataJSON is not a string.");
    setSimilarResultNamePluralWritten(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchQuestionsResponseSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchQuestionsResponseSpoken of TypeNativeDataJSON is not a string.");
    setLocalSearchQuestionsResponseSpoken(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocalSearchQuestionsResponseWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchQuestionsResponseWritten of TypeNativeDataJSON is not a string.");
    setLocalSearchQuestionsResponseWritten(std::string(json_string->getData()));
  }

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONLocalResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LocalResults of TypeNativeDataJSON is not an array.");
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

void LocalSearchCommandJSON::TypeNativeDataJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

LocalSearchCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
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
  }

LocalSearchCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocalSearchCriteria(void) const
  {
    return flagHasLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchCriteria(void)
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchCriteria(void) const
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocalSearchCriteriaIncremental(void) const
  {
    return flagHasLocalSearchCriteriaIncremental;
  }

LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchCriteriaIncremental(void)
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

const LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchCriteriaIncremental(void) const
  {
    assert(flagHasLocalSearchCriteriaIncremental);
    return storeLocalSearchCriteriaIncremental;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocationNotSupported(void) const
  {
    return flagHasLocationNotSupported;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::getLocationNotSupported(void)
  {
    assert(flagHasLocationNotSupported);
    return storeLocationNotSupported;
  }

const bool LocalSearchCommandJSON::TypeNativeDataJSON::getLocationNotSupported(void) const
  {
    assert(flagHasLocationNotSupported);
    return storeLocationNotSupported;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasResultNameSingularSpoken(void) const
  {
    return flagHasResultNameSingularSpoken;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNameSingularSpoken(void)
  {
    return storeResultNameSingularSpoken;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNameSingularSpoken(void) const
  {
    return storeResultNameSingularSpoken;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasResultNamePluralSpoken(void) const
  {
    return flagHasResultNamePluralSpoken;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNamePluralSpoken(void)
  {
    return storeResultNamePluralSpoken;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNamePluralSpoken(void) const
  {
    return storeResultNamePluralSpoken;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasResultNameSingularWritten(void) const
  {
    return flagHasResultNameSingularWritten;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNameSingularWritten(void)
  {
    return storeResultNameSingularWritten;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNameSingularWritten(void) const
  {
    return storeResultNameSingularWritten;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasResultNamePluralWritten(void) const
  {
    return flagHasResultNamePluralWritten;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNamePluralWritten(void)
  {
    return storeResultNamePluralWritten;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getResultNamePluralWritten(void) const
  {
    return storeResultNamePluralWritten;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultsReturned(void) const
  {
    return flagHasSimilarResultsReturned;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultsReturned(void)
  {
    return storeSimilarResultsReturned;
  }

const bool LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultsReturned(void) const
  {
    return storeSimilarResultsReturned;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultLocalSearchCriteria(void) const
  {
    return flagHasSimilarResultLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultLocalSearchCriteria(void)
  {
    assert(flagHasSimilarResultLocalSearchCriteria);
    return storeSimilarResultLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultLocalSearchCriteria(void) const
  {
    assert(flagHasSimilarResultLocalSearchCriteria);
    return storeSimilarResultLocalSearchCriteria;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasMessageUserSimilarResultsReturned(void) const
  {
    return flagHasMessageUserSimilarResultsReturned;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::getMessageUserSimilarResultsReturned(void)
  {
    return storeMessageUserSimilarResultsReturned;
  }

const bool LocalSearchCommandJSON::TypeNativeDataJSON::getMessageUserSimilarResultsReturned(void) const
  {
    return storeMessageUserSimilarResultsReturned;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultNameSingularSpoken(void) const
  {
    return flagHasSimilarResultNameSingularSpoken;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNameSingularSpoken(void)
  {
    return storeSimilarResultNameSingularSpoken;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNameSingularSpoken(void) const
  {
    return storeSimilarResultNameSingularSpoken;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultNamePluralSpoken(void) const
  {
    return flagHasSimilarResultNamePluralSpoken;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNamePluralSpoken(void)
  {
    return storeSimilarResultNamePluralSpoken;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNamePluralSpoken(void) const
  {
    return storeSimilarResultNamePluralSpoken;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultNameSingularWritten(void) const
  {
    return flagHasSimilarResultNameSingularWritten;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNameSingularWritten(void)
  {
    return storeSimilarResultNameSingularWritten;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNameSingularWritten(void) const
  {
    return storeSimilarResultNameSingularWritten;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasSimilarResultNamePluralWritten(void) const
  {
    return flagHasSimilarResultNamePluralWritten;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNamePluralWritten(void)
  {
    return storeSimilarResultNamePluralWritten;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getSimilarResultNamePluralWritten(void) const
  {
    return storeSimilarResultNamePluralWritten;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocalSearchQuestionsResponseSpoken(void) const
  {
    return flagHasLocalSearchQuestionsResponseSpoken;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchQuestionsResponseSpoken(void)
  {
    assert(flagHasLocalSearchQuestionsResponseSpoken);
    return storeLocalSearchQuestionsResponseSpoken;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchQuestionsResponseSpoken(void) const
  {
    assert(flagHasLocalSearchQuestionsResponseSpoken);
    return storeLocalSearchQuestionsResponseSpoken;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocalSearchQuestionsResponseWritten(void) const
  {
    return flagHasLocalSearchQuestionsResponseWritten;
  }

std::string LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchQuestionsResponseWritten(void)
  {
    assert(flagHasLocalSearchQuestionsResponseWritten);
    return storeLocalSearchQuestionsResponseWritten;
  }

const std::string LocalSearchCommandJSON::TypeNativeDataJSON::getLocalSearchQuestionsResponseWritten(void) const
  {
    assert(flagHasLocalSearchQuestionsResponseWritten);
    return storeLocalSearchQuestionsResponseWritten;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasLocalResults(void) const
  {
    return flagHasLocalResults;
  }

size_t LocalSearchCommandJSON::TypeNativeDataJSON::countOfLocalResults(void) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults.size();
  }

LocalResultJSON * LocalSearchCommandJSON::TypeNativeDataJSON::elementOfLocalResults(size_t element_num)
  {
    assert(flagHasLocalResults);
    return storeLocalResults[element_num];
  }

const LocalResultJSON * LocalSearchCommandJSON::TypeNativeDataJSON::elementOfLocalResults(size_t element_num) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults[element_num];
  }

std::vector< LocalResultJSON * > LocalSearchCommandJSON::TypeNativeDataJSON::getLocalResults(void)
  {
    assert(flagHasLocalResults);
    return storeLocalResults;
  }

const std::vector< LocalResultJSON * > LocalSearchCommandJSON::TypeNativeDataJSON::getLocalResults(void) const
  {
    assert(flagHasLocalResults);
    return storeLocalResults;
  }

bool LocalSearchCommandJSON::TypeNativeDataJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * LocalSearchCommandJSON::TypeNativeDataJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

LocalSearchCommandJSON::LocalSearchCommandJSON(const LocalSearchCommandJSON &)
  {
    assert(false);
  }

LocalSearchCommandJSON &LocalSearchCommandJSON::operator=(const LocalSearchCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *LocalSearchCommandJSON::extraLocalSearchCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_LocalSearchCommandKind;
    generated_string_LocalSearchCommandKind = new JSONStringValue("ShowList");
    return generated_string_LocalSearchCommandKind;
  }

JSONValue *LocalSearchCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void LocalSearchCommandJSON::fromJSONLocalSearchCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchCommandKind of LocalSearchCommandJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ShowList") == 0))
        throw("The value for field LocalSearchCommandKind of LocalSearchCommandJSON is not `ShowList'.");
    setLocalSearchCommandKind();
  }

void LocalSearchCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

LocalSearchCommandJSON::LocalSearchCommandJSON(void) :
        flagHasLocalSearchCommandKind(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchCommandJSON::~LocalSearchCommandJSON(void)
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

const char *LocalSearchCommandJSON::getCommandKind(void) const
  {
    return "LocalSearchCommand";
  }

bool LocalSearchCommandJSON::hasLocalSearchCommandKind(void) const
  {
    return flagHasLocalSearchCommandKind;
  }

LocalSearchCommandJSON::TypeLocalSearchCommandKind LocalSearchCommandJSON::getLocalSearchCommandKind(void)
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const LocalSearchCommandJSON::TypeLocalSearchCommandKind LocalSearchCommandJSON::getLocalSearchCommandKind(void) const
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const char *LocalSearchCommandJSON::getLocalSearchCommandKindAsChars(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

std::string LocalSearchCommandJSON::getLocalSearchCommandKindAsString(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

bool LocalSearchCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

LocalSearchCommandJSON::TypeNativeDataJSON * LocalSearchCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const LocalSearchCommandJSON::TypeNativeDataJSON * LocalSearchCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

LocalSearchCommandJSON::TypeNativeDataJSON *LocalSearchCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
LocalSearchCommandJSON *LocalSearchCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchCommandJSON>, LocalSearchCommandJSON *, bool> generator("Type LocalSearchCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
