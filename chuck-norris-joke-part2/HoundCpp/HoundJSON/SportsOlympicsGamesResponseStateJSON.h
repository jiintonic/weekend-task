/* file "SportsOlympicsGamesResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSGAMESRESPONSESTATEJSON_H
#define SPORTSOLYMPICSGAMESRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
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


class SportsOlympicsGamesResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasGames;
    std::vector< SportsOlympicsGamesCodeJSON * > storeGames;
    bool flagHasGamesNotFound;
    bool storeGamesNotFound;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsGamesResponseStateJSON(const SportsOlympicsGamesResponseStateJSON &);
    SportsOlympicsGamesResponseStateJSON & operator=(const SportsOlympicsGamesResponseStateJSON &other);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesNotFound(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsGamesResponseStateJSON(void);
    virtual ~SportsOlympicsGamesResponseStateJSON(void);
    bool  hasGames(void) const;
    size_t  countOfGames(void) const;
    SportsOlympicsGamesCodeJSON *  elementOfGames(size_t element_num);
    const SportsOlympicsGamesCodeJSON *  elementOfGames(size_t element_num) const;
    std::vector< SportsOlympicsGamesCodeJSON * >  getGames(void);
    const std::vector< SportsOlympicsGamesCodeJSON * >  getGames(void) const;
    bool  hasGamesNotFound(void) const;
    bool  getGamesNotFound(void);
    const bool  getGamesNotFound(void) const;

    virtual size_t extraSportsOlympicsGamesResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsGamesResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsGamesResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsGamesResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsGamesResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsGamesResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num2 = 0; num2 < storeGames.size(); ++num2)
              {
                storeGames[num2]->remove_reference();
              }
          }
        flagHasGames = true;
        storeGames.clear();
      }
    void appendGames(SportsOlympicsGamesCodeJSON * to_append)
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
    void appendGames(SportsOlympicsGamesCodeJSON::TypeValue new_value)
      {
        appendGames(new SportsOlympicsGamesCodeJSON(new_value));
      }
    void appendGames(const char *chars)
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
        appendGames(new_value);
      }
    void appendGames(std::string the_string)
      {
        appendGames(the_string.c_str());
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            for (size_t num3 = 0; num3 < storeGames.size(); ++num3)
              {
                storeGames[num3]->remove_reference();
              }
          }
        flagHasGames = false;
        storeGames.clear();
      }
    void setGamesNotFound(bool new_value)
      {
        flagHasGamesNotFound = true;
        storeGamesNotFound = new_value;
      }
    void unsetGamesNotFound(void)
      {
        flagHasGamesNotFound = false;
      }

    virtual void extraSportsOlympicsGamesResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsGamesResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsGamesResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsGamesResponseStateAppendPair(key, new_component);
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
        if (flagHasGames)
          {
            handler->start_pair("Games");
            assert(storeGames.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGames.size(); ++num1)
              {
                storeGames[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGamesNotFound)
          {
            handler->start_pair("GamesNotFound");
            handler->boolean_value(storeGamesNotFound);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsGamesResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsGamesResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsGamesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesResponseStateJSON>, SportsOlympicsGamesResponseStateJSON *, bool> generator("Type SportsOlympicsGamesResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsGamesResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsGamesResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsGamesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesResponseStateJSON>, SportsOlympicsGamesResponseStateJSON *, bool> generator("Type SportsOlympicsGamesResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsGamesCodeJSON::Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool > fieldGeneratorGames;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGamesNotFound;
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
            SportsOlympicsGamesResponseStateJSON *result = new SportsOlympicsGamesResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsGamesResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsGamesResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsGamesResponseStateJSON *result)
          {
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
            if (fieldGeneratorGamesNotFound.have_value)
              {
                result->setGamesNotFound(fieldGeneratorGamesNotFound.value);
                fieldGeneratorGamesNotFound.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsGamesResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Games", 5) == 0)
              {
                switch ((unsigned char)(field_name[5]))
                  {
                    case 0:
                        return &fieldGeneratorGames;
                    case 'N':
                        if (strcmp(&(field_name[6]), "otFound") == 0)
                            return &fieldGeneratorGamesNotFound;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorGames("field \"Games\" of the SportsOlympicsGamesResponseState class", ignore_extras), fieldGeneratorGamesNotFound("field \"GamesNotFound\" of the SportsOlympicsGamesResponseState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsGamesResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGames.reset();
            fieldGeneratorGamesNotFound.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSGAMESRESPONSESTATEJSON_H */
