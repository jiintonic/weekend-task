/* file "HotelInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELINFORMATIONNUGGETJSON_H
#define HOTELINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "HotelFilterSpecJSON.h"
#include "HotelFilterSpecJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "HotelJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    enum TypeHotelCommandKind
      {
        HotelCommandKind_ShowList
      };

    static TypeHotelCommandKind  stringToHotelCommandKind(const char *chars);
    static const char * stringFromHotelCommandKind(TypeHotelCommandKind the_enum);

  private:
    bool flagHasHotelCommandKind;
    bool flagHasHotelSearchCriteria;
    HotelFilterSpecJSON * storeHotelSearchCriteria;
    bool flagHasHotelSearchCriteriaIncremental;
    HotelFilterSpecJSON * storeHotelSearchCriteriaIncremental;
    bool flagHasTotalResultsFound;
    OInteger storeTotalResultsFound;
    bool flagHasCheckInDateAndTime;
    DateAndOrTimeJSON * storeCheckInDateAndTime;
    bool flagHasCheckOutDateAndTime;
    DateAndOrTimeJSON * storeCheckOutDateAndTime;
    bool flagHasHotels;
    std::vector< HotelJSON * > storeHotels;
    bool flagHasResultIndexReferenced;
    OInteger storeResultIndexReferenced;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HotelInformationNuggetJSON(const HotelInformationNuggetJSON &);
    HotelInformationNuggetJSON & operator=(const HotelInformationNuggetJSON &other);

    JSONValue * extraHotelCommandKindToJSON(void) const;
    JSONValue * extraHotelSearchCriteriaToJSON(void) const;
    JSONValue * extraHotelSearchCriteriaIncrementalToJSON(void) const;
    JSONValue * extraTotalResultsFoundToJSON(void) const;
    JSONValue * extraCheckInDateAndTimeToJSON(void) const;
    JSONValue * extraCheckOutDateAndTimeToJSON(void) const;
    JSONValue * extraHotelsToJSON(void) const;
    JSONValue * extraResultIndexReferencedToJSON(void) const;

    void  fromJSONHotelCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalResultsFound(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCheckInDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCheckOutDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotels(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIndexReferenced(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelInformationNuggetJSON(void);
    virtual ~HotelInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasHotelCommandKind(void) const;
    TypeHotelCommandKind  getHotelCommandKind(void);
    const TypeHotelCommandKind  getHotelCommandKind(void) const;
    const char * getHotelCommandKindAsChars(void) const;
    std::string  getHotelCommandKindAsString(void) const;
    bool  hasHotelSearchCriteria(void) const;
    HotelFilterSpecJSON *  getHotelSearchCriteria(void);
    const HotelFilterSpecJSON *  getHotelSearchCriteria(void) const;
    bool  hasHotelSearchCriteriaIncremental(void) const;
    HotelFilterSpecJSON *  getHotelSearchCriteriaIncremental(void);
    const HotelFilterSpecJSON *  getHotelSearchCriteriaIncremental(void) const;
    bool  hasTotalResultsFound(void) const;
    OInteger  getTotalResultsFound(void);
    const OInteger  getTotalResultsFound(void) const;
    bool  hasCheckInDateAndTime(void) const;
    DateAndOrTimeJSON *  getCheckInDateAndTime(void);
    const DateAndOrTimeJSON *  getCheckInDateAndTime(void) const;
    bool  hasCheckOutDateAndTime(void) const;
    DateAndOrTimeJSON *  getCheckOutDateAndTime(void);
    const DateAndOrTimeJSON *  getCheckOutDateAndTime(void) const;
    bool  hasHotels(void) const;
    size_t  countOfHotels(void) const;
    HotelJSON *  elementOfHotels(size_t element_num);
    const HotelJSON *  elementOfHotels(size_t element_num) const;
    std::vector< HotelJSON * >  getHotels(void);
    const std::vector< HotelJSON * >  getHotels(void) const;
    bool  hasResultIndexReferenced(void) const;
    OInteger  getResultIndexReferenced(void);
    const OInteger  getResultIndexReferenced(void) const;

    virtual size_t extraHotelInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHotelInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHotelInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHotelInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHotelInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHotelInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasHotelCommandKind)
            ++result;
        if (flagHasHotelSearchCriteria)
            ++result;
        if (flagHasHotelSearchCriteriaIncremental)
            ++result;
        if (flagHasTotalResultsFound)
            ++result;
        if (flagHasCheckInDateAndTime)
            ++result;
        if (flagHasCheckOutDateAndTime)
            ++result;
        if (flagHasHotels)
            ++result;
        if (flagHasResultIndexReferenced)
            ++result;
        result += extraHotelInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHotelCommandKind)
          {
            if (remainder == 0)
                return "HotelCommandKind";
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
        if (flagHasTotalResultsFound)
          {
            if (remainder == 0)
                return "TotalResultsFound";
            --remainder;
          }
        if (flagHasCheckInDateAndTime)
          {
            if (remainder == 0)
                return "CheckInDateAndTime";
            --remainder;
          }
        if (flagHasCheckOutDateAndTime)
          {
            if (remainder == 0)
                return "CheckOutDateAndTime";
            --remainder;
          }
        if (flagHasHotels)
          {
            if (remainder == 0)
                return "Hotels";
            --remainder;
          }
        if (flagHasResultIndexReferenced)
          {
            if (remainder == 0)
                return "ResultIndexReferenced";
            --remainder;
          }
        return extraHotelInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasHotelCommandKind)
          {
            if (remainder == 0)
                return extraHotelCommandKindToJSON();
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
        if (flagHasTotalResultsFound)
          {
            if (remainder == 0)
                return extraTotalResultsFoundToJSON();
            --remainder;
          }
        if (flagHasCheckInDateAndTime)
          {
            if (remainder == 0)
                return extraCheckInDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasCheckOutDateAndTime)
          {
            if (remainder == 0)
                return extraCheckOutDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasHotels)
          {
            if (remainder == 0)
                return extraHotelsToJSON();
            --remainder;
          }
        if (flagHasResultIndexReferenced)
          {
            if (remainder == 0)
                return extraResultIndexReferencedToJSON();
            --remainder;
          }
        return extraHotelInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHotelCommandKind)
          {
            if (remainder == 0)
                return extraHotelCommandKindToJSON();
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
        if (flagHasTotalResultsFound)
          {
            if (remainder == 0)
                return extraTotalResultsFoundToJSON();
            --remainder;
          }
        if (flagHasCheckInDateAndTime)
          {
            if (remainder == 0)
                return extraCheckInDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasCheckOutDateAndTime)
          {
            if (remainder == 0)
                return extraCheckOutDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasHotels)
          {
            if (remainder == 0)
                return extraHotelsToJSON();
            --remainder;
          }
        if (flagHasResultIndexReferenced)
          {
            if (remainder == 0)
                return extraResultIndexReferencedToJSON();
            --remainder;
          }
        return extraHotelInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "heck", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "nDateAndTime") == 0)
                                return (flagHasCheckInDateAndTime ? extraCheckInDateAndTimeToJSON() : NULL);
                            break;
                        case 'O':
                            if (strcmp(&(field_name[6]), "utDateAndTime") == 0)
                                return (flagHasCheckOutDateAndTime ? extraCheckOutDateAndTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strncmp(&(field_name[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "ommandKind") == 0)
                                return (flagHasHotelCommandKind ? extraHotelCommandKindToJSON() : NULL);
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
                        case 's':
                            if (field_name[6] == 0)
                                return (flagHasHotels ? extraHotelsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultIndexReferenced") == 0)
                    return (flagHasResultIndexReferenced ? extraResultIndexReferencedToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "otalResultsFound") == 0)
                    return (flagHasTotalResultsFound ? extraTotalResultsFoundToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHotelInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strncmp(&(field_name[1]), "heck", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "nDateAndTime") == 0)
                                return (flagHasCheckInDateAndTime ? extraCheckInDateAndTimeToJSON() : NULL);
                            break;
                        case 'O':
                            if (strcmp(&(field_name[6]), "utDateAndTime") == 0)
                                return (flagHasCheckOutDateAndTime ? extraCheckOutDateAndTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strncmp(&(field_name[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "ommandKind") == 0)
                                return (flagHasHotelCommandKind ? extraHotelCommandKindToJSON() : NULL);
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
                        case 's':
                            if (field_name[6] == 0)
                                return (flagHasHotels ? extraHotelsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "esultIndexReferenced") == 0)
                    return (flagHasResultIndexReferenced ? extraResultIndexReferencedToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "otalResultsFound") == 0)
                    return (flagHasTotalResultsFound ? extraTotalResultsFoundToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHotelInformationNuggetLookup(field_name);
      }

    void setHotelCommandKind(void)
      {
        flagHasHotelCommandKind = true;
      }
    void setHotelCommandKind(TypeHotelCommandKind new_value)
      {
        setHotelCommandKind();
      }
    void setHotelCommandKind(const char *chars)
      {
        setHotelCommandKind(stringToHotelCommandKind(chars));
      }
    void setHotelCommandKind(std::string the_string)
      {
        setHotelCommandKind(stringToHotelCommandKind(the_string.c_str()));
      }
    void unsetHotelCommandKind(void)
      {
        flagHasHotelCommandKind = false;
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
    void setTotalResultsFound(OInteger new_value)
      {
        flagHasTotalResultsFound = true;
        if (new_value < 0)
            throw("The value for field TotalResultsFound of HotelInformationNuggetJSON is less than the lower bound (0) for that field.");
        storeTotalResultsFound = new_value;
      }
    void unsetTotalResultsFound(void)
      {
        flagHasTotalResultsFound = false;
      }
    void setCheckInDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCheckInDateAndTime)
          {
            storeCheckInDateAndTime->remove_reference();
          }
        flagHasCheckInDateAndTime = true;
        storeCheckInDateAndTime = new_value;
      }
    void unsetCheckInDateAndTime(void)
      {
        if (flagHasCheckInDateAndTime)
          {
            storeCheckInDateAndTime->remove_reference();
          }
        flagHasCheckInDateAndTime = false;
      }
    void setCheckOutDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCheckOutDateAndTime)
          {
            storeCheckOutDateAndTime->remove_reference();
          }
        flagHasCheckOutDateAndTime = true;
        storeCheckOutDateAndTime = new_value;
      }
    void unsetCheckOutDateAndTime(void)
      {
        if (flagHasCheckOutDateAndTime)
          {
            storeCheckOutDateAndTime->remove_reference();
          }
        flagHasCheckOutDateAndTime = false;
      }
    void initHotels(void)
      {
        if (flagHasHotels)
          {
            for (size_t num2 = 0; num2 < storeHotels.size(); ++num2)
              {
                storeHotels[num2]->remove_reference();
              }
          }
        flagHasHotels = true;
        storeHotels.clear();
      }
    void appendHotels(HotelJSON * to_append)
      {
        if (!flagHasHotels)
          {
            flagHasHotels = true;
            storeHotels.clear();
          }
        assert(flagHasHotels);
        to_append->add_reference();
        storeHotels.push_back(to_append);
      }
    void unsetHotels(void)
      {
        if (flagHasHotels)
          {
            for (size_t num3 = 0; num3 < storeHotels.size(); ++num3)
              {
                storeHotels[num3]->remove_reference();
              }
          }
        flagHasHotels = false;
        storeHotels.clear();
      }
    void setResultIndexReferenced(OInteger new_value)
      {
        flagHasResultIndexReferenced = true;
        if (new_value < 0)
            throw("The value for field ResultIndexReferenced of HotelInformationNuggetJSON is less than the lower bound (0) for that field.");
        storeResultIndexReferenced = new_value;
      }
    void unsetResultIndexReferenced(void)
      {
        flagHasResultIndexReferenced = false;
      }

    virtual void extraHotelInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHotelInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHotelInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraHotelInformationNuggetAppendPair(key, new_component);
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
            case 'C':
                if (strncmp(&(key[1]), "heck", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "nDateAndTime") == 0)
                                {
                                fromJSONCheckInDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        case 'O':
                            if (strcmp(&(key[6]), "utDateAndTime") == 0)
                                {
                                fromJSONCheckOutDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strncmp(&(key[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'C':
                            if (strcmp(&(key[6]), "ommandKind") == 0)
                                {
                                fromJSONHotelCommandKind(new_component, false);
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
                        case 's':
                            if (key[6] == 0)
                                {
                                fromJSONHotels(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultIndexReferenced") == 0)
                    {
                    fromJSONResultIndexReferenced(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "otalResultsFound") == 0)
                    {
                    fromJSONTotalResultsFound(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHotelInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strncmp(&(key[1]), "heck", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "nDateAndTime") == 0)
                                {
                                fromJSONCheckInDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        case 'O':
                            if (strcmp(&(key[6]), "utDateAndTime") == 0)
                                {
                                fromJSONCheckOutDateAndTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strncmp(&(key[1]), "otel", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'C':
                            if (strcmp(&(key[6]), "ommandKind") == 0)
                                {
                                fromJSONHotelCommandKind(new_component, false);
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
                        case 's':
                            if (key[6] == 0)
                                {
                                fromJSONHotels(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "esultIndexReferenced") == 0)
                    {
                    fromJSONResultIndexReferenced(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "otalResultsFound") == 0)
                    {
                    fromJSONTotalResultsFound(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHotelInformationNuggetSetField(key, new_component);
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
        assert(flagHasHotelCommandKind);
        handler->start_pair("HotelCommandKind");
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
        if (flagHasTotalResultsFound)
          {
            handler->start_pair("TotalResultsFound");
            handler->number_value(storeTotalResultsFound.get_o_integer());
          }
        if (flagHasCheckInDateAndTime)
          {
            handler->start_pair("CheckInDateAndTime");
            storeCheckInDateAndTime->write_as_json(handler);
          }
        if (flagHasCheckOutDateAndTime)
          {
            handler->start_pair("CheckOutDateAndTime");
            storeCheckOutDateAndTime->write_as_json(handler);
          }
        assert(flagHasHotels);
        handler->start_pair("Hotels");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeHotels.size(); ++num1)
          {
            storeHotels[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasResultIndexReferenced)
          {
            handler->start_pair("ResultIndexReferenced");
            handler->number_value(storeResultIndexReferenced.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasHotelCommandKind()))
          {
            return "When parsing the object for %what%, the \"HotelCommandKind\" field was missing.";
          }
        if (!(hasHotels()))
          {
            return "When parsing the object for %what%, the \"Hotels\" field was missing.";
          }
        return NULL;
      }

    static HotelInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelInformationNuggetJSON>, HotelInformationNuggetJSON *, bool> generator("Type HotelInformationNugget", ignore_extras);
            parse_json_value(text, "Text for HotelInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelInformationNuggetJSON>, HotelInformationNuggetJSON *, bool> generator("Type HotelInformationNugget", ignore_extras);
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
    class FieldGeneratorHotelCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHotelCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHotelCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToHotelCommandKind(result));
              }
            virtual void handle_result(TypeHotelCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHotelCommandKind, TypeHotelCommandKind, TypeHotelCommandKind > fieldGeneratorHotelCommandKind;
        JSONHoldingGenerator<HotelFilterSpecJSON::Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool > fieldGeneratorHotelSearchCriteria;
        JSONHoldingGenerator<HotelFilterSpecJSON::Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool > fieldGeneratorHotelSearchCriteriaIncremental;
        static char lowerBoundTotalResultsFound[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTotalResultsFound>, OInteger, o_integer > fieldGeneratorTotalResultsFound;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCheckInDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCheckOutDateAndTime;
        JSONHoldingArrayGenerator<HotelJSON::Generator, RCHandle<HotelJSON>, HotelJSON *, bool > fieldGeneratorHotels;
        static char lowerBoundResultIndexReferenced[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundResultIndexReferenced>, OInteger, o_integer > fieldGeneratorResultIndexReferenced;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "Hotel") == 0))
                throw("The key field has a value other than `Hotel'.");
            HotelInformationNuggetJSON *result = new HotelInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<HotelInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHotelInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((HotelInformationNuggetJSON *)new_result);
          }
        void finish(HotelInformationNuggetJSON *result)
          {
            if (fieldGeneratorHotelCommandKind.have_value)
              {
                result->setHotelCommandKind();
                fieldGeneratorHotelCommandKind.have_value = false;
              }
            else if (!(result->hasHotelCommandKind()))
              {
                error("When parsing the object for %what%, the \"HotelCommandKind\" field was missing.");
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
            if (fieldGeneratorTotalResultsFound.have_value)
              {
                result->setTotalResultsFound(fieldGeneratorTotalResultsFound.value);
                fieldGeneratorTotalResultsFound.have_value = false;
              }
            if (fieldGeneratorCheckInDateAndTime.have_value)
              {
                result->setCheckInDateAndTime(fieldGeneratorCheckInDateAndTime.value.referenced());
                fieldGeneratorCheckInDateAndTime.have_value = false;
              }
            if (fieldGeneratorCheckOutDateAndTime.have_value)
              {
                result->setCheckOutDateAndTime(fieldGeneratorCheckOutDateAndTime.value.referenced());
                fieldGeneratorCheckOutDateAndTime.have_value = false;
              }
            if (fieldGeneratorHotels.have_value)
              {
                result->initHotels();
                size_t count = fieldGeneratorHotels.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotels(fieldGeneratorHotels.value[num].referenced());
                  }
                fieldGeneratorHotels.value.clear();
                fieldGeneratorHotels.have_value = false;
              }
            else if (!(result->hasHotels()))
              {
                error("When parsing the object for %what%, the \"Hotels\" field was missing.");
              }
            if (fieldGeneratorResultIndexReferenced.have_value)
              {
                result->setResultIndexReferenced(fieldGeneratorResultIndexReferenced.value);
                fieldGeneratorResultIndexReferenced.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(HotelInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "heck", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "nDateAndTime") == 0)
                                    return &fieldGeneratorCheckInDateAndTime;
                                break;
                            case 'O':
                                if (strcmp(&(field_name[6]), "utDateAndTime") == 0)
                                    return &fieldGeneratorCheckOutDateAndTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "otel", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ommandKind") == 0)
                                    return &fieldGeneratorHotelCommandKind;
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
                            case 's':
                                if (field_name[6] == 0)
                                    return &fieldGeneratorHotels;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultIndexReferenced") == 0)
                        return &fieldGeneratorResultIndexReferenced;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "otalResultsFound") == 0)
                        return &fieldGeneratorTotalResultsFound;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorHotelCommandKind("field \"HotelCommandKind\" of the HotelInformationNugget class"), fieldGeneratorHotelSearchCriteria("field \"HotelSearchCriteria\" of the HotelInformationNugget class", ignore_extras), fieldGeneratorHotelSearchCriteriaIncremental("field \"HotelSearchCriteriaIncremental\" of the HotelInformationNugget class", ignore_extras), fieldGeneratorTotalResultsFound("field \"TotalResultsFound\" of the HotelInformationNugget class"), fieldGeneratorCheckInDateAndTime("field \"CheckInDateAndTime\" of the HotelInformationNugget class", ignore_extras), fieldGeneratorCheckOutDateAndTime("field \"CheckOutDateAndTime\" of the HotelInformationNugget class", ignore_extras), fieldGeneratorHotels("field \"Hotels\" of the HotelInformationNugget class", ignore_extras), fieldGeneratorResultIndexReferenced("field \"ResultIndexReferenced\" of the HotelInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HotelInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHotelCommandKind.reset();
            fieldGeneratorHotelSearchCriteria.reset();
            fieldGeneratorHotelSearchCriteriaIncremental.reset();
            fieldGeneratorTotalResultsFound.reset();
            fieldGeneratorCheckInDateAndTime.reset();
            fieldGeneratorCheckOutDateAndTime.reset();
            fieldGeneratorHotels.reset();
            fieldGeneratorResultIndexReferenced.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOTELINFORMATIONNUGGETJSON_H */
