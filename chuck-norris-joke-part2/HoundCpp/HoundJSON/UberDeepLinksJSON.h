/* file "UberDeepLinksJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERDEEPLINKSJSON_H
#define UBERDEEPLINKSJSON_H

#pragma interface

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


class UberDeepLinksJSON : public ReferenceCounted
  {
  private:
    bool flagHasStandardLink;
    std::string storeStandardLink;
    bool flagHasUniversalLink;
    std::string storeUniversalLink;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberDeepLinksJSON(const UberDeepLinksJSON &);
    UberDeepLinksJSON & operator=(const UberDeepLinksJSON &other);

    void  fromJSONStandardLink(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUniversalLink(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberDeepLinksJSON(void);
    virtual ~UberDeepLinksJSON(void);
    bool  hasStandardLink(void) const;
    std::string  getStandardLink(void);
    const std::string  getStandardLink(void) const;
    bool  hasUniversalLink(void) const;
    std::string  getUniversalLink(void);
    const std::string  getUniversalLink(void) const;

    virtual size_t extraUberDeepLinksComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberDeepLinksComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberDeepLinksComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberDeepLinksComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberDeepLinksLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberDeepLinksLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStandardLink(std::string new_value)
      {
        flagHasStandardLink = true;
        storeStandardLink = new_value;
      }
    void unsetStandardLink(void)
      {
        flagHasStandardLink = false;
      }
    void setUniversalLink(std::string new_value)
      {
        flagHasUniversalLink = true;
        storeUniversalLink = new_value;
      }
    void unsetUniversalLink(void)
      {
        flagHasUniversalLink = false;
      }

    virtual void extraUberDeepLinksAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberDeepLinksSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberDeepLinksLookup(key);
        if (old_field == NULL)
          {
            extraUberDeepLinksAppendPair(key, new_component);
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
        if (flagHasStandardLink)
          {
            handler->start_pair("StandardLink");
            handler->string_value(storeStandardLink);
          }
        if (flagHasUniversalLink)
          {
            handler->start_pair("UniversalLink");
            handler->string_value(storeUniversalLink);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberDeepLinksJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberDeepLinksJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberDeepLinksJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberDeepLinksJSON>, UberDeepLinksJSON *, bool> generator("Type UberDeepLinks", ignore_extras);
            parse_json_value(text, "Text for UberDeepLinksJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberDeepLinksJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberDeepLinksJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberDeepLinksJSON>, UberDeepLinksJSON *, bool> generator("Type UberDeepLinks", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStandardLink;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUniversalLink;
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
            UberDeepLinksJSON *result = new UberDeepLinksJSON();
            assert(result != NULL);
            RCHandle<UberDeepLinksJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberDeepLinksAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberDeepLinksJSON *result)
          {
            if (fieldGeneratorStandardLink.have_value)
              {
                result->setStandardLink(fieldGeneratorStandardLink.value);
                fieldGeneratorStandardLink.have_value = false;
              }
            if (fieldGeneratorUniversalLink.have_value)
              {
                result->setUniversalLink(fieldGeneratorUniversalLink.value);
                fieldGeneratorUniversalLink.have_value = false;
              }
          }
        virtual void handle_result(UberDeepLinksJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strcmp(&(field_name[1]), "tandardLink") == 0)
                        return &fieldGeneratorStandardLink;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "niversalLink") == 0)
                        return &fieldGeneratorUniversalLink;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStandardLink("field \"StandardLink\" of the UberDeepLinks class"), fieldGeneratorUniversalLink("field \"UniversalLink\" of the UberDeepLinks class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberDeepLinks class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStandardLink.reset();
            fieldGeneratorUniversalLink.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERDEEPLINKSJSON_H */
