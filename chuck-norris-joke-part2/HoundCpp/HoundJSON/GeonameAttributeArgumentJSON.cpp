/* file "GeonameAttributeArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameAttributeArgumentJSON.h"

#include "GeonameAttributeArgumentJSON.h"


GeonameAttributeArgumentJSON::GeonameAttributeArgumentJSON(const GeonameAttributeArgumentJSON &)
  {
    assert(false);
  }

GeonameAttributeArgumentJSON &GeonameAttributeArgumentJSON::operator=(const GeonameAttributeArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameAttributeArgumentJSON::fromJSONAreaUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AreaUnit of GeonameAttributeArgumentJSON is not a string.");
    setAreaUnit(std::string(json_string->getData()));
  }

void GeonameAttributeArgumentJSON::fromJSONIsOfficial(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsOfficial of GeonameAttributeArgumentJSON is not true for false.");
          }
      }
    setIsOfficial(the_bool);
  }

void GeonameAttributeArgumentJSON::fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRangeSpec(convert_classy);
    convert_classy->remove_reference();
  }

GeonameAttributeArgumentJSON::GeonameAttributeArgumentJSON(void) :
        flagHasAreaUnit(false),
        flagHasIsOfficial(false),
        flagHasDateTimeRangeSpec(false)
  {
  }

GeonameAttributeArgumentJSON::~GeonameAttributeArgumentJSON(void)
  {
    if (flagHasDateTimeRangeSpec)
      {
        storeDateTimeRangeSpec->remove_reference();
      }
  }

bool GeonameAttributeArgumentJSON::hasAreaUnit(void) const
  {
    return flagHasAreaUnit;
  }

std::string GeonameAttributeArgumentJSON::getAreaUnit(void)
  {
    assert(flagHasAreaUnit);
    return storeAreaUnit;
  }

const std::string GeonameAttributeArgumentJSON::getAreaUnit(void) const
  {
    assert(flagHasAreaUnit);
    return storeAreaUnit;
  }

bool GeonameAttributeArgumentJSON::hasIsOfficial(void) const
  {
    return flagHasIsOfficial;
  }

bool GeonameAttributeArgumentJSON::getIsOfficial(void)
  {
    assert(flagHasIsOfficial);
    return storeIsOfficial;
  }

const bool GeonameAttributeArgumentJSON::getIsOfficial(void) const
  {
    assert(flagHasIsOfficial);
    return storeIsOfficial;
  }

bool GeonameAttributeArgumentJSON::hasDateTimeRangeSpec(void) const
  {
    return flagHasDateTimeRangeSpec;
  }

DateTimeRangeSpecJSON * GeonameAttributeArgumentJSON::getDateTimeRangeSpec(void)
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

const DateTimeRangeSpecJSON * GeonameAttributeArgumentJSON::getDateTimeRangeSpec(void) const
  {
    assert(flagHasDateTimeRangeSpec);
    return storeDateTimeRangeSpec;
  }

GeonameAttributeArgumentJSON *GeonameAttributeArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameAttributeArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeArgumentJSON>, GeonameAttributeArgumentJSON *, bool> generator("Type GeonameAttributeArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
