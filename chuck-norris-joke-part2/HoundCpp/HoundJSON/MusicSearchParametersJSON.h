/* file "MusicSearchParametersJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHPARAMETERSJSON_H
#define MUSICSEARCHPARAMETERSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "MusicSearchTypeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "MusicRequestedFieldJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "MusicArtistJSON.h"
#include "MusicAlbumJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicSearchParametersJSON : public ReferenceCounted
  {
  private:
    bool flagHasSearchCriteriaType;
    MusicSearchTypeJSON * storeSearchCriteriaType;
    bool flagHasCurrentDateAndTime;
    DateAndOrTimeJSON * storeCurrentDateAndTime;
    bool flagHasRequestedNumberOfResults;
    OInteger storeRequestedNumberOfResults;
    bool flagHasRequestedField;
    MusicRequestedFieldJSON * storeRequestedField;
    bool flagHasAlbumReleaseDateRangeFilter;
    DateTimeRangeSpecJSON * storeAlbumReleaseDateRangeFilter;
    bool flagHasTrackReleaseDateRangeFilter;
    DateTimeRangeSpecJSON * storeTrackReleaseDateRangeFilter;
    bool flagHasArtistBirthDateRangeFilter;
    DateTimeRangeSpecJSON * storeArtistBirthDateRangeFilter;
    bool flagHasUserRequestedTopEntities;
    bool storeUserRequestedTopEntities;
    bool flagHasUserRequestedLatestEntities;
    bool storeUserRequestedLatestEntities;
    bool flagHasUserRequestedEarliestEntities;
    bool storeUserRequestedEarliestEntities;
    bool flagHasUserRequestedVideos;
    bool storeUserRequestedVideos;
    bool flagHasUserRequestedPreview;
    bool storeUserRequestedPreview;
    bool flagHasUserRequestedBuy;
    bool storeUserRequestedBuy;
    bool flagHasFilteredByArtists;
    std::vector< MusicArtistJSON * > storeFilteredByArtists;
    bool flagHasFilteredByAlbums;
    std::vector< MusicAlbumJSON * > storeFilteredByAlbums;

    MusicSearchParametersJSON(const MusicSearchParametersJSON &);
    MusicSearchParametersJSON & operator=(const MusicSearchParametersJSON &other);

    void  fromJSONSearchCriteriaType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedNumberOfResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedField(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumReleaseDateRangeFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackReleaseDateRangeFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistBirthDateRangeFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedTopEntities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedLatestEntities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedEarliestEntities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedVideos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedBuy(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilteredByArtists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilteredByAlbums(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicSearchParametersJSON(void);
    virtual ~MusicSearchParametersJSON(void);
    bool  hasSearchCriteriaType(void) const;
    MusicSearchTypeJSON *  getSearchCriteriaType(void);
    const MusicSearchTypeJSON *  getSearchCriteriaType(void) const;
    MusicSearchTypeJSON::TypeValue  getSearchCriteriaTypeValue(void);
    const MusicSearchTypeJSON::TypeValue  getSearchCriteriaTypeValue(void) const;
    const char * getSearchCriteriaTypeAsChars(void) const;
    std::string  getSearchCriteriaTypeAsString(void) const;
    bool  hasCurrentDateAndTime(void) const;
    DateAndOrTimeJSON *  getCurrentDateAndTime(void);
    const DateAndOrTimeJSON *  getCurrentDateAndTime(void) const;
    bool  hasRequestedNumberOfResults(void) const;
    OInteger  getRequestedNumberOfResults(void);
    const OInteger  getRequestedNumberOfResults(void) const;
    bool  hasRequestedField(void) const;
    MusicRequestedFieldJSON *  getRequestedField(void);
    const MusicRequestedFieldJSON *  getRequestedField(void) const;
    MusicRequestedFieldJSON::TypeValue  getRequestedFieldValue(void);
    const MusicRequestedFieldJSON::TypeValue  getRequestedFieldValue(void) const;
    const char * getRequestedFieldAsChars(void) const;
    std::string  getRequestedFieldAsString(void) const;
    bool  hasAlbumReleaseDateRangeFilter(void) const;
    DateTimeRangeSpecJSON *  getAlbumReleaseDateRangeFilter(void);
    const DateTimeRangeSpecJSON *  getAlbumReleaseDateRangeFilter(void) const;
    bool  hasTrackReleaseDateRangeFilter(void) const;
    DateTimeRangeSpecJSON *  getTrackReleaseDateRangeFilter(void);
    const DateTimeRangeSpecJSON *  getTrackReleaseDateRangeFilter(void) const;
    bool  hasArtistBirthDateRangeFilter(void) const;
    DateTimeRangeSpecJSON *  getArtistBirthDateRangeFilter(void);
    const DateTimeRangeSpecJSON *  getArtistBirthDateRangeFilter(void) const;
    bool  hasUserRequestedTopEntities(void) const;
    bool  getUserRequestedTopEntities(void);
    const bool  getUserRequestedTopEntities(void) const;
    bool  hasUserRequestedLatestEntities(void) const;
    bool  getUserRequestedLatestEntities(void);
    const bool  getUserRequestedLatestEntities(void) const;
    bool  hasUserRequestedEarliestEntities(void) const;
    bool  getUserRequestedEarliestEntities(void);
    const bool  getUserRequestedEarliestEntities(void) const;
    bool  hasUserRequestedVideos(void) const;
    bool  getUserRequestedVideos(void);
    const bool  getUserRequestedVideos(void) const;
    bool  hasUserRequestedPreview(void) const;
    bool  getUserRequestedPreview(void);
    const bool  getUserRequestedPreview(void) const;
    bool  hasUserRequestedBuy(void) const;
    bool  getUserRequestedBuy(void);
    const bool  getUserRequestedBuy(void) const;
    bool  hasFilteredByArtists(void) const;
    size_t  countOfFilteredByArtists(void) const;
    MusicArtistJSON *  elementOfFilteredByArtists(size_t element_num);
    const MusicArtistJSON *  elementOfFilteredByArtists(size_t element_num) const;
    std::vector< MusicArtistJSON * >  getFilteredByArtists(void);
    const std::vector< MusicArtistJSON * >  getFilteredByArtists(void) const;
    bool  hasFilteredByAlbums(void) const;
    size_t  countOfFilteredByAlbums(void) const;
    MusicAlbumJSON *  elementOfFilteredByAlbums(size_t element_num);
    const MusicAlbumJSON *  elementOfFilteredByAlbums(size_t element_num) const;
    std::vector< MusicAlbumJSON * >  getFilteredByAlbums(void);
    const std::vector< MusicAlbumJSON * >  getFilteredByAlbums(void) const;


    void setSearchCriteriaType(MusicSearchTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSearchCriteriaType)
          {
            storeSearchCriteriaType->remove_reference();
          }
        flagHasSearchCriteriaType = true;
        storeSearchCriteriaType = new_value;
      }
    void setSearchCriteriaType(MusicSearchTypeJSON::TypeValue new_value)
      {
        setSearchCriteriaType(new MusicSearchTypeJSON(new_value));
      }
    void setSearchCriteriaType(const char *chars)
      {
        MusicSearchTypeJSON::TypeValueKnownValues known = MusicSearchTypeJSON::stringToValue(chars);
        MusicSearchTypeJSON::TypeValue new_value;
        if (known == MusicSearchTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSearchCriteriaType(new_value);
      }
    void setSearchCriteriaType(std::string the_string)
      {
        setSearchCriteriaType(the_string.c_str());
      }
    void unsetSearchCriteriaType(void)
      {
        if (flagHasSearchCriteriaType)
          {
            storeSearchCriteriaType->remove_reference();
          }
        flagHasSearchCriteriaType = false;
      }
    void setCurrentDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = true;
        storeCurrentDateAndTime = new_value;
      }
    void unsetCurrentDateAndTime(void)
      {
        if (flagHasCurrentDateAndTime)
          {
            storeCurrentDateAndTime->remove_reference();
          }
        flagHasCurrentDateAndTime = false;
      }
    void setRequestedNumberOfResults(OInteger new_value)
      {
        flagHasRequestedNumberOfResults = true;
        if (new_value < 1)
            throw("The value for field RequestedNumberOfResults of MusicSearchParametersJSON is less than the lower bound (1) for that field.");
        storeRequestedNumberOfResults = new_value;
      }
    void unsetRequestedNumberOfResults(void)
      {
        flagHasRequestedNumberOfResults = false;
      }
    void setRequestedField(MusicRequestedFieldJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedField)
          {
            storeRequestedField->remove_reference();
          }
        flagHasRequestedField = true;
        storeRequestedField = new_value;
      }
    void setRequestedField(MusicRequestedFieldJSON::TypeValue new_value)
      {
        setRequestedField(new MusicRequestedFieldJSON(new_value));
      }
    void setRequestedField(const char *chars)
      {
        MusicRequestedFieldJSON::TypeValueKnownValues known = MusicRequestedFieldJSON::stringToValue(chars);
        MusicRequestedFieldJSON::TypeValue new_value;
        if (known == MusicRequestedFieldJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setRequestedField(new_value);
      }
    void setRequestedField(std::string the_string)
      {
        setRequestedField(the_string.c_str());
      }
    void unsetRequestedField(void)
      {
        if (flagHasRequestedField)
          {
            storeRequestedField->remove_reference();
          }
        flagHasRequestedField = false;
      }
    void setAlbumReleaseDateRangeFilter(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlbumReleaseDateRangeFilter)
          {
            storeAlbumReleaseDateRangeFilter->remove_reference();
          }
        flagHasAlbumReleaseDateRangeFilter = true;
        storeAlbumReleaseDateRangeFilter = new_value;
      }
    void unsetAlbumReleaseDateRangeFilter(void)
      {
        if (flagHasAlbumReleaseDateRangeFilter)
          {
            storeAlbumReleaseDateRangeFilter->remove_reference();
          }
        flagHasAlbumReleaseDateRangeFilter = false;
      }
    void setTrackReleaseDateRangeFilter(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTrackReleaseDateRangeFilter)
          {
            storeTrackReleaseDateRangeFilter->remove_reference();
          }
        flagHasTrackReleaseDateRangeFilter = true;
        storeTrackReleaseDateRangeFilter = new_value;
      }
    void unsetTrackReleaseDateRangeFilter(void)
      {
        if (flagHasTrackReleaseDateRangeFilter)
          {
            storeTrackReleaseDateRangeFilter->remove_reference();
          }
        flagHasTrackReleaseDateRangeFilter = false;
      }
    void setArtistBirthDateRangeFilter(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasArtistBirthDateRangeFilter)
          {
            storeArtistBirthDateRangeFilter->remove_reference();
          }
        flagHasArtistBirthDateRangeFilter = true;
        storeArtistBirthDateRangeFilter = new_value;
      }
    void unsetArtistBirthDateRangeFilter(void)
      {
        if (flagHasArtistBirthDateRangeFilter)
          {
            storeArtistBirthDateRangeFilter->remove_reference();
          }
        flagHasArtistBirthDateRangeFilter = false;
      }
    void setUserRequestedTopEntities(bool new_value)
      {
        flagHasUserRequestedTopEntities = true;
        storeUserRequestedTopEntities = new_value;
      }
    void unsetUserRequestedTopEntities(void)
      {
        flagHasUserRequestedTopEntities = false;
      }
    void setUserRequestedLatestEntities(bool new_value)
      {
        flagHasUserRequestedLatestEntities = true;
        storeUserRequestedLatestEntities = new_value;
      }
    void unsetUserRequestedLatestEntities(void)
      {
        flagHasUserRequestedLatestEntities = false;
      }
    void setUserRequestedEarliestEntities(bool new_value)
      {
        flagHasUserRequestedEarliestEntities = true;
        storeUserRequestedEarliestEntities = new_value;
      }
    void unsetUserRequestedEarliestEntities(void)
      {
        flagHasUserRequestedEarliestEntities = false;
      }
    void setUserRequestedVideos(bool new_value)
      {
        flagHasUserRequestedVideos = true;
        storeUserRequestedVideos = new_value;
      }
    void unsetUserRequestedVideos(void)
      {
        flagHasUserRequestedVideos = false;
      }
    void setUserRequestedPreview(bool new_value)
      {
        flagHasUserRequestedPreview = true;
        storeUserRequestedPreview = new_value;
      }
    void unsetUserRequestedPreview(void)
      {
        flagHasUserRequestedPreview = false;
      }
    void setUserRequestedBuy(bool new_value)
      {
        flagHasUserRequestedBuy = true;
        storeUserRequestedBuy = new_value;
      }
    void unsetUserRequestedBuy(void)
      {
        flagHasUserRequestedBuy = false;
      }
    void initFilteredByArtists(void)
      {
        if (flagHasFilteredByArtists)
          {
            for (size_t num3 = 0; num3 < storeFilteredByArtists.size(); ++num3)
              {
                storeFilteredByArtists[num3]->remove_reference();
              }
          }
        flagHasFilteredByArtists = true;
        storeFilteredByArtists.clear();
      }
    void appendFilteredByArtists(MusicArtistJSON * to_append)
      {
        if (!flagHasFilteredByArtists)
          {
            flagHasFilteredByArtists = true;
            storeFilteredByArtists.clear();
          }
        assert(flagHasFilteredByArtists);
        to_append->add_reference();
        storeFilteredByArtists.push_back(to_append);
      }
    void unsetFilteredByArtists(void)
      {
        if (flagHasFilteredByArtists)
          {
            for (size_t num4 = 0; num4 < storeFilteredByArtists.size(); ++num4)
              {
                storeFilteredByArtists[num4]->remove_reference();
              }
          }
        flagHasFilteredByArtists = false;
        storeFilteredByArtists.clear();
      }
    void initFilteredByAlbums(void)
      {
        if (flagHasFilteredByAlbums)
          {
            for (size_t num5 = 0; num5 < storeFilteredByAlbums.size(); ++num5)
              {
                storeFilteredByAlbums[num5]->remove_reference();
              }
          }
        flagHasFilteredByAlbums = true;
        storeFilteredByAlbums.clear();
      }
    void appendFilteredByAlbums(MusicAlbumJSON * to_append)
      {
        if (!flagHasFilteredByAlbums)
          {
            flagHasFilteredByAlbums = true;
            storeFilteredByAlbums.clear();
          }
        assert(flagHasFilteredByAlbums);
        to_append->add_reference();
        storeFilteredByAlbums.push_back(to_append);
      }
    void unsetFilteredByAlbums(void)
      {
        if (flagHasFilteredByAlbums)
          {
            for (size_t num6 = 0; num6 < storeFilteredByAlbums.size(); ++num6)
              {
                storeFilteredByAlbums[num6]->remove_reference();
              }
          }
        flagHasFilteredByAlbums = false;
        storeFilteredByAlbums.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasSearchCriteriaType);
        handler->start_pair("SearchCriteriaType");
        storeSearchCriteriaType->write_as_json(handler);
        if (flagHasCurrentDateAndTime)
          {
            handler->start_pair("CurrentDateAndTime");
            storeCurrentDateAndTime->write_as_json(handler);
          }
        if (flagHasRequestedNumberOfResults)
          {
            handler->start_pair("RequestedNumberOfResults");
            handler->number_value(storeRequestedNumberOfResults.get_o_integer());
          }
        if (flagHasRequestedField)
          {
            handler->start_pair("RequestedField");
            storeRequestedField->write_as_json(handler);
          }
        if (flagHasAlbumReleaseDateRangeFilter)
          {
            handler->start_pair("AlbumReleaseDateRangeFilter");
            storeAlbumReleaseDateRangeFilter->write_as_json(handler);
          }
        if (flagHasTrackReleaseDateRangeFilter)
          {
            handler->start_pair("TrackReleaseDateRangeFilter");
            storeTrackReleaseDateRangeFilter->write_as_json(handler);
          }
        if (flagHasArtistBirthDateRangeFilter)
          {
            handler->start_pair("ArtistBirthDateRangeFilter");
            storeArtistBirthDateRangeFilter->write_as_json(handler);
          }
        if (flagHasUserRequestedTopEntities)
          {
            handler->start_pair("UserRequestedTopEntities");
            handler->boolean_value(storeUserRequestedTopEntities);
          }
        if (flagHasUserRequestedLatestEntities)
          {
            handler->start_pair("UserRequestedLatestEntities");
            handler->boolean_value(storeUserRequestedLatestEntities);
          }
        if (flagHasUserRequestedEarliestEntities)
          {
            handler->start_pair("UserRequestedEarliestEntities");
            handler->boolean_value(storeUserRequestedEarliestEntities);
          }
        if (flagHasUserRequestedVideos)
          {
            handler->start_pair("UserRequestedVideos");
            handler->boolean_value(storeUserRequestedVideos);
          }
        if (flagHasUserRequestedPreview)
          {
            handler->start_pair("UserRequestedPreview");
            handler->boolean_value(storeUserRequestedPreview);
          }
        if (flagHasUserRequestedBuy)
          {
            handler->start_pair("UserRequestedBuy");
            handler->boolean_value(storeUserRequestedBuy);
          }
        if (flagHasFilteredByArtists)
          {
            handler->start_pair("FilteredByArtists");
            assert(storeFilteredByArtists.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeFilteredByArtists.size(); ++num1)
              {
                storeFilteredByArtists[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasFilteredByAlbums)
          {
            handler->start_pair("FilteredByAlbums");
            assert(storeFilteredByAlbums.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeFilteredByAlbums.size(); ++num2)
              {
                storeFilteredByAlbums[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSearchCriteriaType()))
          {
            return "When parsing the object for %what%, the \"SearchCriteriaType\" field was missing.";
          }
        return NULL;
      }

    static MusicSearchParametersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchParametersJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchParametersJSON>, MusicSearchParametersJSON *, bool> generator("Type MusicSearchParameters", ignore_extras);
            parse_json_value(text, "Text for MusicSearchParametersJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchParametersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchParametersJSON>, MusicSearchParametersJSON *, bool> generator("Type MusicSearchParameters", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<MusicSearchTypeJSON::Generator, RCHandle<MusicSearchTypeJSON>, MusicSearchTypeJSON *, bool > fieldGeneratorSearchCriteriaType;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCurrentDateAndTime;
        static char lowerBoundRequestedNumberOfResults[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRequestedNumberOfResults>, OInteger, o_integer > fieldGeneratorRequestedNumberOfResults;
        JSONHoldingGenerator<MusicRequestedFieldJSON::Generator, RCHandle<MusicRequestedFieldJSON>, MusicRequestedFieldJSON *, bool > fieldGeneratorRequestedField;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorAlbumReleaseDateRangeFilter;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorTrackReleaseDateRangeFilter;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorArtistBirthDateRangeFilter;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedTopEntities;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedLatestEntities;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedEarliestEntities;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedVideos;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedPreview;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedBuy;
        JSONHoldingArrayGenerator<MusicArtistJSON::Generator, RCHandle<MusicArtistJSON>, MusicArtistJSON *, bool > fieldGeneratorFilteredByArtists;
        JSONHoldingArrayGenerator<MusicAlbumJSON::Generator, RCHandle<MusicAlbumJSON>, MusicAlbumJSON *, bool > fieldGeneratorFilteredByAlbums;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            MusicSearchParametersJSON *result = new MusicSearchParametersJSON();
            assert(result != NULL);
            RCHandle<MusicSearchParametersJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicSearchParametersJSON *result)
          {
            if (fieldGeneratorSearchCriteriaType.have_value)
              {
                result->setSearchCriteriaType(fieldGeneratorSearchCriteriaType.value.referenced());
                fieldGeneratorSearchCriteriaType.have_value = false;
              }
            else if (!(result->hasSearchCriteriaType()))
              {
                error("When parsing the object for %what%, the \"SearchCriteriaType\" field was missing.");
              }
            if (fieldGeneratorCurrentDateAndTime.have_value)
              {
                result->setCurrentDateAndTime(fieldGeneratorCurrentDateAndTime.value.referenced());
                fieldGeneratorCurrentDateAndTime.have_value = false;
              }
            if (fieldGeneratorRequestedNumberOfResults.have_value)
              {
                result->setRequestedNumberOfResults(fieldGeneratorRequestedNumberOfResults.value);
                fieldGeneratorRequestedNumberOfResults.have_value = false;
              }
            if (fieldGeneratorRequestedField.have_value)
              {
                result->setRequestedField(fieldGeneratorRequestedField.value.referenced());
                fieldGeneratorRequestedField.have_value = false;
              }
            if (fieldGeneratorAlbumReleaseDateRangeFilter.have_value)
              {
                result->setAlbumReleaseDateRangeFilter(fieldGeneratorAlbumReleaseDateRangeFilter.value.referenced());
                fieldGeneratorAlbumReleaseDateRangeFilter.have_value = false;
              }
            if (fieldGeneratorTrackReleaseDateRangeFilter.have_value)
              {
                result->setTrackReleaseDateRangeFilter(fieldGeneratorTrackReleaseDateRangeFilter.value.referenced());
                fieldGeneratorTrackReleaseDateRangeFilter.have_value = false;
              }
            if (fieldGeneratorArtistBirthDateRangeFilter.have_value)
              {
                result->setArtistBirthDateRangeFilter(fieldGeneratorArtistBirthDateRangeFilter.value.referenced());
                fieldGeneratorArtistBirthDateRangeFilter.have_value = false;
              }
            if (fieldGeneratorUserRequestedTopEntities.have_value)
              {
                result->setUserRequestedTopEntities(fieldGeneratorUserRequestedTopEntities.value);
                fieldGeneratorUserRequestedTopEntities.have_value = false;
              }
            if (fieldGeneratorUserRequestedLatestEntities.have_value)
              {
                result->setUserRequestedLatestEntities(fieldGeneratorUserRequestedLatestEntities.value);
                fieldGeneratorUserRequestedLatestEntities.have_value = false;
              }
            if (fieldGeneratorUserRequestedEarliestEntities.have_value)
              {
                result->setUserRequestedEarliestEntities(fieldGeneratorUserRequestedEarliestEntities.value);
                fieldGeneratorUserRequestedEarliestEntities.have_value = false;
              }
            if (fieldGeneratorUserRequestedVideos.have_value)
              {
                result->setUserRequestedVideos(fieldGeneratorUserRequestedVideos.value);
                fieldGeneratorUserRequestedVideos.have_value = false;
              }
            if (fieldGeneratorUserRequestedPreview.have_value)
              {
                result->setUserRequestedPreview(fieldGeneratorUserRequestedPreview.value);
                fieldGeneratorUserRequestedPreview.have_value = false;
              }
            if (fieldGeneratorUserRequestedBuy.have_value)
              {
                result->setUserRequestedBuy(fieldGeneratorUserRequestedBuy.value);
                fieldGeneratorUserRequestedBuy.have_value = false;
              }
            if (fieldGeneratorFilteredByArtists.have_value)
              {
                result->initFilteredByArtists();
                size_t count = fieldGeneratorFilteredByArtists.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFilteredByArtists(fieldGeneratorFilteredByArtists.value[num].referenced());
                  }
                fieldGeneratorFilteredByArtists.value.clear();
                fieldGeneratorFilteredByArtists.have_value = false;
              }
            if (fieldGeneratorFilteredByAlbums.have_value)
              {
                result->initFilteredByAlbums();
                size_t count = fieldGeneratorFilteredByAlbums.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendFilteredByAlbums(fieldGeneratorFilteredByAlbums.value[num].referenced());
                  }
                fieldGeneratorFilteredByAlbums.value.clear();
                fieldGeneratorFilteredByAlbums.have_value = false;
              }
          }
        virtual void handle_result(MusicSearchParametersJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "bumReleaseDateRangeFilter") == 0)
                                return &fieldGeneratorAlbumReleaseDateRangeFilter;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "tistBirthDateRangeFilter") == 0)
                                return &fieldGeneratorArtistBirthDateRangeFilter;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "urrentDateAndTime") == 0)
                        return &fieldGeneratorCurrentDateAndTime;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "ilteredByA", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'l':
                                if (strcmp(&(field_name[12]), "bums") == 0)
                                    return &fieldGeneratorFilteredByAlbums;
                                break;
                            case 'r':
                                if (strcmp(&(field_name[12]), "tists") == 0)
                                    return &fieldGeneratorFilteredByArtists;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equested", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[10]), "ield") == 0)
                                    return &fieldGeneratorRequestedField;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[10]), "umberOfResults") == 0)
                                    return &fieldGeneratorRequestedNumberOfResults;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchCriteriaType") == 0)
                        return &fieldGeneratorSearchCriteriaType;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "rackReleaseDateRangeFilter") == 0)
                        return &fieldGeneratorTrackReleaseDateRangeFilter;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "serRequested", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[14]), "uy") == 0)
                                    return &fieldGeneratorUserRequestedBuy;
                                break;
                            case 'E':
                                if (strcmp(&(field_name[14]), "arliestEntities") == 0)
                                    return &fieldGeneratorUserRequestedEarliestEntities;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[14]), "atestEntities") == 0)
                                    return &fieldGeneratorUserRequestedLatestEntities;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[14]), "review") == 0)
                                    return &fieldGeneratorUserRequestedPreview;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[14]), "opEntities") == 0)
                                    return &fieldGeneratorUserRequestedTopEntities;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[14]), "ideos") == 0)
                                    return &fieldGeneratorUserRequestedVideos;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSearchCriteriaType("field \"SearchCriteriaType\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorCurrentDateAndTime("field \"CurrentDateAndTime\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorRequestedNumberOfResults("field \"RequestedNumberOfResults\" of the MusicSearchParameters class"), fieldGeneratorRequestedField("field \"RequestedField\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorAlbumReleaseDateRangeFilter("field \"AlbumReleaseDateRangeFilter\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorTrackReleaseDateRangeFilter("field \"TrackReleaseDateRangeFilter\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorArtistBirthDateRangeFilter("field \"ArtistBirthDateRangeFilter\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorUserRequestedTopEntities("field \"UserRequestedTopEntities\" of the MusicSearchParameters class"), fieldGeneratorUserRequestedLatestEntities("field \"UserRequestedLatestEntities\" of the MusicSearchParameters class"), fieldGeneratorUserRequestedEarliestEntities("field \"UserRequestedEarliestEntities\" of the MusicSearchParameters class"), fieldGeneratorUserRequestedVideos("field \"UserRequestedVideos\" of the MusicSearchParameters class"), fieldGeneratorUserRequestedPreview("field \"UserRequestedPreview\" of the MusicSearchParameters class"), fieldGeneratorUserRequestedBuy("field \"UserRequestedBuy\" of the MusicSearchParameters class"), fieldGeneratorFilteredByArtists("field \"FilteredByArtists\" of the MusicSearchParameters class", ignore_extras), fieldGeneratorFilteredByAlbums("field \"FilteredByAlbums\" of the MusicSearchParameters class", ignore_extras)
          {
            set_what("the MusicSearchParameters class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchCriteriaType.reset();
            fieldGeneratorCurrentDateAndTime.reset();
            fieldGeneratorRequestedNumberOfResults.reset();
            fieldGeneratorRequestedField.reset();
            fieldGeneratorAlbumReleaseDateRangeFilter.reset();
            fieldGeneratorTrackReleaseDateRangeFilter.reset();
            fieldGeneratorArtistBirthDateRangeFilter.reset();
            fieldGeneratorUserRequestedTopEntities.reset();
            fieldGeneratorUserRequestedLatestEntities.reset();
            fieldGeneratorUserRequestedEarliestEntities.reset();
            fieldGeneratorUserRequestedVideos.reset();
            fieldGeneratorUserRequestedPreview.reset();
            fieldGeneratorUserRequestedBuy.reset();
            fieldGeneratorFilteredByArtists.reset();
            fieldGeneratorFilteredByAlbums.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICSEARCHPARAMETERSJSON_H */
