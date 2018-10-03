/* file "SportsLeagueLeadersInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUELEADERSINFORMATIONNUGGETJSON_H
#define SPORTSLEAGUELEADERSINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsLeagueLeadersQueryDataJSON.h"
#include "SportsLeagueLeadersJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueLeadersInformationNuggetJSON : public SportsInformationNuggetJSON
  {
  private:
    bool flagHasQueryData;
    std::vector< SportsLeagueLeadersQueryDataJSON * > storeQueryData;
    bool flagHasLeagueLeaders;
    std::vector< SportsLeagueLeadersJSON * > storeLeagueLeaders;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueLeadersInformationNuggetJSON(const SportsLeagueLeadersInformationNuggetJSON &);
    SportsLeagueLeadersInformationNuggetJSON & operator=(const SportsLeagueLeadersInformationNuggetJSON &other);

    JSONValue * extraQueryDataToJSON(void) const;
    JSONValue * extraLeagueLeadersToJSON(void) const;

    void  fromJSONQueryData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeagueLeaders(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueLeadersInformationNuggetJSON(void);
    virtual ~SportsLeagueLeadersInformationNuggetJSON(void);
    const char * getSportsNuggetKind(void) const;
    bool  hasQueryData(void) const;
    size_t  countOfQueryData(void) const;
    SportsLeagueLeadersQueryDataJSON *  elementOfQueryData(size_t element_num);
    const SportsLeagueLeadersQueryDataJSON *  elementOfQueryData(size_t element_num) const;
    std::vector< SportsLeagueLeadersQueryDataJSON * >  getQueryData(void);
    const std::vector< SportsLeagueLeadersQueryDataJSON * >  getQueryData(void) const;
    bool  hasLeagueLeaders(void) const;
    size_t  countOfLeagueLeaders(void) const;
    SportsLeagueLeadersJSON *  elementOfLeagueLeaders(size_t element_num);
    const SportsLeagueLeadersJSON *  elementOfLeagueLeaders(size_t element_num) const;
    std::vector< SportsLeagueLeadersJSON * >  getLeagueLeaders(void);
    const std::vector< SportsLeagueLeadersJSON * >  getLeagueLeaders(void) const;

    virtual size_t extraSportsLeagueLeadersInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueLeadersInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueLeadersInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueLeadersInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueLeadersInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueLeadersInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryData)
            ++result;
        if (flagHasLeagueLeaders)
            ++result;
        result += extraSportsLeagueLeadersInformationNuggetComponentCount();
        return result;
      }
    const char *extraSportsInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return "QueryData";
            --remainder;
          }
        if (flagHasLeagueLeaders)
          {
            if (remainder == 0)
                return "LeagueLeaders";
            --remainder;
          }
        return extraSportsLeagueLeadersInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        if (flagHasLeagueLeaders)
          {
            if (remainder == 0)
                return extraLeagueLeadersToJSON();
            --remainder;
          }
        return extraSportsLeagueLeadersInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryData)
          {
            if (remainder == 0)
                return extraQueryDataToJSON();
            --remainder;
          }
        if (flagHasLeagueLeaders)
          {
            if (remainder == 0)
                return extraLeagueLeadersToJSON();
            --remainder;
          }
        return extraSportsLeagueLeadersInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "eagueLeaders") == 0)
                    return (flagHasLeagueLeaders ? extraLeagueLeadersToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsLeagueLeadersInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "eagueLeaders") == 0)
                    return (flagHasLeagueLeaders ? extraLeagueLeadersToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsLeagueLeadersInformationNuggetLookup(field_name);
      }

    void initQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num3 = 0; num3 < storeQueryData.size(); ++num3)
              {
                storeQueryData[num3]->remove_reference();
              }
          }
        flagHasQueryData = true;
        storeQueryData.clear();
      }
    void appendQueryData(SportsLeagueLeadersQueryDataJSON * to_append)
      {
        if (!flagHasQueryData)
          {
            flagHasQueryData = true;
            storeQueryData.clear();
          }
        assert(flagHasQueryData);
        to_append->add_reference();
        storeQueryData.push_back(to_append);
      }
    void unsetQueryData(void)
      {
        if (flagHasQueryData)
          {
            for (size_t num4 = 0; num4 < storeQueryData.size(); ++num4)
              {
                storeQueryData[num4]->remove_reference();
              }
          }
        flagHasQueryData = false;
        storeQueryData.clear();
      }
    void initLeagueLeaders(void)
      {
        if (flagHasLeagueLeaders)
          {
            for (size_t num5 = 0; num5 < storeLeagueLeaders.size(); ++num5)
              {
                storeLeagueLeaders[num5]->remove_reference();
              }
          }
        flagHasLeagueLeaders = true;
        storeLeagueLeaders.clear();
      }
    void appendLeagueLeaders(SportsLeagueLeadersJSON * to_append)
      {
        if (!flagHasLeagueLeaders)
          {
            flagHasLeagueLeaders = true;
            storeLeagueLeaders.clear();
          }
        assert(flagHasLeagueLeaders);
        to_append->add_reference();
        storeLeagueLeaders.push_back(to_append);
      }
    void unsetLeagueLeaders(void)
      {
        if (flagHasLeagueLeaders)
          {
            for (size_t num6 = 0; num6 < storeLeagueLeaders.size(); ++num6)
              {
                storeLeagueLeaders[num6]->remove_reference();
              }
          }
        flagHasLeagueLeaders = false;
        storeLeagueLeaders.clear();
      }

    virtual void extraSportsLeagueLeadersInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueLeadersInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueLeadersInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueLeadersInformationNuggetAppendPair(key, new_component);
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
    void extraSportsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "eagueLeaders") == 0)
                    {
                    fromJSONLeagueLeaders(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryData") == 0)
                    {
                    fromJSONQueryData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsLeagueLeadersInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "eagueLeaders") == 0)
                    {
                    fromJSONLeagueLeaders(new_component, false);
                    return;
                    }
                break;
            case 'Q':
                if (strcmp(&(key[1]), "ueryData") == 0)
                    {
                    fromJSONQueryData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsLeagueLeadersInformationNuggetSetField(key, new_component);
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
        SportsInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasQueryData);
        handler->start_pair("QueryData");
        assert(storeQueryData.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeQueryData.size(); ++num1)
          {
            storeQueryData[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasLeagueLeaders)
          {
            handler->start_pair("LeagueLeaders");
            assert(storeLeagueLeaders.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeLeagueLeaders.size(); ++num2)
              {
                storeLeagueLeaders[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryData()))
          {
            return "When parsing the object for %what%, the \"QueryData\" field was missing.";
          }
        return NULL;
      }

    static SportsLeagueLeadersInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueLeadersInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueLeadersInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersInformationNuggetJSON>, SportsLeagueLeadersInformationNuggetJSON *, bool> generator("Type SportsLeagueLeadersInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueLeadersInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueLeadersInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueLeadersInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersInformationNuggetJSON>, SportsLeagueLeadersInformationNuggetJSON *, bool> generator("Type SportsLeagueLeadersInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<SportsLeagueLeadersQueryDataJSON::Generator, RCHandle<SportsLeagueLeadersQueryDataJSON>, SportsLeagueLeadersQueryDataJSON *, bool > fieldGeneratorQueryData;
        JSONHoldingArrayGenerator<SportsLeagueLeadersJSON::Generator, RCHandle<SportsLeagueLeadersJSON>, SportsLeagueLeadersJSON *, bool > fieldGeneratorLeagueLeaders;
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
            if (!(strcmp(getSportsInformationNuggetJSONKey().c_str(), "SportsLeagueLeaders") == 0))
                throw("The key field has a value other than `SportsLeagueLeaders'.");
            SportsLeagueLeadersInformationNuggetJSON *result = new SportsLeagueLeadersInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueLeadersInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueLeadersInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsInformationNuggetJSON *new_result)
          {
            handle_result((SportsLeagueLeadersInformationNuggetJSON *)new_result);
          }
        void finish(SportsLeagueLeadersInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryData.have_value)
              {
                result->initQueryData();
                size_t count = fieldGeneratorQueryData.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryData(fieldGeneratorQueryData.value[num].referenced());
                  }
                fieldGeneratorQueryData.value.clear();
                fieldGeneratorQueryData.have_value = false;
              }
            else if (!(result->hasQueryData()))
              {
                error("When parsing the object for %what%, the \"QueryData\" field was missing.");
              }
            if (fieldGeneratorLeagueLeaders.have_value)
              {
                result->initLeagueLeaders();
                size_t count = fieldGeneratorLeagueLeaders.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLeagueLeaders(fieldGeneratorLeagueLeaders.value[num].referenced());
                  }
                fieldGeneratorLeagueLeaders.value.clear();
                fieldGeneratorLeagueLeaders.have_value = false;
              }
            SportsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsLeagueLeadersInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "eagueLeaders") == 0)
                        return &fieldGeneratorLeagueLeaders;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryData") == 0)
                        return &fieldGeneratorQueryData;
                    break;
                default:
                    break;
              }
            return SportsInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryData("field \"QueryData\" of the SportsLeagueLeadersInformationNugget class", ignore_extras), fieldGeneratorLeagueLeaders("field \"LeagueLeaders\" of the SportsLeagueLeadersInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueLeadersInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryData.reset();
            fieldGeneratorLeagueLeaders.reset();
            SportsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUELEADERSINFORMATIONNUGGETJSON_H */
