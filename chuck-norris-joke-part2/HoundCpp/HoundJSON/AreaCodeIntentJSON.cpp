/* file "AreaCodeIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AreaCodeIntentJSON.h"

#include "AreaCodeIntentJSON.h"


AreaCodeIntentJSON::AreaCodeIntentJSON(const AreaCodeIntentJSON &)
  {
    assert(false);
  }

AreaCodeIntentJSON &AreaCodeIntentJSON::operator=(const AreaCodeIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AreaCodeIntentJSON::extraPhoneAreaCodeToJSON(void) const
  {
    JSONIntegerValue *generated_integer_PhoneAreaCode = new JSONIntegerValue(storePhoneAreaCode.get_o_integer());
    return generated_integer_PhoneAreaCode;
  }

JSONValue *AreaCodeIntentJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

void AreaCodeIntentJSON::fromJSONPhoneAreaCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PhoneAreaCode of AreaCodeIntentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PhoneAreaCode of AreaCodeIntentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPhoneAreaCode(extracted_integer);
  }

void AreaCodeIntentJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

AreaCodeIntentJSON::AreaCodeIntentJSON(void) :
        flagHasPhoneAreaCode(false),
        flagHasMapLocation(false)
  {
    extraIndex = create_string_index();
  }

AreaCodeIntentJSON::~AreaCodeIntentJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AreaCodeIntentJSON::getLocationIntentKind(void) const
  {
    return "AreaCode";
  }

bool AreaCodeIntentJSON::hasPhoneAreaCode(void) const
  {
    return flagHasPhoneAreaCode;
  }

OInteger AreaCodeIntentJSON::getPhoneAreaCode(void)
  {
    assert(flagHasPhoneAreaCode);
    return storePhoneAreaCode;
  }

const OInteger AreaCodeIntentJSON::getPhoneAreaCode(void) const
  {
    assert(flagHasPhoneAreaCode);
    return storePhoneAreaCode;
  }

bool AreaCodeIntentJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * AreaCodeIntentJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * AreaCodeIntentJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

AreaCodeIntentJSON *AreaCodeIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AreaCodeIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AreaCodeIntentJSON>, AreaCodeIntentJSON *, bool> generator("Type AreaCodeIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
