/* file "SportsSportImageJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSportImageJSON.h"

#include "SportsSportImageJSON.h"


SportsSportImageJSON::SportsSportImageJSON(const SportsSportImageJSON &)
  {
    assert(false);
  }

SportsSportImageJSON &SportsSportImageJSON::operator=(const SportsSportImageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSportImageJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of SportsSportImageJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void SportsSportImageJSON::fromJSONWidth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Width of SportsSportImageJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Width of SportsSportImageJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWidth(extracted_integer);
  }

void SportsSportImageJSON::fromJSONHeight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Height of SportsSportImageJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Height of SportsSportImageJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHeight(extracted_integer);
  }

SportsSportImageJSON::SportsSportImageJSON(void) :
        flagHasURL(false),
        flagHasWidth(false),
        flagHasHeight(false)
  {
    extraIndex = create_string_index();
  }

SportsSportImageJSON::~SportsSportImageJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsSportImageJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string SportsSportImageJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string SportsSportImageJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool SportsSportImageJSON::hasWidth(void) const
  {
    return flagHasWidth;
  }

OInteger SportsSportImageJSON::getWidth(void)
  {
    assert(flagHasWidth);
    return storeWidth;
  }

const OInteger SportsSportImageJSON::getWidth(void) const
  {
    assert(flagHasWidth);
    return storeWidth;
  }

bool SportsSportImageJSON::hasHeight(void) const
  {
    return flagHasHeight;
  }

OInteger SportsSportImageJSON::getHeight(void)
  {
    assert(flagHasHeight);
    return storeHeight;
  }

const OInteger SportsSportImageJSON::getHeight(void) const
  {
    assert(flagHasHeight);
    return storeHeight;
  }

char SportsSportImageJSON::Generator::lowerBoundWidth[] = "1";
char SportsSportImageJSON::Generator::lowerBoundHeight[] = "1";
SportsSportImageJSON *SportsSportImageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSportImageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSportImageJSON>, SportsSportImageJSON *, bool> generator("Type SportsSportImage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
