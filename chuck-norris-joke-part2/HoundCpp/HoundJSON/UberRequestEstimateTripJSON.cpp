/* file "UberRequestEstimateTripJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestEstimateTripJSON.h"

#include "UberRequestEstimateTripJSON.h"


UberRequestEstimateTripJSON::UberRequestEstimateTripJSON(const UberRequestEstimateTripJSON &)
  {
    assert(false);
  }

UberRequestEstimateTripJSON &UberRequestEstimateTripJSON::operator=(const UberRequestEstimateTripJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestEstimateTripJSON::fromJSONdistance_estimate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field distance_estimate of UberRequestEstimateTripJSON is not a number.");
          }
      }
    setdistance_estimateText(the_rational_text);
  }

void UberRequestEstimateTripJSON::fromJSONdistance_unit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field distance_unit of UberRequestEstimateTripJSON is not a string.");
    setdistance_unit(std::string(json_string->getData()));
  }

void UberRequestEstimateTripJSON::fromJSONduration_estimate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field duration_estimate of UberRequestEstimateTripJSON is not a number.");
          }
      }
    setduration_estimateText(the_rational_text);
  }

UberRequestEstimateTripJSON::UberRequestEstimateTripJSON(void) :
        flagHasdistance_estimate(false),
        flagHasdistance_unit(false),
        flagHasduration_estimate(false)
  {
    extraIndex = create_string_index();
  }

UberRequestEstimateTripJSON::~UberRequestEstimateTripJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestEstimateTripJSON::hasdistance_estimate(void) const
  {
    return flagHasdistance_estimate;
  }

double UberRequestEstimateTripJSON::getdistance_estimate(void)
  {
    assert(flagHasdistance_estimate);
    if (textStoredistance_estimate != "")
      {
        return atof(textStoredistance_estimate.c_str());
      }
    return storedistance_estimate;
  }

const double UberRequestEstimateTripJSON::getdistance_estimate(void) const
  {
    assert(flagHasdistance_estimate);
    if (textStoredistance_estimate != "")
      {
        return atof(textStoredistance_estimate.c_str());
      }
    return storedistance_estimate;
  }

std::string UberRequestEstimateTripJSON::getdistance_estimateAsText(void) const
  {
    assert(flagHasdistance_estimate);
    if (textStoredistance_estimate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storedistance_estimate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoredistance_estimate);
      }
  }

bool UberRequestEstimateTripJSON::hasdistance_unit(void) const
  {
    return flagHasdistance_unit;
  }

std::string UberRequestEstimateTripJSON::getdistance_unit(void)
  {
    assert(flagHasdistance_unit);
    return storedistance_unit;
  }

const std::string UberRequestEstimateTripJSON::getdistance_unit(void) const
  {
    assert(flagHasdistance_unit);
    return storedistance_unit;
  }

bool UberRequestEstimateTripJSON::hasduration_estimate(void) const
  {
    return flagHasduration_estimate;
  }

double UberRequestEstimateTripJSON::getduration_estimate(void)
  {
    assert(flagHasduration_estimate);
    if (textStoreduration_estimate != "")
      {
        return atof(textStoreduration_estimate.c_str());
      }
    return storeduration_estimate;
  }

const double UberRequestEstimateTripJSON::getduration_estimate(void) const
  {
    assert(flagHasduration_estimate);
    if (textStoreduration_estimate != "")
      {
        return atof(textStoreduration_estimate.c_str());
      }
    return storeduration_estimate;
  }

std::string UberRequestEstimateTripJSON::getduration_estimateAsText(void) const
  {
    assert(flagHasduration_estimate);
    if (textStoreduration_estimate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeduration_estimate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreduration_estimate);
      }
  }

UberRequestEstimateTripJSON *UberRequestEstimateTripJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestEstimateTripJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimateTripJSON>, UberRequestEstimateTripJSON *, bool> generator("Type UberRequestEstimateTrip", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
