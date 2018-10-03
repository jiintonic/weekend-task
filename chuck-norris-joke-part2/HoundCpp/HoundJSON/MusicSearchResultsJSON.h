/* file "MusicSearchResultsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICSEARCHRESULTSJSON_H
#define MUSICSEARCHRESULTSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <vector>
#include "OInteger.h"
#include "MusicTrackResultJSON.h"
#include "MusicArtistResultJSON.h"
#include "MusicAlbumResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicSearchResultsJSON : public ReferenceCounted
  {
  public:
    enum TypeLatestListTypeKnownValues
      {
        LatestListType_Track,
        LatestListType_Artist,
        LatestListType_Album,
        LatestListType__none
      };
    struct TypeLatestListType
      {
        bool in_known_list;
        std::string string_value;
        TypeLatestListTypeKnownValues list_value;

        TypeLatestListType(void);
        TypeLatestListType(const TypeLatestListType &other);
        TypeLatestListType(TypeLatestListTypeKnownValues other);
        bool  operator==(const TypeLatestListType &other) const;
        bool  operator!=(const TypeLatestListType &other) const;
        bool  operator<(const TypeLatestListType &other) const;
        bool  operator>(const TypeLatestListType &other) const;
        bool  operator>=(const TypeLatestListType &other) const;
        bool  operator<=(const TypeLatestListType &other) const;

      };

    static TypeLatestListTypeKnownValues  stringToLatestListType(const char *chars);
    static const char * stringFromLatestListType(TypeLatestListTypeKnownValues the_enum);

  private:
    bool flagHasTrackResults;
    std::vector< MusicTrackResultJSON * > storeTrackResults;
    bool flagHasArtistResults;
    std::vector< MusicArtistResultJSON * > storeArtistResults;
    bool flagHasAlbumResults;
    std::vector< MusicAlbumResultJSON * > storeAlbumResults;
    bool flagHasLatestListType;
    TypeLatestListType storeLatestListType;
    bool flagHasLastTrackListIndex;
    OInteger storeLastTrackListIndex;
    bool flagHasLastArtistListIndex;
    OInteger storeLastArtistListIndex;
    bool flagHasLastAlbumListIndex;
    OInteger storeLastAlbumListIndex;

    MusicSearchResultsJSON(const MusicSearchResultsJSON &);
    MusicSearchResultsJSON & operator=(const MusicSearchResultsJSON &other);

    void  fromJSONTrackResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumResults(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatestListType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastTrackListIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastArtistListIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastAlbumListIndex(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicSearchResultsJSON(void);
    virtual ~MusicSearchResultsJSON(void);
    bool  hasTrackResults(void) const;
    size_t  countOfTrackResults(void) const;
    MusicTrackResultJSON *  elementOfTrackResults(size_t element_num);
    const MusicTrackResultJSON *  elementOfTrackResults(size_t element_num) const;
    std::vector< MusicTrackResultJSON * >  getTrackResults(void);
    const std::vector< MusicTrackResultJSON * >  getTrackResults(void) const;
    bool  hasArtistResults(void) const;
    size_t  countOfArtistResults(void) const;
    MusicArtistResultJSON *  elementOfArtistResults(size_t element_num);
    const MusicArtistResultJSON *  elementOfArtistResults(size_t element_num) const;
    std::vector< MusicArtistResultJSON * >  getArtistResults(void);
    const std::vector< MusicArtistResultJSON * >  getArtistResults(void) const;
    bool  hasAlbumResults(void) const;
    size_t  countOfAlbumResults(void) const;
    MusicAlbumResultJSON *  elementOfAlbumResults(size_t element_num);
    const MusicAlbumResultJSON *  elementOfAlbumResults(size_t element_num) const;
    std::vector< MusicAlbumResultJSON * >  getAlbumResults(void);
    const std::vector< MusicAlbumResultJSON * >  getAlbumResults(void) const;
    bool  hasLatestListType(void) const;
    TypeLatestListType  getLatestListType(void);
    const TypeLatestListType  getLatestListType(void) const;
    const char * getLatestListTypeAsChars(void) const;
    std::string  getLatestListTypeAsString(void) const;
    bool  hasLastTrackListIndex(void) const;
    OInteger  getLastTrackListIndex(void);
    const OInteger  getLastTrackListIndex(void) const;
    bool  hasLastArtistListIndex(void) const;
    OInteger  getLastArtistListIndex(void);
    const OInteger  getLastArtistListIndex(void) const;
    bool  hasLastAlbumListIndex(void) const;
    OInteger  getLastAlbumListIndex(void);
    const OInteger  getLastAlbumListIndex(void) const;


    void initTrackResults(void)
      {
        if (flagHasTrackResults)
          {
            for (size_t num4 = 0; num4 < storeTrackResults.size(); ++num4)
              {
                storeTrackResults[num4]->remove_reference();
              }
          }
        flagHasTrackResults = true;
        storeTrackResults.clear();
      }
    void appendTrackResults(MusicTrackResultJSON * to_append)
      {
        if (!flagHasTrackResults)
          {
            flagHasTrackResults = true;
            storeTrackResults.clear();
          }
        assert(flagHasTrackResults);
        to_append->add_reference();
        storeTrackResults.push_back(to_append);
      }
    void unsetTrackResults(void)
      {
        if (flagHasTrackResults)
          {
            for (size_t num5 = 0; num5 < storeTrackResults.size(); ++num5)
              {
                storeTrackResults[num5]->remove_reference();
              }
          }
        flagHasTrackResults = false;
        storeTrackResults.clear();
      }
    void initArtistResults(void)
      {
        if (flagHasArtistResults)
          {
            for (size_t num6 = 0; num6 < storeArtistResults.size(); ++num6)
              {
                storeArtistResults[num6]->remove_reference();
              }
          }
        flagHasArtistResults = true;
        storeArtistResults.clear();
      }
    void appendArtistResults(MusicArtistResultJSON * to_append)
      {
        if (!flagHasArtistResults)
          {
            flagHasArtistResults = true;
            storeArtistResults.clear();
          }
        assert(flagHasArtistResults);
        to_append->add_reference();
        storeArtistResults.push_back(to_append);
      }
    void unsetArtistResults(void)
      {
        if (flagHasArtistResults)
          {
            for (size_t num7 = 0; num7 < storeArtistResults.size(); ++num7)
              {
                storeArtistResults[num7]->remove_reference();
              }
          }
        flagHasArtistResults = false;
        storeArtistResults.clear();
      }
    void initAlbumResults(void)
      {
        if (flagHasAlbumResults)
          {
            for (size_t num8 = 0; num8 < storeAlbumResults.size(); ++num8)
              {
                storeAlbumResults[num8]->remove_reference();
              }
          }
        flagHasAlbumResults = true;
        storeAlbumResults.clear();
      }
    void appendAlbumResults(MusicAlbumResultJSON * to_append)
      {
        if (!flagHasAlbumResults)
          {
            flagHasAlbumResults = true;
            storeAlbumResults.clear();
          }
        assert(flagHasAlbumResults);
        to_append->add_reference();
        storeAlbumResults.push_back(to_append);
      }
    void unsetAlbumResults(void)
      {
        if (flagHasAlbumResults)
          {
            for (size_t num9 = 0; num9 < storeAlbumResults.size(); ++num9)
              {
                storeAlbumResults[num9]->remove_reference();
              }
          }
        flagHasAlbumResults = false;
        storeAlbumResults.clear();
      }
    void setLatestListType(TypeLatestListType new_value)
      {
        flagHasLatestListType = true;
        storeLatestListType = new_value;
      }
    void setLatestListType(const char *chars)
      {
        TypeLatestListTypeKnownValues known = stringToLatestListType(chars);
        TypeLatestListType new_value;
        if (known == LatestListType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setLatestListType(new_value);
      }
    void setLatestListType(std::string the_string)
      {
        setLatestListType(the_string.c_str());
      }
    void setLatestListType(TypeLatestListTypeKnownValues new_value)
      {
        TypeLatestListType new_full_value;
        assert(new_value != LatestListType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setLatestListType(new_full_value);
      }
    void unsetLatestListType(void)
      {
        flagHasLatestListType = false;
      }
    void setLastTrackListIndex(OInteger new_value)
      {
        flagHasLastTrackListIndex = true;
        storeLastTrackListIndex = new_value;
      }
    void unsetLastTrackListIndex(void)
      {
        flagHasLastTrackListIndex = false;
      }
    void setLastArtistListIndex(OInteger new_value)
      {
        flagHasLastArtistListIndex = true;
        storeLastArtistListIndex = new_value;
      }
    void unsetLastArtistListIndex(void)
      {
        flagHasLastArtistListIndex = false;
      }
    void setLastAlbumListIndex(OInteger new_value)
      {
        flagHasLastAlbumListIndex = true;
        storeLastAlbumListIndex = new_value;
      }
    void unsetLastAlbumListIndex(void)
      {
        flagHasLastAlbumListIndex = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasTrackResults)
          {
            handler->start_pair("TrackResults");
            assert(storeTrackResults.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTrackResults.size(); ++num1)
              {
                storeTrackResults[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasArtistResults)
          {
            handler->start_pair("ArtistResults");
            assert(storeArtistResults.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeArtistResults.size(); ++num2)
              {
                storeArtistResults[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasAlbumResults)
          {
            handler->start_pair("AlbumResults");
            assert(storeAlbumResults.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeAlbumResults.size(); ++num3)
              {
                storeAlbumResults[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasLatestListType);
        handler->start_pair("LatestListType");
        if (storeLatestListType.in_known_list)
          {
            switch (storeLatestListType.list_value)
              {
                case LatestListType_Track:
                    handler->string_value("Track");
                    break;
                case LatestListType_Artist:
                    handler->string_value("Artist");
                    break;
                case LatestListType_Album:
                    handler->string_value("Album");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeLatestListType.string_value);
          }
        assert(flagHasLastTrackListIndex);
        handler->start_pair("LastTrackListIndex");
        handler->number_value(storeLastTrackListIndex.get_o_integer());
        assert(flagHasLastArtistListIndex);
        handler->start_pair("LastArtistListIndex");
        handler->number_value(storeLastArtistListIndex.get_o_integer());
        assert(flagHasLastAlbumListIndex);
        handler->start_pair("LastAlbumListIndex");
        handler->number_value(storeLastAlbumListIndex.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLatestListType()))
          {
            return "When parsing the object for %what%, the \"LatestListType\" field was missing.";
          }
        if (!(hasLastTrackListIndex()))
          {
            return "When parsing the object for %what%, the \"LastTrackListIndex\" field was missing.";
          }
        if (!(hasLastArtistListIndex()))
          {
            return "When parsing the object for %what%, the \"LastArtistListIndex\" field was missing.";
          }
        if (!(hasLastAlbumListIndex()))
          {
            return "When parsing the object for %what%, the \"LastAlbumListIndex\" field was missing.";
          }
        return NULL;
      }

    static MusicSearchResultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicSearchResultsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicSearchResultsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchResultsJSON>, MusicSearchResultsJSON *, bool> generator("Type MusicSearchResults", ignore_extras);
            parse_json_value(text, "Text for MusicSearchResultsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicSearchResultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicSearchResultsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicSearchResultsJSON>, MusicSearchResultsJSON *, bool> generator("Type MusicSearchResults", ignore_extras);
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
        JSONHoldingArrayGenerator<MusicTrackResultJSON::Generator, RCHandle<MusicTrackResultJSON>, MusicTrackResultJSON *, bool > fieldGeneratorTrackResults;
        JSONHoldingArrayGenerator<MusicArtistResultJSON::Generator, RCHandle<MusicArtistResultJSON>, MusicArtistResultJSON *, bool > fieldGeneratorArtistResults;
        JSONHoldingArrayGenerator<MusicAlbumResultJSON::Generator, RCHandle<MusicAlbumResultJSON>, MusicAlbumResultJSON *, bool > fieldGeneratorAlbumResults;
    class FieldGeneratorLatestListType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLatestListType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLatestListType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeLatestListTypeKnownValues known = stringToLatestListType(result);
                TypeLatestListType new_value;
                if (known == LatestListType__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeLatestListType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLatestListType, TypeLatestListType, TypeLatestListType > fieldGeneratorLatestListType;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLastTrackListIndex;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLastArtistListIndex;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorLastAlbumListIndex;


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
            MusicSearchResultsJSON *result = new MusicSearchResultsJSON();
            assert(result != NULL);
            RCHandle<MusicSearchResultsJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicSearchResultsJSON *result)
          {
            if (fieldGeneratorTrackResults.have_value)
              {
                result->initTrackResults();
                size_t count = fieldGeneratorTrackResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTrackResults(fieldGeneratorTrackResults.value[num].referenced());
                  }
                fieldGeneratorTrackResults.value.clear();
                fieldGeneratorTrackResults.have_value = false;
              }
            if (fieldGeneratorArtistResults.have_value)
              {
                result->initArtistResults();
                size_t count = fieldGeneratorArtistResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtistResults(fieldGeneratorArtistResults.value[num].referenced());
                  }
                fieldGeneratorArtistResults.value.clear();
                fieldGeneratorArtistResults.have_value = false;
              }
            if (fieldGeneratorAlbumResults.have_value)
              {
                result->initAlbumResults();
                size_t count = fieldGeneratorAlbumResults.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbumResults(fieldGeneratorAlbumResults.value[num].referenced());
                  }
                fieldGeneratorAlbumResults.value.clear();
                fieldGeneratorAlbumResults.have_value = false;
              }
            if (fieldGeneratorLatestListType.have_value)
              {
                result->setLatestListType(fieldGeneratorLatestListType.value);
                fieldGeneratorLatestListType.have_value = false;
              }
            else if (!(result->hasLatestListType()))
              {
                error("When parsing the object for %what%, the \"LatestListType\" field was missing.");
              }
            if (fieldGeneratorLastTrackListIndex.have_value)
              {
                result->setLastTrackListIndex(fieldGeneratorLastTrackListIndex.value);
                fieldGeneratorLastTrackListIndex.have_value = false;
              }
            else if (!(result->hasLastTrackListIndex()))
              {
                error("When parsing the object for %what%, the \"LastTrackListIndex\" field was missing.");
              }
            if (fieldGeneratorLastArtistListIndex.have_value)
              {
                result->setLastArtistListIndex(fieldGeneratorLastArtistListIndex.value);
                fieldGeneratorLastArtistListIndex.have_value = false;
              }
            else if (!(result->hasLastArtistListIndex()))
              {
                error("When parsing the object for %what%, the \"LastArtistListIndex\" field was missing.");
              }
            if (fieldGeneratorLastAlbumListIndex.have_value)
              {
                result->setLastAlbumListIndex(fieldGeneratorLastAlbumListIndex.value);
                fieldGeneratorLastAlbumListIndex.have_value = false;
              }
            else if (!(result->hasLastAlbumListIndex()))
              {
                error("When parsing the object for %what%, the \"LastAlbumListIndex\" field was missing.");
              }
          }
        virtual void handle_result(MusicSearchResultsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "bumResults") == 0)
                                return &fieldGeneratorAlbumResults;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "tistResults") == 0)
                                return &fieldGeneratorArtistResults;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 's':
                                if (strncmp(&(field_name[3]), "t", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[4]))
                                      {
                                        case 'A':
                                            switch ((unsigned char)(field_name[5]))
                                              {
                                                case 'l':
                                                    if (strcmp(&(field_name[6]), "bumListIndex") == 0)
                                                        return &fieldGeneratorLastAlbumListIndex;
                                                    break;
                                                case 'r':
                                                    if (strcmp(&(field_name[6]), "tistListIndex") == 0)
                                                        return &fieldGeneratorLastArtistListIndex;
                                                    break;
                                                default:
                                                    break;
                                              }
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[5]), "rackListIndex") == 0)
                                                return &fieldGeneratorLastTrackListIndex;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "estListType") == 0)
                                    return &fieldGeneratorLatestListType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "rackResults") == 0)
                        return &fieldGeneratorTrackResults;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTrackResults("field \"TrackResults\" of the MusicSearchResults class", ignore_extras), fieldGeneratorArtistResults("field \"ArtistResults\" of the MusicSearchResults class", ignore_extras), fieldGeneratorAlbumResults("field \"AlbumResults\" of the MusicSearchResults class", ignore_extras), fieldGeneratorLatestListType("field \"LatestListType\" of the MusicSearchResults class"), fieldGeneratorLastTrackListIndex("field \"LastTrackListIndex\" of the MusicSearchResults class"), fieldGeneratorLastArtistListIndex("field \"LastArtistListIndex\" of the MusicSearchResults class"), fieldGeneratorLastAlbumListIndex("field \"LastAlbumListIndex\" of the MusicSearchResults class")
          {
            set_what("the MusicSearchResults class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTrackResults.reset();
            fieldGeneratorArtistResults.reset();
            fieldGeneratorAlbumResults.reset();
            fieldGeneratorLatestListType.reset();
            fieldGeneratorLastTrackListIndex.reset();
            fieldGeneratorLastArtistListIndex.reset();
            fieldGeneratorLastAlbumListIndex.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICSEARCHRESULTSJSON_H */
