/* file "SportsPlayoffSpecialTypesResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFSPECIALTYPESRESPONSESTATEJSON_H
#define SPORTSPLAYOFFSPECIALTYPESRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsPlayoffSpecialGameJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffSpecialTypesResponseStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasPlayoffSpecialTypes;
    std::vector< SportsPlayoffSpecialGameJSON * > storePlayoffSpecialTypes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayoffSpecialTypesResponseStateJSON(const SportsPlayoffSpecialTypesResponseStateJSON &);
    SportsPlayoffSpecialTypesResponseStateJSON & operator=(const SportsPlayoffSpecialTypesResponseStateJSON &other);

    void  fromJSONPlayoffSpecialTypes(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffSpecialTypesResponseStateJSON(void);
    virtual ~SportsPlayoffSpecialTypesResponseStateJSON(void);
    bool  hasPlayoffSpecialTypes(void) const;
    size_t  countOfPlayoffSpecialTypes(void) const;
    SportsPlayoffSpecialGameJSON *  elementOfPlayoffSpecialTypes(size_t element_num);
    const SportsPlayoffSpecialGameJSON *  elementOfPlayoffSpecialTypes(size_t element_num) const;
    std::vector< SportsPlayoffSpecialGameJSON * >  getPlayoffSpecialTypes(void);
    const std::vector< SportsPlayoffSpecialGameJSON * >  getPlayoffSpecialTypes(void) const;

    virtual size_t extraSportsPlayoffSpecialTypesResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayoffSpecialTypesResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayoffSpecialTypesResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayoffSpecialTypesResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayoffSpecialTypesResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayoffSpecialTypesResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initPlayoffSpecialTypes(void)
      {
        if (flagHasPlayoffSpecialTypes)
          {
            for (size_t num2 = 0; num2 < storePlayoffSpecialTypes.size(); ++num2)
              {
                storePlayoffSpecialTypes[num2]->remove_reference();
              }
          }
        flagHasPlayoffSpecialTypes = true;
        storePlayoffSpecialTypes.clear();
      }
    void appendPlayoffSpecialTypes(SportsPlayoffSpecialGameJSON * to_append)
      {
        if (!flagHasPlayoffSpecialTypes)
          {
            flagHasPlayoffSpecialTypes = true;
            storePlayoffSpecialTypes.clear();
          }
        assert(flagHasPlayoffSpecialTypes);
        to_append->add_reference();
        storePlayoffSpecialTypes.push_back(to_append);
      }
    void appendPlayoffSpecialTypes(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        appendPlayoffSpecialTypes(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void appendPlayoffSpecialTypes(const char *chars)
      {
        SportsPlayoffSpecialGameJSON::TypeValueKnownValues known = SportsPlayoffSpecialGameJSON::stringToValue(chars);
        SportsPlayoffSpecialGameJSON::TypeValue new_value;
        if (known == SportsPlayoffSpecialGameJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendPlayoffSpecialTypes(new_value);
      }
    void appendPlayoffSpecialTypes(std::string the_string)
      {
        appendPlayoffSpecialTypes(the_string.c_str());
      }
    void unsetPlayoffSpecialTypes(void)
      {
        if (flagHasPlayoffSpecialTypes)
          {
            for (size_t num3 = 0; num3 < storePlayoffSpecialTypes.size(); ++num3)
              {
                storePlayoffSpecialTypes[num3]->remove_reference();
              }
          }
        flagHasPlayoffSpecialTypes = false;
        storePlayoffSpecialTypes.clear();
      }

    virtual void extraSportsPlayoffSpecialTypesResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayoffSpecialTypesResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayoffSpecialTypesResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayoffSpecialTypesResponseStateAppendPair(key, new_component);
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
        if (flagHasPlayoffSpecialTypes)
          {
            handler->start_pair("PlayoffSpecialTypes");
            assert(storePlayoffSpecialTypes.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePlayoffSpecialTypes.size(); ++num1)
              {
                storePlayoffSpecialTypes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayoffSpecialTypesResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffSpecialTypesResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffSpecialTypesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialTypesResponseStateJSON>, SportsPlayoffSpecialTypesResponseStateJSON *, bool> generator("Type SportsPlayoffSpecialTypesResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffSpecialTypesResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffSpecialTypesResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffSpecialTypesResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialTypesResponseStateJSON>, SportsPlayoffSpecialTypesResponseStateJSON *, bool> generator("Type SportsPlayoffSpecialTypesResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorPlayoffSpecialTypes;
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
            SportsPlayoffSpecialTypesResponseStateJSON *result = new SportsPlayoffSpecialTypesResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsPlayoffSpecialTypesResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayoffSpecialTypesResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayoffSpecialTypesResponseStateJSON *result)
          {
            if (fieldGeneratorPlayoffSpecialTypes.have_value)
              {
                result->initPlayoffSpecialTypes();
                size_t count = fieldGeneratorPlayoffSpecialTypes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayoffSpecialTypes(fieldGeneratorPlayoffSpecialTypes.value[num].referenced());
                  }
                fieldGeneratorPlayoffSpecialTypes.value.clear();
                fieldGeneratorPlayoffSpecialTypes.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayoffSpecialTypesResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "PlayoffSpecialTypes") == 0)
                return &fieldGeneratorPlayoffSpecialTypes;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlayoffSpecialTypes("field \"PlayoffSpecialTypes\" of the SportsPlayoffSpecialTypesResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayoffSpecialTypesResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlayoffSpecialTypes.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYOFFSPECIALTYPESRESPONSESTATEJSON_H */
