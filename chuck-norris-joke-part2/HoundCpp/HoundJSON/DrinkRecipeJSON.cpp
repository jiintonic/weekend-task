/* file "DrinkRecipeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DrinkRecipeJSON.h"

#include "DrinkRecipeJSON.h"


DrinkRecipeJSON::TypeTags::TypeTags(void)
  {
  }

DrinkRecipeJSON::TypeTags::TypeTags(const TypeTags &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DrinkRecipeJSON::TypeTags::TypeTags(TypeTagsKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DrinkRecipeJSON::TypeTags::operator==(const TypeTags &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DrinkRecipeJSON::TypeTags::operator!=(const TypeTags &other) const
  {
    return !(operator==(other));
  }

bool DrinkRecipeJSON::TypeTags::operator<(const TypeTags &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DrinkRecipeJSON::TypeTags::operator>(const TypeTags &other) const
  {
    return other.operator<(*this);
  }

bool DrinkRecipeJSON::TypeTags::operator>=(const TypeTags &other) const
  {
    return !(operator<(other));
  }

bool DrinkRecipeJSON::TypeTags::operator<=(const TypeTags &other) const
  {
    return !(other.operator<(*this));
  }

DrinkRecipeJSON::TypeTagsKnownValues DrinkRecipeJSON::stringToTags(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'b':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "tter") == 0)
                        return Tags_bitter;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "ue") == 0)
                        return Tags_blue;
                    break;
                default:
                    break;
              }
            break;
        case 'e':
            if (strcmp(&(chars[1]), "asy") == 0)
                return Tags_easy;
            break;
        case 'f':
            if (strcmp(&(chars[1]), "ruity") == 0)
                return Tags_fruity;
            break;
        case 'g':
            if (strcmp(&(chars[1]), "reen") == 0)
                return Tags_green;
            break;
        case 'r':
            if (strcmp(&(chars[1]), "ed") == 0)
                return Tags_red;
            break;
        case 's':
            switch ((unsigned char)(chars[1]))
              {
                case 't':
                    if (strcmp(&(chars[2]), "rong") == 0)
                        return Tags_strong;
                    break;
                case 'w':
                    if (strcmp(&(chars[2]), "eet") == 0)
                        return Tags_sweet;
                    break;
                default:
                    break;
              }
            break;
        case 'w':
            if (strcmp(&(chars[1]), "eak") == 0)
                return Tags_weak;
            break;
        default:
            break;
      }
    return Tags__none;
  }

const char *DrinkRecipeJSON::stringFromTags(TypeTagsKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Tags_fruity:
            return "fruity";
        case Tags_strong:
            return "strong";
        case Tags_weak:
            return "weak";
        case Tags_bitter:
            return "bitter";
        case Tags_sweet:
            return "sweet";
        case Tags_easy:
            return "easy";
        case Tags_blue:
            return "blue";
        case Tags_green:
            return "green";
        case Tags_red:
            return "red";
        default:
            assert(false);
            return NULL;
      }
  }

DrinkRecipeJSON::DrinkRecipeJSON(const DrinkRecipeJSON &)
  {
    assert(false);
  }

DrinkRecipeJSON &DrinkRecipeJSON::operator=(const DrinkRecipeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DrinkRecipeJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of DrinkRecipeJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void DrinkRecipeJSON::fromJSONGlass(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Glass of DrinkRecipeJSON is not a string.");
    setGlass(std::string(json_string->getData()));
  }

void DrinkRecipeJSON::fromJSONImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Image of DrinkRecipeJSON is not a string.");
    setImage(std::string(json_string->getData()));
  }

void DrinkRecipeJSON::fromJSONTags(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tags of DrinkRecipeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeTags > vector_Tags1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Tags of DrinkRecipeJSON is not a string.");
        TypeTags the_open_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'b':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'i':
                        if (strcmp(&(json_string->getData()[2]), "tter") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tags_bitter;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'l':
                        if (strcmp(&(json_string->getData()[2]), "ue") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tags_blue;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'e':
                if (strcmp(&(json_string->getData()[1]), "asy") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Tags_easy;
                        goto open_enum_is_done;
                      }
                break;
            case 'f':
                if (strcmp(&(json_string->getData()[1]), "ruity") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Tags_fruity;
                        goto open_enum_is_done;
                      }
                break;
            case 'g':
                if (strcmp(&(json_string->getData()[1]), "reen") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Tags_green;
                        goto open_enum_is_done;
                      }
                break;
            case 'r':
                if (strcmp(&(json_string->getData()[1]), "ed") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Tags_red;
                        goto open_enum_is_done;
                      }
                break;
            case 's':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 't':
                        if (strcmp(&(json_string->getData()[2]), "rong") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tags_strong;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'w':
                        if (strcmp(&(json_string->getData()[2]), "eet") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Tags_sweet;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'w':
                if (strcmp(&(json_string->getData()[1]), "eak") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = Tags_weak;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
        the_open_enum.in_known_list = false;
        the_open_enum.string_value = json_string->getData();
      open_enum_is_done:;
        vector_Tags1[num1] = the_open_enum;
      }
    initTags();
    for (size_t num3 = 0; num3 < vector_Tags1.size(); ++num3)
        appendTags(vector_Tags1[num3]);
    for (size_t num1 = 0; num1 < vector_Tags1.size(); ++num1)
      {
      }
  }

void DrinkRecipeJSON::fromJSONIngredients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ingredients of DrinkRecipeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< DrinkIngredientJSON * > vector_Ingredients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DrinkIngredientJSON *convert_classy = DrinkIngredientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Ingredients1[num1] = convert_classy;
      }
    initIngredients();
    for (size_t num4 = 0; num4 < vector_Ingredients1.size(); ++num4)
        appendIngredients(vector_Ingredients1[num4]);
    for (size_t num1 = 0; num1 < vector_Ingredients1.size(); ++num1)
      {
        vector_Ingredients1[num1]->remove_reference();
      }
  }

DrinkRecipeJSON::DrinkRecipeJSON(void) :
        flagHasName(false),
        flagHasGlass(false),
        flagHasImage(false),
        flagHasTags(false),
        flagHasIngredients(false)
  {
    extraIndex = create_string_index();
  }

DrinkRecipeJSON::~DrinkRecipeJSON(void)
  {
    if (flagHasIngredients)
      {
        for (size_t num4 = 0; num4 < storeIngredients.size(); ++num4)
          {
            storeIngredients[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DrinkRecipeJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string DrinkRecipeJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string DrinkRecipeJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool DrinkRecipeJSON::hasGlass(void) const
  {
    return flagHasGlass;
  }

std::string DrinkRecipeJSON::getGlass(void)
  {
    assert(flagHasGlass);
    return storeGlass;
  }

const std::string DrinkRecipeJSON::getGlass(void) const
  {
    assert(flagHasGlass);
    return storeGlass;
  }

bool DrinkRecipeJSON::hasImage(void) const
  {
    return flagHasImage;
  }

std::string DrinkRecipeJSON::getImage(void)
  {
    assert(flagHasImage);
    return storeImage;
  }

const std::string DrinkRecipeJSON::getImage(void) const
  {
    assert(flagHasImage);
    return storeImage;
  }

bool DrinkRecipeJSON::hasTags(void) const
  {
    return flagHasTags;
  }

size_t DrinkRecipeJSON::countOfTags(void) const
  {
    assert(flagHasTags);
    return storeTags.size();
  }

DrinkRecipeJSON::TypeTags DrinkRecipeJSON::elementOfTags(size_t element_num)
  {
    assert(flagHasTags);
    return storeTags[element_num];
  }

const DrinkRecipeJSON::TypeTags DrinkRecipeJSON::elementOfTags(size_t element_num) const
  {
    assert(flagHasTags);
    return storeTags[element_num];
  }

std::vector< DrinkRecipeJSON::TypeTags > DrinkRecipeJSON::getTags(void)
  {
    assert(flagHasTags);
    return storeTags;
  }

const std::vector< DrinkRecipeJSON::TypeTags > DrinkRecipeJSON::getTags(void) const
  {
    assert(flagHasTags);
    return storeTags;
  }

bool DrinkRecipeJSON::hasIngredients(void) const
  {
    return flagHasIngredients;
  }

size_t DrinkRecipeJSON::countOfIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients.size();
  }

DrinkIngredientJSON * DrinkRecipeJSON::elementOfIngredients(size_t element_num)
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

const DrinkIngredientJSON * DrinkRecipeJSON::elementOfIngredients(size_t element_num) const
  {
    assert(flagHasIngredients);
    return storeIngredients[element_num];
  }

std::vector< DrinkIngredientJSON * > DrinkRecipeJSON::getIngredients(void)
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

const std::vector< DrinkIngredientJSON * > DrinkRecipeJSON::getIngredients(void) const
  {
    assert(flagHasIngredients);
    return storeIngredients;
  }

DrinkRecipeJSON *DrinkRecipeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DrinkRecipeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DrinkRecipeJSON>, DrinkRecipeJSON *, bool> generator("Type DrinkRecipe", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
