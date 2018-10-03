/* file "SportsOlympicsMedalStandingsArgumentYearJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSARGUMENTYEARJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSARGUMENTYEARJSON_H

#pragma interface

#include "SportsOlympicsMedalStandingsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class SportsOlympicsMedalStandingsArgumentYearJSON : public SportsOlympicsMedalStandingsArgumentJSON
  {
  private:
    bool flagHasYear;
    OInteger storeYear;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsArgumentYearJSON(const SportsOlympicsMedalStandingsArgumentYearJSON &);
    SportsOlympicsMedalStandingsArgumentYearJSON & operator=(const SportsOlympicsMedalStandingsArgumentYearJSON &other);

    JSONValue * extraYearToJSON(void) const;

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsArgumentYearJSON(void);
    virtual ~SportsOlympicsMedalStandingsArgumentYearJSON(void);
    const char * getSportsOlympicsMedalStandingsArgumentKind(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsArgumentYearComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsArgumentYearComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentYearComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentYearComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentYearLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentYearLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsMedalStandingsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasYear)
            ++result;
        result += extraSportsOlympicsMedalStandingsArgumentYearComponentCount();
        return result;
      }
    const char *extraSportsOlympicsMedalStandingsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return "Year";
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentYearComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentYearComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentYearComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Year") == 0)
            return (flagHasYear ? extraYearToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentYearLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Year") == 0)
            return (flagHasYear ? extraYearToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentYearLookup(field_name);
      }

    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        if (new_value < 0)
            throw("The value for field Year of SportsOlympicsMedalStandingsArgumentYearJSON is less than the lower bound (0) for that field.");
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }

    virtual void extraSportsOlympicsMedalStandingsArgumentYearAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsArgumentYearSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsArgumentYearLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsArgumentYearAppendPair(key, new_component);
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
    void extraSportsOlympicsMedalStandingsArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Year") == 0)
            {
            fromJSONYear(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentYearAppendPair(key, new_component);
      }
    void extraSportsOlympicsMedalStandingsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Year") == 0)
            {
            fromJSONYear(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentYearSetField(key, new_component);
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
        SportsOlympicsMedalStandingsArgumentJSON::write_fields_as_json(handler);
        if (flagHasYear)
          {
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsMedalStandingsArgumentYearJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsArgumentYearJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentYearJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentYearJSON>, SportsOlympicsMedalStandingsArgumentYearJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentYear", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsArgumentYearJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsArgumentYearJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentYearJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentYearJSON>, SportsOlympicsMedalStandingsArgumentYearJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentYear", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsMedalStandingsArgumentJSON::Generator
      {
      private:
        static char lowerBoundYear[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYear>, OInteger, o_integer > fieldGeneratorYear;
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
            if (!(strcmp(getSportsOlympicsMedalStandingsArgumentJSONKey().c_str(), "Year") == 0))
                throw("The key field has a value other than `Year'.");
            SportsOlympicsMedalStandingsArgumentYearJSON *result = new SportsOlympicsMedalStandingsArgumentYearJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsArgumentYearJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsArgumentYearAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsMedalStandingsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsMedalStandingsArgumentYearJSON *)new_result);
          }
        void finish(SportsOlympicsMedalStandingsArgumentYearJSON *result)
          {
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            SportsOlympicsMedalStandingsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsMedalStandingsArgumentYearJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Year") == 0)
                return &fieldGeneratorYear;
            return SportsOlympicsMedalStandingsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsMedalStandingsArgumentJSON::Generator(ignore_extras), fieldGeneratorYear("field \"Year\" of the SportsOlympicsMedalStandingsArgumentYear class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsArgumentYear class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorYear.reset();
            SportsOlympicsMedalStandingsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSARGUMENTYEARJSON_H */
