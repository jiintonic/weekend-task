/* file "UberPriceEstimatesResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERPRICEESTIMATESRESPONSEJSON_H
#define UBERPRICEESTIMATESRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "UberPriceEstimateDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberPriceEstimatesResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHasprices;
    std::vector< UberPriceEstimateDetailsJSON * > storeprices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberPriceEstimatesResponseJSON(const UberPriceEstimatesResponseJSON &);
    UberPriceEstimatesResponseJSON & operator=(const UberPriceEstimatesResponseJSON &other);

    void  fromJSONprices(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberPriceEstimatesResponseJSON(void);
    virtual ~UberPriceEstimatesResponseJSON(void);
    bool  hasprices(void) const;
    size_t  countOfprices(void) const;
    UberPriceEstimateDetailsJSON *  elementOfprices(size_t element_num);
    const UberPriceEstimateDetailsJSON *  elementOfprices(size_t element_num) const;
    std::vector< UberPriceEstimateDetailsJSON * >  getprices(void);
    const std::vector< UberPriceEstimateDetailsJSON * >  getprices(void) const;

    virtual size_t extraUberPriceEstimatesResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberPriceEstimatesResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberPriceEstimatesResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberPriceEstimatesResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberPriceEstimatesResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberPriceEstimatesResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initprices(void)
      {
        if (flagHasprices)
          {
            for (size_t num2 = 0; num2 < storeprices.size(); ++num2)
              {
                storeprices[num2]->remove_reference();
              }
          }
        flagHasprices = true;
        storeprices.clear();
      }
    void appendprices(UberPriceEstimateDetailsJSON * to_append)
      {
        if (!flagHasprices)
          {
            flagHasprices = true;
            storeprices.clear();
          }
        assert(flagHasprices);
        to_append->add_reference();
        storeprices.push_back(to_append);
      }
    void unsetprices(void)
      {
        if (flagHasprices)
          {
            for (size_t num3 = 0; num3 < storeprices.size(); ++num3)
              {
                storeprices[num3]->remove_reference();
              }
          }
        flagHasprices = false;
        storeprices.clear();
      }

    virtual void extraUberPriceEstimatesResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberPriceEstimatesResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberPriceEstimatesResponseLookup(key);
        if (old_field == NULL)
          {
            extraUberPriceEstimatesResponseAppendPair(key, new_component);
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
        assert(flagHasprices);
        handler->start_pair("prices");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeprices.size(); ++num1)
          {
            storeprices[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasprices()))
          {
            return "When parsing the object for %what%, the \"prices\" field was missing.";
          }
        return NULL;
      }

    static UberPriceEstimatesResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberPriceEstimatesResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberPriceEstimatesResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimatesResponseJSON>, UberPriceEstimatesResponseJSON *, bool> generator("Type UberPriceEstimatesResponse", ignore_extras);
            parse_json_value(text, "Text for UberPriceEstimatesResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberPriceEstimatesResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberPriceEstimatesResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimatesResponseJSON>, UberPriceEstimatesResponseJSON *, bool> generator("Type UberPriceEstimatesResponse", ignore_extras);
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
        JSONHoldingArrayGenerator<UberPriceEstimateDetailsJSON::Generator, RCHandle<UberPriceEstimateDetailsJSON>, UberPriceEstimateDetailsJSON *, bool > fieldGeneratorprices;
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
            UberPriceEstimatesResponseJSON *result = new UberPriceEstimatesResponseJSON();
            assert(result != NULL);
            RCHandle<UberPriceEstimatesResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberPriceEstimatesResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberPriceEstimatesResponseJSON *result)
          {
            if (fieldGeneratorprices.have_value)
              {
                result->initprices();
                size_t count = fieldGeneratorprices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendprices(fieldGeneratorprices.value[num].referenced());
                  }
                fieldGeneratorprices.value.clear();
                fieldGeneratorprices.have_value = false;
              }
            else if (!(result->hasprices()))
              {
                error("When parsing the object for %what%, the \"prices\" field was missing.");
              }
          }
        virtual void handle_result(UberPriceEstimatesResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "prices") == 0)
                return &fieldGeneratorprices;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorprices("field \"prices\" of the UberPriceEstimatesResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberPriceEstimatesResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorprices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERPRICEESTIMATESRESPONSEJSON_H */
