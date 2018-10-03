/* file "SportsSportImageJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSPORTIMAGEJSON_H
#define SPORTSSPORTIMAGEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsSportImageJSON : public ReferenceCounted
  {
  private:
    bool flagHasURL;
    std::string storeURL;
    bool flagHasWidth;
    OInteger storeWidth;
    bool flagHasHeight;
    OInteger storeHeight;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsSportImageJSON(const SportsSportImageJSON &);
    SportsSportImageJSON & operator=(const SportsSportImageJSON &other);

    void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWidth(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeight(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsSportImageJSON(void);
    virtual ~SportsSportImageJSON(void);
    bool  hasURL(void) const;
    std::string  getURL(void);
    const std::string  getURL(void) const;
    bool  hasWidth(void) const;
    OInteger  getWidth(void);
    const OInteger  getWidth(void) const;
    bool  hasHeight(void) const;
    OInteger  getHeight(void);
    const OInteger  getHeight(void) const;

    virtual size_t extraSportsSportImageComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsSportImageComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsSportImageComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsSportImageComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsSportImageLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsSportImageLookup(const char *field_name) const
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
    void setWidth(OInteger new_value)
      {
        flagHasWidth = true;
        if (new_value < 1)
            throw("The value for field Width of SportsSportImageJSON is less than the lower bound (1) for that field.");
        storeWidth = new_value;
      }
    void unsetWidth(void)
      {
        flagHasWidth = false;
      }
    void setHeight(OInteger new_value)
      {
        flagHasHeight = true;
        if (new_value < 1)
            throw("The value for field Height of SportsSportImageJSON is less than the lower bound (1) for that field.");
        storeHeight = new_value;
      }
    void unsetHeight(void)
      {
        flagHasHeight = false;
      }

    virtual void extraSportsSportImageAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsSportImageSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsSportImageLookup(key);
        if (old_field == NULL)
          {
            extraSportsSportImageAppendPair(key, new_component);
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
        if (flagHasURL)
          {
            handler->start_pair("URL");
            handler->string_value(storeURL);
          }
        if (flagHasWidth)
          {
            handler->start_pair("Width");
            handler->number_value(storeWidth.get_o_integer());
          }
        if (flagHasHeight)
          {
            handler->start_pair("Height");
            handler->number_value(storeHeight.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsSportImageJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsSportImageJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsSportImageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSportImageJSON>, SportsSportImageJSON *, bool> generator("Type SportsSportImage", ignore_extras);
            parse_json_value(text, "Text for SportsSportImageJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsSportImageJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsSportImageJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSportImageJSON>, SportsSportImageJSON *, bool> generator("Type SportsSportImage", ignore_extras);
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
        static char lowerBoundWidth[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundWidth>, OInteger, o_integer > fieldGeneratorWidth;
        static char lowerBoundHeight[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundHeight>, OInteger, o_integer > fieldGeneratorHeight;
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
            SportsSportImageJSON *result = new SportsSportImageJSON();
            assert(result != NULL);
            RCHandle<SportsSportImageJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsSportImageAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsSportImageJSON *result)
          {
            if (fieldGeneratorURL.have_value)
              {
                result->setURL(fieldGeneratorURL.value);
                fieldGeneratorURL.have_value = false;
              }
            if (fieldGeneratorWidth.have_value)
              {
                result->setWidth(fieldGeneratorWidth.value);
                fieldGeneratorWidth.have_value = false;
              }
            if (fieldGeneratorHeight.have_value)
              {
                result->setHeight(fieldGeneratorHeight.value);
                fieldGeneratorHeight.have_value = false;
              }
          }
        virtual void handle_result(SportsSportImageJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'H':
                    if (strcmp(&(field_name[1]), "eight") == 0)
                        return &fieldGeneratorHeight;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "RL") == 0)
                        return &fieldGeneratorURL;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "idth") == 0)
                        return &fieldGeneratorWidth;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorURL("field \"URL\" of the SportsSportImage class"), fieldGeneratorWidth("field \"Width\" of the SportsSportImage class"), fieldGeneratorHeight("field \"Height\" of the SportsSportImage class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsSportImage class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorURL.reset();
            fieldGeneratorWidth.reset();
            fieldGeneratorHeight.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSPORTIMAGEJSON_H */
