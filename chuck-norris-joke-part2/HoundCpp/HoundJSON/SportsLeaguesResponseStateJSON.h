/* file "SportsLeaguesResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUESRESPONSESTATEJSON_H
#define SPORTSLEAGUESRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsLeagueCodeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeaguesResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasLeagues;
    std::vector< SportsLeagueCodeJSON * > storeLeagues;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeaguesResponseStateJSON(const SportsLeaguesResponseStateJSON &);
    SportsLeaguesResponseStateJSON & operator=(const SportsLeaguesResponseStateJSON &other);

    void  fromJSONLeagues(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeaguesResponseStateJSON(void);
    virtual ~SportsLeaguesResponseStateJSON(void);
    bool  hasLeagues(void) const;
    size_t  countOfLeagues(void) const;
    SportsLeagueCodeJSON *  elementOfLeagues(size_t element_num);
    const SportsLeagueCodeJSON *  elementOfLeagues(size_t element_num) const;
    std::vector< SportsLeagueCodeJSON * >  getLeagues(void);
    const std::vector< SportsLeagueCodeJSON * >  getLeagues(void) const;

    virtual size_t extraSportsLeaguesResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeaguesResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeaguesResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeaguesResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeaguesResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeaguesResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initLeagues(void)
      {
        if (flagHasLeagues)
          {
            for (size_t num2 = 0; num2 < storeLeagues.size(); ++num2)
              {
                storeLeagues[num2]->remove_reference();
              }
          }
        flagHasLeagues = true;
        storeLeagues.clear();
      }
    void appendLeagues(SportsLeagueCodeJSON * to_append)
      {
        if (!flagHasLeagues)
          {
            flagHasLeagues = true;
            storeLeagues.clear();
          }
        assert(flagHasLeagues);
        to_append->add_reference();
        storeLeagues.push_back(to_append);
      }
    void appendLeagues(SportsLeagueCodeJSON::TypeValue new_value)
      {
        appendLeagues(new SportsLeagueCodeJSON(new_value));
      }
    void appendLeagues(const char *chars)
      {
        SportsLeagueCodeJSON::TypeValueKnownValues known = SportsLeagueCodeJSON::stringToValue(chars);
        SportsLeagueCodeJSON::TypeValue new_value;
        if (known == SportsLeagueCodeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendLeagues(new_value);
      }
    void appendLeagues(std::string the_string)
      {
        appendLeagues(the_string.c_str());
      }
    void unsetLeagues(void)
      {
        if (flagHasLeagues)
          {
            for (size_t num3 = 0; num3 < storeLeagues.size(); ++num3)
              {
                storeLeagues[num3]->remove_reference();
              }
          }
        flagHasLeagues = false;
        storeLeagues.clear();
      }

    virtual void extraSportsLeaguesResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeaguesResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeaguesResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeaguesResponseStateAppendPair(key, new_component);
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
        if (flagHasLeagues)
          {
            handler->start_pair("Leagues");
            assert(storeLeagues.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLeagues.size(); ++num1)
              {
                storeLeagues[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsLeaguesResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeaguesResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeaguesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeaguesResponseStateJSON>, SportsLeaguesResponseStateJSON *, bool> generator("Type SportsLeaguesResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsLeaguesResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeaguesResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeaguesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeaguesResponseStateJSON>, SportsLeaguesResponseStateJSON *, bool> generator("Type SportsLeaguesResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeagues;
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
            SportsLeaguesResponseStateJSON *result = new SportsLeaguesResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsLeaguesResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeaguesResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeaguesResponseStateJSON *result)
          {
            if (fieldGeneratorLeagues.have_value)
              {
                result->initLeagues();
                size_t count = fieldGeneratorLeagues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLeagues(fieldGeneratorLeagues.value[num].referenced());
                  }
                fieldGeneratorLeagues.value.clear();
                fieldGeneratorLeagues.have_value = false;
              }
          }
        virtual void handle_result(SportsLeaguesResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Leagues") == 0)
                return &fieldGeneratorLeagues;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLeagues("field \"Leagues\" of the SportsLeaguesResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeaguesResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeagues.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUESRESPONSESTATEJSON_H */
