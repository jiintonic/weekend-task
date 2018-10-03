/* file "SportsTeamLogoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamLogoJSON.h"

#include "SportsTeamLogoJSON.h"


SportsTeamLogoJSON::SportsTeamLogoJSON(const SportsTeamLogoJSON &)
  {
    assert(false);
  }

SportsTeamLogoJSON &SportsTeamLogoJSON::operator=(const SportsTeamLogoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamLogoJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of SportsTeamLogoJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void SportsTeamLogoJSON::fromJSONWidth(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Width of SportsTeamLogoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Width of SportsTeamLogoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setWidth(extracted_integer);
  }

void SportsTeamLogoJSON::fromJSONHeight(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Height of SportsTeamLogoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Height of SportsTeamLogoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setHeight(extracted_integer);
  }

SportsTeamLogoJSON::SportsTeamLogoJSON(void) :
        flagHasURL(false),
        flagHasWidth(false),
        flagHasHeight(false)
  {
    extraIndex = create_string_index();
  }

SportsTeamLogoJSON::~SportsTeamLogoJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsTeamLogoJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string SportsTeamLogoJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string SportsTeamLogoJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool SportsTeamLogoJSON::hasWidth(void) const
  {
    return flagHasWidth;
  }

OInteger SportsTeamLogoJSON::getWidth(void)
  {
    assert(flagHasWidth);
    return storeWidth;
  }

const OInteger SportsTeamLogoJSON::getWidth(void) const
  {
    assert(flagHasWidth);
    return storeWidth;
  }

bool SportsTeamLogoJSON::hasHeight(void) const
  {
    return flagHasHeight;
  }

OInteger SportsTeamLogoJSON::getHeight(void)
  {
    assert(flagHasHeight);
    return storeHeight;
  }

const OInteger SportsTeamLogoJSON::getHeight(void) const
  {
    assert(flagHasHeight);
    return storeHeight;
  }

char SportsTeamLogoJSON::Generator::lowerBoundWidth[] = "1";
char SportsTeamLogoJSON::Generator::lowerBoundHeight[] = "1";
SportsTeamLogoJSON *SportsTeamLogoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamLogoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamLogoJSON>, SportsTeamLogoJSON *, bool> generator("Type SportsTeamLogo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
