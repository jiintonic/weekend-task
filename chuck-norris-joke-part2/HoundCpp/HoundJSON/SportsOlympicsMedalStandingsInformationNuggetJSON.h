/* file "SportsOlympicsMedalStandingsInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSINFORMATIONNUGGETJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSINFORMATIONNUGGETJSON_H

#pragma interface

#include "SportsOlympicsInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsMedalStandingsQueryComponentJSON.h"
#include "SportsOlympicsMedalStandingsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsInformationNuggetJSON : public SportsOlympicsInformationNuggetJSON
  {
  private:
    bool flagHasQueryComponents;
    std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * > storeQueryComponents;
    bool flagHasMedalStandings;
    std::vector< SportsOlympicsMedalStandingsJSON * > storeMedalStandings;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsInformationNuggetJSON(const SportsOlympicsMedalStandingsInformationNuggetJSON &);
    SportsOlympicsMedalStandingsInformationNuggetJSON & operator=(const SportsOlympicsMedalStandingsInformationNuggetJSON &other);

    JSONValue * extraQueryComponentsToJSON(void) const;
    JSONValue * extraMedalStandingsToJSON(void) const;

    void  fromJSONQueryComponents(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMedalStandings(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsInformationNuggetJSON(void);
    virtual ~SportsOlympicsMedalStandingsInformationNuggetJSON(void);
    const char * getSportsOlympicsInformationNuggetKind(void) const;
    bool  hasQueryComponents(void) const;
    size_t  countOfQueryComponents(void) const;
    SportsOlympicsMedalStandingsQueryComponentJSON *  elementOfQueryComponents(size_t element_num);
    const SportsOlympicsMedalStandingsQueryComponentJSON *  elementOfQueryComponents(size_t element_num) const;
    std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * >  getQueryComponents(void);
    const std::vector< SportsOlympicsMedalStandingsQueryComponentJSON * >  getQueryComponents(void) const;
    bool  hasMedalStandings(void) const;
    size_t  countOfMedalStandings(void) const;
    SportsOlympicsMedalStandingsJSON *  elementOfMedalStandings(size_t element_num);
    const SportsOlympicsMedalStandingsJSON *  elementOfMedalStandings(size_t element_num) const;
    std::vector< SportsOlympicsMedalStandingsJSON * >  getMedalStandings(void);
    const std::vector< SportsOlympicsMedalStandingsJSON * >  getMedalStandings(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsInformationNuggetLookup(const char *field_name) const
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
        if (flagHasMedalStandings)
            ++result;
        result += extraSportsOlympicsMedalStandingsInformationNuggetComponentCount();
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
        if (flagHasMedalStandings)
          {
            if (remainder == 0)
                return "MedalStandings";
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsInformationNuggetComponentKey(remainder);
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
        if (flagHasMedalStandings)
          {
            if (remainder == 0)
                return extraMedalStandingsToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsInformationNuggetComponentValue(remainder);
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
        if (flagHasMedalStandings)
          {
            if (remainder == 0)
                return extraMedalStandingsToJSON();
            --remainder;
          }
        return extraSportsOlympicsMedalStandingsInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "edalStandings") == 0)
                    return (flagHasMedalStandings ? extraMedalStandingsToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryComponents") == 0)
                    return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsOlympicsMedalStandingsInformationNuggetLookup(field_name);
      }
    const JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "edalStandings") == 0)
                    return (flagHasMedalStandings ? extraMedalStandingsToJSON() : NULL);
                break;
            case 'Q':
                if (strcmp(&(field_name[1]), "ueryComponents") == 0)
                    return (flagHasQueryComponents ? extraQueryComponentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSportsOlympicsMedalStandingsInformationNuggetLookup(field_name);
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
    void appendQueryComponents(SportsOlympicsMedalStandingsQueryComponentJSON * to_append)
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
    void initMedalStandings(void)
      {
        if (flagHasMedalStandings)
          {
            for (size_t num5 = 0; num5 < storeMedalStandings.size(); ++num5)
              {
                storeMedalStandings[num5]->remove_reference();
              }
          }
        flagHasMedalStandings = true;
        storeMedalStandings.clear();
      }
    void appendMedalStandings(SportsOlympicsMedalStandingsJSON * to_append)
      {
        if (!flagHasMedalStandings)
          {
            flagHasMedalStandings = true;
            storeMedalStandings.clear();
          }
        assert(flagHasMedalStandings);
        to_append->add_reference();
        storeMedalStandings.push_back(to_append);
      }
    void unsetMedalStandings(void)
      {
        if (flagHasMedalStandings)
          {
            for (size_t num6 = 0; num6 < storeMedalStandings.size(); ++num6)
              {
                storeMedalStandings[num6]->remove_reference();
              }
          }
        flagHasMedalStandings = false;
        storeMedalStandings.clear();
      }

    virtual void extraSportsOlympicsMedalStandingsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsInformationNuggetAppendPair(key, new_component);
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
            case 'M':
                if (strcmp(&(key[1]), "edalStandings") == 0)
                    {
                    fromJSONMedalStandings(new_component, false);
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
        extraSportsOlympicsMedalStandingsInformationNuggetAppendPair(key, new_component);
      }
    void extraSportsOlympicsInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "edalStandings") == 0)
                    {
                    fromJSONMedalStandings(new_component, false);
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
        extraSportsOlympicsMedalStandingsInformationNuggetSetField(key, new_component);
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
        if (flagHasMedalStandings)
          {
            handler->start_pair("MedalStandings");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeMedalStandings.size(); ++num2)
              {
                storeMedalStandings[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsMedalStandingsInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsInformationNuggetJSON>, SportsOlympicsMedalStandingsInformationNuggetJSON *, bool> generator("Type SportsOlympicsMedalStandingsInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsInformationNuggetJSON>, SportsOlympicsMedalStandingsInformationNuggetJSON *, bool> generator("Type SportsOlympicsMedalStandingsInformationNugget", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsMedalStandingsQueryComponentJSON::Generator, RCHandle<SportsOlympicsMedalStandingsQueryComponentJSON>, SportsOlympicsMedalStandingsQueryComponentJSON *, bool > fieldGeneratorQueryComponents;
        JSONHoldingArrayGenerator<SportsOlympicsMedalStandingsJSON::Generator, RCHandle<SportsOlympicsMedalStandingsJSON>, SportsOlympicsMedalStandingsJSON *, bool > fieldGeneratorMedalStandings;
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
            if (!(strcmp(getSportsOlympicsInformationNuggetJSONKey().c_str(), "SportsOlympicsMedalStandingsInformationNugget") == 0))
                throw("The key field has a value other than `SportsOlympicsMedalStandingsInformationNugget'.");
            SportsOlympicsMedalStandingsInformationNuggetJSON *result = new SportsOlympicsMedalStandingsInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsOlympicsInformationNuggetJSON *new_result)
          {
            handle_result((SportsOlympicsMedalStandingsInformationNuggetJSON *)new_result);
          }
        void finish(SportsOlympicsMedalStandingsInformationNuggetJSON *result)
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
            if (fieldGeneratorMedalStandings.have_value)
              {
                result->initMedalStandings();
                size_t count = fieldGeneratorMedalStandings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMedalStandings(fieldGeneratorMedalStandings.value[num].referenced());
                  }
                fieldGeneratorMedalStandings.value.clear();
                fieldGeneratorMedalStandings.have_value = false;
              }
            SportsOlympicsInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsOlympicsMedalStandingsInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    if (strcmp(&(field_name[1]), "edalStandings") == 0)
                        return &fieldGeneratorMedalStandings;
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
        Generator(bool ignore_extras = false) : SportsOlympicsInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorQueryComponents("field \"QueryComponents\" of the SportsOlympicsMedalStandingsInformationNugget class", ignore_extras), fieldGeneratorMedalStandings("field \"MedalStandings\" of the SportsOlympicsMedalStandingsInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryComponents.reset();
            fieldGeneratorMedalStandings.reset();
            SportsOlympicsInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSINFORMATIONNUGGETJSON_H */
