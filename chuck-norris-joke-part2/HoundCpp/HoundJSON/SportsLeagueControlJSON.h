/* file "SportsLeagueControlJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUECONTROLJSON_H
#define SPORTSLEAGUECONTROLJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsLeagueCodeJSON.h"
#include "SportsLeagueCodeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueControlJSON : public ReferenceCounted
  {
  private:
    bool flagHasEnabledLeagues;
    std::vector< SportsLeagueCodeJSON * > storeEnabledLeagues;
    bool flagHasPreferredLeagues;
    std::vector< SportsLeagueCodeJSON * > storePreferredLeagues;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueControlJSON(const SportsLeagueControlJSON &);
    SportsLeagueControlJSON & operator=(const SportsLeagueControlJSON &other);

    void  fromJSONEnabledLeagues(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreferredLeagues(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueControlJSON(void);
    virtual ~SportsLeagueControlJSON(void);
    bool  hasEnabledLeagues(void) const;
    size_t  countOfEnabledLeagues(void) const;
    SportsLeagueCodeJSON *  elementOfEnabledLeagues(size_t element_num);
    const SportsLeagueCodeJSON *  elementOfEnabledLeagues(size_t element_num) const;
    std::vector< SportsLeagueCodeJSON * >  getEnabledLeagues(void);
    const std::vector< SportsLeagueCodeJSON * >  getEnabledLeagues(void) const;
    bool  hasPreferredLeagues(void) const;
    size_t  countOfPreferredLeagues(void) const;
    SportsLeagueCodeJSON *  elementOfPreferredLeagues(size_t element_num);
    const SportsLeagueCodeJSON *  elementOfPreferredLeagues(size_t element_num) const;
    std::vector< SportsLeagueCodeJSON * >  getPreferredLeagues(void);
    const std::vector< SportsLeagueCodeJSON * >  getPreferredLeagues(void) const;

    virtual size_t extraSportsLeagueControlComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueControlComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueControlComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueControlComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueControlLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueControlLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initEnabledLeagues(void)
      {
        if (flagHasEnabledLeagues)
          {
            for (size_t num3 = 0; num3 < storeEnabledLeagues.size(); ++num3)
              {
                storeEnabledLeagues[num3]->remove_reference();
              }
          }
        flagHasEnabledLeagues = true;
        storeEnabledLeagues.clear();
      }
    void appendEnabledLeagues(SportsLeagueCodeJSON * to_append)
      {
        if (!flagHasEnabledLeagues)
          {
            flagHasEnabledLeagues = true;
            storeEnabledLeagues.clear();
          }
        assert(flagHasEnabledLeagues);
        to_append->add_reference();
        storeEnabledLeagues.push_back(to_append);
      }
    void appendEnabledLeagues(SportsLeagueCodeJSON::TypeValue new_value)
      {
        appendEnabledLeagues(new SportsLeagueCodeJSON(new_value));
      }
    void appendEnabledLeagues(const char *chars)
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
        appendEnabledLeagues(new_value);
      }
    void appendEnabledLeagues(std::string the_string)
      {
        appendEnabledLeagues(the_string.c_str());
      }
    void unsetEnabledLeagues(void)
      {
        if (flagHasEnabledLeagues)
          {
            for (size_t num4 = 0; num4 < storeEnabledLeagues.size(); ++num4)
              {
                storeEnabledLeagues[num4]->remove_reference();
              }
          }
        flagHasEnabledLeagues = false;
        storeEnabledLeagues.clear();
      }
    void initPreferredLeagues(void)
      {
        if (flagHasPreferredLeagues)
          {
            for (size_t num5 = 0; num5 < storePreferredLeagues.size(); ++num5)
              {
                storePreferredLeagues[num5]->remove_reference();
              }
          }
        flagHasPreferredLeagues = true;
        storePreferredLeagues.clear();
      }
    void appendPreferredLeagues(SportsLeagueCodeJSON * to_append)
      {
        if (!flagHasPreferredLeagues)
          {
            flagHasPreferredLeagues = true;
            storePreferredLeagues.clear();
          }
        assert(flagHasPreferredLeagues);
        to_append->add_reference();
        storePreferredLeagues.push_back(to_append);
      }
    void appendPreferredLeagues(SportsLeagueCodeJSON::TypeValue new_value)
      {
        appendPreferredLeagues(new SportsLeagueCodeJSON(new_value));
      }
    void appendPreferredLeagues(const char *chars)
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
        appendPreferredLeagues(new_value);
      }
    void appendPreferredLeagues(std::string the_string)
      {
        appendPreferredLeagues(the_string.c_str());
      }
    void unsetPreferredLeagues(void)
      {
        if (flagHasPreferredLeagues)
          {
            for (size_t num6 = 0; num6 < storePreferredLeagues.size(); ++num6)
              {
                storePreferredLeagues[num6]->remove_reference();
              }
          }
        flagHasPreferredLeagues = false;
        storePreferredLeagues.clear();
      }

    virtual void extraSportsLeagueControlAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueControlSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueControlLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueControlAppendPair(key, new_component);
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
        if (flagHasEnabledLeagues)
          {
            handler->start_pair("EnabledLeagues");
            assert(storeEnabledLeagues.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEnabledLeagues.size(); ++num1)
              {
                storeEnabledLeagues[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasPreferredLeagues)
          {
            handler->start_pair("PreferredLeagues");
            assert(storePreferredLeagues.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storePreferredLeagues.size(); ++num2)
              {
                storePreferredLeagues[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsLeagueControlJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueControlJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueControlJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueControlJSON>, SportsLeagueControlJSON *, bool> generator("Type SportsLeagueControl", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueControlJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueControlJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueControlJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueControlJSON>, SportsLeagueControlJSON *, bool> generator("Type SportsLeagueControl", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorEnabledLeagues;
        JSONHoldingArrayGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorPreferredLeagues;
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
            SportsLeagueControlJSON *result = new SportsLeagueControlJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueControlJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueControlAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueControlJSON *result)
          {
            if (fieldGeneratorEnabledLeagues.have_value)
              {
                result->initEnabledLeagues();
                size_t count = fieldGeneratorEnabledLeagues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEnabledLeagues(fieldGeneratorEnabledLeagues.value[num].referenced());
                  }
                fieldGeneratorEnabledLeagues.value.clear();
                fieldGeneratorEnabledLeagues.have_value = false;
              }
            if (fieldGeneratorPreferredLeagues.have_value)
              {
                result->initPreferredLeagues();
                size_t count = fieldGeneratorPreferredLeagues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPreferredLeagues(fieldGeneratorPreferredLeagues.value[num].referenced());
                  }
                fieldGeneratorPreferredLeagues.value.clear();
                fieldGeneratorPreferredLeagues.have_value = false;
              }
          }
        virtual void handle_result(SportsLeagueControlJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "nabledLeagues") == 0)
                        return &fieldGeneratorEnabledLeagues;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "referredLeagues") == 0)
                        return &fieldGeneratorPreferredLeagues;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorEnabledLeagues("field \"EnabledLeagues\" of the SportsLeagueControl class", ignore_extras), fieldGeneratorPreferredLeagues("field \"PreferredLeagues\" of the SportsLeagueControl class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeagueControl class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEnabledLeagues.reset();
            fieldGeneratorPreferredLeagues.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUECONTROLJSON_H */
