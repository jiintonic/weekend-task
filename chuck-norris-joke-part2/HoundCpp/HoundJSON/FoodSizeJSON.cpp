/* file "FoodSizeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FoodSizeJSON.h"

#include "FoodSizeJSON.h"


FoodSizeJSON::FoodSizeJSON(const FoodSizeJSON &)
  {
    assert(false);
  }

FoodSizeJSON &FoodSizeJSON::operator=(const FoodSizeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FoodSizeJSON::fromJSONWrittenSing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenSing of FoodSizeJSON is not a string.");
    setWrittenSing(std::string(json_string->getData()));
  }

void FoodSizeJSON::fromJSONWrittenPlur(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenPlur of FoodSizeJSON is not a string.");
    setWrittenPlur(std::string(json_string->getData()));
  }

void FoodSizeJSON::fromJSONSpokenSizeAndFoodSing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSizeAndFoodSing of FoodSizeJSON is not a string.");
    setSpokenSizeAndFoodSing(std::string(json_string->getData()));
  }

void FoodSizeJSON::fromJSONSpokenSizeAndFoodPlur(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSizeAndFoodPlur of FoodSizeJSON is not a string.");
    setSpokenSizeAndFoodPlur(std::string(json_string->getData()));
  }

void FoodSizeJSON::fromJSONGrams(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Grams of FoodSizeJSON is not a number.");
          }
      }
    setGramsText(the_rational_text);
  }

FoodSizeJSON::FoodSizeJSON(void) :
        flagHasWrittenSing(false),
        flagHasWrittenPlur(false),
        flagHasSpokenSizeAndFoodSing(false),
        flagHasSpokenSizeAndFoodPlur(false),
        flagHasGrams(false)
  {
  }

FoodSizeJSON::~FoodSizeJSON(void)
  {
  }

bool FoodSizeJSON::hasWrittenSing(void) const
  {
    return flagHasWrittenSing;
  }

std::string FoodSizeJSON::getWrittenSing(void)
  {
    assert(flagHasWrittenSing);
    return storeWrittenSing;
  }

const std::string FoodSizeJSON::getWrittenSing(void) const
  {
    assert(flagHasWrittenSing);
    return storeWrittenSing;
  }

bool FoodSizeJSON::hasWrittenPlur(void) const
  {
    return flagHasWrittenPlur;
  }

std::string FoodSizeJSON::getWrittenPlur(void)
  {
    assert(flagHasWrittenPlur);
    return storeWrittenPlur;
  }

const std::string FoodSizeJSON::getWrittenPlur(void) const
  {
    assert(flagHasWrittenPlur);
    return storeWrittenPlur;
  }

bool FoodSizeJSON::hasSpokenSizeAndFoodSing(void) const
  {
    return flagHasSpokenSizeAndFoodSing;
  }

std::string FoodSizeJSON::getSpokenSizeAndFoodSing(void)
  {
    assert(flagHasSpokenSizeAndFoodSing);
    return storeSpokenSizeAndFoodSing;
  }

const std::string FoodSizeJSON::getSpokenSizeAndFoodSing(void) const
  {
    assert(flagHasSpokenSizeAndFoodSing);
    return storeSpokenSizeAndFoodSing;
  }

bool FoodSizeJSON::hasSpokenSizeAndFoodPlur(void) const
  {
    return flagHasSpokenSizeAndFoodPlur;
  }

std::string FoodSizeJSON::getSpokenSizeAndFoodPlur(void)
  {
    assert(flagHasSpokenSizeAndFoodPlur);
    return storeSpokenSizeAndFoodPlur;
  }

const std::string FoodSizeJSON::getSpokenSizeAndFoodPlur(void) const
  {
    assert(flagHasSpokenSizeAndFoodPlur);
    return storeSpokenSizeAndFoodPlur;
  }

bool FoodSizeJSON::hasGrams(void) const
  {
    return flagHasGrams;
  }

double FoodSizeJSON::getGrams(void)
  {
    assert(flagHasGrams);
    if (textStoreGrams != "")
      {
        return atof(textStoreGrams.c_str());
      }
    return storeGrams;
  }

const double FoodSizeJSON::getGrams(void) const
  {
    assert(flagHasGrams);
    if (textStoreGrams != "")
      {
        return atof(textStoreGrams.c_str());
      }
    return storeGrams;
  }

std::string FoodSizeJSON::getGramsAsText(void) const
  {
    assert(flagHasGrams);
    if (textStoreGrams == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeGrams);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreGrams);
      }
  }

FoodSizeJSON *FoodSizeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FoodSizeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FoodSizeJSON>, FoodSizeJSON *, bool> generator("Type FoodSize", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
