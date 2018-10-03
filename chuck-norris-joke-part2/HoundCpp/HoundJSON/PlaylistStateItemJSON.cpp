/* file "PlaylistStateItemJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PlaylistStateItemJSON.h"

#include "PlaylistStateItemJSON.h"


PlaylistStateItemJSON::PlaylistStateItemJSON(const PlaylistStateItemJSON &)
  {
    assert(false);
  }

PlaylistStateItemJSON &PlaylistStateItemJSON::operator=(const PlaylistStateItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlaylistStateItemJSON::fromJSONIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Index of PlaylistStateItemJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Index of PlaylistStateItemJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndex(extracted_integer);
  }

void PlaylistStateItemJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of PlaylistStateItemJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void PlaylistStateItemJSON::fromJSONMusicService(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicService(convert_classy);
    convert_classy->remove_reference();
  }

PlaylistStateItemJSON::PlaylistStateItemJSON(void) :
        flagHasIndex(false),
        flagHasID(false),
        flagHasMusicService(false)
  {
    extraIndex = create_string_index();
  }

PlaylistStateItemJSON::~PlaylistStateItemJSON(void)
  {
    if (flagHasMusicService)
      {
        storeMusicService->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PlaylistStateItemJSON::hasIndex(void) const
  {
    return flagHasIndex;
  }

OInteger PlaylistStateItemJSON::getIndex(void)
  {
    assert(flagHasIndex);
    return storeIndex;
  }

const OInteger PlaylistStateItemJSON::getIndex(void) const
  {
    assert(flagHasIndex);
    return storeIndex;
  }

bool PlaylistStateItemJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string PlaylistStateItemJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string PlaylistStateItemJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool PlaylistStateItemJSON::hasMusicService(void) const
  {
    return flagHasMusicService;
  }

MusicThirdPartyJSON * PlaylistStateItemJSON::getMusicService(void)
  {
    assert(flagHasMusicService);
    return storeMusicService;
  }

const MusicThirdPartyJSON * PlaylistStateItemJSON::getMusicService(void) const
  {
    assert(flagHasMusicService);
    return storeMusicService;
  }

PlaylistStateItemJSON *PlaylistStateItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PlaylistStateItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PlaylistStateItemJSON>, PlaylistStateItemJSON *, bool> generator("Type PlaylistStateItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
