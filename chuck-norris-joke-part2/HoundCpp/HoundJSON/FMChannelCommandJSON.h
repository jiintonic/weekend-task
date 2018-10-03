/* file "FMChannelCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FMCHANNELCOMMANDJSON_H
#define FMCHANNELCOMMANDJSON_H

#pragma interface

#include "RadioCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FMChannelCommandJSON : public RadioCommandJSON
  {
  private:
    bool flagHasChannel;
    double storeChannel;
    std::string textStoreChannel;
    bool flagHasHDSpecified;
    bool storeHDSpecified;
    bool flagHasAlreadyOnResult;
    DynamicResponseJSON * storeAlreadyOnResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FMChannelCommandJSON(const FMChannelCommandJSON &);
    FMChannelCommandJSON & operator=(const FMChannelCommandJSON &other);

    JSONValue * extraChannelToJSON(void) const;
    JSONValue * extraHDSpecifiedToJSON(void) const;
    JSONValue * extraAlreadyOnResultToJSON(void) const;

    void  fromJSONChannel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHDSpecified(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    FMChannelCommandJSON(void);
    virtual ~FMChannelCommandJSON(void);
    const char * getRadioCommandKind(void) const;
    bool  hasChannel(void) const;
    double  getChannel(void);
    const double  getChannel(void) const;
    std::string  getChannelAsText(void) const;
    bool  hasHDSpecified(void) const;
    bool  getHDSpecified(void);
    const bool  getHDSpecified(void) const;
    bool  hasAlreadyOnResult(void) const;
    DynamicResponseJSON *  getAlreadyOnResult(void);
    const DynamicResponseJSON *  getAlreadyOnResult(void) const;

    virtual size_t extraFMChannelCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFMChannelCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFMChannelCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFMChannelCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFMChannelCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFMChannelCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChannel)
            ++result;
        if (flagHasHDSpecified)
            ++result;
        if (flagHasAlreadyOnResult)
            ++result;
        result += extraFMChannelCommandComponentCount();
        return result;
      }
    const char *extraRadioCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return "Channel";
            --remainder;
          }
        if (flagHasHDSpecified)
          {
            if (remainder == 0)
                return "HDSpecified";
            --remainder;
          }
        if (flagHasAlreadyOnResult)
          {
            if (remainder == 0)
                return "AlreadyOnResult";
            --remainder;
          }
        return extraFMChannelCommandComponentKey(remainder);
      }
    JSONValue *extraRadioCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return extraChannelToJSON();
            --remainder;
          }
        if (flagHasHDSpecified)
          {
            if (remainder == 0)
                return extraHDSpecifiedToJSON();
            --remainder;
          }
        if (flagHasAlreadyOnResult)
          {
            if (remainder == 0)
                return extraAlreadyOnResultToJSON();
            --remainder;
          }
        return extraFMChannelCommandComponentValue(remainder);
      }
    const JSONValue *extraRadioCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasChannel)
          {
            if (remainder == 0)
                return extraChannelToJSON();
            --remainder;
          }
        if (flagHasHDSpecified)
          {
            if (remainder == 0)
                return extraHDSpecifiedToJSON();
            --remainder;
          }
        if (flagHasAlreadyOnResult)
          {
            if (remainder == 0)
                return extraAlreadyOnResultToJSON();
            --remainder;
          }
        return extraFMChannelCommandComponentValue(remainder);
      }
    JSONValue *extraRadioCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "lreadyOnResult") == 0)
                    return (flagHasAlreadyOnResult ? extraAlreadyOnResultToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "hannel") == 0)
                    return (flagHasChannel ? extraChannelToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "DSpecified") == 0)
                    return (flagHasHDSpecified ? extraHDSpecifiedToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraFMChannelCommandLookup(field_name);
      }
    const JSONValue *extraRadioCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "lreadyOnResult") == 0)
                    return (flagHasAlreadyOnResult ? extraAlreadyOnResultToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "hannel") == 0)
                    return (flagHasChannel ? extraChannelToJSON() : NULL);
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "DSpecified") == 0)
                    return (flagHasHDSpecified ? extraHDSpecifiedToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraFMChannelCommandLookup(field_name);
      }

    void setChannel(double new_value)
      {
        flagHasChannel = true;
        if (new_value < 65.8)
            throw("The value for field Channel of FMChannelCommandJSON is less than the lower bound (65.8) for that field.");
        if (new_value > 108)
            throw("The value for field Channel of FMChannelCommandJSON is greater than the upper bound (108) for that field.");
        storeChannel = new_value;
        textStoreChannel = "";
      }
    void setChannelText(std::string new_value)
      {
        flagHasChannel = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Channel of FMChannelCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "658", "", false, "2") < 0)
            throw("The value for field Channel of FMChannelCommandJSON is less than the lower bound (65.8) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "108", "", false, "3") > 0)
            throw("The value for field Channel of FMChannelCommandJSON is greater than the upper bound (108) for that field.");
        textStoreChannel = new_value;
      }
    void unsetChannel(void)
      {
        flagHasChannel = false;
      }
    void setHDSpecified(bool new_value)
      {
        flagHasHDSpecified = true;
        storeHDSpecified = new_value;
      }
    void unsetHDSpecified(void)
      {
        flagHasHDSpecified = false;
      }
    void setAlreadyOnResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAlreadyOnResult)
          {
            storeAlreadyOnResult->remove_reference();
          }
        flagHasAlreadyOnResult = true;
        storeAlreadyOnResult = new_value;
      }
    void unsetAlreadyOnResult(void)
      {
        if (flagHasAlreadyOnResult)
          {
            storeAlreadyOnResult->remove_reference();
          }
        flagHasAlreadyOnResult = false;
      }

    virtual void extraFMChannelCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFMChannelCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFMChannelCommandLookup(key);
        if (old_field == NULL)
          {
            extraFMChannelCommandAppendPair(key, new_component);
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
            case 'A':
                if (strcmp(&(key[1]), "lreadyOnResult") == 0)
                    {
                    fromJSONAlreadyOnResult(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "hannel") == 0)
                    {
                    fromJSONChannel(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "DSpecified") == 0)
                    {
                    fromJSONHDSpecified(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraFMChannelCommandAppendPair(key, new_component);
      }
    void extraRadioCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "lreadyOnResult") == 0)
                    {
                    fromJSONAlreadyOnResult(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "hannel") == 0)
                    {
                    fromJSONChannel(new_component, false);
                    return;
                    }
                break;
            case 'H':
                if (strcmp(&(key[1]), "DSpecified") == 0)
                    {
                    fromJSONHDSpecified(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraFMChannelCommandSetField(key, new_component);
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
        assert(flagHasChannel);
        handler->start_pair("Channel");
        if (textStoreChannel != "")
            handler->number_value(textStoreChannel.c_str());
        else if (((double)(long int)storeChannel) == storeChannel)
            handler->number_value((long int)storeChannel);
        else
            handler->number_value(storeChannel);
        assert(flagHasHDSpecified);
        handler->start_pair("HDSpecified");
        handler->boolean_value(storeHDSpecified);
        if (flagHasAlreadyOnResult)
          {
            handler->start_pair("AlreadyOnResult");
            storeAlreadyOnResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChannel()))
          {
            return "When parsing the object for %what%, the \"Channel\" field was missing.";
          }
        if (!(hasHDSpecified()))
          {
            return "When parsing the object for %what%, the \"HDSpecified\" field was missing.";
          }
        return NULL;
      }

    static FMChannelCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FMChannelCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FMChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandJSON>, FMChannelCommandJSON *, bool> generator("Type FMChannelCommand", ignore_extras);
            parse_json_value(text, "Text for FMChannelCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FMChannelCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FMChannelCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandJSON>, FMChannelCommandJSON *, bool> generator("Type FMChannelCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorChannel;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHDSpecified;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorAlreadyOnResult;
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
            if (!(strcmp(getRadioCommandJSONKey().c_str(), "FMChannel") == 0))
                throw("The key field has a value other than `FMChannel'.");
            FMChannelCommandJSON *result = new FMChannelCommandJSON();
            assert(result != NULL);
            RCHandle<FMChannelCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFMChannelCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandJSON *new_result)
          {
            handle_result((FMChannelCommandJSON *)new_result);
          }
        void finish(FMChannelCommandJSON *result)
          {
            if (fieldGeneratorChannel.have_value)
              {
                result->setChannelText(fieldGeneratorChannel.value);
                fieldGeneratorChannel.have_value = false;
              }
            else if (!(result->hasChannel()))
              {
                error("When parsing the object for %what%, the \"Channel\" field was missing.");
              }
            if (fieldGeneratorHDSpecified.have_value)
              {
                result->setHDSpecified(fieldGeneratorHDSpecified.value);
                fieldGeneratorHDSpecified.have_value = false;
              }
            else if (!(result->hasHDSpecified()))
              {
                error("When parsing the object for %what%, the \"HDSpecified\" field was missing.");
              }
            if (fieldGeneratorAlreadyOnResult.have_value)
              {
                result->setAlreadyOnResult(fieldGeneratorAlreadyOnResult.value.referenced());
                fieldGeneratorAlreadyOnResult.have_value = false;
              }
            RadioCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(FMChannelCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "lreadyOnResult") == 0)
                        return &fieldGeneratorAlreadyOnResult;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "hannel") == 0)
                        return &fieldGeneratorChannel;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "DSpecified") == 0)
                        return &fieldGeneratorHDSpecified;
                    break;
                default:
                    break;
              }
            return RadioCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandJSON::Generator(ignore_extras), fieldGeneratorChannel("field \"Channel\" of the FMChannelCommand class"), fieldGeneratorHDSpecified("field \"HDSpecified\" of the FMChannelCommand class"), fieldGeneratorAlreadyOnResult("field \"AlreadyOnResult\" of the FMChannelCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FMChannelCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChannel.reset();
            fieldGeneratorHDSpecified.reset();
            fieldGeneratorAlreadyOnResult.reset();
            RadioCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FMCHANNELCOMMANDJSON_H */
