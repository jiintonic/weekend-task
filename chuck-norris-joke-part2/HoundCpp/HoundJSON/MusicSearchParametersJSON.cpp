/* file "MusicSearchParametersJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicSearchParametersJSON.h"

#include "MusicSearchParametersJSON.h"


MusicSearchParametersJSON::MusicSearchParametersJSON(const MusicSearchParametersJSON &)
  {
    assert(false);
  }

MusicSearchParametersJSON &MusicSearchParametersJSON::operator=(const MusicSearchParametersJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicSearchParametersJSON::fromJSONSearchCriteriaType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchTypeJSON *convert_classy = MusicSearchTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchCriteriaType(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCurrentDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONRequestedNumberOfResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field RequestedNumberOfResults of MusicSearchParametersJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field RequestedNumberOfResults of MusicSearchParametersJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setRequestedNumberOfResults(extracted_integer);
  }

void MusicSearchParametersJSON::fromJSONRequestedField(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicRequestedFieldJSON *convert_classy = MusicRequestedFieldJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedField(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONAlbumReleaseDateRangeFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlbumReleaseDateRangeFilter(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONTrackReleaseDateRangeFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTrackReleaseDateRangeFilter(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONArtistBirthDateRangeFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArtistBirthDateRangeFilter(convert_classy);
    convert_classy->remove_reference();
  }

void MusicSearchParametersJSON::fromJSONUserRequestedTopEntities(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedTopEntities of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedTopEntities(the_bool);
  }

void MusicSearchParametersJSON::fromJSONUserRequestedLatestEntities(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedLatestEntities of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedLatestEntities(the_bool);
  }

void MusicSearchParametersJSON::fromJSONUserRequestedEarliestEntities(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedEarliestEntities of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedEarliestEntities(the_bool);
  }

void MusicSearchParametersJSON::fromJSONUserRequestedVideos(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedVideos of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedVideos(the_bool);
  }

void MusicSearchParametersJSON::fromJSONUserRequestedPreview(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedPreview of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedPreview(the_bool);
  }

void MusicSearchParametersJSON::fromJSONUserRequestedBuy(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedBuy of MusicSearchParametersJSON is not true for false.");
          }
      }
    setUserRequestedBuy(the_bool);
  }

void MusicSearchParametersJSON::fromJSONFilteredByArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FilteredByArtists of MusicSearchParametersJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field FilteredByArtists of MusicSearchParametersJSON has too few elements.");
    std::vector< MusicArtistJSON * > vector_FilteredByArtists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistJSON *convert_classy = MusicArtistJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FilteredByArtists1[num1] = convert_classy;
      }
    assert(vector_FilteredByArtists1.size() >= 1);
    initFilteredByArtists();
    for (size_t num3 = 0; num3 < vector_FilteredByArtists1.size(); ++num3)
        appendFilteredByArtists(vector_FilteredByArtists1[num3]);
    for (size_t num1 = 0; num1 < vector_FilteredByArtists1.size(); ++num1)
      {
        vector_FilteredByArtists1[num1]->remove_reference();
      }
  }

void MusicSearchParametersJSON::fromJSONFilteredByAlbums(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FilteredByAlbums of MusicSearchParametersJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field FilteredByAlbums of MusicSearchParametersJSON has too few elements.");
    std::vector< MusicAlbumJSON * > vector_FilteredByAlbums1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicAlbumJSON *convert_classy = MusicAlbumJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FilteredByAlbums1[num1] = convert_classy;
      }
    assert(vector_FilteredByAlbums1.size() >= 1);
    initFilteredByAlbums();
    for (size_t num4 = 0; num4 < vector_FilteredByAlbums1.size(); ++num4)
        appendFilteredByAlbums(vector_FilteredByAlbums1[num4]);
    for (size_t num1 = 0; num1 < vector_FilteredByAlbums1.size(); ++num1)
      {
        vector_FilteredByAlbums1[num1]->remove_reference();
      }
  }

MusicSearchParametersJSON::MusicSearchParametersJSON(void) :
        flagHasSearchCriteriaType(false),
        flagHasCurrentDateAndTime(false),
        flagHasRequestedNumberOfResults(false),
        flagHasRequestedField(false),
        flagHasAlbumReleaseDateRangeFilter(false),
        flagHasTrackReleaseDateRangeFilter(false),
        flagHasArtistBirthDateRangeFilter(false),
        flagHasUserRequestedTopEntities(false),
        flagHasUserRequestedLatestEntities(false),
        flagHasUserRequestedEarliestEntities(false),
        flagHasUserRequestedVideos(false),
        flagHasUserRequestedPreview(false),
        flagHasUserRequestedBuy(false),
        flagHasFilteredByArtists(false),
        flagHasFilteredByAlbums(false)
  {
  }

MusicSearchParametersJSON::~MusicSearchParametersJSON(void)
  {
    if (flagHasSearchCriteriaType)
      {
        storeSearchCriteriaType->remove_reference();
      }
    if (flagHasCurrentDateAndTime)
      {
        storeCurrentDateAndTime->remove_reference();
      }
    if (flagHasRequestedField)
      {
        storeRequestedField->remove_reference();
      }
    if (flagHasAlbumReleaseDateRangeFilter)
      {
        storeAlbumReleaseDateRangeFilter->remove_reference();
      }
    if (flagHasTrackReleaseDateRangeFilter)
      {
        storeTrackReleaseDateRangeFilter->remove_reference();
      }
    if (flagHasArtistBirthDateRangeFilter)
      {
        storeArtistBirthDateRangeFilter->remove_reference();
      }
    if (flagHasFilteredByArtists)
      {
        for (size_t num7 = 0; num7 < storeFilteredByArtists.size(); ++num7)
          {
            storeFilteredByArtists[num7]->remove_reference();
          }
      }
    if (flagHasFilteredByAlbums)
      {
        for (size_t num8 = 0; num8 < storeFilteredByAlbums.size(); ++num8)
          {
            storeFilteredByAlbums[num8]->remove_reference();
          }
      }
  }

bool MusicSearchParametersJSON::hasSearchCriteriaType(void) const
  {
    return flagHasSearchCriteriaType;
  }

MusicSearchTypeJSON * MusicSearchParametersJSON::getSearchCriteriaType(void)
  {
    assert(flagHasSearchCriteriaType);
    return storeSearchCriteriaType;
  }

const MusicSearchTypeJSON * MusicSearchParametersJSON::getSearchCriteriaType(void) const
  {
    assert(flagHasSearchCriteriaType);
    return storeSearchCriteriaType;
  }

MusicSearchTypeJSON::TypeValue MusicSearchParametersJSON::getSearchCriteriaTypeValue(void)
  {
    return getSearchCriteriaType()->getValue();
  }

const MusicSearchTypeJSON::TypeValue MusicSearchParametersJSON::getSearchCriteriaTypeValue(void) const
  {
    return getSearchCriteriaType()->getValue();
  }

const char *MusicSearchParametersJSON::getSearchCriteriaTypeAsChars(void) const
  {
    return getSearchCriteriaType()->getValueAsChars();
  }

std::string MusicSearchParametersJSON::getSearchCriteriaTypeAsString(void) const
  {
    return getSearchCriteriaType()->getValueAsString();
  }

bool MusicSearchParametersJSON::hasCurrentDateAndTime(void) const
  {
    return flagHasCurrentDateAndTime;
  }

DateAndOrTimeJSON * MusicSearchParametersJSON::getCurrentDateAndTime(void)
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

const DateAndOrTimeJSON * MusicSearchParametersJSON::getCurrentDateAndTime(void) const
  {
    assert(flagHasCurrentDateAndTime);
    return storeCurrentDateAndTime;
  }

bool MusicSearchParametersJSON::hasRequestedNumberOfResults(void) const
  {
    return flagHasRequestedNumberOfResults;
  }

OInteger MusicSearchParametersJSON::getRequestedNumberOfResults(void)
  {
    assert(flagHasRequestedNumberOfResults);
    return storeRequestedNumberOfResults;
  }

const OInteger MusicSearchParametersJSON::getRequestedNumberOfResults(void) const
  {
    assert(flagHasRequestedNumberOfResults);
    return storeRequestedNumberOfResults;
  }

bool MusicSearchParametersJSON::hasRequestedField(void) const
  {
    return flagHasRequestedField;
  }

MusicRequestedFieldJSON * MusicSearchParametersJSON::getRequestedField(void)
  {
    assert(flagHasRequestedField);
    return storeRequestedField;
  }

const MusicRequestedFieldJSON * MusicSearchParametersJSON::getRequestedField(void) const
  {
    assert(flagHasRequestedField);
    return storeRequestedField;
  }

MusicRequestedFieldJSON::TypeValue MusicSearchParametersJSON::getRequestedFieldValue(void)
  {
    return getRequestedField()->getValue();
  }

const MusicRequestedFieldJSON::TypeValue MusicSearchParametersJSON::getRequestedFieldValue(void) const
  {
    return getRequestedField()->getValue();
  }

const char *MusicSearchParametersJSON::getRequestedFieldAsChars(void) const
  {
    return getRequestedField()->getValueAsChars();
  }

std::string MusicSearchParametersJSON::getRequestedFieldAsString(void) const
  {
    return getRequestedField()->getValueAsString();
  }

bool MusicSearchParametersJSON::hasAlbumReleaseDateRangeFilter(void) const
  {
    return flagHasAlbumReleaseDateRangeFilter;
  }

DateTimeRangeSpecJSON * MusicSearchParametersJSON::getAlbumReleaseDateRangeFilter(void)
  {
    assert(flagHasAlbumReleaseDateRangeFilter);
    return storeAlbumReleaseDateRangeFilter;
  }

const DateTimeRangeSpecJSON * MusicSearchParametersJSON::getAlbumReleaseDateRangeFilter(void) const
  {
    assert(flagHasAlbumReleaseDateRangeFilter);
    return storeAlbumReleaseDateRangeFilter;
  }

bool MusicSearchParametersJSON::hasTrackReleaseDateRangeFilter(void) const
  {
    return flagHasTrackReleaseDateRangeFilter;
  }

DateTimeRangeSpecJSON * MusicSearchParametersJSON::getTrackReleaseDateRangeFilter(void)
  {
    assert(flagHasTrackReleaseDateRangeFilter);
    return storeTrackReleaseDateRangeFilter;
  }

const DateTimeRangeSpecJSON * MusicSearchParametersJSON::getTrackReleaseDateRangeFilter(void) const
  {
    assert(flagHasTrackReleaseDateRangeFilter);
    return storeTrackReleaseDateRangeFilter;
  }

bool MusicSearchParametersJSON::hasArtistBirthDateRangeFilter(void) const
  {
    return flagHasArtistBirthDateRangeFilter;
  }

DateTimeRangeSpecJSON * MusicSearchParametersJSON::getArtistBirthDateRangeFilter(void)
  {
    assert(flagHasArtistBirthDateRangeFilter);
    return storeArtistBirthDateRangeFilter;
  }

const DateTimeRangeSpecJSON * MusicSearchParametersJSON::getArtistBirthDateRangeFilter(void) const
  {
    assert(flagHasArtistBirthDateRangeFilter);
    return storeArtistBirthDateRangeFilter;
  }

bool MusicSearchParametersJSON::hasUserRequestedTopEntities(void) const
  {
    return flagHasUserRequestedTopEntities;
  }

bool MusicSearchParametersJSON::getUserRequestedTopEntities(void)
  {
    assert(flagHasUserRequestedTopEntities);
    return storeUserRequestedTopEntities;
  }

const bool MusicSearchParametersJSON::getUserRequestedTopEntities(void) const
  {
    assert(flagHasUserRequestedTopEntities);
    return storeUserRequestedTopEntities;
  }

bool MusicSearchParametersJSON::hasUserRequestedLatestEntities(void) const
  {
    return flagHasUserRequestedLatestEntities;
  }

bool MusicSearchParametersJSON::getUserRequestedLatestEntities(void)
  {
    assert(flagHasUserRequestedLatestEntities);
    return storeUserRequestedLatestEntities;
  }

const bool MusicSearchParametersJSON::getUserRequestedLatestEntities(void) const
  {
    assert(flagHasUserRequestedLatestEntities);
    return storeUserRequestedLatestEntities;
  }

bool MusicSearchParametersJSON::hasUserRequestedEarliestEntities(void) const
  {
    return flagHasUserRequestedEarliestEntities;
  }

bool MusicSearchParametersJSON::getUserRequestedEarliestEntities(void)
  {
    assert(flagHasUserRequestedEarliestEntities);
    return storeUserRequestedEarliestEntities;
  }

const bool MusicSearchParametersJSON::getUserRequestedEarliestEntities(void) const
  {
    assert(flagHasUserRequestedEarliestEntities);
    return storeUserRequestedEarliestEntities;
  }

bool MusicSearchParametersJSON::hasUserRequestedVideos(void) const
  {
    return flagHasUserRequestedVideos;
  }

bool MusicSearchParametersJSON::getUserRequestedVideos(void)
  {
    assert(flagHasUserRequestedVideos);
    return storeUserRequestedVideos;
  }

const bool MusicSearchParametersJSON::getUserRequestedVideos(void) const
  {
    assert(flagHasUserRequestedVideos);
    return storeUserRequestedVideos;
  }

bool MusicSearchParametersJSON::hasUserRequestedPreview(void) const
  {
    return flagHasUserRequestedPreview;
  }

bool MusicSearchParametersJSON::getUserRequestedPreview(void)
  {
    assert(flagHasUserRequestedPreview);
    return storeUserRequestedPreview;
  }

const bool MusicSearchParametersJSON::getUserRequestedPreview(void) const
  {
    assert(flagHasUserRequestedPreview);
    return storeUserRequestedPreview;
  }

bool MusicSearchParametersJSON::hasUserRequestedBuy(void) const
  {
    return flagHasUserRequestedBuy;
  }

bool MusicSearchParametersJSON::getUserRequestedBuy(void)
  {
    assert(flagHasUserRequestedBuy);
    return storeUserRequestedBuy;
  }

const bool MusicSearchParametersJSON::getUserRequestedBuy(void) const
  {
    assert(flagHasUserRequestedBuy);
    return storeUserRequestedBuy;
  }

bool MusicSearchParametersJSON::hasFilteredByArtists(void) const
  {
    return flagHasFilteredByArtists;
  }

size_t MusicSearchParametersJSON::countOfFilteredByArtists(void) const
  {
    assert(flagHasFilteredByArtists);
    return storeFilteredByArtists.size();
  }

MusicArtistJSON * MusicSearchParametersJSON::elementOfFilteredByArtists(size_t element_num)
  {
    assert(flagHasFilteredByArtists);
    return storeFilteredByArtists[element_num];
  }

const MusicArtistJSON * MusicSearchParametersJSON::elementOfFilteredByArtists(size_t element_num) const
  {
    assert(flagHasFilteredByArtists);
    return storeFilteredByArtists[element_num];
  }

std::vector< MusicArtistJSON * > MusicSearchParametersJSON::getFilteredByArtists(void)
  {
    assert(flagHasFilteredByArtists);
    return storeFilteredByArtists;
  }

const std::vector< MusicArtistJSON * > MusicSearchParametersJSON::getFilteredByArtists(void) const
  {
    assert(flagHasFilteredByArtists);
    return storeFilteredByArtists;
  }

bool MusicSearchParametersJSON::hasFilteredByAlbums(void) const
  {
    return flagHasFilteredByAlbums;
  }

size_t MusicSearchParametersJSON::countOfFilteredByAlbums(void) const
  {
    assert(flagHasFilteredByAlbums);
    return storeFilteredByAlbums.size();
  }

MusicAlbumJSON * MusicSearchParametersJSON::elementOfFilteredByAlbums(size_t element_num)
  {
    assert(flagHasFilteredByAlbums);
    return storeFilteredByAlbums[element_num];
  }

const MusicAlbumJSON * MusicSearchParametersJSON::elementOfFilteredByAlbums(size_t element_num) const
  {
    assert(flagHasFilteredByAlbums);
    return storeFilteredByAlbums[element_num];
  }

std::vector< MusicAlbumJSON * > MusicSearchParametersJSON::getFilteredByAlbums(void)
  {
    assert(flagHasFilteredByAlbums);
    return storeFilteredByAlbums;
  }

const std::vector< MusicAlbumJSON * > MusicSearchParametersJSON::getFilteredByAlbums(void) const
  {
    assert(flagHasFilteredByAlbums);
    return storeFilteredByAlbums;
  }

char MusicSearchParametersJSON::Generator::lowerBoundRequestedNumberOfResults[] = "1";
MusicSearchParametersJSON *MusicSearchParametersJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicSearchParametersJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicSearchParametersJSON>, MusicSearchParametersJSON *, bool> generator("Type MusicSearchParameters", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
