/* file "NextPresetOrChannelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NEXTPRESETORCHANNELCOMMANDJSON_H
#define NEXTPRESETORCHANNELCOMMANDJSON_H

#pragma interface

#include "RadioCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class NextPresetOrChannelCommandJSON : public RadioCommandJSON
  {
  private:
    bool flagHasPresetResult;
    DynamicResponseJSON * storePresetResult;
    bool flagHasChannelResult;
    DynamicResponseJSON * storeChannelResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NextPresetOrChannelCommandJSON(const NextPresetOrChannelCommandJSON &);
    NextPresetOrChannelCommandJSON & operator=(const NextPresetOrChannelCommandJSON &other);

    JSONValue * extraPresetResultToJSON(void) const;
    JSONValue * extraChannelResultToJSON(void) const;

    void  fromJSONPresetResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChannelResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    NextPresetOrChannelCommandJSON(void);
    virtual ~NextPresetOrChannelCommandJSON(void);
    const char * getRadioCommandKind(void) const;
    bool  hasPresetResult(void) const;
    DynamicResponseJSON *  getPresetResult(void);
    const DynamicResponseJSON *  getPresetResult(void) const;
    bool  hasChannelResult(void) const;
    DynamicResponseJSON *  getChannelResult(void);
    const DynamicResponseJSON *  getChannelResult(void) const;

    virtual size_t extraNextPresetOrChannelCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNextPresetOrChannelCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNextPresetOrChannelCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNextPresetOrChannelCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNextPresetOrChannelCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNextPresetOrChannelCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasPresetResult)
            ++result;
        if (flagHasChannelResult)
            ++result;
        result += extraNextPresetOrChannelCommandComponentCount();
        return result;
      }
    const char *extraRadioCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPresetResult)
          {
            if (remainder == 0)
                return "PresetResult";
            --remainder;
          }
        if (flagHasChannelResult)
          {
            if (remainder == 0)
                return "ChannelResult";
            --remainder;
          }
        return extraNextPresetOrChannelCommandComponentKey(remainder);
      }
    JSONValue *extraRadioCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasPresetResult)
          {
            if (remainder == 0)
                return extraPresetResultToJSON();
            --remainder;
          }
        if (flagHasChannelResult)
          {
            if (remainder == 0)
                return extraChannelResultToJSON();
            --remainder;
          }
        return extraNextPresetOrChannelCommandComponentValue(remainder);
      }
    const JSONValue *extraRadioCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasPresetResult)
          {
            if (remainder == 0)
                return extraPresetResultToJSON();
            --remainder;
          }
        if (flagHasChannelResult)
          {
            if (remainder == 0)
                return extraChannelResultToJSON();
            --remainder;
          }
        return extraNextPresetOrChannelCommandComponentValue(remainder);
      }
    JSONValue *extraRadioCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hannelResult") == 0)
                    return (flagHasChannelResult ? extraChannelResultToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "resetResult") == 0)
                    return (flagHasPresetResult ? extraPresetResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraNextPresetOrChannelCommandLookup(field_name);
      }
    const JSONValue *extraRadioCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hannelResult") == 0)
                    return (flagHasChannelResult ? extraChannelResultToJSON() : NULL);
                break;
            case 'P':
                if (strcmp(&(field_name[1]), "resetResult") == 0)
                    return (flagHasPresetResult ? extraPresetResultToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraNextPresetOrChannelCommandLookup(field_name);
      }

    void setPresetResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPresetResult)
          {
            storePresetResult->remove_reference();
          }
        flagHasPresetResult = true;
        storePresetResult = new_value;
      }
    void unsetPresetResult(void)
      {
        if (flagHasPresetResult)
          {
            storePresetResult->remove_reference();
          }
        flagHasPresetResult = false;
      }
    void setChannelResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasChannelResult)
          {
            storeChannelResult->remove_reference();
          }
        flagHasChannelResult = true;
        storeChannelResult = new_value;
      }
    void unsetChannelResult(void)
      {
        if (flagHasChannelResult)
          {
            storeChannelResult->remove_reference();
          }
        flagHasChannelResult = false;
      }

    virtual void extraNextPresetOrChannelCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNextPresetOrChannelCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNextPresetOrChannelCommandLookup(key);
        if (old_field == NULL)
          {
            extraNextPresetOrChannelCommandAppendPair(key, new_component);
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
    void extraRadioCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hannelResult") == 0)
                    {
                    fromJSONChannelResult(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "resetResult") == 0)
                    {
                    fromJSONPresetResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraNextPresetOrChannelCommandAppendPair(key, new_component);
      }
    void extraRadioCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hannelResult") == 0)
                    {
                    fromJSONChannelResult(new_component, false);
                    return;
                    }
                break;
            case 'P':
                if (strcmp(&(key[1]), "resetResult") == 0)
                    {
                    fromJSONPresetResult(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraNextPresetOrChannelCommandSetField(key, new_component);
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
        RadioCommandJSON::write_fields_as_json(handler);
        if (flagHasPresetResult)
          {
            handler->start_pair("PresetResult");
            storePresetResult->write_as_json(handler);
          }
        if (flagHasChannelResult)
          {
            handler->start_pair("ChannelResult");
            storeChannelResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static NextPresetOrChannelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NextPresetOrChannelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NextPresetOrChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NextPresetOrChannelCommandJSON>, NextPresetOrChannelCommandJSON *, bool> generator("Type NextPresetOrChannelCommand", ignore_extras);
            parse_json_value(text, "Text for NextPresetOrChannelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NextPresetOrChannelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NextPresetOrChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NextPresetOrChannelCommandJSON>, NextPresetOrChannelCommandJSON *, bool> generator("Type NextPresetOrChannelCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RadioCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorPresetResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorChannelResult;
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
            if (!(strcmp(getRadioCommandJSONKey().c_str(), "NextPresetOrChannel") == 0))
                throw("The key field has a value other than `NextPresetOrChannel'.");
            NextPresetOrChannelCommandJSON *result = new NextPresetOrChannelCommandJSON();
            assert(result != NULL);
            RCHandle<NextPresetOrChannelCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNextPresetOrChannelCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandJSON *new_result)
          {
            handle_result((NextPresetOrChannelCommandJSON *)new_result);
          }
        void finish(NextPresetOrChannelCommandJSON *result)
          {
            if (fieldGeneratorPresetResult.have_value)
              {
                result->setPresetResult(fieldGeneratorPresetResult.value.referenced());
                fieldGeneratorPresetResult.have_value = false;
              }
            if (fieldGeneratorChannelResult.have_value)
              {
                result->setChannelResult(fieldGeneratorChannelResult.value.referenced());
                fieldGeneratorChannelResult.have_value = false;
              }
            RadioCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(NextPresetOrChannelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hannelResult") == 0)
                        return &fieldGeneratorChannelResult;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "resetResult") == 0)
                        return &fieldGeneratorPresetResult;
                    break;
                default:
                    break;
              }
            return RadioCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandJSON::Generator(ignore_extras), fieldGeneratorPresetResult("field \"PresetResult\" of the NextPresetOrChannelCommand class", ignore_extras), fieldGeneratorChannelResult("field \"ChannelResult\" of the NextPresetOrChannelCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NextPresetOrChannelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPresetResult.reset();
            fieldGeneratorChannelResult.reset();
            RadioCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NEXTPRESETORCHANNELCOMMANDJSON_H */
