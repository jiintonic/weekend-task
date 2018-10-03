/* file "ShowDirectionsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWDIRECTIONSINFORMATIONNUGGETJSON_H
#define SHOWDIRECTIONSINFORMATIONNUGGETJSON_H

#pragma interface

#include "MapInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowDirectionsInformationNuggetJSON : public MapInformationNuggetJSON
  {
  public:
    enum TypeNavigationMethod
      {
        NavigationMethod_Walk,
        NavigationMethod_Transit,
        NavigationMethod_Bike,
        NavigationMethod_Drive
      };

    static TypeNavigationMethod  stringToNavigationMethod(const char *chars);
    static const char * stringFromNavigationMethod(TypeNavigationMethod the_enum);
    enum TypeCorrectionState
      {
        CorrectionState_None,
        CorrectionState_TryNewLocation,
        CorrectionState_Fail
      };

    static TypeCorrectionState  stringToCorrectionState(const char *chars);
    static const char * stringFromCorrectionState(TypeCorrectionState the_enum);

  private:
    bool flagHasStartMapLocationSpec;
    MapLocationJSON * storeStartMapLocationSpec;
    bool flagHasDestinationMapLocationSpec;
    MapLocationJSON * storeDestinationMapLocationSpec;
    bool flagHasImplicitStart;
    bool storeImplicitStart;
    bool flagHasNavigationMethod;
    TypeNavigationMethod storeNavigationMethod;
    bool flagHasNavigate;
    bool storeNavigate;
    bool flagHasAsksForDistance;
    bool storeAsksForDistance;
    bool flagHasAsksForTravelTime;
    bool storeAsksForTravelTime;
    bool flagHasDistance;
    double storeDistance;
    std::string textStoreDistance;
    bool flagHasUnitOfMeasureID;
    std::string storeUnitOfMeasureID;
    bool flagHasUnitOfLengthSingular;
    std::string storeUnitOfLengthSingular;
    bool flagHasUnitOfLengthPlural;
    std::string storeUnitOfLengthPlural;
    bool flagHasTravelTime;
    double storeTravelTime;
    std::string textStoreTravelTime;
    bool flagHasCorrectionState;
    TypeCorrectionState storeCorrectionState;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowDirectionsInformationNuggetJSON(const ShowDirectionsInformationNuggetJSON &);
    ShowDirectionsInformationNuggetJSON & operator=(const ShowDirectionsInformationNuggetJSON &other);

    JSONValue * extraStartMapLocationSpecToJSON(void) const;
    JSONValue * extraDestinationMapLocationSpecToJSON(void) const;
    JSONValue * extraImplicitStartToJSON(void) const;
    JSONValue * extraNavigationMethodToJSON(void) const;
    JSONValue * extraNavigateToJSON(void) const;
    JSONValue * extraAsksForDistanceToJSON(void) const;
    JSONValue * extraAsksForTravelTimeToJSON(void) const;
    JSONValue * extraDistanceToJSON(void) const;
    JSONValue * extraUnitOfMeasureIDToJSON(void) const;
    JSONValue * extraUnitOfLengthSingularToJSON(void) const;
    JSONValue * extraUnitOfLengthPluralToJSON(void) const;
    JSONValue * extraTravelTimeToJSON(void) const;
    JSONValue * extraCorrectionStateToJSON(void) const;

    void  fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNavigate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfLengthSingular(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfLengthPlural(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTravelTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowDirectionsInformationNuggetJSON(void);
    virtual ~ShowDirectionsInformationNuggetJSON(void);
    const char * getMapNuggetKind(void) const;
    bool  hasStartMapLocationSpec(void) const;
    MapLocationJSON *  getStartMapLocationSpec(void);
    const MapLocationJSON *  getStartMapLocationSpec(void) const;
    bool  hasDestinationMapLocationSpec(void) const;
    MapLocationJSON *  getDestinationMapLocationSpec(void);
    const MapLocationJSON *  getDestinationMapLocationSpec(void) const;
    bool  hasImplicitStart(void) const;
    bool  getImplicitStart(void);
    const bool  getImplicitStart(void) const;
    bool  hasNavigationMethod(void) const;
    TypeNavigationMethod  getNavigationMethod(void);
    const TypeNavigationMethod  getNavigationMethod(void) const;
    const char * getNavigationMethodAsChars(void) const;
    std::string  getNavigationMethodAsString(void) const;
    bool  hasNavigate(void) const;
    bool  getNavigate(void);
    const bool  getNavigate(void) const;
    bool  hasAsksForDistance(void) const;
    bool  getAsksForDistance(void);
    const bool  getAsksForDistance(void) const;
    bool  hasAsksForTravelTime(void) const;
    bool  getAsksForTravelTime(void);
    const bool  getAsksForTravelTime(void) const;
    bool  hasDistance(void) const;
    double  getDistance(void);
    const double  getDistance(void) const;
    std::string  getDistanceAsText(void) const;
    bool  hasUnitOfMeasureID(void) const;
    std::string  getUnitOfMeasureID(void);
    const std::string  getUnitOfMeasureID(void) const;
    bool  hasUnitOfLengthSingular(void) const;
    std::string  getUnitOfLengthSingular(void);
    const std::string  getUnitOfLengthSingular(void) const;
    bool  hasUnitOfLengthPlural(void) const;
    std::string  getUnitOfLengthPlural(void);
    const std::string  getUnitOfLengthPlural(void) const;
    bool  hasTravelTime(void) const;
    double  getTravelTime(void);
    const double  getTravelTime(void) const;
    std::string  getTravelTimeAsText(void) const;
    bool  hasCorrectionState(void) const;
    TypeCorrectionState  getCorrectionState(void);
    const TypeCorrectionState  getCorrectionState(void) const;
    const char * getCorrectionStateAsChars(void) const;
    std::string  getCorrectionStateAsString(void) const;

    virtual size_t extraShowDirectionsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowDirectionsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowDirectionsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowDirectionsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowDirectionsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowDirectionsInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMapInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasStartMapLocationSpec)
            ++result;
        if (flagHasDestinationMapLocationSpec)
            ++result;
        if (flagHasImplicitStart)
            ++result;
        if (flagHasNavigationMethod)
            ++result;
        if (flagHasNavigate)
            ++result;
        if (flagHasAsksForDistance)
            ++result;
        if (flagHasAsksForTravelTime)
            ++result;
        if (flagHasDistance)
            ++result;
        if (flagHasUnitOfMeasureID)
            ++result;
        if (flagHasUnitOfLengthSingular)
            ++result;
        if (flagHasUnitOfLengthPlural)
            ++result;
        if (flagHasTravelTime)
            ++result;
        if (flagHasCorrectionState)
            ++result;
        result += extraShowDirectionsInformationNuggetComponentCount();
        return result;
      }
    const char *extraMapInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartMapLocationSpec)
          {
            if (remainder == 0)
                return "StartMapLocationSpec";
            --remainder;
          }
        if (flagHasDestinationMapLocationSpec)
          {
            if (remainder == 0)
                return "DestinationMapLocationSpec";
            --remainder;
          }
        if (flagHasImplicitStart)
          {
            if (remainder == 0)
                return "ImplicitStart";
            --remainder;
          }
        if (flagHasNavigationMethod)
          {
            if (remainder == 0)
                return "NavigationMethod";
            --remainder;
          }
        if (flagHasNavigate)
          {
            if (remainder == 0)
                return "Navigate";
            --remainder;
          }
        if (flagHasAsksForDistance)
          {
            if (remainder == 0)
                return "AsksForDistance";
            --remainder;
          }
        if (flagHasAsksForTravelTime)
          {
            if (remainder == 0)
                return "AsksForTravelTime";
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return "Distance";
            --remainder;
          }
        if (flagHasUnitOfMeasureID)
          {
            if (remainder == 0)
                return "UnitOfMeasureID";
            --remainder;
          }
        if (flagHasUnitOfLengthSingular)
          {
            if (remainder == 0)
                return "UnitOfLengthSingular";
            --remainder;
          }
        if (flagHasUnitOfLengthPlural)
          {
            if (remainder == 0)
                return "UnitOfLengthPlural";
            --remainder;
          }
        if (flagHasTravelTime)
          {
            if (remainder == 0)
                return "TravelTime";
            --remainder;
          }
        if (flagHasCorrectionState)
          {
            if (remainder == 0)
                return "CorrectionState";
            --remainder;
          }
        return extraShowDirectionsInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraMapInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasStartMapLocationSpec)
          {
            if (remainder == 0)
                return extraStartMapLocationSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocationSpec)
          {
            if (remainder == 0)
                return extraDestinationMapLocationSpecToJSON();
            --remainder;
          }
        if (flagHasImplicitStart)
          {
            if (remainder == 0)
                return extraImplicitStartToJSON();
            --remainder;
          }
        if (flagHasNavigationMethod)
          {
            if (remainder == 0)
                return extraNavigationMethodToJSON();
            --remainder;
          }
        if (flagHasNavigate)
          {
            if (remainder == 0)
                return extraNavigateToJSON();
            --remainder;
          }
        if (flagHasAsksForDistance)
          {
            if (remainder == 0)
                return extraAsksForDistanceToJSON();
            --remainder;
          }
        if (flagHasAsksForTravelTime)
          {
            if (remainder == 0)
                return extraAsksForTravelTimeToJSON();
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return extraDistanceToJSON();
            --remainder;
          }
        if (flagHasUnitOfMeasureID)
          {
            if (remainder == 0)
                return extraUnitOfMeasureIDToJSON();
            --remainder;
          }
        if (flagHasUnitOfLengthSingular)
          {
            if (remainder == 0)
                return extraUnitOfLengthSingularToJSON();
            --remainder;
          }
        if (flagHasUnitOfLengthPlural)
          {
            if (remainder == 0)
                return extraUnitOfLengthPluralToJSON();
            --remainder;
          }
        if (flagHasTravelTime)
          {
            if (remainder == 0)
                return extraTravelTimeToJSON();
            --remainder;
          }
        if (flagHasCorrectionState)
          {
            if (remainder == 0)
                return extraCorrectionStateToJSON();
            --remainder;
          }
        return extraShowDirectionsInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraMapInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasStartMapLocationSpec)
          {
            if (remainder == 0)
                return extraStartMapLocationSpecToJSON();
            --remainder;
          }
        if (flagHasDestinationMapLocationSpec)
          {
            if (remainder == 0)
                return extraDestinationMapLocationSpecToJSON();
            --remainder;
          }
        if (flagHasImplicitStart)
          {
            if (remainder == 0)
                return extraImplicitStartToJSON();
            --remainder;
          }
        if (flagHasNavigationMethod)
          {
            if (remainder == 0)
                return extraNavigationMethodToJSON();
            --remainder;
          }
        if (flagHasNavigate)
          {
            if (remainder == 0)
                return extraNavigateToJSON();
            --remainder;
          }
        if (flagHasAsksForDistance)
          {
            if (remainder == 0)
                return extraAsksForDistanceToJSON();
            --remainder;
          }
        if (flagHasAsksForTravelTime)
          {
            if (remainder == 0)
                return extraAsksForTravelTimeToJSON();
            --remainder;
          }
        if (flagHasDistance)
          {
            if (remainder == 0)
                return extraDistanceToJSON();
            --remainder;
          }
        if (flagHasUnitOfMeasureID)
          {
            if (remainder == 0)
                return extraUnitOfMeasureIDToJSON();
            --remainder;
          }
        if (flagHasUnitOfLengthSingular)
          {
            if (remainder == 0)
                return extraUnitOfLengthSingularToJSON();
            --remainder;
          }
        if (flagHasUnitOfLengthPlural)
          {
            if (remainder == 0)
                return extraUnitOfLengthPluralToJSON();
            --remainder;
          }
        if (flagHasTravelTime)
          {
            if (remainder == 0)
                return extraTravelTimeToJSON();
            --remainder;
          }
        if (flagHasCorrectionState)
          {
            if (remainder == 0)
                return extraCorrectionStateToJSON();
            --remainder;
          }
        return extraShowDirectionsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraMapInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "sksFor", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[8]), "istance") == 0)
                                return (flagHasAsksForDistance ? extraAsksForDistanceToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "ravelTime") == 0)
                                return (flagHasAsksForTravelTime ? extraAsksForTravelTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "orrectionState") == 0)
                    return (flagHasCorrectionState ? extraCorrectionStateToJSON() : NULL);
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "stinationMapLocationSpec") == 0)
                            return (flagHasDestinationMapLocationSpec ? extraDestinationMapLocationSpecToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "stance") == 0)
                            return (flagHasDistance ? extraDistanceToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mplicitStart") == 0)
                    return (flagHasImplicitStart ? extraImplicitStartToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "avigat", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'e':
                            if (field_name[8] == 0)
                                return (flagHasNavigate ? extraNavigateToJSON() : NULL);
                            break;
                        case 'i':
                            if (strcmp(&(field_name[8]), "onMethod") == 0)
                                return (flagHasNavigationMethod ? extraNavigationMethodToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartMapLocationSpec") == 0)
                    return (flagHasStartMapLocationSpec ? extraStartMapLocationSpecToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ravelTime") == 0)
                    return (flagHasTravelTime ? extraTravelTimeToJSON() : NULL);
                break;
            case 'U':
                if (strncmp(&(field_name[1]), "nitOf", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'L':
                            if (strncmp(&(field_name[7]), "ength", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[12]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[13]), "lural") == 0)
                                            return (flagHasUnitOfLengthPlural ? extraUnitOfLengthPluralToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[13]), "ingular") == 0)
                                            return (flagHasUnitOfLengthSingular ? extraUnitOfLengthSingularToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "easureID") == 0)
                                return (flagHasUnitOfMeasureID ? extraUnitOfMeasureIDToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraShowDirectionsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraMapInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strncmp(&(field_name[1]), "sksFor", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[8]), "istance") == 0)
                                return (flagHasAsksForDistance ? extraAsksForDistanceToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[8]), "ravelTime") == 0)
                                return (flagHasAsksForTravelTime ? extraAsksForTravelTimeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "orrectionState") == 0)
                    return (flagHasCorrectionState ? extraCorrectionStateToJSON() : NULL);
                break;
            case 'D':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'e':
                        if (strcmp(&(field_name[2]), "stinationMapLocationSpec") == 0)
                            return (flagHasDestinationMapLocationSpec ? extraDestinationMapLocationSpecToJSON() : NULL);
                        break;
                    case 'i':
                        if (strcmp(&(field_name[2]), "stance") == 0)
                            return (flagHasDistance ? extraDistanceToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "mplicitStart") == 0)
                    return (flagHasImplicitStart ? extraImplicitStartToJSON() : NULL);
                break;
            case 'N':
                if (strncmp(&(field_name[1]), "avigat", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 'e':
                            if (field_name[8] == 0)
                                return (flagHasNavigate ? extraNavigateToJSON() : NULL);
                            break;
                        case 'i':
                            if (strcmp(&(field_name[8]), "onMethod") == 0)
                                return (flagHasNavigationMethod ? extraNavigationMethodToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "tartMapLocationSpec") == 0)
                    return (flagHasStartMapLocationSpec ? extraStartMapLocationSpecToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ravelTime") == 0)
                    return (flagHasTravelTime ? extraTravelTimeToJSON() : NULL);
                break;
            case 'U':
                if (strncmp(&(field_name[1]), "nitOf", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[6]))
                      {
                        case 'L':
                            if (strncmp(&(field_name[7]), "ength", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[12]))
                                  {
                                    case 'P':
                                        if (strcmp(&(field_name[13]), "lural") == 0)
                                            return (flagHasUnitOfLengthPlural ? extraUnitOfLengthPluralToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[13]), "ingular") == 0)
                                            return (flagHasUnitOfLengthSingular ? extraUnitOfLengthSingularToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'M':
                            if (strcmp(&(field_name[7]), "easureID") == 0)
                                return (flagHasUnitOfMeasureID ? extraUnitOfMeasureIDToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraShowDirectionsInformationNuggetLookup(field_name);
      }

    void setStartMapLocationSpec(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartMapLocationSpec)
          {
            storeStartMapLocationSpec->remove_reference();
          }
        flagHasStartMapLocationSpec = true;
        storeStartMapLocationSpec = new_value;
      }
    void unsetStartMapLocationSpec(void)
      {
        if (flagHasStartMapLocationSpec)
          {
            storeStartMapLocationSpec->remove_reference();
          }
        flagHasStartMapLocationSpec = false;
      }
    void setDestinationMapLocationSpec(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationMapLocationSpec)
          {
            storeDestinationMapLocationSpec->remove_reference();
          }
        flagHasDestinationMapLocationSpec = true;
        storeDestinationMapLocationSpec = new_value;
      }
    void unsetDestinationMapLocationSpec(void)
      {
        if (flagHasDestinationMapLocationSpec)
          {
            storeDestinationMapLocationSpec->remove_reference();
          }
        flagHasDestinationMapLocationSpec = false;
      }
    void setImplicitStart(bool new_value)
      {
        flagHasImplicitStart = true;
        storeImplicitStart = new_value;
      }
    void unsetImplicitStart(void)
      {
        flagHasImplicitStart = false;
      }
    void setNavigationMethod(TypeNavigationMethod new_value)
      {
        flagHasNavigationMethod = true;
        storeNavigationMethod = new_value;
      }
    void setNavigationMethod(const char *chars)
      {
        setNavigationMethod(stringToNavigationMethod(chars));
      }
    void setNavigationMethod(std::string the_string)
      {
        setNavigationMethod(stringToNavigationMethod(the_string.c_str()));
      }
    void unsetNavigationMethod(void)
      {
        flagHasNavigationMethod = false;
      }
    void setNavigate(bool new_value)
      {
        flagHasNavigate = true;
        storeNavigate = new_value;
      }
    void unsetNavigate(void)
      {
        flagHasNavigate = false;
      }
    void setAsksForDistance(bool new_value)
      {
        flagHasAsksForDistance = true;
        storeAsksForDistance = new_value;
      }
    void unsetAsksForDistance(void)
      {
        flagHasAsksForDistance = false;
      }
    void setAsksForTravelTime(bool new_value)
      {
        flagHasAsksForTravelTime = true;
        storeAsksForTravelTime = new_value;
      }
    void unsetAsksForTravelTime(void)
      {
        flagHasAsksForTravelTime = false;
      }
    void setDistance(double new_value)
      {
        flagHasDistance = true;
        if (new_value < -1)
            throw("The value for field Distance of ShowDirectionsInformationNuggetJSON is less than the lower bound (-1) for that field.");
        storeDistance = new_value;
        textStoreDistance = "";
      }
    void setDistanceText(std::string new_value)
      {
        flagHasDistance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Distance of ShowDirectionsInformationNuggetJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field Distance of ShowDirectionsInformationNuggetJSON is less than the lower bound (-1) for that field.");
        textStoreDistance = new_value;
      }
    void unsetDistance(void)
      {
        flagHasDistance = false;
      }
    void setUnitOfMeasureID(std::string new_value)
      {
        flagHasUnitOfMeasureID = true;
        storeUnitOfMeasureID = new_value;
      }
    void unsetUnitOfMeasureID(void)
      {
        flagHasUnitOfMeasureID = false;
      }
    void setUnitOfLengthSingular(std::string new_value)
      {
        flagHasUnitOfLengthSingular = true;
        storeUnitOfLengthSingular = new_value;
      }
    void unsetUnitOfLengthSingular(void)
      {
        flagHasUnitOfLengthSingular = false;
      }
    void setUnitOfLengthPlural(std::string new_value)
      {
        flagHasUnitOfLengthPlural = true;
        storeUnitOfLengthPlural = new_value;
      }
    void unsetUnitOfLengthPlural(void)
      {
        flagHasUnitOfLengthPlural = false;
      }
    void setTravelTime(double new_value)
      {
        flagHasTravelTime = true;
        if (new_value < -1)
            throw("The value for field TravelTime of ShowDirectionsInformationNuggetJSON is less than the lower bound (-1) for that field.");
        storeTravelTime = new_value;
        textStoreTravelTime = "";
      }
    void setTravelTimeText(std::string new_value)
      {
        flagHasTravelTime = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TravelTime of ShowDirectionsInformationNuggetJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
            throw("The value for field TravelTime of ShowDirectionsInformationNuggetJSON is less than the lower bound (-1) for that field.");
        textStoreTravelTime = new_value;
      }
    void unsetTravelTime(void)
      {
        flagHasTravelTime = false;
      }
    void setCorrectionState(TypeCorrectionState new_value)
      {
        flagHasCorrectionState = true;
        storeCorrectionState = new_value;
      }
    void setCorrectionState(const char *chars)
      {
        setCorrectionState(stringToCorrectionState(chars));
      }
    void setCorrectionState(std::string the_string)
      {
        setCorrectionState(stringToCorrectionState(the_string.c_str()));
      }
    void unsetCorrectionState(void)
      {
        flagHasCorrectionState = false;
      }

    virtual void extraShowDirectionsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowDirectionsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowDirectionsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowDirectionsInformationNuggetAppendPair(key, new_component);
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
    void extraMapInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "sksFor", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'D':
                            if (strcmp(&(key[8]), "istance") == 0)
                                {
                                fromJSONAsksForDistance(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "ravelTime") == 0)
                                {
                                fromJSONAsksForTravelTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "orrectionState") == 0)
                    {
                    fromJSONCorrectionState(new_component, false);
                    return;
                    }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "stinationMapLocationSpec") == 0)
                            {
                            fromJSONDestinationMapLocationSpec(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "stance") == 0)
                            {
                            fromJSONDistance(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mplicitStart") == 0)
                    {
                    fromJSONImplicitStart(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "avigat", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'e':
                            if (key[8] == 0)
                                {
                                fromJSONNavigate(new_component, false);
                                return;
                                }
                            break;
                        case 'i':
                            if (strcmp(&(key[8]), "onMethod") == 0)
                                {
                                fromJSONNavigationMethod(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartMapLocationSpec") == 0)
                    {
                    fromJSONStartMapLocationSpec(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ravelTime") == 0)
                    {
                    fromJSONTravelTime(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strncmp(&(key[1]), "nitOf", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'L':
                            if (strncmp(&(key[7]), "ength", 5) == 0)
                              {
                                switch ((unsigned char)(key[12]))
                                  {
                                    case 'P':
                                        if (strcmp(&(key[13]), "lural") == 0)
                                            {
                                            fromJSONUnitOfLengthPlural(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[13]), "ingular") == 0)
                                            {
                                            fromJSONUnitOfLengthSingular(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "easureID") == 0)
                                {
                                fromJSONUnitOfMeasureID(new_component, false);
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
        extraShowDirectionsInformationNuggetAppendPair(key, new_component);
      }
    void extraMapInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strncmp(&(key[1]), "sksFor", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'D':
                            if (strcmp(&(key[8]), "istance") == 0)
                                {
                                fromJSONAsksForDistance(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[8]), "ravelTime") == 0)
                                {
                                fromJSONAsksForTravelTime(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'C':
                if (strcmp(&(key[1]), "orrectionState") == 0)
                    {
                    fromJSONCorrectionState(new_component, false);
                    return;
                    }
                break;
            case 'D':
                switch ((unsigned char)(key[1]))
                  {
                    case 'e':
                        if (strcmp(&(key[2]), "stinationMapLocationSpec") == 0)
                            {
                            fromJSONDestinationMapLocationSpec(new_component, false);
                            return;
                            }
                        break;
                    case 'i':
                        if (strcmp(&(key[2]), "stance") == 0)
                            {
                            fromJSONDistance(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(key[1]), "mplicitStart") == 0)
                    {
                    fromJSONImplicitStart(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strncmp(&(key[1]), "avigat", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 'e':
                            if (key[8] == 0)
                                {
                                fromJSONNavigate(new_component, false);
                                return;
                                }
                            break;
                        case 'i':
                            if (strcmp(&(key[8]), "onMethod") == 0)
                                {
                                fromJSONNavigationMethod(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strcmp(&(key[1]), "tartMapLocationSpec") == 0)
                    {
                    fromJSONStartMapLocationSpec(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ravelTime") == 0)
                    {
                    fromJSONTravelTime(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strncmp(&(key[1]), "nitOf", 5) == 0)
                  {
                    switch ((unsigned char)(key[6]))
                      {
                        case 'L':
                            if (strncmp(&(key[7]), "ength", 5) == 0)
                              {
                                switch ((unsigned char)(key[12]))
                                  {
                                    case 'P':
                                        if (strcmp(&(key[13]), "lural") == 0)
                                            {
                                            fromJSONUnitOfLengthPlural(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[13]), "ingular") == 0)
                                            {
                                            fromJSONUnitOfLengthSingular(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'M':
                            if (strcmp(&(key[7]), "easureID") == 0)
                                {
                                fromJSONUnitOfMeasureID(new_component, false);
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
        extraShowDirectionsInformationNuggetSetField(key, new_component);
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
        MapInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasStartMapLocationSpec)
          {
            handler->start_pair("StartMapLocationSpec");
            storeStartMapLocationSpec->write_as_json(handler);
          }
        assert(flagHasDestinationMapLocationSpec);
        handler->start_pair("DestinationMapLocationSpec");
        storeDestinationMapLocationSpec->write_as_json(handler);
        if (flagHasImplicitStart)
          {
            handler->start_pair("ImplicitStart");
            handler->boolean_value(storeImplicitStart);
          }
        assert(flagHasNavigationMethod);
        handler->start_pair("NavigationMethod");
        switch (storeNavigationMethod)
          {
            case NavigationMethod_Walk:
                handler->string_value("Walk");
                break;
            case NavigationMethod_Transit:
                handler->string_value("Transit");
                break;
            case NavigationMethod_Bike:
                handler->string_value("Bike");
                break;
            case NavigationMethod_Drive:
                handler->string_value("Drive");
                break;
            default:
                assert(false);
          }
        assert(flagHasNavigate);
        handler->start_pair("Navigate");
        handler->boolean_value(storeNavigate);
        assert(flagHasAsksForDistance);
        handler->start_pair("AsksForDistance");
        handler->boolean_value(storeAsksForDistance);
        assert(flagHasAsksForTravelTime);
        handler->start_pair("AsksForTravelTime");
        handler->boolean_value(storeAsksForTravelTime);
        assert(flagHasDistance);
        handler->start_pair("Distance");
        if (textStoreDistance != "")
            handler->number_value(textStoreDistance.c_str());
        else if (((double)(long int)storeDistance) == storeDistance)
            handler->number_value((long int)storeDistance);
        else
            handler->number_value(storeDistance);
        if (flagHasUnitOfMeasureID)
          {
            handler->start_pair("UnitOfMeasureID");
            handler->string_value(storeUnitOfMeasureID);
          }
        if (flagHasUnitOfLengthSingular)
          {
            handler->start_pair("UnitOfLengthSingular");
            handler->string_value(storeUnitOfLengthSingular);
          }
        if (flagHasUnitOfLengthPlural)
          {
            handler->start_pair("UnitOfLengthPlural");
            handler->string_value(storeUnitOfLengthPlural);
          }
        assert(flagHasTravelTime);
        handler->start_pair("TravelTime");
        if (textStoreTravelTime != "")
            handler->number_value(textStoreTravelTime.c_str());
        else if (((double)(long int)storeTravelTime) == storeTravelTime)
            handler->number_value((long int)storeTravelTime);
        else
            handler->number_value(storeTravelTime);
        if (flagHasCorrectionState)
          {
            handler->start_pair("CorrectionState");
            switch (storeCorrectionState)
              {
                case CorrectionState_None:
                    handler->string_value("None");
                    break;
                case CorrectionState_TryNewLocation:
                    handler->string_value("TryNewLocation");
                    break;
                case CorrectionState_Fail:
                    handler->string_value("Fail");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDestinationMapLocationSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationMapLocationSpec\" field was missing.";
          }
        if (!(hasNavigationMethod()))
          {
            return "When parsing the object for %what%, the \"NavigationMethod\" field was missing.";
          }
        if (!(hasNavigate()))
          {
            return "When parsing the object for %what%, the \"Navigate\" field was missing.";
          }
        if (!(hasAsksForDistance()))
          {
            return "When parsing the object for %what%, the \"AsksForDistance\" field was missing.";
          }
        if (!(hasAsksForTravelTime()))
          {
            return "When parsing the object for %what%, the \"AsksForTravelTime\" field was missing.";
          }
        if (!(hasDistance()))
          {
            return "When parsing the object for %what%, the \"Distance\" field was missing.";
          }
        if (!(hasTravelTime()))
          {
            return "When parsing the object for %what%, the \"TravelTime\" field was missing.";
          }
        return NULL;
      }

    static ShowDirectionsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowDirectionsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowDirectionsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsInformationNuggetJSON>, ShowDirectionsInformationNuggetJSON *, bool> generator("Type ShowDirectionsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for ShowDirectionsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowDirectionsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowDirectionsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsInformationNuggetJSON>, ShowDirectionsInformationNuggetJSON *, bool> generator("Type ShowDirectionsInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MapInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorStartMapLocationSpec;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocationSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorImplicitStart;
    class FieldGeneratorNavigationMethod : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNavigationMethod(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNavigationMethod(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNavigationMethod(result));
              }
            virtual void handle_result(TypeNavigationMethod result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNavigationMethod, TypeNavigationMethod, TypeNavigationMethod > fieldGeneratorNavigationMethod;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNavigate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAsksForDistance;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAsksForTravelTime;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDistance;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfMeasureID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfLengthSingular;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfLengthPlural;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTravelTime;
    class FieldGeneratorCorrectionState : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCorrectionState(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCorrectionState(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCorrectionState(result));
              }
            virtual void handle_result(TypeCorrectionState result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCorrectionState, TypeCorrectionState, TypeCorrectionState > fieldGeneratorCorrectionState;
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
            if (!(strcmp(getMapInformationNuggetJSONKey().c_str(), "ShowDirections") == 0))
                throw("The key field has a value other than `ShowDirections'.");
            ShowDirectionsInformationNuggetJSON *result = new ShowDirectionsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowDirectionsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowDirectionsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MapInformationNuggetJSON *new_result)
          {
            handle_result((ShowDirectionsInformationNuggetJSON *)new_result);
          }
        void finish(ShowDirectionsInformationNuggetJSON *result)
          {
            if (fieldGeneratorStartMapLocationSpec.have_value)
              {
                result->setStartMapLocationSpec(fieldGeneratorStartMapLocationSpec.value.referenced());
                fieldGeneratorStartMapLocationSpec.have_value = false;
              }
            if (fieldGeneratorDestinationMapLocationSpec.have_value)
              {
                result->setDestinationMapLocationSpec(fieldGeneratorDestinationMapLocationSpec.value.referenced());
                fieldGeneratorDestinationMapLocationSpec.have_value = false;
              }
            else if (!(result->hasDestinationMapLocationSpec()))
              {
                error("When parsing the object for %what%, the \"DestinationMapLocationSpec\" field was missing.");
              }
            if (fieldGeneratorImplicitStart.have_value)
              {
                result->setImplicitStart(fieldGeneratorImplicitStart.value);
                fieldGeneratorImplicitStart.have_value = false;
              }
            if (fieldGeneratorNavigationMethod.have_value)
              {
                result->setNavigationMethod(fieldGeneratorNavigationMethod.value);
                fieldGeneratorNavigationMethod.have_value = false;
              }
            else if (!(result->hasNavigationMethod()))
              {
                error("When parsing the object for %what%, the \"NavigationMethod\" field was missing.");
              }
            if (fieldGeneratorNavigate.have_value)
              {
                result->setNavigate(fieldGeneratorNavigate.value);
                fieldGeneratorNavigate.have_value = false;
              }
            else if (!(result->hasNavigate()))
              {
                error("When parsing the object for %what%, the \"Navigate\" field was missing.");
              }
            if (fieldGeneratorAsksForDistance.have_value)
              {
                result->setAsksForDistance(fieldGeneratorAsksForDistance.value);
                fieldGeneratorAsksForDistance.have_value = false;
              }
            else if (!(result->hasAsksForDistance()))
              {
                error("When parsing the object for %what%, the \"AsksForDistance\" field was missing.");
              }
            if (fieldGeneratorAsksForTravelTime.have_value)
              {
                result->setAsksForTravelTime(fieldGeneratorAsksForTravelTime.value);
                fieldGeneratorAsksForTravelTime.have_value = false;
              }
            else if (!(result->hasAsksForTravelTime()))
              {
                error("When parsing the object for %what%, the \"AsksForTravelTime\" field was missing.");
              }
            if (fieldGeneratorDistance.have_value)
              {
                result->setDistanceText(fieldGeneratorDistance.value);
                fieldGeneratorDistance.have_value = false;
              }
            else if (!(result->hasDistance()))
              {
                error("When parsing the object for %what%, the \"Distance\" field was missing.");
              }
            if (fieldGeneratorUnitOfMeasureID.have_value)
              {
                result->setUnitOfMeasureID(fieldGeneratorUnitOfMeasureID.value);
                fieldGeneratorUnitOfMeasureID.have_value = false;
              }
            if (fieldGeneratorUnitOfLengthSingular.have_value)
              {
                result->setUnitOfLengthSingular(fieldGeneratorUnitOfLengthSingular.value);
                fieldGeneratorUnitOfLengthSingular.have_value = false;
              }
            if (fieldGeneratorUnitOfLengthPlural.have_value)
              {
                result->setUnitOfLengthPlural(fieldGeneratorUnitOfLengthPlural.value);
                fieldGeneratorUnitOfLengthPlural.have_value = false;
              }
            if (fieldGeneratorTravelTime.have_value)
              {
                result->setTravelTimeText(fieldGeneratorTravelTime.value);
                fieldGeneratorTravelTime.have_value = false;
              }
            else if (!(result->hasTravelTime()))
              {
                error("When parsing the object for %what%, the \"TravelTime\" field was missing.");
              }
            if (fieldGeneratorCorrectionState.have_value)
              {
                result->setCorrectionState(fieldGeneratorCorrectionState.value);
                fieldGeneratorCorrectionState.have_value = false;
              }
            MapInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowDirectionsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "sksFor", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[8]), "istance") == 0)
                                    return &fieldGeneratorAsksForDistance;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "ravelTime") == 0)
                                    return &fieldGeneratorAsksForTravelTime;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "orrectionState") == 0)
                        return &fieldGeneratorCorrectionState;
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "stinationMapLocationSpec") == 0)
                                return &fieldGeneratorDestinationMapLocationSpec;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "stance") == 0)
                                return &fieldGeneratorDistance;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "mplicitStart") == 0)
                        return &fieldGeneratorImplicitStart;
                    break;
                case 'N':
                    if (strncmp(&(field_name[1]), "avigat", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'e':
                                if (field_name[8] == 0)
                                    return &fieldGeneratorNavigate;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[8]), "onMethod") == 0)
                                    return &fieldGeneratorNavigationMethod;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartMapLocationSpec") == 0)
                        return &fieldGeneratorStartMapLocationSpec;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ravelTime") == 0)
                        return &fieldGeneratorTravelTime;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nitOf", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'L':
                                if (strncmp(&(field_name[7]), "ength", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[12]))
                                      {
                                        case 'P':
                                            if (strcmp(&(field_name[13]), "lural") == 0)
                                                return &fieldGeneratorUnitOfLengthPlural;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[13]), "ingular") == 0)
                                                return &fieldGeneratorUnitOfLengthSingular;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "easureID") == 0)
                                    return &fieldGeneratorUnitOfMeasureID;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return MapInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MapInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorStartMapLocationSpec("field \"StartMapLocationSpec\" of the ShowDirectionsInformationNugget class", ignore_extras), fieldGeneratorDestinationMapLocationSpec("field \"DestinationMapLocationSpec\" of the ShowDirectionsInformationNugget class", ignore_extras), fieldGeneratorImplicitStart("field \"ImplicitStart\" of the ShowDirectionsInformationNugget class"), fieldGeneratorNavigationMethod("field \"NavigationMethod\" of the ShowDirectionsInformationNugget class"), fieldGeneratorNavigate("field \"Navigate\" of the ShowDirectionsInformationNugget class"), fieldGeneratorAsksForDistance("field \"AsksForDistance\" of the ShowDirectionsInformationNugget class"), fieldGeneratorAsksForTravelTime("field \"AsksForTravelTime\" of the ShowDirectionsInformationNugget class"), fieldGeneratorDistance("field \"Distance\" of the ShowDirectionsInformationNugget class"), fieldGeneratorUnitOfMeasureID("field \"UnitOfMeasureID\" of the ShowDirectionsInformationNugget class"), fieldGeneratorUnitOfLengthSingular("field \"UnitOfLengthSingular\" of the ShowDirectionsInformationNugget class"), fieldGeneratorUnitOfLengthPlural("field \"UnitOfLengthPlural\" of the ShowDirectionsInformationNugget class"), fieldGeneratorTravelTime("field \"TravelTime\" of the ShowDirectionsInformationNugget class"), fieldGeneratorCorrectionState("field \"CorrectionState\" of the ShowDirectionsInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowDirectionsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartMapLocationSpec.reset();
            fieldGeneratorDestinationMapLocationSpec.reset();
            fieldGeneratorImplicitStart.reset();
            fieldGeneratorNavigationMethod.reset();
            fieldGeneratorNavigate.reset();
            fieldGeneratorAsksForDistance.reset();
            fieldGeneratorAsksForTravelTime.reset();
            fieldGeneratorDistance.reset();
            fieldGeneratorUnitOfMeasureID.reset();
            fieldGeneratorUnitOfLengthSingular.reset();
            fieldGeneratorUnitOfLengthPlural.reset();
            fieldGeneratorTravelTime.reset();
            fieldGeneratorCorrectionState.reset();
            MapInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWDIRECTIONSINFORMATIONNUGGETJSON_H */
