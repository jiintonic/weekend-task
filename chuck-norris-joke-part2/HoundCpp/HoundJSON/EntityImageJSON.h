/* file "EntityImageJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ENTITYIMAGEJSON_H
#define ENTITYIMAGEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "AttributionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EntityImageJSON : public ReferenceCounted
  {
  private:
    bool flagHasURL;
    std::string storeURL;
    bool flagHasThumbnailURL;
    std::string storeThumbnailURL;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasAttribution;
    AttributionJSON * storeAttribution;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    EntityImageJSON(const EntityImageJSON &);
    EntityImageJSON & operator=(const EntityImageJSON &other);

    void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONThumbnailURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttribution(JSONValue *json_value, bool ignore_extras = false);


  public:
    EntityImageJSON(void);
    virtual ~EntityImageJSON(void);
    bool  hasURL(void) const;
    std::string  getURL(void);
    const std::string  getURL(void) const;
    bool  hasThumbnailURL(void) const;
    std::string  getThumbnailURL(void);
    const std::string  getThumbnailURL(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasAttribution(void) const;
    AttributionJSON *  getAttribution(void);
    const AttributionJSON *  getAttribution(void) const;

    virtual size_t extraEntityImageComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraEntityImageComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraEntityImageComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraEntityImageComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraEntityImageLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraEntityImageLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setURL(std::string new_value)
      {
        flagHasURL = true;
        storeURL = new_value;
      }
    void unsetURL(void)
      {
        flagHasURL = false;
      }
    void setThumbnailURL(std::string new_value)
      {
        flagHasThumbnailURL = true;
        storeThumbnailURL = new_value;
      }
    void unsetThumbnailURL(void)
      {
        flagHasThumbnailURL = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setAttribution(AttributionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = true;
        storeAttribution = new_value;
      }
    void unsetAttribution(void)
      {
        if (flagHasAttribution)
          {
            storeAttribution->remove_reference();
          }
        flagHasAttribution = false;
      }

    virtual void extraEntityImageAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraEntityImageSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraEntityImageLookup(key);
        if (old_field == NULL)
          {
            extraEntityImageAppendPair(key, new_component);
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
        assert(flagHasURL);
        handler->start_pair("URL");
        handler->string_value(storeURL);
        if (flagHasThumbnailURL)
          {
            handler->start_pair("ThumbnailURL");
            handler->string_value(storeThumbnailURL);
          }
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        if (flagHasAttribution)
          {
            handler->start_pair("Attribution");
            storeAttribution->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasURL()))
          {
            return "When parsing the object for %what%, the \"URL\" field was missing.";
          }
        return NULL;
      }

    static EntityImageJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EntityImageJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EntityImageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EntityImageJSON>, EntityImageJSON *, bool> generator("Type EntityImage", ignore_extras);
            parse_json_value(text, "Text for EntityImageJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EntityImageJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EntityImageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EntityImageJSON>, EntityImageJSON *, bool> generator("Type EntityImage", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorThumbnailURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<AttributionJSON::Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool > fieldGeneratorAttribution;
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
            EntityImageJSON *result = new EntityImageJSON();
            assert(result != NULL);
            RCHandle<EntityImageJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEntityImageAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(EntityImageJSON *result)
          {
            if (fieldGeneratorURL.have_value)
              {
                result->setURL(fieldGeneratorURL.value);
                fieldGeneratorURL.have_value = false;
              }
            else if (!(result->hasURL()))
              {
                error("When parsing the object for %what%, the \"URL\" field was missing.");
              }
            if (fieldGeneratorThumbnailURL.have_value)
              {
                result->setThumbnailURL(fieldGeneratorThumbnailURL.value);
                fieldGeneratorThumbnailURL.have_value = false;
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorAttribution.have_value)
              {
                result->setAttribution(fieldGeneratorAttribution.value.referenced());
                fieldGeneratorAttribution.have_value = false;
              }
          }
        virtual void handle_result(EntityImageJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ttribution") == 0)
                        return &fieldGeneratorAttribution;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "humbnailURL") == 0)
                        return &fieldGeneratorThumbnailURL;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "RL") == 0)
                        return &fieldGeneratorURL;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorURL("field \"URL\" of the EntityImage class"), fieldGeneratorThumbnailURL("field \"ThumbnailURL\" of the EntityImage class"), fieldGeneratorLabel("field \"Label\" of the EntityImage class"), fieldGeneratorAttribution("field \"Attribution\" of the EntityImage class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the EntityImage class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorURL.reset();
            fieldGeneratorThumbnailURL.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorAttribution.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ENTITYIMAGEJSON_H */
