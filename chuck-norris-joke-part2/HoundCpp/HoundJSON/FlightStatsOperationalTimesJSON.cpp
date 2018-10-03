/* file "FlightStatsOperationalTimesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsOperationalTimesJSON.h"

#include "FlightStatsOperationalTimesJSON.h"


FlightStatsOperationalTimesJSON::FlightStatsOperationalTimesJSON(const FlightStatsOperationalTimesJSON &)
  {
    assert(false);
  }

FlightStatsOperationalTimesJSON &FlightStatsOperationalTimesJSON::operator=(const FlightStatsOperationalTimesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsOperationalTimesJSON::fromJSONpublishedDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setpublishedDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONpublishedArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setpublishedArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONscheduledGateDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setscheduledGateDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONestimatedGateDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setestimatedGateDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONactualGateDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setactualGateDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONflightPlanPlannedDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setflightPlanPlannedDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONestimatedRunwayDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setestimatedRunwayDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONactualRunwayDeparture(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setactualRunwayDeparture(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONscheduledGateArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setscheduledGateArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONestimatedGateArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setestimatedGateArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONactualGateArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setactualGateArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONflightPlanPlannedArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setflightPlanPlannedArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONestimatedRunwayArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setestimatedRunwayArrival(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsOperationalTimesJSON::fromJSONactualRunwayArrival(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setactualRunwayArrival(convert_classy);
    convert_classy->remove_reference();
  }

FlightStatsOperationalTimesJSON::FlightStatsOperationalTimesJSON(void) :
        flagHaspublishedDeparture(false),
        flagHaspublishedArrival(false),
        flagHasscheduledGateDeparture(false),
        flagHasestimatedGateDeparture(false),
        flagHasactualGateDeparture(false),
        flagHasflightPlanPlannedDeparture(false),
        flagHasestimatedRunwayDeparture(false),
        flagHasactualRunwayDeparture(false),
        flagHasscheduledGateArrival(false),
        flagHasestimatedGateArrival(false),
        flagHasactualGateArrival(false),
        flagHasflightPlanPlannedArrival(false),
        flagHasestimatedRunwayArrival(false),
        flagHasactualRunwayArrival(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsOperationalTimesJSON::~FlightStatsOperationalTimesJSON(void)
  {
    if (flagHaspublishedDeparture)
      {
        storepublishedDeparture->remove_reference();
      }
    if (flagHaspublishedArrival)
      {
        storepublishedArrival->remove_reference();
      }
    if (flagHasscheduledGateDeparture)
      {
        storescheduledGateDeparture->remove_reference();
      }
    if (flagHasestimatedGateDeparture)
      {
        storeestimatedGateDeparture->remove_reference();
      }
    if (flagHasactualGateDeparture)
      {
        storeactualGateDeparture->remove_reference();
      }
    if (flagHasflightPlanPlannedDeparture)
      {
        storeflightPlanPlannedDeparture->remove_reference();
      }
    if (flagHasestimatedRunwayDeparture)
      {
        storeestimatedRunwayDeparture->remove_reference();
      }
    if (flagHasactualRunwayDeparture)
      {
        storeactualRunwayDeparture->remove_reference();
      }
    if (flagHasscheduledGateArrival)
      {
        storescheduledGateArrival->remove_reference();
      }
    if (flagHasestimatedGateArrival)
      {
        storeestimatedGateArrival->remove_reference();
      }
    if (flagHasactualGateArrival)
      {
        storeactualGateArrival->remove_reference();
      }
    if (flagHasflightPlanPlannedArrival)
      {
        storeflightPlanPlannedArrival->remove_reference();
      }
    if (flagHasestimatedRunwayArrival)
      {
        storeestimatedRunwayArrival->remove_reference();
      }
    if (flagHasactualRunwayArrival)
      {
        storeactualRunwayArrival->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsOperationalTimesJSON::haspublishedDeparture(void) const
  {
    return flagHaspublishedDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getpublishedDeparture(void)
  {
    assert(flagHaspublishedDeparture);
    return storepublishedDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getpublishedDeparture(void) const
  {
    assert(flagHaspublishedDeparture);
    return storepublishedDeparture;
  }

bool FlightStatsOperationalTimesJSON::haspublishedArrival(void) const
  {
    return flagHaspublishedArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getpublishedArrival(void)
  {
    assert(flagHaspublishedArrival);
    return storepublishedArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getpublishedArrival(void) const
  {
    assert(flagHaspublishedArrival);
    return storepublishedArrival;
  }

bool FlightStatsOperationalTimesJSON::hasscheduledGateDeparture(void) const
  {
    return flagHasscheduledGateDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getscheduledGateDeparture(void)
  {
    assert(flagHasscheduledGateDeparture);
    return storescheduledGateDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getscheduledGateDeparture(void) const
  {
    assert(flagHasscheduledGateDeparture);
    return storescheduledGateDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasestimatedGateDeparture(void) const
  {
    return flagHasestimatedGateDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedGateDeparture(void)
  {
    assert(flagHasestimatedGateDeparture);
    return storeestimatedGateDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedGateDeparture(void) const
  {
    assert(flagHasestimatedGateDeparture);
    return storeestimatedGateDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasactualGateDeparture(void) const
  {
    return flagHasactualGateDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualGateDeparture(void)
  {
    assert(flagHasactualGateDeparture);
    return storeactualGateDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualGateDeparture(void) const
  {
    assert(flagHasactualGateDeparture);
    return storeactualGateDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasflightPlanPlannedDeparture(void) const
  {
    return flagHasflightPlanPlannedDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getflightPlanPlannedDeparture(void)
  {
    assert(flagHasflightPlanPlannedDeparture);
    return storeflightPlanPlannedDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getflightPlanPlannedDeparture(void) const
  {
    assert(flagHasflightPlanPlannedDeparture);
    return storeflightPlanPlannedDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasestimatedRunwayDeparture(void) const
  {
    return flagHasestimatedRunwayDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedRunwayDeparture(void)
  {
    assert(flagHasestimatedRunwayDeparture);
    return storeestimatedRunwayDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedRunwayDeparture(void) const
  {
    assert(flagHasestimatedRunwayDeparture);
    return storeestimatedRunwayDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasactualRunwayDeparture(void) const
  {
    return flagHasactualRunwayDeparture;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualRunwayDeparture(void)
  {
    assert(flagHasactualRunwayDeparture);
    return storeactualRunwayDeparture;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualRunwayDeparture(void) const
  {
    assert(flagHasactualRunwayDeparture);
    return storeactualRunwayDeparture;
  }

bool FlightStatsOperationalTimesJSON::hasscheduledGateArrival(void) const
  {
    return flagHasscheduledGateArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getscheduledGateArrival(void)
  {
    assert(flagHasscheduledGateArrival);
    return storescheduledGateArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getscheduledGateArrival(void) const
  {
    assert(flagHasscheduledGateArrival);
    return storescheduledGateArrival;
  }

bool FlightStatsOperationalTimesJSON::hasestimatedGateArrival(void) const
  {
    return flagHasestimatedGateArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedGateArrival(void)
  {
    assert(flagHasestimatedGateArrival);
    return storeestimatedGateArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedGateArrival(void) const
  {
    assert(flagHasestimatedGateArrival);
    return storeestimatedGateArrival;
  }

bool FlightStatsOperationalTimesJSON::hasactualGateArrival(void) const
  {
    return flagHasactualGateArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualGateArrival(void)
  {
    assert(flagHasactualGateArrival);
    return storeactualGateArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualGateArrival(void) const
  {
    assert(flagHasactualGateArrival);
    return storeactualGateArrival;
  }

bool FlightStatsOperationalTimesJSON::hasflightPlanPlannedArrival(void) const
  {
    return flagHasflightPlanPlannedArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getflightPlanPlannedArrival(void)
  {
    assert(flagHasflightPlanPlannedArrival);
    return storeflightPlanPlannedArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getflightPlanPlannedArrival(void) const
  {
    assert(flagHasflightPlanPlannedArrival);
    return storeflightPlanPlannedArrival;
  }

bool FlightStatsOperationalTimesJSON::hasestimatedRunwayArrival(void) const
  {
    return flagHasestimatedRunwayArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedRunwayArrival(void)
  {
    assert(flagHasestimatedRunwayArrival);
    return storeestimatedRunwayArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getestimatedRunwayArrival(void) const
  {
    assert(flagHasestimatedRunwayArrival);
    return storeestimatedRunwayArrival;
  }

bool FlightStatsOperationalTimesJSON::hasactualRunwayArrival(void) const
  {
    return flagHasactualRunwayArrival;
  }

FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualRunwayArrival(void)
  {
    assert(flagHasactualRunwayArrival);
    return storeactualRunwayArrival;
  }

const FlightStatsTimesJSON * FlightStatsOperationalTimesJSON::getactualRunwayArrival(void) const
  {
    assert(flagHasactualRunwayArrival);
    return storeactualRunwayArrival;
  }

FlightStatsOperationalTimesJSON *FlightStatsOperationalTimesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsOperationalTimesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsOperationalTimesJSON>, FlightStatsOperationalTimesJSON *, bool> generator("Type FlightStatsOperationalTimes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
