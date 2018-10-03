/* file "RadioToSpotifyCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RadioToSpotifyCommandJSON.h"

#include "RadioToSpotifyCommandJSON.h"


RadioToSpotifyCommandJSON::RadioToSpotifyCommandJSON(const RadioToSpotifyCommandJSON &)
  {
    assert(false);
  }

RadioToSpotifyCommandJSON &RadioToSpotifyCommandJSON::operator=(const RadioToSpotifyCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RadioToSpotifyCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void RadioToSpotifyCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

RadioToSpotifyCommandJSON::RadioToSpotifyCommandJSON(void) :
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

RadioToSpotifyCommandJSON::~RadioToSpotifyCommandJSON(void)
  {
    if (flagHasAlreadyOnResult)
      {
        storeAlreadyOnResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RadioToSpotifyCommandJSON::getRadioCommandKind(void) const
  {
    return "RadioToSpotify";
  }

bool RadioToSpotifyCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * RadioToSpotifyCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * RadioToSpotifyCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

RadioToSpotifyCommandJSON *RadioToSpotifyCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RadioToSpotifyCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RadioToSpotifyCommandJSON>, RadioToSpotifyCommandJSON *, bool> generator("Type RadioToSpotifyCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
