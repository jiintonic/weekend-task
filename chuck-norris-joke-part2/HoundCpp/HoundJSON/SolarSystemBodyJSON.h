/* file "SolarSystemBodyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOLARSYSTEMBODYJSON_H
#define SOLARSYSTEMBODYJSON_H

#pragma interface

#include "GeneralizedThingJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SolarSystemBodyJSON : public GeneralizedThingJSON
  {
  private:
    bool flagHasEnglishName;
    std::string storeEnglishName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SolarSystemBodyJSON(const SolarSystemBodyJSON &);
    SolarSystemBodyJSON & operator=(const SolarSystemBodyJSON &other);

    JSONValue * extraEnglishNameToJSON(void) const;

    void  fromJSONEnglishName(JSONValue *json_value, bool ignore_extras = false);


  public:
    SolarSystemBodyJSON(void);
    virtual ~SolarSystemBodyJSON(void);
    const char * getThingKind(void) const;
    bool  hasEnglishName(void) const;
    std::string  getEnglishName(void);
    const std::string  getEnglishName(void) const;

    virtual size_t extraSolarSystemBodyComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSolarSystemBodyComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSolarSystemBodyComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSolarSystemBodyComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSolarSystemBodyLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSolarSystemBodyLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraGeneralizedThingComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEnglishName)
            ++result;
        result += extraSolarSystemBodyComponentCount();
        return result;
      }
    const char *extraGeneralizedThingComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEnglishName)
          {
            if (remainder == 0)
                return "EnglishName";
            --remainder;
          }
        return extraSolarSystemBodyComponentKey(remainder);
      }
    JSONValue *extraGeneralizedThingComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEnglishName)
          {
            if (remainder == 0)
                return extraEnglishNameToJSON();
            --remainder;
          }
        return extraSolarSystemBodyComponentValue(remainder);
      }
    const JSONValue *extraGeneralizedThingComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEnglishName)
          {
            if (remainder == 0)
                return extraEnglishNameToJSON();
            --remainder;
          }
        return extraSolarSystemBodyComponentValue(remainder);
      }
    JSONValue *extraGeneralizedThingLookup(const char *field_name)
      {
        if (strcmp(field_name, "EnglishName") == 0)
            return (flagHasEnglishName ? extraEnglishNameToJSON() : NULL);
        return extraSolarSystemBodyLookup(field_name);
      }
    const JSONValue *extraGeneralizedThingLookup(const char *field_name) const
      {
        if (strcmp(field_name, "EnglishName") == 0)
            return (flagHasEnglishName ? extraEnglishNameToJSON() : NULL);
        return extraSolarSystemBodyLookup(field_name);
      }

    void setEnglishName(std::string new_value)
      {
        flagHasEnglishName = true;
        storeEnglishName = new_value;
      }
    void unsetEnglishName(void)
      {
        flagHasEnglishName = false;
      }

    virtual void extraSolarSystemBodyAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSolarSystemBodySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSolarSystemBodyLookup(key);
        if (old_field == NULL)
          {
            extraSolarSystemBodyAppendPair(key, new_component);
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
    void extraGeneralizedThingAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "EnglishName") == 0)
            {
            fromJSONEnglishName(new_component, false);
            return;
            }
        extraSolarSystemBodyAppendPair(key, new_component);
      }
    void extraGeneralizedThingSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "EnglishName") == 0)
            {
            fromJSONEnglishName(new_component, false);
            return;
            }
        extraSolarSystemBodySetField(key, new_component);
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
        GeneralizedThingJSON::write_fields_as_json(handler);
        assert(flagHasEnglishName);
        handler->start_pair("EnglishName");
        handler->string_value(storeEnglishName);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEnglishName()))
          {
            return "When parsing the object for %what%, the \"EnglishName\" field was missing.";
          }
        return NULL;
      }

    static SolarSystemBodyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SolarSystemBodyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SolarSystemBodyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SolarSystemBodyJSON>, SolarSystemBodyJSON *, bool> generator("Type SolarSystemBody", ignore_extras);
            parse_json_value(text, "Text for SolarSystemBodyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SolarSystemBodyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SolarSystemBodyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SolarSystemBodyJSON>, SolarSystemBodyJSON *, bool> generator("Type SolarSystemBody", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public GeneralizedThingJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEnglishName;
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
            if (!(strcmp(getGeneralizedThingJSONKey().c_str(), "SolarSystemBody") == 0))
                throw("The key field has a value other than `SolarSystemBody'.");
            SolarSystemBodyJSON *result = new SolarSystemBodyJSON();
            assert(result != NULL);
            RCHandle<SolarSystemBodyJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSolarSystemBodyAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(GeneralizedThingJSON *new_result)
          {
            handle_result((SolarSystemBodyJSON *)new_result);
          }
        void finish(SolarSystemBodyJSON *result)
          {
            if (fieldGeneratorEnglishName.have_value)
              {
                result->setEnglishName(fieldGeneratorEnglishName.value);
                fieldGeneratorEnglishName.have_value = false;
              }
            else if (!(result->hasEnglishName()))
              {
                error("When parsing the object for %what%, the \"EnglishName\" field was missing.");
              }
            GeneralizedThingJSON::Generator::finish(result);
          }
        virtual void handle_result(SolarSystemBodyJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "EnglishName") == 0)
                return &fieldGeneratorEnglishName;
            return GeneralizedThingJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : GeneralizedThingJSON::Generator(ignore_extras), fieldGeneratorEnglishName("field \"EnglishName\" of the SolarSystemBody class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SolarSystemBody class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEnglishName.reset();
            GeneralizedThingJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SOLARSYSTEMBODYJSON_H */
