/* file "EquationSolverInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef EQUATIONSOLVERINFORMATIONNUGGETJSON_H
#define EQUATIONSOLVERINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class EquationSolverInformationNuggetJSON : public InformationNuggetJSON
  {
  public:
    class TypeSolutionsJSON : public ReferenceCounted
      {
      private:
        bool flagHasReal;
        double storeReal;
        std::string textStoreReal;
        bool flagHasImaginary;
        double storeImaginary;
        std::string textStoreImaginary;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSolutionsJSON(const TypeSolutionsJSON &);
        TypeSolutionsJSON & operator=(const TypeSolutionsJSON &other);

        void  fromJSONReal(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONImaginary(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSolutionsJSON(void);
        virtual ~TypeSolutionsJSON(void);
        bool  hasReal(void) const;
        double  getReal(void);
        const double  getReal(void) const;
        std::string  getRealAsText(void) const;
        bool  hasImaginary(void) const;
        double  getImaginary(void);
        const double  getImaginary(void) const;
        std::string  getImaginaryAsText(void) const;

        virtual size_t extraTypeSolutionsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSolutionsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSolutionsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSolutionsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSolutionsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSolutionsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setReal(double new_value)
          {
            flagHasReal = true;
            storeReal = new_value;
            textStoreReal = "";
          }
        void setRealText(std::string new_value)
          {
            flagHasReal = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Real of TypeSolutionsJSON is not a valid number.");
            textStoreReal = new_value;
          }
        void unsetReal(void)
          {
            flagHasReal = false;
          }
        void setImaginary(double new_value)
          {
            flagHasImaginary = true;
            storeImaginary = new_value;
            textStoreImaginary = "";
          }
        void setImaginaryText(std::string new_value)
          {
            flagHasImaginary = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Imaginary of TypeSolutionsJSON is not a valid number.");
            textStoreImaginary = new_value;
          }
        void unsetImaginary(void)
          {
            flagHasImaginary = false;
          }

        virtual void extraTypeSolutionsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSolutionsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSolutionsLookup(key);
            if (old_field == NULL)
              {
                extraTypeSolutionsAppendPair(key, new_component);
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
            assert(flagHasReal);
            handler->start_pair("Real");
            if (textStoreReal != "")
                handler->number_value(textStoreReal.c_str());
            else if (((double)(long int)storeReal) == storeReal)
                handler->number_value((long int)storeReal);
            else
                handler->number_value(storeReal);
            assert(flagHasImaginary);
            handler->start_pair("Imaginary");
            if (textStoreImaginary != "")
                handler->number_value(textStoreImaginary.c_str());
            else if (((double)(long int)storeImaginary) == storeImaginary)
                handler->number_value((long int)storeImaginary);
            else
                handler->number_value(storeImaginary);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasReal()))
              {
                return "When parsing the object for %what%, the \"Real\" field was missing.";
              }
            if (!(hasImaginary()))
              {
                return "When parsing the object for %what%, the \"Imaginary\" field was missing.";
              }
            return NULL;
          }

        static TypeSolutionsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSolutionsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSolutionsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSolutionsJSON>, TypeSolutionsJSON *, bool> generator("Type TypeSolutions", ignore_extras);
                parse_json_value(text, "Text for TypeSolutionsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSolutionsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSolutionsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSolutionsJSON>, TypeSolutionsJSON *, bool> generator("Type TypeSolutions", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorReal;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorImaginary;
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
                TypeSolutionsJSON *result = new TypeSolutionsJSON();
                assert(result != NULL);
                RCHandle<TypeSolutionsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSolutionsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSolutionsJSON *result)
              {
                if (fieldGeneratorReal.have_value)
                  {
                    result->setRealText(fieldGeneratorReal.value);
                    fieldGeneratorReal.have_value = false;
                  }
                else if (!(result->hasReal()))
                  {
                    error("When parsing the object for %what%, the \"Real\" field was missing.");
                  }
                if (fieldGeneratorImaginary.have_value)
                  {
                    result->setImaginaryText(fieldGeneratorImaginary.value);
                    fieldGeneratorImaginary.have_value = false;
                  }
                else if (!(result->hasImaginary()))
                  {
                    error("When parsing the object for %what%, the \"Imaginary\" field was missing.");
                  }
              }
            virtual void handle_result(TypeSolutionsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "maginary") == 0)
                            return &fieldGeneratorImaginary;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "eal") == 0)
                            return &fieldGeneratorReal;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorReal("field \"Real\" of the TypeSolutions class"), fieldGeneratorImaginary("field \"Imaginary\" of the TypeSolutions class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSolutions class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorReal.reset();
                fieldGeneratorImaginary.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasEquation;
    std::string storeEquation;
    bool flagHasVariable;
    std::string storeVariable;
    bool flagHasSolutions;
    std::vector< TypeSolutionsJSON * > storeSolutions;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    EquationSolverInformationNuggetJSON(const EquationSolverInformationNuggetJSON &);
    EquationSolverInformationNuggetJSON & operator=(const EquationSolverInformationNuggetJSON &other);

    JSONValue * extraEquationToJSON(void) const;
    JSONValue * extraVariableToJSON(void) const;
    JSONValue * extraSolutionsToJSON(void) const;

    void  fromJSONEquation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVariable(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSolutions(JSONValue *json_value, bool ignore_extras = false);


  public:
    EquationSolverInformationNuggetJSON(void);
    virtual ~EquationSolverInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasEquation(void) const;
    std::string  getEquation(void);
    const std::string  getEquation(void) const;
    bool  hasVariable(void) const;
    std::string  getVariable(void);
    const std::string  getVariable(void) const;
    bool  hasSolutions(void) const;
    size_t  countOfSolutions(void) const;
    TypeSolutionsJSON *  elementOfSolutions(size_t element_num);
    const TypeSolutionsJSON *  elementOfSolutions(size_t element_num) const;
    std::vector< TypeSolutionsJSON * >  getSolutions(void);
    const std::vector< TypeSolutionsJSON * >  getSolutions(void) const;

    virtual size_t extraEquationSolverInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraEquationSolverInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraEquationSolverInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraEquationSolverInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraEquationSolverInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraEquationSolverInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasEquation)
            ++result;
        if (flagHasVariable)
            ++result;
        if (flagHasSolutions)
            ++result;
        result += extraEquationSolverInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEquation)
          {
            if (remainder == 0)
                return "Equation";
            --remainder;
          }
        if (flagHasVariable)
          {
            if (remainder == 0)
                return "Variable";
            --remainder;
          }
        if (flagHasSolutions)
          {
            if (remainder == 0)
                return "Solutions";
            --remainder;
          }
        return extraEquationSolverInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasEquation)
          {
            if (remainder == 0)
                return extraEquationToJSON();
            --remainder;
          }
        if (flagHasVariable)
          {
            if (remainder == 0)
                return extraVariableToJSON();
            --remainder;
          }
        if (flagHasSolutions)
          {
            if (remainder == 0)
                return extraSolutionsToJSON();
            --remainder;
          }
        return extraEquationSolverInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasEquation)
          {
            if (remainder == 0)
                return extraEquationToJSON();
            --remainder;
          }
        if (flagHasVariable)
          {
            if (remainder == 0)
                return extraVariableToJSON();
            --remainder;
          }
        if (flagHasSolutions)
          {
            if (remainder == 0)
                return extraSolutionsToJSON();
            --remainder;
          }
        return extraEquationSolverInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "quation") == 0)
                    return (flagHasEquation ? extraEquationToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "olutions") == 0)
                    return (flagHasSolutions ? extraSolutionsToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ariable") == 0)
                    return (flagHasVariable ? extraVariableToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraEquationSolverInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "quation") == 0)
                    return (flagHasEquation ? extraEquationToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "olutions") == 0)
                    return (flagHasSolutions ? extraSolutionsToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ariable") == 0)
                    return (flagHasVariable ? extraVariableToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraEquationSolverInformationNuggetLookup(field_name);
      }

    void setEquation(std::string new_value)
      {
        flagHasEquation = true;
        storeEquation = new_value;
      }
    void unsetEquation(void)
      {
        flagHasEquation = false;
      }
    void setVariable(std::string new_value)
      {
        flagHasVariable = true;
        storeVariable = new_value;
      }
    void unsetVariable(void)
      {
        flagHasVariable = false;
      }
    void initSolutions(void)
      {
        if (flagHasSolutions)
          {
            for (size_t num2 = 0; num2 < storeSolutions.size(); ++num2)
              {
                storeSolutions[num2]->remove_reference();
              }
          }
        flagHasSolutions = true;
        storeSolutions.clear();
      }
    void appendSolutions(TypeSolutionsJSON * to_append)
      {
        if (!flagHasSolutions)
          {
            flagHasSolutions = true;
            storeSolutions.clear();
          }
        assert(flagHasSolutions);
        to_append->add_reference();
        storeSolutions.push_back(to_append);
      }
    void unsetSolutions(void)
      {
        if (flagHasSolutions)
          {
            for (size_t num3 = 0; num3 < storeSolutions.size(); ++num3)
              {
                storeSolutions[num3]->remove_reference();
              }
          }
        flagHasSolutions = false;
        storeSolutions.clear();
      }

    virtual void extraEquationSolverInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraEquationSolverInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraEquationSolverInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraEquationSolverInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "quation") == 0)
                    {
                    fromJSONEquation(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "olutions") == 0)
                    {
                    fromJSONSolutions(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ariable") == 0)
                    {
                    fromJSONVariable(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraEquationSolverInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "quation") == 0)
                    {
                    fromJSONEquation(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "olutions") == 0)
                    {
                    fromJSONSolutions(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ariable") == 0)
                    {
                    fromJSONVariable(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraEquationSolverInformationNuggetSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        if (flagHasEquation)
          {
            handler->start_pair("Equation");
            handler->string_value(storeEquation);
          }
        if (flagHasVariable)
          {
            handler->start_pair("Variable");
            handler->string_value(storeVariable);
          }
        if (flagHasSolutions)
          {
            handler->start_pair("Solutions");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSolutions.size(); ++num1)
              {
                storeSolutions[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static EquationSolverInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static EquationSolverInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        EquationSolverInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EquationSolverInformationNuggetJSON>, EquationSolverInformationNuggetJSON *, bool> generator("Type EquationSolverInformationNugget", ignore_extras);
            parse_json_value(text, "Text for EquationSolverInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static EquationSolverInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        EquationSolverInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<EquationSolverInformationNuggetJSON>, EquationSolverInformationNuggetJSON *, bool> generator("Type EquationSolverInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEquation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorVariable;
        JSONHoldingArrayGenerator<TypeSolutionsJSON::Generator, RCHandle<TypeSolutionsJSON>, TypeSolutionsJSON *, bool > fieldGeneratorSolutions;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "EquationSolverInformationNugget") == 0))
                throw("The key field has a value other than `EquationSolverInformationNugget'.");
            EquationSolverInformationNuggetJSON *result = new EquationSolverInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<EquationSolverInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraEquationSolverInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((EquationSolverInformationNuggetJSON *)new_result);
          }
        void finish(EquationSolverInformationNuggetJSON *result)
          {
            if (fieldGeneratorEquation.have_value)
              {
                result->setEquation(fieldGeneratorEquation.value);
                fieldGeneratorEquation.have_value = false;
              }
            if (fieldGeneratorVariable.have_value)
              {
                result->setVariable(fieldGeneratorVariable.value);
                fieldGeneratorVariable.have_value = false;
              }
            if (fieldGeneratorSolutions.have_value)
              {
                result->initSolutions();
                size_t count = fieldGeneratorSolutions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSolutions(fieldGeneratorSolutions.value[num].referenced());
                  }
                fieldGeneratorSolutions.value.clear();
                fieldGeneratorSolutions.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(EquationSolverInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "quation") == 0)
                        return &fieldGeneratorEquation;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "olutions") == 0)
                        return &fieldGeneratorSolutions;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ariable") == 0)
                        return &fieldGeneratorVariable;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorEquation("field \"Equation\" of the EquationSolverInformationNugget class"), fieldGeneratorVariable("field \"Variable\" of the EquationSolverInformationNugget class"), fieldGeneratorSolutions("field \"Solutions\" of the EquationSolverInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the EquationSolverInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEquation.reset();
            fieldGeneratorVariable.reset();
            fieldGeneratorSolutions.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* EQUATIONSOLVERINFORMATIONNUGGETJSON_H */
