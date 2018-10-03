/* file "FMChannelCommandIntentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FMCHANNELCOMMANDINTENTJSON_H
#define FMCHANNELCOMMANDINTENTJSON_H

#pragma interface

#include "RadioCommandIntentJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FMChannelCommandIntentJSON : public RadioCommandIntentJSON
  {
  private:
    bool flagHasChannel;
    double storeChannel;
    std::string textStoreChannel;
    bool flagHasHDSpecified;
    bool storeHDSpecified;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FMChannelCommandIntentJSON(const FMChannelCommandIntentJSON &);
    FMChannelCommandIntentJSON & operator=(const FMChannelCommandIntentJSON &other);

    JSONValue * extraChannelToJSON(void) const;
    JSONValue * extraHDSpecifiedToJSON(void) const;

    void  fromJSONChannel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHDSpecified(JSONValue *json_value, bool ignore_extras = false);


  public:
    FMChannelCommandIntentJSON(void);
    virtual ~FMChannelCommandIntentJSON(void);
    const char * getRadioIntentKind(void) const;
    bool  hasChannel(void) const;
    double  getChannel(void);
    const double  getChannel(void) const;
    std::string  getChannelAsText(void) const;
    bool  hasHDSpecified(void) const;
    bool  getHDSpecified(void);
    const bool  getHDSpecified(void) const;

    virtual size_t extraFMChannelCommandIntentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFMChannelCommandIntentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFMChannelCommandIntentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFMChannelCommandIntentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFMChannelCommandIntentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFMChannelCommandIntentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraRadioCommandIntentComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasChannel)
            ++result;
        if (flagHasHDSpecified)
            ++result;
        result += extraFMChannelCommandIntentComponentCount();
        return result;
      }
    const char *extraRadioCommandIntentComponentKey(size_t component_num) const
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
        return extraFMChannelCommandIntentComponentKey(remainder);
      }
    JSONValue *extraRadioCommandIntentComponentValue(size_t component_num)
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
        return extraFMChannelCommandIntentComponentValue(remainder);
      }
    const JSONValue *extraRadioCommandIntentComponentValue(size_t component_num) const
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
        return extraFMChannelCommandIntentComponentValue(remainder);
      }
    JSONValue *extraRadioCommandIntentLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
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
        return extraFMChannelCommandIntentLookup(field_name);
      }
    const JSONValue *extraRadioCommandIntentLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
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
        return extraFMChannelCommandIntentLookup(field_name);
      }

    void setChannel(double new_value)
      {
        flagHasChannel = true;
        if (new_value < 65.8)
            throw("The value for field Channel of FMChannelCommandIntentJSON is less than the lower bound (65.8) for that field.");
        if (new_value > 108)
            throw("The value for field Channel of FMChannelCommandIntentJSON is greater than the upper bound (108) for that field.");
        storeChannel = new_value;
        textStoreChannel = "";
      }
    void setChannelText(std::string new_value)
      {
        flagHasChannel = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Channel of FMChannelCommandIntentJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "658", "", false, "2") < 0)
            throw("The value for field Channel of FMChannelCommandIntentJSON is less than the lower bound (65.8) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "108", "", false, "3") > 0)
            throw("The value for field Channel of FMChannelCommandIntentJSON is greater than the upper bound (108) for that field.");
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

    virtual void extraFMChannelCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFMChannelCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFMChannelCommandIntentLookup(key);
        if (old_field == NULL)
          {
            extraFMChannelCommandIntentAppendPair(key, new_component);
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
    void extraRadioCommandIntentAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
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
        extraFMChannelCommandIntentAppendPair(key, new_component);
      }
    void extraRadioCommandIntentSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
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
        extraFMChannelCommandIntentSetField(key, new_component);
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
        RadioCommandIntentJSON::write_fields_as_json(handler);
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

    static FMChannelCommandIntentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FMChannelCommandIntentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FMChannelCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandIntentJSON>, FMChannelCommandIntentJSON *, bool> generator("Type FMChannelCommandIntent", ignore_extras);
            parse_json_value(text, "Text for FMChannelCommandIntentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FMChannelCommandIntentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FMChannelCommandIntentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandIntentJSON>, FMChannelCommandIntentJSON *, bool> generator("Type FMChannelCommandIntent", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RadioCommandIntentJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorChannel;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHDSpecified;
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
            if (!(strcmp(getRadioCommandIntentJSONKey().c_str(), "FMChannel") == 0))
                throw("The key field has a value other than `FMChannel'.");
            FMChannelCommandIntentJSON *result = new FMChannelCommandIntentJSON();
            assert(result != NULL);
            RCHandle<FMChannelCommandIntentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFMChannelCommandIntentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(RadioCommandIntentJSON *new_result)
          {
            handle_result((FMChannelCommandIntentJSON *)new_result);
          }
        void finish(FMChannelCommandIntentJSON *result)
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
            RadioCommandIntentJSON::Generator::finish(result);
          }
        virtual void handle_result(FMChannelCommandIntentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
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
            return RadioCommandIntentJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RadioCommandIntentJSON::Generator(ignore_extras), fieldGeneratorChannel("field \"Channel\" of the FMChannelCommandIntent class"), fieldGeneratorHDSpecified("field \"HDSpecified\" of the FMChannelCommandIntent class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FMChannelCommandIntent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChannel.reset();
            fieldGeneratorHDSpecified.reset();
            RadioCommandIntentJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FMCHANNELCOMMANDINTENTJSON_H */
