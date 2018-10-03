/* file "HotelFilterSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelFilterSpecJSON.h"

#include "HotelFilterSpecJSON.h"


HotelFilterSpecJSON::TypeQueryType HotelFilterSpecJSON::stringToQueryType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "otelQuestion") == 0)
                return QueryType_HotelQuestion;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eservation") == 0)
                return QueryType_Reservation;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "earch") == 0)
                return QueryType_Search;
            break;
        default:
            break;
      }
    throw("The value for field `QueryType' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromQueryType(TypeQueryType the_enum)
  {
    switch (the_enum)
      {
        case QueryType_Search:
            return "Search";
        case QueryType_Reservation:
            return "Reservation";
        case QueryType_HotelQuestion:
            return "HotelQuestion";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeRadiusUnit HotelFilterSpecJSON::stringToRadiusUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'K':
            if (strcmp(&(chars[1]), "ilometers") == 0)
                return RadiusUnit_Kilometers;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "iles") == 0)
                return RadiusUnit_Miles;
            break;
        default:
            break;
      }
    throw("The value for field `RadiusUnit' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromRadiusUnit(TypeRadiusUnit the_enum)
  {
    switch (the_enum)
      {
        case RadiusUnit_Kilometers:
            return "Kilometers";
        case RadiusUnit_Miles:
            return "Miles";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeSortCriteria HotelFilterSpecJSON::stringToSortCriteria(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "istance") == 0)
                return SortCriteria_Distance;
            break;
        case 'G':
            if (strcmp(&(chars[1]), "uestRating") == 0)
                return SortCriteria_GuestRating;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "rice") == 0)
                return SortCriteria_Price;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "tarRating") == 0)
                return SortCriteria_StarRating;
            break;
        default:
            break;
      }
    throw("The value for field `SortCriteria' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromSortCriteria(TypeSortCriteria the_enum)
  {
    switch (the_enum)
      {
        case SortCriteria_Distance:
            return "Distance";
        case SortCriteria_Price:
            return "Price";
        case SortCriteria_StarRating:
            return "StarRating";
        case SortCriteria_GuestRating:
            return "GuestRating";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeSortOrder HotelFilterSpecJSON::stringToSortOrder(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "scending") == 0)
                return SortOrder_Ascending;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "escending") == 0)
                return SortOrder_Descending;
            break;
        default:
            break;
      }
    throw("The value for field `SortOrder' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromSortOrder(TypeSortOrder the_enum)
  {
    switch (the_enum)
      {
        case SortOrder_Ascending:
            return "Ascending";
        case SortOrder_Descending:
            return "Descending";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeAccommodationTypesInclude HotelFilterSpecJSON::stringToAccommodationTypesInclude(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "partment Hotel") == 0)
                return AccommodationTypesInclude_Apartment_x20_Hotel;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "ed And Breakfast") == 0)
                return AccommodationTypesInclude_Bed_x20_And_x20_Breakfast;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "otel") == 0)
                return AccommodationTypesInclude_Motel;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "esort") == 0)
                return AccommodationTypesInclude_Resort;
            break;
        default:
            break;
      }
    throw("The value for field `AccommodationTypesInclude' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromAccommodationTypesInclude(TypeAccommodationTypesInclude the_enum)
  {
    switch (the_enum)
      {
        case AccommodationTypesInclude_Motel:
            return "Motel";
        case AccommodationTypesInclude_Resort:
            return "Resort";
        case AccommodationTypesInclude_Bed_x20_And_x20_Breakfast:
            return "Bed And Breakfast";
        case AccommodationTypesInclude_Apartment_x20_Hotel:
            return "Apartment Hotel";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeAccommodationTypesExclude HotelFilterSpecJSON::stringToAccommodationTypesExclude(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "partment Hotel") == 0)
                return AccommodationTypesExclude_Apartment_x20_Hotel;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "ed And Breakfast") == 0)
                return AccommodationTypesExclude_Bed_x20_And_x20_Breakfast;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "otel") == 0)
                return AccommodationTypesExclude_Motel;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "esort") == 0)
                return AccommodationTypesExclude_Resort;
            break;
        default:
            break;
      }
    throw("The value for field `AccommodationTypesExclude' is not one of the legal values.");
  }

const char *HotelFilterSpecJSON::stringFromAccommodationTypesExclude(TypeAccommodationTypesExclude the_enum)
  {
    switch (the_enum)
      {
        case AccommodationTypesExclude_Motel:
            return "Motel";
        case AccommodationTypesExclude_Resort:
            return "Resort";
        case AccommodationTypesExclude_Bed_x20_And_x20_Breakfast:
            return "Bed And Breakfast";
        case AccommodationTypesExclude_Apartment_x20_Hotel:
            return "Apartment Hotel";
        default:
            assert(false);
            return NULL;
      }
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(const TypeAmenityGroupJSON &)
  {
    assert(false);
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON &HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::operator=(const TypeAmenityGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AmenityIndex of TypeAmenityGroupJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AmenityIndex of TypeAmenityGroupJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAmenityIndex(extracted_integer);
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AmenityID of TypeAmenityGroupJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AmenityID of TypeAmenityGroupJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAmenityID(extracted_integer);
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityName of TypeAmenityGroupJSON is not a string.");
    setAmenityName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNamePlural(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelName of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNamePlural(std::string(json_string->getData()));
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(void) :
        flagHasAmenityIndex(false),
        flagHasAmenityID(false),
        flagHasAmenityName(false),
        flagHasAmenitySpokenNameSingular(false),
        flagHasAmenitySpokenNamePlural(false),
        flagHasAmenityTopLevelName(false),
        flagHasAmenityTopLevelSpokenNameSingular(false),
        flagHasAmenityTopLevelSpokenNamePlural(false)
  {
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::~TypeAmenityGroupJSON(void)
  {
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityIndex(void) const
  {
    return flagHasAmenityIndex;
  }

OInteger HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityIndex(void)
  {
    assert(flagHasAmenityIndex);
    return storeAmenityIndex;
  }

const OInteger HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityIndex(void) const
  {
    assert(flagHasAmenityIndex);
    return storeAmenityIndex;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityID(void) const
  {
    return flagHasAmenityID;
  }

OInteger HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityID(void)
  {
    assert(flagHasAmenityID);
    return storeAmenityID;
  }

const OInteger HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityID(void) const
  {
    assert(flagHasAmenityID);
    return storeAmenityID;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityName(void) const
  {
    return flagHasAmenityName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityName(void)
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityName(void) const
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenitySpokenNameSingular(void) const
  {
    return flagHasAmenitySpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void)
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void) const
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenitySpokenNamePlural(void) const
  {
    return flagHasAmenitySpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void)
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void) const
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelName(void) const
  {
    return flagHasAmenityTopLevelName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void)
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void) const
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNameSingular(void) const
  {
    return flagHasAmenityTopLevelSpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void)
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNamePlural(void) const
  {
    return flagHasAmenityTopLevelSpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void)
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenitiesIncludeJSON(const TypeAmenitiesIncludeJSON &)
  {
    assert(false);
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON &HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::operator=(const TypeAmenitiesIncludeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupName of TypeAmenitiesIncludeJSON is not a string.");
    setAmenityGroupName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNameSingular of TypeAmenitiesIncludeJSON is not a string.");
    setAmenityGroupSpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNamePlural of TypeAmenitiesIncludeJSON is not a string.");
    setAmenityGroupSpokenNamePlural(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenityGroup of TypeAmenitiesIncludeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenityGroupJSON * > vector_AmenityGroup1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenityGroupJSON *convert_classy = TypeAmenityGroupJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenityGroup1[num1] = convert_classy;
      }
    initAmenityGroup();
    for (size_t num17 = 0; num17 < vector_AmenityGroup1.size(); ++num17)
        appendAmenityGroup(vector_AmenityGroup1[num17]);
    for (size_t num1 = 0; num1 < vector_AmenityGroup1.size(); ++num1)
      {
        vector_AmenityGroup1[num1]->remove_reference();
      }
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenitiesIncludeJSON(void) :
        flagHasAmenityGroupName(false),
        flagHasAmenityGroupSpokenNameSingular(false),
        flagHasAmenityGroupSpokenNamePlural(false),
        flagHasAmenityGroup(false)
  {
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::~TypeAmenitiesIncludeJSON(void)
  {
    if (flagHasAmenityGroup)
      {
        for (size_t num13 = 0; num13 < storeAmenityGroup.size(); ++num13)
          {
            storeAmenityGroup[num13]->remove_reference();
          }
      }
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::hasAmenityGroupName(void) const
  {
    return flagHasAmenityGroupName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupName(void)
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupName(void) const
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::hasAmenityGroupSpokenNameSingular(void) const
  {
    return flagHasAmenityGroupSpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupSpokenNameSingular(void)
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupSpokenNameSingular(void) const
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::hasAmenityGroupSpokenNamePlural(void) const
  {
    return flagHasAmenityGroupSpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupSpokenNamePlural(void)
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroupSpokenNamePlural(void) const
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

bool HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::hasAmenityGroup(void) const
  {
    return flagHasAmenityGroup;
  }

size_t HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::countOfAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup.size();
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON * HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::elementOfAmenityGroup(size_t element_num)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

const HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON * HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::elementOfAmenityGroup(size_t element_num) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON * > HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroup(void)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

const std::vector< HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON * > HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::getAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(const TypeAmenityGroupJSON &)
  {
    assert(false);
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON &HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::operator=(const TypeAmenityGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AmenityIndex of TypeAmenityGroupJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AmenityIndex of TypeAmenityGroupJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAmenityIndex(extracted_integer);
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AmenityID of TypeAmenityGroupJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AmenityID of TypeAmenityGroupJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAmenityID(extracted_integer);
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityName of TypeAmenityGroupJSON is not a string.");
    setAmenityName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenitySpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenitySpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenitySpokenNamePlural(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelName of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNameSingular of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::fromJSONAmenityTopLevelSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityTopLevelSpokenNamePlural of TypeAmenityGroupJSON is not a string.");
    setAmenityTopLevelSpokenNamePlural(std::string(json_string->getData()));
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::TypeAmenityGroupJSON(void) :
        flagHasAmenityIndex(false),
        flagHasAmenityID(false),
        flagHasAmenityName(false),
        flagHasAmenitySpokenNameSingular(false),
        flagHasAmenitySpokenNamePlural(false),
        flagHasAmenityTopLevelName(false),
        flagHasAmenityTopLevelSpokenNameSingular(false),
        flagHasAmenityTopLevelSpokenNamePlural(false)
  {
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::~TypeAmenityGroupJSON(void)
  {
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityIndex(void) const
  {
    return flagHasAmenityIndex;
  }

OInteger HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityIndex(void)
  {
    assert(flagHasAmenityIndex);
    return storeAmenityIndex;
  }

const OInteger HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityIndex(void) const
  {
    assert(flagHasAmenityIndex);
    return storeAmenityIndex;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityID(void) const
  {
    return flagHasAmenityID;
  }

OInteger HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityID(void)
  {
    assert(flagHasAmenityID);
    return storeAmenityID;
  }

const OInteger HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityID(void) const
  {
    assert(flagHasAmenityID);
    return storeAmenityID;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityName(void) const
  {
    return flagHasAmenityName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityName(void)
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityName(void) const
  {
    assert(flagHasAmenityName);
    return storeAmenityName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenitySpokenNameSingular(void) const
  {
    return flagHasAmenitySpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void)
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNameSingular(void) const
  {
    assert(flagHasAmenitySpokenNameSingular);
    return storeAmenitySpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenitySpokenNamePlural(void) const
  {
    return flagHasAmenitySpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void)
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenitySpokenNamePlural(void) const
  {
    assert(flagHasAmenitySpokenNamePlural);
    return storeAmenitySpokenNamePlural;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelName(void) const
  {
    return flagHasAmenityTopLevelName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void)
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelName(void) const
  {
    assert(flagHasAmenityTopLevelName);
    return storeAmenityTopLevelName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNameSingular(void) const
  {
    return flagHasAmenityTopLevelSpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void)
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNameSingular(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNameSingular);
    return storeAmenityTopLevelSpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::hasAmenityTopLevelSpokenNamePlural(void) const
  {
    return flagHasAmenityTopLevelSpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void)
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::getAmenityTopLevelSpokenNamePlural(void) const
  {
    assert(flagHasAmenityTopLevelSpokenNamePlural);
    return storeAmenityTopLevelSpokenNamePlural;
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenitiesExcludeJSON(const TypeAmenitiesExcludeJSON &)
  {
    assert(false);
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON &HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::operator=(const TypeAmenitiesExcludeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::fromJSONAmenityGroupName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupName of TypeAmenitiesExcludeJSON is not a string.");
    setAmenityGroupName(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::fromJSONAmenityGroupSpokenNameSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNameSingular of TypeAmenitiesExcludeJSON is not a string.");
    setAmenityGroupSpokenNameSingular(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::fromJSONAmenityGroupSpokenNamePlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AmenityGroupSpokenNamePlural of TypeAmenitiesExcludeJSON is not a string.");
    setAmenityGroupSpokenNamePlural(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::fromJSONAmenityGroup(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenityGroup of TypeAmenitiesExcludeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenityGroupJSON * > vector_AmenityGroup1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenityGroupJSON *convert_classy = TypeAmenityGroupJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenityGroup1[num1] = convert_classy;
      }
    initAmenityGroup();
    for (size_t num18 = 0; num18 < vector_AmenityGroup1.size(); ++num18)
        appendAmenityGroup(vector_AmenityGroup1[num18]);
    for (size_t num1 = 0; num1 < vector_AmenityGroup1.size(); ++num1)
      {
        vector_AmenityGroup1[num1]->remove_reference();
      }
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenitiesExcludeJSON(void) :
        flagHasAmenityGroupName(false),
        flagHasAmenityGroupSpokenNameSingular(false),
        flagHasAmenityGroupSpokenNamePlural(false),
        flagHasAmenityGroup(false)
  {
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::~TypeAmenitiesExcludeJSON(void)
  {
    if (flagHasAmenityGroup)
      {
        for (size_t num16 = 0; num16 < storeAmenityGroup.size(); ++num16)
          {
            storeAmenityGroup[num16]->remove_reference();
          }
      }
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::hasAmenityGroupName(void) const
  {
    return flagHasAmenityGroupName;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupName(void)
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupName(void) const
  {
    assert(flagHasAmenityGroupName);
    return storeAmenityGroupName;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::hasAmenityGroupSpokenNameSingular(void) const
  {
    return flagHasAmenityGroupSpokenNameSingular;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupSpokenNameSingular(void)
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupSpokenNameSingular(void) const
  {
    assert(flagHasAmenityGroupSpokenNameSingular);
    return storeAmenityGroupSpokenNameSingular;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::hasAmenityGroupSpokenNamePlural(void) const
  {
    return flagHasAmenityGroupSpokenNamePlural;
  }

std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupSpokenNamePlural(void)
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

const std::string HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroupSpokenNamePlural(void) const
  {
    assert(flagHasAmenityGroupSpokenNamePlural);
    return storeAmenityGroupSpokenNamePlural;
  }

bool HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::hasAmenityGroup(void) const
  {
    return flagHasAmenityGroup;
  }

size_t HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::countOfAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup.size();
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON * HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::elementOfAmenityGroup(size_t element_num)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

const HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON * HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::elementOfAmenityGroup(size_t element_num) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON * > HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroup(void)
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

const std::vector< HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON * > HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::getAmenityGroup(void) const
  {
    assert(flagHasAmenityGroup);
    return storeAmenityGroup;
  }

HotelFilterSpecJSON::HotelFilterSpecJSON(const HotelFilterSpecJSON &)
  {
    assert(false);
  }

HotelFilterSpecJSON &HotelFilterSpecJSON::operator=(const HotelFilterSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelFilterSpecJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryType of HotelFilterSpecJSON is not a string.");
    TypeQueryType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "otelQuestion") == 0)
                  {
                    the_enum = QueryType_HotelQuestion;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "eservation") == 0)
                  {
                    the_enum = QueryType_Reservation;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "earch") == 0)
                  {
                    the_enum = QueryType_Search;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field QueryType of HotelFilterSpecJSON is not one of the legal strings.");
  enum_is_done:;
    setQueryType(the_enum);
  }

void HotelFilterSpecJSON::fromJSONResultCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResultCount of HotelFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResultCount of HotelFilterSpecJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setResultCount(extracted_integer);
  }

void HotelFilterSpecJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONRadius(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Radius of HotelFilterSpecJSON is not a number.");
          }
      }
    setRadiusText(the_rational_text);
  }

void HotelFilterSpecJSON::fromJSONRadiusUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RadiusUnit of HotelFilterSpecJSON is not a string.");
    TypeRadiusUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "ilometers") == 0)
                  {
                    the_enum = RadiusUnit_Kilometers;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "iles") == 0)
                  {
                    the_enum = RadiusUnit_Miles;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field RadiusUnit of HotelFilterSpecJSON is not one of the legal strings.");
  enum_is_done:;
    setRadiusUnit(the_enum);
  }

void HotelFilterSpecJSON::fromJSONRadiusInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RadiusInferred of HotelFilterSpecJSON is not true for false.");
          }
      }
    setRadiusInferred(the_bool);
  }

void HotelFilterSpecJSON::fromJSONAveragePrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAveragePrice(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONMinimumPrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMinimumPrice(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONMaximumPrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMaximumPrice(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONPriceIsTotal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PriceIsTotal of HotelFilterSpecJSON is not true for false.");
          }
      }
    setPriceIsTotal(the_bool);
  }

void HotelFilterSpecJSON::fromJSONStartDateAndTimeInput(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTimeInput(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONEndDateAndTimeInput(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTimeInput(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONStartDateAndTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StartDateAndTimeInferred of HotelFilterSpecJSON is not true for false.");
          }
      }
    setStartDateAndTimeInferred(the_bool);
  }

void HotelFilterSpecJSON::fromJSONEndDateAndTimeInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EndDateAndTimeInferred of HotelFilterSpecJSON is not true for false.");
          }
      }
    setEndDateAndTimeInferred(the_bool);
  }

void HotelFilterSpecJSON::fromJSONStartDateAndTimeFinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTimeFinal(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONStartDatePrintedForm(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StartDatePrintedForm of HotelFilterSpecJSON is not a string.");
    setStartDatePrintedForm(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::fromJSONStartDateSpokenForm(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field StartDateSpokenForm of HotelFilterSpecJSON is not a string.");
    setStartDateSpokenForm(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::fromJSONEndDateAndTimeFinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTimeFinal(convert_classy);
    convert_classy->remove_reference();
  }

void HotelFilterSpecJSON::fromJSONEndDatePrintedForm(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EndDatePrintedForm of HotelFilterSpecJSON is not a string.");
    setEndDatePrintedForm(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::fromJSONEndDateSpokenForm(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EndDateSpokenForm of HotelFilterSpecJSON is not a string.");
    setEndDateSpokenForm(std::string(json_string->getData()));
  }

void HotelFilterSpecJSON::fromJSONDurationInDaysInput(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DurationInDaysInput of HotelFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DurationInDaysInput of HotelFilterSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDurationInDaysInput(extracted_integer);
  }

void HotelFilterSpecJSON::fromJSONDurationInDaysFinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DurationInDaysFinal of HotelFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DurationInDaysFinal of HotelFilterSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDurationInDaysFinal(extracted_integer);
  }

void HotelFilterSpecJSON::fromJSONSortCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SortCriteria of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSortCriteria > vector_SortCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SortCriteria of HotelFilterSpecJSON is not a string.");
        TypeSortCriteria the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'D':
                if (strcmp(&(json_string->getData()[1]), "istance") == 0)
                      {
                        the_enum = SortCriteria_Distance;
                        goto enum_is_done;
                      }
                break;
            case 'G':
                if (strcmp(&(json_string->getData()[1]), "uestRating") == 0)
                      {
                        the_enum = SortCriteria_GuestRating;
                        goto enum_is_done;
                      }
                break;
            case 'P':
                if (strcmp(&(json_string->getData()[1]), "rice") == 0)
                      {
                        the_enum = SortCriteria_Price;
                        goto enum_is_done;
                      }
                break;
            case 'S':
                if (strcmp(&(json_string->getData()[1]), "tarRating") == 0)
                      {
                        the_enum = SortCriteria_StarRating;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field SortCriteria of HotelFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_SortCriteria1[num1] = the_enum;
      }
    initSortCriteria();
    for (size_t num19 = 0; num19 < vector_SortCriteria1.size(); ++num19)
        appendSortCriteria(vector_SortCriteria1[num19]);
    for (size_t num1 = 0; num1 < vector_SortCriteria1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONSortOrder(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SortOrder of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSortOrder > vector_SortOrder1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SortOrder of HotelFilterSpecJSON is not a string.");
        TypeSortOrder the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[1]), "scending") == 0)
                      {
                        the_enum = SortOrder_Ascending;
                        goto enum_is_done;
                      }
                break;
            case 'D':
                if (strcmp(&(json_string->getData()[1]), "escending") == 0)
                      {
                        the_enum = SortOrder_Descending;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field SortOrder of HotelFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_SortOrder1[num1] = the_enum;
      }
    initSortOrder();
    for (size_t num20 = 0; num20 < vector_SortOrder1.size(); ++num20)
        appendSortOrder(vector_SortOrder1[num20]);
    for (size_t num1 = 0; num1 < vector_SortOrder1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONAvailableOnly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AvailableOnly of HotelFilterSpecJSON is not true for false.");
          }
      }
    setAvailableOnly(the_bool);
  }

void HotelFilterSpecJSON::fromJSONExpensiveFlag(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExpensiveFlag of HotelFilterSpecJSON is not true for false.");
          }
      }
    setExpensiveFlag(the_bool);
  }

void HotelFilterSpecJSON::fromJSONInexpensiveFlag(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InexpensiveFlag of HotelFilterSpecJSON is not true for false.");
          }
      }
    setInexpensiveFlag(the_bool);
  }

void HotelFilterSpecJSON::fromJSONSpecificHotelQuestion(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SpecificHotelQuestion of HotelFilterSpecJSON is not true for false.");
          }
      }
    setSpecificHotelQuestion(the_bool);
  }

void HotelFilterSpecJSON::fromJSONConversationMode(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ConversationMode of HotelFilterSpecJSON is not true for false.");
          }
      }
    setConversationMode(the_bool);
  }

void HotelFilterSpecJSON::fromJSONGuestRatingMin(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field GuestRatingMin of HotelFilterSpecJSON is not a number.");
          }
      }
    setGuestRatingMinText(the_rational_text);
  }

void HotelFilterSpecJSON::fromJSONGuestRatingMax(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field GuestRatingMax of HotelFilterSpecJSON is not a number.");
          }
      }
    setGuestRatingMaxText(the_rational_text);
  }

void HotelFilterSpecJSON::fromJSONStarRatingMin(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field StarRatingMin of HotelFilterSpecJSON is not a number.");
          }
      }
    setStarRatingMinText(the_rational_text);
  }

void HotelFilterSpecJSON::fromJSONStarRatingMax(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field StarRatingMax of HotelFilterSpecJSON is not a number.");
          }
      }
    setStarRatingMaxText(the_rational_text);
  }

void HotelFilterSpecJSON::fromJSONStarRatingsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StarRatingsInclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_StarRatingsInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field StarRatingsInclude of HotelFilterSpecJSON is not a number.");
              }
          }
        vector_StarRatingsInclude1[num1] = the_double;
      }
    initStarRatingsInclude();
    for (size_t num21 = 0; num21 < vector_StarRatingsInclude1.size(); ++num21)
        appendStarRatingsInclude(vector_StarRatingsInclude1[num21]);
    for (size_t num1 = 0; num1 < vector_StarRatingsInclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONStarRatingsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StarRatingsExclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_StarRatingsExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
        double the_double;
        if (json_rational != NULL)
          {
            the_double = json_rational->getDouble();
          }
        else
          {
            const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
            if (json_integer != NULL)
              {
                the_double = json_integer->getLongInt();
              }
            else
              {
                throw("The value for an element of field StarRatingsExclude of HotelFilterSpecJSON is not a number.");
              }
          }
        vector_StarRatingsExclude1[num1] = the_double;
      }
    initStarRatingsExclude();
    for (size_t num22 = 0; num22 < vector_StarRatingsExclude1.size(); ++num22)
        appendStarRatingsExclude(vector_StarRatingsExclude1[num22]);
    for (size_t num1 = 0; num1 < vector_StarRatingsExclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONRoomCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RoomCount of HotelFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RoomCount of HotelFilterSpecJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setRoomCount(extracted_integer);
  }

void HotelFilterSpecJSON::fromJSONAdultCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AdultCount of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< uint8_t > vector_AdultCount1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        uint8_t extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field AdultCount of HotelFilterSpecJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field AdultCount of HotelFilterSpecJSON is not an integer.");
              }
            extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())        ;
          }
        else
          {
            extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())        ;
          }
        vector_AdultCount1[num1] = extracted_integer;
      }
    initAdultCount();
    for (size_t num23 = 0; num23 < vector_AdultCount1.size(); ++num23)
        appendAdultCount(vector_AdultCount1[num23]);
    for (size_t num1 = 0; num1 < vector_AdultCount1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONChildrenCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChildrenCount of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< uint8_t > vector_ChildrenCount1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        uint8_t extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field ChildrenCount of HotelFilterSpecJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field ChildrenCount of HotelFilterSpecJSON is not an integer.");
              }
            extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())        ;
          }
        else
          {
            extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())        ;
          }
        vector_ChildrenCount1[num1] = extracted_integer;
      }
    initChildrenCount();
    for (size_t num24 = 0; num24 < vector_ChildrenCount1.size(); ++num24)
        appendChildrenCount(vector_ChildrenCount1[num24]);
    for (size_t num1 = 0; num1 < vector_ChildrenCount1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONGuestCountIsPerRoom(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GuestCountIsPerRoom of HotelFilterSpecJSON is not true for false.");
          }
      }
    setGuestCountIsPerRoom(the_bool);
  }

void HotelFilterSpecJSON::fromJSONFranchiseNamesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FranchiseNamesInclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_FranchiseNamesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field FranchiseNamesInclude of HotelFilterSpecJSON is not a string.");
        vector_FranchiseNamesInclude1[num1] = std::string(json_string->getData());
      }
    initFranchiseNamesInclude();
    for (size_t num25 = 0; num25 < vector_FranchiseNamesInclude1.size(); ++num25)
        appendFranchiseNamesInclude(vector_FranchiseNamesInclude1[num25]);
    for (size_t num1 = 0; num1 < vector_FranchiseNamesInclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONFranchiseNamesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FranchiseNamesExclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_FranchiseNamesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field FranchiseNamesExclude of HotelFilterSpecJSON is not a string.");
        vector_FranchiseNamesExclude1[num1] = std::string(json_string->getData());
      }
    initFranchiseNamesExclude();
    for (size_t num26 = 0; num26 < vector_FranchiseNamesExclude1.size(); ++num26)
        appendFranchiseNamesExclude(vector_FranchiseNamesExclude1[num26]);
    for (size_t num1 = 0; num1 < vector_FranchiseNamesExclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONHotelsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HotelsInclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_HotelsInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field HotelsInclude of HotelFilterSpecJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field HotelsInclude of HotelFilterSpecJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_HotelsInclude1[num1] = extracted_integer;
      }
    initHotelsInclude();
    for (size_t num27 = 0; num27 < vector_HotelsInclude1.size(); ++num27)
        appendHotelsInclude(vector_HotelsInclude1[num27]);
    for (size_t num1 = 0; num1 < vector_HotelsInclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONHotelsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HotelsExclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_HotelsExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field HotelsExclude of HotelFilterSpecJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field HotelsExclude of HotelFilterSpecJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_HotelsExclude1[num1] = extracted_integer;
      }
    initHotelsExclude();
    for (size_t num28 = 0; num28 < vector_HotelsExclude1.size(); ++num28)
        appendHotelsExclude(vector_HotelsExclude1[num28]);
    for (size_t num1 = 0; num1 < vector_HotelsExclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONAccommodationTypesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AccommodationTypesInclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAccommodationTypesInclude > vector_AccommodationTypesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field AccommodationTypesInclude of HotelFilterSpecJSON is not a string.");
        TypeAccommodationTypesInclude the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[1]), "partment Hotel") == 0)
                      {
                        the_enum = AccommodationTypesInclude_Apartment_x20_Hotel;
                        goto enum_is_done;
                      }
                break;
            case 'B':
                if (strcmp(&(json_string->getData()[1]), "ed And Breakfast") == 0)
                      {
                        the_enum = AccommodationTypesInclude_Bed_x20_And_x20_Breakfast;
                        goto enum_is_done;
                      }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[1]), "otel") == 0)
                      {
                        the_enum = AccommodationTypesInclude_Motel;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strcmp(&(json_string->getData()[1]), "esort") == 0)
                      {
                        the_enum = AccommodationTypesInclude_Resort;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field AccommodationTypesInclude of HotelFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_AccommodationTypesInclude1[num1] = the_enum;
      }
    initAccommodationTypesInclude();
    for (size_t num29 = 0; num29 < vector_AccommodationTypesInclude1.size(); ++num29)
        appendAccommodationTypesInclude(vector_AccommodationTypesInclude1[num29]);
    for (size_t num1 = 0; num1 < vector_AccommodationTypesInclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONAccommodationTypesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AccommodationTypesExclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAccommodationTypesExclude > vector_AccommodationTypesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field AccommodationTypesExclude of HotelFilterSpecJSON is not a string.");
        TypeAccommodationTypesExclude the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[1]), "partment Hotel") == 0)
                      {
                        the_enum = AccommodationTypesExclude_Apartment_x20_Hotel;
                        goto enum_is_done;
                      }
                break;
            case 'B':
                if (strcmp(&(json_string->getData()[1]), "ed And Breakfast") == 0)
                      {
                        the_enum = AccommodationTypesExclude_Bed_x20_And_x20_Breakfast;
                        goto enum_is_done;
                      }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[1]), "otel") == 0)
                      {
                        the_enum = AccommodationTypesExclude_Motel;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strcmp(&(json_string->getData()[1]), "esort") == 0)
                      {
                        the_enum = AccommodationTypesExclude_Resort;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field AccommodationTypesExclude of HotelFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_AccommodationTypesExclude1[num1] = the_enum;
      }
    initAccommodationTypesExclude();
    for (size_t num30 = 0; num30 < vector_AccommodationTypesExclude1.size(); ++num30)
        appendAccommodationTypesExclude(vector_AccommodationTypesExclude1[num30]);
    for (size_t num1 = 0; num1 < vector_AccommodationTypesExclude1.size(); ++num1)
      {
      }
  }

void HotelFilterSpecJSON::fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesInclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenitiesIncludeJSON * > vector_AmenitiesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenitiesIncludeJSON *convert_classy = TypeAmenitiesIncludeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesInclude1[num1] = convert_classy;
      }
    initAmenitiesInclude();
    for (size_t num31 = 0; num31 < vector_AmenitiesInclude1.size(); ++num31)
        appendAmenitiesInclude(vector_AmenitiesInclude1[num31]);
    for (size_t num1 = 0; num1 < vector_AmenitiesInclude1.size(); ++num1)
      {
        vector_AmenitiesInclude1[num1]->remove_reference();
      }
  }

void HotelFilterSpecJSON::fromJSONAmenitiesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesExclude of HotelFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAmenitiesExcludeJSON * > vector_AmenitiesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAmenitiesExcludeJSON *convert_classy = TypeAmenitiesExcludeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesExclude1[num1] = convert_classy;
      }
    initAmenitiesExclude();
    for (size_t num32 = 0; num32 < vector_AmenitiesExclude1.size(); ++num32)
        appendAmenitiesExclude(vector_AmenitiesExclude1[num32]);
    for (size_t num1 = 0; num1 < vector_AmenitiesExclude1.size(); ++num1)
      {
        vector_AmenitiesExclude1[num1]->remove_reference();
      }
  }

HotelFilterSpecJSON::HotelFilterSpecJSON(void) :
        flagHasQueryType(false),
        flagHasResultCount(false),
        flagHasMapLocation(false),
        flagHasRadius(false),
        flagHasRadiusUnit(false),
        flagHasRadiusInferred(false),
        flagHasAveragePrice(false),
        flagHasMinimumPrice(false),
        flagHasMaximumPrice(false),
        flagHasPriceIsTotal(false),
        flagHasStartDateAndTimeInput(false),
        flagHasEndDateAndTimeInput(false),
        flagHasStartDateAndTimeInferred(false),
        flagHasEndDateAndTimeInferred(false),
        flagHasStartDateAndTimeFinal(false),
        flagHasStartDatePrintedForm(false),
        flagHasStartDateSpokenForm(false),
        flagHasEndDateAndTimeFinal(false),
        flagHasEndDatePrintedForm(false),
        flagHasEndDateSpokenForm(false),
        flagHasDurationInDaysInput(false),
        flagHasDurationInDaysFinal(false),
        flagHasSortCriteria(false),
        flagHasSortOrder(false),
        flagHasAvailableOnly(false),
        flagHasExpensiveFlag(false),
        flagHasInexpensiveFlag(false),
        flagHasSpecificHotelQuestion(false),
        flagHasConversationMode(false),
        flagHasGuestRatingMin(false),
        flagHasGuestRatingMax(false),
        flagHasStarRatingMin(false),
        flagHasStarRatingMax(false),
        flagHasStarRatingsInclude(false),
        flagHasStarRatingsExclude(false),
        flagHasRoomCount(false),
        flagHasAdultCount(false),
        flagHasChildrenCount(false),
        flagHasGuestCountIsPerRoom(false),
        flagHasFranchiseNamesInclude(false),
        flagHasFranchiseNamesExclude(false),
        flagHasHotelsInclude(false),
        flagHasHotelsExclude(false),
        flagHasAccommodationTypesInclude(false),
        flagHasAccommodationTypesExclude(false),
        flagHasAmenitiesInclude(false),
        flagHasAmenitiesExclude(false)
  {
    extraIndex = create_string_index();
  }

HotelFilterSpecJSON::~HotelFilterSpecJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasAveragePrice)
      {
        storeAveragePrice->remove_reference();
      }
    if (flagHasMinimumPrice)
      {
        storeMinimumPrice->remove_reference();
      }
    if (flagHasMaximumPrice)
      {
        storeMaximumPrice->remove_reference();
      }
    if (flagHasStartDateAndTimeInput)
      {
        storeStartDateAndTimeInput->remove_reference();
      }
    if (flagHasEndDateAndTimeInput)
      {
        storeEndDateAndTimeInput->remove_reference();
      }
    if (flagHasStartDateAndTimeFinal)
      {
        storeStartDateAndTimeFinal->remove_reference();
      }
    if (flagHasEndDateAndTimeFinal)
      {
        storeEndDateAndTimeFinal->remove_reference();
      }
    if (flagHasAmenitiesInclude)
      {
        for (size_t num19 = 0; num19 < storeAmenitiesInclude.size(); ++num19)
          {
            storeAmenitiesInclude[num19]->remove_reference();
          }
      }
    if (flagHasAmenitiesExclude)
      {
        for (size_t num20 = 0; num20 < storeAmenitiesExclude.size(); ++num20)
          {
            storeAmenitiesExclude[num20]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HotelFilterSpecJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

HotelFilterSpecJSON::TypeQueryType HotelFilterSpecJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const HotelFilterSpecJSON::TypeQueryType HotelFilterSpecJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const char *HotelFilterSpecJSON::getQueryTypeAsChars(void) const
  {
    return stringFromQueryType(getQueryType());
  }

std::string HotelFilterSpecJSON::getQueryTypeAsString(void) const
  {
    return stringFromQueryType(getQueryType());
  }

bool HotelFilterSpecJSON::hasResultCount(void) const
  {
    return flagHasResultCount;
  }

uint8_t HotelFilterSpecJSON::getResultCount(void)
  {
    assert(flagHasResultCount);
    return storeResultCount;
  }

const uint8_t HotelFilterSpecJSON::getResultCount(void) const
  {
    assert(flagHasResultCount);
    return storeResultCount;
  }

bool HotelFilterSpecJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * HotelFilterSpecJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * HotelFilterSpecJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool HotelFilterSpecJSON::hasRadius(void) const
  {
    return flagHasRadius;
  }

double HotelFilterSpecJSON::getRadius(void)
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

const double HotelFilterSpecJSON::getRadius(void) const
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

std::string HotelFilterSpecJSON::getRadiusAsText(void) const
  {
    assert(flagHasRadius);
    if (textStoreRadius == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRadius);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRadius);
      }
  }

bool HotelFilterSpecJSON::hasRadiusUnit(void) const
  {
    return flagHasRadiusUnit;
  }

HotelFilterSpecJSON::TypeRadiusUnit HotelFilterSpecJSON::getRadiusUnit(void)
  {
    assert(flagHasRadiusUnit);
    return storeRadiusUnit;
  }

const HotelFilterSpecJSON::TypeRadiusUnit HotelFilterSpecJSON::getRadiusUnit(void) const
  {
    assert(flagHasRadiusUnit);
    return storeRadiusUnit;
  }

const char *HotelFilterSpecJSON::getRadiusUnitAsChars(void) const
  {
    return stringFromRadiusUnit(getRadiusUnit());
  }

std::string HotelFilterSpecJSON::getRadiusUnitAsString(void) const
  {
    return stringFromRadiusUnit(getRadiusUnit());
  }

bool HotelFilterSpecJSON::hasRadiusInferred(void) const
  {
    return flagHasRadiusInferred;
  }

bool HotelFilterSpecJSON::getRadiusInferred(void)
  {
    assert(flagHasRadiusInferred);
    return storeRadiusInferred;
  }

const bool HotelFilterSpecJSON::getRadiusInferred(void) const
  {
    assert(flagHasRadiusInferred);
    return storeRadiusInferred;
  }

bool HotelFilterSpecJSON::hasAveragePrice(void) const
  {
    return flagHasAveragePrice;
  }

MoneyJSON * HotelFilterSpecJSON::getAveragePrice(void)
  {
    assert(flagHasAveragePrice);
    return storeAveragePrice;
  }

const MoneyJSON * HotelFilterSpecJSON::getAveragePrice(void) const
  {
    assert(flagHasAveragePrice);
    return storeAveragePrice;
  }

bool HotelFilterSpecJSON::hasMinimumPrice(void) const
  {
    return flagHasMinimumPrice;
  }

MoneyJSON * HotelFilterSpecJSON::getMinimumPrice(void)
  {
    assert(flagHasMinimumPrice);
    return storeMinimumPrice;
  }

const MoneyJSON * HotelFilterSpecJSON::getMinimumPrice(void) const
  {
    assert(flagHasMinimumPrice);
    return storeMinimumPrice;
  }

bool HotelFilterSpecJSON::hasMaximumPrice(void) const
  {
    return flagHasMaximumPrice;
  }

MoneyJSON * HotelFilterSpecJSON::getMaximumPrice(void)
  {
    assert(flagHasMaximumPrice);
    return storeMaximumPrice;
  }

const MoneyJSON * HotelFilterSpecJSON::getMaximumPrice(void) const
  {
    assert(flagHasMaximumPrice);
    return storeMaximumPrice;
  }

bool HotelFilterSpecJSON::hasPriceIsTotal(void) const
  {
    return flagHasPriceIsTotal;
  }

bool HotelFilterSpecJSON::getPriceIsTotal(void)
  {
    assert(flagHasPriceIsTotal);
    return storePriceIsTotal;
  }

const bool HotelFilterSpecJSON::getPriceIsTotal(void) const
  {
    assert(flagHasPriceIsTotal);
    return storePriceIsTotal;
  }

bool HotelFilterSpecJSON::hasStartDateAndTimeInput(void) const
  {
    return flagHasStartDateAndTimeInput;
  }

DateAndOrTimeJSON * HotelFilterSpecJSON::getStartDateAndTimeInput(void)
  {
    assert(flagHasStartDateAndTimeInput);
    return storeStartDateAndTimeInput;
  }

const DateAndOrTimeJSON * HotelFilterSpecJSON::getStartDateAndTimeInput(void) const
  {
    assert(flagHasStartDateAndTimeInput);
    return storeStartDateAndTimeInput;
  }

bool HotelFilterSpecJSON::hasEndDateAndTimeInput(void) const
  {
    return flagHasEndDateAndTimeInput;
  }

DateAndOrTimeJSON * HotelFilterSpecJSON::getEndDateAndTimeInput(void)
  {
    assert(flagHasEndDateAndTimeInput);
    return storeEndDateAndTimeInput;
  }

const DateAndOrTimeJSON * HotelFilterSpecJSON::getEndDateAndTimeInput(void) const
  {
    assert(flagHasEndDateAndTimeInput);
    return storeEndDateAndTimeInput;
  }

bool HotelFilterSpecJSON::hasStartDateAndTimeInferred(void) const
  {
    return flagHasStartDateAndTimeInferred;
  }

bool HotelFilterSpecJSON::getStartDateAndTimeInferred(void)
  {
    assert(flagHasStartDateAndTimeInferred);
    return storeStartDateAndTimeInferred;
  }

const bool HotelFilterSpecJSON::getStartDateAndTimeInferred(void) const
  {
    assert(flagHasStartDateAndTimeInferred);
    return storeStartDateAndTimeInferred;
  }

bool HotelFilterSpecJSON::hasEndDateAndTimeInferred(void) const
  {
    return flagHasEndDateAndTimeInferred;
  }

bool HotelFilterSpecJSON::getEndDateAndTimeInferred(void)
  {
    assert(flagHasEndDateAndTimeInferred);
    return storeEndDateAndTimeInferred;
  }

const bool HotelFilterSpecJSON::getEndDateAndTimeInferred(void) const
  {
    assert(flagHasEndDateAndTimeInferred);
    return storeEndDateAndTimeInferred;
  }

bool HotelFilterSpecJSON::hasStartDateAndTimeFinal(void) const
  {
    return flagHasStartDateAndTimeFinal;
  }

DateAndOrTimeJSON * HotelFilterSpecJSON::getStartDateAndTimeFinal(void)
  {
    assert(flagHasStartDateAndTimeFinal);
    return storeStartDateAndTimeFinal;
  }

const DateAndOrTimeJSON * HotelFilterSpecJSON::getStartDateAndTimeFinal(void) const
  {
    assert(flagHasStartDateAndTimeFinal);
    return storeStartDateAndTimeFinal;
  }

bool HotelFilterSpecJSON::hasStartDatePrintedForm(void) const
  {
    return flagHasStartDatePrintedForm;
  }

std::string HotelFilterSpecJSON::getStartDatePrintedForm(void)
  {
    assert(flagHasStartDatePrintedForm);
    return storeStartDatePrintedForm;
  }

const std::string HotelFilterSpecJSON::getStartDatePrintedForm(void) const
  {
    assert(flagHasStartDatePrintedForm);
    return storeStartDatePrintedForm;
  }

bool HotelFilterSpecJSON::hasStartDateSpokenForm(void) const
  {
    return flagHasStartDateSpokenForm;
  }

std::string HotelFilterSpecJSON::getStartDateSpokenForm(void)
  {
    assert(flagHasStartDateSpokenForm);
    return storeStartDateSpokenForm;
  }

const std::string HotelFilterSpecJSON::getStartDateSpokenForm(void) const
  {
    assert(flagHasStartDateSpokenForm);
    return storeStartDateSpokenForm;
  }

bool HotelFilterSpecJSON::hasEndDateAndTimeFinal(void) const
  {
    return flagHasEndDateAndTimeFinal;
  }

DateAndOrTimeJSON * HotelFilterSpecJSON::getEndDateAndTimeFinal(void)
  {
    assert(flagHasEndDateAndTimeFinal);
    return storeEndDateAndTimeFinal;
  }

const DateAndOrTimeJSON * HotelFilterSpecJSON::getEndDateAndTimeFinal(void) const
  {
    assert(flagHasEndDateAndTimeFinal);
    return storeEndDateAndTimeFinal;
  }

bool HotelFilterSpecJSON::hasEndDatePrintedForm(void) const
  {
    return flagHasEndDatePrintedForm;
  }

std::string HotelFilterSpecJSON::getEndDatePrintedForm(void)
  {
    assert(flagHasEndDatePrintedForm);
    return storeEndDatePrintedForm;
  }

const std::string HotelFilterSpecJSON::getEndDatePrintedForm(void) const
  {
    assert(flagHasEndDatePrintedForm);
    return storeEndDatePrintedForm;
  }

bool HotelFilterSpecJSON::hasEndDateSpokenForm(void) const
  {
    return flagHasEndDateSpokenForm;
  }

std::string HotelFilterSpecJSON::getEndDateSpokenForm(void)
  {
    assert(flagHasEndDateSpokenForm);
    return storeEndDateSpokenForm;
  }

const std::string HotelFilterSpecJSON::getEndDateSpokenForm(void) const
  {
    assert(flagHasEndDateSpokenForm);
    return storeEndDateSpokenForm;
  }

bool HotelFilterSpecJSON::hasDurationInDaysInput(void) const
  {
    return flagHasDurationInDaysInput;
  }

OInteger HotelFilterSpecJSON::getDurationInDaysInput(void)
  {
    assert(flagHasDurationInDaysInput);
    return storeDurationInDaysInput;
  }

const OInteger HotelFilterSpecJSON::getDurationInDaysInput(void) const
  {
    assert(flagHasDurationInDaysInput);
    return storeDurationInDaysInput;
  }

bool HotelFilterSpecJSON::hasDurationInDaysFinal(void) const
  {
    return flagHasDurationInDaysFinal;
  }

OInteger HotelFilterSpecJSON::getDurationInDaysFinal(void)
  {
    assert(flagHasDurationInDaysFinal);
    return storeDurationInDaysFinal;
  }

const OInteger HotelFilterSpecJSON::getDurationInDaysFinal(void) const
  {
    assert(flagHasDurationInDaysFinal);
    return storeDurationInDaysFinal;
  }

bool HotelFilterSpecJSON::hasSortCriteria(void) const
  {
    return flagHasSortCriteria;
  }

size_t HotelFilterSpecJSON::countOfSortCriteria(void) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria.size();
  }

HotelFilterSpecJSON::TypeSortCriteria HotelFilterSpecJSON::elementOfSortCriteria(size_t element_num)
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria[element_num];
  }

const HotelFilterSpecJSON::TypeSortCriteria HotelFilterSpecJSON::elementOfSortCriteria(size_t element_num) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeSortCriteria > HotelFilterSpecJSON::getSortCriteria(void)
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria;
  }

const std::vector< HotelFilterSpecJSON::TypeSortCriteria > HotelFilterSpecJSON::getSortCriteria(void) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria;
  }

bool HotelFilterSpecJSON::hasSortOrder(void) const
  {
    return flagHasSortOrder;
  }

size_t HotelFilterSpecJSON::countOfSortOrder(void) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder.size();
  }

HotelFilterSpecJSON::TypeSortOrder HotelFilterSpecJSON::elementOfSortOrder(size_t element_num)
  {
    assert(flagHasSortOrder);
    return storeSortOrder[element_num];
  }

const HotelFilterSpecJSON::TypeSortOrder HotelFilterSpecJSON::elementOfSortOrder(size_t element_num) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeSortOrder > HotelFilterSpecJSON::getSortOrder(void)
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

const std::vector< HotelFilterSpecJSON::TypeSortOrder > HotelFilterSpecJSON::getSortOrder(void) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

bool HotelFilterSpecJSON::hasAvailableOnly(void) const
  {
    return flagHasAvailableOnly;
  }

bool HotelFilterSpecJSON::getAvailableOnly(void)
  {
    assert(flagHasAvailableOnly);
    return storeAvailableOnly;
  }

const bool HotelFilterSpecJSON::getAvailableOnly(void) const
  {
    assert(flagHasAvailableOnly);
    return storeAvailableOnly;
  }

bool HotelFilterSpecJSON::hasExpensiveFlag(void) const
  {
    return flagHasExpensiveFlag;
  }

bool HotelFilterSpecJSON::getExpensiveFlag(void)
  {
    assert(flagHasExpensiveFlag);
    return storeExpensiveFlag;
  }

const bool HotelFilterSpecJSON::getExpensiveFlag(void) const
  {
    assert(flagHasExpensiveFlag);
    return storeExpensiveFlag;
  }

bool HotelFilterSpecJSON::hasInexpensiveFlag(void) const
  {
    return flagHasInexpensiveFlag;
  }

bool HotelFilterSpecJSON::getInexpensiveFlag(void)
  {
    assert(flagHasInexpensiveFlag);
    return storeInexpensiveFlag;
  }

const bool HotelFilterSpecJSON::getInexpensiveFlag(void) const
  {
    assert(flagHasInexpensiveFlag);
    return storeInexpensiveFlag;
  }

bool HotelFilterSpecJSON::hasSpecificHotelQuestion(void) const
  {
    return flagHasSpecificHotelQuestion;
  }

bool HotelFilterSpecJSON::getSpecificHotelQuestion(void)
  {
    assert(flagHasSpecificHotelQuestion);
    return storeSpecificHotelQuestion;
  }

const bool HotelFilterSpecJSON::getSpecificHotelQuestion(void) const
  {
    assert(flagHasSpecificHotelQuestion);
    return storeSpecificHotelQuestion;
  }

bool HotelFilterSpecJSON::hasConversationMode(void) const
  {
    return flagHasConversationMode;
  }

bool HotelFilterSpecJSON::getConversationMode(void)
  {
    assert(flagHasConversationMode);
    return storeConversationMode;
  }

const bool HotelFilterSpecJSON::getConversationMode(void) const
  {
    assert(flagHasConversationMode);
    return storeConversationMode;
  }

bool HotelFilterSpecJSON::hasGuestRatingMin(void) const
  {
    return flagHasGuestRatingMin;
  }

double HotelFilterSpecJSON::getGuestRatingMin(void)
  {
    assert(flagHasGuestRatingMin);
    if (textStoreGuestRatingMin != "")
      {
        return atof(textStoreGuestRatingMin.c_str());
      }
    return storeGuestRatingMin;
  }

const double HotelFilterSpecJSON::getGuestRatingMin(void) const
  {
    assert(flagHasGuestRatingMin);
    if (textStoreGuestRatingMin != "")
      {
        return atof(textStoreGuestRatingMin.c_str());
      }
    return storeGuestRatingMin;
  }

std::string HotelFilterSpecJSON::getGuestRatingMinAsText(void) const
  {
    assert(flagHasGuestRatingMin);
    if (textStoreGuestRatingMin == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGuestRatingMin);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGuestRatingMin);
      }
  }

bool HotelFilterSpecJSON::hasGuestRatingMax(void) const
  {
    return flagHasGuestRatingMax;
  }

double HotelFilterSpecJSON::getGuestRatingMax(void)
  {
    assert(flagHasGuestRatingMax);
    if (textStoreGuestRatingMax != "")
      {
        return atof(textStoreGuestRatingMax.c_str());
      }
    return storeGuestRatingMax;
  }

const double HotelFilterSpecJSON::getGuestRatingMax(void) const
  {
    assert(flagHasGuestRatingMax);
    if (textStoreGuestRatingMax != "")
      {
        return atof(textStoreGuestRatingMax.c_str());
      }
    return storeGuestRatingMax;
  }

std::string HotelFilterSpecJSON::getGuestRatingMaxAsText(void) const
  {
    assert(flagHasGuestRatingMax);
    if (textStoreGuestRatingMax == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGuestRatingMax);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGuestRatingMax);
      }
  }

bool HotelFilterSpecJSON::hasStarRatingMin(void) const
  {
    return flagHasStarRatingMin;
  }

double HotelFilterSpecJSON::getStarRatingMin(void)
  {
    assert(flagHasStarRatingMin);
    if (textStoreStarRatingMin != "")
      {
        return atof(textStoreStarRatingMin.c_str());
      }
    return storeStarRatingMin;
  }

const double HotelFilterSpecJSON::getStarRatingMin(void) const
  {
    assert(flagHasStarRatingMin);
    if (textStoreStarRatingMin != "")
      {
        return atof(textStoreStarRatingMin.c_str());
      }
    return storeStarRatingMin;
  }

std::string HotelFilterSpecJSON::getStarRatingMinAsText(void) const
  {
    assert(flagHasStarRatingMin);
    if (textStoreStarRatingMin == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStarRatingMin);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStarRatingMin);
      }
  }

bool HotelFilterSpecJSON::hasStarRatingMax(void) const
  {
    return flagHasStarRatingMax;
  }

double HotelFilterSpecJSON::getStarRatingMax(void)
  {
    assert(flagHasStarRatingMax);
    if (textStoreStarRatingMax != "")
      {
        return atof(textStoreStarRatingMax.c_str());
      }
    return storeStarRatingMax;
  }

const double HotelFilterSpecJSON::getStarRatingMax(void) const
  {
    assert(flagHasStarRatingMax);
    if (textStoreStarRatingMax != "")
      {
        return atof(textStoreStarRatingMax.c_str());
      }
    return storeStarRatingMax;
  }

std::string HotelFilterSpecJSON::getStarRatingMaxAsText(void) const
  {
    assert(flagHasStarRatingMax);
    if (textStoreStarRatingMax == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeStarRatingMax);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreStarRatingMax);
      }
  }

bool HotelFilterSpecJSON::hasStarRatingsInclude(void) const
  {
    return flagHasStarRatingsInclude;
  }

size_t HotelFilterSpecJSON::countOfStarRatingsInclude(void) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude.size();
  }

double HotelFilterSpecJSON::elementOfStarRatingsInclude(size_t element_num)
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude[element_num];
  }

const double HotelFilterSpecJSON::elementOfStarRatingsInclude(size_t element_num) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude[element_num];
  }

std::vector< double > HotelFilterSpecJSON::getStarRatingsInclude(void)
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude;
  }

const std::vector< double > HotelFilterSpecJSON::getStarRatingsInclude(void) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude;
  }

bool HotelFilterSpecJSON::hasStarRatingsExclude(void) const
  {
    return flagHasStarRatingsExclude;
  }

size_t HotelFilterSpecJSON::countOfStarRatingsExclude(void) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude.size();
  }

double HotelFilterSpecJSON::elementOfStarRatingsExclude(size_t element_num)
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude[element_num];
  }

const double HotelFilterSpecJSON::elementOfStarRatingsExclude(size_t element_num) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude[element_num];
  }

std::vector< double > HotelFilterSpecJSON::getStarRatingsExclude(void)
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude;
  }

const std::vector< double > HotelFilterSpecJSON::getStarRatingsExclude(void) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude;
  }

bool HotelFilterSpecJSON::hasRoomCount(void) const
  {
    return flagHasRoomCount;
  }

uint8_t HotelFilterSpecJSON::getRoomCount(void)
  {
    assert(flagHasRoomCount);
    return storeRoomCount;
  }

const uint8_t HotelFilterSpecJSON::getRoomCount(void) const
  {
    assert(flagHasRoomCount);
    return storeRoomCount;
  }

bool HotelFilterSpecJSON::hasAdultCount(void) const
  {
    return flagHasAdultCount;
  }

size_t HotelFilterSpecJSON::countOfAdultCount(void) const
  {
    assert(flagHasAdultCount);
    return storeAdultCount.size();
  }

uint8_t HotelFilterSpecJSON::elementOfAdultCount(size_t element_num)
  {
    assert(flagHasAdultCount);
    return storeAdultCount[element_num];
  }

const uint8_t HotelFilterSpecJSON::elementOfAdultCount(size_t element_num) const
  {
    assert(flagHasAdultCount);
    return storeAdultCount[element_num];
  }

std::vector< uint8_t > HotelFilterSpecJSON::getAdultCount(void)
  {
    assert(flagHasAdultCount);
    return storeAdultCount;
  }

const std::vector< uint8_t > HotelFilterSpecJSON::getAdultCount(void) const
  {
    assert(flagHasAdultCount);
    return storeAdultCount;
  }

bool HotelFilterSpecJSON::hasChildrenCount(void) const
  {
    return flagHasChildrenCount;
  }

size_t HotelFilterSpecJSON::countOfChildrenCount(void) const
  {
    assert(flagHasChildrenCount);
    return storeChildrenCount.size();
  }

uint8_t HotelFilterSpecJSON::elementOfChildrenCount(size_t element_num)
  {
    assert(flagHasChildrenCount);
    return storeChildrenCount[element_num];
  }

const uint8_t HotelFilterSpecJSON::elementOfChildrenCount(size_t element_num) const
  {
    assert(flagHasChildrenCount);
    return storeChildrenCount[element_num];
  }

std::vector< uint8_t > HotelFilterSpecJSON::getChildrenCount(void)
  {
    assert(flagHasChildrenCount);
    return storeChildrenCount;
  }

const std::vector< uint8_t > HotelFilterSpecJSON::getChildrenCount(void) const
  {
    assert(flagHasChildrenCount);
    return storeChildrenCount;
  }

bool HotelFilterSpecJSON::hasGuestCountIsPerRoom(void) const
  {
    return flagHasGuestCountIsPerRoom;
  }

bool HotelFilterSpecJSON::getGuestCountIsPerRoom(void)
  {
    assert(flagHasGuestCountIsPerRoom);
    return storeGuestCountIsPerRoom;
  }

const bool HotelFilterSpecJSON::getGuestCountIsPerRoom(void) const
  {
    assert(flagHasGuestCountIsPerRoom);
    return storeGuestCountIsPerRoom;
  }

bool HotelFilterSpecJSON::hasFranchiseNamesInclude(void) const
  {
    return flagHasFranchiseNamesInclude;
  }

size_t HotelFilterSpecJSON::countOfFranchiseNamesInclude(void) const
  {
    assert(flagHasFranchiseNamesInclude);
    return storeFranchiseNamesInclude.size();
  }

std::string HotelFilterSpecJSON::elementOfFranchiseNamesInclude(size_t element_num)
  {
    assert(flagHasFranchiseNamesInclude);
    return storeFranchiseNamesInclude[element_num];
  }

const std::string HotelFilterSpecJSON::elementOfFranchiseNamesInclude(size_t element_num) const
  {
    assert(flagHasFranchiseNamesInclude);
    return storeFranchiseNamesInclude[element_num];
  }

std::vector< std::string > HotelFilterSpecJSON::getFranchiseNamesInclude(void)
  {
    assert(flagHasFranchiseNamesInclude);
    return storeFranchiseNamesInclude;
  }

const std::vector< std::string > HotelFilterSpecJSON::getFranchiseNamesInclude(void) const
  {
    assert(flagHasFranchiseNamesInclude);
    return storeFranchiseNamesInclude;
  }

bool HotelFilterSpecJSON::hasFranchiseNamesExclude(void) const
  {
    return flagHasFranchiseNamesExclude;
  }

size_t HotelFilterSpecJSON::countOfFranchiseNamesExclude(void) const
  {
    assert(flagHasFranchiseNamesExclude);
    return storeFranchiseNamesExclude.size();
  }

std::string HotelFilterSpecJSON::elementOfFranchiseNamesExclude(size_t element_num)
  {
    assert(flagHasFranchiseNamesExclude);
    return storeFranchiseNamesExclude[element_num];
  }

const std::string HotelFilterSpecJSON::elementOfFranchiseNamesExclude(size_t element_num) const
  {
    assert(flagHasFranchiseNamesExclude);
    return storeFranchiseNamesExclude[element_num];
  }

std::vector< std::string > HotelFilterSpecJSON::getFranchiseNamesExclude(void)
  {
    assert(flagHasFranchiseNamesExclude);
    return storeFranchiseNamesExclude;
  }

const std::vector< std::string > HotelFilterSpecJSON::getFranchiseNamesExclude(void) const
  {
    assert(flagHasFranchiseNamesExclude);
    return storeFranchiseNamesExclude;
  }

bool HotelFilterSpecJSON::hasHotelsInclude(void) const
  {
    return flagHasHotelsInclude;
  }

size_t HotelFilterSpecJSON::countOfHotelsInclude(void) const
  {
    assert(flagHasHotelsInclude);
    return storeHotelsInclude.size();
  }

OInteger HotelFilterSpecJSON::elementOfHotelsInclude(size_t element_num)
  {
    assert(flagHasHotelsInclude);
    return storeHotelsInclude[element_num];
  }

const OInteger HotelFilterSpecJSON::elementOfHotelsInclude(size_t element_num) const
  {
    assert(flagHasHotelsInclude);
    return storeHotelsInclude[element_num];
  }

std::vector< OInteger > HotelFilterSpecJSON::getHotelsInclude(void)
  {
    assert(flagHasHotelsInclude);
    return storeHotelsInclude;
  }

const std::vector< OInteger > HotelFilterSpecJSON::getHotelsInclude(void) const
  {
    assert(flagHasHotelsInclude);
    return storeHotelsInclude;
  }

bool HotelFilterSpecJSON::hasHotelsExclude(void) const
  {
    return flagHasHotelsExclude;
  }

size_t HotelFilterSpecJSON::countOfHotelsExclude(void) const
  {
    assert(flagHasHotelsExclude);
    return storeHotelsExclude.size();
  }

OInteger HotelFilterSpecJSON::elementOfHotelsExclude(size_t element_num)
  {
    assert(flagHasHotelsExclude);
    return storeHotelsExclude[element_num];
  }

const OInteger HotelFilterSpecJSON::elementOfHotelsExclude(size_t element_num) const
  {
    assert(flagHasHotelsExclude);
    return storeHotelsExclude[element_num];
  }

std::vector< OInteger > HotelFilterSpecJSON::getHotelsExclude(void)
  {
    assert(flagHasHotelsExclude);
    return storeHotelsExclude;
  }

const std::vector< OInteger > HotelFilterSpecJSON::getHotelsExclude(void) const
  {
    assert(flagHasHotelsExclude);
    return storeHotelsExclude;
  }

bool HotelFilterSpecJSON::hasAccommodationTypesInclude(void) const
  {
    return flagHasAccommodationTypesInclude;
  }

size_t HotelFilterSpecJSON::countOfAccommodationTypesInclude(void) const
  {
    assert(flagHasAccommodationTypesInclude);
    return storeAccommodationTypesInclude.size();
  }

HotelFilterSpecJSON::TypeAccommodationTypesInclude HotelFilterSpecJSON::elementOfAccommodationTypesInclude(size_t element_num)
  {
    assert(flagHasAccommodationTypesInclude);
    return storeAccommodationTypesInclude[element_num];
  }

const HotelFilterSpecJSON::TypeAccommodationTypesInclude HotelFilterSpecJSON::elementOfAccommodationTypesInclude(size_t element_num) const
  {
    assert(flagHasAccommodationTypesInclude);
    return storeAccommodationTypesInclude[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAccommodationTypesInclude > HotelFilterSpecJSON::getAccommodationTypesInclude(void)
  {
    assert(flagHasAccommodationTypesInclude);
    return storeAccommodationTypesInclude;
  }

const std::vector< HotelFilterSpecJSON::TypeAccommodationTypesInclude > HotelFilterSpecJSON::getAccommodationTypesInclude(void) const
  {
    assert(flagHasAccommodationTypesInclude);
    return storeAccommodationTypesInclude;
  }

bool HotelFilterSpecJSON::hasAccommodationTypesExclude(void) const
  {
    return flagHasAccommodationTypesExclude;
  }

size_t HotelFilterSpecJSON::countOfAccommodationTypesExclude(void) const
  {
    assert(flagHasAccommodationTypesExclude);
    return storeAccommodationTypesExclude.size();
  }

HotelFilterSpecJSON::TypeAccommodationTypesExclude HotelFilterSpecJSON::elementOfAccommodationTypesExclude(size_t element_num)
  {
    assert(flagHasAccommodationTypesExclude);
    return storeAccommodationTypesExclude[element_num];
  }

const HotelFilterSpecJSON::TypeAccommodationTypesExclude HotelFilterSpecJSON::elementOfAccommodationTypesExclude(size_t element_num) const
  {
    assert(flagHasAccommodationTypesExclude);
    return storeAccommodationTypesExclude[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAccommodationTypesExclude > HotelFilterSpecJSON::getAccommodationTypesExclude(void)
  {
    assert(flagHasAccommodationTypesExclude);
    return storeAccommodationTypesExclude;
  }

const std::vector< HotelFilterSpecJSON::TypeAccommodationTypesExclude > HotelFilterSpecJSON::getAccommodationTypesExclude(void) const
  {
    assert(flagHasAccommodationTypesExclude);
    return storeAccommodationTypesExclude;
  }

bool HotelFilterSpecJSON::hasAmenitiesInclude(void) const
  {
    return flagHasAmenitiesInclude;
  }

size_t HotelFilterSpecJSON::countOfAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude.size();
  }

HotelFilterSpecJSON::TypeAmenitiesIncludeJSON * HotelFilterSpecJSON::elementOfAmenitiesInclude(size_t element_num)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

const HotelFilterSpecJSON::TypeAmenitiesIncludeJSON * HotelFilterSpecJSON::elementOfAmenitiesInclude(size_t element_num) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAmenitiesIncludeJSON * > HotelFilterSpecJSON::getAmenitiesInclude(void)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

const std::vector< HotelFilterSpecJSON::TypeAmenitiesIncludeJSON * > HotelFilterSpecJSON::getAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

bool HotelFilterSpecJSON::hasAmenitiesExclude(void) const
  {
    return flagHasAmenitiesExclude;
  }

size_t HotelFilterSpecJSON::countOfAmenitiesExclude(void) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude.size();
  }

HotelFilterSpecJSON::TypeAmenitiesExcludeJSON * HotelFilterSpecJSON::elementOfAmenitiesExclude(size_t element_num)
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude[element_num];
  }

const HotelFilterSpecJSON::TypeAmenitiesExcludeJSON * HotelFilterSpecJSON::elementOfAmenitiesExclude(size_t element_num) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude[element_num];
  }

std::vector< HotelFilterSpecJSON::TypeAmenitiesExcludeJSON * > HotelFilterSpecJSON::getAmenitiesExclude(void)
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude;
  }

const std::vector< HotelFilterSpecJSON::TypeAmenitiesExcludeJSON * > HotelFilterSpecJSON::getAmenitiesExclude(void) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude;
  }

char HotelFilterSpecJSON::Generator::lowerBoundDurationInDaysInput[] = "0";
char HotelFilterSpecJSON::Generator::lowerBoundDurationInDaysFinal[] = "1";
char HotelFilterSpecJSON::Generator::lowerBoundHotelsInclude[] = "0";
char HotelFilterSpecJSON::Generator::lowerBoundHotelsExclude[] = "0";
char HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::Generator::lowerBoundAmenityIndex[] = "0";
char HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::Generator::lowerBoundAmenityID[] = "0";
HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON *HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::TypeAmenityGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenityGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelFilterSpecJSON::TypeAmenitiesIncludeJSON *HotelFilterSpecJSON::TypeAmenitiesIncludeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenitiesIncludeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesIncludeJSON>, TypeAmenitiesIncludeJSON *, bool> generator("Type TypeAmenitiesInclude", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::Generator::lowerBoundAmenityIndex[] = "0";
char HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::Generator::lowerBoundAmenityID[] = "0";
HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON *HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::TypeAmenityGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenityGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenityGroupJSON>, TypeAmenityGroupJSON *, bool> generator("Type TypeAmenityGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelFilterSpecJSON::TypeAmenitiesExcludeJSON *HotelFilterSpecJSON::TypeAmenitiesExcludeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAmenitiesExcludeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesExcludeJSON>, TypeAmenitiesExcludeJSON *, bool> generator("Type TypeAmenitiesExclude", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HotelFilterSpecJSON *HotelFilterSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelFilterSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelFilterSpecJSON>, HotelFilterSpecJSON *, bool> generator("Type HotelFilterSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
