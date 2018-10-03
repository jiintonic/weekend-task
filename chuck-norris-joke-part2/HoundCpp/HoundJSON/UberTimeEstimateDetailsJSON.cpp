/* file "UberTimeEstimateDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberTimeEstimateDetailsJSON.h"

#include "UberTimeEstimateDetailsJSON.h"


UberTimeEstimateDetailsJSON::UberTimeEstimateDetailsJSON(const UberTimeEstimateDetailsJSON &)
  {
    assert(false);
  }

UberTimeEstimateDetailsJSON &UberTimeEstimateDetailsJSON::operator=(const UberTimeEstimateDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberTimeEstimateDetailsJSON::fromJSONproduct_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field product_id of UberTimeEstimateDetailsJSON is not a string.");
    setproduct_id(std::string(json_string->getData()));
  }

void UberTimeEstimateDetailsJSON::fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field display_name of UberTimeEstimateDetailsJSON is not a string.");
    setdisplay_name(std::string(json_string->getData()));
  }

void UberTimeEstimateDetailsJSON::fromJSONestimate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field estimate of UberTimeEstimateDetailsJSON is not a number.");
          }
      }
    setestimateText(the_rational_text);
  }

UberTimeEstimateDetailsJSON::UberTimeEstimateDetailsJSON(void) :
        flagHasproduct_id(false),
        flagHasdisplay_name(false),
        flagHasestimate(false)
  {
    extraIndex = create_string_index();
  }

UberTimeEstimateDetailsJSON::~UberTimeEstimateDetailsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberTimeEstimateDetailsJSON::hasproduct_id(void) const
  {
    return flagHasproduct_id;
  }

std::string UberTimeEstimateDetailsJSON::getproduct_id(void)
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

const std::string UberTimeEstimateDetailsJSON::getproduct_id(void) const
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

bool UberTimeEstimateDetailsJSON::hasdisplay_name(void) const
  {
    return flagHasdisplay_name;
  }

std::string UberTimeEstimateDetailsJSON::getdisplay_name(void)
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

const std::string UberTimeEstimateDetailsJSON::getdisplay_name(void) const
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

bool UberTimeEstimateDetailsJSON::hasestimate(void) const
  {
    return flagHasestimate;
  }

double UberTimeEstimateDetailsJSON::getestimate(void)
  {
    assert(flagHasestimate);
    if (textStoreestimate != "")
      {
        return atof(textStoreestimate.c_str());
      }
    return storeestimate;
  }

const double UberTimeEstimateDetailsJSON::getestimate(void) const
  {
    assert(flagHasestimate);
    if (textStoreestimate != "")
      {
        return atof(textStoreestimate.c_str());
      }
    return storeestimate;
  }

std::string UberTimeEstimateDetailsJSON::getestimateAsText(void) const
  {
    assert(flagHasestimate);
    if (textStoreestimate == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeestimate);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreestimate);
      }
  }

UberTimeEstimateDetailsJSON *UberTimeEstimateDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberTimeEstimateDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimateDetailsJSON>, UberTimeEstimateDetailsJSON *, bool> generator("Type UberTimeEstimateDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
