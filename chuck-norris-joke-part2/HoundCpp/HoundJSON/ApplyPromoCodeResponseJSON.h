/* file "ApplyPromoCodeResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef APPLYPROMOCODERESPONSEJSON_H
#define APPLYPROMOCODERESPONSEJSON_H

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


class ApplyPromoCodeResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHaspromotion_code;
    std::string storepromotion_code;
    bool flagHasdescription;
    std::string storedescription;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ApplyPromoCodeResponseJSON(const ApplyPromoCodeResponseJSON &);
    ApplyPromoCodeResponseJSON & operator=(const ApplyPromoCodeResponseJSON &other);

    void  fromJSONpromotion_code(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdescription(JSONValue *json_value, bool ignore_extras = false);


  public:
    ApplyPromoCodeResponseJSON(void);
    virtual ~ApplyPromoCodeResponseJSON(void);
    bool  haspromotion_code(void) const;
    std::string  getpromotion_code(void);
    const std::string  getpromotion_code(void) const;
    bool  hasdescription(void) const;
    std::string  getdescription(void);
    const std::string  getdescription(void) const;

    virtual size_t extraApplyPromoCodeResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraApplyPromoCodeResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraApplyPromoCodeResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraApplyPromoCodeResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraApplyPromoCodeResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraApplyPromoCodeResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setpromotion_code(std::string new_value)
      {
        flagHaspromotion_code = true;
        storepromotion_code = new_value;
      }
    void unsetpromotion_code(void)
      {
        flagHaspromotion_code = false;
      }
    void setdescription(std::string new_value)
      {
        flagHasdescription = true;
        storedescription = new_value;
      }
    void unsetdescription(void)
      {
        flagHasdescription = false;
      }

    virtual void extraApplyPromoCodeResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraApplyPromoCodeResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraApplyPromoCodeResponseLookup(key);
        if (old_field == NULL)
          {
            extraApplyPromoCodeResponseAppendPair(key, new_component);
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
        assert(flagHaspromotion_code);
        handler->start_pair("promotion_code");
        handler->string_value(storepromotion_code);
        assert(flagHasdescription);
        handler->start_pair("description");
        handler->string_value(storedescription);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(haspromotion_code()))
          {
            return "When parsing the object for %what%, the \"promotion_code\" field was missing.";
          }
        if (!(hasdescription()))
          {
            return "When parsing the object for %what%, the \"description\" field was missing.";
          }
        return NULL;
      }

    static ApplyPromoCodeResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ApplyPromoCodeResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ApplyPromoCodeResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ApplyPromoCodeResponseJSON>, ApplyPromoCodeResponseJSON *, bool> generator("Type ApplyPromoCodeResponse", ignore_extras);
            parse_json_value(text, "Text for ApplyPromoCodeResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ApplyPromoCodeResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ApplyPromoCodeResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ApplyPromoCodeResponseJSON>, ApplyPromoCodeResponseJSON *, bool> generator("Type ApplyPromoCodeResponse", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorpromotion_code;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordescription;
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
            ApplyPromoCodeResponseJSON *result = new ApplyPromoCodeResponseJSON();
            assert(result != NULL);
            RCHandle<ApplyPromoCodeResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraApplyPromoCodeResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ApplyPromoCodeResponseJSON *result)
          {
            if (fieldGeneratorpromotion_code.have_value)
              {
                result->setpromotion_code(fieldGeneratorpromotion_code.value);
                fieldGeneratorpromotion_code.have_value = false;
              }
            else if (!(result->haspromotion_code()))
              {
                error("When parsing the object for %what%, the \"promotion_code\" field was missing.");
              }
            if (fieldGeneratordescription.have_value)
              {
                result->setdescription(fieldGeneratordescription.value);
                fieldGeneratordescription.have_value = false;
              }
            else if (!(result->hasdescription()))
              {
                error("When parsing the object for %what%, the \"description\" field was missing.");
              }
          }
        virtual void handle_result(ApplyPromoCodeResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'd':
                    if (strcmp(&(field_name[1]), "escription") == 0)
                        return &fieldGeneratordescription;
                    break;
                case 'p':
                    if (strcmp(&(field_name[1]), "romotion_code") == 0)
                        return &fieldGeneratorpromotion_code;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorpromotion_code("field \"promotion_code\" of the ApplyPromoCodeResponse class"), fieldGeneratordescription("field \"description\" of the ApplyPromoCodeResponse class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ApplyPromoCodeResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorpromotion_code.reset();
            fieldGeneratordescription.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* APPLYPROMOCODERESPONSEJSON_H */
