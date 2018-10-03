/* file "SportsGameSchedulesScoresInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMESCHEDULESSCORESINFORMATIONNUGGETJSON_H
#define SPORTSGAMESCHEDULESSCORESINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsGameSchedulesScoresQueryDataJSON.h"
#include "SportsGameJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsGameSchedulesScoresInformationNuggetJSON : public SportsInformationNuggetJSON
  {
  private:
    bool flagHasQueryData;
    std::vector< SportsGameSchedulesScoresQueryDataJSON * > storeQueryData;
    bool flagHasGames;
    std::vector< SportsGameJSON * > storeGames;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsGameSchedulesScoresInformationNuggetJSON(const SportsGameSchedulesScoresInformationNuggetJSON &);
    SportsGameSchedulesScoresInformationNuggetJSON & operator=(const SportsGameSchedulesScoresInformationNuggetJSON &other);

    JSONValue * extraQueryDataToJSON(void) const;
    JSONValue * extraGamesToJSON(void) const;

    void  fromJSONQueryData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsGameSchedulesScoresInformationNuggetJSON(void);
    virtual ~SportsGameSchedulesScoresInformationNuggetJSON(void);
    const char * getSportsNuggetKind(void) const;
    bool  hasQueryData(void) const;
    size_t  countOfQueryData(void) const;
    SportsGameSchedulesScoresQueryDataJSON *  elementOfQueryData(size_t element_num);
    const SportsGameSchedulesScoresQueryDataJSON *  elementOfQueryData(size_t element_num) const;
    std::vector< SportsGameSchedulesScoresQueryDataJSON * >  getQueryData(void);
    const std::vector< SportsGameSchedulesScoresQueryDataJSON * >  getQueryData(void) const;
    bool  hasGames(void) const;
    size_t  countOfGames(void) const;
    SportsGameJSON *  elementOfGames(size_t element_num);
    const SportsGameJSON *  elementOfGames(size_t element_num) const;
    std::vector< SportsGameJSON * >  getGames(void);
    const std::vector< SportsGameJSON * >  getGames(void) const;

    virtual size_t extraSportsGameSchedulesScoresInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsGameSchedulesScoresInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsGameSchedulesScoresInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsGameSchedulesScoresInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresInformationNuggetLookup(const char *field_name) const
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
        if (flagHasGames)
            ++result;
        result += extraSportsGameSchedulesScoresInformationNuggetComponentCount();
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
        if (flagHasGames)
          {
            if (remainder == 0)
                return "Games";
            --remainder;
          }
        return extraSportsGameSchedulesScoresInformationNuggetComponentKey(remainder);
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
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        return extraSportsGameSchedulesScoresInformationNuggetComponentValue(remainder);
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
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        return extraSportsGameSchedulesScoresInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsGameSchedulesScoresInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryData") == 0)
                    return (flagHasQueryData ? extraQueryDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsGameSchedulesScoresInformationNuggetLookup(field_name);
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
    void appendQueryData(SportsGameSchedulesScoresQueryDataJSON * to_append)
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
    void initGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num5 = 0; num5 < storeGames.size(); ++num5)
              {
                storeGames[num5]->remove_reference();
              }
          }
        flagHasGames = true;
        storeGames.clear();
      }
    void appendGames(SportsGameJSON * to_append)
      {
        if (!flagHasGames)
          {
            flagHasGames = true;
            storeGames.clear();
          }
        assert(flagHasGames);
        to_append->add_reference();
        storeGames.push_back(to_append);
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num6 = 0; num6 < storeGames.size(); ++num6)
              {
                storeGames[num6]->remove_reference();
              }
          }
        flagHasGames = false;
        storeGames.clear();
      }

    virtual void extraSportsGameSchedulesScoresInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsGameSchedulesScoresInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsGameSchedulesScoresInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsGameSchedulesScoresInformationNuggetAppendPair(key, new_component);
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
            case 'G':
                if (strcmp(&(key[1]), "ames") == 0)
                    {
                    fromJSONGames(new_component, false);
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
        extraSportsGameSchedulesScoresInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'G':
                if (strcmp(&(key[1]), "ames") == 0)
                    {
                    fromJSONGames(new_component, false);
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
        extraSportsGameSchedulesScoresInformationNuggetSetField(key, new_component);
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
        if (flagHasGames)
          {
            handler->start_pair("Games");
            assert(storeGames.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeGames.size(); ++num2)
              {
                storeGames[num2]->write_as_json(handler);
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

    static SportsGameSchedulesScoresInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameSchedulesScoresInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresInformationNuggetJSON>, SportsGameSchedulesScoresInformationNuggetJSON *, bool> generator("Type SportsGameSchedulesScoresInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsGameSchedulesScoresInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameSchedulesScoresInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresInformationNuggetJSON>, SportsGameSchedulesScoresInformationNuggetJSON *, bool> generator("Type SportsGameSchedulesScoresInformationNugget", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsGameSchedulesScoresQueryDataJSON::Generator, RCHandle<SportsGameSchedulesScoresQueryDataJSON>, SportsGameSchedulesScoresQueryDataJSON *, bool > fieldGeneratorQueryData;
        JSONHoldingArrayGenerator<SportsGameJSON::Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool > fieldGeneratorGames;
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
            if (!(strcmp(getSportsInformationNuggetJSONKey().c_str(), "SportsGameSchedulesScores") == 0))
                throw("The key field has a value other than `SportsGameSchedulesScores'.");
            SportsGameSchedulesScoresInformationNuggetJSON *result = new SportsGameSchedulesScoresInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsGameSchedulesScoresInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsGameSchedulesScoresInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsInformationNuggetJSON *new_result)
          {
            handle_result((SportsGameSchedulesScoresInformationNuggetJSON *)new_result);
          }
        void finish(SportsGameSchedulesScoresInformationNuggetJSON *result)
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
            if (fieldGeneratorGames.have_value)
              {
                result->initGames();
                size_t count = fieldGeneratorGames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGames(fieldGeneratorGames.value[num].referenced());
                  }
                fieldGeneratorGames.value.clear();
                fieldGeneratorGames.have_value = false;
              }
            SportsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsGameSchedulesScoresInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
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
        Generator(bool ignore_extras = false) : SportsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryData("field \"QueryData\" of the SportsGameSchedulesScoresInformationNugget class", ignore_extras), fieldGeneratorGames("field \"Games\" of the SportsGameSchedulesScoresInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsGameSchedulesScoresInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryData.reset();
            fieldGeneratorGames.reset();
            SportsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSGAMESCHEDULESSCORESINFORMATIONNUGGETJSON_H */
