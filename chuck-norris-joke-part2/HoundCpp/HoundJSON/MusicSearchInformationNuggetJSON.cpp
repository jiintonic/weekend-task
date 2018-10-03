/* file "MusicSearchInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchInformationNuggetJSON.h"

#include "MusicSearchInformationNuggetJSON.h"


MusicSearchInformationNuggetJSON::MusicSearchInformationNuggetJSON(const MusicSearchInformationNuggetJSON &)
  {
    assert(false);
  }

MusicSearchInformationNuggetJSON &MusicSearchInformationNuggetJSON::operator=(const MusicSearchInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MusicSearchInformationNuggetJSON::MusicSearchInformationNuggetJSON(void)
  {
    extraIndex = create_string_index();
  }

MusicSearchInformationNuggetJSON::~MusicSearchInformationNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicSearchInformationNuggetJSON::getMusicNuggetKind(void) const
  {
    return "MusicSearch";
  }

MusicSearchInformationNuggetJSON *MusicSearchInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchInformationNuggetJSON>, MusicSearchInformationNuggetJSON *, bool> generator("Type MusicSearchInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
