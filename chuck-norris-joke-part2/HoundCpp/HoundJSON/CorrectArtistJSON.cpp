/* file "CorrectArtistJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CorrectArtistJSON.h"

#include "CorrectArtistJSON.h"


CorrectArtistJSON::CorrectArtistJSON(const CorrectArtistJSON &)
  {
    assert(false);
  }

CorrectArtistJSON &CorrectArtistJSON::operator=(const CorrectArtistJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CorrectArtistJSON::fromJSONCorrectArtist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectArtist of CorrectArtistJSON is not a string.");
    setCorrectArtist(std::string(json_string->getData()));
  }

CorrectArtistJSON::CorrectArtistJSON(void) :
        flagHasCorrectArtist(false)
  {
    extraIndex = create_string_index();
  }

CorrectArtistJSON::~CorrectArtistJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CorrectArtistJSON::hasCorrectArtist(void) const
  {
    return flagHasCorrectArtist;
  }

std::string CorrectArtistJSON::getCorrectArtist(void)
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

const std::string CorrectArtistJSON::getCorrectArtist(void) const
  {
    assert(flagHasCorrectArtist);
    return storeCorrectArtist;
  }

CorrectArtistJSON *CorrectArtistJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CorrectArtistJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CorrectArtistJSON>, CorrectArtistJSON *, bool> generator("Type CorrectArtist", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
