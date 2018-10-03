/* file "SportsLeagueDivisionsResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUEDIVISIONSRESPONSESTATEJSON_H
#define SPORTSLEAGUEDIVISIONSRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsLeagueDivisionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueDivisionsResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasDivisions;
    std::vector< SportsLeagueDivisionJSON * > storeDivisions;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueDivisionsResponseStateJSON(const SportsLeagueDivisionsResponseStateJSON &);
    SportsLeagueDivisionsResponseStateJSON & operator=(const SportsLeagueDivisionsResponseStateJSON &other);

    void  fromJSONDivisions(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueDivisionsResponseStateJSON(void);
    virtual ~SportsLeagueDivisionsResponseStateJSON(void);
    bool  hasDivisions(void) const;
    size_t  countOfDivisions(void) const;
    SportsLeagueDivisionJSON *  elementOfDivisions(size_t element_num);
    const SportsLeagueDivisionJSON *  elementOfDivisions(size_t element_num) const;
    std::vector< SportsLeagueDivisionJSON * >  getDivisions(void);
    const std::vector< SportsLeagueDivisionJSON * >  getDivisions(void) const;

    virtual size_t extraSportsLeagueDivisionsResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueDivisionsResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueDivisionsResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueDivisionsResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueDivisionsResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueDivisionsResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initDivisions(void)
      {
        if (flagHasDivisions)
          {
            for (size_t num2 = 0; num2 < storeDivisions.size(); ++num2)
              {
                storeDivisions[num2]->remove_reference();
              }
          }
        flagHasDivisions = true;
        storeDivisions.clear();
      }
    void appendDivisions(SportsLeagueDivisionJSON * to_append)
      {
        if (!flagHasDivisions)
          {
            flagHasDivisions = true;
            storeDivisions.clear();
          }
        assert(flagHasDivisions);
        to_append->add_reference();
        storeDivisions.push_back(to_append);
      }
    void appendDivisions(SportsLeagueDivisionJSON::TypeValue new_value)
      {
        appendDivisions(new SportsLeagueDivisionJSON(new_value));
      }
    void appendDivisions(const char *chars)
      {
        SportsLeagueDivisionJSON::TypeValueKnownValues known = SportsLeagueDivisionJSON::stringToValue(chars);
        SportsLeagueDivisionJSON::TypeValue new_value;
        if (known == SportsLeagueDivisionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendDivisions(new_value);
      }
    void appendDivisions(std::string the_string)
      {
        appendDivisions(the_string.c_str());
      }
    void unsetDivisions(void)
      {
        if (flagHasDivisions)
          {
            for (size_t num3 = 0; num3 < storeDivisions.size(); ++num3)
              {
                storeDivisions[num3]->remove_reference();
              }
          }
        flagHasDivisions = false;
        storeDivisions.clear();
      }

    virtual void extraSportsLeagueDivisionsResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueDivisionsResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueDivisionsResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueDivisionsResponseStateAppendPair(key, new_component);
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
        if (flagHasDivisions)
          {
            handler->start_pair("Divisions");
            assert(storeDivisions.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDivisions.size(); ++num1)
              {
                storeDivisions[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsLeagueDivisionsResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueDivisionsResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueDivisionsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionsResponseStateJSON>, SportsLeagueDivisionsResponseStateJSON *, bool> generator("Type SportsLeagueDivisionsResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueDivisionsResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueDivisionsResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueDivisionsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueDivisionsResponseStateJSON>, SportsLeagueDivisionsResponseStateJSON *, bool> generator("Type SportsLeagueDivisionsResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivisions;
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
            SportsLeagueDivisionsResponseStateJSON *result = new SportsLeagueDivisionsResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueDivisionsResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueDivisionsResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueDivisionsResponseStateJSON *result)
          {
            if (fieldGeneratorDivisions.have_value)
              {
                result->initDivisions();
                size_t count = fieldGeneratorDivisions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDivisions(fieldGeneratorDivisions.value[num].referenced());
                  }
                fieldGeneratorDivisions.value.clear();
                fieldGeneratorDivisions.have_value = false;
              }
          }
        virtual void handle_result(SportsLeagueDivisionsResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Divisions") == 0)
                return &fieldGeneratorDivisions;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDivisions("field \"Divisions\" of the SportsLeagueDivisionsResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueDivisionsResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDivisions.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUEDIVISIONSRESPONSESTATEJSON_H */
