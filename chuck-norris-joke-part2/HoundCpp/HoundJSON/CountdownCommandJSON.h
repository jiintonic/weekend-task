/* file "CountdownCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COUNTDOWNCOMMANDJSON_H
#define COUNTDOWNCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CountdownCommandJSON : public CommandResultJSON
  {
  private:
    bool flagHasCountdownIsSupported;
    bool storeCountdownIsSupported;
    bool flagHasSecondsLeft;
    OInteger storeSecondsLeft;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CountdownCommandJSON(const CountdownCommandJSON &);
    CountdownCommandJSON & operator=(const CountdownCommandJSON &other);

    JSONValue * extraCountdownIsSupportedToJSON(void) const;
    JSONValue * extraSecondsLeftToJSON(void) const;

    void  fromJSONCountdownIsSupported(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondsLeft(JSONValue *json_value, bool ignore_extras = false);


  public:
    CountdownCommandJSON(void);
    virtual ~CountdownCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasCountdownIsSupported(void) const;
    bool  getCountdownIsSupported(void);
    const bool  getCountdownIsSupported(void) const;
    bool  hasSecondsLeft(void) const;
    OInteger  getSecondsLeft(void);
    const OInteger  getSecondsLeft(void) const;

    virtual size_t extraCountdownCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCountdownCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCountdownCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCountdownCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCountdownCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCountdownCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCountdownIsSupported)
            ++result;
        if (flagHasSecondsLeft)
            ++result;
        result += extraCountdownCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCountdownIsSupported)
          {
            if (remainder == 0)
                return "CountdownIsSupported";
            --remainder;
          }
        if (flagHasSecondsLeft)
          {
            if (remainder == 0)
                return "SecondsLeft";
            --remainder;
          }
        return extraCountdownCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCountdownIsSupported)
          {
            if (remainder == 0)
                return extraCountdownIsSupportedToJSON();
            --remainder;
          }
        if (flagHasSecondsLeft)
          {
            if (remainder == 0)
                return extraSecondsLeftToJSON();
            --remainder;
          }
        return extraCountdownCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCountdownIsSupported)
          {
            if (remainder == 0)
                return extraCountdownIsSupportedToJSON();
            --remainder;
          }
        if (flagHasSecondsLeft)
          {
            if (remainder == 0)
                return extraSecondsLeftToJSON();
            --remainder;
          }
        return extraCountdownCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ountdownIsSupported") == 0)
                    return (flagHasCountdownIsSupported ? extraCountdownIsSupportedToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "econdsLeft") == 0)
                    return (flagHasSecondsLeft ? extraSecondsLeftToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCountdownCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ountdownIsSupported") == 0)
                    return (flagHasCountdownIsSupported ? extraCountdownIsSupportedToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "econdsLeft") == 0)
                    return (flagHasSecondsLeft ? extraSecondsLeftToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCountdownCommandLookup(field_name);
      }

    void setCountdownIsSupported(bool new_value)
      {
        flagHasCountdownIsSupported = true;
        storeCountdownIsSupported = new_value;
      }
    void unsetCountdownIsSupported(void)
      {
        flagHasCountdownIsSupported = false;
      }
    void setSecondsLeft(OInteger new_value)
      {
        flagHasSecondsLeft = true;
        if (new_value < 0)
            throw("The value for field SecondsLeft of CountdownCommandJSON is less than the lower bound (0) for that field.");
        storeSecondsLeft = new_value;
      }
    void unsetSecondsLeft(void)
      {
        flagHasSecondsLeft = false;
      }

    virtual void extraCountdownCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCountdownCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCountdownCommandLookup(key);
        if (old_field == NULL)
          {
            extraCountdownCommandAppendPair(key, new_component);
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
    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ountdownIsSupported") == 0)
                    {
                    fromJSONCountdownIsSupported(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "econdsLeft") == 0)
                    {
                    fromJSONSecondsLeft(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCountdownCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ountdownIsSupported") == 0)
                    {
                    fromJSONCountdownIsSupported(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "econdsLeft") == 0)
                    {
                    fromJSONSecondsLeft(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCountdownCommandSetField(key, new_component);
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasCountdownIsSupported);
        handler->start_pair("CountdownIsSupported");
        handler->boolean_value(storeCountdownIsSupported);
        if (flagHasSecondsLeft)
          {
            handler->start_pair("SecondsLeft");
            handler->number_value(storeSecondsLeft.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCountdownIsSupported()))
          {
            return "When parsing the object for %what%, the \"CountdownIsSupported\" field was missing.";
          }
        return NULL;
      }

    static CountdownCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CountdownCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CountdownCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CountdownCommandJSON>, CountdownCommandJSON *, bool> generator("Type CountdownCommand", ignore_extras);
            parse_json_value(text, "Text for CountdownCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CountdownCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CountdownCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CountdownCommandJSON>, CountdownCommandJSON *, bool> generator("Type CountdownCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCountdownIsSupported;
        static char lowerBoundSecondsLeft[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSecondsLeft>, OInteger, o_integer > fieldGeneratorSecondsLeft;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "CountdownCommand") == 0))
                throw("The key field has a value other than `CountdownCommand'.");
            CountdownCommandJSON *result = new CountdownCommandJSON();
            assert(result != NULL);
            RCHandle<CountdownCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCountdownCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((CountdownCommandJSON *)new_result);
          }
        void finish(CountdownCommandJSON *result)
          {
            if (fieldGeneratorCountdownIsSupported.have_value)
              {
                result->setCountdownIsSupported(fieldGeneratorCountdownIsSupported.value);
                fieldGeneratorCountdownIsSupported.have_value = false;
              }
            else if (!(result->hasCountdownIsSupported()))
              {
                error("When parsing the object for %what%, the \"CountdownIsSupported\" field was missing.");
              }
            if (fieldGeneratorSecondsLeft.have_value)
              {
                result->setSecondsLeft(fieldGeneratorSecondsLeft.value);
                fieldGeneratorSecondsLeft.have_value = false;
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(CountdownCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ountdownIsSupported") == 0)
                        return &fieldGeneratorCountdownIsSupported;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "econdsLeft") == 0)
                        return &fieldGeneratorSecondsLeft;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorCountdownIsSupported("field \"CountdownIsSupported\" of the CountdownCommand class"), fieldGeneratorSecondsLeft("field \"SecondsLeft\" of the CountdownCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CountdownCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCountdownIsSupported.reset();
            fieldGeneratorSecondsLeft.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COUNTDOWNCOMMANDJSON_H */
