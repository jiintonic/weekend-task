/* file "FlightSegmentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSegmentJSON.h"

#include "FlightSegmentJSON.h"


FlightSegmentJSON::FlightSegmentJSON(const FlightSegmentJSON &)
  {
    assert(false);
  }

FlightSegmentJSON &FlightSegmentJSON::operator=(const FlightSegmentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSegmentJSON::fromJSONFlightSegmentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FlightSegmentID of FlightSegmentJSON is not a string.");
    setFlightSegmentID(std::string(json_string->getData()));
  }

void FlightSegmentJSON::fromJSONDepartureAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureAirport(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONArrivalAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArrivalAirport(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONDepartureDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDepartureDateTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONArrivalDateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTimesJSON *convert_classy = FlightTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArrivalDateTime(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONAirlineFlightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineFlightNumberJSON *convert_classy = AirlineFlightNumberJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAirlineFlightNumber(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONOperatingCarrier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AirlineJSON *convert_classy = AirlineJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOperatingCarrier(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentJSON::fromJSONFlightDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FlightDuration of FlightSegmentJSON is not a number.");
          }
      }
    setFlightDurationText(the_rational_text);
  }

FlightSegmentJSON::FlightSegmentJSON(void) :
        flagHasFlightSegmentID(false),
        flagHasDepartureAirport(false),
        flagHasArrivalAirport(false),
        flagHasDepartureDateTime(false),
        flagHasArrivalDateTime(false),
        flagHasAirlineFlightNumber(false),
        flagHasOperatingCarrier(false),
        flagHasFlightDuration(false)
  {
    extraIndex = create_string_index();
  }

FlightSegmentJSON::~FlightSegmentJSON(void)
  {
    if (flagHasDepartureAirport)
      {
        storeDepartureAirport->remove_reference();
      }
    if (flagHasArrivalAirport)
      {
        storeArrivalAirport->remove_reference();
      }
    if (flagHasDepartureDateTime)
      {
        storeDepartureDateTime->remove_reference();
      }
    if (flagHasArrivalDateTime)
      {
        storeArrivalDateTime->remove_reference();
      }
    if (flagHasAirlineFlightNumber)
      {
        storeAirlineFlightNumber->remove_reference();
      }
    if (flagHasOperatingCarrier)
      {
        storeOperatingCarrier->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSegmentJSON::hasFlightSegmentID(void) const
  {
    return flagHasFlightSegmentID;
  }

std::string FlightSegmentJSON::getFlightSegmentID(void)
  {
    assert(flagHasFlightSegmentID);
    return storeFlightSegmentID;
  }

const std::string FlightSegmentJSON::getFlightSegmentID(void) const
  {
    assert(flagHasFlightSegmentID);
    return storeFlightSegmentID;
  }

bool FlightSegmentJSON::hasDepartureAirport(void) const
  {
    return flagHasDepartureAirport;
  }

FlightTravelLocationJSON * FlightSegmentJSON::getDepartureAirport(void)
  {
    assert(flagHasDepartureAirport);
    return storeDepartureAirport;
  }

const FlightTravelLocationJSON * FlightSegmentJSON::getDepartureAirport(void) const
  {
    assert(flagHasDepartureAirport);
    return storeDepartureAirport;
  }

bool FlightSegmentJSON::hasArrivalAirport(void) const
  {
    return flagHasArrivalAirport;
  }

FlightTravelLocationJSON * FlightSegmentJSON::getArrivalAirport(void)
  {
    assert(flagHasArrivalAirport);
    return storeArrivalAirport;
  }

const FlightTravelLocationJSON * FlightSegmentJSON::getArrivalAirport(void) const
  {
    assert(flagHasArrivalAirport);
    return storeArrivalAirport;
  }

bool FlightSegmentJSON::hasDepartureDateTime(void) const
  {
    return flagHasDepartureDateTime;
  }

FlightTimesJSON * FlightSegmentJSON::getDepartureDateTime(void)
  {
    assert(flagHasDepartureDateTime);
    return storeDepartureDateTime;
  }

const FlightTimesJSON * FlightSegmentJSON::getDepartureDateTime(void) const
  {
    assert(flagHasDepartureDateTime);
    return storeDepartureDateTime;
  }

bool FlightSegmentJSON::hasArrivalDateTime(void) const
  {
    return flagHasArrivalDateTime;
  }

FlightTimesJSON * FlightSegmentJSON::getArrivalDateTime(void)
  {
    assert(flagHasArrivalDateTime);
    return storeArrivalDateTime;
  }

const FlightTimesJSON * FlightSegmentJSON::getArrivalDateTime(void) const
  {
    assert(flagHasArrivalDateTime);
    return storeArrivalDateTime;
  }

bool FlightSegmentJSON::hasAirlineFlightNumber(void) const
  {
    return flagHasAirlineFlightNumber;
  }

AirlineFlightNumberJSON * FlightSegmentJSON::getAirlineFlightNumber(void)
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

const AirlineFlightNumberJSON * FlightSegmentJSON::getAirlineFlightNumber(void) const
  {
    assert(flagHasAirlineFlightNumber);
    return storeAirlineFlightNumber;
  }

bool FlightSegmentJSON::hasOperatingCarrier(void) const
  {
    return flagHasOperatingCarrier;
  }

AirlineJSON * FlightSegmentJSON::getOperatingCarrier(void)
  {
    assert(flagHasOperatingCarrier);
    return storeOperatingCarrier;
  }

const AirlineJSON * FlightSegmentJSON::getOperatingCarrier(void) const
  {
    assert(flagHasOperatingCarrier);
    return storeOperatingCarrier;
  }

bool FlightSegmentJSON::hasFlightDuration(void) const
  {
    return flagHasFlightDuration;
  }

double FlightSegmentJSON::getFlightDuration(void)
  {
    assert(flagHasFlightDuration);
    if (textStoreFlightDuration != "")
      {
        return atof(textStoreFlightDuration.c_str());
      }
    return storeFlightDuration;
  }

const double FlightSegmentJSON::getFlightDuration(void) const
  {
    assert(flagHasFlightDuration);
    if (textStoreFlightDuration != "")
      {
        return atof(textStoreFlightDuration.c_str());
      }
    return storeFlightDuration;
  }

std::string FlightSegmentJSON::getFlightDurationAsText(void) const
  {
    assert(flagHasFlightDuration);
    if (textStoreFlightDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeFlightDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreFlightDuration);
      }
  }

FlightSegmentJSON *FlightSegmentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSegmentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSegmentJSON>, FlightSegmentJSON *, bool> generator("Type FlightSegment", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
