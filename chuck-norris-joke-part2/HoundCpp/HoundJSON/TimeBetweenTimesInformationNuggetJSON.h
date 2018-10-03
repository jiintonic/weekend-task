/* file "TimeBetweenTimesInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEBETWEENTIMESINFORMATIONNUGGETJSON_H
#define TIMEBETWEENTIMESINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "UnitOfMeasureAmountJSON.h"
#include "AmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeBetweenTimesInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  public:
    enum TypeUnitsKnownValues
      {
        Units_unknown,
        Units_days,
        Units_weeks,
        Units_months,
        Units_years,
        Units_decades,
        Units_centuries,
        Units_seconds,
        Units_minutes,
        Units_hours,
        Units__none
      };
    struct TypeUnits
      {
        bool in_known_list;
        std::string string_value;
        TypeUnitsKnownValues list_value;

        TypeUnits(void);
        TypeUnits(const TypeUnits &other);
        TypeUnits(TypeUnitsKnownValues other);
        bool  operator==(const TypeUnits &other) const;
        bool  operator!=(const TypeUnits &other) const;
        bool  operator<(const TypeUnits &other) const;
        bool  operator>(const TypeUnits &other) const;
        bool  operator>=(const TypeUnits &other) const;
        bool  operator<=(const TypeUnits &other) const;

      };

    static TypeUnitsKnownValues  stringToUnits(const char *chars);
    static const char * stringFromUnits(TypeUnitsKnownValues the_enum);

  private:
    bool flagHasSourceDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeSourceDateAndOrTimeSpec;
    bool flagHasDestinationDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDestinationDateAndOrTimeSpec;
    bool flagHasUnitOfMeasureAmount;
    UnitOfMeasureAmountJSON * storeUnitOfMeasureAmount;
    bool flagHasTimeDifference;
    double storeTimeDifference;
    std::string textStoreTimeDifference;
    bool flagHasUnits;
    TypeUnits storeUnits;
    bool flagHasMultipleUnitTimeDifference;
    std::vector< AmountJSON * > storeMultipleUnitTimeDifference;
    bool flagHasMultipleUnitTimeDifferenceWritten;
    std::string storeMultipleUnitTimeDifferenceWritten;
    bool flagHasMultipleUnitTimeDifferenceSpoken;
    std::string storeMultipleUnitTimeDifferenceSpoken;
    bool flagHasRequestedInThePast;
    bool storeRequestedInThePast;
    bool flagHasIsBetweenTwoDateTimes;
    bool storeIsBetweenTwoDateTimes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeBetweenTimesInformationNuggetJSON(const TimeBetweenTimesInformationNuggetJSON &);
    TimeBetweenTimesInformationNuggetJSON & operator=(const TimeBetweenTimesInformationNuggetJSON &other);

    JSONValue * extraSourceDateAndOrTimeSpecToJSON(void) const;
    JSONValue * extraDestinationDateAndOrTimeSpecToJSON(void) const;
    JSONValue * extraUnitOfMeasureAmountToJSON(void) const;
    JSONValue * extraTimeDifferenceToJSON(void) const;
    JSONValue * extraUnitsToJSON(void) const;
    JSONValue * extraMultipleUnitTimeDifferenceToJSON(void) const;
    JSONValue * extraMultipleUnitTimeDifferenceWrittenToJSON(void) const;
    JSONValue * extraMultipleUnitTimeDifferenceSpokenToJSON(void) const;
    JSONValue * extraRequestedInThePastToJSON(void) const;
    JSONValue * extraIsBetweenTwoDateTimesToJSON(void) const;

    void  fromJSONSourceDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfMeasureAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeDifference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleUnitTimeDifference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleUnitTimeDifferenceWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMultipleUnitTimeDifferenceSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsBetweenTwoDateTimes(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeBetweenTimesInformationNuggetJSON(void);
    virtual ~TimeBetweenTimesInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasSourceDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getSourceDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getSourceDateAndOrTimeSpec(void) const;
    bool  hasDestinationDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDestinationDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDestinationDateAndOrTimeSpec(void) const;
    bool  hasUnitOfMeasureAmount(void) const;
    UnitOfMeasureAmountJSON *  getUnitOfMeasureAmount(void);
    const UnitOfMeasureAmountJSON *  getUnitOfMeasureAmount(void) const;
    bool  hasTimeDifference(void) const;
    double  getTimeDifference(void);
    const double  getTimeDifference(void) const;
    std::string  getTimeDifferenceAsText(void) const;
    bool  hasUnits(void) const;
    TypeUnits  getUnits(void);
    const TypeUnits  getUnits(void) const;
    const char * getUnitsAsChars(void) const;
    std::string  getUnitsAsString(void) const;
    bool  hasMultipleUnitTimeDifference(void) const;
    size_t  countOfMultipleUnitTimeDifference(void) const;
    AmountJSON *  elementOfMultipleUnitTimeDifference(size_t element_num);
    const AmountJSON *  elementOfMultipleUnitTimeDifference(size_t element_num) const;
    std::vector< AmountJSON * >  getMultipleUnitTimeDifference(void);
    const std::vector< AmountJSON * >  getMultipleUnitTimeDifference(void) const;
    bool  hasMultipleUnitTimeDifferenceWritten(void) const;
    std::string  getMultipleUnitTimeDifferenceWritten(void);
    const std::string  getMultipleUnitTimeDifferenceWritten(void) const;
    bool  hasMultipleUnitTimeDifferenceSpoken(void) const;
    std::string  getMultipleUnitTimeDifferenceSpoken(void);
    const std::string  getMultipleUnitTimeDifferenceSpoken(void) const;
    bool  hasRequestedInThePast(void) const;
    bool  getRequestedInThePast(void);
    const bool  getRequestedInThePast(void) const;
    bool  hasIsBetweenTwoDateTimes(void) const;
    bool  getIsBetweenTwoDateTimes(void);
    const bool  getIsBetweenTwoDateTimes(void) const;

    virtual size_t extraTimeBetweenTimesInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeBetweenTimesInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeBetweenTimesInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeBetweenTimesInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeBetweenTimesInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeBetweenTimesInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSourceDateAndOrTimeSpec)
            ++result;
        if (flagHasDestinationDateAndOrTimeSpec)
            ++result;
        if (flagHasUnitOfMeasureAmount)
            ++result;
        if (flagHasTimeDifference)
            ++result;
        if (flagHasUnits)
            ++result;
        if (flagHasMultipleUnitTimeDifference)
            ++result;
        if (flagHasMultipleUnitTimeDifferenceWritten)
            ++result;
        if (flagHasMultipleUnitTimeDifferenceSpoken)
            ++result;
        if (flagHasRequestedInThePast)
            ++result;
        if (flagHasIsBetweenTwoDateTimes)
            ++result;
        result += extraTimeBetweenTimesInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSourceDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return "SourceDateAndOrTimeSpec";
            --remainder;
          }
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return "DestinationDateAndOrTimeSpec";
            --remainder;
          }
        if (flagHasUnitOfMeasureAmount)
          {
            if (remainder == 0)
                return "UnitOfMeasureAmount";
            --remainder;
          }
        if (flagHasTimeDifference)
          {
            if (remainder == 0)
                return "TimeDifference";
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return "Units";
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifference)
          {
            if (remainder == 0)
                return "MultipleUnitTimeDifference";
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceWritten)
          {
            if (remainder == 0)
                return "MultipleUnitTimeDifferenceWritten";
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceSpoken)
          {
            if (remainder == 0)
                return "MultipleUnitTimeDifferenceSpoken";
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return "RequestedInThePast";
            --remainder;
          }
        if (flagHasIsBetweenTwoDateTimes)
          {
            if (remainder == 0)
                return "IsBetweenTwoDateTimes";
            --remainder;
          }
        return extraTimeBetweenTimesInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSourceDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraSourceDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDestinationDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasUnitOfMeasureAmount)
          {
            if (remainder == 0)
                return extraUnitOfMeasureAmountToJSON();
            --remainder;
          }
        if (flagHasTimeDifference)
          {
            if (remainder == 0)
                return extraTimeDifferenceToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifference)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceWritten)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceWrittenToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceSpoken)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceSpokenToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        if (flagHasIsBetweenTwoDateTimes)
          {
            if (remainder == 0)
                return extraIsBetweenTwoDateTimesToJSON();
            --remainder;
          }
        return extraTimeBetweenTimesInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSourceDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraSourceDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDestinationDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasUnitOfMeasureAmount)
          {
            if (remainder == 0)
                return extraUnitOfMeasureAmountToJSON();
            --remainder;
          }
        if (flagHasTimeDifference)
          {
            if (remainder == 0)
                return extraTimeDifferenceToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifference)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceWritten)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceWrittenToJSON();
            --remainder;
          }
        if (flagHasMultipleUnitTimeDifferenceSpoken)
          {
            if (remainder == 0)
                return extraMultipleUnitTimeDifferenceSpokenToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        if (flagHasIsBetweenTwoDateTimes)
          {
            if (remainder == 0)
                return extraIsBetweenTwoDateTimesToJSON();
            --remainder;
          }
        return extraTimeBetweenTimesInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "estinationDateAndOrTimeSpec") == 0)
                    return (flagHasDestinationDateAndOrTimeSpec ? extraDestinationDateAndOrTimeSpecToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sBetweenTwoDateTimes") == 0)
                    return (flagHasIsBetweenTwoDateTimes ? extraIsBetweenTwoDateTimesToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "ultipleUnitTimeDifference", 25) == 0)
                  {
                    switch ((unsigned char)(field_name[26]))
                      {
                        case 0:
                            return (flagHasMultipleUnitTimeDifference ? extraMultipleUnitTimeDifferenceToJSON() : NULL);
                        case 'S':
                            if (strcmp(&(field_name[27]), "poken") == 0)
                                return (flagHasMultipleUnitTimeDifferenceSpoken ? extraMultipleUnitTimeDifferenceSpokenToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[27]), "ritten") == 0)
                                return (flagHasMultipleUnitTimeDifferenceWritten ? extraMultipleUnitTimeDifferenceWrittenToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedInThePast") == 0)
                    return (flagHasRequestedInThePast ? extraRequestedInThePastToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "ourceDateAndOrTimeSpec") == 0)
                    return (flagHasSourceDateAndOrTimeSpec ? extraSourceDateAndOrTimeSpecToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "imeDifference") == 0)
                    return (flagHasTimeDifference ? extraTimeDifferenceToJSON() : NULL);
                break;
            case 'U':
                if (strncmp(&(field_name[1]), "nit", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'O':
                            if (strcmp(&(field_name[5]), "fMeasureAmount") == 0)
                                return (flagHasUnitOfMeasureAmount ? extraUnitOfMeasureAmountToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[5] == 0)
                                return (flagHasUnits ? extraUnitsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeBetweenTimesInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "estinationDateAndOrTimeSpec") == 0)
                    return (flagHasDestinationDateAndOrTimeSpec ? extraDestinationDateAndOrTimeSpecToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "sBetweenTwoDateTimes") == 0)
                    return (flagHasIsBetweenTwoDateTimes ? extraIsBetweenTwoDateTimesToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "ultipleUnitTimeDifference", 25) == 0)
                  {
                    switch ((unsigned char)(field_name[26]))
                      {
                        case 0:
                            return (flagHasMultipleUnitTimeDifference ? extraMultipleUnitTimeDifferenceToJSON() : NULL);
                        case 'S':
                            if (strcmp(&(field_name[27]), "poken") == 0)
                                return (flagHasMultipleUnitTimeDifferenceSpoken ? extraMultipleUnitTimeDifferenceSpokenToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[27]), "ritten") == 0)
                                return (flagHasMultipleUnitTimeDifferenceWritten ? extraMultipleUnitTimeDifferenceWrittenToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedInThePast") == 0)
                    return (flagHasRequestedInThePast ? extraRequestedInThePastToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "ourceDateAndOrTimeSpec") == 0)
                    return (flagHasSourceDateAndOrTimeSpec ? extraSourceDateAndOrTimeSpecToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "imeDifference") == 0)
                    return (flagHasTimeDifference ? extraTimeDifferenceToJSON() : NULL);
                break;
            case 'U':
                if (strncmp(&(field_name[1]), "nit", 3) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'O':
                            if (strcmp(&(field_name[5]), "fMeasureAmount") == 0)
                                return (flagHasUnitOfMeasureAmount ? extraUnitOfMeasureAmountToJSON() : NULL);
                            break;
                        case 's':
                            if (field_name[5] == 0)
                                return (flagHasUnits ? extraUnitsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeBetweenTimesInformationNuggetLookup(field_name);
      }

    void setSourceDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceDateAndOrTimeSpec)
          {
            storeSourceDateAndOrTimeSpec->remove_reference();
          }
        flagHasSourceDateAndOrTimeSpec = true;
        storeSourceDateAndOrTimeSpec = new_value;
      }
    void unsetSourceDateAndOrTimeSpec(void)
      {
        if (flagHasSourceDateAndOrTimeSpec)
          {
            storeSourceDateAndOrTimeSpec->remove_reference();
          }
        flagHasSourceDateAndOrTimeSpec = false;
      }
    void setDestinationDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            storeDestinationDateAndOrTimeSpec->remove_reference();
          }
        flagHasDestinationDateAndOrTimeSpec = true;
        storeDestinationDateAndOrTimeSpec = new_value;
      }
    void unsetDestinationDateAndOrTimeSpec(void)
      {
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            storeDestinationDateAndOrTimeSpec->remove_reference();
          }
        flagHasDestinationDateAndOrTimeSpec = false;
      }
    void setUnitOfMeasureAmount(UnitOfMeasureAmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnitOfMeasureAmount)
          {
            storeUnitOfMeasureAmount->remove_reference();
          }
        flagHasUnitOfMeasureAmount = true;
        storeUnitOfMeasureAmount = new_value;
      }
    void unsetUnitOfMeasureAmount(void)
      {
        if (flagHasUnitOfMeasureAmount)
          {
            storeUnitOfMeasureAmount->remove_reference();
          }
        flagHasUnitOfMeasureAmount = false;
      }
    void setTimeDifference(double new_value)
      {
        flagHasTimeDifference = true;
        storeTimeDifference = new_value;
        textStoreTimeDifference = "";
      }
    void setTimeDifferenceText(std::string new_value)
      {
        flagHasTimeDifference = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TimeDifference of TimeBetweenTimesInformationNuggetJSON is not a valid number.");
        textStoreTimeDifference = new_value;
      }
    void unsetTimeDifference(void)
      {
        flagHasTimeDifference = false;
      }
    void setUnits(TypeUnits new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void setUnits(const char *chars)
      {
        TypeUnitsKnownValues known = stringToUnits(chars);
        TypeUnits new_value;
        if (known == Units__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setUnits(new_value);
      }
    void setUnits(std::string the_string)
      {
        setUnits(the_string.c_str());
      }
    void setUnits(TypeUnitsKnownValues new_value)
      {
        TypeUnits new_full_value;
        assert(new_value != Units__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setUnits(new_full_value);
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
      }
    void initMultipleUnitTimeDifference(void)
      {
        if (flagHasMultipleUnitTimeDifference)
          {
            for (size_t num2 = 0; num2 < storeMultipleUnitTimeDifference.size(); ++num2)
              {
                storeMultipleUnitTimeDifference[num2]->remove_reference();
              }
          }
        flagHasMultipleUnitTimeDifference = true;
        storeMultipleUnitTimeDifference.clear();
      }
    void appendMultipleUnitTimeDifference(AmountJSON * to_append)
      {
        if (!flagHasMultipleUnitTimeDifference)
          {
            flagHasMultipleUnitTimeDifference = true;
            storeMultipleUnitTimeDifference.clear();
          }
        assert(flagHasMultipleUnitTimeDifference);
        to_append->add_reference();
        storeMultipleUnitTimeDifference.push_back(to_append);
      }
    void unsetMultipleUnitTimeDifference(void)
      {
        if (flagHasMultipleUnitTimeDifference)
          {
            for (size_t num3 = 0; num3 < storeMultipleUnitTimeDifference.size(); ++num3)
              {
                storeMultipleUnitTimeDifference[num3]->remove_reference();
              }
          }
        flagHasMultipleUnitTimeDifference = false;
        storeMultipleUnitTimeDifference.clear();
      }
    void setMultipleUnitTimeDifferenceWritten(std::string new_value)
      {
        flagHasMultipleUnitTimeDifferenceWritten = true;
        storeMultipleUnitTimeDifferenceWritten = new_value;
      }
    void unsetMultipleUnitTimeDifferenceWritten(void)
      {
        flagHasMultipleUnitTimeDifferenceWritten = false;
      }
    void setMultipleUnitTimeDifferenceSpoken(std::string new_value)
      {
        flagHasMultipleUnitTimeDifferenceSpoken = true;
        storeMultipleUnitTimeDifferenceSpoken = new_value;
      }
    void unsetMultipleUnitTimeDifferenceSpoken(void)
      {
        flagHasMultipleUnitTimeDifferenceSpoken = false;
      }
    void setRequestedInThePast(bool new_value)
      {
        flagHasRequestedInThePast = true;
        storeRequestedInThePast = new_value;
      }
    void unsetRequestedInThePast(void)
      {
        flagHasRequestedInThePast = false;
      }
    void setIsBetweenTwoDateTimes(bool new_value)
      {
        flagHasIsBetweenTwoDateTimes = true;
        storeIsBetweenTwoDateTimes = new_value;
      }
    void unsetIsBetweenTwoDateTimes(void)
      {
        flagHasIsBetweenTwoDateTimes = false;
      }

    virtual void extraTimeBetweenTimesInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeBetweenTimesInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeBetweenTimesInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraTimeBetweenTimesInformationNuggetAppendPair(key, new_component);
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
    void extraDateAndTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "estinationDateAndOrTimeSpec") == 0)
                    {
                    fromJSONDestinationDateAndOrTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sBetweenTwoDateTimes") == 0)
                    {
                    fromJSONIsBetweenTwoDateTimes(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "ultipleUnitTimeDifference", 25) == 0)
                  {
                    switch ((unsigned char)(key[26]))
                      {
                        case 0:
                            {
                            fromJSONMultipleUnitTimeDifference(new_component, false);
                            return;
                            }
                        case 'S':
                            if (strcmp(&(key[27]), "poken") == 0)
                                {
                                fromJSONMultipleUnitTimeDifferenceSpoken(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[27]), "ritten") == 0)
                                {
                                fromJSONMultipleUnitTimeDifferenceWritten(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedInThePast") == 0)
                    {
                    fromJSONRequestedInThePast(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "ourceDateAndOrTimeSpec") == 0)
                    {
                    fromJSONSourceDateAndOrTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "imeDifference") == 0)
                    {
                    fromJSONTimeDifference(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strncmp(&(key[1]), "nit", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'O':
                            if (strcmp(&(key[5]), "fMeasureAmount") == 0)
                                {
                                fromJSONUnitOfMeasureAmount(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[5] == 0)
                                {
                                fromJSONUnits(new_component, false);
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
        extraTimeBetweenTimesInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "estinationDateAndOrTimeSpec") == 0)
                    {
                    fromJSONDestinationDateAndOrTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "sBetweenTwoDateTimes") == 0)
                    {
                    fromJSONIsBetweenTwoDateTimes(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "ultipleUnitTimeDifference", 25) == 0)
                  {
                    switch ((unsigned char)(key[26]))
                      {
                        case 0:
                            {
                            fromJSONMultipleUnitTimeDifference(new_component, false);
                            return;
                            }
                        case 'S':
                            if (strcmp(&(key[27]), "poken") == 0)
                                {
                                fromJSONMultipleUnitTimeDifferenceSpoken(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[27]), "ritten") == 0)
                                {
                                fromJSONMultipleUnitTimeDifferenceWritten(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedInThePast") == 0)
                    {
                    fromJSONRequestedInThePast(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "ourceDateAndOrTimeSpec") == 0)
                    {
                    fromJSONSourceDateAndOrTimeSpec(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "imeDifference") == 0)
                    {
                    fromJSONTimeDifference(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strncmp(&(key[1]), "nit", 3) == 0)
                  {
                    switch ((unsigned char)(key[4]))
                      {
                        case 'O':
                            if (strcmp(&(key[5]), "fMeasureAmount") == 0)
                                {
                                fromJSONUnitOfMeasureAmount(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (key[5] == 0)
                                {
                                fromJSONUnits(new_component, false);
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
        extraTimeBetweenTimesInformationNuggetSetField(key, new_component);
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
        DateAndTimeInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasSourceDateAndOrTimeSpec);
        handler->start_pair("SourceDateAndOrTimeSpec");
        storeSourceDateAndOrTimeSpec->write_as_json(handler);
        assert(flagHasDestinationDateAndOrTimeSpec);
        handler->start_pair("DestinationDateAndOrTimeSpec");
        storeDestinationDateAndOrTimeSpec->write_as_json(handler);
        if (flagHasUnitOfMeasureAmount)
          {
            handler->start_pair("UnitOfMeasureAmount");
            storeUnitOfMeasureAmount->write_as_json(handler);
          }
        assert(flagHasTimeDifference);
        handler->start_pair("TimeDifference");
        if (textStoreTimeDifference != "")
            handler->number_value(textStoreTimeDifference.c_str());
        else if (((double)(long int)storeTimeDifference) == storeTimeDifference)
            handler->number_value((long int)storeTimeDifference);
        else
            handler->number_value(storeTimeDifference);
        if (flagHasUnits)
          {
            handler->start_pair("Units");
            if (storeUnits.in_known_list)
              {
                switch (storeUnits.list_value)
                  {
                    case Units_unknown:
                        handler->string_value("unknown");
                        break;
                    case Units_days:
                        handler->string_value("days");
                        break;
                    case Units_weeks:
                        handler->string_value("weeks");
                        break;
                    case Units_months:
                        handler->string_value("months");
                        break;
                    case Units_years:
                        handler->string_value("years");
                        break;
                    case Units_decades:
                        handler->string_value("decades");
                        break;
                    case Units_centuries:
                        handler->string_value("centuries");
                        break;
                    case Units_seconds:
                        handler->string_value("seconds");
                        break;
                    case Units_minutes:
                        handler->string_value("minutes");
                        break;
                    case Units_hours:
                        handler->string_value("hours");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeUnits.string_value);
              }
          }
        if (flagHasMultipleUnitTimeDifference)
          {
            handler->start_pair("MultipleUnitTimeDifference");
            assert(storeMultipleUnitTimeDifference.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeMultipleUnitTimeDifference.size(); ++num1)
              {
                storeMultipleUnitTimeDifference[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasMultipleUnitTimeDifferenceWritten)
          {
            handler->start_pair("MultipleUnitTimeDifferenceWritten");
            handler->string_value(storeMultipleUnitTimeDifferenceWritten);
          }
        if (flagHasMultipleUnitTimeDifferenceSpoken)
          {
            handler->start_pair("MultipleUnitTimeDifferenceSpoken");
            handler->string_value(storeMultipleUnitTimeDifferenceSpoken);
          }
        assert(flagHasRequestedInThePast);
        handler->start_pair("RequestedInThePast");
        handler->boolean_value(storeRequestedInThePast);
        assert(flagHasIsBetweenTwoDateTimes);
        handler->start_pair("IsBetweenTwoDateTimes");
        handler->boolean_value(storeIsBetweenTwoDateTimes);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSourceDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"SourceDateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasDestinationDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationDateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasTimeDifference()))
          {
            return "When parsing the object for %what%, the \"TimeDifference\" field was missing.";
          }
        if (!(hasRequestedInThePast()))
          {
            return "When parsing the object for %what%, the \"RequestedInThePast\" field was missing.";
          }
        if (!(hasIsBetweenTwoDateTimes()))
          {
            return "When parsing the object for %what%, the \"IsBetweenTwoDateTimes\" field was missing.";
          }
        return NULL;
      }

    static TimeBetweenTimesInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeBetweenTimesInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeBetweenTimesInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesInformationNuggetJSON>, TimeBetweenTimesInformationNuggetJSON *, bool> generator("Type TimeBetweenTimesInformationNugget", ignore_extras);
            parse_json_value(text, "Text for TimeBetweenTimesInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeBetweenTimesInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeBetweenTimesInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesInformationNuggetJSON>, TimeBetweenTimesInformationNuggetJSON *, bool> generator("Type TimeBetweenTimesInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DateAndTimeInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorSourceDateAndOrTimeSpec;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDestinationDateAndOrTimeSpec;
        JSONHoldingGenerator<UnitOfMeasureAmountJSON::Generator, RCHandle<UnitOfMeasureAmountJSON>, UnitOfMeasureAmountJSON *, bool > fieldGeneratorUnitOfMeasureAmount;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTimeDifference;
    class FieldGeneratorUnits : public JSONStringGenerator
          {
          protected:
            FieldGeneratorUnits(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorUnits(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeUnitsKnownValues known = stringToUnits(result);
                TypeUnits new_value;
                if (known == Units__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeUnits result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorUnits, TypeUnits, TypeUnits > fieldGeneratorUnits;
        JSONHoldingArrayGenerator<AmountJSON::Generator, RCHandle<AmountJSON>, AmountJSON *, bool > fieldGeneratorMultipleUnitTimeDifference;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMultipleUnitTimeDifferenceWritten;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMultipleUnitTimeDifferenceSpoken;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedInThePast;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsBetweenTwoDateTimes;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "TimeBetweenTimes") == 0))
                throw("The key field has a value other than `TimeBetweenTimes'.");
            TimeBetweenTimesInformationNuggetJSON *result = new TimeBetweenTimesInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<TimeBetweenTimesInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeBetweenTimesInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((TimeBetweenTimesInformationNuggetJSON *)new_result);
          }
        void finish(TimeBetweenTimesInformationNuggetJSON *result)
          {
            if (fieldGeneratorSourceDateAndOrTimeSpec.have_value)
              {
                result->setSourceDateAndOrTimeSpec(fieldGeneratorSourceDateAndOrTimeSpec.value.referenced());
                fieldGeneratorSourceDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasSourceDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"SourceDateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDestinationDateAndOrTimeSpec.have_value)
              {
                result->setDestinationDateAndOrTimeSpec(fieldGeneratorDestinationDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDestinationDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDestinationDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DestinationDateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorUnitOfMeasureAmount.have_value)
              {
                result->setUnitOfMeasureAmount(fieldGeneratorUnitOfMeasureAmount.value.referenced());
                fieldGeneratorUnitOfMeasureAmount.have_value = false;
              }
            if (fieldGeneratorTimeDifference.have_value)
              {
                result->setTimeDifferenceText(fieldGeneratorTimeDifference.value);
                fieldGeneratorTimeDifference.have_value = false;
              }
            else if (!(result->hasTimeDifference()))
              {
                error("When parsing the object for %what%, the \"TimeDifference\" field was missing.");
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            if (fieldGeneratorMultipleUnitTimeDifference.have_value)
              {
                result->initMultipleUnitTimeDifference();
                size_t count = fieldGeneratorMultipleUnitTimeDifference.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMultipleUnitTimeDifference(fieldGeneratorMultipleUnitTimeDifference.value[num].referenced());
                  }
                fieldGeneratorMultipleUnitTimeDifference.value.clear();
                fieldGeneratorMultipleUnitTimeDifference.have_value = false;
              }
            if (fieldGeneratorMultipleUnitTimeDifferenceWritten.have_value)
              {
                result->setMultipleUnitTimeDifferenceWritten(fieldGeneratorMultipleUnitTimeDifferenceWritten.value);
                fieldGeneratorMultipleUnitTimeDifferenceWritten.have_value = false;
              }
            if (fieldGeneratorMultipleUnitTimeDifferenceSpoken.have_value)
              {
                result->setMultipleUnitTimeDifferenceSpoken(fieldGeneratorMultipleUnitTimeDifferenceSpoken.value);
                fieldGeneratorMultipleUnitTimeDifferenceSpoken.have_value = false;
              }
            if (fieldGeneratorRequestedInThePast.have_value)
              {
                result->setRequestedInThePast(fieldGeneratorRequestedInThePast.value);
                fieldGeneratorRequestedInThePast.have_value = false;
              }
            else if (!(result->hasRequestedInThePast()))
              {
                error("When parsing the object for %what%, the \"RequestedInThePast\" field was missing.");
              }
            if (fieldGeneratorIsBetweenTwoDateTimes.have_value)
              {
                result->setIsBetweenTwoDateTimes(fieldGeneratorIsBetweenTwoDateTimes.value);
                fieldGeneratorIsBetweenTwoDateTimes.have_value = false;
              }
            else if (!(result->hasIsBetweenTwoDateTimes()))
              {
                error("When parsing the object for %what%, the \"IsBetweenTwoDateTimes\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(TimeBetweenTimesInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "estinationDateAndOrTimeSpec") == 0)
                        return &fieldGeneratorDestinationDateAndOrTimeSpec;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sBetweenTwoDateTimes") == 0)
                        return &fieldGeneratorIsBetweenTwoDateTimes;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "ultipleUnitTimeDifference", 25) == 0)
                      {
                        switch ((unsigned char)(field_name[26]))
                          {
                            case 0:
                                return &fieldGeneratorMultipleUnitTimeDifference;
                            case 'S':
                                if (strcmp(&(field_name[27]), "poken") == 0)
                                    return &fieldGeneratorMultipleUnitTimeDifferenceSpoken;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[27]), "ritten") == 0)
                                    return &fieldGeneratorMultipleUnitTimeDifferenceWritten;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedInThePast") == 0)
                        return &fieldGeneratorRequestedInThePast;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ourceDateAndOrTimeSpec") == 0)
                        return &fieldGeneratorSourceDateAndOrTimeSpec;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "imeDifference") == 0)
                        return &fieldGeneratorTimeDifference;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nit", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'O':
                                if (strcmp(&(field_name[5]), "fMeasureAmount") == 0)
                                    return &fieldGeneratorUnitOfMeasureAmount;
                                break;
                            case 's':
                                if (field_name[5] == 0)
                                    return &fieldGeneratorUnits;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorSourceDateAndOrTimeSpec("field \"SourceDateAndOrTimeSpec\" of the TimeBetweenTimesInformationNugget class", ignore_extras), fieldGeneratorDestinationDateAndOrTimeSpec("field \"DestinationDateAndOrTimeSpec\" of the TimeBetweenTimesInformationNugget class", ignore_extras), fieldGeneratorUnitOfMeasureAmount("field \"UnitOfMeasureAmount\" of the TimeBetweenTimesInformationNugget class", ignore_extras), fieldGeneratorTimeDifference("field \"TimeDifference\" of the TimeBetweenTimesInformationNugget class"), fieldGeneratorUnits("field \"Units\" of the TimeBetweenTimesInformationNugget class"), fieldGeneratorMultipleUnitTimeDifference("field \"MultipleUnitTimeDifference\" of the TimeBetweenTimesInformationNugget class", ignore_extras), fieldGeneratorMultipleUnitTimeDifferenceWritten("field \"MultipleUnitTimeDifferenceWritten\" of the TimeBetweenTimesInformationNugget class"), fieldGeneratorMultipleUnitTimeDifferenceSpoken("field \"MultipleUnitTimeDifferenceSpoken\" of the TimeBetweenTimesInformationNugget class"), fieldGeneratorRequestedInThePast("field \"RequestedInThePast\" of the TimeBetweenTimesInformationNugget class"), fieldGeneratorIsBetweenTwoDateTimes("field \"IsBetweenTwoDateTimes\" of the TimeBetweenTimesInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeBetweenTimesInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSourceDateAndOrTimeSpec.reset();
            fieldGeneratorDestinationDateAndOrTimeSpec.reset();
            fieldGeneratorUnitOfMeasureAmount.reset();
            fieldGeneratorTimeDifference.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorMultipleUnitTimeDifference.reset();
            fieldGeneratorMultipleUnitTimeDifferenceWritten.reset();
            fieldGeneratorMultipleUnitTimeDifferenceSpoken.reset();
            fieldGeneratorRequestedInThePast.reset();
            fieldGeneratorIsBetweenTwoDateTimes.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEBETWEENTIMESINFORMATIONNUGGETJSON_H */
