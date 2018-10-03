/* file "UberDriverJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberDriverJSON.h"

#include "UberDriverJSON.h"


UberDriverJSON::UberDriverJSON(const UberDriverJSON &)
  {
    assert(false);
  }

UberDriverJSON &UberDriverJSON::operator=(const UberDriverJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberDriverJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of UberDriverJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void UberDriverJSON::fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PhoneNumber of UberDriverJSON is not a string.");
    setPhoneNumber(std::string(json_string->getData()));
  }

void UberDriverJSON::fromJSONRating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Rating of UberDriverJSON is not a number.");
          }
      }
    setRatingText(the_rational_text);
  }

void UberDriverJSON::fromJSONPictureUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PictureUrl of UberDriverJSON is not a string.");
    setPictureUrl(std::string(json_string->getData()));
  }

UberDriverJSON::UberDriverJSON(void) :
        flagHasName(false),
        flagHasPhoneNumber(false),
        flagHasRating(false),
        flagHasPictureUrl(false)
  {
    extraIndex = create_string_index();
  }

UberDriverJSON::~UberDriverJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberDriverJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string UberDriverJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string UberDriverJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool UberDriverJSON::hasPhoneNumber(void) const
  {
    return flagHasPhoneNumber;
  }

std::string UberDriverJSON::getPhoneNumber(void)
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

const std::string UberDriverJSON::getPhoneNumber(void) const
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

bool UberDriverJSON::hasRating(void) const
  {
    return flagHasRating;
  }

double UberDriverJSON::getRating(void)
  {
    assert(flagHasRating);
    if (textStoreRating != "")
      {
        return atof(textStoreRating.c_str());
      }
    return storeRating;
  }

const double UberDriverJSON::getRating(void) const
  {
    assert(flagHasRating);
    if (textStoreRating != "")
      {
        return atof(textStoreRating.c_str());
      }
    return storeRating;
  }

std::string UberDriverJSON::getRatingAsText(void) const
  {
    assert(flagHasRating);
    if (textStoreRating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRating);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRating);
      }
  }

bool UberDriverJSON::hasPictureUrl(void) const
  {
    return flagHasPictureUrl;
  }

std::string UberDriverJSON::getPictureUrl(void)
  {
    assert(flagHasPictureUrl);
    return storePictureUrl;
  }

const std::string UberDriverJSON::getPictureUrl(void) const
  {
    assert(flagHasPictureUrl);
    return storePictureUrl;
  }

UberDriverJSON *UberDriverJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberDriverJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberDriverJSON>, UberDriverJSON *, bool> generator("Type UberDriver", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
