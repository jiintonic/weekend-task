/* file "MusicVideoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicVideoJSON.h"

#include "MusicVideoJSON.h"


MusicVideoJSON::MusicVideoJSON(const MusicVideoJSON &)
  {
    assert(false);
  }

MusicVideoJSON &MusicVideoJSON::operator=(const MusicVideoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicVideoJSON::fromJSONVideoID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field VideoID of MusicVideoJSON is not a string.");
    setVideoID(std::string(json_string->getData()));
  }

void MusicVideoJSON::fromJSONAutoPlayPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field AutoPlayPreview of MusicVideoJSON is not true for false.");
          }
      }
    setAutoPlayPreview(the_bool);
  }

void MusicVideoJSON::fromJSONTrack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicTrackJSON *convert_classy = MusicTrackJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTrack(convert_classy);
    convert_classy->remove_reference();
  }

MusicVideoJSON::MusicVideoJSON(void) :
        flagHasVideoID(false),
        flagHasAutoPlayPreview(false),
        flagHasTrack(false)
  {
  }

MusicVideoJSON::~MusicVideoJSON(void)
  {
    if (flagHasTrack)
      {
        storeTrack->remove_reference();
      }
  }

bool MusicVideoJSON::hasVideoID(void) const
  {
    return flagHasVideoID;
  }

std::string MusicVideoJSON::getVideoID(void)
  {
    assert(flagHasVideoID);
    return storeVideoID;
  }

const std::string MusicVideoJSON::getVideoID(void) const
  {
    assert(flagHasVideoID);
    return storeVideoID;
  }

bool MusicVideoJSON::hasAutoPlayPreview(void) const
  {
    return flagHasAutoPlayPreview;
  }

bool MusicVideoJSON::getAutoPlayPreview(void)
  {
    assert(flagHasAutoPlayPreview);
    return storeAutoPlayPreview;
  }

const bool MusicVideoJSON::getAutoPlayPreview(void) const
  {
    assert(flagHasAutoPlayPreview);
    return storeAutoPlayPreview;
  }

bool MusicVideoJSON::hasTrack(void) const
  {
    return flagHasTrack;
  }

MusicTrackJSON * MusicVideoJSON::getTrack(void)
  {
    assert(flagHasTrack);
    return storeTrack;
  }

const MusicTrackJSON * MusicVideoJSON::getTrack(void) const
  {
    assert(flagHasTrack);
    return storeTrack;
  }

MusicVideoJSON *MusicVideoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicVideoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicVideoJSON>, MusicVideoJSON *, bool> generator("Type MusicVideo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
