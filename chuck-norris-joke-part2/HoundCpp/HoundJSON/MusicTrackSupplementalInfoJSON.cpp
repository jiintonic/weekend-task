/* file "MusicTrackSupplementalInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicTrackSupplementalInfoJSON.h"

#include "MusicTrackSupplementalInfoJSON.h"


MusicTrackSupplementalInfoJSON::MusicTrackSupplementalInfoJSON(const MusicTrackSupplementalInfoJSON &)
  {
    assert(false);
  }

MusicTrackSupplementalInfoJSON &MusicTrackSupplementalInfoJSON::operator=(const MusicTrackSupplementalInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicTrackSupplementalInfoJSON::fromJSONPrimaryIDType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPrimaryIDType(convert_classy);
    convert_classy->remove_reference();
  }

void MusicTrackSupplementalInfoJSON::fromJSONSpotifyTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpotifyTrackID of MusicTrackSupplementalInfoJSON is not a string.");
    setSpotifyTrackID(std::string(json_string->getData()));
  }

MusicTrackSupplementalInfoJSON::MusicTrackSupplementalInfoJSON(void) :
        flagHasPrimaryIDType(false),
        flagHasSpotifyTrackID(false)
  {
    extraIndex = create_string_index();
  }

MusicTrackSupplementalInfoJSON::~MusicTrackSupplementalInfoJSON(void)
  {
    if (flagHasPrimaryIDType)
      {
        storePrimaryIDType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MusicTrackSupplementalInfoJSON::hasPrimaryIDType(void) const
  {
    return flagHasPrimaryIDType;
  }

MusicThirdPartyJSON * MusicTrackSupplementalInfoJSON::getPrimaryIDType(void)
  {
    assert(flagHasPrimaryIDType);
    return storePrimaryIDType;
  }

const MusicThirdPartyJSON * MusicTrackSupplementalInfoJSON::getPrimaryIDType(void) const
  {
    assert(flagHasPrimaryIDType);
    return storePrimaryIDType;
  }

bool MusicTrackSupplementalInfoJSON::hasSpotifyTrackID(void) const
  {
    return flagHasSpotifyTrackID;
  }

std::string MusicTrackSupplementalInfoJSON::getSpotifyTrackID(void)
  {
    assert(flagHasSpotifyTrackID);
    return storeSpotifyTrackID;
  }

const std::string MusicTrackSupplementalInfoJSON::getSpotifyTrackID(void) const
  {
    assert(flagHasSpotifyTrackID);
    return storeSpotifyTrackID;
  }

MusicTrackSupplementalInfoJSON *MusicTrackSupplementalInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicTrackSupplementalInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicTrackSupplementalInfoJSON>, MusicTrackSupplementalInfoJSON *, bool> generator("Type MusicTrackSupplementalInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
