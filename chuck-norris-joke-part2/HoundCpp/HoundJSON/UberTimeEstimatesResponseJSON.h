/* file "UberTimeEstimatesResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERTIMEESTIMATESRESPONSEJSON_H
#define UBERTIMEESTIMATESRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "UberTimeEstimateDetailsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberTimeEstimatesResponseJSON : public ReferenceCounted
  {
  private:
    bool flagHastimes;
    std::vector< UberTimeEstimateDetailsJSON * > storetimes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberTimeEstimatesResponseJSON(const UberTimeEstimatesResponseJSON &);
    UberTimeEstimatesResponseJSON & operator=(const UberTimeEstimatesResponseJSON &other);

    void  fromJSONtimes(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberTimeEstimatesResponseJSON(void);
    virtual ~UberTimeEstimatesResponseJSON(void);
    bool  hastimes(void) const;
    size_t  countOftimes(void) const;
    UberTimeEstimateDetailsJSON *  elementOftimes(size_t element_num);
    const UberTimeEstimateDetailsJSON *  elementOftimes(size_t element_num) const;
    std::vector< UberTimeEstimateDetailsJSON * >  gettimes(void);
    const std::vector< UberTimeEstimateDetailsJSON * >  gettimes(void) const;

    virtual size_t extraUberTimeEstimatesResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberTimeEstimatesResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberTimeEstimatesResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberTimeEstimatesResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberTimeEstimatesResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberTimeEstimatesResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void inittimes(void)
      {
        if (flagHastimes)
          {
            for (size_t num2 = 0; num2 < storetimes.size(); ++num2)
              {
                storetimes[num2]->remove_reference();
              }
          }
        flagHastimes = true;
        storetimes.clear();
      }
    void appendtimes(UberTimeEstimateDetailsJSON * to_append)
      {
        if (!flagHastimes)
          {
            flagHastimes = true;
            storetimes.clear();
          }
        assert(flagHastimes);
        to_append->add_reference();
        storetimes.push_back(to_append);
      }
    void unsettimes(void)
      {
        if (flagHastimes)
          {
            for (size_t num3 = 0; num3 < storetimes.size(); ++num3)
              {
                storetimes[num3]->remove_reference();
              }
          }
        flagHastimes = false;
        storetimes.clear();
      }

    virtual void extraUberTimeEstimatesResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberTimeEstimatesResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberTimeEstimatesResponseLookup(key);
        if (old_field == NULL)
          {
            extraUberTimeEstimatesResponseAppendPair(key, new_component);
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
        assert(flagHastimes);
        handler->start_pair("times");
        handler->start_array();
        for (size_t num1 = 0; num1 < storetimes.size(); ++num1)
          {
            storetimes[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hastimes()))
          {
            return "When parsing the object for %what%, the \"times\" field was missing.";
          }
        return NULL;
      }

    static UberTimeEstimatesResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberTimeEstimatesResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberTimeEstimatesResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimatesResponseJSON>, UberTimeEstimatesResponseJSON *, bool> generator("Type UberTimeEstimatesResponse", ignore_extras);
            parse_json_value(text, "Text for UberTimeEstimatesResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberTimeEstimatesResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberTimeEstimatesResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimatesResponseJSON>, UberTimeEstimatesResponseJSON *, bool> generator("Type UberTimeEstimatesResponse", ignore_extras);
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
        JSONHoldingArrayGenerator<UberTimeEstimateDetailsJSON::Generator, RCHandle<UberTimeEstimateDetailsJSON>, UberTimeEstimateDetailsJSON *, bool > fieldGeneratortimes;
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
            UberTimeEstimatesResponseJSON *result = new UberTimeEstimatesResponseJSON();
            assert(result != NULL);
            RCHandle<UberTimeEstimatesResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberTimeEstimatesResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberTimeEstimatesResponseJSON *result)
          {
            if (fieldGeneratortimes.have_value)
              {
                result->inittimes();
                size_t count = fieldGeneratortimes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendtimes(fieldGeneratortimes.value[num].referenced());
                  }
                fieldGeneratortimes.value.clear();
                fieldGeneratortimes.have_value = false;
              }
            else if (!(result->hastimes()))
              {
                error("When parsing the object for %what%, the \"times\" field was missing.");
              }
          }
        virtual void handle_result(UberTimeEstimatesResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "times") == 0)
                return &fieldGeneratortimes;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratortimes("field \"times\" of the UberTimeEstimatesResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberTimeEstimatesResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratortimes.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERTIMEESTIMATESRESPONSEJSON_H */
