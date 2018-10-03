/* file "RobotStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTSTATEJSON_H
#define ROBOTSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "KnownRoomsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasCurrentAction;
    std::string storeCurrentAction;
    bool flagHasRecordingVideo;
    bool storeRecordingVideo;
    bool flagHasKnownRooms;
    KnownRoomsJSON * storeKnownRooms;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotStateJSON(const RobotStateJSON &);
    RobotStateJSON & operator=(const RobotStateJSON &other);

    void  fromJSONCurrentAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecordingVideo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONKnownRooms(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotStateJSON(void);
    virtual ~RobotStateJSON(void);
    bool  hasCurrentAction(void) const;
    std::string  getCurrentAction(void);
    const std::string  getCurrentAction(void) const;
    bool  hasRecordingVideo(void) const;
    bool  getRecordingVideo(void);
    const bool  getRecordingVideo(void) const;
    bool  hasKnownRooms(void) const;
    KnownRoomsJSON *  getKnownRooms(void);
    const KnownRoomsJSON *  getKnownRooms(void) const;

    virtual size_t extraRobotStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCurrentAction(std::string new_value)
      {
        flagHasCurrentAction = true;
        storeCurrentAction = new_value;
      }
    void unsetCurrentAction(void)
      {
        flagHasCurrentAction = false;
      }
    void setRecordingVideo(bool new_value)
      {
        flagHasRecordingVideo = true;
        storeRecordingVideo = new_value;
      }
    void unsetRecordingVideo(void)
      {
        flagHasRecordingVideo = false;
      }
    void setKnownRooms(KnownRoomsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasKnownRooms)
          {
            storeKnownRooms->remove_reference();
          }
        flagHasKnownRooms = true;
        storeKnownRooms = new_value;
      }
    void unsetKnownRooms(void)
      {
        if (flagHasKnownRooms)
          {
            storeKnownRooms->remove_reference();
          }
        flagHasKnownRooms = false;
      }

    virtual void extraRobotStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotStateLookup(key);
        if (old_field == NULL)
          {
            extraRobotStateAppendPair(key, new_component);
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

    void write_as_json(JSONHandler *handler) const
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
        if (flagHasCurrentAction)
          {
            handler->start_pair("CurrentAction");
            handler->string_value(storeCurrentAction);
          }
        if (flagHasRecordingVideo)
          {
            handler->start_pair("RecordingVideo");
            handler->boolean_value(storeRecordingVideo);
          }
        if (flagHasKnownRooms)
          {
            handler->start_pair("KnownRooms");
            storeKnownRooms->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RobotStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotStateJSON>, RobotStateJSON *, bool> generator("Type RobotState", ignore_extras);
            parse_json_value(text, "Text for RobotStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotStateJSON>, RobotStateJSON *, bool> generator("Type RobotState", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrentAction;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRecordingVideo;
        JSONHoldingGenerator<KnownRoomsJSON::Generator, RCHandle<KnownRoomsJSON>, KnownRoomsJSON *, bool > fieldGeneratorKnownRooms;
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
            RobotStateJSON *result = new RobotStateJSON();
            assert(result != NULL);
            RCHandle<RobotStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RobotStateJSON *result)
          {
            if (fieldGeneratorCurrentAction.have_value)
              {
                result->setCurrentAction(fieldGeneratorCurrentAction.value);
                fieldGeneratorCurrentAction.have_value = false;
              }
            if (fieldGeneratorRecordingVideo.have_value)
              {
                result->setRecordingVideo(fieldGeneratorRecordingVideo.value);
                fieldGeneratorRecordingVideo.have_value = false;
              }
            if (fieldGeneratorKnownRooms.have_value)
              {
                result->setKnownRooms(fieldGeneratorKnownRooms.value.referenced());
                fieldGeneratorKnownRooms.have_value = false;
              }
          }
        virtual void handle_result(RobotStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "urrentAction") == 0)
                        return &fieldGeneratorCurrentAction;
                    break;
                case 'K':
                    if (strcmp(&(field_name[1]), "nownRooms") == 0)
                        return &fieldGeneratorKnownRooms;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ecordingVideo") == 0)
                        return &fieldGeneratorRecordingVideo;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCurrentAction("field \"CurrentAction\" of the RobotState class"), fieldGeneratorRecordingVideo("field \"RecordingVideo\" of the RobotState class"), fieldGeneratorKnownRooms("field \"KnownRooms\" of the RobotState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCurrentAction.reset();
            fieldGeneratorRecordingVideo.reset();
            fieldGeneratorKnownRooms.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTSTATEJSON_H */
