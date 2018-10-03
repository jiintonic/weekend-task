/* file "GTLSoundhoundTrackIDJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GTLSoundhoundTrackIDJSON.h"

#include "GTLSoundhoundTrackIDJSON.h"


GTLSoundhoundTrackIDJSON::GTLSoundhoundTrackIDJSON(const GTLSoundhoundTrackIDJSON &)
  {
    assert(false);
  }

GTLSoundhoundTrackIDJSON &GTLSoundhoundTrackIDJSON::operator=(const GTLSoundhoundTrackIDJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GTLSoundhoundTrackIDJSON::fromJSONGTLSoundhoundTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GTLSoundhoundTrackID of GTLSoundhoundTrackIDJSON is not a string.");
    setGTLSoundhoundTrackID(std::string(json_string->getData()));
  }

GTLSoundhoundTrackIDJSON::GTLSoundhoundTrackIDJSON(void) :
        flagHasGTLSoundhoundTrackID(false)
  {
    extraIndex = create_string_index();
  }

GTLSoundhoundTrackIDJSON::~GTLSoundhoundTrackIDJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GTLSoundhoundTrackIDJSON::hasGTLSoundhoundTrackID(void) const
  {
    return flagHasGTLSoundhoundTrackID;
  }

std::string GTLSoundhoundTrackIDJSON::getGTLSoundhoundTrackID(void)
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

const std::string GTLSoundhoundTrackIDJSON::getGTLSoundhoundTrackID(void) const
  {
    assert(flagHasGTLSoundhoundTrackID);
    return storeGTLSoundhoundTrackID;
  }

GTLSoundhoundTrackIDJSON *GTLSoundhoundTrackIDJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GTLSoundhoundTrackIDJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GTLSoundhoundTrackIDJSON>, GTLSoundhoundTrackIDJSON *, bool> generator("Type GTLSoundhoundTrackID", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
