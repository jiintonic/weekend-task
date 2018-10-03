/* file "MusicSearchCriteriaJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHCRITERIAJSON_H
#define MUSICSEARCHCRITERIAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <vector>
#include "OInteger.h"
#include "MusicSearchTypeJSON.h"
#include "SoundHoundTrackIDJSON.h"
#include "SoundHoundArtistIDJSON.h"
#include "SoundHoundAlbumIDJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "MusicSearchTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicSearchCriteriaJSON : public ReferenceCounted
  {
  private:
    bool flagHasSearchCriteriaType;
    MusicSearchTypeJSON * storeSearchCriteriaType;
    bool flagHasTrackResultIDs;
    std::vector< double > storeTrackResultIDs;
    bool flagHasArtistResultIDs;
    std::vector< double > storeArtistResultIDs;
    bool flagHasAlbumResultIDs;
    std::vector< double > storeAlbumResultIDs;
    bool flagHasTrackResultSHIDs;
    std::vector< SoundHoundTrackIDJSON * > storeTrackResultSHIDs;
    bool flagHasArtistResultSHIDs;
    std::vector< SoundHoundArtistIDJSON * > storeArtistResultSHIDs;
    bool flagHasAlbumResultSHIDs;
    std::vector< SoundHoundAlbumIDJSON * > storeAlbumResultSHIDs;
    bool flagHasDateRange;
    DateTimeRangeSpecJSON * storeDateRange;
    bool flagHasTrackCount;
    OInteger storeTrackCount;
    bool flagHasAlbumCount;
    OInteger storeAlbumCount;
    bool flagHasMusicSearchTargetType;
    MusicSearchTypeJSON * storeMusicSearchTargetType;

    MusicSearchCriteriaJSON(const MusicSearchCriteriaJSON &);
    MusicSearchCriteriaJSON & operator=(const MusicSearchCriteriaJSON &other);

    void  fromJSONSearchCriteriaType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackResultIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistResultIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumResultIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumResultSHIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicSearchTargetType(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicSearchCriteriaJSON(void);
    virtual ~MusicSearchCriteriaJSON(void);
    bool  hasSearchCriteriaType(void) const;
    MusicSearchTypeJSON *  getSearchCriteriaType(void);
    const MusicSearchTypeJSON *  getSearchCriteriaType(void) const;
    MusicSearchTypeJSON::TypeValue  getSearchCriteriaTypeValue(void);
    const MusicSearchTypeJSON::TypeValue  getSearchCriteriaTypeValue(void) const;
    const char * getSearchCriteriaTypeAsChars(void) const;
    std::string  getSearchCriteriaTypeAsString(void) const;
    bool  hasTrackResultIDs(void) const;
    size_t  countOfTrackResultIDs(void) const;
    double  elementOfTrackResultIDs(size_t element_num);
    const double  elementOfTrackResultIDs(size_t element_num) const;
    std::vector< double >  getTrackResultIDs(void);
    const std::vector< double >  getTrackResultIDs(void) const;
    bool  hasArtistResultIDs(void) const;
    size_t  countOfArtistResultIDs(void) const;
    double  elementOfArtistResultIDs(size_t element_num);
    const double  elementOfArtistResultIDs(size_t element_num) const;
    std::vector< double >  getArtistResultIDs(void);
    const std::vector< double >  getArtistResultIDs(void) const;
    bool  hasAlbumResultIDs(void) const;
    size_t  countOfAlbumResultIDs(void) const;
    double  elementOfAlbumResultIDs(size_t element_num);
    const double  elementOfAlbumResultIDs(size_t element_num) const;
    std::vector< double >  getAlbumResultIDs(void);
    const std::vector< double >  getAlbumResultIDs(void) const;
    bool  hasTrackResultSHIDs(void) const;
    size_t  countOfTrackResultSHIDs(void) const;
    SoundHoundTrackIDJSON *  elementOfTrackResultSHIDs(size_t element_num);
    const SoundHoundTrackIDJSON *  elementOfTrackResultSHIDs(size_t element_num) const;
    std::vector< SoundHoundTrackIDJSON * >  getTrackResultSHIDs(void);
    const std::vector< SoundHoundTrackIDJSON * >  getTrackResultSHIDs(void) const;
    bool  hasArtistResultSHIDs(void) const;
    size_t  countOfArtistResultSHIDs(void) const;
    SoundHoundArtistIDJSON *  elementOfArtistResultSHIDs(size_t element_num);
    const SoundHoundArtistIDJSON *  elementOfArtistResultSHIDs(size_t element_num) const;
    std::vector< SoundHoundArtistIDJSON * >  getArtistResultSHIDs(void);
    const std::vector< SoundHoundArtistIDJSON * >  getArtistResultSHIDs(void) const;
    bool  hasAlbumResultSHIDs(void) const;
    size_t  countOfAlbumResultSHIDs(void) const;
    SoundHoundAlbumIDJSON *  elementOfAlbumResultSHIDs(size_t element_num);
    const SoundHoundAlbumIDJSON *  elementOfAlbumResultSHIDs(size_t element_num) const;
    std::vector< SoundHoundAlbumIDJSON * >  getAlbumResultSHIDs(void);
    const std::vector< SoundHoundAlbumIDJSON * >  getAlbumResultSHIDs(void) const;
    bool  hasDateRange(void) const;
    DateTimeRangeSpecJSON *  getDateRange(void);
    const DateTimeRangeSpecJSON *  getDateRange(void) const;
    bool  hasTrackCount(void) const;
    OInteger  getTrackCount(void);
    const OInteger  getTrackCount(void) const;
    bool  hasAlbumCount(void) const;
    OInteger  getAlbumCount(void);
    const OInteger  getAlbumCount(void) const;
    bool  hasMusicSearchTargetType(void) const;
    MusicSearchTypeJSON *  getMusicSearchTargetType(void);
    const MusicSearchTypeJSON *  getMusicSearchTargetType(void) const;
    MusicSearchTypeJSON::TypeValue  getMusicSearchTargetTypeValue(void);
    const MusicSearchTypeJSON::TypeValue  getMusicSearchTargetTypeValue(void) const;
    const char * getMusicSearchTargetTypeAsChars(void) const;
    std::string  getMusicSearchTargetTypeAsString(void) const;


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
    void initTrackResultIDs(void)
      {
        flagHasTrackResultIDs = true;
        storeTrackResultIDs.clear();
      }
    void appendTrackResultIDs(double to_append)
      {
        if (!flagHasTrackResultIDs)
          {
            flagHasTrackResultIDs = true;
            storeTrackResultIDs.clear();
          }
        assert(flagHasTrackResultIDs);
        storeTrackResultIDs.push_back(to_append);
      }
    void unsetTrackResultIDs(void)
      {
        flagHasTrackResultIDs = false;
        storeTrackResultIDs.clear();
      }
    void initArtistResultIDs(void)
      {
        flagHasArtistResultIDs = true;
        storeArtistResultIDs.clear();
      }
    void appendArtistResultIDs(double to_append)
      {
        if (!flagHasArtistResultIDs)
          {
            flagHasArtistResultIDs = true;
            storeArtistResultIDs.clear();
          }
        assert(flagHasArtistResultIDs);
        storeArtistResultIDs.push_back(to_append);
      }
    void unsetArtistResultIDs(void)
      {
        flagHasArtistResultIDs = false;
        storeArtistResultIDs.clear();
      }
    void initAlbumResultIDs(void)
      {
        flagHasAlbumResultIDs = true;
        storeAlbumResultIDs.clear();
      }
    void appendAlbumResultIDs(double to_append)
      {
        if (!flagHasAlbumResultIDs)
          {
            flagHasAlbumResultIDs = true;
            storeAlbumResultIDs.clear();
          }
        assert(flagHasAlbumResultIDs);
        storeAlbumResultIDs.push_back(to_append);
      }
    void unsetAlbumResultIDs(void)
      {
        flagHasAlbumResultIDs = false;
        storeAlbumResultIDs.clear();
      }
    void initTrackResultSHIDs(void)
      {
        if (flagHasTrackResultSHIDs)
          {
            for (size_t num4 = 0; num4 < storeTrackResultSHIDs.size(); ++num4)
              {
                storeTrackResultSHIDs[num4]->remove_reference();
              }
          }
        flagHasTrackResultSHIDs = true;
        storeTrackResultSHIDs.clear();
      }
    void appendTrackResultSHIDs(SoundHoundTrackIDJSON * to_append)
      {
        if (!flagHasTrackResultSHIDs)
          {
            flagHasTrackResultSHIDs = true;
            storeTrackResultSHIDs.clear();
          }
        assert(flagHasTrackResultSHIDs);
        to_append->add_reference();
        storeTrackResultSHIDs.push_back(to_append);
      }
    void appendTrackResultSHIDs(uint64_t new_value)
      {
        appendTrackResultSHIDs(new SoundHoundTrackIDJSON(new_value));
      }
    void unsetTrackResultSHIDs(void)
      {
        if (flagHasTrackResultSHIDs)
          {
            for (size_t num5 = 0; num5 < storeTrackResultSHIDs.size(); ++num5)
              {
                storeTrackResultSHIDs[num5]->remove_reference();
              }
          }
        flagHasTrackResultSHIDs = false;
        storeTrackResultSHIDs.clear();
      }
    void initArtistResultSHIDs(void)
      {
        if (flagHasArtistResultSHIDs)
          {
            for (size_t num6 = 0; num6 < storeArtistResultSHIDs.size(); ++num6)
              {
                storeArtistResultSHIDs[num6]->remove_reference();
              }
          }
        flagHasArtistResultSHIDs = true;
        storeArtistResultSHIDs.clear();
      }
    void appendArtistResultSHIDs(SoundHoundArtistIDJSON * to_append)
      {
        if (!flagHasArtistResultSHIDs)
          {
            flagHasArtistResultSHIDs = true;
            storeArtistResultSHIDs.clear();
          }
        assert(flagHasArtistResultSHIDs);
        to_append->add_reference();
        storeArtistResultSHIDs.push_back(to_append);
      }
    void appendArtistResultSHIDs(uint64_t new_value)
      {
        appendArtistResultSHIDs(new SoundHoundArtistIDJSON(new_value));
      }
    void unsetArtistResultSHIDs(void)
      {
        if (flagHasArtistResultSHIDs)
          {
            for (size_t num7 = 0; num7 < storeArtistResultSHIDs.size(); ++num7)
              {
                storeArtistResultSHIDs[num7]->remove_reference();
              }
          }
        flagHasArtistResultSHIDs = false;
        storeArtistResultSHIDs.clear();
      }
    void initAlbumResultSHIDs(void)
      {
        if (flagHasAlbumResultSHIDs)
          {
            for (size_t num8 = 0; num8 < storeAlbumResultSHIDs.size(); ++num8)
              {
                storeAlbumResultSHIDs[num8]->remove_reference();
              }
          }
        flagHasAlbumResultSHIDs = true;
        storeAlbumResultSHIDs.clear();
      }
    void appendAlbumResultSHIDs(SoundHoundAlbumIDJSON * to_append)
      {
        if (!flagHasAlbumResultSHIDs)
          {
            flagHasAlbumResultSHIDs = true;
            storeAlbumResultSHIDs.clear();
          }
        assert(flagHasAlbumResultSHIDs);
        to_append->add_reference();
        storeAlbumResultSHIDs.push_back(to_append);
      }
    void appendAlbumResultSHIDs(uint64_t new_value)
      {
        appendAlbumResultSHIDs(new SoundHoundAlbumIDJSON(new_value));
      }
    void unsetAlbumResultSHIDs(void)
      {
        if (flagHasAlbumResultSHIDs)
          {
            for (size_t num9 = 0; num9 < storeAlbumResultSHIDs.size(); ++num9)
              {
                storeAlbumResultSHIDs[num9]->remove_reference();
              }
          }
        flagHasAlbumResultSHIDs = false;
        storeAlbumResultSHIDs.clear();
      }
    void setDateRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = true;
        storeDateRange = new_value;
      }
    void unsetDateRange(void)
      {
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = false;
      }
    void setTrackCount(OInteger new_value)
      {
        flagHasTrackCount = true;
        storeTrackCount = new_value;
      }
    void unsetTrackCount(void)
      {
        flagHasTrackCount = false;
      }
    void setAlbumCount(OInteger new_value)
      {
        flagHasAlbumCount = true;
        storeAlbumCount = new_value;
      }
    void unsetAlbumCount(void)
      {
        flagHasAlbumCount = false;
      }
    void setMusicSearchTargetType(MusicSearchTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicSearchTargetType)
          {
            storeMusicSearchTargetType->remove_reference();
          }
        flagHasMusicSearchTargetType = true;
        storeMusicSearchTargetType = new_value;
      }
    void setMusicSearchTargetType(MusicSearchTypeJSON::TypeValue new_value)
      {
        setMusicSearchTargetType(new MusicSearchTypeJSON(new_value));
      }
    void setMusicSearchTargetType(const char *chars)
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
        setMusicSearchTargetType(new_value);
      }
    void setMusicSearchTargetType(std::string the_string)
      {
        setMusicSearchTargetType(the_string.c_str());
      }
    void unsetMusicSearchTargetType(void)
      {
        if (flagHasMusicSearchTargetType)
          {
            storeMusicSearchTargetType->remove_reference();
          }
        flagHasMusicSearchTargetType = false;
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
        if (flagHasTrackResultIDs)
          {
            handler->start_pair("TrackResultIDs");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTrackResultIDs.size(); ++num1)
              {
                if (((double)(long int)storeTrackResultIDs[num1]) == storeTrackResultIDs[num1])
                    handler->number_value((long int)storeTrackResultIDs[num1]);
                else
                    handler->number_value(storeTrackResultIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasArtistResultIDs)
          {
            handler->start_pair("ArtistResultIDs");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeArtistResultIDs.size(); ++num2)
              {
                if (((double)(long int)storeArtistResultIDs[num2]) == storeArtistResultIDs[num2])
                    handler->number_value((long int)storeArtistResultIDs[num2]);
                else
                    handler->number_value(storeArtistResultIDs[num2]);
              }
            handler->finish_array();
          }
        if (flagHasAlbumResultIDs)
          {
            handler->start_pair("AlbumResultIDs");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeAlbumResultIDs.size(); ++num3)
              {
                if (((double)(long int)storeAlbumResultIDs[num3]) == storeAlbumResultIDs[num3])
                    handler->number_value((long int)storeAlbumResultIDs[num3]);
                else
                    handler->number_value(storeAlbumResultIDs[num3]);
              }
            handler->finish_array();
          }
        if (flagHasTrackResultSHIDs)
          {
            handler->start_pair("TrackResultSHIDs");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeTrackResultSHIDs.size(); ++num4)
              {
                storeTrackResultSHIDs[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasArtistResultSHIDs)
          {
            handler->start_pair("ArtistResultSHIDs");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeArtistResultSHIDs.size(); ++num5)
              {
                storeArtistResultSHIDs[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAlbumResultSHIDs)
          {
            handler->start_pair("AlbumResultSHIDs");
            handler->start_array();
            for (size_t num6 = 0; num6 < storeAlbumResultSHIDs.size(); ++num6)
              {
                storeAlbumResultSHIDs[num6]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDateRange)
          {
            handler->start_pair("DateRange");
            storeDateRange->write_as_json(handler);
          }
        if (flagHasTrackCount)
          {
            handler->start_pair("TrackCount");
            handler->number_value(storeTrackCount.get_o_integer());
          }
        if (flagHasAlbumCount)
          {
            handler->start_pair("AlbumCount");
            handler->number_value(storeAlbumCount.get_o_integer());
          }
        assert(flagHasMusicSearchTargetType);
        handler->start_pair("MusicSearchTargetType");
        storeMusicSearchTargetType->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSearchCriteriaType()))
          {
            return "When parsing the object for %what%, the \"SearchCriteriaType\" field was missing.";
          }
        if (!(hasMusicSearchTargetType()))
          {
            return "When parsing the object for %what%, the \"MusicSearchTargetType\" field was missing.";
          }
        return NULL;
      }

    static MusicSearchCriteriaJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchCriteriaJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCriteriaJSON>, MusicSearchCriteriaJSON *, bool> generator("Type MusicSearchCriteria", ignore_extras);
            parse_json_value(text, "Text for MusicSearchCriteriaJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchCriteriaJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchCriteriaJSON>, MusicSearchCriteriaJSON *, bool> generator("Type MusicSearchCriteria", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTrackResultIDs;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorArtistResultIDs;
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAlbumResultIDs;
        JSONHoldingArrayGenerator<SoundHoundTrackIDJSON::Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool > fieldGeneratorTrackResultSHIDs;
        JSONHoldingArrayGenerator<SoundHoundArtistIDJSON::Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool > fieldGeneratorArtistResultSHIDs;
        JSONHoldingArrayGenerator<SoundHoundAlbumIDJSON::Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool > fieldGeneratorAlbumResultSHIDs;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateRange;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorTrackCount;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAlbumCount;
        JSONHoldingGenerator<MusicSearchTypeJSON::Generator, RCHandle<MusicSearchTypeJSON>, MusicSearchTypeJSON *, bool > fieldGeneratorMusicSearchTargetType;


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
            MusicSearchCriteriaJSON *result = new MusicSearchCriteriaJSON();
            assert(result != NULL);
            RCHandle<MusicSearchCriteriaJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicSearchCriteriaJSON *result)
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
            if (fieldGeneratorTrackResultIDs.have_value)
              {
                result->initTrackResultIDs();
                size_t count = fieldGeneratorTrackResultIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTrackResultIDs(atof(fieldGeneratorTrackResultIDs.value[num].c_str()));
                  }
                fieldGeneratorTrackResultIDs.value.clear();
                fieldGeneratorTrackResultIDs.have_value = false;
              }
            if (fieldGeneratorArtistResultIDs.have_value)
              {
                result->initArtistResultIDs();
                size_t count = fieldGeneratorArtistResultIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtistResultIDs(atof(fieldGeneratorArtistResultIDs.value[num].c_str()));
                  }
                fieldGeneratorArtistResultIDs.value.clear();
                fieldGeneratorArtistResultIDs.have_value = false;
              }
            if (fieldGeneratorAlbumResultIDs.have_value)
              {
                result->initAlbumResultIDs();
                size_t count = fieldGeneratorAlbumResultIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbumResultIDs(atof(fieldGeneratorAlbumResultIDs.value[num].c_str()));
                  }
                fieldGeneratorAlbumResultIDs.value.clear();
                fieldGeneratorAlbumResultIDs.have_value = false;
              }
            if (fieldGeneratorTrackResultSHIDs.have_value)
              {
                result->initTrackResultSHIDs();
                size_t count = fieldGeneratorTrackResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTrackResultSHIDs(fieldGeneratorTrackResultSHIDs.value[num].referenced());
                  }
                fieldGeneratorTrackResultSHIDs.value.clear();
                fieldGeneratorTrackResultSHIDs.have_value = false;
              }
            if (fieldGeneratorArtistResultSHIDs.have_value)
              {
                result->initArtistResultSHIDs();
                size_t count = fieldGeneratorArtistResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtistResultSHIDs(fieldGeneratorArtistResultSHIDs.value[num].referenced());
                  }
                fieldGeneratorArtistResultSHIDs.value.clear();
                fieldGeneratorArtistResultSHIDs.have_value = false;
              }
            if (fieldGeneratorAlbumResultSHIDs.have_value)
              {
                result->initAlbumResultSHIDs();
                size_t count = fieldGeneratorAlbumResultSHIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbumResultSHIDs(fieldGeneratorAlbumResultSHIDs.value[num].referenced());
                  }
                fieldGeneratorAlbumResultSHIDs.value.clear();
                fieldGeneratorAlbumResultSHIDs.have_value = false;
              }
            if (fieldGeneratorDateRange.have_value)
              {
                result->setDateRange(fieldGeneratorDateRange.value.referenced());
                fieldGeneratorDateRange.have_value = false;
              }
            if (fieldGeneratorTrackCount.have_value)
              {
                result->setTrackCount(fieldGeneratorTrackCount.value);
                fieldGeneratorTrackCount.have_value = false;
              }
            if (fieldGeneratorAlbumCount.have_value)
              {
                result->setAlbumCount(fieldGeneratorAlbumCount.value);
                fieldGeneratorAlbumCount.have_value = false;
              }
            if (fieldGeneratorMusicSearchTargetType.have_value)
              {
                result->setMusicSearchTargetType(fieldGeneratorMusicSearchTargetType.value.referenced());
                fieldGeneratorMusicSearchTargetType.have_value = false;
              }
            else if (!(result->hasMusicSearchTargetType()))
              {
                error("When parsing the object for %what%, the \"MusicSearchTargetType\" field was missing.");
              }
          }
        virtual void handle_result(MusicSearchCriteriaJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "bum", 3) == 0)
                              {
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[6]), "ount") == 0)
                                            return &fieldGeneratorAlbumCount;
                                        break;
                                    case 'R':
                                        if (strncmp(&(field_name[6]), "esult", 5) == 0)
                                          {
                                            switch ((unsigned char)(field_name[11]))
                                              {
                                                case 'I':
                                                    if (strcmp(&(field_name[12]), "Ds") == 0)
                                                        return &fieldGeneratorAlbumResultIDs;
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(field_name[12]), "HIDs") == 0)
                                                        return &fieldGeneratorAlbumResultSHIDs;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "tistResult", 10) == 0)
                              {
                                switch ((unsigned char)(field_name[12]))
                                  {
                                    case 'I':
                                        if (strcmp(&(field_name[13]), "Ds") == 0)
                                            return &fieldGeneratorArtistResultIDs;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[13]), "HIDs") == 0)
                                            return &fieldGeneratorArtistResultSHIDs;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateRange") == 0)
                        return &fieldGeneratorDateRange;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "usicSearchTargetType") == 0)
                        return &fieldGeneratorMusicSearchTargetType;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "earchCriteriaType") == 0)
                        return &fieldGeneratorSearchCriteriaType;
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "rack", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ount") == 0)
                                    return &fieldGeneratorTrackCount;
                                break;
                            case 'R':
                                if (strncmp(&(field_name[6]), "esult", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[11]))
                                      {
                                        case 'I':
                                            if (strcmp(&(field_name[12]), "Ds") == 0)
                                                return &fieldGeneratorTrackResultIDs;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[12]), "HIDs") == 0)
                                                return &fieldGeneratorTrackResultSHIDs;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
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
        Generator(bool ignore_extras = false) : fieldGeneratorSearchCriteriaType("field \"SearchCriteriaType\" of the MusicSearchCriteria class", ignore_extras), fieldGeneratorTrackResultIDs("field \"TrackResultIDs\" of the MusicSearchCriteria class"), fieldGeneratorArtistResultIDs("field \"ArtistResultIDs\" of the MusicSearchCriteria class"), fieldGeneratorAlbumResultIDs("field \"AlbumResultIDs\" of the MusicSearchCriteria class"), fieldGeneratorTrackResultSHIDs("field \"TrackResultSHIDs\" of the MusicSearchCriteria class", ignore_extras), fieldGeneratorArtistResultSHIDs("field \"ArtistResultSHIDs\" of the MusicSearchCriteria class", ignore_extras), fieldGeneratorAlbumResultSHIDs("field \"AlbumResultSHIDs\" of the MusicSearchCriteria class", ignore_extras), fieldGeneratorDateRange("field \"DateRange\" of the MusicSearchCriteria class", ignore_extras), fieldGeneratorTrackCount("field \"TrackCount\" of the MusicSearchCriteria class"), fieldGeneratorAlbumCount("field \"AlbumCount\" of the MusicSearchCriteria class"), fieldGeneratorMusicSearchTargetType("field \"MusicSearchTargetType\" of the MusicSearchCriteria class", ignore_extras)
          {
            set_what("the MusicSearchCriteria class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSearchCriteriaType.reset();
            fieldGeneratorTrackResultIDs.reset();
            fieldGeneratorArtistResultIDs.reset();
            fieldGeneratorAlbumResultIDs.reset();
            fieldGeneratorTrackResultSHIDs.reset();
            fieldGeneratorArtistResultSHIDs.reset();
            fieldGeneratorAlbumResultSHIDs.reset();
            fieldGeneratorDateRange.reset();
            fieldGeneratorTrackCount.reset();
            fieldGeneratorAlbumCount.reset();
            fieldGeneratorMusicSearchTargetType.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICSEARCHCRITERIAJSON_H */
