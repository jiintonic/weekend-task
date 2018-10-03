/* file "FlightSegmentGroupJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightSegmentGroupJSON.h"

#include "FlightSegmentGroupJSON.h"


FlightSegmentGroupJSON::FlightSegmentGroupJSON(const FlightSegmentGroupJSON &)
  {
    assert(false);
  }

FlightSegmentGroupJSON &FlightSegmentGroupJSON::operator=(const FlightSegmentGroupJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightSegmentGroupJSON::fromJSONTotalTravelDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TotalTravelDuration of FlightSegmentGroupJSON is not a number.");
          }
      }
    setTotalTravelDurationText(the_rational_text);
  }

void FlightSegmentGroupJSON::fromJSONTotalFlightDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TotalFlightDuration of FlightSegmentGroupJSON is not a number.");
          }
      }
    setTotalFlightDurationText(the_rational_text);
  }

void FlightSegmentGroupJSON::fromJSONTotalLayoverDuration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TotalLayoverDuration of FlightSegmentGroupJSON is not a number.");
          }
      }
    setTotalLayoverDurationText(the_rational_text);
  }

void FlightSegmentGroupJSON::fromJSONNumberOfStops(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberOfStops of FlightSegmentGroupJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberOfStops of FlightSegmentGroupJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumberOfStops(extracted_integer);
  }

void FlightSegmentGroupJSON::fromJSONFlightSegmentDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightSegmentDetails of FlightSegmentGroupJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field FlightSegmentDetails of FlightSegmentGroupJSON has too few elements.");
    std::vector< FlightSegmentDetailsJSON * > vector_FlightSegmentDetails1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentDetailsJSON *convert_classy = FlightSegmentDetailsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightSegmentDetails1[num1] = convert_classy;
      }
    assert(vector_FlightSegmentDetails1.size() >= 1);
    initFlightSegmentDetails();
    for (size_t num2 = 0; num2 < vector_FlightSegmentDetails1.size(); ++num2)
        appendFlightSegmentDetails(vector_FlightSegmentDetails1[num2]);
    for (size_t num1 = 0; num1 < vector_FlightSegmentDetails1.size(); ++num1)
      {
        vector_FlightSegmentDetails1[num1]->remove_reference();
      }
  }

FlightSegmentGroupJSON::FlightSegmentGroupJSON(void) :
        flagHasTotalTravelDuration(false),
        flagHasTotalFlightDuration(false),
        flagHasTotalLayoverDuration(false),
        flagHasNumberOfStops(false),
        flagHasFlightSegmentDetails(false)
  {
    extraIndex = create_string_index();
  }

FlightSegmentGroupJSON::~FlightSegmentGroupJSON(void)
  {
    if (flagHasFlightSegmentDetails)
      {
        for (size_t num4 = 0; num4 < storeFlightSegmentDetails.size(); ++num4)
          {
            storeFlightSegmentDetails[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightSegmentGroupJSON::hasTotalTravelDuration(void) const
  {
    return flagHasTotalTravelDuration;
  }

double FlightSegmentGroupJSON::getTotalTravelDuration(void)
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration != "")
      {
        return atof(textStoreTotalTravelDuration.c_str());
      }
    return storeTotalTravelDuration;
  }

const double FlightSegmentGroupJSON::getTotalTravelDuration(void) const
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration != "")
      {
        return atof(textStoreTotalTravelDuration.c_str());
      }
    return storeTotalTravelDuration;
  }

std::string FlightSegmentGroupJSON::getTotalTravelDurationAsText(void) const
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalTravelDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalTravelDuration);
      }
  }

bool FlightSegmentGroupJSON::hasTotalFlightDuration(void) const
  {
    return flagHasTotalFlightDuration;
  }

double FlightSegmentGroupJSON::getTotalFlightDuration(void)
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration != "")
      {
        return atof(textStoreTotalFlightDuration.c_str());
      }
    return storeTotalFlightDuration;
  }

const double FlightSegmentGroupJSON::getTotalFlightDuration(void) const
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration != "")
      {
        return atof(textStoreTotalFlightDuration.c_str());
      }
    return storeTotalFlightDuration;
  }

std::string FlightSegmentGroupJSON::getTotalFlightDurationAsText(void) const
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalFlightDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalFlightDuration);
      }
  }

bool FlightSegmentGroupJSON::hasTotalLayoverDuration(void) const
  {
    return flagHasTotalLayoverDuration;
  }

double FlightSegmentGroupJSON::getTotalLayoverDuration(void)
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration != "")
      {
        return atof(textStoreTotalLayoverDuration.c_str());
      }
    return storeTotalLayoverDuration;
  }

const double FlightSegmentGroupJSON::getTotalLayoverDuration(void) const
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration != "")
      {
        return atof(textStoreTotalLayoverDuration.c_str());
      }
    return storeTotalLayoverDuration;
  }

std::string FlightSegmentGroupJSON::getTotalLayoverDurationAsText(void) const
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalLayoverDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalLayoverDuration);
      }
  }

bool FlightSegmentGroupJSON::hasNumberOfStops(void) const
  {
    return flagHasNumberOfStops;
  }

OInteger FlightSegmentGroupJSON::getNumberOfStops(void)
  {
    assert(flagHasNumberOfStops);
    return storeNumberOfStops;
  }

const OInteger FlightSegmentGroupJSON::getNumberOfStops(void) const
  {
    assert(flagHasNumberOfStops);
    return storeNumberOfStops;
  }

bool FlightSegmentGroupJSON::hasFlightSegmentDetails(void) const
  {
    return flagHasFlightSegmentDetails;
  }

size_t FlightSegmentGroupJSON::countOfFlightSegmentDetails(void) const
  {
    assert(flagHasFlightSegmentDetails);
    return storeFlightSegmentDetails.size();
  }

FlightSegmentDetailsJSON * FlightSegmentGroupJSON::elementOfFlightSegmentDetails(size_t element_num)
  {
    assert(flagHasFlightSegmentDetails);
    return storeFlightSegmentDetails[element_num];
  }

const FlightSegmentDetailsJSON * FlightSegmentGroupJSON::elementOfFlightSegmentDetails(size_t element_num) const
  {
    assert(flagHasFlightSegmentDetails);
    return storeFlightSegmentDetails[element_num];
  }

std::vector< FlightSegmentDetailsJSON * > FlightSegmentGroupJSON::getFlightSegmentDetails(void)
  {
    assert(flagHasFlightSegmentDetails);
    return storeFlightSegmentDetails;
  }

const std::vector< FlightSegmentDetailsJSON * > FlightSegmentGroupJSON::getFlightSegmentDetails(void) const
  {
    assert(flagHasFlightSegmentDetails);
    return storeFlightSegmentDetails;
  }

char FlightSegmentGroupJSON::Generator::lowerBoundNumberOfStops[] = "0";
FlightSegmentGroupJSON *FlightSegmentGroupJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightSegmentGroupJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightSegmentGroupJSON>, FlightSegmentGroupJSON *, bool> generator("Type FlightSegmentGroup", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
