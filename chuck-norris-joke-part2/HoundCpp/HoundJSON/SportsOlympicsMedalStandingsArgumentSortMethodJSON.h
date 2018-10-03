/* file "SportsOlympicsMedalStandingsArgumentSortMethodJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSARGUMENTSORTMETHODJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSARGUMENTSORTMETHODJSON_H

#pragma interface

#include "SportsOlympicsMedalStandingsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsOlympicsMedalStandingsSortMethodJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsArgumentSortMethodJSON : public SportsOlympicsMedalStandingsArgumentJSON
  {
  private:
    bool flagHasSortMethod;
    SportsOlympicsMedalStandingsSortMethodJSON * storeSortMethod;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsArgumentSortMethodJSON(const SportsOlympicsMedalStandingsArgumentSortMethodJSON &);
    SportsOlympicsMedalStandingsArgumentSortMethodJSON & operator=(const SportsOlympicsMedalStandingsArgumentSortMethodJSON &other);

    JSONValue * extraSortMethodToJSON(void) const;

    void  fromJSONSortMethod(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsArgumentSortMethodJSON(void);
    virtual ~SportsOlympicsMedalStandingsArgumentSortMethodJSON(void);
    const char * getSportsOlympicsMedalStandingsArgumentKind(void) const;
    bool  hasSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void);
    const SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void);
    const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void) const;
    const char * getSortMethodAsChars(void) const;
    std::string  getSortMethodAsString(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsArgumentSortMethodComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsArgumentSortMethodComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentSortMethodComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentSortMethodComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentSortMethodLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentSortMethodLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsMedalStandingsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSortMethod)
            ++result;
        result += extraSportsOlympicsMedalStandingsArgumentSortMethodComponentCount();
        return result;
      }
    const char *extraSportsOlympicsMedalStandingsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSortMethod)
          {
            if (remainder == 0)
                return "SortMethod";
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentSortMethodComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSortMethod)
          {
            if (remainder == 0)
                return extraSortMethodToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentSortMethodComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSortMethod)
          {
            if (remainder == 0)
                return extraSortMethodToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentSortMethodComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "SortMethod") == 0)
            return (flagHasSortMethod ? extraSortMethodToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentSortMethodLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "SortMethod") == 0)
            return (flagHasSortMethod ? extraSortMethodToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentSortMethodLookup(field_name);
      }

    void setSortMethod(SportsOlympicsMedalStandingsSortMethodJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSortMethod)
          {
            storeSortMethod->remove_reference();
          }
        flagHasSortMethod = true;
        storeSortMethod = new_value;
      }
    void setSortMethod(SportsOlympicsMedalStandingsSortMethodJSON::TypeValue new_value)
      {
        setSortMethod(new SportsOlympicsMedalStandingsSortMethodJSON(new_value));
      }
    void setSortMethod(const char *chars)
      {
        SportsOlympicsMedalStandingsSortMethodJSON::TypeValueKnownValues known = SportsOlympicsMedalStandingsSortMethodJSON::stringToValue(chars);
        SportsOlympicsMedalStandingsSortMethodJSON::TypeValue new_value;
        if (known == SportsOlympicsMedalStandingsSortMethodJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSortMethod(new_value);
      }
    void setSortMethod(std::string the_string)
      {
        setSortMethod(the_string.c_str());
      }
    void unsetSortMethod(void)
      {
        if (flagHasSortMethod)
          {
            storeSortMethod->remove_reference();
          }
        flagHasSortMethod = false;
      }

    virtual void extraSportsOlympicsMedalStandingsArgumentSortMethodAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsArgumentSortMethodSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsArgumentSortMethodLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsArgumentSortMethodAppendPair(key, new_component);
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
        if (strcmp(key, "SortMethod") == 0)
            {
            fromJSONSortMethod(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentSortMethodAppendPair(key, new_component);
      }
    void extraSportsOlympicsMedalStandingsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "SortMethod") == 0)
            {
            fromJSONSortMethod(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentSortMethodSetField(key, new_component);
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
        if (flagHasSortMethod)
          {
            handler->start_pair("SortMethod");
            storeSortMethod->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsMedalStandingsArgumentSortMethodJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsArgumentSortMethodJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentSortMethodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentSortMethodJSON>, SportsOlympicsMedalStandingsArgumentSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentSortMethod", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsArgumentSortMethodJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsArgumentSortMethodJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentSortMethodJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentSortMethodJSON>, SportsOlympicsMedalStandingsArgumentSortMethodJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentSortMethod", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsMedalStandingsSortMethodJSON::Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool > fieldGeneratorSortMethod;
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
            if (!(strcmp(getSportsOlympicsMedalStandingsArgumentJSONKey().c_str(), "SortMethod") == 0))
                throw("The key field has a value other than `SortMethod'.");
            SportsOlympicsMedalStandingsArgumentSortMethodJSON *result = new SportsOlympicsMedalStandingsArgumentSortMethodJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsArgumentSortMethodJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsArgumentSortMethodAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsMedalStandingsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsMedalStandingsArgumentSortMethodJSON *)new_result);
          }
        void finish(SportsOlympicsMedalStandingsArgumentSortMethodJSON *result)
          {
            if (fieldGeneratorSortMethod.have_value)
              {
                result->setSortMethod(fieldGeneratorSortMethod.value.referenced());
                fieldGeneratorSortMethod.have_value = false;
              }
            SportsOlympicsMedalStandingsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsMedalStandingsArgumentSortMethodJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "SortMethod") == 0)
                return &fieldGeneratorSortMethod;
            return SportsOlympicsMedalStandingsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsMedalStandingsArgumentJSON::Generator(ignore_extras), fieldGeneratorSortMethod("field \"SortMethod\" of the SportsOlympicsMedalStandingsArgumentSortMethod class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsArgumentSortMethod class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSortMethod.reset();
            SportsOlympicsMedalStandingsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSARGUMENTSORTMETHODJSON_H */
