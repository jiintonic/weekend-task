/* file "SportsOlympicsBasicAttributeArgumentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSBASICATTRIBUTEARGUMENTJSON_H
#define SPORTSOLYMPICSBASICATTRIBUTEARGUMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsBasicAttributeArgumentJSON : public ReferenceCounted
  {
  private:
    bool flagHasArgumentID;
    OInteger storeArgumentID;

    SportsOlympicsBasicAttributeArgumentJSON(const SportsOlympicsBasicAttributeArgumentJSON &);
    SportsOlympicsBasicAttributeArgumentJSON & operator=(const SportsOlympicsBasicAttributeArgumentJSON &other);

    void  fromJSONArgumentID(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsBasicAttributeArgumentJSON(void);
    virtual ~SportsOlympicsBasicAttributeArgumentJSON(void);
    virtual const char *getSportsOlympicsBasicAttributeArgumentKind(void) const = 0;
    bool  hasArgumentID(void) const;
    OInteger  getArgumentID(void);
    const OInteger  getArgumentID(void) const;

    virtual size_t extraSportsOlympicsBasicAttributeArgumentComponentCount(void) const = 0;
    virtual const char *extraSportsOlympicsBasicAttributeArgumentComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name) const = 0;

    void setArgumentID(OInteger new_value)
      {
        flagHasArgumentID = true;
        if (new_value < 0)
            throw("The value for field ArgumentID of SportsOlympicsBasicAttributeArgumentJSON is less than the lower bound (0) for that field.");
        storeArgumentID = new_value;
      }
    void unsetArgumentID(void)
      {
        flagHasArgumentID = false;
      }

    virtual void extraSportsOlympicsBasicAttributeArgumentAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSportsOlympicsBasicAttributeArgumentSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("SportsOlympicsBasicAttributeArgumentKind", getSportsOlympicsBasicAttributeArgumentKind());
        assert(flagHasArgumentID);
        handler->start_pair("ArgumentID");
        handler->number_value(storeArgumentID.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArgumentID()))
          {
            return "When parsing the object for %what%, the \"ArgumentID\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsBasicAttributeArgumentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsBasicAttributeArgumentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentJSON>, SportsOlympicsBasicAttributeArgumentJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgument", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsBasicAttributeArgumentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsBasicAttributeArgumentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentJSON>, SportsOlympicsBasicAttributeArgumentJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgument", ignore_extras);
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
        static char lowerBoundArgumentID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundArgumentID>, OInteger, o_integer > fieldGeneratorArgumentID;
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
                throw("The `SportsOlympicsBasicAttributeArgumentKind' field is missing.");
            SportsOlympicsBasicAttributeArgumentJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SportsOlympicsBasicAttributeArgumentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsBasicAttributeArgumentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getSportsOlympicsBasicAttributeArgumentJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `SportsOlympicsBasicAttributeArgumentKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(SportsOlympicsBasicAttributeArgumentJSON *result)
          {
            if (fieldGeneratorArgumentID.have_value)
              {
                result->setArgumentID(fieldGeneratorArgumentID.value);
                fieldGeneratorArgumentID.have_value = false;
              }
            else if (!(result->hasArgumentID()))
              {
                error("When parsing the object for %what%, the \"ArgumentID\" field was missing.");
              }
          }
        virtual void handle_result(SportsOlympicsBasicAttributeArgumentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rgumentID") == 0)
                        return &fieldGeneratorArgumentID;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "portsOlympicsBasicAttributeArgumentKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentID("field \"ArgumentID\" of the SportsOlympicsBasicAttributeArgument class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"SportsOlympicsBasicAttributeArgumentKind\" of the SportsOlympicsBasicAttributeArgument class")
          {
            set_what("the SportsOlympicsBasicAttributeArgument class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SportsOlympicsBasicAttributeArgumentJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SPORTSOLYMPICSBASICATTRIBUTEARGUMENTJSON_H */