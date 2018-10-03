/* file "FoodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FoodJSON.h"

#include "FoodJSON.h"


FoodJSON::FoodJSON(const FoodJSON &)
  {
    assert(false);
  }

FoodJSON &FoodJSON::operator=(const FoodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FoodJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ID of FoodJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ID of FoodJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setID(extracted_integer);
  }

void FoodJSON::fromJSONQuantity(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Quantity of FoodJSON is not a number.");
          }
      }
    setQuantityText(the_rational_text);
  }

void FoodJSON::fromJSONNDB_No(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NDB_No of FoodJSON is not a string.");
    setNDB_No(std::string(json_string->getData()));
  }

void FoodJSON::fromJSONSizeIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SizeIndex of FoodJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SizeIndex of FoodJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSizeIndex(extracted_integer);
  }

void FoodJSON::fromJSONNameIncludesUnits(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NameIncludesUnits of FoodJSON is not true for false.");
          }
      }
    setNameIncludesUnits(the_bool);
  }

void FoodJSON::fromJSONExclude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Exclude of FoodJSON is not true for false.");
          }
      }
    setExclude(the_bool);
  }

void FoodJSON::fromJSONSpokenNoSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenNoSize of FoodJSON is not a string.");
    setSpokenNoSize(std::string(json_string->getData()));
  }

void FoodJSON::fromJSONWrittenNoSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenNoSize of FoodJSON is not a string.");
    setWrittenNoSize(std::string(json_string->getData()));
  }

void FoodJSON::fromJSONWikiUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WikiUrl of FoodJSON is not a string.");
    setWikiUrl(std::string(json_string->getData()));
  }

void FoodJSON::fromJSONImageUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageUrl of FoodJSON is not a string.");
    setImageUrl(std::string(json_string->getData()));
  }

void FoodJSON::fromJSONAllSizes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AllSizes of FoodJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FoodSizeJSON * > vector_AllSizes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FoodSizeJSON *convert_classy = FoodSizeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AllSizes1[num1] = convert_classy;
      }
    initAllSizes();
    for (size_t num3 = 0; num3 < vector_AllSizes1.size(); ++num3)
        appendAllSizes(vector_AllSizes1[num3]);
    for (size_t num1 = 0; num1 < vector_AllSizes1.size(); ++num1)
      {
        vector_AllSizes1[num1]->remove_reference();
      }
  }

void FoodJSON::fromJSONNutrients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Nutrients of FoodJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< NutrientJSON * > vector_Nutrients1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        NutrientJSON *convert_classy = NutrientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Nutrients1[num1] = convert_classy;
      }
    initNutrients();
    for (size_t num4 = 0; num4 < vector_Nutrients1.size(); ++num4)
        appendNutrients(vector_Nutrients1[num4]);
    for (size_t num1 = 0; num1 < vector_Nutrients1.size(); ++num1)
      {
        vector_Nutrients1[num1]->remove_reference();
      }
  }

void FoodJSON::fromJSONNutrientNameToID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field NutrientNameToID of FoodJSON is not an object.");
    json_value->object_value()->add_reference();
    setNutrientNameToID(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

FoodJSON::FoodJSON(void) :
        flagHasID(false),
        flagHasQuantity(false),
        flagHasNDB_No(false),
        flagHasSizeIndex(false),
        flagHasNameIncludesUnits(false),
        flagHasExclude(false),
        flagHasSpokenNoSize(false),
        flagHasWrittenNoSize(false),
        flagHasWikiUrl(false),
        flagHasImageUrl(false),
        flagHasAllSizes(false),
        flagHasNutrients(false),
        flagHasNutrientNameToID(false)
  {
  }

FoodJSON::~FoodJSON(void)
  {
    if (flagHasAllSizes)
      {
        for (size_t num7 = 0; num7 < storeAllSizes.size(); ++num7)
          {
            storeAllSizes[num7]->remove_reference();
          }
      }
    if (flagHasNutrients)
      {
        for (size_t num8 = 0; num8 < storeNutrients.size(); ++num8)
          {
            storeNutrients[num8]->remove_reference();
          }
      }
    if (flagHasNutrientNameToID)
      {
        storeNutrientNameToID->remove_reference();
      }
  }

bool FoodJSON::hasID(void) const
  {
    return flagHasID;
  }

OInteger FoodJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const OInteger FoodJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool FoodJSON::hasQuantity(void) const
  {
    return flagHasQuantity;
  }

double FoodJSON::getQuantity(void)
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

const double FoodJSON::getQuantity(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

std::string FoodJSON::getQuantityAsText(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeQuantity);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreQuantity);
      }
  }

bool FoodJSON::hasNDB_No(void) const
  {
    return flagHasNDB_No;
  }

std::string FoodJSON::getNDB_No(void)
  {
    assert(flagHasNDB_No);
    return storeNDB_No;
  }

const std::string FoodJSON::getNDB_No(void) const
  {
    assert(flagHasNDB_No);
    return storeNDB_No;
  }

bool FoodJSON::hasSizeIndex(void) const
  {
    return flagHasSizeIndex;
  }

OInteger FoodJSON::getSizeIndex(void)
  {
    assert(flagHasSizeIndex);
    return storeSizeIndex;
  }

const OInteger FoodJSON::getSizeIndex(void) const
  {
    assert(flagHasSizeIndex);
    return storeSizeIndex;
  }

bool FoodJSON::hasNameIncludesUnits(void) const
  {
    return flagHasNameIncludesUnits;
  }

bool FoodJSON::getNameIncludesUnits(void)
  {
    assert(flagHasNameIncludesUnits);
    return storeNameIncludesUnits;
  }

const bool FoodJSON::getNameIncludesUnits(void) const
  {
    assert(flagHasNameIncludesUnits);
    return storeNameIncludesUnits;
  }

bool FoodJSON::hasExclude(void) const
  {
    return flagHasExclude;
  }

bool FoodJSON::getExclude(void)
  {
    assert(flagHasExclude);
    return storeExclude;
  }

const bool FoodJSON::getExclude(void) const
  {
    assert(flagHasExclude);
    return storeExclude;
  }

bool FoodJSON::hasSpokenNoSize(void) const
  {
    return flagHasSpokenNoSize;
  }

std::string FoodJSON::getSpokenNoSize(void)
  {
    assert(flagHasSpokenNoSize);
    return storeSpokenNoSize;
  }

const std::string FoodJSON::getSpokenNoSize(void) const
  {
    assert(flagHasSpokenNoSize);
    return storeSpokenNoSize;
  }

bool FoodJSON::hasWrittenNoSize(void) const
  {
    return flagHasWrittenNoSize;
  }

std::string FoodJSON::getWrittenNoSize(void)
  {
    assert(flagHasWrittenNoSize);
    return storeWrittenNoSize;
  }

const std::string FoodJSON::getWrittenNoSize(void) const
  {
    assert(flagHasWrittenNoSize);
    return storeWrittenNoSize;
  }

bool FoodJSON::hasWikiUrl(void) const
  {
    return flagHasWikiUrl;
  }

std::string FoodJSON::getWikiUrl(void)
  {
    assert(flagHasWikiUrl);
    return storeWikiUrl;
  }

const std::string FoodJSON::getWikiUrl(void) const
  {
    assert(flagHasWikiUrl);
    return storeWikiUrl;
  }

bool FoodJSON::hasImageUrl(void) const
  {
    return flagHasImageUrl;
  }

std::string FoodJSON::getImageUrl(void)
  {
    assert(flagHasImageUrl);
    return storeImageUrl;
  }

const std::string FoodJSON::getImageUrl(void) const
  {
    assert(flagHasImageUrl);
    return storeImageUrl;
  }

bool FoodJSON::hasAllSizes(void) const
  {
    return flagHasAllSizes;
  }

size_t FoodJSON::countOfAllSizes(void) const
  {
    assert(flagHasAllSizes);
    return storeAllSizes.size();
  }

FoodSizeJSON * FoodJSON::elementOfAllSizes(size_t element_num)
  {
    assert(flagHasAllSizes);
    return storeAllSizes[element_num];
  }

const FoodSizeJSON * FoodJSON::elementOfAllSizes(size_t element_num) const
  {
    assert(flagHasAllSizes);
    return storeAllSizes[element_num];
  }

std::vector< FoodSizeJSON * > FoodJSON::getAllSizes(void)
  {
    assert(flagHasAllSizes);
    return storeAllSizes;
  }

const std::vector< FoodSizeJSON * > FoodJSON::getAllSizes(void) const
  {
    assert(flagHasAllSizes);
    return storeAllSizes;
  }

bool FoodJSON::hasNutrients(void) const
  {
    return flagHasNutrients;
  }

size_t FoodJSON::countOfNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients.size();
  }

NutrientJSON * FoodJSON::elementOfNutrients(size_t element_num)
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

const NutrientJSON * FoodJSON::elementOfNutrients(size_t element_num) const
  {
    assert(flagHasNutrients);
    return storeNutrients[element_num];
  }

std::vector< NutrientJSON * > FoodJSON::getNutrients(void)
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

const std::vector< NutrientJSON * > FoodJSON::getNutrients(void) const
  {
    assert(flagHasNutrients);
    return storeNutrients;
  }

bool FoodJSON::hasNutrientNameToID(void) const
  {
    return flagHasNutrientNameToID;
  }

JSONObjectValue * FoodJSON::getNutrientNameToID(void)
  {
    assert(flagHasNutrientNameToID);
    return storeNutrientNameToID;
  }

const JSONObjectValue * FoodJSON::getNutrientNameToID(void) const
  {
    assert(flagHasNutrientNameToID);
    return storeNutrientNameToID;
  }

char FoodJSON::Generator::lowerBoundID[] = "-1";
char FoodJSON::Generator::lowerBoundSizeIndex[] = "-1";
FoodJSON *FoodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FoodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FoodJSON>, FoodJSON *, bool> generator("Type Food", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
