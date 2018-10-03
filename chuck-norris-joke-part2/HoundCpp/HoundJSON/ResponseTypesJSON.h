/* file "ResponseTypesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RESPONSETYPESJSON_H
#define RESPONSETYPESJSON_H

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


class ResponseTypesJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpokenShort;
    std::string storeSpokenShort;
    bool flagHasSpokenLong;
    std::string storeSpokenLong;
    bool flagHasWrittenShort;
    std::string storeWrittenShort;
    bool flagHasWrittenLong;
    std::string storeWrittenLong;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ResponseTypesJSON(const ResponseTypesJSON &);
    ResponseTypesJSON & operator=(const ResponseTypesJSON &other);

    void  fromJSONSpokenShort(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenShort(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenLong(JSONValue *json_value, bool ignore_extras = false);


  public:
    ResponseTypesJSON(void);
    virtual ~ResponseTypesJSON(void);
    bool  hasSpokenShort(void) const;
    std::string  getSpokenShort(void);
    const std::string  getSpokenShort(void) const;
    bool  hasSpokenLong(void) const;
    std::string  getSpokenLong(void);
    const std::string  getSpokenLong(void) const;
    bool  hasWrittenShort(void) const;
    std::string  getWrittenShort(void);
    const std::string  getWrittenShort(void) const;
    bool  hasWrittenLong(void) const;
    std::string  getWrittenLong(void);
    const std::string  getWrittenLong(void) const;

    virtual size_t extraResponseTypesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraResponseTypesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraResponseTypesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraResponseTypesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraResponseTypesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraResponseTypesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpokenShort(std::string new_value)
      {
        flagHasSpokenShort = true;
        storeSpokenShort = new_value;
      }
    void unsetSpokenShort(void)
      {
        flagHasSpokenShort = false;
      }
    void setSpokenLong(std::string new_value)
      {
        flagHasSpokenLong = true;
        storeSpokenLong = new_value;
      }
    void unsetSpokenLong(void)
      {
        flagHasSpokenLong = false;
      }
    void setWrittenShort(std::string new_value)
      {
        flagHasWrittenShort = true;
        storeWrittenShort = new_value;
      }
    void unsetWrittenShort(void)
      {
        flagHasWrittenShort = false;
      }
    void setWrittenLong(std::string new_value)
      {
        flagHasWrittenLong = true;
        storeWrittenLong = new_value;
      }
    void unsetWrittenLong(void)
      {
        flagHasWrittenLong = false;
      }

    virtual void extraResponseTypesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraResponseTypesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraResponseTypesLookup(key);
        if (old_field == NULL)
          {
            extraResponseTypesAppendPair(key, new_component);
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
        if (flagHasSpokenShort)
          {
            handler->start_pair("SpokenShort");
            handler->string_value(storeSpokenShort);
          }
        if (flagHasSpokenLong)
          {
            handler->start_pair("SpokenLong");
            handler->string_value(storeSpokenLong);
          }
        if (flagHasWrittenShort)
          {
            handler->start_pair("WrittenShort");
            handler->string_value(storeWrittenShort);
          }
        if (flagHasWrittenLong)
          {
            handler->start_pair("WrittenLong");
            handler->string_value(storeWrittenLong);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ResponseTypesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ResponseTypesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ResponseTypesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ResponseTypesJSON>, ResponseTypesJSON *, bool> generator("Type ResponseTypes", ignore_extras);
            parse_json_value(text, "Text for ResponseTypesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ResponseTypesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ResponseTypesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ResponseTypesJSON>, ResponseTypesJSON *, bool> generator("Type ResponseTypes", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenShort;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenShort;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenLong;
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
            ResponseTypesJSON *result = new ResponseTypesJSON();
            assert(result != NULL);
            RCHandle<ResponseTypesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraResponseTypesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ResponseTypesJSON *result)
          {
            if (fieldGeneratorSpokenShort.have_value)
              {
                result->setSpokenShort(fieldGeneratorSpokenShort.value);
                fieldGeneratorSpokenShort.have_value = false;
              }
            if (fieldGeneratorSpokenLong.have_value)
              {
                result->setSpokenLong(fieldGeneratorSpokenLong.value);
                fieldGeneratorSpokenLong.have_value = false;
              }
            if (fieldGeneratorWrittenShort.have_value)
              {
                result->setWrittenShort(fieldGeneratorWrittenShort.value);
                fieldGeneratorWrittenShort.have_value = false;
              }
            if (fieldGeneratorWrittenLong.have_value)
              {
                result->setWrittenLong(fieldGeneratorWrittenLong.value);
                fieldGeneratorWrittenLong.have_value = false;
              }
          }
        virtual void handle_result(ResponseTypesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    if (strncmp(&(field_name[1]), "poken", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[7]), "ong") == 0)
                                    return &fieldGeneratorSpokenLong;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[7]), "hort") == 0)
                                    return &fieldGeneratorSpokenShort;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "ritten", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'L':
                                if (strcmp(&(field_name[8]), "ong") == 0)
                                    return &fieldGeneratorWrittenLong;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[8]), "hort") == 0)
                                    return &fieldGeneratorWrittenShort;
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
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenShort("field \"SpokenShort\" of the ResponseTypes class"), fieldGeneratorSpokenLong("field \"SpokenLong\" of the ResponseTypes class"), fieldGeneratorWrittenShort("field \"WrittenShort\" of the ResponseTypes class"), fieldGeneratorWrittenLong("field \"WrittenLong\" of the ResponseTypes class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ResponseTypes class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpokenShort.reset();
            fieldGeneratorSpokenLong.reset();
            fieldGeneratorWrittenShort.reset();
            fieldGeneratorWrittenLong.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* RESPONSETYPESJSON_H */
