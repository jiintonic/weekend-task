/* file "MapLocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MapLocationIntentJSON.h"

#include "MapLocationIntentJSON.h"


MapLocationIntentJSON::MapLocationIntentJSON(const MapLocationIntentJSON &)
  {
    assert(false);
  }

MapLocationIntentJSON &MapLocationIntentJSON::operator=(const MapLocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MapLocationIntentJSON::extraMapLocationToJSON(void) const
  {
    JSONValueHandler handler_MapLocation;
    storeMapLocation->write_as_json(&handler_MapLocation);
    handler_MapLocation.result->add_reference();
    return handler_MapLocation.result;
  }

void MapLocationIntentJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

MapLocationIntentJSON::MapLocationIntentJSON(void) :
        flagHasMapLocation(false)
  {
    extraIndex = create_string_index();
  }

MapLocationIntentJSON::~MapLocationIntentJSON(void)
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

const char *MapLocationIntentJSON::getLocationIntentKind(void) const
  {
    return "MapLocation";
  }

bool MapLocationIntentJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * MapLocationIntentJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * MapLocationIntentJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

MapLocationIntentJSON *MapLocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MapLocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MapLocationIntentJSON>, MapLocationIntentJSON *, bool> generator("Type MapLocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
