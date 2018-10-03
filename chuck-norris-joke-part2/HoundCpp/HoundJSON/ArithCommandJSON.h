/* file "ArithCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ARITHCOMMANDJSON_H
#define ARITHCOMMANDJSON_H

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


class ArithCommandJSON : public CommandResultJSON
  {
  public:
    enum TypeArithCommandKind
      {
        ArithCommandKind_ArithCommand
      };

    static TypeArithCommandKind  stringToArithCommandKind(const char *chars);
    static const char * stringFromArithCommandKind(TypeArithCommandKind the_enum);
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasFormula;
        std::string storeFormula;
        bool flagHasResult;
        std::string storeResult;
        bool flagHasTextResponse;
        std::string storeTextResponse;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONFormula(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResult(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTextResponse(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasFormula(void) const;
        std::string  getFormula(void);
        const std::string  getFormula(void) const;
        bool  hasResult(void) const;
        std::string  getResult(void);
        const std::string  getResult(void) const;
        bool  hasTextResponse(void) const;
        std::string  getTextResponse(void);
        const std::string  getTextResponse(void) const;

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

        void setFormula(std::string new_value)
          {
            flagHasFormula = true;
            storeFormula = new_value;
          }
        void unsetFormula(void)
          {
            flagHasFormula = false;
          }
        void setResult(std::string new_value)
          {
            flagHasResult = true;
            storeResult = new_value;
          }
        void unsetResult(void)
          {
            flagHasResult = false;
          }
        void setTextResponse(std::string new_value)
          {
            flagHasTextResponse = true;
            storeTextResponse = new_value;
          }
        void unsetTextResponse(void)
          {
            flagHasTextResponse = false;
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
            assert(flagHasFormula);
            handler->start_pair("Formula");
            handler->string_value(storeFormula);
            assert(flagHasResult);
            handler->start_pair("Result");
            handler->string_value(storeResult);
            assert(flagHasTextResponse);
            handler->start_pair("TextResponse");
            handler->string_value(storeTextResponse);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasFormula()))
              {
                return "When parsing the object for %what%, the \"Formula\" field was missing.";
              }
            if (!(hasResult()))
              {
                return "When parsing the object for %what%, the \"Result\" field was missing.";
              }
            if (!(hasTextResponse()))
              {
                return "When parsing the object for %what%, the \"TextResponse\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFormula;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResult;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextResponse;
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
                if (fieldGeneratorFormula.have_value)
                  {
                    result->setFormula(fieldGeneratorFormula.value);
                    fieldGeneratorFormula.have_value = false;
                  }
                else if (!(result->hasFormula()))
                  {
                    error("When parsing the object for %what%, the \"Formula\" field was missing.");
                  }
                if (fieldGeneratorResult.have_value)
                  {
                    result->setResult(fieldGeneratorResult.value);
                    fieldGeneratorResult.have_value = false;
                  }
                else if (!(result->hasResult()))
                  {
                    error("When parsing the object for %what%, the \"Result\" field was missing.");
                  }
                if (fieldGeneratorTextResponse.have_value)
                  {
                    result->setTextResponse(fieldGeneratorTextResponse.value);
                    fieldGeneratorTextResponse.have_value = false;
                  }
                else if (!(result->hasTextResponse()))
                  {
                    error("When parsing the object for %what%, the \"TextResponse\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ormula") == 0)
                            return &fieldGeneratorFormula;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "esult") == 0)
                            return &fieldGeneratorResult;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "extResponse") == 0)
                            return &fieldGeneratorTextResponse;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorFormula("field \"Formula\" of the TypeNativeData class"), fieldGeneratorResult("field \"Result\" of the TypeNativeData class"), fieldGeneratorTextResponse("field \"TextResponse\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorFormula.reset();
                fieldGeneratorResult.reset();
                fieldGeneratorTextResponse.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasArithCommandKind;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ArithCommandJSON(const ArithCommandJSON &);
    ArithCommandJSON & operator=(const ArithCommandJSON &other);

    JSONValue * extraArithCommandKindToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONArithCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    ArithCommandJSON(void);
    virtual ~ArithCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasArithCommandKind(void) const;
    TypeArithCommandKind  getArithCommandKind(void);
    const TypeArithCommandKind  getArithCommandKind(void) const;
    const char * getArithCommandKindAsChars(void) const;
    std::string  getArithCommandKindAsString(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraArithCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraArithCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraArithCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraArithCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraArithCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraArithCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasArithCommandKind)
            ++result;
        if (flagHasNativeData)
            ++result;
        result += extraArithCommandComponentCount();
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasArithCommandKind)
          {
            if (remainder == 0)
                return "ArithCommandKind";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraArithCommandComponentKey(remainder);
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasArithCommandKind)
          {
            if (remainder == 0)
                return extraArithCommandKindToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraArithCommandComponentValue(remainder);
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasArithCommandKind)
          {
            if (remainder == 0)
                return extraArithCommandKindToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraArithCommandComponentValue(remainder);
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "rithCommandKind") == 0)
                    return (flagHasArithCommandKind ? extraArithCommandKindToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraArithCommandLookup(field_name);
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "rithCommandKind") == 0)
                    return (flagHasArithCommandKind ? extraArithCommandKindToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraArithCommandLookup(field_name);
      }

    void setArithCommandKind(void)
      {
        flagHasArithCommandKind = true;
      }
    void setArithCommandKind(TypeArithCommandKind new_value)
      {
        setArithCommandKind();
      }
    void setArithCommandKind(const char *chars)
      {
        setArithCommandKind(stringToArithCommandKind(chars));
      }
    void setArithCommandKind(std::string the_string)
      {
        setArithCommandKind(stringToArithCommandKind(the_string.c_str()));
      }
    void unsetArithCommandKind(void)
      {
        flagHasArithCommandKind = false;
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

    virtual void extraArithCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraArithCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraArithCommandLookup(key);
        if (old_field == NULL)
          {
            extraArithCommandAppendPair(key, new_component);
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
            case 'A':
                if (strcmp(&(key[1]), "rithCommandKind") == 0)
                    {
                    fromJSONArithCommandKind(new_component, false);
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
            default:
                break;
          }
        extraArithCommandAppendPair(key, new_component);
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "rithCommandKind") == 0)
                    {
                    fromJSONArithCommandKind(new_component, false);
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
            default:
                break;
          }
        extraArithCommandSetField(key, new_component);
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
        assert(flagHasArithCommandKind);
        handler->start_pair("ArithCommandKind");
        handler->string_value("ArithCommand");
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArithCommandKind()))
          {
            return "When parsing the object for %what%, the \"ArithCommandKind\" field was missing.";
          }
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static ArithCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ArithCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ArithCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ArithCommandJSON>, ArithCommandJSON *, bool> generator("Type ArithCommand", ignore_extras);
            parse_json_value(text, "Text for ArithCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ArithCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ArithCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ArithCommandJSON>, ArithCommandJSON *, bool> generator("Type ArithCommand", ignore_extras);
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
    class FieldGeneratorArithCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorArithCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorArithCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToArithCommandKind(result));
              }
            virtual void handle_result(TypeArithCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorArithCommandKind, TypeArithCommandKind, TypeArithCommandKind > fieldGeneratorArithCommandKind;
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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "ArithCommand") == 0))
                throw("The key field has a value other than `ArithCommand'.");
            ArithCommandJSON *result = new ArithCommandJSON();
            assert(result != NULL);
            RCHandle<ArithCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraArithCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((ArithCommandJSON *)new_result);
          }
        void finish(ArithCommandJSON *result)
          {
            if (fieldGeneratorArithCommandKind.have_value)
              {
                result->setArithCommandKind();
                fieldGeneratorArithCommandKind.have_value = false;
              }
            else if (!(result->hasArithCommandKind()))
              {
                error("When parsing the object for %what%, the \"ArithCommandKind\" field was missing.");
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
        virtual void handle_result(ArithCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rithCommandKind") == 0)
                        return &fieldGeneratorArithCommandKind;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorArithCommandKind("field \"ArithCommandKind\" of the ArithCommand class"), fieldGeneratorNativeData("field \"NativeData\" of the ArithCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ArithCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArithCommandKind.reset();
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ARITHCOMMANDJSON_H */
