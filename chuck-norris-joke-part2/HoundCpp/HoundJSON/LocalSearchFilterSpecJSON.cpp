/* file "LocalSearchFilterSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchFilterSpecJSON.h"

#include "LocalSearchFilterSpecJSON.h"


LocalSearchFilterSpecJSON::TypeQueryType::TypeQueryType(void)
  {
  }

LocalSearchFilterSpecJSON::TypeQueryType::TypeQueryType(const TypeQueryType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

LocalSearchFilterSpecJSON::TypeQueryType::TypeQueryType(TypeQueryTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator==(const TypeQueryType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator!=(const TypeQueryType &other) const
  {
    return !(operator==(other));
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator<(const TypeQueryType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator>(const TypeQueryType &other) const
  {
    return other.operator<(*this);
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator>=(const TypeQueryType &other) const
  {
    return !(operator<(other));
  }

bool LocalSearchFilterSpecJSON::TypeQueryType::operator<=(const TypeQueryType &other) const
  {
    return !(other.operator<(*this));
  }

LocalSearchFilterSpecJSON::TypeQueryTypeKnownValues LocalSearchFilterSpecJSON::stringToQueryType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ctionsCall") == 0)
                return QueryType_ActionsCall;
            break;
        case 'Q':
            if (strcmp(&(chars[1]), "uestion") == 0)
                return QueryType_Question;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "earch") == 0)
                return QueryType_Search;
            break;
        default:
            break;
      }
    return QueryType__none;
  }

const char *LocalSearchFilterSpecJSON::stringFromQueryType(TypeQueryTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QueryType_Search:
            return "Search";
        case QueryType_Question:
            return "Question";
        case QueryType_ActionsCall:
            return "ActionsCall";
        default:
            assert(false);
            return NULL;
      }
  }

LocalSearchFilterSpecJSON::TypeRadiusUnit LocalSearchFilterSpecJSON::stringToRadiusUnit(const char *chars)
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

const char *LocalSearchFilterSpecJSON::stringFromRadiusUnit(TypeRadiusUnit the_enum)
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

LocalSearchFilterSpecJSON::TypeSortCriteria LocalSearchFilterSpecJSON::stringToSortCriteria(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "istance") == 0)
                return SortCriteria_Distance;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "rice") == 0)
                return SortCriteria_Price;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eviewCount") == 0)
                return SortCriteria_ReviewCount;
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

const char *LocalSearchFilterSpecJSON::stringFromSortCriteria(TypeSortCriteria the_enum)
  {
    switch (the_enum)
      {
        case SortCriteria_Distance:
            return "Distance";
        case SortCriteria_Price:
            return "Price";
        case SortCriteria_StarRating:
            return "StarRating";
        case SortCriteria_ReviewCount:
            return "ReviewCount";
        default:
            assert(false);
            return NULL;
      }
  }

LocalSearchFilterSpecJSON::TypeSortOrder LocalSearchFilterSpecJSON::stringToSortOrder(const char *chars)
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

const char *LocalSearchFilterSpecJSON::stringFromSortOrder(TypeSortOrder the_enum)
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

LocalSearchFilterSpecJSON::LocalSearchFilterSpecJSON(const LocalSearchFilterSpecJSON &)
  {
    assert(false);
  }

LocalSearchFilterSpecJSON &LocalSearchFilterSpecJSON::operator=(const LocalSearchFilterSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalSearchFilterSpecJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryType of LocalSearchFilterSpecJSON is not a string.");
    TypeQueryType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ctionsCall") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_ActionsCall;
                    goto open_enum_is_done;
                  }
            break;
        case 'Q':
            if (strcmp(&(json_string->getData()[1]), "uestion") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_Question;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "earch") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = QueryType_Search;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setQueryType(the_open_enum);
  }

void LocalSearchFilterSpecJSON::fromJSONResultCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResultCount of LocalSearchFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResultCount of LocalSearchFilterSpecJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setResultCount(extracted_integer);
  }

void LocalSearchFilterSpecJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchFilterSpecJSON::fromJSONRadius(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Radius of LocalSearchFilterSpecJSON is not a number.");
          }
      }
    setRadiusText(the_rational_text);
  }

void LocalSearchFilterSpecJSON::fromJSONRadiusUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RadiusUnit of LocalSearchFilterSpecJSON is not a string.");
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
    throw("The value for field RadiusUnit of LocalSearchFilterSpecJSON is not one of the legal strings.");
  enum_is_done:;
    setRadiusUnit(the_enum);
  }

void LocalSearchFilterSpecJSON::fromJSONRadiusInferred(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RadiusInferred of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setRadiusInferred(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONAlongTheRoute(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AlongTheRoute of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setAlongTheRoute(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONRoutePoints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RoutePointsJSON *convert_classy = RoutePointsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRoutePoints(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchFilterSpecJSON::fromJSONLocalSearchQuestions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchQuestionsSpecJSON *convert_classy = LocalSearchQuestionsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchQuestions(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchFilterSpecJSON::fromJSONOpenHours(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OpenHoursSpecJSON *convert_classy = OpenHoursSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpenHours(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchFilterSpecJSON::fromJSONOpenHoursSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OpenHoursSpokenResponse of LocalSearchFilterSpecJSON is not a string.");
    setOpenHoursSpokenResponse(std::string(json_string->getData()));
  }

void LocalSearchFilterSpecJSON::fromJSONOpenHoursWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OpenHoursWrittenResponse of LocalSearchFilterSpecJSON is not a string.");
    setOpenHoursWrittenResponse(std::string(json_string->getData()));
  }

void LocalSearchFilterSpecJSON::fromJSONOpenHoursFilterOnHoliday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenHoursFilterOnHoliday of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setOpenHoursFilterOnHoliday(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONSortCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SortCriteria of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSortCriteria > vector_SortCriteria1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SortCriteria of LocalSearchFilterSpecJSON is not a string.");
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
            case 'P':
                if (strcmp(&(json_string->getData()[1]), "rice") == 0)
                      {
                        the_enum = SortCriteria_Price;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strcmp(&(json_string->getData()[1]), "eviewCount") == 0)
                      {
                        the_enum = SortCriteria_ReviewCount;
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
        throw("The value for an element of field SortCriteria of LocalSearchFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_SortCriteria1[num1] = the_enum;
      }
    initSortCriteria();
    for (size_t num22 = 0; num22 < vector_SortCriteria1.size(); ++num22)
        appendSortCriteria(vector_SortCriteria1[num22]);
    for (size_t num1 = 0; num1 < vector_SortCriteria1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONSortOrder(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SortOrder of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSortOrder > vector_SortOrder1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SortOrder of LocalSearchFilterSpecJSON is not a string.");
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
        throw("The value for an element of field SortOrder of LocalSearchFilterSpecJSON is not one of the legal strings.");
      enum_is_done:;
        vector_SortOrder1[num1] = the_enum;
      }
    initSortOrder();
    for (size_t num23 = 0; num23 < vector_SortOrder1.size(); ++num23)
        appendSortOrder(vector_SortOrder1[num23]);
    for (size_t num1 = 0; num1 < vector_SortOrder1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONExpensiveFlag(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExpensiveFlag of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setExpensiveFlag(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONInexpensiveFlag(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InexpensiveFlag of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setInexpensiveFlag(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONConversationMode(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ConversationMode of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setConversationMode(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONStarRatingMin(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StarRatingMin of LocalSearchFilterSpecJSON is not a number.");
          }
      }
    setStarRatingMinText(the_rational_text);
  }

void LocalSearchFilterSpecJSON::fromJSONStarRatingMax(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field StarRatingMax of LocalSearchFilterSpecJSON is not a number.");
          }
      }
    setStarRatingMaxText(the_rational_text);
  }

void LocalSearchFilterSpecJSON::fromJSONStarRatingsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StarRatingsInclude of LocalSearchFilterSpecJSON is not an array.");
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
                throw("The value for an element of field StarRatingsInclude of LocalSearchFilterSpecJSON is not a number.");
              }
          }
        vector_StarRatingsInclude1[num1] = the_double;
      }
    initStarRatingsInclude();
    for (size_t num24 = 0; num24 < vector_StarRatingsInclude1.size(); ++num24)
        appendStarRatingsInclude(vector_StarRatingsInclude1[num24]);
    for (size_t num1 = 0; num1 < vector_StarRatingsInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONStarRatingsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field StarRatingsExclude of LocalSearchFilterSpecJSON is not an array.");
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
                throw("The value for an element of field StarRatingsExclude of LocalSearchFilterSpecJSON is not a number.");
              }
          }
        vector_StarRatingsExclude1[num1] = the_double;
      }
    initStarRatingsExclude();
    for (size_t num25 = 0; num25 < vector_StarRatingsExclude1.size(); ++num25)
        appendStarRatingsExclude(vector_StarRatingsExclude1[num25]);
    for (size_t num1 = 0; num1 < vector_StarRatingsExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONReviewCountMin(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ReviewCountMin of LocalSearchFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ReviewCountMin of LocalSearchFilterSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setReviewCountMin(extracted_integer);
  }

void LocalSearchFilterSpecJSON::fromJSONReviewCountMax(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ReviewCountMax of LocalSearchFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ReviewCountMax of LocalSearchFilterSpecJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setReviewCountMax(extracted_integer);
  }

void LocalSearchFilterSpecJSON::fromJSONDollarSignMin(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DollarSignMin of LocalSearchFilterSpecJSON is not a number.");
          }
      }
    setDollarSignMinText(the_rational_text);
  }

void LocalSearchFilterSpecJSON::fromJSONDollarSignMax(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DollarSignMax of LocalSearchFilterSpecJSON is not a number.");
          }
      }
    setDollarSignMaxText(the_rational_text);
  }

void LocalSearchFilterSpecJSON::fromJSONDollarSignsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DollarSignsInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_DollarSignsInclude1(count1);
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
                throw("The value for an element of field DollarSignsInclude of LocalSearchFilterSpecJSON is not a number.");
              }
          }
        vector_DollarSignsInclude1[num1] = the_double;
      }
    initDollarSignsInclude();
    for (size_t num26 = 0; num26 < vector_DollarSignsInclude1.size(); ++num26)
        appendDollarSignsInclude(vector_DollarSignsInclude1[num26]);
    for (size_t num1 = 0; num1 < vector_DollarSignsInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONDollarSignsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DollarSignsExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< double > vector_DollarSignsExclude1(count1);
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
                throw("The value for an element of field DollarSignsExclude of LocalSearchFilterSpecJSON is not a number.");
              }
          }
        vector_DollarSignsExclude1[num1] = the_double;
      }
    initDollarSignsExclude();
    for (size_t num27 = 0; num27 < vector_DollarSignsExclude1.size(); ++num27)
        appendDollarSignsExclude(vector_DollarSignsExclude1[num27]);
    for (size_t num1 = 0; num1 < vector_DollarSignsExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONCategoriesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CategoriesInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_CategoriesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field CategoriesInclude of LocalSearchFilterSpecJSON is not a string.");
        vector_CategoriesInclude1[num1] = std::string(json_string->getData());
      }
    initCategoriesInclude();
    for (size_t num28 = 0; num28 < vector_CategoriesInclude1.size(); ++num28)
        appendCategoriesInclude(vector_CategoriesInclude1[num28]);
    for (size_t num1 = 0; num1 < vector_CategoriesInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONCategoriesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field CategoriesExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_CategoriesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field CategoriesExclude of LocalSearchFilterSpecJSON is not a string.");
        vector_CategoriesExclude1[num1] = std::string(json_string->getData());
      }
    initCategoriesExclude();
    for (size_t num29 = 0; num29 < vector_CategoriesExclude1.size(); ++num29)
        appendCategoriesExclude(vector_CategoriesExclude1[num29]);
    for (size_t num1 = 0; num1 < vector_CategoriesExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONChainsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChainsInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ChainsInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ChainsInclude of LocalSearchFilterSpecJSON is not a string.");
        vector_ChainsInclude1[num1] = std::string(json_string->getData());
      }
    initChainsInclude();
    for (size_t num30 = 0; num30 < vector_ChainsInclude1.size(); ++num30)
        appendChainsInclude(vector_ChainsInclude1[num30]);
    for (size_t num1 = 0; num1 < vector_ChainsInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONChainsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChainsExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ChainsExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ChainsExclude of LocalSearchFilterSpecJSON is not a string.");
        vector_ChainsExclude1[num1] = std::string(json_string->getData());
      }
    initChainsExclude();
    for (size_t num31 = 0; num31 < vector_ChainsExclude1.size(); ++num31)
        appendChainsExclude(vector_ChainsExclude1[num31]);
    for (size_t num1 = 0; num1 < vector_ChainsExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONProductsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ProductsInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ProductsInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ProductsInclude of LocalSearchFilterSpecJSON is not a string.");
        vector_ProductsInclude1[num1] = std::string(json_string->getData());
      }
    initProductsInclude();
    for (size_t num32 = 0; num32 < vector_ProductsInclude1.size(); ++num32)
        appendProductsInclude(vector_ProductsInclude1[num32]);
    for (size_t num1 = 0; num1 < vector_ProductsInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONProductsExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ProductsExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ProductsExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ProductsExclude of LocalSearchFilterSpecJSON is not a string.");
        vector_ProductsExclude1[num1] = std::string(json_string->getData());
      }
    initProductsExclude();
    for (size_t num33 = 0; num33 < vector_ProductsExclude1.size(); ++num33)
        appendProductsExclude(vector_ProductsExclude1[num33]);
    for (size_t num1 = 0; num1 < vector_ProductsExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONResultIDsReferenced(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ResultIDsReferenced of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ResultIDsReferenced1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ResultIDsReferenced of LocalSearchFilterSpecJSON is not a string.");
        vector_ResultIDsReferenced1[num1] = std::string(json_string->getData());
      }
    initResultIDsReferenced();
    for (size_t num34 = 0; num34 < vector_ResultIDsReferenced1.size(); ++num34)
        appendResultIDsReferenced(vector_ResultIDsReferenced1[num34]);
    for (size_t num1 = 0; num1 < vector_ResultIDsReferenced1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONResultIDsIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResultIDsIndex of LocalSearchFilterSpecJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResultIDsIndex of LocalSearchFilterSpecJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setResultIDsIndex(extracted_integer);
  }

void LocalSearchFilterSpecJSON::fromJSONResultIDsIndexRepeated(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ResultIDsIndexRepeated of LocalSearchFilterSpecJSON is not true for false.");
          }
      }
    setResultIDsIndexRepeated(the_bool);
  }

void LocalSearchFilterSpecJSON::fromJSONPlacesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlacesInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_PlacesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field PlacesInclude of LocalSearchFilterSpecJSON is not a string.");
        vector_PlacesInclude1[num1] = std::string(json_string->getData());
      }
    initPlacesInclude();
    for (size_t num35 = 0; num35 < vector_PlacesInclude1.size(); ++num35)
        appendPlacesInclude(vector_PlacesInclude1[num35]);
    for (size_t num1 = 0; num1 < vector_PlacesInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONPlacesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlacesExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_PlacesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field PlacesExclude of LocalSearchFilterSpecJSON is not a string.");
        vector_PlacesExclude1[num1] = std::string(json_string->getData());
      }
    initPlacesExclude();
    for (size_t num36 = 0; num36 < vector_PlacesExclude1.size(); ++num36)
        appendPlacesExclude(vector_PlacesExclude1[num36]);
    for (size_t num1 = 0; num1 < vector_PlacesExclude1.size(); ++num1)
      {
      }
  }

void LocalSearchFilterSpecJSON::fromJSONExcludedPlacesSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExcludedPlacesSpoken of LocalSearchFilterSpecJSON is not a string.");
    setExcludedPlacesSpoken(std::string(json_string->getData()));
  }

void LocalSearchFilterSpecJSON::fromJSONExcludedPlacesWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExcludedPlacesWritten of LocalSearchFilterSpecJSON is not a string.");
    setExcludedPlacesWritten(std::string(json_string->getData()));
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesInclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesInclude1[num1] = convert_classy;
      }
    initAmenitiesInclude();
    for (size_t num37 = 0; num37 < vector_AmenitiesInclude1.size(); ++num37)
        appendAmenitiesInclude(vector_AmenitiesInclude1[num37]);
    for (size_t num1 = 0; num1 < vector_AmenitiesInclude1.size(); ++num1)
      {
        vector_AmenitiesInclude1[num1]->remove_reference();
      }
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesIncludeSupported(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesIncludeSupported of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesIncludeSupported1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesIncludeSupported1[num1] = convert_classy;
      }
    initAmenitiesIncludeSupported();
    for (size_t num38 = 0; num38 < vector_AmenitiesIncludeSupported1.size(); ++num38)
        appendAmenitiesIncludeSupported(vector_AmenitiesIncludeSupported1[num38]);
    for (size_t num1 = 0; num1 < vector_AmenitiesIncludeSupported1.size(); ++num1)
      {
        vector_AmenitiesIncludeSupported1[num1]->remove_reference();
      }
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesIncludeNotSupported(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesIncludeNotSupported of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesIncludeNotSupported1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesIncludeNotSupported1[num1] = convert_classy;
      }
    initAmenitiesIncludeNotSupported();
    for (size_t num39 = 0; num39 < vector_AmenitiesIncludeNotSupported1.size(); ++num39)
        appendAmenitiesIncludeNotSupported(vector_AmenitiesIncludeNotSupported1[num39]);
    for (size_t num1 = 0; num1 < vector_AmenitiesIncludeNotSupported1.size(); ++num1)
      {
        vector_AmenitiesIncludeNotSupported1[num1]->remove_reference();
      }
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesExclude of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesExclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesExclude1[num1] = convert_classy;
      }
    initAmenitiesExclude();
    for (size_t num40 = 0; num40 < vector_AmenitiesExclude1.size(); ++num40)
        appendAmenitiesExclude(vector_AmenitiesExclude1[num40]);
    for (size_t num1 = 0; num1 < vector_AmenitiesExclude1.size(); ++num1)
      {
        vector_AmenitiesExclude1[num1]->remove_reference();
      }
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesExcludeSupported(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesExcludeSupported of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesExcludeSupported1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesExcludeSupported1[num1] = convert_classy;
      }
    initAmenitiesExcludeSupported();
    for (size_t num41 = 0; num41 < vector_AmenitiesExcludeSupported1.size(); ++num41)
        appendAmenitiesExcludeSupported(vector_AmenitiesExcludeSupported1[num41]);
    for (size_t num1 = 0; num1 < vector_AmenitiesExcludeSupported1.size(); ++num1)
      {
        vector_AmenitiesExcludeSupported1[num1]->remove_reference();
      }
  }

void LocalSearchFilterSpecJSON::fromJSONAmenitiesExcludeNotSupported(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesExcludeNotSupported of LocalSearchFilterSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesExcludeNotSupported1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesExcludeNotSupported1[num1] = convert_classy;
      }
    initAmenitiesExcludeNotSupported();
    for (size_t num42 = 0; num42 < vector_AmenitiesExcludeNotSupported1.size(); ++num42)
        appendAmenitiesExcludeNotSupported(vector_AmenitiesExcludeNotSupported1[num42]);
    for (size_t num1 = 0; num1 < vector_AmenitiesExcludeNotSupported1.size(); ++num1)
      {
        vector_AmenitiesExcludeNotSupported1[num1]->remove_reference();
      }
  }

LocalSearchFilterSpecJSON::LocalSearchFilterSpecJSON(void) :
        flagHasQueryType(false),
        flagHasResultCount(false),
        flagHasMapLocation(false),
        flagHasRadius(false),
        flagHasRadiusUnit(false),
        flagHasRadiusInferred(false),
        flagHasAlongTheRoute(false),
        flagHasRoutePoints(false),
        flagHasLocalSearchQuestions(false),
        flagHasOpenHours(false),
        flagHasOpenHoursSpokenResponse(false),
        flagHasOpenHoursWrittenResponse(false),
        flagHasOpenHoursFilterOnHoliday(false),
        flagHasSortCriteria(false),
        flagHasSortOrder(false),
        flagHasExpensiveFlag(false),
        flagHasInexpensiveFlag(false),
        flagHasConversationMode(false),
        flagHasStarRatingMin(false),
        flagHasStarRatingMax(false),
        flagHasStarRatingsInclude(false),
        flagHasStarRatingsExclude(false),
        flagHasReviewCountMin(false),
        flagHasReviewCountMax(false),
        flagHasDollarSignMin(false),
        flagHasDollarSignMax(false),
        flagHasDollarSignsInclude(false),
        flagHasDollarSignsExclude(false),
        flagHasCategoriesInclude(false),
        flagHasCategoriesExclude(false),
        flagHasChainsInclude(false),
        flagHasChainsExclude(false),
        flagHasProductsInclude(false),
        flagHasProductsExclude(false),
        flagHasResultIDsReferenced(false),
        flagHasResultIDsIndex(false),
        flagHasResultIDsIndexRepeated(false),
        flagHasPlacesInclude(false),
        flagHasPlacesExclude(false),
        flagHasExcludedPlacesSpoken(false),
        flagHasExcludedPlacesWritten(false),
        flagHasAmenitiesInclude(false),
        flagHasAmenitiesIncludeSupported(false),
        flagHasAmenitiesIncludeNotSupported(false),
        flagHasAmenitiesExclude(false),
        flagHasAmenitiesExcludeSupported(false),
        flagHasAmenitiesExcludeNotSupported(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchFilterSpecJSON::~LocalSearchFilterSpecJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasRoutePoints)
      {
        storeRoutePoints->remove_reference();
      }
    if (flagHasLocalSearchQuestions)
      {
        storeLocalSearchQuestions->remove_reference();
      }
    if (flagHasOpenHours)
      {
        storeOpenHours->remove_reference();
      }
    if (flagHasAmenitiesInclude)
      {
        for (size_t num19 = 0; num19 < storeAmenitiesInclude.size(); ++num19)
          {
            storeAmenitiesInclude[num19]->remove_reference();
          }
      }
    if (flagHasAmenitiesIncludeSupported)
      {
        for (size_t num20 = 0; num20 < storeAmenitiesIncludeSupported.size(); ++num20)
          {
            storeAmenitiesIncludeSupported[num20]->remove_reference();
          }
      }
    if (flagHasAmenitiesIncludeNotSupported)
      {
        for (size_t num21 = 0; num21 < storeAmenitiesIncludeNotSupported.size(); ++num21)
          {
            storeAmenitiesIncludeNotSupported[num21]->remove_reference();
          }
      }
    if (flagHasAmenitiesExclude)
      {
        for (size_t num22 = 0; num22 < storeAmenitiesExclude.size(); ++num22)
          {
            storeAmenitiesExclude[num22]->remove_reference();
          }
      }
    if (flagHasAmenitiesExcludeSupported)
      {
        for (size_t num23 = 0; num23 < storeAmenitiesExcludeSupported.size(); ++num23)
          {
            storeAmenitiesExcludeSupported[num23]->remove_reference();
          }
      }
    if (flagHasAmenitiesExcludeNotSupported)
      {
        for (size_t num24 = 0; num24 < storeAmenitiesExcludeNotSupported.size(); ++num24)
          {
            storeAmenitiesExcludeNotSupported[num24]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalSearchFilterSpecJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

LocalSearchFilterSpecJSON::TypeQueryType LocalSearchFilterSpecJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const LocalSearchFilterSpecJSON::TypeQueryType LocalSearchFilterSpecJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const char *LocalSearchFilterSpecJSON::getQueryTypeAsChars(void) const
  {
    TypeQueryType result = getQueryType();
    if (result.in_known_list)
        return stringFromQueryType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string LocalSearchFilterSpecJSON::getQueryTypeAsString(void) const
  {
    return getQueryTypeAsChars();
  }

bool LocalSearchFilterSpecJSON::hasResultCount(void) const
  {
    return flagHasResultCount;
  }

uint8_t LocalSearchFilterSpecJSON::getResultCount(void)
  {
    assert(flagHasResultCount);
    return storeResultCount;
  }

const uint8_t LocalSearchFilterSpecJSON::getResultCount(void) const
  {
    assert(flagHasResultCount);
    return storeResultCount;
  }

bool LocalSearchFilterSpecJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * LocalSearchFilterSpecJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * LocalSearchFilterSpecJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool LocalSearchFilterSpecJSON::hasRadius(void) const
  {
    return flagHasRadius;
  }

double LocalSearchFilterSpecJSON::getRadius(void)
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

const double LocalSearchFilterSpecJSON::getRadius(void) const
  {
    assert(flagHasRadius);
    if (textStoreRadius != "")
      {
        return atof(textStoreRadius.c_str());
      }
    return storeRadius;
  }

std::string LocalSearchFilterSpecJSON::getRadiusAsText(void) const
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

bool LocalSearchFilterSpecJSON::hasRadiusUnit(void) const
  {
    return flagHasRadiusUnit;
  }

LocalSearchFilterSpecJSON::TypeRadiusUnit LocalSearchFilterSpecJSON::getRadiusUnit(void)
  {
    assert(flagHasRadiusUnit);
    return storeRadiusUnit;
  }

const LocalSearchFilterSpecJSON::TypeRadiusUnit LocalSearchFilterSpecJSON::getRadiusUnit(void) const
  {
    assert(flagHasRadiusUnit);
    return storeRadiusUnit;
  }

const char *LocalSearchFilterSpecJSON::getRadiusUnitAsChars(void) const
  {
    return stringFromRadiusUnit(getRadiusUnit());
  }

std::string LocalSearchFilterSpecJSON::getRadiusUnitAsString(void) const
  {
    return stringFromRadiusUnit(getRadiusUnit());
  }

bool LocalSearchFilterSpecJSON::hasRadiusInferred(void) const
  {
    return flagHasRadiusInferred;
  }

bool LocalSearchFilterSpecJSON::getRadiusInferred(void)
  {
    assert(flagHasRadiusInferred);
    return storeRadiusInferred;
  }

const bool LocalSearchFilterSpecJSON::getRadiusInferred(void) const
  {
    assert(flagHasRadiusInferred);
    return storeRadiusInferred;
  }

bool LocalSearchFilterSpecJSON::hasAlongTheRoute(void) const
  {
    return flagHasAlongTheRoute;
  }

bool LocalSearchFilterSpecJSON::getAlongTheRoute(void)
  {
    assert(flagHasAlongTheRoute);
    return storeAlongTheRoute;
  }

const bool LocalSearchFilterSpecJSON::getAlongTheRoute(void) const
  {
    assert(flagHasAlongTheRoute);
    return storeAlongTheRoute;
  }

bool LocalSearchFilterSpecJSON::hasRoutePoints(void) const
  {
    return flagHasRoutePoints;
  }

RoutePointsJSON * LocalSearchFilterSpecJSON::getRoutePoints(void)
  {
    assert(flagHasRoutePoints);
    return storeRoutePoints;
  }

const RoutePointsJSON * LocalSearchFilterSpecJSON::getRoutePoints(void) const
  {
    assert(flagHasRoutePoints);
    return storeRoutePoints;
  }

bool LocalSearchFilterSpecJSON::hasLocalSearchQuestions(void) const
  {
    return flagHasLocalSearchQuestions;
  }

LocalSearchQuestionsSpecJSON * LocalSearchFilterSpecJSON::getLocalSearchQuestions(void)
  {
    assert(flagHasLocalSearchQuestions);
    return storeLocalSearchQuestions;
  }

const LocalSearchQuestionsSpecJSON * LocalSearchFilterSpecJSON::getLocalSearchQuestions(void) const
  {
    assert(flagHasLocalSearchQuestions);
    return storeLocalSearchQuestions;
  }

bool LocalSearchFilterSpecJSON::hasOpenHours(void) const
  {
    return flagHasOpenHours;
  }

OpenHoursSpecJSON * LocalSearchFilterSpecJSON::getOpenHours(void)
  {
    assert(flagHasOpenHours);
    return storeOpenHours;
  }

const OpenHoursSpecJSON * LocalSearchFilterSpecJSON::getOpenHours(void) const
  {
    assert(flagHasOpenHours);
    return storeOpenHours;
  }

bool LocalSearchFilterSpecJSON::hasOpenHoursSpokenResponse(void) const
  {
    return flagHasOpenHoursSpokenResponse;
  }

std::string LocalSearchFilterSpecJSON::getOpenHoursSpokenResponse(void)
  {
    assert(flagHasOpenHoursSpokenResponse);
    return storeOpenHoursSpokenResponse;
  }

const std::string LocalSearchFilterSpecJSON::getOpenHoursSpokenResponse(void) const
  {
    assert(flagHasOpenHoursSpokenResponse);
    return storeOpenHoursSpokenResponse;
  }

bool LocalSearchFilterSpecJSON::hasOpenHoursWrittenResponse(void) const
  {
    return flagHasOpenHoursWrittenResponse;
  }

std::string LocalSearchFilterSpecJSON::getOpenHoursWrittenResponse(void)
  {
    assert(flagHasOpenHoursWrittenResponse);
    return storeOpenHoursWrittenResponse;
  }

const std::string LocalSearchFilterSpecJSON::getOpenHoursWrittenResponse(void) const
  {
    assert(flagHasOpenHoursWrittenResponse);
    return storeOpenHoursWrittenResponse;
  }

bool LocalSearchFilterSpecJSON::hasOpenHoursFilterOnHoliday(void) const
  {
    return flagHasOpenHoursFilterOnHoliday;
  }

bool LocalSearchFilterSpecJSON::getOpenHoursFilterOnHoliday(void)
  {
    assert(flagHasOpenHoursFilterOnHoliday);
    return storeOpenHoursFilterOnHoliday;
  }

const bool LocalSearchFilterSpecJSON::getOpenHoursFilterOnHoliday(void) const
  {
    assert(flagHasOpenHoursFilterOnHoliday);
    return storeOpenHoursFilterOnHoliday;
  }

bool LocalSearchFilterSpecJSON::hasSortCriteria(void) const
  {
    return flagHasSortCriteria;
  }

size_t LocalSearchFilterSpecJSON::countOfSortCriteria(void) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria.size();
  }

LocalSearchFilterSpecJSON::TypeSortCriteria LocalSearchFilterSpecJSON::elementOfSortCriteria(size_t element_num)
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria[element_num];
  }

const LocalSearchFilterSpecJSON::TypeSortCriteria LocalSearchFilterSpecJSON::elementOfSortCriteria(size_t element_num) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria[element_num];
  }

std::vector< LocalSearchFilterSpecJSON::TypeSortCriteria > LocalSearchFilterSpecJSON::getSortCriteria(void)
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria;
  }

const std::vector< LocalSearchFilterSpecJSON::TypeSortCriteria > LocalSearchFilterSpecJSON::getSortCriteria(void) const
  {
    assert(flagHasSortCriteria);
    return storeSortCriteria;
  }

bool LocalSearchFilterSpecJSON::hasSortOrder(void) const
  {
    return flagHasSortOrder;
  }

size_t LocalSearchFilterSpecJSON::countOfSortOrder(void) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder.size();
  }

LocalSearchFilterSpecJSON::TypeSortOrder LocalSearchFilterSpecJSON::elementOfSortOrder(size_t element_num)
  {
    assert(flagHasSortOrder);
    return storeSortOrder[element_num];
  }

const LocalSearchFilterSpecJSON::TypeSortOrder LocalSearchFilterSpecJSON::elementOfSortOrder(size_t element_num) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder[element_num];
  }

std::vector< LocalSearchFilterSpecJSON::TypeSortOrder > LocalSearchFilterSpecJSON::getSortOrder(void)
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

const std::vector< LocalSearchFilterSpecJSON::TypeSortOrder > LocalSearchFilterSpecJSON::getSortOrder(void) const
  {
    assert(flagHasSortOrder);
    return storeSortOrder;
  }

bool LocalSearchFilterSpecJSON::hasExpensiveFlag(void) const
  {
    return flagHasExpensiveFlag;
  }

bool LocalSearchFilterSpecJSON::getExpensiveFlag(void)
  {
    assert(flagHasExpensiveFlag);
    return storeExpensiveFlag;
  }

const bool LocalSearchFilterSpecJSON::getExpensiveFlag(void) const
  {
    assert(flagHasExpensiveFlag);
    return storeExpensiveFlag;
  }

bool LocalSearchFilterSpecJSON::hasInexpensiveFlag(void) const
  {
    return flagHasInexpensiveFlag;
  }

bool LocalSearchFilterSpecJSON::getInexpensiveFlag(void)
  {
    assert(flagHasInexpensiveFlag);
    return storeInexpensiveFlag;
  }

const bool LocalSearchFilterSpecJSON::getInexpensiveFlag(void) const
  {
    assert(flagHasInexpensiveFlag);
    return storeInexpensiveFlag;
  }

bool LocalSearchFilterSpecJSON::hasConversationMode(void) const
  {
    return flagHasConversationMode;
  }

bool LocalSearchFilterSpecJSON::getConversationMode(void)
  {
    assert(flagHasConversationMode);
    return storeConversationMode;
  }

const bool LocalSearchFilterSpecJSON::getConversationMode(void) const
  {
    assert(flagHasConversationMode);
    return storeConversationMode;
  }

bool LocalSearchFilterSpecJSON::hasStarRatingMin(void) const
  {
    return flagHasStarRatingMin;
  }

double LocalSearchFilterSpecJSON::getStarRatingMin(void)
  {
    assert(flagHasStarRatingMin);
    if (textStoreStarRatingMin != "")
      {
        return atof(textStoreStarRatingMin.c_str());
      }
    return storeStarRatingMin;
  }

const double LocalSearchFilterSpecJSON::getStarRatingMin(void) const
  {
    assert(flagHasStarRatingMin);
    if (textStoreStarRatingMin != "")
      {
        return atof(textStoreStarRatingMin.c_str());
      }
    return storeStarRatingMin;
  }

std::string LocalSearchFilterSpecJSON::getStarRatingMinAsText(void) const
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

bool LocalSearchFilterSpecJSON::hasStarRatingMax(void) const
  {
    return flagHasStarRatingMax;
  }

double LocalSearchFilterSpecJSON::getStarRatingMax(void)
  {
    assert(flagHasStarRatingMax);
    if (textStoreStarRatingMax != "")
      {
        return atof(textStoreStarRatingMax.c_str());
      }
    return storeStarRatingMax;
  }

const double LocalSearchFilterSpecJSON::getStarRatingMax(void) const
  {
    assert(flagHasStarRatingMax);
    if (textStoreStarRatingMax != "")
      {
        return atof(textStoreStarRatingMax.c_str());
      }
    return storeStarRatingMax;
  }

std::string LocalSearchFilterSpecJSON::getStarRatingMaxAsText(void) const
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

bool LocalSearchFilterSpecJSON::hasStarRatingsInclude(void) const
  {
    return flagHasStarRatingsInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfStarRatingsInclude(void) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude.size();
  }

double LocalSearchFilterSpecJSON::elementOfStarRatingsInclude(size_t element_num)
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude[element_num];
  }

const double LocalSearchFilterSpecJSON::elementOfStarRatingsInclude(size_t element_num) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude[element_num];
  }

std::vector< double > LocalSearchFilterSpecJSON::getStarRatingsInclude(void)
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude;
  }

const std::vector< double > LocalSearchFilterSpecJSON::getStarRatingsInclude(void) const
  {
    assert(flagHasStarRatingsInclude);
    return storeStarRatingsInclude;
  }

bool LocalSearchFilterSpecJSON::hasStarRatingsExclude(void) const
  {
    return flagHasStarRatingsExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfStarRatingsExclude(void) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude.size();
  }

double LocalSearchFilterSpecJSON::elementOfStarRatingsExclude(size_t element_num)
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude[element_num];
  }

const double LocalSearchFilterSpecJSON::elementOfStarRatingsExclude(size_t element_num) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude[element_num];
  }

std::vector< double > LocalSearchFilterSpecJSON::getStarRatingsExclude(void)
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude;
  }

const std::vector< double > LocalSearchFilterSpecJSON::getStarRatingsExclude(void) const
  {
    assert(flagHasStarRatingsExclude);
    return storeStarRatingsExclude;
  }

bool LocalSearchFilterSpecJSON::hasReviewCountMin(void) const
  {
    return flagHasReviewCountMin;
  }

OInteger LocalSearchFilterSpecJSON::getReviewCountMin(void)
  {
    assert(flagHasReviewCountMin);
    return storeReviewCountMin;
  }

const OInteger LocalSearchFilterSpecJSON::getReviewCountMin(void) const
  {
    assert(flagHasReviewCountMin);
    return storeReviewCountMin;
  }

bool LocalSearchFilterSpecJSON::hasReviewCountMax(void) const
  {
    return flagHasReviewCountMax;
  }

OInteger LocalSearchFilterSpecJSON::getReviewCountMax(void)
  {
    assert(flagHasReviewCountMax);
    return storeReviewCountMax;
  }

const OInteger LocalSearchFilterSpecJSON::getReviewCountMax(void) const
  {
    assert(flagHasReviewCountMax);
    return storeReviewCountMax;
  }

bool LocalSearchFilterSpecJSON::hasDollarSignMin(void) const
  {
    return flagHasDollarSignMin;
  }

double LocalSearchFilterSpecJSON::getDollarSignMin(void)
  {
    assert(flagHasDollarSignMin);
    if (textStoreDollarSignMin != "")
      {
        return atof(textStoreDollarSignMin.c_str());
      }
    return storeDollarSignMin;
  }

const double LocalSearchFilterSpecJSON::getDollarSignMin(void) const
  {
    assert(flagHasDollarSignMin);
    if (textStoreDollarSignMin != "")
      {
        return atof(textStoreDollarSignMin.c_str());
      }
    return storeDollarSignMin;
  }

std::string LocalSearchFilterSpecJSON::getDollarSignMinAsText(void) const
  {
    assert(flagHasDollarSignMin);
    if (textStoreDollarSignMin == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDollarSignMin);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDollarSignMin);
      }
  }

bool LocalSearchFilterSpecJSON::hasDollarSignMax(void) const
  {
    return flagHasDollarSignMax;
  }

double LocalSearchFilterSpecJSON::getDollarSignMax(void)
  {
    assert(flagHasDollarSignMax);
    if (textStoreDollarSignMax != "")
      {
        return atof(textStoreDollarSignMax.c_str());
      }
    return storeDollarSignMax;
  }

const double LocalSearchFilterSpecJSON::getDollarSignMax(void) const
  {
    assert(flagHasDollarSignMax);
    if (textStoreDollarSignMax != "")
      {
        return atof(textStoreDollarSignMax.c_str());
      }
    return storeDollarSignMax;
  }

std::string LocalSearchFilterSpecJSON::getDollarSignMaxAsText(void) const
  {
    assert(flagHasDollarSignMax);
    if (textStoreDollarSignMax == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDollarSignMax);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDollarSignMax);
      }
  }

bool LocalSearchFilterSpecJSON::hasDollarSignsInclude(void) const
  {
    return flagHasDollarSignsInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfDollarSignsInclude(void) const
  {
    assert(flagHasDollarSignsInclude);
    return storeDollarSignsInclude.size();
  }

double LocalSearchFilterSpecJSON::elementOfDollarSignsInclude(size_t element_num)
  {
    assert(flagHasDollarSignsInclude);
    return storeDollarSignsInclude[element_num];
  }

const double LocalSearchFilterSpecJSON::elementOfDollarSignsInclude(size_t element_num) const
  {
    assert(flagHasDollarSignsInclude);
    return storeDollarSignsInclude[element_num];
  }

std::vector< double > LocalSearchFilterSpecJSON::getDollarSignsInclude(void)
  {
    assert(flagHasDollarSignsInclude);
    return storeDollarSignsInclude;
  }

const std::vector< double > LocalSearchFilterSpecJSON::getDollarSignsInclude(void) const
  {
    assert(flagHasDollarSignsInclude);
    return storeDollarSignsInclude;
  }

bool LocalSearchFilterSpecJSON::hasDollarSignsExclude(void) const
  {
    return flagHasDollarSignsExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfDollarSignsExclude(void) const
  {
    assert(flagHasDollarSignsExclude);
    return storeDollarSignsExclude.size();
  }

double LocalSearchFilterSpecJSON::elementOfDollarSignsExclude(size_t element_num)
  {
    assert(flagHasDollarSignsExclude);
    return storeDollarSignsExclude[element_num];
  }

const double LocalSearchFilterSpecJSON::elementOfDollarSignsExclude(size_t element_num) const
  {
    assert(flagHasDollarSignsExclude);
    return storeDollarSignsExclude[element_num];
  }

std::vector< double > LocalSearchFilterSpecJSON::getDollarSignsExclude(void)
  {
    assert(flagHasDollarSignsExclude);
    return storeDollarSignsExclude;
  }

const std::vector< double > LocalSearchFilterSpecJSON::getDollarSignsExclude(void) const
  {
    assert(flagHasDollarSignsExclude);
    return storeDollarSignsExclude;
  }

bool LocalSearchFilterSpecJSON::hasCategoriesInclude(void) const
  {
    return flagHasCategoriesInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfCategoriesInclude(void) const
  {
    assert(flagHasCategoriesInclude);
    return storeCategoriesInclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfCategoriesInclude(size_t element_num)
  {
    assert(flagHasCategoriesInclude);
    return storeCategoriesInclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfCategoriesInclude(size_t element_num) const
  {
    assert(flagHasCategoriesInclude);
    return storeCategoriesInclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getCategoriesInclude(void)
  {
    assert(flagHasCategoriesInclude);
    return storeCategoriesInclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getCategoriesInclude(void) const
  {
    assert(flagHasCategoriesInclude);
    return storeCategoriesInclude;
  }

bool LocalSearchFilterSpecJSON::hasCategoriesExclude(void) const
  {
    return flagHasCategoriesExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfCategoriesExclude(void) const
  {
    assert(flagHasCategoriesExclude);
    return storeCategoriesExclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfCategoriesExclude(size_t element_num)
  {
    assert(flagHasCategoriesExclude);
    return storeCategoriesExclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfCategoriesExclude(size_t element_num) const
  {
    assert(flagHasCategoriesExclude);
    return storeCategoriesExclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getCategoriesExclude(void)
  {
    assert(flagHasCategoriesExclude);
    return storeCategoriesExclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getCategoriesExclude(void) const
  {
    assert(flagHasCategoriesExclude);
    return storeCategoriesExclude;
  }

bool LocalSearchFilterSpecJSON::hasChainsInclude(void) const
  {
    return flagHasChainsInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfChainsInclude(void) const
  {
    assert(flagHasChainsInclude);
    return storeChainsInclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfChainsInclude(size_t element_num)
  {
    assert(flagHasChainsInclude);
    return storeChainsInclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfChainsInclude(size_t element_num) const
  {
    assert(flagHasChainsInclude);
    return storeChainsInclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getChainsInclude(void)
  {
    assert(flagHasChainsInclude);
    return storeChainsInclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getChainsInclude(void) const
  {
    assert(flagHasChainsInclude);
    return storeChainsInclude;
  }

bool LocalSearchFilterSpecJSON::hasChainsExclude(void) const
  {
    return flagHasChainsExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfChainsExclude(void) const
  {
    assert(flagHasChainsExclude);
    return storeChainsExclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfChainsExclude(size_t element_num)
  {
    assert(flagHasChainsExclude);
    return storeChainsExclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfChainsExclude(size_t element_num) const
  {
    assert(flagHasChainsExclude);
    return storeChainsExclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getChainsExclude(void)
  {
    assert(flagHasChainsExclude);
    return storeChainsExclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getChainsExclude(void) const
  {
    assert(flagHasChainsExclude);
    return storeChainsExclude;
  }

bool LocalSearchFilterSpecJSON::hasProductsInclude(void) const
  {
    return flagHasProductsInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfProductsInclude(void) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfProductsInclude(size_t element_num)
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfProductsInclude(size_t element_num) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getProductsInclude(void)
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getProductsInclude(void) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude;
  }

bool LocalSearchFilterSpecJSON::hasProductsExclude(void) const
  {
    return flagHasProductsExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfProductsExclude(void) const
  {
    assert(flagHasProductsExclude);
    return storeProductsExclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfProductsExclude(size_t element_num)
  {
    assert(flagHasProductsExclude);
    return storeProductsExclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfProductsExclude(size_t element_num) const
  {
    assert(flagHasProductsExclude);
    return storeProductsExclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getProductsExclude(void)
  {
    assert(flagHasProductsExclude);
    return storeProductsExclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getProductsExclude(void) const
  {
    assert(flagHasProductsExclude);
    return storeProductsExclude;
  }

bool LocalSearchFilterSpecJSON::hasResultIDsReferenced(void) const
  {
    return flagHasResultIDsReferenced;
  }

size_t LocalSearchFilterSpecJSON::countOfResultIDsReferenced(void) const
  {
    assert(flagHasResultIDsReferenced);
    return storeResultIDsReferenced.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfResultIDsReferenced(size_t element_num)
  {
    assert(flagHasResultIDsReferenced);
    return storeResultIDsReferenced[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfResultIDsReferenced(size_t element_num) const
  {
    assert(flagHasResultIDsReferenced);
    return storeResultIDsReferenced[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getResultIDsReferenced(void)
  {
    assert(flagHasResultIDsReferenced);
    return storeResultIDsReferenced;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getResultIDsReferenced(void) const
  {
    assert(flagHasResultIDsReferenced);
    return storeResultIDsReferenced;
  }

bool LocalSearchFilterSpecJSON::hasResultIDsIndex(void) const
  {
    return flagHasResultIDsIndex;
  }

uint8_t LocalSearchFilterSpecJSON::getResultIDsIndex(void)
  {
    assert(flagHasResultIDsIndex);
    return storeResultIDsIndex;
  }

const uint8_t LocalSearchFilterSpecJSON::getResultIDsIndex(void) const
  {
    assert(flagHasResultIDsIndex);
    return storeResultIDsIndex;
  }

bool LocalSearchFilterSpecJSON::hasResultIDsIndexRepeated(void) const
  {
    return flagHasResultIDsIndexRepeated;
  }

bool LocalSearchFilterSpecJSON::getResultIDsIndexRepeated(void)
  {
    assert(flagHasResultIDsIndexRepeated);
    return storeResultIDsIndexRepeated;
  }

const bool LocalSearchFilterSpecJSON::getResultIDsIndexRepeated(void) const
  {
    assert(flagHasResultIDsIndexRepeated);
    return storeResultIDsIndexRepeated;
  }

bool LocalSearchFilterSpecJSON::hasPlacesInclude(void) const
  {
    return flagHasPlacesInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfPlacesInclude(void) const
  {
    assert(flagHasPlacesInclude);
    return storePlacesInclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfPlacesInclude(size_t element_num)
  {
    assert(flagHasPlacesInclude);
    return storePlacesInclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfPlacesInclude(size_t element_num) const
  {
    assert(flagHasPlacesInclude);
    return storePlacesInclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getPlacesInclude(void)
  {
    assert(flagHasPlacesInclude);
    return storePlacesInclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getPlacesInclude(void) const
  {
    assert(flagHasPlacesInclude);
    return storePlacesInclude;
  }

bool LocalSearchFilterSpecJSON::hasPlacesExclude(void) const
  {
    return flagHasPlacesExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfPlacesExclude(void) const
  {
    assert(flagHasPlacesExclude);
    return storePlacesExclude.size();
  }

std::string LocalSearchFilterSpecJSON::elementOfPlacesExclude(size_t element_num)
  {
    assert(flagHasPlacesExclude);
    return storePlacesExclude[element_num];
  }

const std::string LocalSearchFilterSpecJSON::elementOfPlacesExclude(size_t element_num) const
  {
    assert(flagHasPlacesExclude);
    return storePlacesExclude[element_num];
  }

std::vector< std::string > LocalSearchFilterSpecJSON::getPlacesExclude(void)
  {
    assert(flagHasPlacesExclude);
    return storePlacesExclude;
  }

const std::vector< std::string > LocalSearchFilterSpecJSON::getPlacesExclude(void) const
  {
    assert(flagHasPlacesExclude);
    return storePlacesExclude;
  }

bool LocalSearchFilterSpecJSON::hasExcludedPlacesSpoken(void) const
  {
    return flagHasExcludedPlacesSpoken;
  }

std::string LocalSearchFilterSpecJSON::getExcludedPlacesSpoken(void)
  {
    assert(flagHasExcludedPlacesSpoken);
    return storeExcludedPlacesSpoken;
  }

const std::string LocalSearchFilterSpecJSON::getExcludedPlacesSpoken(void) const
  {
    assert(flagHasExcludedPlacesSpoken);
    return storeExcludedPlacesSpoken;
  }

bool LocalSearchFilterSpecJSON::hasExcludedPlacesWritten(void) const
  {
    return flagHasExcludedPlacesWritten;
  }

std::string LocalSearchFilterSpecJSON::getExcludedPlacesWritten(void)
  {
    assert(flagHasExcludedPlacesWritten);
    return storeExcludedPlacesWritten;
  }

const std::string LocalSearchFilterSpecJSON::getExcludedPlacesWritten(void) const
  {
    assert(flagHasExcludedPlacesWritten);
    return storeExcludedPlacesWritten;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesInclude(void) const
  {
    return flagHasAmenitiesInclude;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesInclude(size_t element_num)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesInclude(size_t element_num) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesInclude(void)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesIncludeSupported(void) const
  {
    return flagHasAmenitiesIncludeSupported;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesIncludeSupported(void) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesIncludeSupported(size_t element_num)
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesIncludeSupported(size_t element_num) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesIncludeSupported(void)
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesIncludeSupported(void) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesIncludeNotSupported(void) const
  {
    return flagHasAmenitiesIncludeNotSupported;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesIncludeNotSupported(void) const
  {
    assert(flagHasAmenitiesIncludeNotSupported);
    return storeAmenitiesIncludeNotSupported.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesIncludeNotSupported(size_t element_num)
  {
    assert(flagHasAmenitiesIncludeNotSupported);
    return storeAmenitiesIncludeNotSupported[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesIncludeNotSupported(size_t element_num) const
  {
    assert(flagHasAmenitiesIncludeNotSupported);
    return storeAmenitiesIncludeNotSupported[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesIncludeNotSupported(void)
  {
    assert(flagHasAmenitiesIncludeNotSupported);
    return storeAmenitiesIncludeNotSupported;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesIncludeNotSupported(void) const
  {
    assert(flagHasAmenitiesIncludeNotSupported);
    return storeAmenitiesIncludeNotSupported;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesExclude(void) const
  {
    return flagHasAmenitiesExclude;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesExclude(void) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExclude(size_t element_num)
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExclude(size_t element_num) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExclude(void)
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExclude(void) const
  {
    assert(flagHasAmenitiesExclude);
    return storeAmenitiesExclude;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesExcludeSupported(void) const
  {
    return flagHasAmenitiesExcludeSupported;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesExcludeSupported(void) const
  {
    assert(flagHasAmenitiesExcludeSupported);
    return storeAmenitiesExcludeSupported.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExcludeSupported(size_t element_num)
  {
    assert(flagHasAmenitiesExcludeSupported);
    return storeAmenitiesExcludeSupported[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExcludeSupported(size_t element_num) const
  {
    assert(flagHasAmenitiesExcludeSupported);
    return storeAmenitiesExcludeSupported[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExcludeSupported(void)
  {
    assert(flagHasAmenitiesExcludeSupported);
    return storeAmenitiesExcludeSupported;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExcludeSupported(void) const
  {
    assert(flagHasAmenitiesExcludeSupported);
    return storeAmenitiesExcludeSupported;
  }

bool LocalSearchFilterSpecJSON::hasAmenitiesExcludeNotSupported(void) const
  {
    return flagHasAmenitiesExcludeNotSupported;
  }

size_t LocalSearchFilterSpecJSON::countOfAmenitiesExcludeNotSupported(void) const
  {
    assert(flagHasAmenitiesExcludeNotSupported);
    return storeAmenitiesExcludeNotSupported.size();
  }

AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExcludeNotSupported(size_t element_num)
  {
    assert(flagHasAmenitiesExcludeNotSupported);
    return storeAmenitiesExcludeNotSupported[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchFilterSpecJSON::elementOfAmenitiesExcludeNotSupported(size_t element_num) const
  {
    assert(flagHasAmenitiesExcludeNotSupported);
    return storeAmenitiesExcludeNotSupported[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExcludeNotSupported(void)
  {
    assert(flagHasAmenitiesExcludeNotSupported);
    return storeAmenitiesExcludeNotSupported;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchFilterSpecJSON::getAmenitiesExcludeNotSupported(void) const
  {
    assert(flagHasAmenitiesExcludeNotSupported);
    return storeAmenitiesExcludeNotSupported;
  }

char LocalSearchFilterSpecJSON::Generator::lowerBoundReviewCountMin[] = "0";
char LocalSearchFilterSpecJSON::Generator::lowerBoundReviewCountMax[] = "0";
LocalSearchFilterSpecJSON *LocalSearchFilterSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchFilterSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchFilterSpecJSON>, LocalSearchFilterSpecJSON *, bool> generator("Type LocalSearchFilterSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
