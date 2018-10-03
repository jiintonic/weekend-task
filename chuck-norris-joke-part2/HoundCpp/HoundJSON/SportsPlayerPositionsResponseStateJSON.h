/* file "SportsPlayerPositionsResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERPOSITIONSRESPONSESTATEJSON_H
#define SPORTSPLAYERPOSITIONSRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsPlayerPositionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayerPositionsResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasPlayerPositions;
    std::vector< SportsPlayerPositionJSON * > storePlayerPositions;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayerPositionsResponseStateJSON(const SportsPlayerPositionsResponseStateJSON &);
    SportsPlayerPositionsResponseStateJSON & operator=(const SportsPlayerPositionsResponseStateJSON &other);

    void  fromJSONPlayerPositions(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayerPositionsResponseStateJSON(void);
    virtual ~SportsPlayerPositionsResponseStateJSON(void);
    bool  hasPlayerPositions(void) const;
    size_t  countOfPlayerPositions(void) const;
    SportsPlayerPositionJSON *  elementOfPlayerPositions(size_t element_num);
    const SportsPlayerPositionJSON *  elementOfPlayerPositions(size_t element_num) const;
    std::vector< SportsPlayerPositionJSON * >  getPlayerPositions(void);
    const std::vector< SportsPlayerPositionJSON * >  getPlayerPositions(void) const;

    virtual size_t extraSportsPlayerPositionsResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayerPositionsResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayerPositionsResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayerPositionsResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayerPositionsResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayerPositionsResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initPlayerPositions(void)
      {
        if (flagHasPlayerPositions)
          {
            for (size_t num2 = 0; num2 < storePlayerPositions.size(); ++num2)
              {
                storePlayerPositions[num2]->remove_reference();
              }
          }
        flagHasPlayerPositions = true;
        storePlayerPositions.clear();
      }
    void appendPlayerPositions(SportsPlayerPositionJSON * to_append)
      {
        if (!flagHasPlayerPositions)
          {
            flagHasPlayerPositions = true;
            storePlayerPositions.clear();
          }
        assert(flagHasPlayerPositions);
        to_append->add_reference();
        storePlayerPositions.push_back(to_append);
      }
    void appendPlayerPositions(SportsPlayerPositionJSON::TypeValue new_value)
      {
        appendPlayerPositions(new SportsPlayerPositionJSON(new_value));
      }
    void appendPlayerPositions(const char *chars)
      {
        SportsPlayerPositionJSON::TypeValueKnownValues known = SportsPlayerPositionJSON::stringToValue(chars);
        SportsPlayerPositionJSON::TypeValue new_value;
        if (known == SportsPlayerPositionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendPlayerPositions(new_value);
      }
    void appendPlayerPositions(std::string the_string)
      {
        appendPlayerPositions(the_string.c_str());
      }
    void unsetPlayerPositions(void)
      {
        if (flagHasPlayerPositions)
          {
            for (size_t num3 = 0; num3 < storePlayerPositions.size(); ++num3)
              {
                storePlayerPositions[num3]->remove_reference();
              }
          }
        flagHasPlayerPositions = false;
        storePlayerPositions.clear();
      }

    virtual void extraSportsPlayerPositionsResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayerPositionsResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayerPositionsResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayerPositionsResponseStateAppendPair(key, new_component);
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
        if (flagHasPlayerPositions)
          {
            handler->start_pair("PlayerPositions");
            assert(storePlayerPositions.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePlayerPositions.size(); ++num1)
              {
                storePlayerPositions[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayerPositionsResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayerPositionsResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayerPositionsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionsResponseStateJSON>, SportsPlayerPositionsResponseStateJSON *, bool> generator("Type SportsPlayerPositionsResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsPlayerPositionsResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayerPositionsResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayerPositionsResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayerPositionsResponseStateJSON>, SportsPlayerPositionsResponseStateJSON *, bool> generator("Type SportsPlayerPositionsResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsPlayerPositionJSON::Generator, RCHandle<SportsPlayerPositionJSON>, SportsPlayerPositionJSON *, bool > fieldGeneratorPlayerPositions;
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
            SportsPlayerPositionsResponseStateJSON *result = new SportsPlayerPositionsResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsPlayerPositionsResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayerPositionsResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayerPositionsResponseStateJSON *result)
          {
            if (fieldGeneratorPlayerPositions.have_value)
              {
                result->initPlayerPositions();
                size_t count = fieldGeneratorPlayerPositions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayerPositions(fieldGeneratorPlayerPositions.value[num].referenced());
                  }
                fieldGeneratorPlayerPositions.value.clear();
                fieldGeneratorPlayerPositions.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayerPositionsResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "PlayerPositions") == 0)
                return &fieldGeneratorPlayerPositions;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlayerPositions("field \"PlayerPositions\" of the SportsPlayerPositionsResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayerPositionsResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlayerPositions.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYERPOSITIONSRESPONSESTATEJSON_H */
