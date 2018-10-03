/* file "SportsTeamsResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTEAMSRESPONSESTATEJSON_H
#define SPORTSTEAMSRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsTeamNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsTeamsResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasTeams;
    std::vector< SportsTeamNewJSON * > storeTeams;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsTeamsResponseStateJSON(const SportsTeamsResponseStateJSON &);
    SportsTeamsResponseStateJSON & operator=(const SportsTeamsResponseStateJSON &other);

    void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTeamsResponseStateJSON(void);
    virtual ~SportsTeamsResponseStateJSON(void);
    bool  hasTeams(void) const;
    size_t  countOfTeams(void) const;
    SportsTeamNewJSON *  elementOfTeams(size_t element_num);
    const SportsTeamNewJSON *  elementOfTeams(size_t element_num) const;
    std::vector< SportsTeamNewJSON * >  getTeams(void);
    const std::vector< SportsTeamNewJSON * >  getTeams(void) const;

    virtual size_t extraSportsTeamsResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsTeamsResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsTeamsResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsTeamsResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsTeamsResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsTeamsResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num2 = 0; num2 < storeTeams.size(); ++num2)
              {
                storeTeams[num2]->remove_reference();
              }
          }
        flagHasTeams = true;
        storeTeams.clear();
      }
    void appendTeams(SportsTeamNewJSON * to_append)
      {
        if (!flagHasTeams)
          {
            flagHasTeams = true;
            storeTeams.clear();
          }
        assert(flagHasTeams);
        to_append->add_reference();
        storeTeams.push_back(to_append);
      }
    void unsetTeams(void)
      {
        if (flagHasTeams)
          {
            for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
              {
                storeTeams[num3]->remove_reference();
              }
          }
        flagHasTeams = false;
        storeTeams.clear();
      }

    virtual void extraSportsTeamsResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsTeamsResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsTeamsResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsTeamsResponseStateAppendPair(key, new_component);
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
        if (flagHasTeams)
          {
            handler->start_pair("Teams");
            assert(storeTeams.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
              {
                storeTeams[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsTeamsResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTeamsResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTeamsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamsResponseStateJSON>, SportsTeamsResponseStateJSON *, bool> generator("Type SportsTeamsResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsTeamsResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTeamsResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTeamsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamsResponseStateJSON>, SportsTeamsResponseStateJSON *, bool> generator("Type SportsTeamsResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeams;
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
            SportsTeamsResponseStateJSON *result = new SportsTeamsResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsTeamsResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsTeamsResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsTeamsResponseStateJSON *result)
          {
            if (fieldGeneratorTeams.have_value)
              {
                result->initTeams();
                size_t count = fieldGeneratorTeams.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTeams(fieldGeneratorTeams.value[num].referenced());
                  }
                fieldGeneratorTeams.value.clear();
                fieldGeneratorTeams.have_value = false;
              }
          }
        virtual void handle_result(SportsTeamsResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Teams") == 0)
                return &fieldGeneratorTeams;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTeams("field \"Teams\" of the SportsTeamsResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsTeamsResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeams.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSTEAMSRESPONSESTATEJSON_H */
