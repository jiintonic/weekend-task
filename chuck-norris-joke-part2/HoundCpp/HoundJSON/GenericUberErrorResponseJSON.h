/* file "GenericUberErrorResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GENERICUBERERRORRESPONSEJSON_H
#define GENERICUBERERRORRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "GenericUberErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GenericUberErrorResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHaserrors;
    std::vector< GenericUberErrorJSON * > storeerrors;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GenericUberErrorResponseJSON(const GenericUberErrorResponseJSON &);
    GenericUberErrorResponseJSON & operator=(const GenericUberErrorResponseJSON &other);

    void  fromJSONerrors(JSONValue *json_value, bool ignore_extras = false);


  public:
    GenericUberErrorResponseJSON(void);
    virtual ~GenericUberErrorResponseJSON(void);
    bool  haserrors(void) const;
    size_t  countOferrors(void) const;
    GenericUberErrorJSON *  elementOferrors(size_t element_num);
    const GenericUberErrorJSON *  elementOferrors(size_t element_num) const;
    std::vector< GenericUberErrorJSON * >  geterrors(void);
    const std::vector< GenericUberErrorJSON * >  geterrors(void) const;

    virtual size_t extraGenericUberErrorResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGenericUberErrorResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGenericUberErrorResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGenericUberErrorResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGenericUberErrorResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGenericUberErrorResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initerrors(void)
      {
        if (flagHaserrors)
          {
            for (size_t num2 = 0; num2 < storeerrors.size(); ++num2)
              {
                storeerrors[num2]->remove_reference();
              }
          }
        flagHaserrors = true;
        storeerrors.clear();
      }
    void appenderrors(GenericUberErrorJSON * to_append)
      {
        if (!flagHaserrors)
          {
            flagHaserrors = true;
            storeerrors.clear();
          }
        assert(flagHaserrors);
        to_append->add_reference();
        storeerrors.push_back(to_append);
      }
    void unseterrors(void)
      {
        if (flagHaserrors)
          {
            for (size_t num3 = 0; num3 < storeerrors.size(); ++num3)
              {
                storeerrors[num3]->remove_reference();
              }
          }
        flagHaserrors = false;
        storeerrors.clear();
      }

    virtual void extraGenericUberErrorResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGenericUberErrorResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGenericUberErrorResponseLookup(key);
        if (old_field == NULL)
          {
            extraGenericUberErrorResponseAppendPair(key, new_component);
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
        assert(flagHaserrors);
        handler->start_pair("errors");
        assert(storeerrors.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeerrors.size(); ++num1)
          {
            storeerrors[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(haserrors()))
          {
            return "When parsing the object for %what%, the \"errors\" field was missing.";
          }
        return NULL;
      }

    static GenericUberErrorResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GenericUberErrorResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GenericUberErrorResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GenericUberErrorResponseJSON>, GenericUberErrorResponseJSON *, bool> generator("Type GenericUberErrorResponse", ignore_extras);
            parse_json_value(text, "Text for GenericUberErrorResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GenericUberErrorResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GenericUberErrorResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GenericUberErrorResponseJSON>, GenericUberErrorResponseJSON *, bool> generator("Type GenericUberErrorResponse", ignore_extras);
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
        JSONHoldingArrayGenerator<GenericUberErrorJSON::Generator, RCHandle<GenericUberErrorJSON>, GenericUberErrorJSON *, bool > fieldGeneratorerrors;
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
            GenericUberErrorResponseJSON *result = new GenericUberErrorResponseJSON();
            assert(result != NULL);
            RCHandle<GenericUberErrorResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGenericUberErrorResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(GenericUberErrorResponseJSON *result)
          {
            if (fieldGeneratorerrors.have_value)
              {
                result->initerrors();
                size_t count = fieldGeneratorerrors.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appenderrors(fieldGeneratorerrors.value[num].referenced());
                  }
                fieldGeneratorerrors.value.clear();
                fieldGeneratorerrors.have_value = false;
              }
            else if (!(result->haserrors()))
              {
                error("When parsing the object for %what%, the \"errors\" field was missing.");
              }
          }
        virtual void handle_result(GenericUberErrorResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "errors") == 0)
                return &fieldGeneratorerrors;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorerrors("field \"errors\" of the GenericUberErrorResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GenericUberErrorResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorerrors.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GENERICUBERERRORRESPONSEJSON_H */
