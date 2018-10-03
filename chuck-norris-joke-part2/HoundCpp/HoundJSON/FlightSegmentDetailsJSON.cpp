/* file "FlightSegmentDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSegmentDetailsJSON.h"

#include "FlightSegmentDetailsJSON.h"


FlightSegmentDetailsJSON::FlightSegmentDetailsJSON(const FlightSegmentDetailsJSON &)
  {
    assert(false);
  }

FlightSegmentDetailsJSON &FlightSegmentDetailsJSON::operator=(const FlightSegmentDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSegmentDetailsJSON::fromJSONFlightSegmentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FlightSegmentID of FlightSegmentDetailsJSON is not a string.");
    setFlightSegmentID(std::string(json_string->getData()));
  }

void FlightSegmentDetailsJSON::fromJSONCabinClass(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CabinClassJSON *convert_classy = CabinClassJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCabinClass(convert_classy);
    convert_classy->remove_reference();
  }

void FlightSegmentDetailsJSON::fromJSONLayoverDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field LayoverDuration of FlightSegmentDetailsJSON is not a number.");
          }
      }
    setLayoverDurationText(the_rational_text);
  }

void FlightSegmentDetailsJSON::fromJSONChangeToAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightTravelLocationJSON *convert_classy = FlightTravelLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChangeToAirport(convert_classy);
    convert_classy->remove_reference();
  }

FlightSegmentDetailsJSON::FlightSegmentDetailsJSON(void) :
        flagHasFlightSegmentID(false),
        flagHasCabinClass(false),
        flagHasLayoverDuration(false),
        flagHasChangeToAirport(false)
  {
    extraIndex = create_string_index();
  }

FlightSegmentDetailsJSON::~FlightSegmentDetailsJSON(void)
  {
    if (flagHasCabinClass)
      {
        storeCabinClass->remove_reference();
      }
    if (flagHasChangeToAirport)
      {
        storeChangeToAirport->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSegmentDetailsJSON::hasFlightSegmentID(void) const
  {
    return flagHasFlightSegmentID;
  }

std::string FlightSegmentDetailsJSON::getFlightSegmentID(void)
  {
    assert(flagHasFlightSegmentID);
    return storeFlightSegmentID;
  }

const std::string FlightSegmentDetailsJSON::getFlightSegmentID(void) const
  {
    assert(flagHasFlightSegmentID);
    return storeFlightSegmentID;
  }

bool FlightSegmentDetailsJSON::hasCabinClass(void) const
  {
    return flagHasCabinClass;
  }

CabinClassJSON * FlightSegmentDetailsJSON::getCabinClass(void)
  {
    assert(flagHasCabinClass);
    return storeCabinClass;
  }

const CabinClassJSON * FlightSegmentDetailsJSON::getCabinClass(void) const
  {
    assert(flagHasCabinClass);
    return storeCabinClass;
  }

CabinClassJSON::TypeValue FlightSegmentDetailsJSON::getCabinClassValue(void)
  {
    return getCabinClass()->getValue();
  }

const CabinClassJSON::TypeValue FlightSegmentDetailsJSON::getCabinClassValue(void) const
  {
    return getCabinClass()->getValue();
  }

const char *FlightSegmentDetailsJSON::getCabinClassAsChars(void) const
  {
    return getCabinClass()->getValueAsChars();
  }

std::string FlightSegmentDetailsJSON::getCabinClassAsString(void) const
  {
    return getCabinClass()->getValueAsString();
  }

bool FlightSegmentDetailsJSON::hasLayoverDuration(void) const
  {
    return flagHasLayoverDuration;
  }

double FlightSegmentDetailsJSON::getLayoverDuration(void)
  {
    assert(flagHasLayoverDuration);
    if (textStoreLayoverDuration != "")
      {
        return atof(textStoreLayoverDuration.c_str());
      }
    return storeLayoverDuration;
  }

const double FlightSegmentDetailsJSON::getLayoverDuration(void) const
  {
    assert(flagHasLayoverDuration);
    if (textStoreLayoverDuration != "")
      {
        return atof(textStoreLayoverDuration.c_str());
      }
    return storeLayoverDuration;
  }

std::string FlightSegmentDetailsJSON::getLayoverDurationAsText(void) const
  {
    assert(flagHasLayoverDuration);
    if (textStoreLayoverDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLayoverDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLayoverDuration);
      }
  }

bool FlightSegmentDetailsJSON::hasChangeToAirport(void) const
  {
    return flagHasChangeToAirport;
  }

FlightTravelLocationJSON * FlightSegmentDetailsJSON::getChangeToAirport(void)
  {
    assert(flagHasChangeToAirport);
    return storeChangeToAirport;
  }

const FlightTravelLocationJSON * FlightSegmentDetailsJSON::getChangeToAirport(void) const
  {
    assert(flagHasChangeToAirport);
    return storeChangeToAirport;
  }

FlightSegmentDetailsJSON *FlightSegmentDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSegmentDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSegmentDetailsJSON>, FlightSegmentDetailsJSON *, bool> generator("Type FlightSegmentDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
