/* file "LocalSearchQuestionsSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchQuestionsSpecJSON.h"

#include "LocalSearchQuestionsSpecJSON.h"


LocalSearchQuestionsSpecJSON::TypeQuestionTypes::TypeQuestionTypes(void)
  {
  }

LocalSearchQuestionsSpecJSON::TypeQuestionTypes::TypeQuestionTypes(const TypeQuestionTypes &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

LocalSearchQuestionsSpecJSON::TypeQuestionTypes::TypeQuestionTypes(TypeQuestionTypesKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator==(const TypeQuestionTypes &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator!=(const TypeQuestionTypes &other) const
  {
    return !(operator==(other));
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator<(const TypeQuestionTypes &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator>(const TypeQuestionTypes &other) const
  {
    return other.operator<(*this);
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator>=(const TypeQuestionTypes &other) const
  {
    return !(operator<(other));
  }

bool LocalSearchQuestionsSpecJSON::TypeQuestionTypes::operator<=(const TypeQuestionTypes &other) const
  {
    return !(other.operator<(*this));
  }

LocalSearchQuestionsSpecJSON::TypeQuestionTypesKnownValues LocalSearchQuestionsSpecJSON::stringToQuestionTypes(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'd':
                    if (strcmp(&(chars[2]), "dress") == 0)
                        return QuestionTypes_Address;
                    break;
                case 'm':
                    if (strcmp(&(chars[2]), "enities") == 0)
                        return QuestionTypes_Amenities;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tegory") == 0)
                        return QuestionTypes_Category;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "isine") == 0)
                        return QuestionTypes_Cuisine;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "istance") == 0)
                return QuestionTypes_Distance;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ax") == 0)
                return QuestionTypes_Fax;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "oursOfOperation") == 0)
                return QuestionTypes_HoursOfOperation;
            break;
        case 'I':
            switch ((unsigned char)(chars[1]))
              {
                case 'n':
                    if (strcmp(&(chars[2]), "formation") == 0)
                        return QuestionTypes_Information;
                    break;
                case 's':
                    if (strncmp(&(chars[2]), "It", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'C':
                                if (strcmp(&(chars[5]), "losed") == 0)
                                    return QuestionTypes_IsItClosed;
                                break;
                            case 'O':
                                if (strcmp(&(chars[5]), "pen") == 0)
                                    return QuestionTypes_IsItOpen;
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
        case 'N':
            if (strcmp(&(chars[1]), "ame") == 0)
                return QuestionTypes_Name;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "one") == 0)
                        return QuestionTypes_Phone;
                    break;
                case 'r':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'i':
                            if (strcmp(&(chars[3]), "ce") == 0)
                                return QuestionTypes_Price;
                            break;
                        case 'o':
                            if (strcmp(&(chars[3]), "ducts") == 0)
                                return QuestionTypes_Products;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'R':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ting") == 0)
                        return QuestionTypes_Rating;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "views") == 0)
                        return QuestionTypes_Reviews;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return QuestionTypes__none;
  }

const char *LocalSearchQuestionsSpecJSON::stringFromQuestionTypes(TypeQuestionTypesKnownValues the_enum)
  {
    switch (the_enum)
      {
        case QuestionTypes_Name:
            return "Name";
        case QuestionTypes_Information:
            return "Information";
        case QuestionTypes_IsItOpen:
            return "IsItOpen";
        case QuestionTypes_IsItClosed:
            return "IsItClosed";
        case QuestionTypes_HoursOfOperation:
            return "HoursOfOperation";
        case QuestionTypes_Phone:
            return "Phone";
        case QuestionTypes_Fax:
            return "Fax";
        case QuestionTypes_Address:
            return "Address";
        case QuestionTypes_Rating:
            return "Rating";
        case QuestionTypes_Reviews:
            return "Reviews";
        case QuestionTypes_Price:
            return "Price";
        case QuestionTypes_Amenities:
            return "Amenities";
        case QuestionTypes_Cuisine:
            return "Cuisine";
        case QuestionTypes_Category:
            return "Category";
        case QuestionTypes_Products:
            return "Products";
        case QuestionTypes_Distance:
            return "Distance";
        default:
            assert(false);
            return NULL;
      }
  }

LocalSearchQuestionsSpecJSON::LocalSearchQuestionsSpecJSON(const LocalSearchQuestionsSpecJSON &)
  {
    assert(false);
  }

LocalSearchQuestionsSpecJSON &LocalSearchQuestionsSpecJSON::operator=(const LocalSearchQuestionsSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalSearchQuestionsSpecJSON::fromJSONQuestionTypes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field QuestionTypes of LocalSearchQuestionsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeQuestionTypes > vector_QuestionTypes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field QuestionTypes of LocalSearchQuestionsSpecJSON is not a string.");
        TypeQuestionTypes the_open_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'A':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'd':
                        if (strcmp(&(json_string->getData()[2]), "dress") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Address;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'm':
                        if (strcmp(&(json_string->getData()[2]), "enities") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Amenities;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'C':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[2]), "tegory") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Category;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'u':
                        if (strcmp(&(json_string->getData()[2]), "isine") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Cuisine;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'D':
                if (strcmp(&(json_string->getData()[1]), "istance") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = QuestionTypes_Distance;
                        goto open_enum_is_done;
                      }
                break;
            case 'F':
                if (strcmp(&(json_string->getData()[1]), "ax") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = QuestionTypes_Fax;
                        goto open_enum_is_done;
                      }
                break;
            case 'H':
                if (strcmp(&(json_string->getData()[1]), "oursOfOperation") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = QuestionTypes_HoursOfOperation;
                        goto open_enum_is_done;
                      }
                break;
            case 'I':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'n':
                        if (strcmp(&(json_string->getData()[2]), "formation") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Information;
                                goto open_enum_is_done;
                              }
                        break;
                    case 's':
                        if (strncmp(&(json_string->getData()[2]), "It", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[4]))
                              {
                                case 'C':
                                    if (strcmp(&(json_string->getData()[5]), "losed") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = QuestionTypes_IsItClosed;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'O':
                                    if (strcmp(&(json_string->getData()[5]), "pen") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = QuestionTypes_IsItOpen;
                                            goto open_enum_is_done;
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
            case 'N':
                if (strcmp(&(json_string->getData()[1]), "ame") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = QuestionTypes_Name;
                        goto open_enum_is_done;
                      }
                break;
            case 'P':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'h':
                        if (strcmp(&(json_string->getData()[2]), "one") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Phone;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'r':
                        switch ((unsigned char)(json_string->getData()[2]))
                          {
                            case 'i':
                                if (strcmp(&(json_string->getData()[3]), "ce") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = QuestionTypes_Price;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[3]), "ducts") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = QuestionTypes_Products;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[2]), "ting") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Rating;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'e':
                        if (strcmp(&(json_string->getData()[2]), "views") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = QuestionTypes_Reviews;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
        the_open_enum.in_known_list = false;
        the_open_enum.string_value = json_string->getData();
      open_enum_is_done:;
        vector_QuestionTypes1[num1] = the_open_enum;
      }
    initQuestionTypes();
    for (size_t num5 = 0; num5 < vector_QuestionTypes1.size(); ++num5)
        appendQuestionTypes(vector_QuestionTypes1[num5]);
    for (size_t num1 = 0; num1 < vector_QuestionTypes1.size(); ++num1)
      {
      }
  }

void LocalSearchQuestionsSpecJSON::fromJSONOpenHours(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OpenHoursSpecJSON *convert_classy = OpenHoursSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpenHours(convert_classy);
    convert_classy->remove_reference();
  }

void LocalSearchQuestionsSpecJSON::fromJSONProductsInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ProductsInclude of LocalSearchQuestionsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_ProductsInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ProductsInclude of LocalSearchQuestionsSpecJSON is not a string.");
        vector_ProductsInclude1[num1] = std::string(json_string->getData());
      }
    initProductsInclude();
    for (size_t num6 = 0; num6 < vector_ProductsInclude1.size(); ++num6)
        appendProductsInclude(vector_ProductsInclude1[num6]);
    for (size_t num1 = 0; num1 < vector_ProductsInclude1.size(); ++num1)
      {
      }
  }

void LocalSearchQuestionsSpecJSON::fromJSONAmenitiesInclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesInclude of LocalSearchQuestionsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesInclude1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesInclude1[num1] = convert_classy;
      }
    initAmenitiesInclude();
    for (size_t num7 = 0; num7 < vector_AmenitiesInclude1.size(); ++num7)
        appendAmenitiesInclude(vector_AmenitiesInclude1[num7]);
    for (size_t num1 = 0; num1 < vector_AmenitiesInclude1.size(); ++num1)
      {
        vector_AmenitiesInclude1[num1]->remove_reference();
      }
  }

void LocalSearchQuestionsSpecJSON::fromJSONAmenitiesIncludeSupported(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AmenitiesIncludeSupported of LocalSearchQuestionsSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< AmenityGroupSpecJSON * > vector_AmenitiesIncludeSupported1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmenityGroupSpecJSON *convert_classy = AmenityGroupSpecJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AmenitiesIncludeSupported1[num1] = convert_classy;
      }
    initAmenitiesIncludeSupported();
    for (size_t num8 = 0; num8 < vector_AmenitiesIncludeSupported1.size(); ++num8)
        appendAmenitiesIncludeSupported(vector_AmenitiesIncludeSupported1[num8]);
    for (size_t num1 = 0; num1 < vector_AmenitiesIncludeSupported1.size(); ++num1)
      {
        vector_AmenitiesIncludeSupported1[num1]->remove_reference();
      }
  }

LocalSearchQuestionsSpecJSON::LocalSearchQuestionsSpecJSON(void) :
        flagHasQuestionTypes(false),
        flagHasOpenHours(false),
        flagHasProductsInclude(false),
        flagHasAmenitiesInclude(false),
        flagHasAmenitiesIncludeSupported(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchQuestionsSpecJSON::~LocalSearchQuestionsSpecJSON(void)
  {
    if (flagHasOpenHours)
      {
        storeOpenHours->remove_reference();
      }
    if (flagHasAmenitiesInclude)
      {
        for (size_t num7 = 0; num7 < storeAmenitiesInclude.size(); ++num7)
          {
            storeAmenitiesInclude[num7]->remove_reference();
          }
      }
    if (flagHasAmenitiesIncludeSupported)
      {
        for (size_t num8 = 0; num8 < storeAmenitiesIncludeSupported.size(); ++num8)
          {
            storeAmenitiesIncludeSupported[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalSearchQuestionsSpecJSON::hasQuestionTypes(void) const
  {
    return flagHasQuestionTypes;
  }

size_t LocalSearchQuestionsSpecJSON::countOfQuestionTypes(void) const
  {
    assert(flagHasQuestionTypes);
    return storeQuestionTypes.size();
  }

LocalSearchQuestionsSpecJSON::TypeQuestionTypes LocalSearchQuestionsSpecJSON::elementOfQuestionTypes(size_t element_num)
  {
    assert(flagHasQuestionTypes);
    return storeQuestionTypes[element_num];
  }

const LocalSearchQuestionsSpecJSON::TypeQuestionTypes LocalSearchQuestionsSpecJSON::elementOfQuestionTypes(size_t element_num) const
  {
    assert(flagHasQuestionTypes);
    return storeQuestionTypes[element_num];
  }

std::vector< LocalSearchQuestionsSpecJSON::TypeQuestionTypes > LocalSearchQuestionsSpecJSON::getQuestionTypes(void)
  {
    assert(flagHasQuestionTypes);
    return storeQuestionTypes;
  }

const std::vector< LocalSearchQuestionsSpecJSON::TypeQuestionTypes > LocalSearchQuestionsSpecJSON::getQuestionTypes(void) const
  {
    assert(flagHasQuestionTypes);
    return storeQuestionTypes;
  }

bool LocalSearchQuestionsSpecJSON::hasOpenHours(void) const
  {
    return flagHasOpenHours;
  }

OpenHoursSpecJSON * LocalSearchQuestionsSpecJSON::getOpenHours(void)
  {
    assert(flagHasOpenHours);
    return storeOpenHours;
  }

const OpenHoursSpecJSON * LocalSearchQuestionsSpecJSON::getOpenHours(void) const
  {
    assert(flagHasOpenHours);
    return storeOpenHours;
  }

bool LocalSearchQuestionsSpecJSON::hasProductsInclude(void) const
  {
    return flagHasProductsInclude;
  }

size_t LocalSearchQuestionsSpecJSON::countOfProductsInclude(void) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude.size();
  }

std::string LocalSearchQuestionsSpecJSON::elementOfProductsInclude(size_t element_num)
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude[element_num];
  }

const std::string LocalSearchQuestionsSpecJSON::elementOfProductsInclude(size_t element_num) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude[element_num];
  }

std::vector< std::string > LocalSearchQuestionsSpecJSON::getProductsInclude(void)
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude;
  }

const std::vector< std::string > LocalSearchQuestionsSpecJSON::getProductsInclude(void) const
  {
    assert(flagHasProductsInclude);
    return storeProductsInclude;
  }

bool LocalSearchQuestionsSpecJSON::hasAmenitiesInclude(void) const
  {
    return flagHasAmenitiesInclude;
  }

size_t LocalSearchQuestionsSpecJSON::countOfAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude.size();
  }

AmenityGroupSpecJSON * LocalSearchQuestionsSpecJSON::elementOfAmenitiesInclude(size_t element_num)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchQuestionsSpecJSON::elementOfAmenitiesInclude(size_t element_num) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchQuestionsSpecJSON::getAmenitiesInclude(void)
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchQuestionsSpecJSON::getAmenitiesInclude(void) const
  {
    assert(flagHasAmenitiesInclude);
    return storeAmenitiesInclude;
  }

bool LocalSearchQuestionsSpecJSON::hasAmenitiesIncludeSupported(void) const
  {
    return flagHasAmenitiesIncludeSupported;
  }

size_t LocalSearchQuestionsSpecJSON::countOfAmenitiesIncludeSupported(void) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported.size();
  }

AmenityGroupSpecJSON * LocalSearchQuestionsSpecJSON::elementOfAmenitiesIncludeSupported(size_t element_num)
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported[element_num];
  }

const AmenityGroupSpecJSON * LocalSearchQuestionsSpecJSON::elementOfAmenitiesIncludeSupported(size_t element_num) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported[element_num];
  }

std::vector< AmenityGroupSpecJSON * > LocalSearchQuestionsSpecJSON::getAmenitiesIncludeSupported(void)
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported;
  }

const std::vector< AmenityGroupSpecJSON * > LocalSearchQuestionsSpecJSON::getAmenitiesIncludeSupported(void) const
  {
    assert(flagHasAmenitiesIncludeSupported);
    return storeAmenitiesIncludeSupported;
  }

LocalSearchQuestionsSpecJSON *LocalSearchQuestionsSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchQuestionsSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchQuestionsSpecJSON>, LocalSearchQuestionsSpecJSON *, bool> generator("Type LocalSearchQuestionsSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
