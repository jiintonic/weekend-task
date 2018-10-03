/* file "SportsPlayerImageJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerImageJSON.h"

#include "SportsPlayerImageJSON.h"


SportsPlayerImageJSON::SportsPlayerImageJSON(const SportsPlayerImageJSON &)
  {
    assert(false);
  }

SportsPlayerImageJSON &SportsPlayerImageJSON::operator=(const SportsPlayerImageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerImageJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of SportsPlayerImageJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void SportsPlayerImageJSON::fromJSONWidth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Width of SportsPlayerImageJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Width of SportsPlayerImageJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWidth(extracted_integer);
  }

void SportsPlayerImageJSON::fromJSONHeight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Height of SportsPlayerImageJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Height of SportsPlayerImageJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHeight(extracted_integer);
  }

void SportsPlayerImageJSON::fromJSONIsPlaceholderImage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsPlaceholderImage of SportsPlayerImageJSON is not true for false.");
          }
      }
    setIsPlaceholderImage(the_bool);
  }

SportsPlayerImageJSON::SportsPlayerImageJSON(void) :
        flagHasURL(false),
        flagHasWidth(false),
        flagHasHeight(false),
        flagHasIsPlaceholderImage(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayerImageJSON::~SportsPlayerImageJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayerImageJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string SportsPlayerImageJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string SportsPlayerImageJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool SportsPlayerImageJSON::hasWidth(void) const
  {
    return flagHasWidth;
  }

OInteger SportsPlayerImageJSON::getWidth(void)
  {
    assert(flagHasWidth);
    return storeWidth;
  }

const OInteger SportsPlayerImageJSON::getWidth(void) const
  {
    assert(flagHasWidth);
    return storeWidth;
  }

bool SportsPlayerImageJSON::hasHeight(void) const
  {
    return flagHasHeight;
  }

OInteger SportsPlayerImageJSON::getHeight(void)
  {
    assert(flagHasHeight);
    return storeHeight;
  }

const OInteger SportsPlayerImageJSON::getHeight(void) const
  {
    assert(flagHasHeight);
    return storeHeight;
  }

bool SportsPlayerImageJSON::hasIsPlaceholderImage(void) const
  {
    return flagHasIsPlaceholderImage;
  }

bool SportsPlayerImageJSON::getIsPlaceholderImage(void)
  {
    assert(flagHasIsPlaceholderImage);
    return storeIsPlaceholderImage;
  }

const bool SportsPlayerImageJSON::getIsPlaceholderImage(void) const
  {
    assert(flagHasIsPlaceholderImage);
    return storeIsPlaceholderImage;
  }

char SportsPlayerImageJSON::Generator::lowerBoundWidth[] = "1";
char SportsPlayerImageJSON::Generator::lowerBoundHeight[] = "1";
SportsPlayerImageJSON *SportsPlayerImageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerImageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerImageJSON>, SportsPlayerImageJSON *, bool> generator("Type SportsPlayerImage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
