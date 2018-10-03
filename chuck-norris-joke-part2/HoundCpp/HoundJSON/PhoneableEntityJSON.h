/* file "PhoneableEntityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PHONEABLEENTITYJSON_H
#define PHONEABLEENTITYJSON_H

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


class PhoneableEntityJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    bool flagHasWrittenLabel;
    std::string storeWrittenLabel;

    PhoneableEntityJSON(const PhoneableEntityJSON &);
    PhoneableEntityJSON & operator=(const PhoneableEntityJSON &other);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenLabel(JSONValue *json_value, bool ignore_extras = false);


  public:
    PhoneableEntityJSON(void);
    virtual ~PhoneableEntityJSON(void);
    virtual const char *getKind(void) const = 0;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;
    bool  hasWrittenLabel(void) const;
    std::string  getWrittenLabel(void);
    const std::string  getWrittenLabel(void) const;

    virtual size_t extraPhoneableEntityComponentCount(void) const = 0;
    virtual const char *extraPhoneableEntityComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraPhoneableEntityComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraPhoneableEntityComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraPhoneableEntityLookup(const char *field_name) = 0;
    virtual const JSONValue *extraPhoneableEntityLookup(const char *field_name) const = 0;

    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }
    void setWrittenLabel(std::string new_value)
      {
        flagHasWrittenLabel = true;
        storeWrittenLabel = new_value;
      }
    void unsetWrittenLabel(void)
      {
        flagHasWrittenLabel = false;
      }

    virtual void extraPhoneableEntityAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraPhoneableEntitySetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("Kind", getKind());
        assert(flagHasSpokenLabel);
        handler->start_pair("SpokenLabel");
        handler->string_value(storeSpokenLabel);
        assert(flagHasWrittenLabel);
        handler->start_pair("WrittenLabel");
        handler->string_value(storeWrittenLabel);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpokenLabel()))
          {
            return "When parsing the object for %what%, the \"SpokenLabel\" field was missing.";
          }
        if (!(hasWrittenLabel()))
          {
            return "When parsing the object for %what%, the \"WrittenLabel\" field was missing.";
          }
        return NULL;
      }

    static PhoneableEntityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PhoneableEntityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PhoneableEntityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneableEntityJSON>, PhoneableEntityJSON *, bool> generator("Type PhoneableEntity", ignore_extras);
            parse_json_value(text, "Text for PhoneableEntityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PhoneableEntityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PhoneableEntityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneableEntityJSON>, PhoneableEntityJSON *, bool> generator("Type PhoneableEntity", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenLabel;
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
                throw("The `Kind' field is missing.");
            PhoneableEntityJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<PhoneableEntityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPhoneableEntityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getPhoneableEntityJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `Kind' field is missing.");
            return keyGenerator.value;
          }
        void finish(PhoneableEntityJSON *result)
          {
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
            else if (!(result->hasSpokenLabel()))
              {
                error("When parsing the object for %what%, the \"SpokenLabel\" field was missing.");
              }
            if (fieldGeneratorWrittenLabel.have_value)
              {
                result->setWrittenLabel(fieldGeneratorWrittenLabel.value);
                fieldGeneratorWrittenLabel.have_value = false;
              }
            else if (!(result->hasWrittenLabel()))
              {
                error("When parsing the object for %what%, the \"WrittenLabel\" field was missing.");
              }
          }
        virtual void handle_result(PhoneableEntityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'K':
                    if (strcmp(&(field_name[1]), "ind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenLabel") == 0)
                        return &fieldGeneratorSpokenLabel;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenLabel") == 0)
                        return &fieldGeneratorWrittenLabel;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the PhoneableEntity class"), fieldGeneratorWrittenLabel("field \"WrittenLabel\" of the PhoneableEntity class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"Kind\" of the PhoneableEntity class")
          {
            set_what("the PhoneableEntity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpokenLabel.reset();
            fieldGeneratorWrittenLabel.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static PhoneableEntityJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* PHONEABLEENTITYJSON_H */
