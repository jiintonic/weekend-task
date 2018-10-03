/* file "SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTGENDERJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTGENDERJSON_H

#pragma interface

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsOlympicsGenderJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
  {
  private:
    bool flagHasGender;
    SportsOlympicsGenderJSON * storeGender;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(const SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON &);
    SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON & operator=(const SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON &other);

    JSONValue * extraGenderToJSON(void) const;

    void  fromJSONGender(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON(void);
    const char * getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const;
    bool  hasGender(void) const;
    SportsOlympicsGenderJSON *  getGender(void);
    const SportsOlympicsGenderJSON *  getGender(void) const;
    SportsOlympicsGenderJSON::TypeValue  getGenderValue(void);
    const SportsOlympicsGenderJSON::TypeValue  getGenderValue(void) const;
    const char * getGenderAsChars(void) const;
    std::string  getGenderAsString(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentGenderLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentGenderLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasGender)
            ++result;
        result += extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentCount();
        return result;
      }
    const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasGender)
          {
            if (remainder == 0)
                return "Gender";
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasGender)
          {
            if (remainder == 0)
                return extraGenderToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasGender)
          {
            if (remainder == 0)
                return extraGenderToJSON();
            --remainder;
          }
        return extraSportsOlympicsEventSchedulesAndResultsArgumentGenderComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Gender") == 0)
            return (flagHasGender ? extraGenderToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentGenderLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Gender") == 0)
            return (flagHasGender ? extraGenderToJSON() : NULL);
        return extraSportsOlympicsEventSchedulesAndResultsArgumentGenderLookup(field_name);
      }

    void setGender(SportsOlympicsGenderJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGender)
          {
            storeGender->remove_reference();
          }
        flagHasGender = true;
        storeGender = new_value;
      }
    void setGender(SportsOlympicsGenderJSON::TypeValue new_value)
      {
        setGender(new SportsOlympicsGenderJSON(new_value));
      }
    void setGender(const char *chars)
      {
        SportsOlympicsGenderJSON::TypeValueKnownValues known = SportsOlympicsGenderJSON::stringToValue(chars);
        SportsOlympicsGenderJSON::TypeValue new_value;
        if (known == SportsOlympicsGenderJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setGender(new_value);
      }
    void setGender(std::string the_string)
      {
        setGender(the_string.c_str());
      }
    void unsetGender(void)
      {
        if (flagHasGender)
          {
            storeGender->remove_reference();
          }
        flagHasGender = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentGenderAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsArgumentGenderSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentGenderLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsArgumentGenderAppendPair(key, new_component);
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
        if (strcmp(key, "Gender") == 0)
            {
            fromJSONGender(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentGenderAppendPair(key, new_component);
      }
    void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Gender") == 0)
            {
            fromJSONGender(new_component, false);
            return;
            }
        extraSportsOlympicsEventSchedulesAndResultsArgumentGenderSetField(key, new_component);
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
        if (flagHasGender)
          {
            handler->start_pair("Gender");
            storeGender->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON>, SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentGender", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON>, SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgumentGender", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsGenderJSON::Generator, RCHandle<SportsOlympicsGenderJSON>, SportsOlympicsGenderJSON *, bool > fieldGeneratorGender;
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
            if (!(strcmp(getSportsOlympicsEventSchedulesAndResultsArgumentJSONKey().c_str(), "Gender") == 0))
                throw("The key field has a value other than `Gender'.");
            SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *result = new SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsArgumentGenderAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *)new_result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *result)
          {
            if (fieldGeneratorGender.have_value)
              {
                result->setGender(fieldGeneratorGender.value.referenced());
                fieldGeneratorGender.have_value = false;
              }
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Gender") == 0)
                return &fieldGeneratorGender;
            return SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator(ignore_extras), fieldGeneratorGender("field \"Gender\" of the SportsOlympicsEventSchedulesAndResultsArgumentGender class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsArgumentGender class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGender.reset();
            SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSARGUMENTGENDERJSON_H */
