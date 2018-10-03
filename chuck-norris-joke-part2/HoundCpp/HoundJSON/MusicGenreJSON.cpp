/* file "MusicGenreJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicGenreJSON.h"

#include "MusicGenreJSON.h"


MusicGenreJSON::MusicGenreJSON(const MusicGenreJSON &)
  {
    assert(false);
  }

MusicGenreJSON &MusicGenreJSON::operator=(const MusicGenreJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicGenreJSON::fromJSONBaseGenre(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BaseGenre of MusicGenreJSON is not a string.");
    setBaseGenre(std::string(json_string->getData()));
  }

void MusicGenreJSON::fromJSONMatchedGenre(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MatchedGenre of MusicGenreJSON is not a string.");
    setMatchedGenre(std::string(json_string->getData()));
  }

void MusicGenreJSON::fromJSONDateRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateRange(convert_classy);
    convert_classy->remove_reference();
  }

MusicGenreJSON::MusicGenreJSON(void) :
        flagHasBaseGenre(false),
        flagHasMatchedGenre(false),
        flagHasDateRange(false)
  {
  }

MusicGenreJSON::~MusicGenreJSON(void)
  {
    if (flagHasDateRange)
      {
        storeDateRange->remove_reference();
      }
  }

bool MusicGenreJSON::hasBaseGenre(void) const
  {
    return flagHasBaseGenre;
  }

std::string MusicGenreJSON::getBaseGenre(void)
  {
    assert(flagHasBaseGenre);
    return storeBaseGenre;
  }

const std::string MusicGenreJSON::getBaseGenre(void) const
  {
    assert(flagHasBaseGenre);
    return storeBaseGenre;
  }

bool MusicGenreJSON::hasMatchedGenre(void) const
  {
    return flagHasMatchedGenre;
  }

std::string MusicGenreJSON::getMatchedGenre(void)
  {
    assert(flagHasMatchedGenre);
    return storeMatchedGenre;
  }

const std::string MusicGenreJSON::getMatchedGenre(void) const
  {
    assert(flagHasMatchedGenre);
    return storeMatchedGenre;
  }

bool MusicGenreJSON::hasDateRange(void) const
  {
    return flagHasDateRange;
  }

DateTimeRangeSpecJSON * MusicGenreJSON::getDateRange(void)
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

const DateTimeRangeSpecJSON * MusicGenreJSON::getDateRange(void) const
  {
    assert(flagHasDateRange);
    return storeDateRange;
  }

MusicGenreJSON *MusicGenreJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicGenreJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicGenreJSON>, MusicGenreJSON *, bool> generator("Type MusicGenre", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
