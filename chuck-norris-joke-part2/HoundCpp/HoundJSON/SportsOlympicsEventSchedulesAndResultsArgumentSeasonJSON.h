/* file "SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTSEASONJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTSEASONJSON_H

#pragma interface

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsOlympicsSeasonJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
  {
  private:
    bool flagHasSeason;
    SportsOlympicsSeasonJSON * storeSeason;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(const SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON &);
    SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON & operator=(const SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON &other);

    JSONValue * extraSeasonToJSON(void) const;

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON(void);
    const char * getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const;
    bool  hasSeason(void) const;
    SportsOlympicsSeasonJSON *  getSeason(void);
    const SportsOlympicsSeasonJSON *  getSeason(void) const;
    SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void);
    const SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void) const;
    const char * getSeasonAsChars(void) const;
    std::string  getSeasonAsString(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSeason)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentCount();
        return result;
      }
    const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return "Season";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return extraSeasonToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return extraSeasonToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Season") == 0)
            return (flagHasSeason ? extraSeasonToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Season") == 0)
            return (flagHasSeason ? extraSeasonToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonLookup(field_name);
      }

    void setSeason(SportsOlympicsSeasonJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = true;
        storeSeason = new_value;
      }
    void setSeason(SportsOlympicsSeasonJSON::TypeValue new_value)
      {
        setSeason(new SportsOlympicsSeasonJSON(new_value));
      }
    void setSeason(const char *chars)
      {
        SportsOlympicsSeasonJSON::TypeValueKnownValues known = SportsOlympicsSeasonJSON::stringToValue(chars);
        SportsOlympicsSeasonJSON::TypeValue new_value;
        if (known == SportsOlympicsSeasonJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSeason(new_value);
      }
    void setSeason(std::string the_string)
      {
        setSeason(the_string.c_str());
      }
    void unsetSeason(void)
      {
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonAppendPair(key, new_component);
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
    void extraSportsOlympicsEventSchedulesAndResultsArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Season") == 0)
            {
            fromJSONSeason(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonAppendPair(key, new_component);
      }
    void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Season") == 0)
            {
            fromJSONSeason(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonSetField(key, new_component);
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
        SportsOlympicsEventSchedulesAndResultsArgumentJSON::write_fields_as_json(handler);
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON>, SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentSeason", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON>, SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentSeason", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator
      {
      private:
        JSONHoldingGenerator<SportsOlympicsSeasonJSON::Generator, RCHandle<SportsOlympicsSeasonJSON>, SportsOlympicsSeasonJSON *, bool > fieldGeneratorSeason;
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
            if (!(strcmp(getSportsOlympicsEventSchedulesAndResultsArgumentJSONKey().c_str(), "Season") == 0))
                throw("The key field has a value other than `Season'.");
            SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *result = new SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsArgumentSeasonAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *result)
          {
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Season") == 0)
                return &fieldGeneratorSeason;
            return SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator(ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsOlympicsEventSchedulesAndResultsArgumentSeason class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsArgumentSeason class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSeason.reset();
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTSEASONJSON_H */
