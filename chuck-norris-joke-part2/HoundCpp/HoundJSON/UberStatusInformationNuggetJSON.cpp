/* file "UberStatusInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberStatusInformationNuggetJSON.h"

#include "UberStatusInformationNuggetJSON.h"


UberStatusInformationNuggetJSON::UberStatusInformationNuggetJSON(const UberStatusInformationNuggetJSON &)
  {
    assert(false);
  }

UberStatusInformationNuggetJSON &UberStatusInformationNuggetJSON::operator=(const UberStatusInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberStatusInformationNuggetJSON::extraUberRequestToJSON(void) const
  {
    JSONValueHandler handler_UberRequest;
    storeUberRequest->write_as_json(&handler_UberRequest);
    handler_UberRequest.result->add_reference();
    return handler_UberRequest.result;
  }

void UberStatusInformationNuggetJSON::fromJSONUberRequest(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeRequestJSON *convert_classy = UberCompositeRequestJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequest(convert_classy);
    convert_classy->remove_reference();
  }

UberStatusInformationNuggetJSON::UberStatusInformationNuggetJSON(void) :
        flagHasUberRequest(false)
  {
    extraIndex = create_string_index();
  }

UberStatusInformationNuggetJSON::~UberStatusInformationNuggetJSON(void)
  {
    if (flagHasUberRequest)
      {
        storeUberRequest->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UberStatusInformationNuggetJSON::getUberNuggetKind(void) const
  {
    return "UberStatus";
  }

bool UberStatusInformationNuggetJSON::hasUberRequest(void) const
  {
    return flagHasUberRequest;
  }

UberCompositeRequestJSON * UberStatusInformationNuggetJSON::getUberRequest(void)
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

const UberCompositeRequestJSON * UberStatusInformationNuggetJSON::getUberRequest(void) const
  {
    assert(flagHasUberRequest);
    return storeUberRequest;
  }

UberStatusInformationNuggetJSON *UberStatusInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberStatusInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberStatusInformationNuggetJSON>, UberStatusInformationNuggetJSON *, bool> generator("Type UberStatusInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
