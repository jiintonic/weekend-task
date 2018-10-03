/* file "AstronomyDistanceFromEarthCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AstronomyDistanceFromEarthCommandJSON.h"

#include "AstronomyDistanceFromEarthCommandJSON.h"


AstronomyDistanceFromEarthCommandJSON::AstronomyDistanceFromEarthCommandJSON(const AstronomyDistanceFromEarthCommandJSON &)
  {
    assert(false);
  }

AstronomyDistanceFromEarthCommandJSON &AstronomyDistanceFromEarthCommandJSON::operator=(const AstronomyDistanceFromEarthCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AstronomyDistanceFromEarthCommandJSON::extraObjectNameToJSON(void) const
  {
    JSONStringValue *generated_string_ObjectName = new JSONStringValue(storeObjectName.c_str());
    return generated_string_ObjectName;
  }

JSONValue *AstronomyDistanceFromEarthCommandJSON::extraMinimumDistanceMilesToJSON(void) const
  {
    JSONValue *generated_rational_MinimumDistanceMiles;
    if (((double)(long int)storeMinimumDistanceMiles) == storeMinimumDistanceMiles)
        generated_rational_MinimumDistanceMiles = new JSONIntegerValue((long int)(storeMinimumDistanceMiles));
    else
        generated_rational_MinimumDistanceMiles = new JSONRationalValue(storeMinimumDistanceMiles, DBL_DIG);
    return generated_rational_MinimumDistanceMiles;
  }

JSONValue *AstronomyDistanceFromEarthCommandJSON::extraMaximumDistanceMilesToJSON(void) const
  {
    JSONValue *generated_rational_MaximumDistanceMiles;
    if (((double)(long int)storeMaximumDistanceMiles) == storeMaximumDistanceMiles)
        generated_rational_MaximumDistanceMiles = new JSONIntegerValue((long int)(storeMaximumDistanceMiles));
    else
        generated_rational_MaximumDistanceMiles = new JSONRationalValue(storeMaximumDistanceMiles, DBL_DIG);
    return generated_rational_MaximumDistanceMiles;
  }

void AstronomyDistanceFromEarthCommandJSON::fromJSONObjectName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ObjectName of AstronomyDistanceFromEarthCommandJSON is not a string.");
    setObjectName(std::string(json_string->getData()));
  }

void AstronomyDistanceFromEarthCommandJSON::fromJSONMinimumDistanceMiles(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MinimumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is not a number.");
          }
      }
    setMinimumDistanceMilesText(the_rational_text);
  }

void AstronomyDistanceFromEarthCommandJSON::fromJSONMaximumDistanceMiles(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaximumDistanceMiles of AstronomyDistanceFromEarthCommandJSON is not a number.");
          }
      }
    setMaximumDistanceMilesText(the_rational_text);
  }

AstronomyDistanceFromEarthCommandJSON::AstronomyDistanceFromEarthCommandJSON(void) :
        flagHasObjectName(false),
        flagHasMinimumDistanceMiles(false),
        flagHasMaximumDistanceMiles(false)
  {
    extraIndex = create_string_index();
  }

AstronomyDistanceFromEarthCommandJSON::~AstronomyDistanceFromEarthCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AstronomyDistanceFromEarthCommandJSON::getCommandKind(void) const
  {
    return "AstronomyDistanceFromEarthCommand";
  }

bool AstronomyDistanceFromEarthCommandJSON::hasObjectName(void) const
  {
    return flagHasObjectName;
  }

std::string AstronomyDistanceFromEarthCommandJSON::getObjectName(void)
  {
    assert(flagHasObjectName);
    return storeObjectName;
  }

const std::string AstronomyDistanceFromEarthCommandJSON::getObjectName(void) const
  {
    assert(flagHasObjectName);
    return storeObjectName;
  }

bool AstronomyDistanceFromEarthCommandJSON::hasMinimumDistanceMiles(void) const
  {
    return flagHasMinimumDistanceMiles;
  }

double AstronomyDistanceFromEarthCommandJSON::getMinimumDistanceMiles(void)
  {
    assert(flagHasMinimumDistanceMiles);
    if (textStoreMinimumDistanceMiles != "")
      {
        return atof(textStoreMinimumDistanceMiles.c_str());
      }
    return storeMinimumDistanceMiles;
  }

const double AstronomyDistanceFromEarthCommandJSON::getMinimumDistanceMiles(void) const
  {
    assert(flagHasMinimumDistanceMiles);
    if (textStoreMinimumDistanceMiles != "")
      {
        return atof(textStoreMinimumDistanceMiles.c_str());
      }
    return storeMinimumDistanceMiles;
  }

std::string AstronomyDistanceFromEarthCommandJSON::getMinimumDistanceMilesAsText(void) const
  {
    assert(flagHasMinimumDistanceMiles);
    if (textStoreMinimumDistanceMiles == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMinimumDistanceMiles);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMinimumDistanceMiles);
      }
  }

bool AstronomyDistanceFromEarthCommandJSON::hasMaximumDistanceMiles(void) const
  {
    return flagHasMaximumDistanceMiles;
  }

double AstronomyDistanceFromEarthCommandJSON::getMaximumDistanceMiles(void)
  {
    assert(flagHasMaximumDistanceMiles);
    if (textStoreMaximumDistanceMiles != "")
      {
        return atof(textStoreMaximumDistanceMiles.c_str());
      }
    return storeMaximumDistanceMiles;
  }

const double AstronomyDistanceFromEarthCommandJSON::getMaximumDistanceMiles(void) const
  {
    assert(flagHasMaximumDistanceMiles);
    if (textStoreMaximumDistanceMiles != "")
      {
        return atof(textStoreMaximumDistanceMiles.c_str());
      }
    return storeMaximumDistanceMiles;
  }

std::string AstronomyDistanceFromEarthCommandJSON::getMaximumDistanceMilesAsText(void) const
  {
    assert(flagHasMaximumDistanceMiles);
    if (textStoreMaximumDistanceMiles == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaximumDistanceMiles);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaximumDistanceMiles);
      }
  }

AstronomyDistanceFromEarthCommandJSON *AstronomyDistanceFromEarthCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AstronomyDistanceFromEarthCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AstronomyDistanceFromEarthCommandJSON>, AstronomyDistanceFromEarthCommandJSON *, bool> generator("Type AstronomyDistanceFromEarthCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
