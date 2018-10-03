/* file "SportsOlympicsBasicAttributeInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSBASICATTRIBUTEINFORMATIONNUGGETJSON_H
#define SPORTSOLYMPICSBASICATTRIBUTEINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsOlympicsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsBasicAttributeQueryComponentJSON.h"
#include "SportsOlympicsGamesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsBasicAttributeInformationNuggetJSON : public SportsOlympicsInformationNuggetJSON
  {
  private:
    bool flagHasQueryComponents;
    std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * > storeQueryComponents;
    bool flagHasGames;
    std::vector< SportsOlympicsGamesJSON * > storeGames;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsBasicAttributeInformationNuggetJSON(const SportsOlympicsBasicAttributeInformationNuggetJSON &);
    SportsOlympicsBasicAttributeInformationNuggetJSON & operator=(const SportsOlympicsBasicAttributeInformationNuggetJSON &other);

    JSONValue * extraQueryComponentsToJSON(void) const;
    JSONValue * extraGamesToJSON(void) const;

    void  fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsBasicAttributeInformationNuggetJSON(void);
    virtual ~SportsOlympicsBasicAttributeInformationNuggetJSON(void);
    const char * getSportsOlympicsInformationNuggetKind(void) const;
    bool  hasQueryComponents(void) const;
    size_t  countOfQueryComponents(void) const;
    SportsOlympicsBasicAttributeQueryComponentJSON *  elementOfQueryComponents(size_t element_num);
    const SportsOlympicsBasicAttributeQueryComponentJSON *  elementOfQueryComponents(size_t element_num) const;
    std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * >  getQueryComponents(void);
    const std::vector< SportsOlympicsBasicAttributeQueryComponentJSON * >  getQueryComponents(void) const;
    bool  hasGames(void) const;
    size_t  countOfGames(void) const;
    SportsOlympicsGamesJSON *  elementOfGames(size_t element_num);
    const SportsOlympicsGamesJSON *  elementOfGames(size_t element_num) const;
    std::vector< SportsOlympicsGamesJSON * >  getGames(void);
    const std::vector< SportsOlympicsGamesJSON * >  getGames(void) const;

    virtual size_t extraSportsOlympicsBasicAttributeInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsBasicAttributeInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsOlympicsInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasQueryComponents)
            ++result;
        if (flagHasGames)
            ++result;
        result += extraSportsOlympicsBasicAttributeInformationNuggetComponentCount();
        return result;
      }
    const char *extraSportsOlympicsInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return "QueryComponents";
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return "Games";
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return extraQueryComponentsToJSON();
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasQueryComponents)
          {
            if (remainder == 0)
                return extraQueryComponentsToJSON();
            --remainder;
          }
        if (flagHasGames)
          {
            if (remainder == 0)
                return extraGamesToJSON();
            --remainder;
          }
        return extraSportsOlympicsBasicAttributeInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryComponents") == 0)
                    return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsOlympicsBasicAttributeInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'G':
                if (strcmp(&(field_name[1]), "ames") == 0)
                    return (flagHasGames ? extraGamesToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryComponents") == 0)
                    return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsOlympicsBasicAttributeInformationNuggetLookup(field_name);
      }

    void initQueryComponents(void)
      {
        if (flagHasQueryComponents)
          {
            for (size_t num3 = 0; num3 < storeQueryComponents.size(); ++num3)
              {
                storeQueryComponents[num3]->remove_reference();
              }
          }
        flagHasQueryComponents = true;
        storeQueryComponents.clear();
      }
    void appendQueryComponents(SportsOlympicsBasicAttributeQueryComponentJSON * to_append)
      {
        if (!flagHasQueryComponents)
          {
            flagHasQueryComponents = true;
            storeQueryComponents.clear();
          }
        assert(flagHasQueryComponents);
        to_append->add_reference();
        storeQueryComponents.push_back(to_append);
      }
    void unsetQueryComponents(void)
      {
        if (flagHasQueryComponents)
          {
            for (size_t num4 = 0; num4 < storeQueryComponents.size(); ++num4)
              {
                storeQueryComponents[num4]->remove_reference();
              }
          }
        flagHasQueryComponents = false;
        storeQueryComponents.clear();
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
    void appendGames(SportsOlympicsGamesJSON * to_append)
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

    virtual void extraSportsOlympicsBasicAttributeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsBasicAttributeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsBasicAttributeInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsBasicAttributeInformationNuggetAppendPair(key, new_component);
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
    void extraSportsOlympicsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
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
                if (strcmp(&(key[1]), "ueryComponents") == 0)
                    {
                    fromJSONQueryComponents(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsOlympicsBasicAttributeInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsOlympicsInformationNuggetSetField(const char *key, JSONValue *new_component)
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
                if (strcmp(&(key[1]), "ueryComponents") == 0)
                    {
                    fromJSONQueryComponents(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSportsOlympicsBasicAttributeInformationNuggetSetField(key, new_component);
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
        SportsOlympicsInformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasQueryComponents)
          {
            handler->start_pair("QueryComponents");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeQueryComponents.size(); ++num1)
              {
                storeQueryComponents[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGames)
          {
            handler->start_pair("Games");
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
        return NULL;
      }

    static SportsOlympicsBasicAttributeInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsBasicAttributeInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeInformationNuggetJSON>, SportsOlympicsBasicAttributeInformationNuggetJSON *, bool> generator("Type SportsOlympicsBasicAttributeInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsBasicAttributeInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsBasicAttributeInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeInformationNuggetJSON>, SportsOlympicsBasicAttributeInformationNuggetJSON *, bool> generator("Type SportsOlympicsBasicAttributeInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsOlympicsInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<SportsOlympicsBasicAttributeQueryComponentJSON::Generator, RCHandle<SportsOlympicsBasicAttributeQueryComponentJSON>, SportsOlympicsBasicAttributeQueryComponentJSON *, bool > fieldGeneratorQueryComponents;
        JSONHoldingArrayGenerator<SportsOlympicsGamesJSON::Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool > fieldGeneratorGames;
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
            if (!(strcmp(getSportsOlympicsInformationNuggetJSONKey().c_str(), "SportsOlympicsBasicAttributeInformationNugget") == 0))
                throw("The key field has a value other than `SportsOlympicsBasicAttributeInformationNugget'.");
            SportsOlympicsBasicAttributeInformationNuggetJSON *result = new SportsOlympicsBasicAttributeInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsBasicAttributeInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsBasicAttributeInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsInformationNuggetJSON *new_result)
          {
            handle_result((SportsOlympicsBasicAttributeInformationNuggetJSON *)new_result);
          }
        void finish(SportsOlympicsBasicAttributeInformationNuggetJSON *result)
          {
            if (fieldGeneratorQueryComponents.have_value)
              {
                result->initQueryComponents();
                size_t count = fieldGeneratorQueryComponents.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendQueryComponents(fieldGeneratorQueryComponents.value[num].referenced());
                  }
                fieldGeneratorQueryComponents.value.clear();
                fieldGeneratorQueryComponents.have_value = false;
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
            SportsOlympicsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsBasicAttributeInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryComponents") == 0)
                        return &fieldGeneratorQueryComponents;
                    break;
                default:
                    break;
              }
            return SportsOlympicsInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsOlympicsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryComponents("field \"QueryComponents\" of the SportsOlympicsBasicAttributeInformationNugget class", ignore_extras), fieldGeneratorGames("field \"Games\" of the SportsOlympicsBasicAttributeInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsBasicAttributeInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryComponents.reset();
            fieldGeneratorGames.reset();
            SportsOlympicsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSBASICATTRIBUTEINFORMATIONNUGGETJSON_H */
