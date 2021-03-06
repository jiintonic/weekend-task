/* file "SportsOlympicsEventSchedulesAndResultsQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYSTATEJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsQueryStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasArgumentSets;
    std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > > storeArgumentSets;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsQueryStateJSON(const SportsOlympicsEventSchedulesAndResultsQueryStateJSON &);
    SportsOlympicsEventSchedulesAndResultsQueryStateJSON & operator=(const SportsOlympicsEventSchedulesAndResultsQueryStateJSON &other);

    void  fromJSONArgumentSets(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsQueryStateJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsQueryStateJSON(void);
    bool  hasArgumentSets(void) const;
    size_t  countOfArgumentSets(void) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * >  elementOfArgumentSets(size_t element_num);
    const std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * >  elementOfArgumentSets(size_t element_num) const;
    std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > >  getArgumentSets(void);
    const std::vector< std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > >  getArgumentSets(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initArgumentSets(void)
      {
        if (flagHasArgumentSets)
          {
            for (size_t num3 = 0; num3 < storeArgumentSets.size(); ++num3)
              {
                for (size_t num4 = 0; num4 < storeArgumentSets[num3].size(); ++num4)
                  {
                    storeArgumentSets[num3][num4]->remove_reference();
                  }
              }
          }
        flagHasArgumentSets = true;
        storeArgumentSets.clear();
      }
    void appendArgumentSets(std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > to_append)
      {
        if (!flagHasArgumentSets)
          {
            flagHasArgumentSets = true;
            storeArgumentSets.clear();
          }
        assert(flagHasArgumentSets);
        for (size_t num1 = 0; num1 < to_append.size(); ++num1)
          {
            to_append[num1]->add_reference();
          }
        storeArgumentSets.push_back(to_append);
      }
    void unsetArgumentSets(void)
      {
        if (flagHasArgumentSets)
          {
            for (size_t num5 = 0; num5 < storeArgumentSets.size(); ++num5)
              {
                for (size_t num6 = 0; num6 < storeArgumentSets[num5].size(); ++num6)
                  {
                    storeArgumentSets[num5][num6]->remove_reference();
                  }
              }
          }
        flagHasArgumentSets = false;
        storeArgumentSets.clear();
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsQueryStateAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        assert(flagHasArgumentSets);
        handler->start_pair("ArgumentSets");
        assert(storeArgumentSets.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeArgumentSets.size(); ++num1)
          {
            assert(storeArgumentSets[num1].size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeArgumentSets[num1].size(); ++num2)
              {
                storeArgumentSets[num1][num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArgumentSets()))
          {
            return "When parsing the object for %what%, the \"ArgumentSets\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryStateJSON>, SportsOlympicsEventSchedulesAndResultsQueryStateJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryStateJSON>, SportsOlympicsEventSchedulesAndResultsQueryStateJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentJSON>, SportsOlympicsEventSchedulesAndResultsArgumentJSON *, bool >, std::vector<RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentJSON> >, std::vector<RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentJSON> >, bool > fieldGeneratorArgumentSets;
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
            SportsOlympicsEventSchedulesAndResultsQueryStateJSON *result = new SportsOlympicsEventSchedulesAndResultsQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsQueryStateJSON *result)
          {
            if (fieldGeneratorArgumentSets.have_value)
              {
                result->initArgumentSets();
                size_t count = fieldGeneratorArgumentSets.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    std::vector< SportsOlympicsEventSchedulesAndResultsArgumentJSON * > unwrapped0;
                    for (size_t num0 = 0; num0 < fieldGeneratorArgumentSets.value[num].size(); ++num0)
                      {
                        unwrapped0.push_back(fieldGeneratorArgumentSets.value[num][num0].referenced());
                      }
                    result->appendArgumentSets(unwrapped0);
                  }
                fieldGeneratorArgumentSets.value.clear();
                fieldGeneratorArgumentSets.have_value = false;
              }
            else if (!(result->hasArgumentSets()))
              {
                error("When parsing the object for %what%, the \"ArgumentSets\" field was missing.");
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "ArgumentSets") == 0)
                return &fieldGeneratorArgumentSets;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentSets("field \"ArgumentSets\" of the SportsOlympicsEventSchedulesAndResultsQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentSets.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYSTATEJSON_H */
