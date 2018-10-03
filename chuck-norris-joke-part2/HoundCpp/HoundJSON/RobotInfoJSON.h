/* file "RobotInfoJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTINFOJSON_H
#define ROBOTINFOJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "RobotConfigurationJSON.h"
#include "RobotStateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotInfoJSON : public ReferenceCounted
  {
  private:
    bool flagHasRobotConfiguration;
    RobotConfigurationJSON * storeRobotConfiguration;
    bool flagHasRobotState;
    RobotStateJSON * storeRobotState;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotInfoJSON(const RobotInfoJSON &);
    RobotInfoJSON & operator=(const RobotInfoJSON &other);

    void  fromJSONRobotConfiguration(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRobotState(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotInfoJSON(void);
    virtual ~RobotInfoJSON(void);
    bool  hasRobotConfiguration(void) const;
    RobotConfigurationJSON *  getRobotConfiguration(void);
    const RobotConfigurationJSON *  getRobotConfiguration(void) const;
    bool  hasRobotState(void) const;
    RobotStateJSON *  getRobotState(void);
    const RobotStateJSON *  getRobotState(void) const;

    virtual size_t extraRobotInfoComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotInfoComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotInfoComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotInfoComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotInfoLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotInfoLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setRobotConfiguration(RobotConfigurationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRobotConfiguration)
          {
            storeRobotConfiguration->remove_reference();
          }
        flagHasRobotConfiguration = true;
        storeRobotConfiguration = new_value;
      }
    void unsetRobotConfiguration(void)
      {
        if (flagHasRobotConfiguration)
          {
            storeRobotConfiguration->remove_reference();
          }
        flagHasRobotConfiguration = false;
      }
    void setRobotState(RobotStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRobotState)
          {
            storeRobotState->remove_reference();
          }
        flagHasRobotState = true;
        storeRobotState = new_value;
      }
    void unsetRobotState(void)
      {
        if (flagHasRobotState)
          {
            storeRobotState->remove_reference();
          }
        flagHasRobotState = false;
      }

    virtual void extraRobotInfoAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotInfoSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotInfoLookup(key);
        if (old_field == NULL)
          {
            extraRobotInfoAppendPair(key, new_component);
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
        if (flagHasRobotConfiguration)
          {
            handler->start_pair("RobotConfiguration");
            storeRobotConfiguration->write_as_json(handler);
          }
        if (flagHasRobotState)
          {
            handler->start_pair("RobotState");
            storeRobotState->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static RobotInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotInfoJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotInfoJSON>, RobotInfoJSON *, bool> generator("Type RobotInfo", ignore_extras);
            parse_json_value(text, "Text for RobotInfoJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotInfoJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotInfoJSON>, RobotInfoJSON *, bool> generator("Type RobotInfo", ignore_extras);
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
        JSONHoldingGenerator<RobotConfigurationJSON::Generator, RCHandle<RobotConfigurationJSON>, RobotConfigurationJSON *, bool > fieldGeneratorRobotConfiguration;
        JSONHoldingGenerator<RobotStateJSON::Generator, RCHandle<RobotStateJSON>, RobotStateJSON *, bool > fieldGeneratorRobotState;
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
            RobotInfoJSON *result = new RobotInfoJSON();
            assert(result != NULL);
            RCHandle<RobotInfoJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(RobotInfoJSON *result)
          {
            if (fieldGeneratorRobotConfiguration.have_value)
              {
                result->setRobotConfiguration(fieldGeneratorRobotConfiguration.value.referenced());
                fieldGeneratorRobotConfiguration.have_value = false;
              }
            if (fieldGeneratorRobotState.have_value)
              {
                result->setRobotState(fieldGeneratorRobotState.value.referenced());
                fieldGeneratorRobotState.have_value = false;
              }
          }
        virtual void handle_result(RobotInfoJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Robot", 5) == 0)
              {
                switch ((unsigned char)(field_name[5]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[6]), "onfiguration") == 0)
                            return &fieldGeneratorRobotConfiguration;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[6]), "tate") == 0)
                            return &fieldGeneratorRobotState;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRobotConfiguration("field \"RobotConfiguration\" of the RobotInfo class", ignore_extras), fieldGeneratorRobotState("field \"RobotState\" of the RobotInfo class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotInfo class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRobotConfiguration.reset();
            fieldGeneratorRobotState.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTINFOJSON_H */
