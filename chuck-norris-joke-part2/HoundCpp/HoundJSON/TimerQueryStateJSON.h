/* file "TimerQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERQUERYSTATEJSON_H
#define TIMERQUERYSTATEJSON_H

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


class TimerQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeTimerCommandKind
      {
        TimerCommandKind_TimerAddTimeCommand,
        TimerCommandKind_TimerDeleteCommand,
        TimerCommandKind_TimerDisplayCommand,
        TimerCommandKind_TimerNotUnderstoodCommand,
        TimerCommandKind_TimerQuitInformationNugget,
        TimerCommandKind_TimerResetCommand,
        TimerCommandKind_TimerResumeCommand,
        TimerCommandKind_TimerSetCommand,
        TimerCommandKind_TimerStartModeCommand,
        TimerCommandKind_TimerStopCommand,
        TimerCommandKind_TimerUnsetCommand
      };

    static TypeTimerCommandKind  stringToTimerCommandKind(const char *chars);
    static const char * stringFromTimerCommandKind(TypeTimerCommandKind the_enum);

  private:
    bool flagHasTimerCommandKind;
    TypeTimerCommandKind storeTimerCommandKind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerQueryStateJSON(const TimerQueryStateJSON &);
    TimerQueryStateJSON & operator=(const TimerQueryStateJSON &other);

    void  fromJSONTimerCommandKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerQueryStateJSON(void);
    virtual ~TimerQueryStateJSON(void);
    bool  hasTimerCommandKind(void) const;
    TypeTimerCommandKind  getTimerCommandKind(void);
    const TypeTimerCommandKind  getTimerCommandKind(void) const;
    const char * getTimerCommandKindAsChars(void) const;
    std::string  getTimerCommandKindAsString(void) const;

    virtual size_t extraTimerQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTimerCommandKind(TypeTimerCommandKind new_value)
      {
        flagHasTimerCommandKind = true;
        storeTimerCommandKind = new_value;
      }
    void setTimerCommandKind(const char *chars)
      {
        setTimerCommandKind(stringToTimerCommandKind(chars));
      }
    void setTimerCommandKind(std::string the_string)
      {
        setTimerCommandKind(stringToTimerCommandKind(the_string.c_str()));
      }
    void unsetTimerCommandKind(void)
      {
        flagHasTimerCommandKind = false;
      }

    virtual void extraTimerQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraTimerQueryStateAppendPair(key, new_component);
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
        assert(flagHasTimerCommandKind);
        handler->start_pair("TimerCommandKind");
        switch (storeTimerCommandKind)
          {
            case TimerCommandKind_TimerAddTimeCommand:
                handler->string_value("TimerAddTimeCommand");
                break;
            case TimerCommandKind_TimerDeleteCommand:
                handler->string_value("TimerDeleteCommand");
                break;
            case TimerCommandKind_TimerDisplayCommand:
                handler->string_value("TimerDisplayCommand");
                break;
            case TimerCommandKind_TimerNotUnderstoodCommand:
                handler->string_value("TimerNotUnderstoodCommand");
                break;
            case TimerCommandKind_TimerQuitInformationNugget:
                handler->string_value("TimerQuitInformationNugget");
                break;
            case TimerCommandKind_TimerResetCommand:
                handler->string_value("TimerResetCommand");
                break;
            case TimerCommandKind_TimerResumeCommand:
                handler->string_value("TimerResumeCommand");
                break;
            case TimerCommandKind_TimerSetCommand:
                handler->string_value("TimerSetCommand");
                break;
            case TimerCommandKind_TimerStartModeCommand:
                handler->string_value("TimerStartModeCommand");
                break;
            case TimerCommandKind_TimerStopCommand:
                handler->string_value("TimerStopCommand");
                break;
            case TimerCommandKind_TimerUnsetCommand:
                handler->string_value("TimerUnsetCommand");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTimerCommandKind()))
          {
            return "When parsing the object for %what%, the \"TimerCommandKind\" field was missing.";
          }
        return NULL;
      }

    static TimerQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerQueryStateJSON>, TimerQueryStateJSON *, bool> generator("Type TimerQueryState", ignore_extras);
            parse_json_value(text, "Text for TimerQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerQueryStateJSON>, TimerQueryStateJSON *, bool> generator("Type TimerQueryState", ignore_extras);
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
    class FieldGeneratorTimerCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTimerCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTimerCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToTimerCommandKind(result));
              }
            virtual void handle_result(TypeTimerCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTimerCommandKind, TypeTimerCommandKind, TypeTimerCommandKind > fieldGeneratorTimerCommandKind;
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
            TimerQueryStateJSON *result = new TimerQueryStateJSON();
            assert(result != NULL);
            RCHandle<TimerQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimerQueryStateJSON *result)
          {
            if (fieldGeneratorTimerCommandKind.have_value)
              {
                result->setTimerCommandKind(fieldGeneratorTimerCommandKind.value);
                fieldGeneratorTimerCommandKind.have_value = false;
              }
            else if (!(result->hasTimerCommandKind()))
              {
                error("When parsing the object for %what%, the \"TimerCommandKind\" field was missing.");
              }
          }
        virtual void handle_result(TimerQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "TimerCommandKind") == 0)
                return &fieldGeneratorTimerCommandKind;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTimerCommandKind("field \"TimerCommandKind\" of the TimerQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTimerCommandKind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERQUERYSTATEJSON_H */
