/* file "SportsOlympicsMedalStandingsArgumentHostJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSARGUMENTHOSTJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSARGUMENTHOSTJSON_H

#pragma interface

#include "SportsOlympicsMedalStandingsArgumentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsGamesCodeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsArgumentHostJSON : public SportsOlympicsMedalStandingsArgumentJSON
  {
  private:
    bool flagHasHosts;
    std::vector< SportsOlympicsGamesCodeJSON * > storeHosts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsArgumentHostJSON(const SportsOlympicsMedalStandingsArgumentHostJSON &);
    SportsOlympicsMedalStandingsArgumentHostJSON & operator=(const SportsOlympicsMedalStandingsArgumentHostJSON &other);

    JSONValue * extraHostsToJSON(void) const;

    void  fromJSONHosts(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsArgumentHostJSON(void);
    virtual ~SportsOlympicsMedalStandingsArgumentHostJSON(void);
    const char * getSportsOlympicsMedalStandingsArgumentKind(void) const;
    bool  hasHosts(void) const;
    size_t  countOfHosts(void) const;
    SportsOlympicsGamesCodeJSON *  elementOfHosts(size_t element_num);
    const SportsOlympicsGamesCodeJSON *  elementOfHosts(size_t element_num) const;
    std::vector< SportsOlympicsGamesCodeJSON * >  getHosts(void);
    const std::vector< SportsOlympicsGamesCodeJSON * >  getHosts(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsArgumentHostComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsArgumentHostComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentHostComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentHostComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsArgumentHostLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsArgumentHostLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsMedalStandingsArgumentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasHosts)
            ++result;
        result += extraSportsOlympicsMedalStandingsArgumentHostComponentCount();
        return result;
      }
    const char *extraSportsOlympicsMedalStandingsArgumentComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHosts)
          {
            if (remainder == 0)
                return "Hosts";
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentHostComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasHosts)
          {
            if (remainder == 0)
                return extraHostsToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentHostComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasHosts)
          {
            if (remainder == 0)
                return extraHostsToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsArgumentHostComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name)
      {
        if (strcmp(field_name, "Hosts") == 0)
            return (flagHasHosts ? extraHostsToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentHostLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Hosts") == 0)
            return (flagHasHosts ? extraHostsToJSON() : NULL);
        return extraSportsOlympicsMedalStandingsArgumentHostLookup(field_name);
      }

    void initHosts(void)
      {
        if (flagHasHosts)
          {
            for (size_t num2 = 0; num2 < storeHosts.size(); ++num2)
              {
                storeHosts[num2]->remove_reference();
              }
          }
        flagHasHosts = true;
        storeHosts.clear();
      }
    void appendHosts(SportsOlympicsGamesCodeJSON * to_append)
      {
        if (!flagHasHosts)
          {
            flagHasHosts = true;
            storeHosts.clear();
          }
        assert(flagHasHosts);
        to_append->add_reference();
        storeHosts.push_back(to_append);
      }
    void appendHosts(SportsOlympicsGamesCodeJSON::TypeValue new_value)
      {
        appendHosts(new SportsOlympicsGamesCodeJSON(new_value));
      }
    void appendHosts(const char *chars)
      {
        SportsOlympicsGamesCodeJSON::TypeValueKnownValues known = SportsOlympicsGamesCodeJSON::stringToValue(chars);
        SportsOlympicsGamesCodeJSON::TypeValue new_value;
        if (known == SportsOlympicsGamesCodeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendHosts(new_value);
      }
    void appendHosts(std::string the_string)
      {
        appendHosts(the_string.c_str());
      }
    void unsetHosts(void)
      {
        if (flagHasHosts)
          {
            for (size_t num3 = 0; num3 < storeHosts.size(); ++num3)
              {
                storeHosts[num3]->remove_reference();
              }
          }
        flagHasHosts = false;
        storeHosts.clear();
      }

    virtual void extraSportsOlympicsMedalStandingsArgumentHostAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsArgumentHostSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsArgumentHostLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsArgumentHostAppendPair(key, new_component);
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
        if (strcmp(key, "Hosts") == 0)
            {
            fromJSONHosts(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentHostAppendPair(key, new_component);
      }
    void extraSportsOlympicsMedalStandingsArgumentSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Hosts") == 0)
            {
            fromJSONHosts(new_component, false);
            return;
            }
        extraSportsOlympicsMedalStandingsArgumentHostSetField(key, new_component);
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
        if (flagHasHosts)
          {
            handler->start_pair("Hosts");
            assert(storeHosts.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeHosts.size(); ++num1)
              {
                storeHosts[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsMedalStandingsArgumentHostJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsArgumentHostJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentHostJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentHostJSON>, SportsOlympicsMedalStandingsArgumentHostJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentHost", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsArgumentHostJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsArgumentHostJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsArgumentHostJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentHostJSON>, SportsOlympicsMedalStandingsArgumentHostJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgumentHost", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsGamesCodeJSON::Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool > fieldGeneratorHosts;
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
            if (!(strcmp(getSportsOlympicsMedalStandingsArgumentJSONKey().c_str(), "Host") == 0))
                throw("The key field has a value other than `Host'.");
            SportsOlympicsMedalStandingsArgumentHostJSON *result = new SportsOlympicsMedalStandingsArgumentHostJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsArgumentHostJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsArgumentHostAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsMedalStandingsArgumentJSON *new_result)
          {
            handle_result((SportsOlympicsMedalStandingsArgumentHostJSON *)new_result);
          }
        void finish(SportsOlympicsMedalStandingsArgumentHostJSON *result)
          {
            if (fieldGeneratorHosts.have_value)
              {
                result->initHosts();
                size_t count = fieldGeneratorHosts.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHosts(fieldGeneratorHosts.value[num].referenced());
                  }
                fieldGeneratorHosts.value.clear();
                fieldGeneratorHosts.have_value = false;
              }
            SportsOlympicsMedalStandingsArgumentJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsMedalStandingsArgumentHostJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Hosts") == 0)
                return &fieldGeneratorHosts;
            return SportsOlympicsMedalStandingsArgumentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsMedalStandingsArgumentJSON::Generator(ignore_extras), fieldGeneratorHosts("field \"Hosts\" of the SportsOlympicsMedalStandingsArgumentHost class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsArgumentHost class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHosts.reset();
            SportsOlympicsMedalStandingsArgumentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSARGUMENTHOSTJSON_H */
