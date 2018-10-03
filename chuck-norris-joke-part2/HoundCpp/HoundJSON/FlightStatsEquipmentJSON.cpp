/* file "FlightStatsEquipmentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsEquipmentJSON.h"

#include "FlightStatsEquipmentJSON.h"


FlightStatsEquipmentJSON::FlightStatsEquipmentJSON(const FlightStatsEquipmentJSON &)
  {
    assert(false);
  }

FlightStatsEquipmentJSON &FlightStatsEquipmentJSON::operator=(const FlightStatsEquipmentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsEquipmentJSON::fromJSONiata(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field iata of FlightStatsEquipmentJSON is not a string.");
    setiata(std::string(json_string->getData()));
  }

void FlightStatsEquipmentJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of FlightStatsEquipmentJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void FlightStatsEquipmentJSON::fromJSONturboProp(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field turboProp of FlightStatsEquipmentJSON is not true for false.");
          }
      }
    setturboProp(the_bool);
  }

void FlightStatsEquipmentJSON::fromJSONjet(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field jet of FlightStatsEquipmentJSON is not true for false.");
          }
      }
    setjet(the_bool);
  }

void FlightStatsEquipmentJSON::fromJSONwidebody(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field widebody of FlightStatsEquipmentJSON is not true for false.");
          }
      }
    setwidebody(the_bool);
  }

void FlightStatsEquipmentJSON::fromJSONregional(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field regional of FlightStatsEquipmentJSON is not true for false.");
          }
      }
    setregional(the_bool);
  }

FlightStatsEquipmentJSON::FlightStatsEquipmentJSON(void) :
        flagHasiata(false),
        flagHasname(false),
        flagHasturboProp(false),
        flagHasjet(false),
        flagHaswidebody(false),
        flagHasregional(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsEquipmentJSON::~FlightStatsEquipmentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsEquipmentJSON::hasiata(void) const
  {
    return flagHasiata;
  }

std::string FlightStatsEquipmentJSON::getiata(void)
  {
    assert(flagHasiata);
    return storeiata;
  }

const std::string FlightStatsEquipmentJSON::getiata(void) const
  {
    assert(flagHasiata);
    return storeiata;
  }

bool FlightStatsEquipmentJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string FlightStatsEquipmentJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string FlightStatsEquipmentJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool FlightStatsEquipmentJSON::hasturboProp(void) const
  {
    return flagHasturboProp;
  }

bool FlightStatsEquipmentJSON::getturboProp(void)
  {
    assert(flagHasturboProp);
    return storeturboProp;
  }

const bool FlightStatsEquipmentJSON::getturboProp(void) const
  {
    assert(flagHasturboProp);
    return storeturboProp;
  }

bool FlightStatsEquipmentJSON::hasjet(void) const
  {
    return flagHasjet;
  }

bool FlightStatsEquipmentJSON::getjet(void)
  {
    assert(flagHasjet);
    return storejet;
  }

const bool FlightStatsEquipmentJSON::getjet(void) const
  {
    assert(flagHasjet);
    return storejet;
  }

bool FlightStatsEquipmentJSON::haswidebody(void) const
  {
    return flagHaswidebody;
  }

bool FlightStatsEquipmentJSON::getwidebody(void)
  {
    assert(flagHaswidebody);
    return storewidebody;
  }

const bool FlightStatsEquipmentJSON::getwidebody(void) const
  {
    assert(flagHaswidebody);
    return storewidebody;
  }

bool FlightStatsEquipmentJSON::hasregional(void) const
  {
    return flagHasregional;
  }

bool FlightStatsEquipmentJSON::getregional(void)
  {
    assert(flagHasregional);
    return storeregional;
  }

const bool FlightStatsEquipmentJSON::getregional(void) const
  {
    assert(flagHasregional);
    return storeregional;
  }

FlightStatsEquipmentJSON *FlightStatsEquipmentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsEquipmentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsEquipmentJSON>, FlightStatsEquipmentJSON *, bool> generator("Type FlightStatsEquipment", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
