/* file "SportsOlympicsBasicAttributeArgumentSeasonJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSBASICATTRIBUTEARGUMENTSEASONJSON_H
#define SPORTSOLYMPICSBASICATTRIBUTEARGUMENTSEASONJSON_H

#pragma interface

#include "SportsOlympicsBasicAttributeArgumentJSON.h"
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


class SportsOlympicsBasicAttributeArgumentSeasonJSON : public SportsOlympicsBasicAttributeArgumentJSON
  {
  private:
    bool flagHasSeason;
    SportsOlympicsSeasonJSON * storeSeason;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsBasicAttributeArgumentSeasonJSON(const SportsOlympicsBasicAttributeArgumentSeasonJSON &);
    SportsOlympicsBasicAttributeArgumentSeasonJSON & operator=(const SportsOlympicsBasicAttributeArgumentSeasonJSON &other);

    JSONValue * extraSeasonToJSON(void) const;

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsBasicAttributeArgumentSeasonJSON(void);
    virtual ~SportsOlympicsBasicAttributeArgumentSeasonJSON(void);
    const char * getSportsOlympicsBasicAttributeArgumentKind(void) const;
    bool  hasSeason(void) const;
    SportsOlympicsSeasonJSON *  getSeason(void);
    const SportsOlympicsSeasonJSON *  getSeason(void) const;
    SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void);
    const SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void) const;
    const char * getSeasonAsChars(void) const;
    std::string  getSeasonAsString(void) const;

    virtual size_t extraSportsOlympicsBasicAttributeArgumentSeasonComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsBasicAttributeArgumentSeasonComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentSeasonComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentSeasonComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeArgumentSeasonLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeArgumentSeasonLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsBasicAttributeArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSeason)
            ++result;
        result += extraSportsOlympicsBasicAttributeArgumentSeasonComponentCount();
        return result;
      }
    const char *extraSportsOlympicsBasicAttributeArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return "Season";
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentSeasonComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return extraSeasonToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentSeasonComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSeason)
          {
            if (remainder == 0)
                return extraSeasonToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeArgumentSeasonComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Season") == 0)
            return (flagHasSeason ? extraSeasonToJSON() : NULL);
        return extraSportsOlympicsBasicAttributeArgumentSeasonLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Season") == 0)
            return (flagHasSeason ? extraSeasonToJSON() : NULL);
        return extraSportsOlympicsBasicAttributeArgumentSeasonLookup(field_name);
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

    virtual void extraSportsOlympicsBasicAttributeArgumentSeasonAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsBasicAttributeArgumentSeasonSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsBasicAttributeArgumentSeasonLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsBasicAttributeArgumentSeasonAppendPair(key, new_component);
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
    void extraSportsOlympicsBasicAttributeArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Season") == 0)
            {
            fromJSONSeason(new_component, false);
            return;
            }
        extraSportsOlympicsBasicAttributeArgumentSeasonAppendPair(key, new_component);
      }
    void extraSportsOlympicsBasicAttributeArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Season") == 0)
            {
            fromJSONSeason(new_component, false);
            return;
            }
        extraSportsOlympicsBasicAttributeArgumentSeasonSetField(key, new_component);
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
        SportsOlympicsBasicAttributeArgumentJSON::write_fields_as_json(handler);
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

    static SportsOlympicsBasicAttributeArgumentSeasonJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsBasicAttributeArgumentSeasonJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentSeasonJSON>, SportsOlympicsBasicAttributeArgumentSeasonJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentSeason", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsBasicAttributeArgumentSeasonJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsBasicAttributeArgumentSeasonJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeArgumentSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentSeasonJSON>, SportsOlympicsBasicAttributeArgumentSeasonJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgumentSeason", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsBasicAttributeArgumentJSON::Generator
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
            if (!(strcmp(getSportsOlympicsBasicAttributeArgumentJSONKey().c_str(), "Season") == 0))
                throw("The key field has a value other than `Season'.");
            SportsOlympicsBasicAttributeArgumentSeasonJSON *result = new SportsOlympicsBasicAttributeArgumentSeasonJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsBasicAttributeArgumentSeasonJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsBasicAttributeArgumentSeasonAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsBasicAttributeArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsBasicAttributeArgumentSeasonJSON *)new_result);
          }
        void finish(SportsOlympicsBasicAttributeArgumentSeasonJSON *result)
          {
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            SportsOlympicsBasicAttributeArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsBasicAttributeArgumentSeasonJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Season") == 0)
                return &fieldGeneratorSeason;
            return SportsOlympicsBasicAttributeArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsBasicAttributeArgumentJSON::Generator(ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsOlympicsBasicAttributeArgumentSeason class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsBasicAttributeArgumentSeason class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSeason.reset();
            SportsOlympicsBasicAttributeArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSBASICATTRIBUTEARGUMENTSEASONJSON_H */
