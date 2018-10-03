/* file "MusicVerticalStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICVERTICALSTATEJSON_H
#define MUSICVERTICALSTATEJSON_H

#pragma interface

#include "ClientVerticalStateJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicVerticalStateJSON : public ClientVerticalStateJSON
  {
  private:
    bool flagHasTrackID;
    std::string storeTrackID;
    bool flagHasArtistID;
    std::string storeArtistID;
    bool flagHasAlbumID;
    std::string storeAlbumID;
    bool flagHasTrackIDs;
    std::vector< std::string > storeTrackIDs;
    bool flagHasArtistIDs;
    std::vector< std::string > storeArtistIDs;
    bool flagHasAlbumIDs;
    std::vector< std::string > storeAlbumIDs;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MusicVerticalStateJSON(const MusicVerticalStateJSON &);
    MusicVerticalStateJSON & operator=(const MusicVerticalStateJSON &other);

    JSONValue * extraTrackIDToJSON(void) const;
    JSONValue * extraArtistIDToJSON(void) const;
    JSONValue * extraAlbumIDToJSON(void) const;
    JSONValue * extraTrackIDsToJSON(void) const;
    JSONValue * extraArtistIDsToJSON(void) const;
    JSONValue * extraAlbumIDsToJSON(void) const;

    void  fromJSONTrackID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrackIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArtistIDs(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlbumIDs(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicVerticalStateJSON(void);
    virtual ~MusicVerticalStateJSON(void);
    const char * getClientVerticalStateKind(void) const;
    bool  hasTrackID(void) const;
    std::string  getTrackID(void);
    const std::string  getTrackID(void) const;
    bool  hasArtistID(void) const;
    std::string  getArtistID(void);
    const std::string  getArtistID(void) const;
    bool  hasAlbumID(void) const;
    std::string  getAlbumID(void);
    const std::string  getAlbumID(void) const;
    bool  hasTrackIDs(void) const;
    size_t  countOfTrackIDs(void) const;
    std::string  elementOfTrackIDs(size_t element_num);
    const std::string  elementOfTrackIDs(size_t element_num) const;
    std::vector< std::string >  getTrackIDs(void);
    const std::vector< std::string >  getTrackIDs(void) const;
    bool  hasArtistIDs(void) const;
    size_t  countOfArtistIDs(void) const;
    std::string  elementOfArtistIDs(size_t element_num);
    const std::string  elementOfArtistIDs(size_t element_num) const;
    std::vector< std::string >  getArtistIDs(void);
    const std::vector< std::string >  getArtistIDs(void) const;
    bool  hasAlbumIDs(void) const;
    size_t  countOfAlbumIDs(void) const;
    std::string  elementOfAlbumIDs(size_t element_num);
    const std::string  elementOfAlbumIDs(size_t element_num) const;
    std::vector< std::string >  getAlbumIDs(void);
    const std::vector< std::string >  getAlbumIDs(void) const;

    virtual size_t extraMusicVerticalStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMusicVerticalStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMusicVerticalStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMusicVerticalStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMusicVerticalStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMusicVerticalStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraClientVerticalStateComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTrackID)
            ++result;
        if (flagHasArtistID)
            ++result;
        if (flagHasAlbumID)
            ++result;
        if (flagHasTrackIDs)
            ++result;
        if (flagHasArtistIDs)
            ++result;
        if (flagHasAlbumIDs)
            ++result;
        result += extraMusicVerticalStateComponentCount();
        return result;
      }
    const char *extraClientVerticalStateComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTrackID)
          {
            if (remainder == 0)
                return "TrackID";
            --remainder;
          }
        if (flagHasArtistID)
          {
            if (remainder == 0)
                return "ArtistID";
            --remainder;
          }
        if (flagHasAlbumID)
          {
            if (remainder == 0)
                return "AlbumID";
            --remainder;
          }
        if (flagHasTrackIDs)
          {
            if (remainder == 0)
                return "TrackIDs";
            --remainder;
          }
        if (flagHasArtistIDs)
          {
            if (remainder == 0)
                return "ArtistIDs";
            --remainder;
          }
        if (flagHasAlbumIDs)
          {
            if (remainder == 0)
                return "AlbumIDs";
            --remainder;
          }
        return extraMusicVerticalStateComponentKey(remainder);
      }
    JSONValue *extraClientVerticalStateComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTrackID)
          {
            if (remainder == 0)
                return extraTrackIDToJSON();
            --remainder;
          }
        if (flagHasArtistID)
          {
            if (remainder == 0)
                return extraArtistIDToJSON();
            --remainder;
          }
        if (flagHasAlbumID)
          {
            if (remainder == 0)
                return extraAlbumIDToJSON();
            --remainder;
          }
        if (flagHasTrackIDs)
          {
            if (remainder == 0)
                return extraTrackIDsToJSON();
            --remainder;
          }
        if (flagHasArtistIDs)
          {
            if (remainder == 0)
                return extraArtistIDsToJSON();
            --remainder;
          }
        if (flagHasAlbumIDs)
          {
            if (remainder == 0)
                return extraAlbumIDsToJSON();
            --remainder;
          }
        return extraMusicVerticalStateComponentValue(remainder);
      }
    const JSONValue *extraClientVerticalStateComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTrackID)
          {
            if (remainder == 0)
                return extraTrackIDToJSON();
            --remainder;
          }
        if (flagHasArtistID)
          {
            if (remainder == 0)
                return extraArtistIDToJSON();
            --remainder;
          }
        if (flagHasAlbumID)
          {
            if (remainder == 0)
                return extraAlbumIDToJSON();
            --remainder;
          }
        if (flagHasTrackIDs)
          {
            if (remainder == 0)
                return extraTrackIDsToJSON();
            --remainder;
          }
        if (flagHasArtistIDs)
          {
            if (remainder == 0)
                return extraArtistIDsToJSON();
            --remainder;
          }
        if (flagHasAlbumIDs)
          {
            if (remainder == 0)
                return extraAlbumIDsToJSON();
            --remainder;
          }
        return extraMusicVerticalStateComponentValue(remainder);
      }
    JSONValue *extraClientVerticalStateLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strncmp(&(field_name[2]), "bumID", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 0:
                                    return (flagHasAlbumID ? extraAlbumIDToJSON() : NULL);
                                case 's':
                                    if (field_name[8] == 0)
                                        return (flagHasAlbumIDs ? extraAlbumIDsToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(field_name[2]), "tistID", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 0:
                                    return (flagHasArtistID ? extraArtistIDToJSON() : NULL);
                                case 's':
                                    if (field_name[9] == 0)
                                        return (flagHasArtistIDs ? extraArtistIDsToJSON() : NULL);
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
            case 'T':
                if (strncmp(&(field_name[1]), "rackID", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 0:
                            return (flagHasTrackID ? extraTrackIDToJSON() : NULL);
                        case 's':
                            if (field_name[8] == 0)
                                return (flagHasTrackIDs ? extraTrackIDsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraMusicVerticalStateLookup(field_name);
      }
    const JSONValue *extraClientVerticalStateLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'l':
                        if (strncmp(&(field_name[2]), "bumID", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 0:
                                    return (flagHasAlbumID ? extraAlbumIDToJSON() : NULL);
                                case 's':
                                    if (field_name[8] == 0)
                                        return (flagHasAlbumIDs ? extraAlbumIDsToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(field_name[2]), "tistID", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 0:
                                    return (flagHasArtistID ? extraArtistIDToJSON() : NULL);
                                case 's':
                                    if (field_name[9] == 0)
                                        return (flagHasArtistIDs ? extraArtistIDsToJSON() : NULL);
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
            case 'T':
                if (strncmp(&(field_name[1]), "rackID", 6) == 0)
                  {
                    switch ((unsigned char)(field_name[7]))
                      {
                        case 0:
                            return (flagHasTrackID ? extraTrackIDToJSON() : NULL);
                        case 's':
                            if (field_name[8] == 0)
                                return (flagHasTrackIDs ? extraTrackIDsToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraMusicVerticalStateLookup(field_name);
      }

    void setTrackID(std::string new_value)
      {
        flagHasTrackID = true;
        storeTrackID = new_value;
      }
    void unsetTrackID(void)
      {
        flagHasTrackID = false;
      }
    void setArtistID(std::string new_value)
      {
        flagHasArtistID = true;
        storeArtistID = new_value;
      }
    void unsetArtistID(void)
      {
        flagHasArtistID = false;
      }
    void setAlbumID(std::string new_value)
      {
        flagHasAlbumID = true;
        storeAlbumID = new_value;
      }
    void unsetAlbumID(void)
      {
        flagHasAlbumID = false;
      }
    void initTrackIDs(void)
      {
        flagHasTrackIDs = true;
        storeTrackIDs.clear();
      }
    void appendTrackIDs(std::string to_append)
      {
        if (!flagHasTrackIDs)
          {
            flagHasTrackIDs = true;
            storeTrackIDs.clear();
          }
        assert(flagHasTrackIDs);
        storeTrackIDs.push_back(to_append);
      }
    void unsetTrackIDs(void)
      {
        flagHasTrackIDs = false;
        storeTrackIDs.clear();
      }
    void initArtistIDs(void)
      {
        flagHasArtistIDs = true;
        storeArtistIDs.clear();
      }
    void appendArtistIDs(std::string to_append)
      {
        if (!flagHasArtistIDs)
          {
            flagHasArtistIDs = true;
            storeArtistIDs.clear();
          }
        assert(flagHasArtistIDs);
        storeArtistIDs.push_back(to_append);
      }
    void unsetArtistIDs(void)
      {
        flagHasArtistIDs = false;
        storeArtistIDs.clear();
      }
    void initAlbumIDs(void)
      {
        flagHasAlbumIDs = true;
        storeAlbumIDs.clear();
      }
    void appendAlbumIDs(std::string to_append)
      {
        if (!flagHasAlbumIDs)
          {
            flagHasAlbumIDs = true;
            storeAlbumIDs.clear();
          }
        assert(flagHasAlbumIDs);
        storeAlbumIDs.push_back(to_append);
      }
    void unsetAlbumIDs(void)
      {
        flagHasAlbumIDs = false;
        storeAlbumIDs.clear();
      }

    virtual void extraMusicVerticalStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMusicVerticalStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMusicVerticalStateLookup(key);
        if (old_field == NULL)
          {
            extraMusicVerticalStateAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }
    void extraClientVerticalStateAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strncmp(&(key[2]), "bumID", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 0:
                                    {
                                    fromJSONAlbumID(new_component, false);
                                    return;
                                    }
                                case 's':
                                    if (key[8] == 0)
                                        {
                                        fromJSONAlbumIDs(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(key[2]), "tistID", 6) == 0)
                          {
                            switch ((unsigned char)(key[8]))
                              {
                                case 0:
                                    {
                                    fromJSONArtistID(new_component, false);
                                    return;
                                    }
                                case 's':
                                    if (key[9] == 0)
                                        {
                                        fromJSONArtistIDs(new_component, false);
                                        return;
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
                break;
            case 'T':
                if (strncmp(&(key[1]), "rackID", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 0:
                            {
                            fromJSONTrackID(new_component, false);
                            return;
                            }
                        case 's':
                            if (key[8] == 0)
                                {
                                fromJSONTrackIDs(new_component, false);
                                return;
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
        extraMusicVerticalStateAppendPair(key, new_component);
      }
    void extraClientVerticalStateSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                switch ((unsigned char)(key[1]))
                  {
                    case 'l':
                        if (strncmp(&(key[2]), "bumID", 5) == 0)
                          {
                            switch ((unsigned char)(key[7]))
                              {
                                case 0:
                                    {
                                    fromJSONAlbumID(new_component, false);
                                    return;
                                    }
                                case 's':
                                    if (key[8] == 0)
                                        {
                                        fromJSONAlbumIDs(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'r':
                        if (strncmp(&(key[2]), "tistID", 6) == 0)
                          {
                            switch ((unsigned char)(key[8]))
                              {
                                case 0:
                                    {
                                    fromJSONArtistID(new_component, false);
                                    return;
                                    }
                                case 's':
                                    if (key[9] == 0)
                                        {
                                        fromJSONArtistIDs(new_component, false);
                                        return;
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
                break;
            case 'T':
                if (strncmp(&(key[1]), "rackID", 6) == 0)
                  {
                    switch ((unsigned char)(key[7]))
                      {
                        case 0:
                            {
                            fromJSONTrackID(new_component, false);
                            return;
                            }
                        case 's':
                            if (key[8] == 0)
                                {
                                fromJSONTrackIDs(new_component, false);
                                return;
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
        extraMusicVerticalStateSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        ClientVerticalStateJSON::write_fields_as_json(handler);
        if (flagHasTrackID)
          {
            handler->start_pair("TrackID");
            handler->string_value(storeTrackID);
          }
        if (flagHasArtistID)
          {
            handler->start_pair("ArtistID");
            handler->string_value(storeArtistID);
          }
        if (flagHasAlbumID)
          {
            handler->start_pair("AlbumID");
            handler->string_value(storeAlbumID);
          }
        if (flagHasTrackIDs)
          {
            handler->start_pair("TrackIDs");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTrackIDs.size(); ++num1)
              {
                handler->string_value(storeTrackIDs[num1]);
              }
            handler->finish_array();
          }
        if (flagHasArtistIDs)
          {
            handler->start_pair("ArtistIDs");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeArtistIDs.size(); ++num2)
              {
                handler->string_value(storeArtistIDs[num2]);
              }
            handler->finish_array();
          }
        if (flagHasAlbumIDs)
          {
            handler->start_pair("AlbumIDs");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeAlbumIDs.size(); ++num3)
              {
                handler->string_value(storeAlbumIDs[num3]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicVerticalStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicVerticalStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicVerticalStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicVerticalStateJSON>, MusicVerticalStateJSON *, bool> generator("Type MusicVerticalState", ignore_extras);
            parse_json_value(text, "Text for MusicVerticalStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicVerticalStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicVerticalStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicVerticalStateJSON>, MusicVerticalStateJSON *, bool> generator("Type MusicVerticalState", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ClientVerticalStateJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTrackID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumID;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTrackIDs;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorArtistIDs;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlbumIDs;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getClientVerticalStateJSONKey().c_str(), "MusicVerticalState") == 0))
                throw("The key field has a value other than `MusicVerticalState'.");
            MusicVerticalStateJSON *result = new MusicVerticalStateJSON();
            assert(result != NULL);
            RCHandle<MusicVerticalStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicVerticalStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ClientVerticalStateJSON *new_result)
          {
            handle_result((MusicVerticalStateJSON *)new_result);
          }
        void finish(MusicVerticalStateJSON *result)
          {
            if (fieldGeneratorTrackID.have_value)
              {
                result->setTrackID(fieldGeneratorTrackID.value);
                fieldGeneratorTrackID.have_value = false;
              }
            if (fieldGeneratorArtistID.have_value)
              {
                result->setArtistID(fieldGeneratorArtistID.value);
                fieldGeneratorArtistID.have_value = false;
              }
            if (fieldGeneratorAlbumID.have_value)
              {
                result->setAlbumID(fieldGeneratorAlbumID.value);
                fieldGeneratorAlbumID.have_value = false;
              }
            if (fieldGeneratorTrackIDs.have_value)
              {
                result->initTrackIDs();
                size_t count = fieldGeneratorTrackIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTrackIDs(fieldGeneratorTrackIDs.value[num]);
                  }
                fieldGeneratorTrackIDs.value.clear();
                fieldGeneratorTrackIDs.have_value = false;
              }
            if (fieldGeneratorArtistIDs.have_value)
              {
                result->initArtistIDs();
                size_t count = fieldGeneratorArtistIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArtistIDs(fieldGeneratorArtistIDs.value[num]);
                  }
                fieldGeneratorArtistIDs.value.clear();
                fieldGeneratorArtistIDs.have_value = false;
              }
            if (fieldGeneratorAlbumIDs.have_value)
              {
                result->initAlbumIDs();
                size_t count = fieldGeneratorAlbumIDs.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAlbumIDs(fieldGeneratorAlbumIDs.value[num]);
                  }
                fieldGeneratorAlbumIDs.value.clear();
                fieldGeneratorAlbumIDs.have_value = false;
              }
            ClientVerticalStateJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicVerticalStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strncmp(&(field_name[2]), "bumID", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 0:
                                        return &fieldGeneratorAlbumID;
                                    case 's':
                                        if (field_name[8] == 0)
                                            return &fieldGeneratorAlbumIDs;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strncmp(&(field_name[2]), "tistID", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 0:
                                        return &fieldGeneratorArtistID;
                                    case 's':
                                        if (field_name[9] == 0)
                                            return &fieldGeneratorArtistIDs;
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
                case 'T':
                    if (strncmp(&(field_name[1]), "rackID", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 0:
                                return &fieldGeneratorTrackID;
                            case 's':
                                if (field_name[8] == 0)
                                    return &fieldGeneratorTrackIDs;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return ClientVerticalStateJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ClientVerticalStateJSON::Generator(ignore_extras), fieldGeneratorTrackID("field \"TrackID\" of the MusicVerticalState class"), fieldGeneratorArtistID("field \"ArtistID\" of the MusicVerticalState class"), fieldGeneratorAlbumID("field \"AlbumID\" of the MusicVerticalState class"), fieldGeneratorTrackIDs("field \"TrackIDs\" of the MusicVerticalState class"), fieldGeneratorArtistIDs("field \"ArtistIDs\" of the MusicVerticalState class"), fieldGeneratorAlbumIDs("field \"AlbumIDs\" of the MusicVerticalState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MusicVerticalState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTrackID.reset();
            fieldGeneratorArtistID.reset();
            fieldGeneratorAlbumID.reset();
            fieldGeneratorTrackIDs.reset();
            fieldGeneratorArtistIDs.reset();
            fieldGeneratorAlbumIDs.reset();
            ClientVerticalStateJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MUSICVERTICALSTATEJSON_H */
