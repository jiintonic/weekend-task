/* file "LocalSearchFilterSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALSEARCHFILTERSPECJSON_H
#define LOCALSEARCHFILTERSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "RoutePointsJSON.h"
#include "LocalSearchQuestionsSpecJSON.h"
#include "OpenHoursSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "AmenityGroupSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocalSearchFilterSpecJSON : public ReferenceCounted
  {
  public:
    enum TypeQueryTypeKnownValues
      {
        QueryType_Search,
        QueryType_Question,
        QueryType_ActionsCall,
        QueryType__none
      };
    struct TypeQueryType
      {
        bool in_known_list;
        std::string string_value;
        TypeQueryTypeKnownValues list_value;

        TypeQueryType(void);
        TypeQueryType(const TypeQueryType &other);
        TypeQueryType(TypeQueryTypeKnownValues other);
        bool  operator==(const TypeQueryType &other) const;
        bool  operator!=(const TypeQueryType &other) const;
        bool  operator<(const TypeQueryType &other) const;
        bool  operator>(const TypeQueryType &other) const;
        bool  operator>=(const TypeQueryType &other) const;
        bool  operator<=(const TypeQueryType &other) const;

      };

    static TypeQueryTypeKnownValues  stringToQueryType(const char *chars);
    static const char * stringFromQueryType(TypeQueryTypeKnownValues the_enum);
    enum TypeRadiusUnit
      {
        RadiusUnit_Kilometers,
        RadiusUnit_Miles
      };

    static TypeRadiusUnit  stringToRadiusUnit(const char *chars);
    static const char * stringFromRadiusUnit(TypeRadiusUnit the_enum);
    enum TypeSortCriteria
      {
        SortCriteria_Distance,
        SortCriteria_Price,
        SortCriteria_StarRating,
        SortCriteria_ReviewCount
      };

    static TypeSortCriteria  stringToSortCriteria(const char *chars);
    static const char * stringFromSortCriteria(TypeSortCriteria the_enum);
    enum TypeSortOrder
      {
        SortOrder_Ascending,
        SortOrder_Descending
      };

    static TypeSortOrder  stringToSortOrder(const char *chars);
    static const char * stringFromSortOrder(TypeSortOrder the_enum);

  private:
    bool flagHasQueryType;
    TypeQueryType storeQueryType;
    bool flagHasResultCount;
    uint8_t storeResultCount;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRadius;
    double storeRadius;
    std::string textStoreRadius;
    bool flagHasRadiusUnit;
    TypeRadiusUnit storeRadiusUnit;
    bool flagHasRadiusInferred;
    bool storeRadiusInferred;
    bool flagHasAlongTheRoute;
    bool storeAlongTheRoute;
    bool flagHasRoutePoints;
    RoutePointsJSON * storeRoutePoints;
    bool flagHasLocalSearchQuestions;
    LocalSearchQuestionsSpecJSON * storeLocalSearchQuestions;
    bool flagHasOpenHours;
    OpenHoursSpecJSON * storeOpenHours;
    bool flagHasOpenHoursSpokenResponse;
    std::string storeOpenHoursSpokenResponse;
    bool flagHasOpenHoursWrittenResponse;
    std::string storeOpenHoursWrittenResponse;
    bool flagHasOpenHoursFilterOnHoliday;
    bool storeOpenHoursFilterOnHoliday;
    bool flagHasSortCriteria;
    std::vector< TypeSortCriteria > storeSortCriteria;
    bool flagHasSortOrder;
    std::vector< TypeSortOrder > storeSortOrder;
    bool flagHasExpensiveFlag;
    bool storeExpensiveFlag;
    bool flagHasInexpensiveFlag;
    bool storeInexpensiveFlag;
    bool flagHasConversationMode;
    bool storeConversationMode;
    bool flagHasStarRatingMin;
    double storeStarRatingMin;
    std::string textStoreStarRatingMin;
    bool flagHasStarRatingMax;
    double storeStarRatingMax;
    std::string textStoreStarRatingMax;
    bool flagHasStarRatingsInclude;
    std::vector< double > storeStarRatingsInclude;
    bool flagHasStarRatingsExclude;
    std::vector< double > storeStarRatingsExclude;
    bool flagHasReviewCountMin;
    OInteger storeReviewCountMin;
    bool flagHasReviewCountMax;
    OInteger storeReviewCountMax;
    bool flagHasDollarSignMin;
    double storeDollarSignMin;
    std::string textStoreDollarSignMin;
    bool flagHasDollarSignMax;
    double storeDollarSignMax;
    std::string textStoreDollarSignMax;
    bool flagHasDollarSignsInclude;
    std::vector< double > storeDollarSignsInclude;
    bool flagHasDollarSignsExclude;
    std::vector< double > storeDollarSignsExclude;
    bool flagHasCategoriesInclude;
    std::vector< std::string > storeCategoriesInclude;
    bool flagHasCategoriesExclude;
    std::vector< std::string > storeCategoriesExclude;
    bool flagHasChainsInclude;
    std::vector< std::string > storeChainsInclude;
    bool flagHasChainsExclude;
    std::vector< std::string > storeChainsExclude;
    bool flagHasProductsInclude;
    std::vector< std::string > storeProductsInclude;
    bool flagHasProductsExclude;
    std::vector< std::string > storeProductsExclude;
    bool flagHasResultIDsReferenced;
    std::vector< std::string > storeResultIDsReferenced;
    bool flagHasResultIDsIndex;
    uint8_t storeResultIDsIndex;
    bool flagHasResultIDsIndexRepeated;
    bool storeResultIDsIndexRepeated;
    bool flagHasPlacesInclude;
    std::vector< std::string > storePlacesInclude;
    bool flagHasPlacesExclude;
    std::vector< std::string > storePlacesExclude;
    bool flagHasExcludedPlacesSpoken;
    std::string storeExcludedPlacesSpoken;
    bool flagHasExcludedPlacesWritten;
    std::string storeExcludedPlacesWritten;
    bool flagHasAmenitiesInclude;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesInclude;
    bool flagHasAmenitiesIncludeSupported;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesIncludeSupported;
    bool flagHasAmenitiesIncludeNotSupported;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesIncludeNotSupported;
    bool flagHasAmenitiesExclude;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesExclude;
    bool flagHasAmenitiesExcludeSupported;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesExcludeSupported;
    bool flagHasAmenitiesExcludeNotSupported;
    std::vector< AmenityGroupSpecJSON * > storeAmenitiesExcludeNotSupported;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocalSearchFilterSpecJSON(const LocalSearchFilterSpecJSON &);
    LocalSearchFilterSpecJSON & operator=(const LocalSearchFilterSpecJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadius(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadiusUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadiusInferred(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlongTheRoute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRoutePoints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocalSearchQuestions(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenHours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenHoursSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenHoursWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenHoursFilterOnHoliday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortOrder(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExpensiveFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInexpensiveFlag(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStarRatingsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReviewCountMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReviewCountMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDollarSignMin(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDollarSignMax(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDollarSignsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDollarSignsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCategoriesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCategoriesExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChainsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChainsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProductsInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProductsExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIDsReferenced(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIDsIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIDsIndexRepeated(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlacesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPlacesExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExcludedPlacesSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExcludedPlacesWritten(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesIncludeSupported(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesIncludeNotSupported(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesExclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesExcludeSupported(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmenitiesExcludeNotSupported(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalSearchFilterSpecJSON(void);
    virtual ~LocalSearchFilterSpecJSON(void);
    bool  hasQueryType(void) const;
    TypeQueryType  getQueryType(void);
    const TypeQueryType  getQueryType(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasResultCount(void) const;
    uint8_t  getResultCount(void);
    const uint8_t  getResultCount(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRadius(void) const;
    double  getRadius(void);
    const double  getRadius(void) const;
    std::string  getRadiusAsText(void) const;
    bool  hasRadiusUnit(void) const;
    TypeRadiusUnit  getRadiusUnit(void);
    const TypeRadiusUnit  getRadiusUnit(void) const;
    const char * getRadiusUnitAsChars(void) const;
    std::string  getRadiusUnitAsString(void) const;
    bool  hasRadiusInferred(void) const;
    bool  getRadiusInferred(void);
    const bool  getRadiusInferred(void) const;
    bool  hasAlongTheRoute(void) const;
    bool  getAlongTheRoute(void);
    const bool  getAlongTheRoute(void) const;
    bool  hasRoutePoints(void) const;
    RoutePointsJSON *  getRoutePoints(void);
    const RoutePointsJSON *  getRoutePoints(void) const;
    bool  hasLocalSearchQuestions(void) const;
    LocalSearchQuestionsSpecJSON *  getLocalSearchQuestions(void);
    const LocalSearchQuestionsSpecJSON *  getLocalSearchQuestions(void) const;
    bool  hasOpenHours(void) const;
    OpenHoursSpecJSON *  getOpenHours(void);
    const OpenHoursSpecJSON *  getOpenHours(void) const;
    bool  hasOpenHoursSpokenResponse(void) const;
    std::string  getOpenHoursSpokenResponse(void);
    const std::string  getOpenHoursSpokenResponse(void) const;
    bool  hasOpenHoursWrittenResponse(void) const;
    std::string  getOpenHoursWrittenResponse(void);
    const std::string  getOpenHoursWrittenResponse(void) const;
    bool  hasOpenHoursFilterOnHoliday(void) const;
    bool  getOpenHoursFilterOnHoliday(void);
    const bool  getOpenHoursFilterOnHoliday(void) const;
    bool  hasSortCriteria(void) const;
    size_t  countOfSortCriteria(void) const;
    TypeSortCriteria  elementOfSortCriteria(size_t element_num);
    const TypeSortCriteria  elementOfSortCriteria(size_t element_num) const;
    std::vector< TypeSortCriteria >  getSortCriteria(void);
    const std::vector< TypeSortCriteria >  getSortCriteria(void) const;
    bool  hasSortOrder(void) const;
    size_t  countOfSortOrder(void) const;
    TypeSortOrder  elementOfSortOrder(size_t element_num);
    const TypeSortOrder  elementOfSortOrder(size_t element_num) const;
    std::vector< TypeSortOrder >  getSortOrder(void);
    const std::vector< TypeSortOrder >  getSortOrder(void) const;
    bool  hasExpensiveFlag(void) const;
    bool  getExpensiveFlag(void);
    const bool  getExpensiveFlag(void) const;
    bool  hasInexpensiveFlag(void) const;
    bool  getInexpensiveFlag(void);
    const bool  getInexpensiveFlag(void) const;
    bool  hasConversationMode(void) const;
    bool  getConversationMode(void);
    const bool  getConversationMode(void) const;
    bool  hasStarRatingMin(void) const;
    double  getStarRatingMin(void);
    const double  getStarRatingMin(void) const;
    std::string  getStarRatingMinAsText(void) const;
    bool  hasStarRatingMax(void) const;
    double  getStarRatingMax(void);
    const double  getStarRatingMax(void) const;
    std::string  getStarRatingMaxAsText(void) const;
    bool  hasStarRatingsInclude(void) const;
    size_t  countOfStarRatingsInclude(void) const;
    double  elementOfStarRatingsInclude(size_t element_num);
    const double  elementOfStarRatingsInclude(size_t element_num) const;
    std::vector< double >  getStarRatingsInclude(void);
    const std::vector< double >  getStarRatingsInclude(void) const;
    bool  hasStarRatingsExclude(void) const;
    size_t  countOfStarRatingsExclude(void) const;
    double  elementOfStarRatingsExclude(size_t element_num);
    const double  elementOfStarRatingsExclude(size_t element_num) const;
    std::vector< double >  getStarRatingsExclude(void);
    const std::vector< double >  getStarRatingsExclude(void) const;
    bool  hasReviewCountMin(void) const;
    OInteger  getReviewCountMin(void);
    const OInteger  getReviewCountMin(void) const;
    bool  hasReviewCountMax(void) const;
    OInteger  getReviewCountMax(void);
    const OInteger  getReviewCountMax(void) const;
    bool  hasDollarSignMin(void) const;
    double  getDollarSignMin(void);
    const double  getDollarSignMin(void) const;
    std::string  getDollarSignMinAsText(void) const;
    bool  hasDollarSignMax(void) const;
    double  getDollarSignMax(void);
    const double  getDollarSignMax(void) const;
    std::string  getDollarSignMaxAsText(void) const;
    bool  hasDollarSignsInclude(void) const;
    size_t  countOfDollarSignsInclude(void) const;
    double  elementOfDollarSignsInclude(size_t element_num);
    const double  elementOfDollarSignsInclude(size_t element_num) const;
    std::vector< double >  getDollarSignsInclude(void);
    const std::vector< double >  getDollarSignsInclude(void) const;
    bool  hasDollarSignsExclude(void) const;
    size_t  countOfDollarSignsExclude(void) const;
    double  elementOfDollarSignsExclude(size_t element_num);
    const double  elementOfDollarSignsExclude(size_t element_num) const;
    std::vector< double >  getDollarSignsExclude(void);
    const std::vector< double >  getDollarSignsExclude(void) const;
    bool  hasCategoriesInclude(void) const;
    size_t  countOfCategoriesInclude(void) const;
    std::string  elementOfCategoriesInclude(size_t element_num);
    const std::string  elementOfCategoriesInclude(size_t element_num) const;
    std::vector< std::string >  getCategoriesInclude(void);
    const std::vector< std::string >  getCategoriesInclude(void) const;
    bool  hasCategoriesExclude(void) const;
    size_t  countOfCategoriesExclude(void) const;
    std::string  elementOfCategoriesExclude(size_t element_num);
    const std::string  elementOfCategoriesExclude(size_t element_num) const;
    std::vector< std::string >  getCategoriesExclude(void);
    const std::vector< std::string >  getCategoriesExclude(void) const;
    bool  hasChainsInclude(void) const;
    size_t  countOfChainsInclude(void) const;
    std::string  elementOfChainsInclude(size_t element_num);
    const std::string  elementOfChainsInclude(size_t element_num) const;
    std::vector< std::string >  getChainsInclude(void);
    const std::vector< std::string >  getChainsInclude(void) const;
    bool  hasChainsExclude(void) const;
    size_t  countOfChainsExclude(void) const;
    std::string  elementOfChainsExclude(size_t element_num);
    const std::string  elementOfChainsExclude(size_t element_num) const;
    std::vector< std::string >  getChainsExclude(void);
    const std::vector< std::string >  getChainsExclude(void) const;
    bool  hasProductsInclude(void) const;
    size_t  countOfProductsInclude(void) const;
    std::string  elementOfProductsInclude(size_t element_num);
    const std::string  elementOfProductsInclude(size_t element_num) const;
    std::vector< std::string >  getProductsInclude(void);
    const std::vector< std::string >  getProductsInclude(void) const;
    bool  hasProductsExclude(void) const;
    size_t  countOfProductsExclude(void) const;
    std::string  elementOfProductsExclude(size_t element_num);
    const std::string  elementOfProductsExclude(size_t element_num) const;
    std::vector< std::string >  getProductsExclude(void);
    const std::vector< std::string >  getProductsExclude(void) const;
    bool  hasResultIDsReferenced(void) const;
    size_t  countOfResultIDsReferenced(void) const;
    std::string  elementOfResultIDsReferenced(size_t element_num);
    const std::string  elementOfResultIDsReferenced(size_t element_num) const;
    std::vector< std::string >  getResultIDsReferenced(void);
    const std::vector< std::string >  getResultIDsReferenced(void) const;
    bool  hasResultIDsIndex(void) const;
    uint8_t  getResultIDsIndex(void);
    const uint8_t  getResultIDsIndex(void) const;
    bool  hasResultIDsIndexRepeated(void) const;
    bool  getResultIDsIndexRepeated(void);
    const bool  getResultIDsIndexRepeated(void) const;
    bool  hasPlacesInclude(void) const;
    size_t  countOfPlacesInclude(void) const;
    std::string  elementOfPlacesInclude(size_t element_num);
    const std::string  elementOfPlacesInclude(size_t element_num) const;
    std::vector< std::string >  getPlacesInclude(void);
    const std::vector< std::string >  getPlacesInclude(void) const;
    bool  hasPlacesExclude(void) const;
    size_t  countOfPlacesExclude(void) const;
    std::string  elementOfPlacesExclude(size_t element_num);
    const std::string  elementOfPlacesExclude(size_t element_num) const;
    std::vector< std::string >  getPlacesExclude(void);
    const std::vector< std::string >  getPlacesExclude(void) const;
    bool  hasExcludedPlacesSpoken(void) const;
    std::string  getExcludedPlacesSpoken(void);
    const std::string  getExcludedPlacesSpoken(void) const;
    bool  hasExcludedPlacesWritten(void) const;
    std::string  getExcludedPlacesWritten(void);
    const std::string  getExcludedPlacesWritten(void) const;
    bool  hasAmenitiesInclude(void) const;
    size_t  countOfAmenitiesInclude(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesInclude(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesInclude(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesInclude(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesInclude(void) const;
    bool  hasAmenitiesIncludeSupported(void) const;
    size_t  countOfAmenitiesIncludeSupported(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesIncludeSupported(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesIncludeSupported(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeSupported(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeSupported(void) const;
    bool  hasAmenitiesIncludeNotSupported(void) const;
    size_t  countOfAmenitiesIncludeNotSupported(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesIncludeNotSupported(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesIncludeNotSupported(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeNotSupported(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesIncludeNotSupported(void) const;
    bool  hasAmenitiesExclude(void) const;
    size_t  countOfAmenitiesExclude(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesExclude(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesExclude(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesExclude(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesExclude(void) const;
    bool  hasAmenitiesExcludeSupported(void) const;
    size_t  countOfAmenitiesExcludeSupported(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesExcludeSupported(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesExcludeSupported(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesExcludeSupported(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesExcludeSupported(void) const;
    bool  hasAmenitiesExcludeNotSupported(void) const;
    size_t  countOfAmenitiesExcludeNotSupported(void) const;
    AmenityGroupSpecJSON *  elementOfAmenitiesExcludeNotSupported(size_t element_num);
    const AmenityGroupSpecJSON *  elementOfAmenitiesExcludeNotSupported(size_t element_num) const;
    std::vector< AmenityGroupSpecJSON * >  getAmenitiesExcludeNotSupported(void);
    const std::vector< AmenityGroupSpecJSON * >  getAmenitiesExcludeNotSupported(void) const;

    virtual size_t extraLocalSearchFilterSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocalSearchFilterSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocalSearchFilterSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocalSearchFilterSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocalSearchFilterSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocalSearchFilterSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(TypeQueryType new_value)
      {
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(const char *chars)
      {
        TypeQueryTypeKnownValues known = stringToQueryType(chars);
        TypeQueryType new_value;
        if (known == QueryType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setQueryType(new_value);
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(the_string.c_str());
      }
    void setQueryType(TypeQueryTypeKnownValues new_value)
      {
        TypeQueryType new_full_value;
        assert(new_value != QueryType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setQueryType(new_full_value);
      }
    void unsetQueryType(void)
      {
        flagHasQueryType = false;
      }
    void setResultCount(uint8_t new_value)
      {
        flagHasResultCount = true;
        if (new_value < 0)
            throw("The value for field ResultCount of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 30)
            throw("The value for field ResultCount of LocalSearchFilterSpecJSON is greater than the upper bound (30) for that field.");
        storeResultCount = new_value;
      }
    void unsetResultCount(void)
      {
        flagHasResultCount = false;
      }
    void setMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = false;
      }
    void setRadius(double new_value)
      {
        flagHasRadius = true;
        if (new_value < 0)
            throw("The value for field Radius of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        storeRadius = new_value;
        textStoreRadius = "";
      }
    void setRadiusText(std::string new_value)
      {
        flagHasRadius = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Radius of LocalSearchFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Radius of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        textStoreRadius = new_value;
      }
    void unsetRadius(void)
      {
        flagHasRadius = false;
      }
    void setRadiusUnit(TypeRadiusUnit new_value)
      {
        flagHasRadiusUnit = true;
        storeRadiusUnit = new_value;
      }
    void setRadiusUnit(const char *chars)
      {
        setRadiusUnit(stringToRadiusUnit(chars));
      }
    void setRadiusUnit(std::string the_string)
      {
        setRadiusUnit(stringToRadiusUnit(the_string.c_str()));
      }
    void unsetRadiusUnit(void)
      {
        flagHasRadiusUnit = false;
      }
    void setRadiusInferred(bool new_value)
      {
        flagHasRadiusInferred = true;
        storeRadiusInferred = new_value;
      }
    void unsetRadiusInferred(void)
      {
        flagHasRadiusInferred = false;
      }
    void setAlongTheRoute(bool new_value)
      {
        flagHasAlongTheRoute = true;
        storeAlongTheRoute = new_value;
      }
    void unsetAlongTheRoute(void)
      {
        flagHasAlongTheRoute = false;
      }
    void setRoutePoints(RoutePointsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRoutePoints)
          {
            storeRoutePoints->remove_reference();
          }
        flagHasRoutePoints = true;
        storeRoutePoints = new_value;
      }
    void unsetRoutePoints(void)
      {
        if (flagHasRoutePoints)
          {
            storeRoutePoints->remove_reference();
          }
        flagHasRoutePoints = false;
      }
    void setLocalSearchQuestions(LocalSearchQuestionsSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocalSearchQuestions)
          {
            storeLocalSearchQuestions->remove_reference();
          }
        flagHasLocalSearchQuestions = true;
        storeLocalSearchQuestions = new_value;
      }
    void unsetLocalSearchQuestions(void)
      {
        if (flagHasLocalSearchQuestions)
          {
            storeLocalSearchQuestions->remove_reference();
          }
        flagHasLocalSearchQuestions = false;
      }
    void setOpenHours(OpenHoursSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpenHours)
          {
            storeOpenHours->remove_reference();
          }
        flagHasOpenHours = true;
        storeOpenHours = new_value;
      }
    void unsetOpenHours(void)
      {
        if (flagHasOpenHours)
          {
            storeOpenHours->remove_reference();
          }
        flagHasOpenHours = false;
      }
    void setOpenHoursSpokenResponse(std::string new_value)
      {
        flagHasOpenHoursSpokenResponse = true;
        storeOpenHoursSpokenResponse = new_value;
      }
    void unsetOpenHoursSpokenResponse(void)
      {
        flagHasOpenHoursSpokenResponse = false;
      }
    void setOpenHoursWrittenResponse(std::string new_value)
      {
        flagHasOpenHoursWrittenResponse = true;
        storeOpenHoursWrittenResponse = new_value;
      }
    void unsetOpenHoursWrittenResponse(void)
      {
        flagHasOpenHoursWrittenResponse = false;
      }
    void setOpenHoursFilterOnHoliday(bool new_value)
      {
        flagHasOpenHoursFilterOnHoliday = true;
        storeOpenHoursFilterOnHoliday = new_value;
      }
    void unsetOpenHoursFilterOnHoliday(void)
      {
        flagHasOpenHoursFilterOnHoliday = false;
      }
    void initSortCriteria(void)
      {
        flagHasSortCriteria = true;
        storeSortCriteria.clear();
      }
    void appendSortCriteria(TypeSortCriteria to_append)
      {
        if (!flagHasSortCriteria)
          {
            flagHasSortCriteria = true;
            storeSortCriteria.clear();
          }
        assert(flagHasSortCriteria);
        storeSortCriteria.push_back(to_append);
      }
    void appendSortCriteria(const char *chars)
      {
        appendSortCriteria(stringToSortCriteria(chars));
      }
    void appendSortCriteria(std::string the_string)
      {
        appendSortCriteria(stringToSortCriteria(the_string.c_str()));
      }
    void unsetSortCriteria(void)
      {
        flagHasSortCriteria = false;
        storeSortCriteria.clear();
      }
    void initSortOrder(void)
      {
        flagHasSortOrder = true;
        storeSortOrder.clear();
      }
    void appendSortOrder(TypeSortOrder to_append)
      {
        if (!flagHasSortOrder)
          {
            flagHasSortOrder = true;
            storeSortOrder.clear();
          }
        assert(flagHasSortOrder);
        storeSortOrder.push_back(to_append);
      }
    void appendSortOrder(const char *chars)
      {
        appendSortOrder(stringToSortOrder(chars));
      }
    void appendSortOrder(std::string the_string)
      {
        appendSortOrder(stringToSortOrder(the_string.c_str()));
      }
    void unsetSortOrder(void)
      {
        flagHasSortOrder = false;
        storeSortOrder.clear();
      }
    void setExpensiveFlag(bool new_value)
      {
        flagHasExpensiveFlag = true;
        storeExpensiveFlag = new_value;
      }
    void unsetExpensiveFlag(void)
      {
        flagHasExpensiveFlag = false;
      }
    void setInexpensiveFlag(bool new_value)
      {
        flagHasInexpensiveFlag = true;
        storeInexpensiveFlag = new_value;
      }
    void unsetInexpensiveFlag(void)
      {
        flagHasInexpensiveFlag = false;
      }
    void setConversationMode(bool new_value)
      {
        flagHasConversationMode = true;
        storeConversationMode = new_value;
      }
    void unsetConversationMode(void)
      {
        flagHasConversationMode = false;
      }
    void setStarRatingMin(double new_value)
      {
        flagHasStarRatingMin = true;
        if (new_value < 0)
            throw("The value for field StarRatingMin of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field StarRatingMin of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeStarRatingMin = new_value;
        textStoreStarRatingMin = "";
      }
    void setStarRatingMinText(std::string new_value)
      {
        flagHasStarRatingMin = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StarRatingMin of LocalSearchFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field StarRatingMin of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field StarRatingMin of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreStarRatingMin = new_value;
      }
    void unsetStarRatingMin(void)
      {
        flagHasStarRatingMin = false;
      }
    void setStarRatingMax(double new_value)
      {
        flagHasStarRatingMax = true;
        if (new_value < 0)
            throw("The value for field StarRatingMax of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field StarRatingMax of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeStarRatingMax = new_value;
        textStoreStarRatingMax = "";
      }
    void setStarRatingMaxText(std::string new_value)
      {
        flagHasStarRatingMax = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field StarRatingMax of LocalSearchFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field StarRatingMax of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field StarRatingMax of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreStarRatingMax = new_value;
      }
    void unsetStarRatingMax(void)
      {
        flagHasStarRatingMax = false;
      }
    void initStarRatingsInclude(void)
      {
        flagHasStarRatingsInclude = true;
        storeStarRatingsInclude.clear();
      }
    void appendStarRatingsInclude(double to_append)
      {
        if (!flagHasStarRatingsInclude)
          {
            flagHasStarRatingsInclude = true;
            storeStarRatingsInclude.clear();
          }
        assert(flagHasStarRatingsInclude);
        storeStarRatingsInclude.push_back(to_append);
      }
    void unsetStarRatingsInclude(void)
      {
        flagHasStarRatingsInclude = false;
        storeStarRatingsInclude.clear();
      }
    void initStarRatingsExclude(void)
      {
        flagHasStarRatingsExclude = true;
        storeStarRatingsExclude.clear();
      }
    void appendStarRatingsExclude(double to_append)
      {
        if (!flagHasStarRatingsExclude)
          {
            flagHasStarRatingsExclude = true;
            storeStarRatingsExclude.clear();
          }
        assert(flagHasStarRatingsExclude);
        storeStarRatingsExclude.push_back(to_append);
      }
    void unsetStarRatingsExclude(void)
      {
        flagHasStarRatingsExclude = false;
        storeStarRatingsExclude.clear();
      }
    void setReviewCountMin(OInteger new_value)
      {
        flagHasReviewCountMin = true;
        if (new_value < 0)
            throw("The value for field ReviewCountMin of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        storeReviewCountMin = new_value;
      }
    void unsetReviewCountMin(void)
      {
        flagHasReviewCountMin = false;
      }
    void setReviewCountMax(OInteger new_value)
      {
        flagHasReviewCountMax = true;
        if (new_value < 0)
            throw("The value for field ReviewCountMax of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        storeReviewCountMax = new_value;
      }
    void unsetReviewCountMax(void)
      {
        flagHasReviewCountMax = false;
      }
    void setDollarSignMin(double new_value)
      {
        flagHasDollarSignMin = true;
        if (new_value < 0)
            throw("The value for field DollarSignMin of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field DollarSignMin of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeDollarSignMin = new_value;
        textStoreDollarSignMin = "";
      }
    void setDollarSignMinText(std::string new_value)
      {
        flagHasDollarSignMin = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DollarSignMin of LocalSearchFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field DollarSignMin of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field DollarSignMin of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreDollarSignMin = new_value;
      }
    void unsetDollarSignMin(void)
      {
        flagHasDollarSignMin = false;
      }
    void setDollarSignMax(double new_value)
      {
        flagHasDollarSignMax = true;
        if (new_value < 0)
            throw("The value for field DollarSignMax of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 6)
            throw("The value for field DollarSignMax of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        storeDollarSignMax = new_value;
        textStoreDollarSignMax = "";
      }
    void setDollarSignMaxText(std::string new_value)
      {
        flagHasDollarSignMax = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DollarSignMax of LocalSearchFilterSpecJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field DollarSignMax of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "6", "", false, "1") > 0)
            throw("The value for field DollarSignMax of LocalSearchFilterSpecJSON is greater than the upper bound (6) for that field.");
        textStoreDollarSignMax = new_value;
      }
    void unsetDollarSignMax(void)
      {
        flagHasDollarSignMax = false;
      }
    void initDollarSignsInclude(void)
      {
        flagHasDollarSignsInclude = true;
        storeDollarSignsInclude.clear();
      }
    void appendDollarSignsInclude(double to_append)
      {
        if (!flagHasDollarSignsInclude)
          {
            flagHasDollarSignsInclude = true;
            storeDollarSignsInclude.clear();
          }
        assert(flagHasDollarSignsInclude);
        storeDollarSignsInclude.push_back(to_append);
      }
    void unsetDollarSignsInclude(void)
      {
        flagHasDollarSignsInclude = false;
        storeDollarSignsInclude.clear();
      }
    void initDollarSignsExclude(void)
      {
        flagHasDollarSignsExclude = true;
        storeDollarSignsExclude.clear();
      }
    void appendDollarSignsExclude(double to_append)
      {
        if (!flagHasDollarSignsExclude)
          {
            flagHasDollarSignsExclude = true;
            storeDollarSignsExclude.clear();
          }
        assert(flagHasDollarSignsExclude);
        storeDollarSignsExclude.push_back(to_append);
      }
    void unsetDollarSignsExclude(void)
      {
        flagHasDollarSignsExclude = false;
        storeDollarSignsExclude.clear();
      }
    void initCategoriesInclude(void)
      {
        flagHasCategoriesInclude = true;
        storeCategoriesInclude.clear();
      }
    void appendCategoriesInclude(std::string to_append)
      {
        if (!flagHasCategoriesInclude)
          {
            flagHasCategoriesInclude = true;
            storeCategoriesInclude.clear();
          }
        assert(flagHasCategoriesInclude);
        storeCategoriesInclude.push_back(to_append);
      }
    void unsetCategoriesInclude(void)
      {
        flagHasCategoriesInclude = false;
        storeCategoriesInclude.clear();
      }
    void initCategoriesExclude(void)
      {
        flagHasCategoriesExclude = true;
        storeCategoriesExclude.clear();
      }
    void appendCategoriesExclude(std::string to_append)
      {
        if (!flagHasCategoriesExclude)
          {
            flagHasCategoriesExclude = true;
            storeCategoriesExclude.clear();
          }
        assert(flagHasCategoriesExclude);
        storeCategoriesExclude.push_back(to_append);
      }
    void unsetCategoriesExclude(void)
      {
        flagHasCategoriesExclude = false;
        storeCategoriesExclude.clear();
      }
    void initChainsInclude(void)
      {
        flagHasChainsInclude = true;
        storeChainsInclude.clear();
      }
    void appendChainsInclude(std::string to_append)
      {
        if (!flagHasChainsInclude)
          {
            flagHasChainsInclude = true;
            storeChainsInclude.clear();
          }
        assert(flagHasChainsInclude);
        storeChainsInclude.push_back(to_append);
      }
    void unsetChainsInclude(void)
      {
        flagHasChainsInclude = false;
        storeChainsInclude.clear();
      }
    void initChainsExclude(void)
      {
        flagHasChainsExclude = true;
        storeChainsExclude.clear();
      }
    void appendChainsExclude(std::string to_append)
      {
        if (!flagHasChainsExclude)
          {
            flagHasChainsExclude = true;
            storeChainsExclude.clear();
          }
        assert(flagHasChainsExclude);
        storeChainsExclude.push_back(to_append);
      }
    void unsetChainsExclude(void)
      {
        flagHasChainsExclude = false;
        storeChainsExclude.clear();
      }
    void initProductsInclude(void)
      {
        flagHasProductsInclude = true;
        storeProductsInclude.clear();
      }
    void appendProductsInclude(std::string to_append)
      {
        if (!flagHasProductsInclude)
          {
            flagHasProductsInclude = true;
            storeProductsInclude.clear();
          }
        assert(flagHasProductsInclude);
        storeProductsInclude.push_back(to_append);
      }
    void unsetProductsInclude(void)
      {
        flagHasProductsInclude = false;
        storeProductsInclude.clear();
      }
    void initProductsExclude(void)
      {
        flagHasProductsExclude = true;
        storeProductsExclude.clear();
      }
    void appendProductsExclude(std::string to_append)
      {
        if (!flagHasProductsExclude)
          {
            flagHasProductsExclude = true;
            storeProductsExclude.clear();
          }
        assert(flagHasProductsExclude);
        storeProductsExclude.push_back(to_append);
      }
    void unsetProductsExclude(void)
      {
        flagHasProductsExclude = false;
        storeProductsExclude.clear();
      }
    void initResultIDsReferenced(void)
      {
        flagHasResultIDsReferenced = true;
        storeResultIDsReferenced.clear();
      }
    void appendResultIDsReferenced(std::string to_append)
      {
        if (!flagHasResultIDsReferenced)
          {
            flagHasResultIDsReferenced = true;
            storeResultIDsReferenced.clear();
          }
        assert(flagHasResultIDsReferenced);
        storeResultIDsReferenced.push_back(to_append);
      }
    void unsetResultIDsReferenced(void)
      {
        flagHasResultIDsReferenced = false;
        storeResultIDsReferenced.clear();
      }
    void setResultIDsIndex(uint8_t new_value)
      {
        flagHasResultIDsIndex = true;
        if (new_value < 0)
            throw("The value for field ResultIDsIndex of LocalSearchFilterSpecJSON is less than the lower bound (0) for that field.");
        if (new_value > 100)
            throw("The value for field ResultIDsIndex of LocalSearchFilterSpecJSON is greater than the upper bound (100) for that field.");
        storeResultIDsIndex = new_value;
      }
    void unsetResultIDsIndex(void)
      {
        flagHasResultIDsIndex = false;
      }
    void setResultIDsIndexRepeated(bool new_value)
      {
        flagHasResultIDsIndexRepeated = true;
        storeResultIDsIndexRepeated = new_value;
      }
    void unsetResultIDsIndexRepeated(void)
      {
        flagHasResultIDsIndexRepeated = false;
      }
    void initPlacesInclude(void)
      {
        flagHasPlacesInclude = true;
        storePlacesInclude.clear();
      }
    void appendPlacesInclude(std::string to_append)
      {
        if (!flagHasPlacesInclude)
          {
            flagHasPlacesInclude = true;
            storePlacesInclude.clear();
          }
        assert(flagHasPlacesInclude);
        storePlacesInclude.push_back(to_append);
      }
    void unsetPlacesInclude(void)
      {
        flagHasPlacesInclude = false;
        storePlacesInclude.clear();
      }
    void initPlacesExclude(void)
      {
        flagHasPlacesExclude = true;
        storePlacesExclude.clear();
      }
    void appendPlacesExclude(std::string to_append)
      {
        if (!flagHasPlacesExclude)
          {
            flagHasPlacesExclude = true;
            storePlacesExclude.clear();
          }
        assert(flagHasPlacesExclude);
        storePlacesExclude.push_back(to_append);
      }
    void unsetPlacesExclude(void)
      {
        flagHasPlacesExclude = false;
        storePlacesExclude.clear();
      }
    void setExcludedPlacesSpoken(std::string new_value)
      {
        flagHasExcludedPlacesSpoken = true;
        storeExcludedPlacesSpoken = new_value;
      }
    void unsetExcludedPlacesSpoken(void)
      {
        flagHasExcludedPlacesSpoken = false;
      }
    void setExcludedPlacesWritten(std::string new_value)
      {
        flagHasExcludedPlacesWritten = true;
        storeExcludedPlacesWritten = new_value;
      }
    void unsetExcludedPlacesWritten(void)
      {
        flagHasExcludedPlacesWritten = false;
      }
    void initAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num7 = 0; num7 < storeAmenitiesInclude.size(); ++num7)
              {
                storeAmenitiesInclude[num7]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = true;
        storeAmenitiesInclude.clear();
      }
    void appendAmenitiesInclude(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesInclude)
          {
            flagHasAmenitiesInclude = true;
            storeAmenitiesInclude.clear();
          }
        assert(flagHasAmenitiesInclude);
        to_append->add_reference();
        storeAmenitiesInclude.push_back(to_append);
      }
    void unsetAmenitiesInclude(void)
      {
        if (flagHasAmenitiesInclude)
          {
            for (size_t num8 = 0; num8 < storeAmenitiesInclude.size(); ++num8)
              {
                storeAmenitiesInclude[num8]->remove_reference();
              }
          }
        flagHasAmenitiesInclude = false;
        storeAmenitiesInclude.clear();
      }
    void initAmenitiesIncludeSupported(void)
      {
        if (flagHasAmenitiesIncludeSupported)
          {
            for (size_t num9 = 0; num9 < storeAmenitiesIncludeSupported.size(); ++num9)
              {
                storeAmenitiesIncludeSupported[num9]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeSupported = true;
        storeAmenitiesIncludeSupported.clear();
      }
    void appendAmenitiesIncludeSupported(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesIncludeSupported)
          {
            flagHasAmenitiesIncludeSupported = true;
            storeAmenitiesIncludeSupported.clear();
          }
        assert(flagHasAmenitiesIncludeSupported);
        to_append->add_reference();
        storeAmenitiesIncludeSupported.push_back(to_append);
      }
    void unsetAmenitiesIncludeSupported(void)
      {
        if (flagHasAmenitiesIncludeSupported)
          {
            for (size_t num10 = 0; num10 < storeAmenitiesIncludeSupported.size(); ++num10)
              {
                storeAmenitiesIncludeSupported[num10]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeSupported = false;
        storeAmenitiesIncludeSupported.clear();
      }
    void initAmenitiesIncludeNotSupported(void)
      {
        if (flagHasAmenitiesIncludeNotSupported)
          {
            for (size_t num11 = 0; num11 < storeAmenitiesIncludeNotSupported.size(); ++num11)
              {
                storeAmenitiesIncludeNotSupported[num11]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeNotSupported = true;
        storeAmenitiesIncludeNotSupported.clear();
      }
    void appendAmenitiesIncludeNotSupported(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesIncludeNotSupported)
          {
            flagHasAmenitiesIncludeNotSupported = true;
            storeAmenitiesIncludeNotSupported.clear();
          }
        assert(flagHasAmenitiesIncludeNotSupported);
        to_append->add_reference();
        storeAmenitiesIncludeNotSupported.push_back(to_append);
      }
    void unsetAmenitiesIncludeNotSupported(void)
      {
        if (flagHasAmenitiesIncludeNotSupported)
          {
            for (size_t num12 = 0; num12 < storeAmenitiesIncludeNotSupported.size(); ++num12)
              {
                storeAmenitiesIncludeNotSupported[num12]->remove_reference();
              }
          }
        flagHasAmenitiesIncludeNotSupported = false;
        storeAmenitiesIncludeNotSupported.clear();
      }
    void initAmenitiesExclude(void)
      {
        if (flagHasAmenitiesExclude)
          {
            for (size_t num13 = 0; num13 < storeAmenitiesExclude.size(); ++num13)
              {
                storeAmenitiesExclude[num13]->remove_reference();
              }
          }
        flagHasAmenitiesExclude = true;
        storeAmenitiesExclude.clear();
      }
    void appendAmenitiesExclude(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesExclude)
          {
            flagHasAmenitiesExclude = true;
            storeAmenitiesExclude.clear();
          }
        assert(flagHasAmenitiesExclude);
        to_append->add_reference();
        storeAmenitiesExclude.push_back(to_append);
      }
    void unsetAmenitiesExclude(void)
      {
        if (flagHasAmenitiesExclude)
          {
            for (size_t num14 = 0; num14 < storeAmenitiesExclude.size(); ++num14)
              {
                storeAmenitiesExclude[num14]->remove_reference();
              }
          }
        flagHasAmenitiesExclude = false;
        storeAmenitiesExclude.clear();
      }
    void initAmenitiesExcludeSupported(void)
      {
        if (flagHasAmenitiesExcludeSupported)
          {
            for (size_t num15 = 0; num15 < storeAmenitiesExcludeSupported.size(); ++num15)
              {
                storeAmenitiesExcludeSupported[num15]->remove_reference();
              }
          }
        flagHasAmenitiesExcludeSupported = true;
        storeAmenitiesExcludeSupported.clear();
      }
    void appendAmenitiesExcludeSupported(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesExcludeSupported)
          {
            flagHasAmenitiesExcludeSupported = true;
            storeAmenitiesExcludeSupported.clear();
          }
        assert(flagHasAmenitiesExcludeSupported);
        to_append->add_reference();
        storeAmenitiesExcludeSupported.push_back(to_append);
      }
    void unsetAmenitiesExcludeSupported(void)
      {
        if (flagHasAmenitiesExcludeSupported)
          {
            for (size_t num16 = 0; num16 < storeAmenitiesExcludeSupported.size(); ++num16)
              {
                storeAmenitiesExcludeSupported[num16]->remove_reference();
              }
          }
        flagHasAmenitiesExcludeSupported = false;
        storeAmenitiesExcludeSupported.clear();
      }
    void initAmenitiesExcludeNotSupported(void)
      {
        if (flagHasAmenitiesExcludeNotSupported)
          {
            for (size_t num17 = 0; num17 < storeAmenitiesExcludeNotSupported.size(); ++num17)
              {
                storeAmenitiesExcludeNotSupported[num17]->remove_reference();
              }
          }
        flagHasAmenitiesExcludeNotSupported = true;
        storeAmenitiesExcludeNotSupported.clear();
      }
    void appendAmenitiesExcludeNotSupported(AmenityGroupSpecJSON * to_append)
      {
        if (!flagHasAmenitiesExcludeNotSupported)
          {
            flagHasAmenitiesExcludeNotSupported = true;
            storeAmenitiesExcludeNotSupported.clear();
          }
        assert(flagHasAmenitiesExcludeNotSupported);
        to_append->add_reference();
        storeAmenitiesExcludeNotSupported.push_back(to_append);
      }
    void unsetAmenitiesExcludeNotSupported(void)
      {
        if (flagHasAmenitiesExcludeNotSupported)
          {
            for (size_t num18 = 0; num18 < storeAmenitiesExcludeNotSupported.size(); ++num18)
              {
                storeAmenitiesExcludeNotSupported[num18]->remove_reference();
              }
          }
        flagHasAmenitiesExcludeNotSupported = false;
        storeAmenitiesExcludeNotSupported.clear();
      }

    virtual void extraLocalSearchFilterSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocalSearchFilterSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocalSearchFilterSpecLookup(key);
        if (old_field == NULL)
          {
            extraLocalSearchFilterSpecAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        if (storeQueryType.in_known_list)
          {
            switch (storeQueryType.list_value)
              {
                case QueryType_Search:
                    handler->string_value("Search");
                    break;
                case QueryType_Question:
                    handler->string_value("Question");
                    break;
                case QueryType_ActionsCall:
                    handler->string_value("ActionsCall");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeQueryType.string_value);
          }
        if (flagHasResultCount)
          {
            handler->start_pair("ResultCount");
            handler->number_value(storeResultCount);
          }
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        if (flagHasRadius)
          {
            handler->start_pair("Radius");
            if (textStoreRadius != "")
                handler->number_value(textStoreRadius.c_str());
            else if (((double)(long int)storeRadius) == storeRadius)
                handler->number_value((long int)storeRadius);
            else
                handler->number_value(storeRadius);
          }
        if (flagHasRadiusUnit)
          {
            handler->start_pair("RadiusUnit");
            switch (storeRadiusUnit)
              {
                case RadiusUnit_Kilometers:
                    handler->string_value("Kilometers");
                    break;
                case RadiusUnit_Miles:
                    handler->string_value("Miles");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasRadiusInferred)
          {
            handler->start_pair("RadiusInferred");
            handler->boolean_value(storeRadiusInferred);
          }
        if (flagHasAlongTheRoute)
          {
            handler->start_pair("AlongTheRoute");
            handler->boolean_value(storeAlongTheRoute);
          }
        if (flagHasRoutePoints)
          {
            handler->start_pair("RoutePoints");
            storeRoutePoints->write_as_json(handler);
          }
        if (flagHasLocalSearchQuestions)
          {
            handler->start_pair("LocalSearchQuestions");
            storeLocalSearchQuestions->write_as_json(handler);
          }
        if (flagHasOpenHours)
          {
            handler->start_pair("OpenHours");
            storeOpenHours->write_as_json(handler);
          }
        if (flagHasOpenHoursSpokenResponse)
          {
            handler->start_pair("OpenHoursSpokenResponse");
            handler->string_value(storeOpenHoursSpokenResponse);
          }
        if (flagHasOpenHoursWrittenResponse)
          {
            handler->start_pair("OpenHoursWrittenResponse");
            handler->string_value(storeOpenHoursWrittenResponse);
          }
        if (flagHasOpenHoursFilterOnHoliday)
          {
            handler->start_pair("OpenHoursFilterOnHoliday");
            handler->boolean_value(storeOpenHoursFilterOnHoliday);
          }
        if (flagHasSortCriteria)
          {
            handler->start_pair("SortCriteria");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSortCriteria.size(); ++num1)
              {
                switch (storeSortCriteria[num1])
                  {
                    case SortCriteria_Distance:
                        handler->string_value("Distance");
                        break;
                    case SortCriteria_Price:
                        handler->string_value("Price");
                        break;
                    case SortCriteria_StarRating:
                        handler->string_value("StarRating");
                        break;
                    case SortCriteria_ReviewCount:
                        handler->string_value("ReviewCount");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasSortOrder)
          {
            handler->start_pair("SortOrder");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeSortOrder.size(); ++num2)
              {
                switch (storeSortOrder[num2])
                  {
                    case SortOrder_Ascending:
                        handler->string_value("Ascending");
                        break;
                    case SortOrder_Descending:
                        handler->string_value("Descending");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasExpensiveFlag)
          {
            handler->start_pair("ExpensiveFlag");
            handler->boolean_value(storeExpensiveFlag);
          }
        if (flagHasInexpensiveFlag)
          {
            handler->start_pair("InexpensiveFlag");
            handler->boolean_value(storeInexpensiveFlag);
          }
        if (flagHasConversationMode)
          {
            handler->start_pair("ConversationMode");
            handler->boolean_value(storeConversationMode);
          }
        if (flagHasStarRatingMin)
          {
            handler->start_pair("StarRatingMin");
            if (textStoreStarRatingMin != "")
                handler->number_value(textStoreStarRatingMin.c_str());
            else if (((double)(long int)storeStarRatingMin) == storeStarRatingMin)
                handler->number_value((long int)storeStarRatingMin);
            else
                handler->number_value(storeStarRatingMin);
          }
        if (flagHasStarRatingMax)
          {
            handler->start_pair("StarRatingMax");
            if (textStoreStarRatingMax != "")
                handler->number_value(textStoreStarRatingMax.c_str());
            else if (((double)(long int)storeStarRatingMax) == storeStarRatingMax)
                handler->number_value((long int)storeStarRatingMax);
            else
                handler->number_value(storeStarRatingMax);
          }
        if (flagHasStarRatingsInclude)
          {
            handler->start_pair("StarRatingsInclude");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeStarRatingsInclude.size(); ++num3)
              {
                if (((double)(long int)storeStarRatingsInclude[num3]) == storeStarRatingsInclude[num3])
                    handler->number_value((long int)storeStarRatingsInclude[num3]);
                else
                    handler->number_value(storeStarRatingsInclude[num3]);
              }
            handler->finish_array();
          }
        if (flagHasStarRatingsExclude)
          {
            handler->start_pair("StarRatingsExclude");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeStarRatingsExclude.size(); ++num4)
              {
                if (((double)(long int)storeStarRatingsExclude[num4]) == storeStarRatingsExclude[num4])
                    handler->number_value((long int)storeStarRatingsExclude[num4]);
                else
                    handler->number_value(storeStarRatingsExclude[num4]);
              }
            handler->finish_array();
          }
        if (flagHasReviewCountMin)
          {
            handler->start_pair("ReviewCountMin");
            handler->number_value(storeReviewCountMin.get_o_integer());
          }
        if (flagHasReviewCountMax)
          {
            handler->start_pair("ReviewCountMax");
            handler->number_value(storeReviewCountMax.get_o_integer());
          }
        if (flagHasDollarSignMin)
          {
            handler->start_pair("DollarSignMin");
            if (textStoreDollarSignMin != "")
                handler->number_value(textStoreDollarSignMin.c_str());
            else if (((double)(long int)storeDollarSignMin) == storeDollarSignMin)
                handler->number_value((long int)storeDollarSignMin);
            else
                handler->number_value(storeDollarSignMin);
          }
        if (flagHasDollarSignMax)
          {
            handler->start_pair("DollarSignMax");
            if (textStoreDollarSignMax != "")
                handler->number_value(textStoreDollarSignMax.c_str());
            else if (((double)(long int)storeDollarSignMax) == storeDollarSignMax)
                handler->number_value((long int)storeDollarSignMax);
            else
                handler->number_value(storeDollarSignMax);
          }
        if (flagHasDollarSignsInclude)
          {
            handler->start_pair("DollarSignsInclude");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeDollarSignsInclude.size(); ++num5)
              {
                if (((double)(long int)storeDollarSignsInclude[num5]) == storeDollarSignsInclude[num5])
                    handler->number_value((long int)storeDollarSignsInclude[num5]);
                else
                    handler->number_value(storeDollarSignsInclude[num5]);
              }
            handler->finish_array();
          }
        if (flagHasDollarSignsExclude)
          {
            handler->start_pair("DollarSignsExclude");
            handler->start_array();
            for (size_t num6 = 0; num6 < storeDollarSignsExclude.size(); ++num6)
              {
                if (((double)(long int)storeDollarSignsExclude[num6]) == storeDollarSignsExclude[num6])
                    handler->number_value((long int)storeDollarSignsExclude[num6]);
                else
                    handler->number_value(storeDollarSignsExclude[num6]);
              }
            handler->finish_array();
          }
        if (flagHasCategoriesInclude)
          {
            handler->start_pair("CategoriesInclude");
            handler->start_array();
            for (size_t num7 = 0; num7 < storeCategoriesInclude.size(); ++num7)
              {
                handler->string_value(storeCategoriesInclude[num7]);
              }
            handler->finish_array();
          }
        if (flagHasCategoriesExclude)
          {
            handler->start_pair("CategoriesExclude");
            handler->start_array();
            for (size_t num8 = 0; num8 < storeCategoriesExclude.size(); ++num8)
              {
                handler->string_value(storeCategoriesExclude[num8]);
              }
            handler->finish_array();
          }
        if (flagHasChainsInclude)
          {
            handler->start_pair("ChainsInclude");
            handler->start_array();
            for (size_t num9 = 0; num9 < storeChainsInclude.size(); ++num9)
              {
                handler->string_value(storeChainsInclude[num9]);
              }
            handler->finish_array();
          }
        if (flagHasChainsExclude)
          {
            handler->start_pair("ChainsExclude");
            handler->start_array();
            for (size_t num10 = 0; num10 < storeChainsExclude.size(); ++num10)
              {
                handler->string_value(storeChainsExclude[num10]);
              }
            handler->finish_array();
          }
        if (flagHasProductsInclude)
          {
            handler->start_pair("ProductsInclude");
            handler->start_array();
            for (size_t num11 = 0; num11 < storeProductsInclude.size(); ++num11)
              {
                handler->string_value(storeProductsInclude[num11]);
              }
            handler->finish_array();
          }
        if (flagHasProductsExclude)
          {
            handler->start_pair("ProductsExclude");
            handler->start_array();
            for (size_t num12 = 0; num12 < storeProductsExclude.size(); ++num12)
              {
                handler->string_value(storeProductsExclude[num12]);
              }
            handler->finish_array();
          }
        if (flagHasResultIDsReferenced)
          {
            handler->start_pair("ResultIDsReferenced");
            handler->start_array();
            for (size_t num13 = 0; num13 < storeResultIDsReferenced.size(); ++num13)
              {
                handler->string_value(storeResultIDsReferenced[num13]);
              }
            handler->finish_array();
          }
        if (flagHasResultIDsIndex)
          {
            handler->start_pair("ResultIDsIndex");
            handler->number_value(storeResultIDsIndex);
          }
        if (flagHasResultIDsIndexRepeated)
          {
            handler->start_pair("ResultIDsIndexRepeated");
            handler->boolean_value(storeResultIDsIndexRepeated);
          }
        if (flagHasPlacesInclude)
          {
            handler->start_pair("PlacesInclude");
            handler->start_array();
            for (size_t num14 = 0; num14 < storePlacesInclude.size(); ++num14)
              {
                handler->string_value(storePlacesInclude[num14]);
              }
            handler->finish_array();
          }
        if (flagHasPlacesExclude)
          {
            handler->start_pair("PlacesExclude");
            handler->start_array();
            for (size_t num15 = 0; num15 < storePlacesExclude.size(); ++num15)
              {
                handler->string_value(storePlacesExclude[num15]);
              }
            handler->finish_array();
          }
        if (flagHasExcludedPlacesSpoken)
          {
            handler->start_pair("ExcludedPlacesSpoken");
            handler->string_value(storeExcludedPlacesSpoken);
          }
        if (flagHasExcludedPlacesWritten)
          {
            handler->start_pair("ExcludedPlacesWritten");
            handler->string_value(storeExcludedPlacesWritten);
          }
        if (flagHasAmenitiesInclude)
          {
            handler->start_pair("AmenitiesInclude");
            handler->start_array();
            for (size_t num16 = 0; num16 < storeAmenitiesInclude.size(); ++num16)
              {
                storeAmenitiesInclude[num16]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesIncludeSupported)
          {
            handler->start_pair("AmenitiesIncludeSupported");
            handler->start_array();
            for (size_t num17 = 0; num17 < storeAmenitiesIncludeSupported.size(); ++num17)
              {
                storeAmenitiesIncludeSupported[num17]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesIncludeNotSupported)
          {
            handler->start_pair("AmenitiesIncludeNotSupported");
            handler->start_array();
            for (size_t num18 = 0; num18 < storeAmenitiesIncludeNotSupported.size(); ++num18)
              {
                storeAmenitiesIncludeNotSupported[num18]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesExclude)
          {
            handler->start_pair("AmenitiesExclude");
            handler->start_array();
            for (size_t num19 = 0; num19 < storeAmenitiesExclude.size(); ++num19)
              {
                storeAmenitiesExclude[num19]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesExcludeSupported)
          {
            handler->start_pair("AmenitiesExcludeSupported");
            handler->start_array();
            for (size_t num20 = 0; num20 < storeAmenitiesExcludeSupported.size(); ++num20)
              {
                storeAmenitiesExcludeSupported[num20]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAmenitiesExcludeNotSupported)
          {
            handler->start_pair("AmenitiesExcludeNotSupported");
            handler->start_array();
            for (size_t num21 = 0; num21 < storeAmenitiesExcludeNotSupported.size(); ++num21)
              {
                storeAmenitiesExcludeNotSupported[num21]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        return NULL;
      }

    static LocalSearchFilterSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalSearchFilterSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalSearchFilterSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool> generator("Type LocalSearchFilterSpec", ignore_extras);
            parse_json_value(text, "Text for LocalSearchFilterSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalSearchFilterSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalSearchFilterSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool> generator("Type LocalSearchFilterSpec", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
    class FieldGeneratorQueryType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeQueryTypeKnownValues known = stringToQueryType(result);
                TypeQueryType new_value;
                if (known == QueryType__none)
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
            virtual void handle_result(TypeQueryType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryType, TypeQueryType, TypeQueryType > fieldGeneratorQueryType;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 30>, uint8_t, uint8_t > fieldGeneratorResultCount;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRadius;
    class FieldGeneratorRadiusUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorRadiusUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorRadiusUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToRadiusUnit(result));
              }
            virtual void handle_result(TypeRadiusUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorRadiusUnit, TypeRadiusUnit, TypeRadiusUnit > fieldGeneratorRadiusUnit;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRadiusInferred;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAlongTheRoute;
        JSONHoldingGenerator<RoutePointsJSON::Generator, RCHandle<RoutePointsJSON>, RoutePointsJSON *, bool > fieldGeneratorRoutePoints;
        JSONHoldingGenerator<LocalSearchQuestionsSpecJSON::Generator, RCHandle<LocalSearchQuestionsSpecJSON>, LocalSearchQuestionsSpecJSON *, bool > fieldGeneratorLocalSearchQuestions;
        JSONHoldingGenerator<OpenHoursSpecJSON::Generator, RCHandle<OpenHoursSpecJSON>, OpenHoursSpecJSON *, bool > fieldGeneratorOpenHours;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOpenHoursSpokenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOpenHoursWrittenResponse;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenHoursFilterOnHoliday;
    class FieldGeneratorSortCriteria : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSortCriteria(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSortCriteria(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSortCriteria(result));
              }
            virtual void handle_result(TypeSortCriteria result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorSortCriteria, TypeSortCriteria, TypeSortCriteria > fieldGeneratorSortCriteria;
    class FieldGeneratorSortOrder : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSortOrder(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSortOrder(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSortOrder(result));
              }
            virtual void handle_result(TypeSortOrder result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorSortOrder, TypeSortOrder, TypeSortOrder > fieldGeneratorSortOrder;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorExpensiveFlag;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInexpensiveFlag;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorConversationMode;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingMin;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingMax;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingsInclude;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorStarRatingsExclude;
        static char lowerBoundReviewCountMin[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundReviewCountMin>, OInteger, o_integer > fieldGeneratorReviewCountMin;
        static char lowerBoundReviewCountMax[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundReviewCountMax>, OInteger, o_integer > fieldGeneratorReviewCountMax;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDollarSignMin;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDollarSignMax;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDollarSignsInclude;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDollarSignsExclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategoriesInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategoriesExclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChainsInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChainsExclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProductsInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProductsExclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResultIDsReferenced;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 100>, uint8_t, uint8_t > fieldGeneratorResultIDsIndex;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorResultIDsIndexRepeated;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlacesInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPlacesExclude;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExcludedPlacesSpoken;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExcludedPlacesWritten;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesInclude;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesIncludeSupported;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesIncludeNotSupported;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesExclude;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesExcludeSupported;
        JSONHoldingArrayGenerator<AmenityGroupSpecJSON::Generator, RCHandle<AmenityGroupSpecJSON>, AmenityGroupSpecJSON *, bool > fieldGeneratorAmenitiesExcludeNotSupported;
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
            LocalSearchFilterSpecJSON *result = new LocalSearchFilterSpecJSON();
            assert(result != NULL);
            RCHandle<LocalSearchFilterSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalSearchFilterSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(LocalSearchFilterSpecJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value);
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorResultCount.have_value)
              {
                result->setResultCount(fieldGeneratorResultCount.value);
                fieldGeneratorResultCount.have_value = false;
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorRadius.have_value)
              {
                result->setRadiusText(fieldGeneratorRadius.value);
                fieldGeneratorRadius.have_value = false;
              }
            if (fieldGeneratorRadiusUnit.have_value)
              {
                result->setRadiusUnit(fieldGeneratorRadiusUnit.value);
                fieldGeneratorRadiusUnit.have_value = false;
              }
            if (fieldGeneratorRadiusInferred.have_value)
              {
                result->setRadiusInferred(fieldGeneratorRadiusInferred.value);
                fieldGeneratorRadiusInferred.have_value = false;
              }
            if (fieldGeneratorAlongTheRoute.have_value)
              {
                result->setAlongTheRoute(fieldGeneratorAlongTheRoute.value);
                fieldGeneratorAlongTheRoute.have_value = false;
              }
            if (fieldGeneratorRoutePoints.have_value)
              {
                result->setRoutePoints(fieldGeneratorRoutePoints.value.referenced());
                fieldGeneratorRoutePoints.have_value = false;
              }
            if (fieldGeneratorLocalSearchQuestions.have_value)
              {
                result->setLocalSearchQuestions(fieldGeneratorLocalSearchQuestions.value.referenced());
                fieldGeneratorLocalSearchQuestions.have_value = false;
              }
            if (fieldGeneratorOpenHours.have_value)
              {
                result->setOpenHours(fieldGeneratorOpenHours.value.referenced());
                fieldGeneratorOpenHours.have_value = false;
              }
            if (fieldGeneratorOpenHoursSpokenResponse.have_value)
              {
                result->setOpenHoursSpokenResponse(fieldGeneratorOpenHoursSpokenResponse.value);
                fieldGeneratorOpenHoursSpokenResponse.have_value = false;
              }
            if (fieldGeneratorOpenHoursWrittenResponse.have_value)
              {
                result->setOpenHoursWrittenResponse(fieldGeneratorOpenHoursWrittenResponse.value);
                fieldGeneratorOpenHoursWrittenResponse.have_value = false;
              }
            if (fieldGeneratorOpenHoursFilterOnHoliday.have_value)
              {
                result->setOpenHoursFilterOnHoliday(fieldGeneratorOpenHoursFilterOnHoliday.value);
                fieldGeneratorOpenHoursFilterOnHoliday.have_value = false;
              }
            if (fieldGeneratorSortCriteria.have_value)
              {
                result->initSortCriteria();
                size_t count = fieldGeneratorSortCriteria.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSortCriteria(fieldGeneratorSortCriteria.value[num]);
                  }
                fieldGeneratorSortCriteria.value.clear();
                fieldGeneratorSortCriteria.have_value = false;
              }
            if (fieldGeneratorSortOrder.have_value)
              {
                result->initSortOrder();
                size_t count = fieldGeneratorSortOrder.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSortOrder(fieldGeneratorSortOrder.value[num]);
                  }
                fieldGeneratorSortOrder.value.clear();
                fieldGeneratorSortOrder.have_value = false;
              }
            if (fieldGeneratorExpensiveFlag.have_value)
              {
                result->setExpensiveFlag(fieldGeneratorExpensiveFlag.value);
                fieldGeneratorExpensiveFlag.have_value = false;
              }
            if (fieldGeneratorInexpensiveFlag.have_value)
              {
                result->setInexpensiveFlag(fieldGeneratorInexpensiveFlag.value);
                fieldGeneratorInexpensiveFlag.have_value = false;
              }
            if (fieldGeneratorConversationMode.have_value)
              {
                result->setConversationMode(fieldGeneratorConversationMode.value);
                fieldGeneratorConversationMode.have_value = false;
              }
            if (fieldGeneratorStarRatingMin.have_value)
              {
                result->setStarRatingMinText(fieldGeneratorStarRatingMin.value);
                fieldGeneratorStarRatingMin.have_value = false;
              }
            if (fieldGeneratorStarRatingMax.have_value)
              {
                result->setStarRatingMaxText(fieldGeneratorStarRatingMax.value);
                fieldGeneratorStarRatingMax.have_value = false;
              }
            if (fieldGeneratorStarRatingsInclude.have_value)
              {
                result->initStarRatingsInclude();
                size_t count = fieldGeneratorStarRatingsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStarRatingsInclude(atof(fieldGeneratorStarRatingsInclude.value[num].c_str()));
                  }
                fieldGeneratorStarRatingsInclude.value.clear();
                fieldGeneratorStarRatingsInclude.have_value = false;
              }
            if (fieldGeneratorStarRatingsExclude.have_value)
              {
                result->initStarRatingsExclude();
                size_t count = fieldGeneratorStarRatingsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStarRatingsExclude(atof(fieldGeneratorStarRatingsExclude.value[num].c_str()));
                  }
                fieldGeneratorStarRatingsExclude.value.clear();
                fieldGeneratorStarRatingsExclude.have_value = false;
              }
            if (fieldGeneratorReviewCountMin.have_value)
              {
                result->setReviewCountMin(fieldGeneratorReviewCountMin.value);
                fieldGeneratorReviewCountMin.have_value = false;
              }
            if (fieldGeneratorReviewCountMax.have_value)
              {
                result->setReviewCountMax(fieldGeneratorReviewCountMax.value);
                fieldGeneratorReviewCountMax.have_value = false;
              }
            if (fieldGeneratorDollarSignMin.have_value)
              {
                result->setDollarSignMinText(fieldGeneratorDollarSignMin.value);
                fieldGeneratorDollarSignMin.have_value = false;
              }
            if (fieldGeneratorDollarSignMax.have_value)
              {
                result->setDollarSignMaxText(fieldGeneratorDollarSignMax.value);
                fieldGeneratorDollarSignMax.have_value = false;
              }
            if (fieldGeneratorDollarSignsInclude.have_value)
              {
                result->initDollarSignsInclude();
                size_t count = fieldGeneratorDollarSignsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDollarSignsInclude(atof(fieldGeneratorDollarSignsInclude.value[num].c_str()));
                  }
                fieldGeneratorDollarSignsInclude.value.clear();
                fieldGeneratorDollarSignsInclude.have_value = false;
              }
            if (fieldGeneratorDollarSignsExclude.have_value)
              {
                result->initDollarSignsExclude();
                size_t count = fieldGeneratorDollarSignsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDollarSignsExclude(atof(fieldGeneratorDollarSignsExclude.value[num].c_str()));
                  }
                fieldGeneratorDollarSignsExclude.value.clear();
                fieldGeneratorDollarSignsExclude.have_value = false;
              }
            if (fieldGeneratorCategoriesInclude.have_value)
              {
                result->initCategoriesInclude();
                size_t count = fieldGeneratorCategoriesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCategoriesInclude(fieldGeneratorCategoriesInclude.value[num]);
                  }
                fieldGeneratorCategoriesInclude.value.clear();
                fieldGeneratorCategoriesInclude.have_value = false;
              }
            if (fieldGeneratorCategoriesExclude.have_value)
              {
                result->initCategoriesExclude();
                size_t count = fieldGeneratorCategoriesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCategoriesExclude(fieldGeneratorCategoriesExclude.value[num]);
                  }
                fieldGeneratorCategoriesExclude.value.clear();
                fieldGeneratorCategoriesExclude.have_value = false;
              }
            if (fieldGeneratorChainsInclude.have_value)
              {
                result->initChainsInclude();
                size_t count = fieldGeneratorChainsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChainsInclude(fieldGeneratorChainsInclude.value[num]);
                  }
                fieldGeneratorChainsInclude.value.clear();
                fieldGeneratorChainsInclude.have_value = false;
              }
            if (fieldGeneratorChainsExclude.have_value)
              {
                result->initChainsExclude();
                size_t count = fieldGeneratorChainsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChainsExclude(fieldGeneratorChainsExclude.value[num]);
                  }
                fieldGeneratorChainsExclude.value.clear();
                fieldGeneratorChainsExclude.have_value = false;
              }
            if (fieldGeneratorProductsInclude.have_value)
              {
                result->initProductsInclude();
                size_t count = fieldGeneratorProductsInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProductsInclude(fieldGeneratorProductsInclude.value[num]);
                  }
                fieldGeneratorProductsInclude.value.clear();
                fieldGeneratorProductsInclude.have_value = false;
              }
            if (fieldGeneratorProductsExclude.have_value)
              {
                result->initProductsExclude();
                size_t count = fieldGeneratorProductsExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProductsExclude(fieldGeneratorProductsExclude.value[num]);
                  }
                fieldGeneratorProductsExclude.value.clear();
                fieldGeneratorProductsExclude.have_value = false;
              }
            if (fieldGeneratorResultIDsReferenced.have_value)
              {
                result->initResultIDsReferenced();
                size_t count = fieldGeneratorResultIDsReferenced.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendResultIDsReferenced(fieldGeneratorResultIDsReferenced.value[num]);
                  }
                fieldGeneratorResultIDsReferenced.value.clear();
                fieldGeneratorResultIDsReferenced.have_value = false;
              }
            if (fieldGeneratorResultIDsIndex.have_value)
              {
                result->setResultIDsIndex(fieldGeneratorResultIDsIndex.value);
                fieldGeneratorResultIDsIndex.have_value = false;
              }
            if (fieldGeneratorResultIDsIndexRepeated.have_value)
              {
                result->setResultIDsIndexRepeated(fieldGeneratorResultIDsIndexRepeated.value);
                fieldGeneratorResultIDsIndexRepeated.have_value = false;
              }
            if (fieldGeneratorPlacesInclude.have_value)
              {
                result->initPlacesInclude();
                size_t count = fieldGeneratorPlacesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlacesInclude(fieldGeneratorPlacesInclude.value[num]);
                  }
                fieldGeneratorPlacesInclude.value.clear();
                fieldGeneratorPlacesInclude.have_value = false;
              }
            if (fieldGeneratorPlacesExclude.have_value)
              {
                result->initPlacesExclude();
                size_t count = fieldGeneratorPlacesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlacesExclude(fieldGeneratorPlacesExclude.value[num]);
                  }
                fieldGeneratorPlacesExclude.value.clear();
                fieldGeneratorPlacesExclude.have_value = false;
              }
            if (fieldGeneratorExcludedPlacesSpoken.have_value)
              {
                result->setExcludedPlacesSpoken(fieldGeneratorExcludedPlacesSpoken.value);
                fieldGeneratorExcludedPlacesSpoken.have_value = false;
              }
            if (fieldGeneratorExcludedPlacesWritten.have_value)
              {
                result->setExcludedPlacesWritten(fieldGeneratorExcludedPlacesWritten.value);
                fieldGeneratorExcludedPlacesWritten.have_value = false;
              }
            if (fieldGeneratorAmenitiesInclude.have_value)
              {
                result->initAmenitiesInclude();
                size_t count = fieldGeneratorAmenitiesInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesInclude(fieldGeneratorAmenitiesInclude.value[num].referenced());
                  }
                fieldGeneratorAmenitiesInclude.value.clear();
                fieldGeneratorAmenitiesInclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesIncludeSupported.have_value)
              {
                result->initAmenitiesIncludeSupported();
                size_t count = fieldGeneratorAmenitiesIncludeSupported.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesIncludeSupported(fieldGeneratorAmenitiesIncludeSupported.value[num].referenced());
                  }
                fieldGeneratorAmenitiesIncludeSupported.value.clear();
                fieldGeneratorAmenitiesIncludeSupported.have_value = false;
              }
            if (fieldGeneratorAmenitiesIncludeNotSupported.have_value)
              {
                result->initAmenitiesIncludeNotSupported();
                size_t count = fieldGeneratorAmenitiesIncludeNotSupported.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesIncludeNotSupported(fieldGeneratorAmenitiesIncludeNotSupported.value[num].referenced());
                  }
                fieldGeneratorAmenitiesIncludeNotSupported.value.clear();
                fieldGeneratorAmenitiesIncludeNotSupported.have_value = false;
              }
            if (fieldGeneratorAmenitiesExclude.have_value)
              {
                result->initAmenitiesExclude();
                size_t count = fieldGeneratorAmenitiesExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesExclude(fieldGeneratorAmenitiesExclude.value[num].referenced());
                  }
                fieldGeneratorAmenitiesExclude.value.clear();
                fieldGeneratorAmenitiesExclude.have_value = false;
              }
            if (fieldGeneratorAmenitiesExcludeSupported.have_value)
              {
                result->initAmenitiesExcludeSupported();
                size_t count = fieldGeneratorAmenitiesExcludeSupported.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesExcludeSupported(fieldGeneratorAmenitiesExcludeSupported.value[num].referenced());
                  }
                fieldGeneratorAmenitiesExcludeSupported.value.clear();
                fieldGeneratorAmenitiesExcludeSupported.have_value = false;
              }
            if (fieldGeneratorAmenitiesExcludeNotSupported.have_value)
              {
                result->initAmenitiesExcludeNotSupported();
                size_t count = fieldGeneratorAmenitiesExcludeNotSupported.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAmenitiesExcludeNotSupported(fieldGeneratorAmenitiesExcludeNotSupported.value[num].referenced());
                  }
                fieldGeneratorAmenitiesExcludeNotSupported.value.clear();
                fieldGeneratorAmenitiesExcludeNotSupported.have_value = false;
              }
          }
        virtual void handle_result(LocalSearchFilterSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "ongTheRoute") == 0)
                                return &fieldGeneratorAlongTheRoute;
                            break;
                        case 'm':
                            if (strncmp(&(field_name[2]), "enities", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'E':
                                        if (strncmp(&(field_name[10]), "xclude", 6) == 0)
                                          {
                                            switch ((unsigned char)(field_name[16]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorAmenitiesExclude;
                                                case 'N':
                                                    if (strcmp(&(field_name[17]), "otSupported") == 0)
                                                        return &fieldGeneratorAmenitiesExcludeNotSupported;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[17]), "upported") == 0)
                                                        return &fieldGeneratorAmenitiesExcludeSupported;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'I':
                                        if (strncmp(&(field_name[10]), "nclude", 6) == 0)
                                          {
                                            switch ((unsigned char)(field_name[16]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorAmenitiesInclude;
                                                case 'N':
                                                    if (strcmp(&(field_name[17]), "otSupported") == 0)
                                                        return &fieldGeneratorAmenitiesIncludeNotSupported;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[17]), "upported") == 0)
                                                        return &fieldGeneratorAmenitiesIncludeSupported;
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
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "tegories", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[11]), "xclude") == 0)
                                            return &fieldGeneratorCategoriesExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[11]), "nclude") == 0)
                                            return &fieldGeneratorCategoriesInclude;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'h':
                            if (strncmp(&(field_name[2]), "ains", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[7]), "xclude") == 0)
                                            return &fieldGeneratorChainsExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "nclude") == 0)
                                            return &fieldGeneratorChainsInclude;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "nversationMode") == 0)
                                return &fieldGeneratorConversationMode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "ollarSign", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'M':
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[12]), "x") == 0)
                                            return &fieldGeneratorDollarSignMax;
                                        break;
                                    case 'i':
                                        if (strcmp(&(field_name[12]), "n") == 0)
                                            return &fieldGeneratorDollarSignMin;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 's':
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[12]), "xclude") == 0)
                                            return &fieldGeneratorDollarSignsExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[12]), "nclude") == 0)
                                            return &fieldGeneratorDollarSignsInclude;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "x", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'c':
                                if (strncmp(&(field_name[3]), "ludedPlaces", 11) == 0)
                                  {
                                    switch ((unsigned char)(field_name[14]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[15]), "poken") == 0)
                                                return &fieldGeneratorExcludedPlacesSpoken;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[15]), "ritten") == 0)
                                                return &fieldGeneratorExcludedPlacesWritten;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'p':
                                if (strcmp(&(field_name[3]), "ensiveFlag") == 0)
                                    return &fieldGeneratorExpensiveFlag;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nexpensiveFlag") == 0)
                        return &fieldGeneratorInexpensiveFlag;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocalSearchQuestions") == 0)
                        return &fieldGeneratorLocalSearchQuestions;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "penHours", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 0:
                                return &fieldGeneratorOpenHours;
                            case 'F':
                                if (strcmp(&(field_name[10]), "ilterOnHoliday") == 0)
                                    return &fieldGeneratorOpenHoursFilterOnHoliday;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[10]), "pokenResponse") == 0)
                                    return &fieldGeneratorOpenHoursSpokenResponse;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[10]), "rittenResponse") == 0)
                                    return &fieldGeneratorOpenHoursWrittenResponse;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "aces", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[7]), "xclude") == 0)
                                            return &fieldGeneratorPlacesExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "nclude") == 0)
                                            return &fieldGeneratorPlacesInclude;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "oducts", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[9]), "xclude") == 0)
                                            return &fieldGeneratorProductsExclude;
                                        break;
                                    case 'I':
                                        if (strcmp(&(field_name[9]), "nclude") == 0)
                                            return &fieldGeneratorProductsInclude;
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
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "dius", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 0:
                                        return &fieldGeneratorRadius;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "nferred") == 0)
                                            return &fieldGeneratorRadiusInferred;
                                        break;
                                    case 'U':
                                        if (strcmp(&(field_name[7]), "nit") == 0)
                                            return &fieldGeneratorRadiusUnit;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 's':
                                    if (strncmp(&(field_name[3]), "ult", 3) == 0)
                                      {
                                        switch ((unsigned char)(field_name[6]))
                                          {
                                            case 'C':
                                                if (strcmp(&(field_name[7]), "ount") == 0)
                                                    return &fieldGeneratorResultCount;
                                                break;
                                            case 'I':
                                                if (strncmp(&(field_name[7]), "Ds", 2) == 0)
                                                  {
                                                    switch ((unsigned char)(field_name[9]))
                                                      {
                                                        case 'I':
                                                            if (strncmp(&(field_name[10]), "ndex", 4) == 0)
                                                              {
                                                                switch ((unsigned char)(field_name[14]))
                                                                  {
                                                                    case 0:
                                                                        return &fieldGeneratorResultIDsIndex;
                                                                    case 'R':
                                                                        if (strcmp(&(field_name[15]), "epeated") == 0)
                                                                            return &fieldGeneratorResultIDsIndexRepeated;
                                                                        break;
                                                                    default:
                                                                        break;
                                                                  }
                                                              }
                                                            break;
                                                        case 'R':
                                                            if (strcmp(&(field_name[10]), "eferenced") == 0)
                                                                return &fieldGeneratorResultIDsReferenced;
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
                                case 'v':
                                    if (strncmp(&(field_name[3]), "iewCountM", 9) == 0)
                                      {
                                        switch ((unsigned char)(field_name[12]))
                                          {
                                            case 'a':
                                                if (strcmp(&(field_name[13]), "x") == 0)
                                                    return &fieldGeneratorReviewCountMax;
                                                break;
                                            case 'i':
                                                if (strcmp(&(field_name[13]), "n") == 0)
                                                    return &fieldGeneratorReviewCountMin;
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
                        case 'o':
                            if (strcmp(&(field_name[2]), "utePoints") == 0)
                                return &fieldGeneratorRoutePoints;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strncmp(&(field_name[2]), "rt", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[5]), "riteria") == 0)
                                            return &fieldGeneratorSortCriteria;
                                        break;
                                    case 'O':
                                        if (strcmp(&(field_name[5]), "rder") == 0)
                                            return &fieldGeneratorSortOrder;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "arRating", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 'M':
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 'a':
                                                if (strcmp(&(field_name[12]), "x") == 0)
                                                    return &fieldGeneratorStarRatingMax;
                                                break;
                                            case 'i':
                                                if (strcmp(&(field_name[12]), "n") == 0)
                                                    return &fieldGeneratorStarRatingMin;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 's':
                                        switch ((unsigned char)(field_name[11]))
                                          {
                                            case 'E':
                                                if (strcmp(&(field_name[12]), "xclude") == 0)
                                                    return &fieldGeneratorStarRatingsExclude;
                                                break;
                                            case 'I':
                                                if (strcmp(&(field_name[12]), "nclude") == 0)
                                                    return &fieldGeneratorStarRatingsInclude;
                                                break;
                                            default:
                                                break;
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
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the LocalSearchFilterSpec class"), fieldGeneratorResultCount("field \"ResultCount\" of the LocalSearchFilterSpec class"), fieldGeneratorMapLocation("field \"MapLocation\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorRadius("field \"Radius\" of the LocalSearchFilterSpec class"), fieldGeneratorRadiusUnit("field \"RadiusUnit\" of the LocalSearchFilterSpec class"), fieldGeneratorRadiusInferred("field \"RadiusInferred\" of the LocalSearchFilterSpec class"), fieldGeneratorAlongTheRoute("field \"AlongTheRoute\" of the LocalSearchFilterSpec class"), fieldGeneratorRoutePoints("field \"RoutePoints\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorLocalSearchQuestions("field \"LocalSearchQuestions\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorOpenHours("field \"OpenHours\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorOpenHoursSpokenResponse("field \"OpenHoursSpokenResponse\" of the LocalSearchFilterSpec class"), fieldGeneratorOpenHoursWrittenResponse("field \"OpenHoursWrittenResponse\" of the LocalSearchFilterSpec class"), fieldGeneratorOpenHoursFilterOnHoliday("field \"OpenHoursFilterOnHoliday\" of the LocalSearchFilterSpec class"), fieldGeneratorSortCriteria("field \"SortCriteria\" of the LocalSearchFilterSpec class"), fieldGeneratorSortOrder("field \"SortOrder\" of the LocalSearchFilterSpec class"), fieldGeneratorExpensiveFlag("field \"ExpensiveFlag\" of the LocalSearchFilterSpec class"), fieldGeneratorInexpensiveFlag("field \"InexpensiveFlag\" of the LocalSearchFilterSpec class"), fieldGeneratorConversationMode("field \"ConversationMode\" of the LocalSearchFilterSpec class"), fieldGeneratorStarRatingMin("field \"StarRatingMin\" of the LocalSearchFilterSpec class"), fieldGeneratorStarRatingMax("field \"StarRatingMax\" of the LocalSearchFilterSpec class"), fieldGeneratorStarRatingsInclude("field \"StarRatingsInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorStarRatingsExclude("field \"StarRatingsExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorReviewCountMin("field \"ReviewCountMin\" of the LocalSearchFilterSpec class"), fieldGeneratorReviewCountMax("field \"ReviewCountMax\" of the LocalSearchFilterSpec class"), fieldGeneratorDollarSignMin("field \"DollarSignMin\" of the LocalSearchFilterSpec class"), fieldGeneratorDollarSignMax("field \"DollarSignMax\" of the LocalSearchFilterSpec class"), fieldGeneratorDollarSignsInclude("field \"DollarSignsInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorDollarSignsExclude("field \"DollarSignsExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorCategoriesInclude("field \"CategoriesInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorCategoriesExclude("field \"CategoriesExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorChainsInclude("field \"ChainsInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorChainsExclude("field \"ChainsExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorProductsInclude("field \"ProductsInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorProductsExclude("field \"ProductsExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorResultIDsReferenced("field \"ResultIDsReferenced\" of the LocalSearchFilterSpec class"), fieldGeneratorResultIDsIndex("field \"ResultIDsIndex\" of the LocalSearchFilterSpec class"), fieldGeneratorResultIDsIndexRepeated("field \"ResultIDsIndexRepeated\" of the LocalSearchFilterSpec class"), fieldGeneratorPlacesInclude("field \"PlacesInclude\" of the LocalSearchFilterSpec class"), fieldGeneratorPlacesExclude("field \"PlacesExclude\" of the LocalSearchFilterSpec class"), fieldGeneratorExcludedPlacesSpoken("field \"ExcludedPlacesSpoken\" of the LocalSearchFilterSpec class"), fieldGeneratorExcludedPlacesWritten("field \"ExcludedPlacesWritten\" of the LocalSearchFilterSpec class"), fieldGeneratorAmenitiesInclude("field \"AmenitiesInclude\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorAmenitiesIncludeSupported("field \"AmenitiesIncludeSupported\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorAmenitiesIncludeNotSupported("field \"AmenitiesIncludeNotSupported\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorAmenitiesExclude("field \"AmenitiesExclude\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorAmenitiesExcludeSupported("field \"AmenitiesExcludeSupported\" of the LocalSearchFilterSpec class", ignore_extras), fieldGeneratorAmenitiesExcludeNotSupported("field \"AmenitiesExcludeNotSupported\" of the LocalSearchFilterSpec class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocalSearchFilterSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorResultCount.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRadius.reset();
            fieldGeneratorRadiusUnit.reset();
            fieldGeneratorRadiusInferred.reset();
            fieldGeneratorAlongTheRoute.reset();
            fieldGeneratorRoutePoints.reset();
            fieldGeneratorLocalSearchQuestions.reset();
            fieldGeneratorOpenHours.reset();
            fieldGeneratorOpenHoursSpokenResponse.reset();
            fieldGeneratorOpenHoursWrittenResponse.reset();
            fieldGeneratorOpenHoursFilterOnHoliday.reset();
            fieldGeneratorSortCriteria.reset();
            fieldGeneratorSortOrder.reset();
            fieldGeneratorExpensiveFlag.reset();
            fieldGeneratorInexpensiveFlag.reset();
            fieldGeneratorConversationMode.reset();
            fieldGeneratorStarRatingMin.reset();
            fieldGeneratorStarRatingMax.reset();
            fieldGeneratorStarRatingsInclude.reset();
            fieldGeneratorStarRatingsExclude.reset();
            fieldGeneratorReviewCountMin.reset();
            fieldGeneratorReviewCountMax.reset();
            fieldGeneratorDollarSignMin.reset();
            fieldGeneratorDollarSignMax.reset();
            fieldGeneratorDollarSignsInclude.reset();
            fieldGeneratorDollarSignsExclude.reset();
            fieldGeneratorCategoriesInclude.reset();
            fieldGeneratorCategoriesExclude.reset();
            fieldGeneratorChainsInclude.reset();
            fieldGeneratorChainsExclude.reset();
            fieldGeneratorProductsInclude.reset();
            fieldGeneratorProductsExclude.reset();
            fieldGeneratorResultIDsReferenced.reset();
            fieldGeneratorResultIDsIndex.reset();
            fieldGeneratorResultIDsIndexRepeated.reset();
            fieldGeneratorPlacesInclude.reset();
            fieldGeneratorPlacesExclude.reset();
            fieldGeneratorExcludedPlacesSpoken.reset();
            fieldGeneratorExcludedPlacesWritten.reset();
            fieldGeneratorAmenitiesInclude.reset();
            fieldGeneratorAmenitiesIncludeSupported.reset();
            fieldGeneratorAmenitiesIncludeNotSupported.reset();
            fieldGeneratorAmenitiesExclude.reset();
            fieldGeneratorAmenitiesExcludeSupported.reset();
            fieldGeneratorAmenitiesExcludeNotSupported.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCALSEARCHFILTERSPECJSON_H */
