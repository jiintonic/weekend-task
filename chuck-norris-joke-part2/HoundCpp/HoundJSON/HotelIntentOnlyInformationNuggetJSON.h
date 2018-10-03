/* file "HotelIntentOnlyInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELINTENTONLYINFORMATIONNUGGETJSON_H
#define HOTELINTENTONLYINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "HotelFilterSpecJSON.h"
#include "HotelFilterSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelIntentOnlyInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    enum TypeHotelIntentOnlyCommandKind
      {
        HotelIntentOnlyCommandKind_ShowList
      };

    static TypeHotelIntentOnlyCommandKind  stringToHotelIntentOnlyCommandKind(const char *chars);
    static const char * stringFromHotelIntentOnlyCommandKind(TypeHotelIntentOnlyCommandKind the_enum);

  private:
    bool flagHasHotelIntentOnlyCommandKind;
    bool flagHasHotelSearchCriteria;
    HotelFilterSpecJSON * storeHotelSearchCriteria;
    bool flagHasHotelSearchCriteriaIncremental;
    HotelFilterSpecJSON * storeHotelSearchCriteriaIncremental;
    bool flagHasSpokenResponseNoResults;
    std::string storeSpokenResponseNoResults;
    bool flagHasSpokenResponseWithResults;
    std::string storeSpokenResponseWithResults;
    bool flagHasWrittenResponseNoResults;
    std::string storeWrittenResponseNoResults;
    bool flagHasWrittenResponseWithResults;
    std::string storeWrittenResponseWithResults;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HotelIntentOnlyInformationNuggetJSON(const HotelIntentOnlyInformationNuggetJSON &);
    HotelIntentOnlyInformationNuggetJSON & operator=(const HotelIntentOnlyInformationNuggetJSON &other);

    JSONValue * extraHotelIntentOnlyCommandKindToJSON(void) const;
    JSONValue * extraHotelSearchCriteriaToJSON(void) const;
    JSONValue * extraHotelSearchCriteriaIncrementalToJSON(void) const;
    JSONValue * extraSpokenResponseNoResultsToJSON(void) const;
    JSONValue * extraSpokenResponseWithResultsToJSON(void) const;
    JSONValue * extraWrittenResponseNoResultsToJSON(void) const;
    JSONValue * extraWrittenResponseWithResultsToJSON(void) const;

    void  fromJSONHotelIntentOnlyCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseNoResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseWithResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseNoResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseWithResults(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelIntentOnlyInformationNuggetJSON(void);
    virtual ~HotelIntentOnlyInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasHotelIntentOnlyCommandKind(void) const;
    TypeHotelIntentOnlyCommandKind  getHotelIntentOnlyCommandKind(void);
    const TypeHotelIntentOnlyCommandKind  getHotelIntentOnlyCommandKind(void) const;
    const char * getHotelIntentOnlyCommandKindAsChars(void) const;
    std::string  getHotelIntentOnlyCommandKindAsString(void) const;
    bool  hasHotelSearchCriteria(void) const;
    HotelFilterSpecJSON *  getHotelSearchCriteria(void);
    const HotelFilterSpecJSON *  getHotelSearchCriteria(void) const;
    bool  hasHotelSearchCriteriaIncremental(void) const;
    HotelFilterSpecJSON *  getHotelSearchCriteriaIncremental(void);
    const HotelFilterSpecJSON *  getHotelSearchCriteriaIncremental(void) const;
    bool  hasSpokenResponseNoResults(void) const;
    std::string  getSpokenResponseNoResults(void);
    const std::string  getSpokenResponseNoResults(void) const;
    bool  hasSpokenResponseWithResults(void) const;
    std::string  getSpokenResponseWithResults(void);
    const std::string  getSpokenResponseWithResults(void) const;
    bool  hasWrittenResponseNoResults(void) const;
    std::string  getWrittenResponseNoResults(void);
    const std::string  getWrittenResponseNoResults(void) const;
    bool  hasWrittenResponseWithResults(void) const;
    std::string  getWrittenResponseWithResults(void);
    const std::string  getWrittenResponseWithResults(void) const;

    virtual size_t extraHotelIntentOnlyInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHotelIntentOnlyInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHotelIntentOnlyInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHotelIntentOnlyInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHotelIntentOnlyInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHotelIntentOnlyInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasHotelIntentOnlyCommandKind)
            ++result;
        if (flagHasHotelSearchCriteria)
            ++result;
        if (flagHasHotelSearchCriteriaIncremental)
            ++result;
        if (flagHasSpokenResponseNoResults)
            ++result;
        if (flagHasSpokenResponseWithResults)
            ++result;
        if (flagHasWrittenResponseNoResults)
            ++result;
        if (flagHasWrittenResponseWithResults)
            ++result;
        result += extraHotelIntentOnlyInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHotelIntentOnlyCommandKind)
          {
            if (remainder == 0)
                return "HotelIntentOnlyCommandKind";
            --remainder;
          }
        if (flagHasHotelSearchCriteria)
          {
            if (remainder == 0)
                return "HotelSearchCriteria";
            --remainder;
          }
        if (flagHasHotelSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return "HotelSearchCriteriaIncremental";
            --remainder;
          }
        if (flagHasSpokenResponseNoResults)
          {
            if (remainder == 0)
                return "SpokenResponseNoResults";
            --remainder;
          }
        if (flagHasSpokenResponseWithResults)
          {
            if (remainder == 0)
                return "SpokenResponseWithResults";
            --remainder;
          }
        if (flagHasWrittenResponseNoResults)
          {
            if (remainder == 0)
                return "WrittenResponseNoResults";
            --remainder;
          }
        if (flagHasWrittenResponseWithResults)
          {
            if (remainder == 0)
                return "WrittenResponseWithResults";
            --remainder;
          }
        return extraHotelIntentOnlyInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasHotelIntentOnlyCommandKind)
          {
            if (remainder == 0)
                return extraHotelIntentOnlyCommandKindToJSON();
            --remainder;
          }
        if (flagHasHotelSearchCriteria)
          {
            if (remainder == 0)
                return extraHotelSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasHotelSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return extraHotelSearchCriteriaIncrementalToJSON();
            --remainder;
          }
        if (flagHasSpokenResponseNoResults)
          {
            if (remainder == 0)
                return extraSpokenResponseNoResultsToJSON();
            --remainder;
          }
        if (flagHasSpokenResponseWithResults)
          {
            if (remainder == 0)
                return extraSpokenResponseWithResultsToJSON();
            --remainder;
          }
        if (flagHasWrittenResponseNoResults)
          {
            if (remainder == 0)
                return extraWrittenResponseNoResultsToJSON();
            --remainder;
          }
        if (flagHasWrittenResponseWithResults)
          {
            if (remainder == 0)
                return extraWrittenResponseWithResultsToJSON();
            --remainder;
          }
        return extraHotelIntentOnlyInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHotelIntentOnlyCommandKind)
          {
            if (remainder == 0)
                return extraHotelIntentOnlyCommandKindToJSON();
            --remainder;
          }
        if (flagHasHotelSearchCriteria)
          {
            if (remainder == 0)
                return extraHotelSearchCriteriaToJSON();
            --remainder;
          }
        if (flagHasHotelSearchCriteriaIncremental)
          {
            if (remainder == 0)
                return extraHotelSearchCriteriaIncrementalToJSON();
            --remainder;
          }
        if (flagHasSpokenResponseNoResults)
          {
            if (remainder == 0)
                return extraSpokenResponseNoResultsToJSON();
            --remainder;
          }
        if (flagHasSpokenResponseWithResults)
          {
            if (remainder == 0)
                return extraSpokenResponseWithResultsToJSON();
            --remainder;
          }
        if (flagHasWrittenResponseNoResults)
          {
            if (remainder == 0)
                return extraWrittenResponseNoResultsToJSON();
            --remainder;
          }
        if (flagHasWrittenResponseWithResults)
          {
            if (remainder == 0)
                return extraWrittenResponseWithResultsToJSON();
            --remainder;
          }
        return extraHotelIntentOnlyInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'H':
                if (strncmp(&(field_name[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "ntentOnlyCommandKind") == 0)
                                return (flagHasHotelIntentOnlyCommandKind ? extraHotelIntentOnlyCommandKindToJSON() : NULL);
                            break;
                        case 'S':
                            if (strncmp(&(field_name[6]), "earchCriteria", 13) == 0)
                              {
                                switch ((unsigned char)(field_name[19]))
                                  {
                                    case 0:
                                        return (flagHasHotelSearchCriteria ? extraHotelSearchCriteriaToJSON() : NULL);
                                    case 'I':
                                        if (strcmp(&(field_name[20]), "ncremental") == 0)
                                            return (flagHasHotelSearchCriteriaIncremental ? extraHotelSearchCriteriaIncrementalToJSON() : NULL);
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
                if (strncmp(&(field_name[1]), "pokenResponse", 13) == 0)
                  {
                    switch ((unsigned char)(field_name[14]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[15]), "oResults") == 0)
                                return (flagHasSpokenResponseNoResults ? extraSpokenResponseNoResultsToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[15]), "ithResults") == 0)
                                return (flagHasSpokenResponseWithResults ? extraSpokenResponseWithResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "rittenResponse", 14) == 0)
                  {
                    switch ((unsigned char)(field_name[15]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[16]), "oResults") == 0)
                                return (flagHasWrittenResponseNoResults ? extraWrittenResponseNoResultsToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[16]), "ithResults") == 0)
                                return (flagHasWrittenResponseWithResults ? extraWrittenResponseWithResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraHotelIntentOnlyInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'H':
                if (strncmp(&(field_name[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "ntentOnlyCommandKind") == 0)
                                return (flagHasHotelIntentOnlyCommandKind ? extraHotelIntentOnlyCommandKindToJSON() : NULL);
                            break;
                        case 'S':
                            if (strncmp(&(field_name[6]), "earchCriteria", 13) == 0)
                              {
                                switch ((unsigned char)(field_name[19]))
                                  {
                                    case 0:
                                        return (flagHasHotelSearchCriteria ? extraHotelSearchCriteriaToJSON() : NULL);
                                    case 'I':
                                        if (strcmp(&(field_name[20]), "ncremental") == 0)
                                            return (flagHasHotelSearchCriteriaIncremental ? extraHotelSearchCriteriaIncrementalToJSON() : NULL);
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
                if (strncmp(&(field_name[1]), "pokenResponse", 13) == 0)
                  {
                    switch ((unsigned char)(field_name[14]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[15]), "oResults") == 0)
                                return (flagHasSpokenResponseNoResults ? extraSpokenResponseNoResultsToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[15]), "ithResults") == 0)
                                return (flagHasSpokenResponseWithResults ? extraSpokenResponseWithResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "rittenResponse", 14) == 0)
                  {
                    switch ((unsigned char)(field_name[15]))
                      {
                        case 'N':
                            if (strcmp(&(field_name[16]), "oResults") == 0)
                                return (flagHasWrittenResponseNoResults ? extraWrittenResponseNoResultsToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[16]), "ithResults") == 0)
                                return (flagHasWrittenResponseWithResults ? extraWrittenResponseWithResultsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraHotelIntentOnlyInformationNuggetLookup(field_name);
      }

    void setHotelIntentOnlyCommandKind(void)
      {
        flagHasHotelIntentOnlyCommandKind = true;
      }
    void setHotelIntentOnlyCommandKind(TypeHotelIntentOnlyCommandKind new_value)
      {
        setHotelIntentOnlyCommandKind();
      }
    void setHotelIntentOnlyCommandKind(const char *chars)
      {
        setHotelIntentOnlyCommandKind(stringToHotelIntentOnlyCommandKind(chars));
      }
    void setHotelIntentOnlyCommandKind(std::string the_string)
      {
        setHotelIntentOnlyCommandKind(stringToHotelIntentOnlyCommandKind(the_string.c_str()));
      }
    void unsetHotelIntentOnlyCommandKind(void)
      {
        flagHasHotelIntentOnlyCommandKind = false;
      }
    void setHotelSearchCriteria(HotelFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelSearchCriteria)
          {
            storeHotelSearchCriteria->remove_reference();
          }
        flagHasHotelSearchCriteria = true;
        storeHotelSearchCriteria = new_value;
      }
    void unsetHotelSearchCriteria(void)
      {
        if (flagHasHotelSearchCriteria)
          {
            storeHotelSearchCriteria->remove_reference();
          }
        flagHasHotelSearchCriteria = false;
      }
    void setHotelSearchCriteriaIncremental(HotelFilterSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelSearchCriteriaIncremental)
          {
            storeHotelSearchCriteriaIncremental->remove_reference();
          }
        flagHasHotelSearchCriteriaIncremental = true;
        storeHotelSearchCriteriaIncremental = new_value;
      }
    void unsetHotelSearchCriteriaIncremental(void)
      {
        if (flagHasHotelSearchCriteriaIncremental)
          {
            storeHotelSearchCriteriaIncremental->remove_reference();
          }
        flagHasHotelSearchCriteriaIncremental = false;
      }
    void setSpokenResponseNoResults(std::string new_value)
      {
        flagHasSpokenResponseNoResults = true;
        storeSpokenResponseNoResults = new_value;
      }
    void unsetSpokenResponseNoResults(void)
      {
        flagHasSpokenResponseNoResults = false;
      }
    void setSpokenResponseWithResults(std::string new_value)
      {
        flagHasSpokenResponseWithResults = true;
        storeSpokenResponseWithResults = new_value;
      }
    void unsetSpokenResponseWithResults(void)
      {
        flagHasSpokenResponseWithResults = false;
      }
    void setWrittenResponseNoResults(std::string new_value)
      {
        flagHasWrittenResponseNoResults = true;
        storeWrittenResponseNoResults = new_value;
      }
    void unsetWrittenResponseNoResults(void)
      {
        flagHasWrittenResponseNoResults = false;
      }
    void setWrittenResponseWithResults(std::string new_value)
      {
        flagHasWrittenResponseWithResults = true;
        storeWrittenResponseWithResults = new_value;
      }
    void unsetWrittenResponseWithResults(void)
      {
        flagHasWrittenResponseWithResults = false;
      }

    virtual void extraHotelIntentOnlyInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHotelIntentOnlyInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHotelIntentOnlyInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraHotelIntentOnlyInformationNuggetAppendPair(key, new_component);
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
            case 'H':
                if (strncmp(&(key[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "ntentOnlyCommandKind") == 0)
                                {
                                fromJSONHotelIntentOnlyCommandKind(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strncmp(&(key[6]), "earchCriteria", 13) == 0)
                              {
                                switch ((unsigned char)(key[19]))
                                  {
                                    case 0:
                                        {
                                        fromJSONHotelSearchCriteria(new_component, false);
                                        return;
                                        }
                                    case 'I':
                                        if (strcmp(&(key[20]), "ncremental") == 0)
                                            {
                                            fromJSONHotelSearchCriteriaIncremental(new_component, false);
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
                if (strncmp(&(key[1]), "pokenResponse", 13) == 0)
                  {
                    switch ((unsigned char)(key[14]))
                      {
                        case 'N':
                            if (strcmp(&(key[15]), "oResults") == 0)
                                {
                                fromJSONSpokenResponseNoResults(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[15]), "ithResults") == 0)
                                {
                                fromJSONSpokenResponseWithResults(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(key[1]), "rittenResponse", 14) == 0)
                  {
                    switch ((unsigned char)(key[15]))
                      {
                        case 'N':
                            if (strcmp(&(key[16]), "oResults") == 0)
                                {
                                fromJSONWrittenResponseNoResults(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[16]), "ithResults") == 0)
                                {
                                fromJSONWrittenResponseWithResults(new_component, false);
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
        extraHotelIntentOnlyInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'H':
                if (strncmp(&(key[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "ntentOnlyCommandKind") == 0)
                                {
                                fromJSONHotelIntentOnlyCommandKind(new_component, false);
                                return;
                                }
                            break;
                        case 'S':
                            if (strncmp(&(key[6]), "earchCriteria", 13) == 0)
                              {
                                switch ((unsigned char)(key[19]))
                                  {
                                    case 0:
                                        {
                                        fromJSONHotelSearchCriteria(new_component, false);
                                        return;
                                        }
                                    case 'I':
                                        if (strcmp(&(key[20]), "ncremental") == 0)
                                            {
                                            fromJSONHotelSearchCriteriaIncremental(new_component, false);
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
                if (strncmp(&(key[1]), "pokenResponse", 13) == 0)
                  {
                    switch ((unsigned char)(key[14]))
                      {
                        case 'N':
                            if (strcmp(&(key[15]), "oResults") == 0)
                                {
                                fromJSONSpokenResponseNoResults(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[15]), "ithResults") == 0)
                                {
                                fromJSONSpokenResponseWithResults(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(key[1]), "rittenResponse", 14) == 0)
                  {
                    switch ((unsigned char)(key[15]))
                      {
                        case 'N':
                            if (strcmp(&(key[16]), "oResults") == 0)
                                {
                                fromJSONWrittenResponseNoResults(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[16]), "ithResults") == 0)
                                {
                                fromJSONWrittenResponseWithResults(new_component, false);
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
        extraHotelIntentOnlyInformationNuggetSetField(key, new_component);
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
        assert(flagHasHotelIntentOnlyCommandKind);
        handler->start_pair("HotelIntentOnlyCommandKind");
        handler->string_value("ShowList");
        if (flagHasHotelSearchCriteria)
          {
            handler->start_pair("HotelSearchCriteria");
            storeHotelSearchCriteria->write_as_json(handler);
          }
        if (flagHasHotelSearchCriteriaIncremental)
          {
            handler->start_pair("HotelSearchCriteriaIncremental");
            storeHotelSearchCriteriaIncremental->write_as_json(handler);
          }
        if (flagHasSpokenResponseNoResults)
          {
            handler->start_pair("SpokenResponseNoResults");
            handler->string_value(storeSpokenResponseNoResults);
          }
        if (flagHasSpokenResponseWithResults)
          {
            handler->start_pair("SpokenResponseWithResults");
            handler->string_value(storeSpokenResponseWithResults);
          }
        if (flagHasWrittenResponseNoResults)
          {
            handler->start_pair("WrittenResponseNoResults");
            handler->string_value(storeWrittenResponseNoResults);
          }
        if (flagHasWrittenResponseWithResults)
          {
            handler->start_pair("WrittenResponseWithResults");
            handler->string_value(storeWrittenResponseWithResults);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasHotelIntentOnlyCommandKind()))
          {
            return "When parsing the object for %what%, the \"HotelIntentOnlyCommandKind\" field was missing.";
          }
        return NULL;
      }

    static HotelIntentOnlyInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelIntentOnlyInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelIntentOnlyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelIntentOnlyInformationNuggetJSON>, HotelIntentOnlyInformationNuggetJSON *, bool> generator("Type HotelIntentOnlyInformationNugget", ignore_extras);
            parse_json_value(text, "Text for HotelIntentOnlyInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelIntentOnlyInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelIntentOnlyInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelIntentOnlyInformationNuggetJSON>, HotelIntentOnlyInformationNuggetJSON *, bool> generator("Type HotelIntentOnlyInformationNugget", ignore_extras);
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
    class FieldGeneratorHotelIntentOnlyCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHotelIntentOnlyCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHotelIntentOnlyCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToHotelIntentOnlyCommandKind(result));
              }
            virtual void handle_result(TypeHotelIntentOnlyCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHotelIntentOnlyCommandKind, TypeHotelIntentOnlyCommandKind, TypeHotelIntentOnlyCommandKind > fieldGeneratorHotelIntentOnlyCommandKind;
        JSONHoldingGenerator<HotelFilterSpecJSON::Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool > fieldGeneratorHotelSearchCriteria;
        JSONHoldingGenerator<HotelFilterSpecJSON::Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool > fieldGeneratorHotelSearchCriteriaIncremental;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseNoResults;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseWithResults;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponseNoResults;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponseWithResults;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "HotelIntentOnly") == 0))
                throw("The key field has a value other than `HotelIntentOnly'.");
            HotelIntentOnlyInformationNuggetJSON *result = new HotelIntentOnlyInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<HotelIntentOnlyInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHotelIntentOnlyInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((HotelIntentOnlyInformationNuggetJSON *)new_result);
          }
        void finish(HotelIntentOnlyInformationNuggetJSON *result)
          {
            if (fieldGeneratorHotelIntentOnlyCommandKind.have_value)
              {
                result->setHotelIntentOnlyCommandKind();
                fieldGeneratorHotelIntentOnlyCommandKind.have_value = false;
              }
            else if (!(result->hasHotelIntentOnlyCommandKind()))
              {
                error("When parsing the object for %what%, the \"HotelIntentOnlyCommandKind\" field was missing.");
              }
            if (fieldGeneratorHotelSearchCriteria.have_value)
              {
                result->setHotelSearchCriteria(fieldGeneratorHotelSearchCriteria.value.referenced());
                fieldGeneratorHotelSearchCriteria.have_value = false;
              }
            if (fieldGeneratorHotelSearchCriteriaIncremental.have_value)
              {
                result->setHotelSearchCriteriaIncremental(fieldGeneratorHotelSearchCriteriaIncremental.value.referenced());
                fieldGeneratorHotelSearchCriteriaIncremental.have_value = false;
              }
            if (fieldGeneratorSpokenResponseNoResults.have_value)
              {
                result->setSpokenResponseNoResults(fieldGeneratorSpokenResponseNoResults.value);
                fieldGeneratorSpokenResponseNoResults.have_value = false;
              }
            if (fieldGeneratorSpokenResponseWithResults.have_value)
              {
                result->setSpokenResponseWithResults(fieldGeneratorSpokenResponseWithResults.value);
                fieldGeneratorSpokenResponseWithResults.have_value = false;
              }
            if (fieldGeneratorWrittenResponseNoResults.have_value)
              {
                result->setWrittenResponseNoResults(fieldGeneratorWrittenResponseNoResults.value);
                fieldGeneratorWrittenResponseNoResults.have_value = false;
              }
            if (fieldGeneratorWrittenResponseWithResults.have_value)
              {
                result->setWrittenResponseWithResults(fieldGeneratorWrittenResponseWithResults.value);
                fieldGeneratorWrittenResponseWithResults.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(HotelIntentOnlyInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'H':
                    if (strncmp(&(field_name[1]), "otel", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "ntentOnlyCommandKind") == 0)
                                    return &fieldGeneratorHotelIntentOnlyCommandKind;
                                break;
                            case 'S':
                                if (strncmp(&(field_name[6]), "earchCriteria", 13) == 0)
                                  {
                                    switch ((unsigned char)(field_name[19]))
                                      {
                                        case 0:
                                            return &fieldGeneratorHotelSearchCriteria;
                                        case 'I':
                                            if (strcmp(&(field_name[20]), "ncremental") == 0)
                                                return &fieldGeneratorHotelSearchCriteriaIncremental;
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
                    if (strncmp(&(field_name[1]), "pokenResponse", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 'N':
                                if (strcmp(&(field_name[15]), "oResults") == 0)
                                    return &fieldGeneratorSpokenResponseNoResults;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[15]), "ithResults") == 0)
                                    return &fieldGeneratorSpokenResponseWithResults;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "rittenResponse", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 'N':
                                if (strcmp(&(field_name[16]), "oResults") == 0)
                                    return &fieldGeneratorWrittenResponseNoResults;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[16]), "ithResults") == 0)
                                    return &fieldGeneratorWrittenResponseWithResults;
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
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorHotelIntentOnlyCommandKind("field \"HotelIntentOnlyCommandKind\" of the HotelIntentOnlyInformationNugget class"), fieldGeneratorHotelSearchCriteria("field \"HotelSearchCriteria\" of the HotelIntentOnlyInformationNugget class", ignore_extras), fieldGeneratorHotelSearchCriteriaIncremental("field \"HotelSearchCriteriaIncremental\" of the HotelIntentOnlyInformationNugget class", ignore_extras), fieldGeneratorSpokenResponseNoResults("field \"SpokenResponseNoResults\" of the HotelIntentOnlyInformationNugget class"), fieldGeneratorSpokenResponseWithResults("field \"SpokenResponseWithResults\" of the HotelIntentOnlyInformationNugget class"), fieldGeneratorWrittenResponseNoResults("field \"WrittenResponseNoResults\" of the HotelIntentOnlyInformationNugget class"), fieldGeneratorWrittenResponseWithResults("field \"WrittenResponseWithResults\" of the HotelIntentOnlyInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HotelIntentOnlyInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHotelIntentOnlyCommandKind.reset();
            fieldGeneratorHotelSearchCriteria.reset();
            fieldGeneratorHotelSearchCriteriaIncremental.reset();
            fieldGeneratorSpokenResponseNoResults.reset();
            fieldGeneratorSpokenResponseWithResults.reset();
            fieldGeneratorWrittenResponseNoResults.reset();
            fieldGeneratorWrittenResponseWithResults.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOTELINTENTONLYINFORMATIONNUGGETJSON_H */
