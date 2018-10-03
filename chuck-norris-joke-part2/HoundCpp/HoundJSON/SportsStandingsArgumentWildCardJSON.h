/* file "SportsStandingsArgumentWildCardJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSARGUMENTWILDCARDJSON_H
#define SPORTSSTANDINGSARGUMENTWILDCARDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsArgumentWildCardJSON : public ReferenceCounted
  {
  public:
    enum TypeArgumentType
      {
        ArgumentType_SportsStandingsArgumentWildCard
      };

    static TypeArgumentType  stringToArgumentType(const char *chars);
    static const char * stringFromArgumentType(TypeArgumentType the_enum);

  private:
    bool flagHasArgumentType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStandingsArgumentWildCardJSON(const SportsStandingsArgumentWildCardJSON &);
    SportsStandingsArgumentWildCardJSON & operator=(const SportsStandingsArgumentWildCardJSON &other);

    void  fromJSONArgumentType(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsArgumentWildCardJSON(void);
    virtual ~SportsStandingsArgumentWildCardJSON(void);
    bool  hasArgumentType(void) const;
    TypeArgumentType  getArgumentType(void);
    const TypeArgumentType  getArgumentType(void) const;
    const char * getArgumentTypeAsChars(void) const;
    std::string  getArgumentTypeAsString(void) const;

    virtual size_t extraSportsStandingsArgumentWildCardComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsArgumentWildCardComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsArgumentWildCardComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsArgumentWildCardComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsArgumentWildCardLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsArgumentWildCardLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setArgumentType(void)
      {
        flagHasArgumentType = true;
      }
    void setArgumentType(TypeArgumentType new_value)
      {
        setArgumentType();
      }
    void setArgumentType(const char *chars)
      {
        setArgumentType(stringToArgumentType(chars));
      }
    void setArgumentType(std::string the_string)
      {
        setArgumentType(stringToArgumentType(the_string.c_str()));
      }
    void unsetArgumentType(void)
      {
        flagHasArgumentType = false;
      }

    virtual void extraSportsStandingsArgumentWildCardAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsArgumentWildCardSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsArgumentWildCardLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsArgumentWildCardAppendPair(key, new_component);
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
        assert(flagHasArgumentType);
        handler->start_pair("ArgumentType");
        handler->string_value("SportsStandingsArgumentWildCard");
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArgumentType()))
          {
            return "When parsing the object for %what%, the \"ArgumentType\" field was missing.";
          }
        return NULL;
      }

    static SportsStandingsArgumentWildCardJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsArgumentWildCardJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsArgumentWildCardJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentWildCardJSON>, SportsStandingsArgumentWildCardJSON *, bool> generator("Type SportsStandingsArgumentWildCard", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsArgumentWildCardJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsArgumentWildCardJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsArgumentWildCardJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentWildCardJSON>, SportsStandingsArgumentWildCardJSON *, bool> generator("Type SportsStandingsArgumentWildCard", ignore_extras);
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
    class FieldGeneratorArgumentType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorArgumentType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorArgumentType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToArgumentType(result));
              }
            virtual void handle_result(TypeArgumentType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorArgumentType, TypeArgumentType, TypeArgumentType > fieldGeneratorArgumentType;
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
            SportsStandingsArgumentWildCardJSON *result = new SportsStandingsArgumentWildCardJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsArgumentWildCardJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsArgumentWildCardAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsArgumentWildCardJSON *result)
          {
            if (fieldGeneratorArgumentType.have_value)
              {
                result->setArgumentType();
                fieldGeneratorArgumentType.have_value = false;
              }
            else if (!(result->hasArgumentType()))
              {
                error("When parsing the object for %what%, the \"ArgumentType\" field was missing.");
              }
          }
        virtual void handle_result(SportsStandingsArgumentWildCardJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "ArgumentType") == 0)
                return &fieldGeneratorArgumentType;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentType("field \"ArgumentType\" of the SportsStandingsArgumentWildCard class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandingsArgumentWildCard class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentType.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTANDINGSARGUMENTWILDCARDJSON_H */
