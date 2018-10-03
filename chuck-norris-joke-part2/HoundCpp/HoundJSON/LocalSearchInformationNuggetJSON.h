/* file "LocalSearchInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALSEARCHINFORMATIONNUGGETJSON_H
#define LOCALSEARCHINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "LocalSearchFilterSpecJSON.h"
#include "LocalSearchFilterSpecJSON.h"
#include "LocalSearchFilterSpecJSON.h"
#include "LocalResultJSON.h"
#include "AttributionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocalSearchInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    enum TypeLocalSearchCommandKind
      {
        LocalSearchCommandKind_ShowList
      };

    static TypeLocalSearchCommandKind  stringToLocalSearchCommandKind(const char *chars);
    static const char * stringFromLocalSearchCommandKind(TypeLocalSearchCommandKind the_enum);

  private:
    bool flagHasLocalSearchCommandKind;
    bool flagHasLocalSearchCriteria;
    LocalSearchFilterSpecJSON * storeLocalSearchCriteria;
    bool flagHasLocalSearchCriteriaIncremental;
    LocalSearchFilterSpecJSON * storeLocalSearchCriteriaIncremental;
    bool flagHasLocationNotSupported;
    bool storeLocationNotSupported;
    bool flagHasResultNameSingularSpoken;
    std::string storeResultNameSingularSpoken;
    bool flagHasResultNamePluralSpoken;
    std::string storeResultNamePluralSpoken;
    bool flagHasResultNameSingularWritten;
    std::string storeResultNameSingularWritten;
    bool flagHasResultNamePluralWritten;
    std::string storeResultNamePluralWritten;
    bool flagHasSimilarResultsReturned;
    bool storeSimilarResultsReturned;
    bool flagHasSimilarResultLocalSearchCriteria;
    LocalSearchFilterSpecJSON * storeSimilarResultLocalSearchCriteria;
    bool flagHasMessageUserSimilarResultsReturned;
    bool storeMessageUserSimilarResultsReturned;
    bool flagHasSimilarResultNameSingularSpoken;
    std::string storeSimilarResultNameSingularSpoken;
    bool flagHasSimilarResultNamePluralSpoken;
    std::string storeSimilarResultNamePluralSpoken;
    bool flagHasSimilarResultNameSingularWritten;
    std::string storeSimilarResultNameSingularWritten;
    bool flagHasSimilarResultNamePluralWritten;
    std::string storeSimilarResultNamePluralWritten;
    bool flagHasLocalSearchQuestionsResponseSpoken;
    std::string storeLocalSearchQuestionsResponseSpoken;
    bool flagHasLocalSearchQuestionsResponseWritten;
    std::string storeLocalSearchQuestionsResponseWritten;
    bool flagHasLocalResults;
    std::vector< LocalResultJSON * > storeLocalResults;
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocalSearchInformationNuggetJSON(const LocalSearchInformationNuggetJSON &);
    LocalSearchInformationNuggetJSON & operator=(const LocalSearchInformationNuggetJSON &other);

    JSONValue * extraLocalSearchCommandKindToJSON(void) const;
    JSONValue * extraLocalSearchCriteriaToJSON(void) const;
    JSONValue * extraLocalSearchCriteriaIncrementalToJSON(void) const;
    JSONValue * extraLocationNotSupportedToJSON(void) const;
    JSONValue * extraResultNameSingularSpokenToJSON(void) const;
    JSONValue * extraResultNamePluralSpokenToJSON(void) const;
    JSONValue * extraResultNameSingularWrittenToJSON(void) const;
    JSONValue * extraResultNamePluralWrittenToJSON(void) const;
    JSONValue * extraSimilarResultsReturnedToJSON(void) const;
    JSONValue * extraSimilarResultLocalSearchCriteriaToJSON(void) const;
    JSONValue * extraMessageUserSimilarResultsReturnedToJSON(void) const;
    JSONValue * extraSimilarResultNameSingularSpokenToJSON(void) const;
    JSONValue * extraSimilarResultNamePluralSpokenToJSON(void) const;
    JSONValue * extraSimilarResultNameSingularWrittenToJSON(void) const;
    JSONValue * extraSimilarResultNamePluralWrittenToJSON(void) const;
    JSONValue * extraLocalSearchQuestionsResponseSpokenToJSON(void) const;
    JSONValue * extraLocalSearchQuestionsResponseWrittenToJSON(void) const;
    JSONValue * extraLocalResultsToJSON(void) const;
    JSONValue * extraAttributionToJSON(void) const;

    void  fromJSONLocalSearchCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocationNotSupported(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultNameSingularWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultNamePluralWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultsReturned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultLocalSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMessageUserSimilarResultsReturned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultNameSingularSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultNamePluralSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultNameSingularWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSimilarResultNamePluralWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchQuestionsResponseSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchQuestionsResponseWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalSearchInformationNuggetJSON(void);
    virtual ~LocalSearchInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasLocalSearchCommandKind(void) const;
    TypeLocalSearchCommandKind  getLocalSearchCommandKind(void);
    const TypeLocalSearchCommandKind  getLocalSearchCommandKind(void) const;
    const char * getLocalSearchCommandKindAsChars(void) const;
    std::string  getLocalSearchCommandKindAsString(void) const;
    bool  hasLocalSearchCriteria(void) const;
    LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void);
    const LocalSearchFilterSpecJSON *  getLocalSearchCriteria(void) const;
    bool  hasLocalSearchCriteriaIncremental(void) const;
    LocalSearchFilterSpecJSON *  getLocalSearchCriteriaIncremental(void);
    const LocalSearchFilterSpecJSON *  getLocalSearchCriteriaIncremental(void) const;
    bool  hasLocationNotSupported(void) const;
    bool  getLocationNotSupported(void);
    const bool  getLocationNotSupported(void) const;
    bool  hasResultNameSingularSpoken(void) const;
    std::string  getResultNameSingularSpoken(void);
    const std::string  getResultNameSingularSpoken(void) const;
    bool  hasResultNamePluralSpoken(void) const;
    std::string  getResultNamePluralSpoken(void);
    const std::string  getResultNamePluralSpoken(void) const;
    bool  hasResultNameSingularWritten(void) const;
    std::string  getResultNameSingularWritten(void);
    const std::string  getResultNameSingularWritten(void) const;
    bool  hasResultNamePluralWritten(void) const;
    std::string  getResultNamePluralWritten(void);
    const std::string  getResultNamePluralWritten(void) const;
    bool  hasSimilarResultsReturned(void) const;
    bool  getSimilarResultsReturned(void);
    const bool  getSimilarResultsReturned(void) const;
    bool  hasSimilarResultLocalSearchCriteria(void) const;
    LocalSearchFilterSpecJSON *  getSimilarResultLocalSearchCriteria(void);
    const LocalSearchFilterSpecJSON *  getSimilarResultLocalSearchCriteria(void) const;
    bool  hasMessageUserSimilarResultsReturned(void) const;
    bool  getMessageUserSimilarResultsReturned(void);
    const bool  getMessageUserSimilarResultsReturned(void) const;
    bool  hasSimilarResultNameSingularSpoken(void) const;
    std::string  getSimilarResultNameSingularSpoken(void);
    const std::string  getSimilarResultNameSingularSpoken(void) const;
    bool  hasSimilarResultNamePluralSpoken(void) const;
    std::string  getSimilarResultNamePluralSpoken(void);
    const std::string  getSimilarResultNamePluralSpoken(void) const;
    bool  hasSimilarResultNameSingularWritten(void) const;
    std::string  getSimilarResultNameSingularWritten(void);
    const std::string  getSimilarResultNameSingularWritten(void) const;
    bool  hasSimilarResultNamePluralWritten(void) const;
    std::string  getSimilarResultNamePluralWritten(void);
    const std::string  getSimilarResultNamePluralWritten(void) const;
    bool  hasLocalSearchQuestionsResponseSpoken(void) const;
    std::string  getLocalSearchQuestionsResponseSpoken(void);
    const std::string  getLocalSearchQuestionsResponseSpoken(void) const;
    bool  hasLocalSearchQuestionsResponseWritten(void) const;
    std::string  getLocalSearchQuestionsResponseWritten(void);
    const std::string  getLocalSearchQuestionsResponseWritten(void) const;
    bool  hasLocalResults(void) const;
    size_t  countOfLocalResults(void) const;
    LocalResultJSON *  elementOfLocalResults(size_t element_num);
    const LocalResultJSON *  elementOfLocalResults(size_t element_num) const;
    std::vector< LocalResultJSON * >  getLocalResults(void);
    const std::vector< LocalResultJSON * >  getLocalResults(void) const;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;

    virtual size_t extraLocalSearchInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocalSearchInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocalSearchInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocalSearchInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocalSearchInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocalSearchInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasLocalSearchCommandKind)
            ++result;
        if (flagHasLocalSearchCriteria)
            ++result;
        if (flagHasLocalSearchCriteriaIncremental)
            ++result;
        if (flagHasLocationNotSupported)
            ++result;
        if (flagHasResultNameSingularSpoken)
            ++result;
        if (flagHasResultNamePluralSpoken)
            ++result;
        if (flagHasResultNameSingularWritten)
            ++result;
        if (flagHasResultNamePluralWritten)
            ++result;
        if (flagHasSimilarResultsReturned)
            ++result;
        if (flagHasSimilarResultLocalSearchCriteria)
            ++result;
        if (flagHasMessageUserSimilarResultsReturned)
            ++result;
        if (flagHasSimilarResultNameSingularSpoken)
            ++result;
        if (flagHasSimilarResultNamePluralSpoken)
            ++result;
        if (flagHasSimilarResultNameSingularWritten)
            ++result;
        if (flagHasSimilarResultNamePluralWritten)
            ++result;
        if (flagHasLocalSearchQuestionsResponseSpoken)
            ++result;
        if (flagHasLocalSearchQuestionsResponseWritten)
            ++result;
        if (flagHasLocalResults)
            ++result;
        if (flagHasAttribution)
            ++result;
        result += extraLocalSearchInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return "LocalSearchCommandKind";
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return "LocalSearchCriteria";
            --remainder;
          }
        if (flagHasLocalSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return "LocalSearchCriteriaIncremental";
            --remainder;
          }
        if (flagHasLocationNotSupported)
          {
            if (remainder == 0)
                return "LocationNotSupported";
            --remainder;
          }
        if (flagHasResultNameSingularSpoken)
          {
            if (remainder == 0)
                return "ResultNameSingularSpoken";
            --remainder;
          }
        if (flagHasResultNamePluralSpoken)
          {
            if (remainder == 0)
                return "ResultNamePluralSpoken";
            --remainder;
          }
        if (flagHasResultNameSingularWritten)
          {
            if (remainder == 0)
                return "ResultNameSingularWritten";
            --remainder;
          }
        if (flagHasResultNamePluralWritten)
          {
            if (remainder == 0)
                return "ResultNamePluralWritten";
            --remainder;
          }
        if (flagHasSimilarResultsReturned)
          {
            if (remainder == 0)
                return "SimilarResultsReturned";
            --remainder;
          }
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            if (remainder == 0)
                return "SimilarResultLocalSearchCriteria";
            --remainder;
          }
        if (flagHasMessageUserSimilarResultsReturned)
          {
            if (remainder == 0)
                return "MessageUserSimilarResultsReturned";
            --remainder;
          }
        if (flagHasSimilarResultNameSingularSpoken)
          {
            if (remainder == 0)
                return "SimilarResultNameSingularSpoken";
            --remainder;
          }
        if (flagHasSimilarResultNamePluralSpoken)
          {
            if (remainder == 0)
                return "SimilarResultNamePluralSpoken";
            --remainder;
          }
        if (flagHasSimilarResultNameSingularWritten)
          {
            if (remainder == 0)
                return "SimilarResultNameSingularWritten";
            --remainder;
          }
        if (flagHasSimilarResultNamePluralWritten)
          {
            if (remainder == 0)
                return "SimilarResultNamePluralWritten";
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseSpoken)
          {
            if (remainder == 0)
                return "LocalSearchQuestionsResponseSpoken";
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseWritten)
          {
            if (remainder == 0)
                return "LocalSearchQuestionsResponseWritten";
            --remainder;
          }
        if (flagHasLocalResults)
          {
            if (remainder == 0)
                return "LocalResults";
            --remainder;
          }
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return "Attribution";
            --remainder;
          }
        return extraLocalSearchInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return extraLocalSearchCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaIncrementalToJSON();
            --remainder;
          }
        if (flagHasLocationNotSupported)
          {
            if (remainder == 0)
                return extraLocationNotSupportedToJSON();
            --remainder;
          }
        if (flagHasResultNameSingularSpoken)
          {
            if (remainder == 0)
                return extraResultNameSingularSpokenToJSON();
            --remainder;
          }
        if (flagHasResultNamePluralSpoken)
          {
            if (remainder == 0)
                return extraResultNamePluralSpokenToJSON();
            --remainder;
          }
        if (flagHasResultNameSingularWritten)
          {
            if (remainder == 0)
                return extraResultNameSingularWrittenToJSON();
            --remainder;
          }
        if (flagHasResultNamePluralWritten)
          {
            if (remainder == 0)
                return extraResultNamePluralWrittenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultsReturned)
          {
            if (remainder == 0)
                return extraSimilarResultsReturnedToJSON();
            --remainder;
          }
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraSimilarResultLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasMessageUserSimilarResultsReturned)
          {
            if (remainder == 0)
                return extraMessageUserSimilarResultsReturnedToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNameSingularSpoken)
          {
            if (remainder == 0)
                return extraSimilarResultNameSingularSpokenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNamePluralSpoken)
          {
            if (remainder == 0)
                return extraSimilarResultNamePluralSpokenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNameSingularWritten)
          {
            if (remainder == 0)
                return extraSimilarResultNameSingularWrittenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNamePluralWritten)
          {
            if (remainder == 0)
                return extraSimilarResultNamePluralWrittenToJSON();
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseSpoken)
          {
            if (remainder == 0)
                return extraLocalSearchQuestionsResponseSpokenToJSON();
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseWritten)
          {
            if (remainder == 0)
                return extraLocalSearchQuestionsResponseWrittenToJSON();
            --remainder;
          }
        if (flagHasLocalResults)
          {
            if (remainder == 0)
                return extraLocalResultsToJSON();
            --remainder;
          }
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        return extraLocalSearchInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasLocalSearchCommandKind)
          {
            if (remainder == 0)
                return extraLocalSearchCommandKindToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasLocalSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return extraLocalSearchCriteriaIncrementalToJSON();
            --remainder;
          }
        if (flagHasLocationNotSupported)
          {
            if (remainder == 0)
                return extraLocationNotSupportedToJSON();
            --remainder;
          }
        if (flagHasResultNameSingularSpoken)
          {
            if (remainder == 0)
                return extraResultNameSingularSpokenToJSON();
            --remainder;
          }
        if (flagHasResultNamePluralSpoken)
          {
            if (remainder == 0)
                return extraResultNamePluralSpokenToJSON();
            --remainder;
          }
        if (flagHasResultNameSingularWritten)
          {
            if (remainder == 0)
                return extraResultNameSingularWrittenToJSON();
            --remainder;
          }
        if (flagHasResultNamePluralWritten)
          {
            if (remainder == 0)
                return extraResultNamePluralWrittenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultsReturned)
          {
            if (remainder == 0)
                return extraSimilarResultsReturnedToJSON();
            --remainder;
          }
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            if (remainder == 0)
                return extraSimilarResultLocalSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasMessageUserSimilarResultsReturned)
          {
            if (remainder == 0)
                return extraMessageUserSimilarResultsReturnedToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNameSingularSpoken)
          {
            if (remainder == 0)
                return extraSimilarResultNameSingularSpokenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNamePluralSpoken)
          {
            if (remainder == 0)
                return extraSimilarResultNamePluralSpokenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNameSingularWritten)
          {
            if (remainder == 0)
                return extraSimilarResultNameSingularWrittenToJSON();
            --remainder;
          }
        if (flagHasSimilarResultNamePluralWritten)
          {
            if (remainder == 0)
                return extraSimilarResultNamePluralWrittenToJSON();
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseSpoken)
          {
            if (remainder == 0)
                return extraLocalSearchQuestionsResponseSpokenToJSON();
            --remainder;
          }
        if (flagHasLocalSearchQuestionsResponseWritten)
          {
            if (remainder == 0)
                return extraLocalSearchQuestionsResponseWrittenToJSON();
            --remainder;
          }
        if (flagHasLocalResults)
          {
            if (remainder == 0)
                return extraLocalResultsToJSON();
            --remainder;
          }
        if (flagHasAttribution)
          {
            if (remainder == 0)
                return extraAttributionToJSON();
            --remainder;
          }
        return extraLocalSearchInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ttribution") == 0)
                    return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                break;
            case 'L':
                if (strncmp(&(field_name[1]), "oca", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'l':
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[6]), "esults") == 0)
                                        return (flagHasLocalResults ? extraLocalResultsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strncmp(&(field_name[6]), "earch", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 'C':
                                                switch ((unsigned char)(field_name[12]))
                                                  {
                                                    case 'o':
                                                        if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                                            return (flagHasLocalSearchCommandKind ? extraLocalSearchCommandKindToJSON() : NULL);
                                                        break;
                                                    case 'r':
                                                        if (strncmp(&(field_name[13]), "iteria", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(field_name[19]))
                                                              {
                                                                case 0:
                                                                    return (flagHasLocalSearchCriteria ? extraLocalSearchCriteriaToJSON() : NULL);
                                                                case 'I':
                                                                    if (strcmp(&(field_name[20]), "ncremental") == 0)
                                                                        return (flagHasLocalSearchCriteriaIncremental ? extraLocalSearchCriteriaIncrementalToJSON() : NULL);
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(field_name[12]), "uestionsResponse", 16) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[28]))
                                                      {
                                                        case 'S':
                                                            if (strcmp(&(field_name[29]), "poken") == 0)
                                                                return (flagHasLocalSearchQuestionsResponseSpoken ? extraLocalSearchQuestionsResponseSpokenToJSON() : NULL);
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(field_name[29]), "ritten") == 0)
                                                                return (flagHasLocalSearchQuestionsResponseWritten ? extraLocalSearchQuestionsResponseWrittenToJSON() : NULL);
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[5]), "ionNotSupported") == 0)
                                return (flagHasLocationNotSupported ? extraLocationNotSupportedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "essageUserSimilarResultsReturned") == 0)
                    return (flagHasMessageUserSimilarResultsReturned ? extraMessageUserSimilarResultsReturnedToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "esultName", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'P':
                            if (strncmp(&(field_name[11]), "lural", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[16]))
                                  {
                                    case 'S':
                                        if (strcmp(&(field_name[17]), "poken") == 0)
                                            return (flagHasResultNamePluralSpoken ? extraResultNamePluralSpokenToJSON() : NULL);
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[17]), "ritten") == 0)
                                            return (flagHasResultNamePluralWritten ? extraResultNamePluralWrittenToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(field_name[11]), "ingular", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 'S':
                                        if (strcmp(&(field_name[19]), "poken") == 0)
                                            return (flagHasResultNameSingularSpoken ? extraResultNameSingularSpokenToJSON() : NULL);
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[19]), "ritten") == 0)
                                            return (flagHasResultNameSingularWritten ? extraResultNameSingularWrittenToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "imilarResult", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[13]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[14]), "ocalSearchCriteria") == 0)
                                return (flagHasSimilarResultLocalSearchCriteria ? extraSimilarResultLocalSearchCriteriaToJSON() : NULL);
                            break;
                        case 'N':
                            if (strncmp(&(field_name[14]), "ame", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[17]))
                                  {
                                    case 'P':
                                        if (strncmp(&(field_name[18]), "lural", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[23]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(field_name[24]), "poken") == 0)
                                                        return (flagHasSimilarResultNamePluralSpoken ? extraSimilarResultNamePluralSpokenToJSON() : NULL);
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(field_name[24]), "ritten") == 0)
                                                        return (flagHasSimilarResultNamePluralWritten ? extraSimilarResultNamePluralWrittenToJSON() : NULL);
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[18]), "ingular", 7) == 0)
                                          {
                                            switch ((unsigned char)(field_name[25]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(field_name[26]), "poken") == 0)
                                                        return (flagHasSimilarResultNameSingularSpoken ? extraSimilarResultNameSingularSpokenToJSON() : NULL);
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(field_name[26]), "ritten") == 0)
                                                        return (flagHasSimilarResultNameSingularWritten ? extraSimilarResultNameSingularWrittenToJSON() : NULL);
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 's':
                            if (strcmp(&(field_name[14]), "Returned") == 0)
                                return (flagHasSimilarResultsReturned ? extraSimilarResultsReturnedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraLocalSearchInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "ttribution") == 0)
                    return (flagHasAttribution ? extraAttributionToJSON() : NULL);
                break;
            case 'L':
                if (strncmp(&(field_name[1]), "oca", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'l':
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[6]), "esults") == 0)
                                        return (flagHasLocalResults ? extraLocalResultsToJSON() : NULL);
                                    break;
                                case 'S':
                                    if (strncmp(&(field_name[6]), "earch", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 'C':
                                                switch ((unsigned char)(field_name[12]))
                                                  {
                                                    case 'o':
                                                        if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                                            return (flagHasLocalSearchCommandKind ? extraLocalSearchCommandKindToJSON() : NULL);
                                                        break;
                                                    case 'r':
                                                        if (strncmp(&(field_name[13]), "iteria", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(field_name[19]))
                                                              {
                                                                case 0:
                                                                    return (flagHasLocalSearchCriteria ? extraLocalSearchCriteriaToJSON() : NULL);
                                                                case 'I':
                                                                    if (strcmp(&(field_name[20]), "ncremental") == 0)
                                                                        return (flagHasLocalSearchCriteriaIncremental ? extraLocalSearchCriteriaIncrementalToJSON() : NULL);
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(field_name[12]), "uestionsResponse", 16) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[28]))
                                                      {
                                                        case 'S':
                                                            if (strcmp(&(field_name[29]), "poken") == 0)
                                                                return (flagHasLocalSearchQuestionsResponseSpoken ? extraLocalSearchQuestionsResponseSpokenToJSON() : NULL);
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(field_name[29]), "ritten") == 0)
                                                                return (flagHasLocalSearchQuestionsResponseWritten ? extraLocalSearchQuestionsResponseWrittenToJSON() : NULL);
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[5]), "ionNotSupported") == 0)
                                return (flagHasLocationNotSupported ? extraLocationNotSupportedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "essageUserSimilarResultsReturned") == 0)
                    return (flagHasMessageUserSimilarResultsReturned ? extraMessageUserSimilarResultsReturnedToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "esultName", 9) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'P':
                            if (strncmp(&(field_name[11]), "lural", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[16]))
                                  {
                                    case 'S':
                                        if (strcmp(&(field_name[17]), "poken") == 0)
                                            return (flagHasResultNamePluralSpoken ? extraResultNamePluralSpokenToJSON() : NULL);
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[17]), "ritten") == 0)
                                            return (flagHasResultNamePluralWritten ? extraResultNamePluralWrittenToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(field_name[11]), "ingular", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 'S':
                                        if (strcmp(&(field_name[19]), "poken") == 0)
                                            return (flagHasResultNameSingularSpoken ? extraResultNameSingularSpokenToJSON() : NULL);
                                        break;
                                    case 'W':
                                        if (strcmp(&(field_name[19]), "ritten") == 0)
                                            return (flagHasResultNameSingularWritten ? extraResultNameSingularWrittenToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "imilarResult", 12) == 0)
                  {
                    switch ((unsigned char)(field_name[13]))
                      {
                        case 'L':
                            if (strcmp(&(field_name[14]), "ocalSearchCriteria") == 0)
                                return (flagHasSimilarResultLocalSearchCriteria ? extraSimilarResultLocalSearchCriteriaToJSON() : NULL);
                            break;
                        case 'N':
                            if (strncmp(&(field_name[14]), "ame", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[17]))
                                  {
                                    case 'P':
                                        if (strncmp(&(field_name[18]), "lural", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[23]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(field_name[24]), "poken") == 0)
                                                        return (flagHasSimilarResultNamePluralSpoken ? extraSimilarResultNamePluralSpokenToJSON() : NULL);
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(field_name[24]), "ritten") == 0)
                                                        return (flagHasSimilarResultNamePluralWritten ? extraSimilarResultNamePluralWrittenToJSON() : NULL);
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[18]), "ingular", 7) == 0)
                                          {
                                            switch ((unsigned char)(field_name[25]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(field_name[26]), "poken") == 0)
                                                        return (flagHasSimilarResultNameSingularSpoken ? extraSimilarResultNameSingularSpokenToJSON() : NULL);
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(field_name[26]), "ritten") == 0)
                                                        return (flagHasSimilarResultNameSingularWritten ? extraSimilarResultNameSingularWrittenToJSON() : NULL);
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 's':
                            if (strcmp(&(field_name[14]), "Returned") == 0)
                                return (flagHasSimilarResultsReturned ? extraSimilarResultsReturnedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraLocalSearchInformationNuggetLookup(field_name);
      }

    void setLocalSearchCommandKind(void)
      {
        flagHasLocalSearchCommandKind = true;
      }
    void setLocalSearchCommandKind(TypeLocalSearchCommandKind new_value)
      {
        setLocalSearchCommandKind();
      }
    void setLocalSearchCommandKind(const char *chars)
      {
        setLocalSearchCommandKind(stringToLocalSearchCommandKind(chars));
      }
    void setLocalSearchCommandKind(std::string the_string)
      {
        setLocalSearchCommandKind(stringToLocalSearchCommandKind(the_string.c_str()));
      }
    void unsetLocalSearchCommandKind(void)
      {
        flagHasLocalSearchCommandKind = false;
      }
    void setLocalSearchCriteria(LocalSearchFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocalSearchCriteria)
          {
            storeLocalSearchCriteria->remove_reference();
          }
        flagHasLocalSearchCriteria = true;
        storeLocalSearchCriteria = new_value;
      }
    void unsetLocalSearchCriteria(void)
      {
        if (flagHasLocalSearchCriteria)
          {
            storeLocalSearchCriteria->remove_reference();
          }
        flagHasLocalSearchCriteria = false;
      }
    void setLocalSearchCriteriaIncremental(LocalSearchFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocalSearchCriteriaIncremental)
          {
            storeLocalSearchCriteriaIncremental->remove_reference();
          }
        flagHasLocalSearchCriteriaIncremental = true;
        storeLocalSearchCriteriaIncremental = new_value;
      }
    void unsetLocalSearchCriteriaIncremental(void)
      {
        if (flagHasLocalSearchCriteriaIncremental)
          {
            storeLocalSearchCriteriaIncremental->remove_reference();
          }
        flagHasLocalSearchCriteriaIncremental = false;
      }
    void setLocationNotSupported(bool new_value)
      {
        flagHasLocationNotSupported = true;
        storeLocationNotSupported = new_value;
      }
    void unsetLocationNotSupported(void)
      {
        flagHasLocationNotSupported = false;
      }
    void setResultNameSingularSpoken(std::string new_value)
      {
        flagHasResultNameSingularSpoken = true;
        storeResultNameSingularSpoken = new_value;
      }
    void unsetResultNameSingularSpoken(void)
      {
        flagHasResultNameSingularSpoken = false;
      }
    void setResultNamePluralSpoken(std::string new_value)
      {
        flagHasResultNamePluralSpoken = true;
        storeResultNamePluralSpoken = new_value;
      }
    void unsetResultNamePluralSpoken(void)
      {
        flagHasResultNamePluralSpoken = false;
      }
    void setResultNameSingularWritten(std::string new_value)
      {
        flagHasResultNameSingularWritten = true;
        storeResultNameSingularWritten = new_value;
      }
    void unsetResultNameSingularWritten(void)
      {
        flagHasResultNameSingularWritten = false;
      }
    void setResultNamePluralWritten(std::string new_value)
      {
        flagHasResultNamePluralWritten = true;
        storeResultNamePluralWritten = new_value;
      }
    void unsetResultNamePluralWritten(void)
      {
        flagHasResultNamePluralWritten = false;
      }
    void setSimilarResultsReturned(bool new_value)
      {
        flagHasSimilarResultsReturned = true;
        storeSimilarResultsReturned = new_value;
      }
    void unsetSimilarResultsReturned(void)
      {
        flagHasSimilarResultsReturned = false;
      }
    void setSimilarResultLocalSearchCriteria(LocalSearchFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            storeSimilarResultLocalSearchCriteria->remove_reference();
          }
        flagHasSimilarResultLocalSearchCriteria = true;
        storeSimilarResultLocalSearchCriteria = new_value;
      }
    void unsetSimilarResultLocalSearchCriteria(void)
      {
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            storeSimilarResultLocalSearchCriteria->remove_reference();
          }
        flagHasSimilarResultLocalSearchCriteria = false;
      }
    void setMessageUserSimilarResultsReturned(bool new_value)
      {
        flagHasMessageUserSimilarResultsReturned = true;
        storeMessageUserSimilarResultsReturned = new_value;
      }
    void unsetMessageUserSimilarResultsReturned(void)
      {
        flagHasMessageUserSimilarResultsReturned = false;
      }
    void setSimilarResultNameSingularSpoken(std::string new_value)
      {
        flagHasSimilarResultNameSingularSpoken = true;
        storeSimilarResultNameSingularSpoken = new_value;
      }
    void unsetSimilarResultNameSingularSpoken(void)
      {
        flagHasSimilarResultNameSingularSpoken = false;
      }
    void setSimilarResultNamePluralSpoken(std::string new_value)
      {
        flagHasSimilarResultNamePluralSpoken = true;
        storeSimilarResultNamePluralSpoken = new_value;
      }
    void unsetSimilarResultNamePluralSpoken(void)
      {
        flagHasSimilarResultNamePluralSpoken = false;
      }
    void setSimilarResultNameSingularWritten(std::string new_value)
      {
        flagHasSimilarResultNameSingularWritten = true;
        storeSimilarResultNameSingularWritten = new_value;
      }
    void unsetSimilarResultNameSingularWritten(void)
      {
        flagHasSimilarResultNameSingularWritten = false;
      }
    void setSimilarResultNamePluralWritten(std::string new_value)
      {
        flagHasSimilarResultNamePluralWritten = true;
        storeSimilarResultNamePluralWritten = new_value;
      }
    void unsetSimilarResultNamePluralWritten(void)
      {
        flagHasSimilarResultNamePluralWritten = false;
      }
    void setLocalSearchQuestionsResponseSpoken(std::string new_value)
      {
        flagHasLocalSearchQuestionsResponseSpoken = true;
        storeLocalSearchQuestionsResponseSpoken = new_value;
      }
    void unsetLocalSearchQuestionsResponseSpoken(void)
      {
        flagHasLocalSearchQuestionsResponseSpoken = false;
      }
    void setLocalSearchQuestionsResponseWritten(std::string new_value)
      {
        flagHasLocalSearchQuestionsResponseWritten = true;
        storeLocalSearchQuestionsResponseWritten = new_value;
      }
    void unsetLocalSearchQuestionsResponseWritten(void)
      {
        flagHasLocalSearchQuestionsResponseWritten = false;
      }
    void initLocalResults(void)
      {
        if (flagHasLocalResults)
          {
            for (size_t num2 = 0; num2 < storeLocalResults.size(); ++num2)
              {
                storeLocalResults[num2]->remove_reference();
              }
          }
        flagHasLocalResults = true;
        storeLocalResults.clear();
      }
    void appendLocalResults(LocalResultJSON * to_append)
      {
        if (!flagHasLocalResults)
          {
            flagHasLocalResults = true;
            storeLocalResults.clear();
          }
        assert(flagHasLocalResults);
        to_append->add_reference();
        storeLocalResults.push_back(to_append);
      }
    void unsetLocalResults(void)
      {
        if (flagHasLocalResults)
          {
            for (size_t num3 = 0; num3 < storeLocalResults.size(); ++num3)
              {
                storeLocalResults[num3]->remove_reference();
              }
          }
        flagHasLocalResults = false;
        storeLocalResults.clear();
      }
    void setAttribution(AttributionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = false;
      }

    virtual void extraLocalSearchInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocalSearchInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocalSearchInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraLocalSearchInformationNuggetAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ttribution") == 0)
                    {
                    fromJSONAttribution(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strncmp(&(key[1]), "oca", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'l':
                            switch ((unsigned char)(key[5]))
                              {
                                case 'R':
                                    if (strcmp(&(key[6]), "esults") == 0)
                                        {
                                        fromJSONLocalResults(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strncmp(&(key[6]), "earch", 5) == 0)
                                      {
                                        switch ((unsigned char)(key[11]))
                                          {
                                            case 'C':
                                                switch ((unsigned char)(key[12]))
                                                  {
                                                    case 'o':
                                                        if (strcmp(&(key[13]), "mmandKind") == 0)
                                                            {
                                                            fromJSONLocalSearchCommandKind(new_component, false);
                                                            return;
                                                            }
                                                        break;
                                                    case 'r':
                                                        if (strncmp(&(key[13]), "iteria", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(key[19]))
                                                              {
                                                                case 0:
                                                                    {
                                                                    fromJSONLocalSearchCriteria(new_component, false);
                                                                    return;
                                                                    }
                                                                case 'I':
                                                                    if (strcmp(&(key[20]), "ncremental") == 0)
                                                                        {
                                                                        fromJSONLocalSearchCriteriaIncremental(new_component, false);
                                                                        return;
                                                                        }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(key[12]), "uestionsResponse", 16) == 0)
                                                  {
                                                    switch ((unsigned char)(key[28]))
                                                      {
                                                        case 'S':
                                                            if (strcmp(&(key[29]), "poken") == 0)
                                                                {
                                                                fromJSONLocalSearchQuestionsResponseSpoken(new_component, false);
                                                                return;
                                                                }
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(key[29]), "ritten") == 0)
                                                                {
                                                                fromJSONLocalSearchQuestionsResponseWritten(new_component, false);
                                                                return;
                                                                }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(key[5]), "ionNotSupported") == 0)
                                {
                                fromJSONLocationNotSupported(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(key[1]), "essageUserSimilarResultsReturned") == 0)
                    {
                    fromJSONMessageUserSimilarResultsReturned(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "esultName", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'P':
                            if (strncmp(&(key[11]), "lural", 5) == 0)
                              {
                                switch ((unsigned char)(key[16]))
                                  {
                                    case 'S':
                                        if (strcmp(&(key[17]), "poken") == 0)
                                            {
                                            fromJSONResultNamePluralSpoken(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'W':
                                        if (strcmp(&(key[17]), "ritten") == 0)
                                            {
                                            fromJSONResultNamePluralWritten(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(key[11]), "ingular", 7) == 0)
                              {
                                switch ((unsigned char)(key[18]))
                                  {
                                    case 'S':
                                        if (strcmp(&(key[19]), "poken") == 0)
                                            {
                                            fromJSONResultNameSingularSpoken(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'W':
                                        if (strcmp(&(key[19]), "ritten") == 0)
                                            {
                                            fromJSONResultNameSingularWritten(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "imilarResult", 12) == 0)
                  {
                    switch ((unsigned char)(key[13]))
                      {
                        case 'L':
                            if (strcmp(&(key[14]), "ocalSearchCriteria") == 0)
                                {
                                fromJSONSimilarResultLocalSearchCriteria(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strncmp(&(key[14]), "ame", 3) == 0)
                              {
                                switch ((unsigned char)(key[17]))
                                  {
                                    case 'P':
                                        if (strncmp(&(key[18]), "lural", 5) == 0)
                                          {
                                            switch ((unsigned char)(key[23]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(key[24]), "poken") == 0)
                                                        {
                                                        fromJSONSimilarResultNamePluralSpoken(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(key[24]), "ritten") == 0)
                                                        {
                                                        fromJSONSimilarResultNamePluralWritten(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(key[18]), "ingular", 7) == 0)
                                          {
                                            switch ((unsigned char)(key[25]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(key[26]), "poken") == 0)
                                                        {
                                                        fromJSONSimilarResultNameSingularSpoken(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(key[26]), "ritten") == 0)
                                                        {
                                                        fromJSONSimilarResultNameSingularWritten(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 's':
                            if (strcmp(&(key[14]), "Returned") == 0)
                                {
                                fromJSONSimilarResultsReturned(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraLocalSearchInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "ttribution") == 0)
                    {
                    fromJSONAttribution(new_component, false);
                    return;
                    }
                break;
            case 'L':
                if (strncmp(&(key[1]), "oca", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'l':
                            switch ((unsigned char)(key[5]))
                              {
                                case 'R':
                                    if (strcmp(&(key[6]), "esults") == 0)
                                        {
                                        fromJSONLocalResults(new_component, false);
                                        return;
                                        }
                                    break;
                                case 'S':
                                    if (strncmp(&(key[6]), "earch", 5) == 0)
                                      {
                                        switch ((unsigned char)(key[11]))
                                          {
                                            case 'C':
                                                switch ((unsigned char)(key[12]))
                                                  {
                                                    case 'o':
                                                        if (strcmp(&(key[13]), "mmandKind") == 0)
                                                            {
                                                            fromJSONLocalSearchCommandKind(new_component, false);
                                                            return;
                                                            }
                                                        break;
                                                    case 'r':
                                                        if (strncmp(&(key[13]), "iteria", 6) == 0)
                                                          {
                                                            switch ((unsigned char)(key[19]))
                                                              {
                                                                case 0:
                                                                    {
                                                                    fromJSONLocalSearchCriteria(new_component, false);
                                                                    return;
                                                                    }
                                                                case 'I':
                                                                    if (strcmp(&(key[20]), "ncremental") == 0)
                                                                        {
                                                                        fromJSONLocalSearchCriteriaIncremental(new_component, false);
                                                                        return;
                                                                        }
                                                                    break;
                                                                default:
                                                                    break;
                                                              }
                                                          }
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'Q':
                                                if (strncmp(&(key[12]), "uestionsResponse", 16) == 0)
                                                  {
                                                    switch ((unsigned char)(key[28]))
                                                      {
                                                        case 'S':
                                                            if (strcmp(&(key[29]), "poken") == 0)
                                                                {
                                                                fromJSONLocalSearchQuestionsResponseSpoken(new_component, false);
                                                                return;
                                                                }
                                                            break;
                                                        case 'W':
                                                            if (strcmp(&(key[29]), "ritten") == 0)
                                                                {
                                                                fromJSONLocalSearchQuestionsResponseWritten(new_component, false);
                                                                return;
                                                                }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                  }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(key[5]), "ionNotSupported") == 0)
                                {
                                fromJSONLocationNotSupported(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'M':
                if (strcmp(&(key[1]), "essageUserSimilarResultsReturned") == 0)
                    {
                    fromJSONMessageUserSimilarResultsReturned(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strncmp(&(key[1]), "esultName", 9) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'P':
                            if (strncmp(&(key[11]), "lural", 5) == 0)
                              {
                                switch ((unsigned char)(key[16]))
                                  {
                                    case 'S':
                                        if (strcmp(&(key[17]), "poken") == 0)
                                            {
                                            fromJSONResultNamePluralSpoken(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'W':
                                        if (strcmp(&(key[17]), "ritten") == 0)
                                            {
                                            fromJSONResultNamePluralWritten(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'S':
                            if (strncmp(&(key[11]), "ingular", 7) == 0)
                              {
                                switch ((unsigned char)(key[18]))
                                  {
                                    case 'S':
                                        if (strcmp(&(key[19]), "poken") == 0)
                                            {
                                            fromJSONResultNameSingularSpoken(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'W':
                                        if (strcmp(&(key[19]), "ritten") == 0)
                                            {
                                            fromJSONResultNameSingularWritten(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "imilarResult", 12) == 0)
                  {
                    switch ((unsigned char)(key[13]))
                      {
                        case 'L':
                            if (strcmp(&(key[14]), "ocalSearchCriteria") == 0)
                                {
                                fromJSONSimilarResultLocalSearchCriteria(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strncmp(&(key[14]), "ame", 3) == 0)
                              {
                                switch ((unsigned char)(key[17]))
                                  {
                                    case 'P':
                                        if (strncmp(&(key[18]), "lural", 5) == 0)
                                          {
                                            switch ((unsigned char)(key[23]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(key[24]), "poken") == 0)
                                                        {
                                                        fromJSONSimilarResultNamePluralSpoken(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(key[24]), "ritten") == 0)
                                                        {
                                                        fromJSONSimilarResultNamePluralWritten(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strncmp(&(key[18]), "ingular", 7) == 0)
                                          {
                                            switch ((unsigned char)(key[25]))
                                              {
                                                case 'S':
                                                    if (strcmp(&(key[26]), "poken") == 0)
                                                        {
                                                        fromJSONSimilarResultNameSingularSpoken(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(key[26]), "ritten") == 0)
                                                        {
                                                        fromJSONSimilarResultNameSingularWritten(new_component, false);
                                                        return;
                                                        }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 's':
                            if (strcmp(&(key[14]), "Returned") == 0)
                                {
                                fromJSONSimilarResultsReturned(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraLocalSearchInformationNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasLocalSearchCommandKind);
        handler->start_pair("LocalSearchCommandKind");
        handler->string_value("ShowList");
        if (flagHasLocalSearchCriteria)
          {
            handler->start_pair("LocalSearchCriteria");
            storeLocalSearchCriteria->write_as_json(handler);
          }
        if (flagHasLocalSearchCriteriaIncremental)
          {
            handler->start_pair("LocalSearchCriteriaIncremental");
            storeLocalSearchCriteriaIncremental->write_as_json(handler);
          }
        if (flagHasLocationNotSupported)
          {
            handler->start_pair("LocationNotSupported");
            handler->boolean_value(storeLocationNotSupported);
          }
        assert(flagHasResultNameSingularSpoken);
        handler->start_pair("ResultNameSingularSpoken");
        handler->string_value(storeResultNameSingularSpoken);
        assert(flagHasResultNamePluralSpoken);
        handler->start_pair("ResultNamePluralSpoken");
        handler->string_value(storeResultNamePluralSpoken);
        assert(flagHasResultNameSingularWritten);
        handler->start_pair("ResultNameSingularWritten");
        handler->string_value(storeResultNameSingularWritten);
        assert(flagHasResultNamePluralWritten);
        handler->start_pair("ResultNamePluralWritten");
        handler->string_value(storeResultNamePluralWritten);
        if (flagHasSimilarResultsReturned)
          {
            handler->start_pair("SimilarResultsReturned");
            handler->boolean_value(storeSimilarResultsReturned);
          }
        if (flagHasSimilarResultLocalSearchCriteria)
          {
            handler->start_pair("SimilarResultLocalSearchCriteria");
            storeSimilarResultLocalSearchCriteria->write_as_json(handler);
          }
        if (flagHasMessageUserSimilarResultsReturned)
          {
            handler->start_pair("MessageUserSimilarResultsReturned");
            handler->boolean_value(storeMessageUserSimilarResultsReturned);
          }
        if (flagHasSimilarResultNameSingularSpoken)
          {
            handler->start_pair("SimilarResultNameSingularSpoken");
            handler->string_value(storeSimilarResultNameSingularSpoken);
          }
        if (flagHasSimilarResultNamePluralSpoken)
          {
            handler->start_pair("SimilarResultNamePluralSpoken");
            handler->string_value(storeSimilarResultNamePluralSpoken);
          }
        if (flagHasSimilarResultNameSingularWritten)
          {
            handler->start_pair("SimilarResultNameSingularWritten");
            handler->string_value(storeSimilarResultNameSingularWritten);
          }
        if (flagHasSimilarResultNamePluralWritten)
          {
            handler->start_pair("SimilarResultNamePluralWritten");
            handler->string_value(storeSimilarResultNamePluralWritten);
          }
        if (flagHasLocalSearchQuestionsResponseSpoken)
          {
            handler->start_pair("LocalSearchQuestionsResponseSpoken");
            handler->string_value(storeLocalSearchQuestionsResponseSpoken);
          }
        if (flagHasLocalSearchQuestionsResponseWritten)
          {
            handler->start_pair("LocalSearchQuestionsResponseWritten");
            handler->string_value(storeLocalSearchQuestionsResponseWritten);
          }
        assert(flagHasLocalResults);
        handler->start_pair("LocalResults");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeLocalResults.size(); ++num1)
          {
            storeLocalResults[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasAttribution);
        handler->start_pair("Attribution");
        storeAttribution->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLocalSearchCommandKind()))
          {
            return "When parsing the object for %what%, the \"LocalSearchCommandKind\" field was missing.";
          }
        if (!(hasResultNameSingularSpoken()))
          {
            return "When parsing the object for %what%, the \"ResultNameSingularSpoken\" field was missing.";
          }
        if (!(hasResultNamePluralSpoken()))
          {
            return "When parsing the object for %what%, the \"ResultNamePluralSpoken\" field was missing.";
          }
        if (!(hasResultNameSingularWritten()))
          {
            return "When parsing the object for %what%, the \"ResultNameSingularWritten\" field was missing.";
          }
        if (!(hasResultNamePluralWritten()))
          {
            return "When parsing the object for %what%, the \"ResultNamePluralWritten\" field was missing.";
          }
        if (!(hasLocalResults()))
          {
            return "When parsing the object for %what%, the \"LocalResults\" field was missing.";
          }
        if (!(hasAttribution()))
          {
            return "When parsing the object for %what%, the \"Attribution\" field was missing.";
          }
        return NULL;
      }

    static LocalSearchInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalSearchInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalSearchInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchInformationNuggetJSON>, LocalSearchInformationNuggetJSON *, bool> generator("Type LocalSearchInformationNugget", ignore_extras);
            parse_json_value(text, "Text for LocalSearchInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalSearchInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalSearchInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchInformationNuggetJSON>, LocalSearchInformationNuggetJSON *, bool> generator("Type LocalSearchInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
    class FieldGeneratorLocalSearchCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLocalSearchCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLocalSearchCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLocalSearchCommandKind(result));
              }
            virtual void handle_result(TypeLocalSearchCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLocalSearchCommandKind, TypeLocalSearchCommandKind, TypeLocalSearchCommandKind > fieldGeneratorLocalSearchCommandKind;
        JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorLocalSearchCriteria;
        JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorLocalSearchCriteriaIncremental;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorLocationNotSupported;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultNameSingularSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultNamePluralSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultNameSingularWritten;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultNamePluralWritten;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSimilarResultsReturned;
        JSONHoldingGenerator<LocalSearchFilterSpecJSON::Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool > fieldGeneratorSimilarResultLocalSearchCriteria;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMessageUserSimilarResultsReturned;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSimilarResultNameSingularSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSimilarResultNamePluralSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSimilarResultNameSingularWritten;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSimilarResultNamePluralWritten;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocalSearchQuestionsResponseSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocalSearchQuestionsResponseWritten;
        JSONHoldingArrayGenerator<LocalResultJSON::Generator, RCHandle<LocalResultJSON>, LocalResultJSON *, bool > fieldGeneratorLocalResults;
        JSONHoldingGenerator<AttributionJSON::Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool > fieldGeneratorAttribution;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "LocalSearch") == 0))
                throw("The key field has a value other than `LocalSearch'.");
            LocalSearchInformationNuggetJSON *result = new LocalSearchInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<LocalSearchInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalSearchInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((LocalSearchInformationNuggetJSON *)new_result);
          }
        void finish(LocalSearchInformationNuggetJSON *result)
          {
            if (fieldGeneratorLocalSearchCommandKind.have_value)
              {
                result->setLocalSearchCommandKind();
                fieldGeneratorLocalSearchCommandKind.have_value = false;
              }
            else if (!(result->hasLocalSearchCommandKind()))
              {
                error("When parsing the object for %what%, the \"LocalSearchCommandKind\" field was missing.");
              }
            if (fieldGeneratorLocalSearchCriteria.have_value)
              {
                result->setLocalSearchCriteria(fieldGeneratorLocalSearchCriteria.value.referenced());
                fieldGeneratorLocalSearchCriteria.have_value = false;
              }
            if (fieldGeneratorLocalSearchCriteriaIncremental.have_value)
              {
                result->setLocalSearchCriteriaIncremental(fieldGeneratorLocalSearchCriteriaIncremental.value.referenced());
                fieldGeneratorLocalSearchCriteriaIncremental.have_value = false;
              }
            if (fieldGeneratorLocationNotSupported.have_value)
              {
                result->setLocationNotSupported(fieldGeneratorLocationNotSupported.value);
                fieldGeneratorLocationNotSupported.have_value = false;
              }
            if (fieldGeneratorResultNameSingularSpoken.have_value)
              {
                result->setResultNameSingularSpoken(fieldGeneratorResultNameSingularSpoken.value);
                fieldGeneratorResultNameSingularSpoken.have_value = false;
              }
            else if (!(result->hasResultNameSingularSpoken()))
              {
                error("When parsing the object for %what%, the \"ResultNameSingularSpoken\" field was missing.");
              }
            if (fieldGeneratorResultNamePluralSpoken.have_value)
              {
                result->setResultNamePluralSpoken(fieldGeneratorResultNamePluralSpoken.value);
                fieldGeneratorResultNamePluralSpoken.have_value = false;
              }
            else if (!(result->hasResultNamePluralSpoken()))
              {
                error("When parsing the object for %what%, the \"ResultNamePluralSpoken\" field was missing.");
              }
            if (fieldGeneratorResultNameSingularWritten.have_value)
              {
                result->setResultNameSingularWritten(fieldGeneratorResultNameSingularWritten.value);
                fieldGeneratorResultNameSingularWritten.have_value = false;
              }
            else if (!(result->hasResultNameSingularWritten()))
              {
                error("When parsing the object for %what%, the \"ResultNameSingularWritten\" field was missing.");
              }
            if (fieldGeneratorResultNamePluralWritten.have_value)
              {
                result->setResultNamePluralWritten(fieldGeneratorResultNamePluralWritten.value);
                fieldGeneratorResultNamePluralWritten.have_value = false;
              }
            else if (!(result->hasResultNamePluralWritten()))
              {
                error("When parsing the object for %what%, the \"ResultNamePluralWritten\" field was missing.");
              }
            if (fieldGeneratorSimilarResultsReturned.have_value)
              {
                result->setSimilarResultsReturned(fieldGeneratorSimilarResultsReturned.value);
                fieldGeneratorSimilarResultsReturned.have_value = false;
              }
            if (fieldGeneratorSimilarResultLocalSearchCriteria.have_value)
              {
                result->setSimilarResultLocalSearchCriteria(fieldGeneratorSimilarResultLocalSearchCriteria.value.referenced());
                fieldGeneratorSimilarResultLocalSearchCriteria.have_value = false;
              }
            if (fieldGeneratorMessageUserSimilarResultsReturned.have_value)
              {
                result->setMessageUserSimilarResultsReturned(fieldGeneratorMessageUserSimilarResultsReturned.value);
                fieldGeneratorMessageUserSimilarResultsReturned.have_value = false;
              }
            if (fieldGeneratorSimilarResultNameSingularSpoken.have_value)
              {
                result->setSimilarResultNameSingularSpoken(fieldGeneratorSimilarResultNameSingularSpoken.value);
                fieldGeneratorSimilarResultNameSingularSpoken.have_value = false;
              }
            if (fieldGeneratorSimilarResultNamePluralSpoken.have_value)
              {
                result->setSimilarResultNamePluralSpoken(fieldGeneratorSimilarResultNamePluralSpoken.value);
                fieldGeneratorSimilarResultNamePluralSpoken.have_value = false;
              }
            if (fieldGeneratorSimilarResultNameSingularWritten.have_value)
              {
                result->setSimilarResultNameSingularWritten(fieldGeneratorSimilarResultNameSingularWritten.value);
                fieldGeneratorSimilarResultNameSingularWritten.have_value = false;
              }
            if (fieldGeneratorSimilarResultNamePluralWritten.have_value)
              {
                result->setSimilarResultNamePluralWritten(fieldGeneratorSimilarResultNamePluralWritten.value);
                fieldGeneratorSimilarResultNamePluralWritten.have_value = false;
              }
            if (fieldGeneratorLocalSearchQuestionsResponseSpoken.have_value)
              {
                result->setLocalSearchQuestionsResponseSpoken(fieldGeneratorLocalSearchQuestionsResponseSpoken.value);
                fieldGeneratorLocalSearchQuestionsResponseSpoken.have_value = false;
              }
            if (fieldGeneratorLocalSearchQuestionsResponseWritten.have_value)
              {
                result->setLocalSearchQuestionsResponseWritten(fieldGeneratorLocalSearchQuestionsResponseWritten.value);
                fieldGeneratorLocalSearchQuestionsResponseWritten.have_value = false;
              }
            if (fieldGeneratorLocalResults.have_value)
              {
                result->initLocalResults();
                size_t count = fieldGeneratorLocalResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLocalResults(fieldGeneratorLocalResults.value[num].referenced());
                  }
                fieldGeneratorLocalResults.value.clear();
                fieldGeneratorLocalResults.have_value = false;
              }
            else if (!(result->hasLocalResults()))
              {
                error("When parsing the object for %what%, the \"LocalResults\" field was missing.");
              }
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value.referenced());
                fieldGeneratorAttribution.have_value = false;
              }
            else if (!(result->hasAttribution()))
              {
                error("When parsing the object for %what%, the \"Attribution\" field was missing.");
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(LocalSearchInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttribution") == 0)
                        return &fieldGeneratorAttribution;
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "oca", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'l':
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'R':
                                        if (strcmp(&(field_name[6]), "esults") == 0)
                                            return &fieldGeneratorLocalResults;
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[6]), "earch", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[11]))
                                              {
                                                case 'C':
                                                    switch ((unsigned char)(field_name[12]))
                                                      {
                                                        case 'o':
                                                            if (strcmp(&(field_name[13]), "mmandKind") == 0)
                                                                return &fieldGeneratorLocalSearchCommandKind;
                                                            break;
                                                        case 'r':
                                                            if (strncmp(&(field_name[13]), "iteria", 6) == 0)
                                                              {
                                                                switch ((unsigned char)(field_name[19]))
                                                                  {
                                                                    case 0:
                                                                        return &fieldGeneratorLocalSearchCriteria;
                                                                    case 'I':
                                                                        if (strcmp(&(field_name[20]), "ncremental") == 0)
                                                                            return &fieldGeneratorLocalSearchCriteriaIncremental;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'Q':
                                                    if (strncmp(&(field_name[12]), "uestionsResponse", 16) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[28]))
                                                          {
                                                            case 'S':
                                                                if (strcmp(&(field_name[29]), "poken") == 0)
                                                                    return &fieldGeneratorLocalSearchQuestionsResponseSpoken;
                                                                break;
                                                            case 'W':
                                                                if (strcmp(&(field_name[29]), "ritten") == 0)
                                                                    return &fieldGeneratorLocalSearchQuestionsResponseWritten;
                                                                break;
                                                            default:
                                                                break;
                                                          }
                                                      }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                if (strcmp(&(field_name[5]), "ionNotSupported") == 0)
                                    return &fieldGeneratorLocationNotSupported;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "essageUserSimilarResultsReturned") == 0)
                        return &fieldGeneratorMessageUserSimilarResultsReturned;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "esultName", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'P':
                                if (strncmp(&(field_name[11]), "lural", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[16]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[17]), "poken") == 0)
                                                return &fieldGeneratorResultNamePluralSpoken;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[17]), "ritten") == 0)
                                                return &fieldGeneratorResultNamePluralWritten;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'S':
                                if (strncmp(&(field_name[11]), "ingular", 7) == 0)
                                  {
                                    switch ((unsigned char)(field_name[18]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[19]), "poken") == 0)
                                                return &fieldGeneratorResultNameSingularSpoken;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[19]), "ritten") == 0)
                                                return &fieldGeneratorResultNameSingularWritten;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "imilarResult", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[14]), "ocalSearchCriteria") == 0)
                                    return &fieldGeneratorSimilarResultLocalSearchCriteria;
                                break;
                            case 'N':
                                if (strncmp(&(field_name[14]), "ame", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 'P':
                                            if (strncmp(&(field_name[18]), "lural", 5) == 0)
                                              {
                                                switch ((unsigned char)(field_name[23]))
                                                  {
                                                    case 'S':
                                                        if (strcmp(&(field_name[24]), "poken") == 0)
                                                            return &fieldGeneratorSimilarResultNamePluralSpoken;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(field_name[24]), "ritten") == 0)
                                                            return &fieldGeneratorSimilarResultNamePluralWritten;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'S':
                                            if (strncmp(&(field_name[18]), "ingular", 7) == 0)
                                              {
                                                switch ((unsigned char)(field_name[25]))
                                                  {
                                                    case 'S':
                                                        if (strcmp(&(field_name[26]), "poken") == 0)
                                                            return &fieldGeneratorSimilarResultNameSingularSpoken;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(field_name[26]), "ritten") == 0)
                                                            return &fieldGeneratorSimilarResultNameSingularWritten;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 's':
                                if (strcmp(&(field_name[14]), "Returned") == 0)
                                    return &fieldGeneratorSimilarResultsReturned;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorLocalSearchCommandKind("field \"LocalSearchCommandKind\" of the LocalSearchInformationNugget class"), fieldGeneratorLocalSearchCriteria("field \"LocalSearchCriteria\" of the LocalSearchInformationNugget class", ignore_extras), fieldGeneratorLocalSearchCriteriaIncremental("field \"LocalSearchCriteriaIncremental\" of the LocalSearchInformationNugget class", ignore_extras), fieldGeneratorLocationNotSupported("field \"LocationNotSupported\" of the LocalSearchInformationNugget class"), fieldGeneratorResultNameSingularSpoken("field \"ResultNameSingularSpoken\" of the LocalSearchInformationNugget class"), fieldGeneratorResultNamePluralSpoken("field \"ResultNamePluralSpoken\" of the LocalSearchInformationNugget class"), fieldGeneratorResultNameSingularWritten("field \"ResultNameSingularWritten\" of the LocalSearchInformationNugget class"), fieldGeneratorResultNamePluralWritten("field \"ResultNamePluralWritten\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultsReturned("field \"SimilarResultsReturned\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultLocalSearchCriteria("field \"SimilarResultLocalSearchCriteria\" of the LocalSearchInformationNugget class", ignore_extras), fieldGeneratorMessageUserSimilarResultsReturned("field \"MessageUserSimilarResultsReturned\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultNameSingularSpoken("field \"SimilarResultNameSingularSpoken\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultNamePluralSpoken("field \"SimilarResultNamePluralSpoken\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultNameSingularWritten("field \"SimilarResultNameSingularWritten\" of the LocalSearchInformationNugget class"), fieldGeneratorSimilarResultNamePluralWritten("field \"SimilarResultNamePluralWritten\" of the LocalSearchInformationNugget class"), fieldGeneratorLocalSearchQuestionsResponseSpoken("field \"LocalSearchQuestionsResponseSpoken\" of the LocalSearchInformationNugget class"), fieldGeneratorLocalSearchQuestionsResponseWritten("field \"LocalSearchQuestionsResponseWritten\" of the LocalSearchInformationNugget class"), fieldGeneratorLocalResults("field \"LocalResults\" of the LocalSearchInformationNugget class", ignore_extras), fieldGeneratorAttribution("field \"Attribution\" of the LocalSearchInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocalSearchInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLocalSearchCommandKind.reset();
            fieldGeneratorLocalSearchCriteria.reset();
            fieldGeneratorLocalSearchCriteriaIncremental.reset();
            fieldGeneratorLocationNotSupported.reset();
            fieldGeneratorResultNameSingularSpoken.reset();
            fieldGeneratorResultNamePluralSpoken.reset();
            fieldGeneratorResultNameSingularWritten.reset();
            fieldGeneratorResultNamePluralWritten.reset();
            fieldGeneratorSimilarResultsReturned.reset();
            fieldGeneratorSimilarResultLocalSearchCriteria.reset();
            fieldGeneratorMessageUserSimilarResultsReturned.reset();
            fieldGeneratorSimilarResultNameSingularSpoken.reset();
            fieldGeneratorSimilarResultNamePluralSpoken.reset();
            fieldGeneratorSimilarResultNameSingularWritten.reset();
            fieldGeneratorSimilarResultNamePluralWritten.reset();
            fieldGeneratorLocalSearchQuestionsResponseSpoken.reset();
            fieldGeneratorLocalSearchQuestionsResponseWritten.reset();
            fieldGeneratorLocalResults.reset();
            fieldGeneratorAttribution.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCALSEARCHINFORMATIONNUGGETJSON_H */
