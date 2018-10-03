/* file "LocationIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCATIONINTENTJSON_H
#define LOCATIONINTENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocationIntentJSON : public ReferenceCounted
  {
  private:

    LocationIntentJSON(const LocationIntentJSON &);
    LocationIntentJSON & operator=(const LocationIntentJSON &other);

  public:
    LocationIntentJSON(void);
    virtual ~LocationIntentJSON(void);
    virtual const char *getLocationIntentKind(void) const = 0;

    virtual size_t extraLocationIntentComponentCount(void) const = 0;
    virtual const char *extraLocationIntentComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraLocationIntentComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraLocationIntentComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraLocationIntentLookup(const char *field_name) = 0;
    virtual const JSONValue *extraLocationIntentLookup(const char *field_name) const = 0;


    virtual void extraLocationIntentAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraLocationIntentSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("LocationIntentKind", getLocationIntentKind());
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static LocationIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocationIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationIntentJSON>, LocationIntentJSON *, bool> generator("Type LocationIntent", ignore_extras);
            parse_json_value(text, "Text for LocationIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocationIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocationIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationIntentJSON>, LocationIntentJSON *, bool> generator("Type LocationIntent", ignore_extras);
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
                throw("The `LocationIntentKind' field is missing.");
            LocationIntentJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<LocationIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocationIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getLocationIntentJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `LocationIntentKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(LocationIntentJSON *result)
          {
          }
        virtual void handle_result(LocationIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "LocationIntentKind") == 0)
                {
                keyGenerator.reset();
                return &keyGenerator;
                }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : unknownFieldGenerator(ignore_extras), keyGenerator("key field \"LocationIntentKind\" of the LocationIntent class")
          {
            set_what("the LocationIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static LocationIntentJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* LOCATIONINTENTJSON_H */
