/* file "SpeechToTextOnlyCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPEECHTOTEXTONLYCOMMANDJSON_H
#define SPEECHTOTEXTONLYCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SpeechToTextOnlyCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasRawTranscription;
        std::string storeRawTranscription;
        bool flagHasFormattedTranscription;
        std::string storeFormattedTranscription;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONRawTranscription(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFormattedTranscription(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasRawTranscription(void) const;
        std::string  getRawTranscription(void);
        const std::string  getRawTranscription(void) const;
        bool  hasFormattedTranscription(void) const;
        std::string  getFormattedTranscription(void);
        const std::string  getFormattedTranscription(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setRawTranscription(std::string new_value)
          {
            flagHasRawTranscription = true;
            storeRawTranscription = new_value;
          }
        void unsetRawTranscription(void)
          {
            flagHasRawTranscription = false;
          }
        void setFormattedTranscription(std::string new_value)
          {
            flagHasFormattedTranscription = true;
            storeFormattedTranscription = new_value;
          }
        void unsetFormattedTranscription(void)
          {
            flagHasFormattedTranscription = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasRawTranscription);
            handler->start_pair("RawTranscription");
            handler->string_value(storeRawTranscription);
            assert(flagHasFormattedTranscription);
            handler->start_pair("FormattedTranscription");
            handler->string_value(storeFormattedTranscription);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRawTranscription()))
              {
                return "When parsing the object for %what%, the \"RawTranscription\" field was missing.";
              }
            if (!(hasFormattedTranscription()))
              {
                return "When parsing the object for %what%, the \"FormattedTranscription\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRawTranscription;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFormattedTranscription;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorRawTranscription.have_value)
                  {
                    result->setRawTranscription(fieldGeneratorRawTranscription.value);
                    fieldGeneratorRawTranscription.have_value = false;
                  }
                else if (!(result->hasRawTranscription()))
                  {
                    error("When parsing the object for %what%, the \"RawTranscription\" field was missing.");
                  }
                if (fieldGeneratorFormattedTranscription.have_value)
                  {
                    result->setFormattedTranscription(fieldGeneratorFormattedTranscription.value);
                    fieldGeneratorFormattedTranscription.have_value = false;
                  }
                else if (!(result->hasFormattedTranscription()))
                  {
                    error("When parsing the object for %what%, the \"FormattedTranscription\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ormattedTranscription") == 0)
                            return &fieldGeneratorFormattedTranscription;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "awTranscription") == 0)
                            return &fieldGeneratorRawTranscription;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRawTranscription("field \"RawTranscription\" of the TypeNativeData class"), fieldGeneratorFormattedTranscription("field \"FormattedTranscription\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRawTranscription.reset();
                fieldGeneratorFormattedTranscription.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasRawTranscription;
    std::string storeRawTranscription;
    bool flagHasFormattedTranscription;
    std::string storeFormattedTranscription;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SpeechToTextOnlyCommandJSON(const SpeechToTextOnlyCommandJSON &);
    SpeechToTextOnlyCommandJSON & operator=(const SpeechToTextOnlyCommandJSON &other);

    JSONValue * extraRawTranscriptionToJSON(void) const;
    JSONValue * extraFormattedTranscriptionToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONRawTranscription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFormattedTranscription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    SpeechToTextOnlyCommandJSON(void);
    virtual ~SpeechToTextOnlyCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasRawTranscription(void) const;
    std::string  getRawTranscription(void);
    const std::string  getRawTranscription(void) const;
    bool  hasFormattedTranscription(void) const;
    std::string  getFormattedTranscription(void);
    const std::string  getFormattedTranscription(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraSpeechToTextOnlyCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSpeechToTextOnlyCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSpeechToTextOnlyCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSpeechToTextOnlyCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSpeechToTextOnlyCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSpeechToTextOnlyCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasRawTranscription)
            ++result;
        if (flagHasFormattedTranscription)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraSpeechToTextOnlyCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRawTranscription)
          {
            if (remainder == 0)
                return "RawTranscription";
            --remainder;
          }
        if (flagHasFormattedTranscription)
          {
            if (remainder == 0)
                return "FormattedTranscription";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraSpeechToTextOnlyCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasRawTranscription)
          {
            if (remainder == 0)
                return extraRawTranscriptionToJSON();
            --remainder;
          }
        if (flagHasFormattedTranscription)
          {
            if (remainder == 0)
                return extraFormattedTranscriptionToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraSpeechToTextOnlyCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasRawTranscription)
          {
            if (remainder == 0)
                return extraRawTranscriptionToJSON();
            --remainder;
          }
        if (flagHasFormattedTranscription)
          {
            if (remainder == 0)
                return extraFormattedTranscriptionToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraSpeechToTextOnlyCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "ormattedTranscription") == 0)
                    return (flagHasFormattedTranscription ? extraFormattedTranscriptionToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "awTranscription") == 0)
                    return (flagHasRawTranscription ? extraRawTranscriptionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSpeechToTextOnlyCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'F':
                if (strcmp(&(field_name[1]), "ormattedTranscription") == 0)
                    return (flagHasFormattedTranscription ? extraFormattedTranscriptionToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "awTranscription") == 0)
                    return (flagHasRawTranscription ? extraRawTranscriptionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSpeechToTextOnlyCommandLookup(field_name);
      }

    void setRawTranscription(std::string new_value)
      {
        flagHasRawTranscription = true;
        storeRawTranscription = new_value;
      }
    void unsetRawTranscription(void)
      {
        flagHasRawTranscription = false;
      }
    void setFormattedTranscription(std::string new_value)
      {
        flagHasFormattedTranscription = true;
        storeFormattedTranscription = new_value;
      }
    void unsetFormattedTranscription(void)
      {
        flagHasFormattedTranscription = false;
      }
    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraSpeechToTextOnlyCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSpeechToTextOnlyCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSpeechToTextOnlyCommandLookup(key);
        if (old_field == NULL)
          {
            extraSpeechToTextOnlyCommandAppendPair(key, new_component);
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
            case 'F':
                if (strcmp(&(key[1]), "ormattedTranscription") == 0)
                    {
                    fromJSONFormattedTranscription(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "awTranscription") == 0)
                    {
                    fromJSONRawTranscription(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSpeechToTextOnlyCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'F':
                if (strcmp(&(key[1]), "ormattedTranscription") == 0)
                    {
                    fromJSONFormattedTranscription(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "awTranscription") == 0)
                    {
                    fromJSONRawTranscription(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSpeechToTextOnlyCommandSetField(key, new_component);
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
        assert(flagHasRawTranscription);
        handler->start_pair("RawTranscription");
        handler->string_value(storeRawTranscription);
        assert(flagHasFormattedTranscription);
        handler->start_pair("FormattedTranscription");
        handler->string_value(storeFormattedTranscription);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRawTranscription()))
          {
            return "When parsing the object for %what%, the \"RawTranscription\" field was missing.";
          }
        if (!(hasFormattedTranscription()))
          {
            return "When parsing the object for %what%, the \"FormattedTranscription\" field was missing.";
          }
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static SpeechToTextOnlyCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SpeechToTextOnlyCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SpeechToTextOnlyCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SpeechToTextOnlyCommandJSON>, SpeechToTextOnlyCommandJSON *, bool> generator("Type SpeechToTextOnlyCommand", ignore_extras);
            parse_json_value(text, "Text for SpeechToTextOnlyCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SpeechToTextOnlyCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SpeechToTextOnlyCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SpeechToTextOnlyCommandJSON>, SpeechToTextOnlyCommandJSON *, bool> generator("Type SpeechToTextOnlyCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRawTranscription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFormattedTranscription;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "SpeechToTextOnlyCommand") == 0))
                throw("The key field has a value other than `SpeechToTextOnlyCommand'.");
            SpeechToTextOnlyCommandJSON *result = new SpeechToTextOnlyCommandJSON();
            assert(result != NULL);
            RCHandle<SpeechToTextOnlyCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSpeechToTextOnlyCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((SpeechToTextOnlyCommandJSON *)new_result);
          }
        void finish(SpeechToTextOnlyCommandJSON *result)
          {
            if (fieldGeneratorRawTranscription.have_value)
              {
                result->setRawTranscription(fieldGeneratorRawTranscription.value);
                fieldGeneratorRawTranscription.have_value = false;
              }
            else if (!(result->hasRawTranscription()))
              {
                error("When parsing the object for %what%, the \"RawTranscription\" field was missing.");
              }
            if (fieldGeneratorFormattedTranscription.have_value)
              {
                result->setFormattedTranscription(fieldGeneratorFormattedTranscription.value);
                fieldGeneratorFormattedTranscription.have_value = false;
              }
            else if (!(result->hasFormattedTranscription()))
              {
                error("When parsing the object for %what%, the \"FormattedTranscription\" field was missing.");
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(SpeechToTextOnlyCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "ormattedTranscription") == 0)
                        return &fieldGeneratorFormattedTranscription;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "awTranscription") == 0)
                        return &fieldGeneratorRawTranscription;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorRawTranscription("field \"RawTranscription\" of the SpeechToTextOnlyCommand class"), fieldGeneratorFormattedTranscription("field \"FormattedTranscription\" of the SpeechToTextOnlyCommand class"), fieldGeneratorNativeData("field \"NativeData\" of the SpeechToTextOnlyCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SpeechToTextOnlyCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRawTranscription.reset();
            fieldGeneratorFormattedTranscription.reset();
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPEECHTOTEXTONLYCOMMANDJSON_H */
