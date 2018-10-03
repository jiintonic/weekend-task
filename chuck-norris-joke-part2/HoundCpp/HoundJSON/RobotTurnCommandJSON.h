/* file "RobotTurnCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ROBOTTURNCOMMANDJSON_H
#define ROBOTTURNCOMMANDJSON_H

#pragma interface

#include "RobotCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RobotTurnCommandJSON : public RobotCommandJSON
  {
  private:
    bool flagHasDirection;
    OInteger storeDirection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    RobotTurnCommandJSON(const RobotTurnCommandJSON &);
    RobotTurnCommandJSON & operator=(const RobotTurnCommandJSON &other);

    JSONValue * extraDirectionToJSON(void) const;

    void  fromJSONDirection(JSONValue *json_value, bool ignore_extras = false);


  public:
    RobotTurnCommandJSON(void);
    virtual ~RobotTurnCommandJSON(void);
    const char * getRobotCommandKind(void) const;
    bool  hasDirection(void) const;
    OInteger  getDirection(void);
    const OInteger  getDirection(void) const;

    virtual size_t extraRobotTurnCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraRobotTurnCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraRobotTurnCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraRobotTurnCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraRobotTurnCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraRobotTurnCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRobotCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDirection)
            ++result;
        result += extraRobotTurnCommandComponentCount();
        return result;
      }
    const char *extraRobotCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return "Direction";
            --remainder;
          }
        return extraRobotTurnCommandComponentKey(remainder);
      }
    JSONValue *extraRobotCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        return extraRobotTurnCommandComponentValue(remainder);
      }
    const JSONValue *extraRobotCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDirection)
          {
            if (remainder == 0)
                return extraDirectionToJSON();
            --remainder;
          }
        return extraRobotTurnCommandComponentValue(remainder);
      }
    JSONValue *extraRobotCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "Direction") == 0)
            return (flagHasDirection ? extraDirectionToJSON() : NULL);
        return extraRobotTurnCommandLookup(field_name);
      }
    const JSONValue *extraRobotCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Direction") == 0)
            return (flagHasDirection ? extraDirectionToJSON() : NULL);
        return extraRobotTurnCommandLookup(field_name);
      }

    void setDirection(OInteger new_value)
      {
        flagHasDirection = true;
        if (new_value < -180)
            throw("The value for field Direction of RobotTurnCommandJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Direction of RobotTurnCommandJSON is greater than the upper bound (180) for that field.");
        storeDirection = new_value;
      }
    void unsetDirection(void)
      {
        flagHasDirection = false;
      }

    virtual void extraRobotTurnCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraRobotTurnCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraRobotTurnCommandLookup(key);
        if (old_field == NULL)
          {
            extraRobotTurnCommandAppendPair(key, new_component);
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
    void extraRobotCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Direction") == 0)
            {
            fromJSONDirection(new_component, false);
            return;
            }
        extraRobotTurnCommandAppendPair(key, new_component);
      }
    void extraRobotCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Direction") == 0)
            {
            fromJSONDirection(new_component, false);
            return;
            }
        extraRobotTurnCommandSetField(key, new_component);
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
        RobotCommandJSON::write_fields_as_json(handler);
        assert(flagHasDirection);
        handler->start_pair("Direction");
        handler->number_value(storeDirection.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDirection()))
          {
            return "When parsing the object for %what%, the \"Direction\" field was missing.";
          }
        return NULL;
      }

    static RobotTurnCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RobotTurnCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RobotTurnCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotTurnCommandJSON>, RobotTurnCommandJSON *, bool> generator("Type RobotTurnCommand", ignore_extras);
            parse_json_value(text, "Text for RobotTurnCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RobotTurnCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RobotTurnCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RobotTurnCommandJSON>, RobotTurnCommandJSON *, bool> generator("Type RobotTurnCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RobotCommandJSON::Generator
      {
      private:
        static char lowerBoundDirection[];
        static char upperBoundDirection[];
        JSONHoldingGenerator<JSONIntegerBigRangeGenerator<lowerBoundDirection, upperBoundDirection>, OInteger, o_integer > fieldGeneratorDirection;
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
            if (!(strcmp(getRobotCommandJSONKey().c_str(), "TurnCommand") == 0))
                throw("The key field has a value other than `TurnCommand'.");
            RobotTurnCommandJSON *result = new RobotTurnCommandJSON();
            assert(result != NULL);
            RCHandle<RobotTurnCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraRobotTurnCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RobotCommandJSON *new_result)
          {
            handle_result((RobotTurnCommandJSON *)new_result);
          }
        void finish(RobotTurnCommandJSON *result)
          {
            if (fieldGeneratorDirection.have_value)
              {
                result->setDirection(fieldGeneratorDirection.value);
                fieldGeneratorDirection.have_value = false;
              }
            else if (!(result->hasDirection()))
              {
                error("When parsing the object for %what%, the \"Direction\" field was missing.");
              }
            RobotCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(RobotTurnCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Direction") == 0)
                return &fieldGeneratorDirection;
            return RobotCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RobotCommandJSON::Generator(ignore_extras), fieldGeneratorDirection("field \"Direction\" of the RobotTurnCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the RobotTurnCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDirection.reset();
            RobotCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ROBOTTURNCOMMANDJSON_H */
