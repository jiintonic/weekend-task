/* file "MusicCommandConversationStateElementJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICCOMMANDCONVERSATIONSTATEELEMENTJSON_H
#define MUSICCOMMANDCONVERSATIONSTATEELEMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "MusicSearchCriteriaJSON.h"
#include "MusicSearchResultsJSON.h"
#include "MusicSearchResultsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicCommandConversationStateElementJSON : public ReferenceCounted
  {
  private:
    bool flagHasMusicSearchCriteria;
    MusicSearchCriteriaJSON * storeMusicSearchCriteria;
    bool flagHasUserRequestedAutoPlay;
    bool storeUserRequestedAutoPlay;
    bool flagHasResultIdLists;
    MusicSearchResultsJSON * storeResultIdLists;
    bool flagHasLastResultIdLists;
    MusicSearchResultsJSON * storeLastResultIdLists;

    MusicCommandConversationStateElementJSON(const MusicCommandConversationStateElementJSON &);
    MusicCommandConversationStateElementJSON & operator=(const MusicCommandConversationStateElementJSON &other);

    void  fromJSONMusicSearchCriteria(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserRequestedAutoPlay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIdLists(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastResultIdLists(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicCommandConversationStateElementJSON(void);
    virtual ~MusicCommandConversationStateElementJSON(void);
    virtual const char *getMusicCommandConversationStateElementKind(void) const = 0;
    bool  hasMusicSearchCriteria(void) const;
    MusicSearchCriteriaJSON *  getMusicSearchCriteria(void);
    const MusicSearchCriteriaJSON *  getMusicSearchCriteria(void) const;
    bool  hasUserRequestedAutoPlay(void) const;
    bool  getUserRequestedAutoPlay(void);
    const bool  getUserRequestedAutoPlay(void) const;
    bool  hasResultIdLists(void) const;
    MusicSearchResultsJSON *  getResultIdLists(void);
    const MusicSearchResultsJSON *  getResultIdLists(void) const;
    bool  hasLastResultIdLists(void) const;
    MusicSearchResultsJSON *  getLastResultIdLists(void);
    const MusicSearchResultsJSON *  getLastResultIdLists(void) const;

    virtual size_t extraMusicCommandConversationStateElementComponentCount(void) const = 0;
    virtual const char *extraMusicCommandConversationStateElementComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name) = 0;
    virtual const JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name) const = 0;

    void setMusicSearchCriteria(MusicSearchCriteriaJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicSearchCriteria)
          {
            storeMusicSearchCriteria->remove_reference();
          }
        flagHasMusicSearchCriteria = true;
        storeMusicSearchCriteria = new_value;
      }
    void unsetMusicSearchCriteria(void)
      {
        if (flagHasMusicSearchCriteria)
          {
            storeMusicSearchCriteria->remove_reference();
          }
        flagHasMusicSearchCriteria = false;
      }
    void setUserRequestedAutoPlay(bool new_value)
      {
        flagHasUserRequestedAutoPlay = true;
        storeUserRequestedAutoPlay = new_value;
      }
    void unsetUserRequestedAutoPlay(void)
      {
        flagHasUserRequestedAutoPlay = false;
      }
    void setResultIdLists(MusicSearchResultsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResultIdLists)
          {
            storeResultIdLists->remove_reference();
          }
        flagHasResultIdLists = true;
        storeResultIdLists = new_value;
      }
    void unsetResultIdLists(void)
      {
        if (flagHasResultIdLists)
          {
            storeResultIdLists->remove_reference();
          }
        flagHasResultIdLists = false;
      }
    void setLastResultIdLists(MusicSearchResultsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastResultIdLists)
          {
            storeLastResultIdLists->remove_reference();
          }
        flagHasLastResultIdLists = true;
        storeLastResultIdLists = new_value;
      }
    void unsetLastResultIdLists(void)
      {
        if (flagHasLastResultIdLists)
          {
            storeLastResultIdLists->remove_reference();
          }
        flagHasLastResultIdLists = false;
      }

    virtual void extraMusicCommandConversationStateElementAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraMusicCommandConversationStateElementSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("MusicCommandConversationStateElementKind", getMusicCommandConversationStateElementKind());
        if (flagHasMusicSearchCriteria)
          {
            handler->start_pair("MusicSearchCriteria");
            storeMusicSearchCriteria->write_as_json(handler);
          }
        if (flagHasUserRequestedAutoPlay)
          {
            handler->start_pair("UserRequestedAutoPlay");
            handler->boolean_value(storeUserRequestedAutoPlay);
          }
        if (flagHasResultIdLists)
          {
            handler->start_pair("ResultIdLists");
            storeResultIdLists->write_as_json(handler);
          }
        if (flagHasLastResultIdLists)
          {
            handler->start_pair("LastResultIdLists");
            storeLastResultIdLists->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MusicCommandConversationStateElementJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicCommandConversationStateElementJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicCommandConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandConversationStateElementJSON>, MusicCommandConversationStateElementJSON *, bool> generator("Type MusicCommandConversationStateElement", ignore_extras);
            parse_json_value(text, "Text for MusicCommandConversationStateElementJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicCommandConversationStateElementJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicCommandConversationStateElementJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicCommandConversationStateElementJSON>, MusicCommandConversationStateElementJSON *, bool> generator("Type MusicCommandConversationStateElement", ignore_extras);
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
        JSONHoldingGenerator<MusicSearchCriteriaJSON::Generator, RCHandle<MusicSearchCriteriaJSON>, MusicSearchCriteriaJSON *, bool > fieldGeneratorMusicSearchCriteria;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAutoPlay;
        JSONHoldingGenerator<MusicSearchResultsJSON::Generator, RCHandle<MusicSearchResultsJSON>, MusicSearchResultsJSON *, bool > fieldGeneratorResultIdLists;
        JSONHoldingGenerator<MusicSearchResultsJSON::Generator, RCHandle<MusicSearchResultsJSON>, MusicSearchResultsJSON *, bool > fieldGeneratorLastResultIdLists;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandConversationStateElementKind' field is missing.");
            MusicCommandConversationStateElementJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<MusicCommandConversationStateElementJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMusicCommandConversationStateElementAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getMusicCommandConversationStateElementJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `MusicCommandConversationStateElementKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(MusicCommandConversationStateElementJSON *result)
          {
            if (fieldGeneratorMusicSearchCriteria.have_value)
              {
                result->setMusicSearchCriteria(fieldGeneratorMusicSearchCriteria.value.referenced());
                fieldGeneratorMusicSearchCriteria.have_value = false;
              }
            if (fieldGeneratorUserRequestedAutoPlay.have_value)
              {
                result->setUserRequestedAutoPlay(fieldGeneratorUserRequestedAutoPlay.value);
                fieldGeneratorUserRequestedAutoPlay.have_value = false;
              }
            if (fieldGeneratorResultIdLists.have_value)
              {
                result->setResultIdLists(fieldGeneratorResultIdLists.value.referenced());
                fieldGeneratorResultIdLists.have_value = false;
              }
            if (fieldGeneratorLastResultIdLists.have_value)
              {
                result->setLastResultIdLists(fieldGeneratorLastResultIdLists.value.referenced());
                fieldGeneratorLastResultIdLists.have_value = false;
              }
          }
        virtual void handle_result(MusicCommandConversationStateElementJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "astResultIdLists") == 0)
                        return &fieldGeneratorLastResultIdLists;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "usic", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[6]), "ommandConversationStateElementKind") == 0)
                                    {
                                    keyGenerator.reset();
                                    return &keyGenerator;
                                    }
                                break;
                            case 'S':
                                if (strcmp(&(field_name[6]), "earchCriteria") == 0)
                                    return &fieldGeneratorMusicSearchCriteria;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "esultIdLists") == 0)
                        return &fieldGeneratorResultIdLists;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serRequestedAutoPlay") == 0)
                        return &fieldGeneratorUserRequestedAutoPlay;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMusicSearchCriteria("field \"MusicSearchCriteria\" of the MusicCommandConversationStateElement class", ignore_extras), fieldGeneratorUserRequestedAutoPlay("field \"UserRequestedAutoPlay\" of the MusicCommandConversationStateElement class"), fieldGeneratorResultIdLists("field \"ResultIdLists\" of the MusicCommandConversationStateElement class", ignore_extras), fieldGeneratorLastResultIdLists("field \"LastResultIdLists\" of the MusicCommandConversationStateElement class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"MusicCommandConversationStateElementKind\" of the MusicCommandConversationStateElement class")
          {
            set_what("the MusicCommandConversationStateElement class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMusicSearchCriteria.reset();
            fieldGeneratorUserRequestedAutoPlay.reset();
            fieldGeneratorResultIdLists.reset();
            fieldGeneratorLastResultIdLists.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static MusicCommandConversationStateElementJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* MUSICCOMMANDCONVERSATIONSTATEELEMENTJSON_H */
