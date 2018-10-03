/* file "SoundhoundLyricIDJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SoundhoundLyricIDJSON.h"

#include "SoundhoundLyricIDJSON.h"


SoundhoundLyricIDJSON::SoundhoundLyricIDJSON(const SoundhoundLyricIDJSON &)
  {
    assert(false);
  }

SoundhoundLyricIDJSON &SoundhoundLyricIDJSON::operator=(const SoundhoundLyricIDJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SoundhoundLyricIDJSON::fromJSONSoundhoundLyricID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SoundhoundLyricID of SoundhoundLyricIDJSON is not a string.");
    setSoundhoundLyricID(std::string(json_string->getData()));
  }

SoundhoundLyricIDJSON::SoundhoundLyricIDJSON(void) :
        flagHasSoundhoundLyricID(false)
  {
    extraIndex = create_string_index();
  }

SoundhoundLyricIDJSON::~SoundhoundLyricIDJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SoundhoundLyricIDJSON::hasSoundhoundLyricID(void) const
  {
    return flagHasSoundhoundLyricID;
  }

std::string SoundhoundLyricIDJSON::getSoundhoundLyricID(void)
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

const std::string SoundhoundLyricIDJSON::getSoundhoundLyricID(void) const
  {
    assert(flagHasSoundhoundLyricID);
    return storeSoundhoundLyricID;
  }

SoundhoundLyricIDJSON *SoundhoundLyricIDJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SoundhoundLyricIDJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SoundhoundLyricIDJSON>, SoundhoundLyricIDJSON *, bool> generator("Type SoundhoundLyricID", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
