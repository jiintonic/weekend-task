/* file "BasicBinaryOperationQuantityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BASICBINARYOPERATIONQUANTITYJSON_H
#define BASICBINARYOPERATIONQUANTITYJSON_H

#pragma interface

#include "QuantityJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "QuantityJSON.h"
#include "QuantityJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BasicBinaryOperationQuantityJSON : public QuantityJSON
  {
  public:
    enum TypeOperation
      {
        Operation_Addition,
        Operation_Subtraction,
        Operation_Multiplication,
        Operation_Division
      };

    static TypeOperation  stringToOperation(const char *chars);
    static const char * stringFromOperation(TypeOperation the_enum);

  private:
    bool flagHasOperation;
    TypeOperation storeOperation;
    bool flagHasLeft;
    QuantityJSON * storeLeft;
    bool flagHasRight;
    QuantityJSON * storeRight;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BasicBinaryOperationQuantityJSON(const BasicBinaryOperationQuantityJSON &);
    BasicBinaryOperationQuantityJSON & operator=(const BasicBinaryOperationQuantityJSON &other);

    JSONValue * extraOperationToJSON(void) const;
    JSONValue * extraLeftToJSON(void) const;
    JSONValue * extraRightToJSON(void) const;

    void  fromJSONOperation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeft(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRight(JSONValue *json_value, bool ignore_extras = false);


  public:
    BasicBinaryOperationQuantityJSON(void);
    virtual ~BasicBinaryOperationQuantityJSON(void);
    const char * getQuantityKind(void) const;
    bool  hasOperation(void) const;
    TypeOperation  getOperation(void);
    const TypeOperation  getOperation(void) const;
    const char * getOperationAsChars(void) const;
    std::string  getOperationAsString(void) const;
    bool  hasLeft(void) const;
    QuantityJSON *  getLeft(void);
    const QuantityJSON *  getLeft(void) const;
    bool  hasRight(void) const;
    QuantityJSON *  getRight(void);
    const QuantityJSON *  getRight(void) const;

    virtual size_t extraBasicBinaryOperationQuantityComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBasicBinaryOperationQuantityComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBasicBinaryOperationQuantityComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBasicBinaryOperationQuantityComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBasicBinaryOperationQuantityLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBasicBinaryOperationQuantityLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraQuantityComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasOperation)
            ++result;
        if (flagHasLeft)
            ++result;
        if (flagHasRight)
            ++result;
        result += extraBasicBinaryOperationQuantityComponentCount();
        return result;
      }
    const char *extraQuantityComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasOperation)
          {
            if (remainder == 0)
                return "Operation";
            --remainder;
          }
        if (flagHasLeft)
          {
            if (remainder == 0)
                return "Left";
            --remainder;
          }
        if (flagHasRight)
          {
            if (remainder == 0)
                return "Right";
            --remainder;
          }
        return extraBasicBinaryOperationQuantityComponentKey(remainder);
      }
    JSONValue *extraQuantityComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasLeft)
          {
            if (remainder == 0)
                return extraLeftToJSON();
            --remainder;
          }
        if (flagHasRight)
          {
            if (remainder == 0)
                return extraRightToJSON();
            --remainder;
          }
        return extraBasicBinaryOperationQuantityComponentValue(remainder);
      }
    const JSONValue *extraQuantityComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasOperation)
          {
            if (remainder == 0)
                return extraOperationToJSON();
            --remainder;
          }
        if (flagHasLeft)
          {
            if (remainder == 0)
                return extraLeftToJSON();
            --remainder;
          }
        if (flagHasRight)
          {
            if (remainder == 0)
                return extraRightToJSON();
            --remainder;
          }
        return extraBasicBinaryOperationQuantityComponentValue(remainder);
      }
    JSONValue *extraQuantityLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "eft") == 0)
                    return (flagHasLeft ? extraLeftToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ight") == 0)
                    return (flagHasRight ? extraRightToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBasicBinaryOperationQuantityLookup(field_name);
      }
    const JSONValue *extraQuantityLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "eft") == 0)
                    return (flagHasLeft ? extraLeftToJSON() : NULL);
                break;
            case 'O':
                if (strcmp(&(field_name[1]), "peration") == 0)
                    return (flagHasOperation ? extraOperationToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ight") == 0)
                    return (flagHasRight ? extraRightToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBasicBinaryOperationQuantityLookup(field_name);
      }

    void setOperation(TypeOperation new_value)
      {
        flagHasOperation = true;
        storeOperation = new_value;
      }
    void setOperation(const char *chars)
      {
        setOperation(stringToOperation(chars));
      }
    void setOperation(std::string the_string)
      {
        setOperation(stringToOperation(the_string.c_str()));
      }
    void unsetOperation(void)
      {
        flagHasOperation = false;
      }
    void setLeft(QuantityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLeft)
          {
            storeLeft->remove_reference();
          }
        flagHasLeft = true;
        storeLeft = new_value;
      }
    void unsetLeft(void)
      {
        if (flagHasLeft)
          {
            storeLeft->remove_reference();
          }
        flagHasLeft = false;
      }
    void setRight(QuantityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRight)
          {
            storeRight->remove_reference();
          }
        flagHasRight = true;
        storeRight = new_value;
      }
    void unsetRight(void)
      {
        if (flagHasRight)
          {
            storeRight->remove_reference();
          }
        flagHasRight = false;
      }

    virtual void extraBasicBinaryOperationQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBasicBinaryOperationQuantitySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBasicBinaryOperationQuantityLookup(key);
        if (old_field == NULL)
          {
            extraBasicBinaryOperationQuantityAppendPair(key, new_component);
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
    void extraQuantityAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "eft") == 0)
                    {
                    fromJSONLeft(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ight") == 0)
                    {
                    fromJSONRight(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBasicBinaryOperationQuantityAppendPair(key, new_component);
      }
    void extraQuantitySetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "eft") == 0)
                    {
                    fromJSONLeft(new_component, false);
                    return;
                    }
                break;
            case 'O':
                if (strcmp(&(key[1]), "peration") == 0)
                    {
                    fromJSONOperation(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ight") == 0)
                    {
                    fromJSONRight(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBasicBinaryOperationQuantitySetField(key, new_component);
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
        QuantityJSON::write_fields_as_json(handler);
        assert(flagHasOperation);
        handler->start_pair("Operation");
        switch (storeOperation)
          {
            case Operation_Addition:
                handler->string_value("Addition");
                break;
            case Operation_Subtraction:
                handler->string_value("Subtraction");
                break;
            case Operation_Multiplication:
                handler->string_value("Multiplication");
                break;
            case Operation_Division:
                handler->string_value("Division");
                break;
            default:
                assert(false);
          }
        assert(flagHasLeft);
        handler->start_pair("Left");
        storeLeft->write_as_json(handler);
        assert(flagHasRight);
        handler->start_pair("Right");
        storeRight->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOperation()))
          {
            return "When parsing the object for %what%, the \"Operation\" field was missing.";
          }
        if (!(hasLeft()))
          {
            return "When parsing the object for %what%, the \"Left\" field was missing.";
          }
        if (!(hasRight()))
          {
            return "When parsing the object for %what%, the \"Right\" field was missing.";
          }
        return NULL;
      }

    static BasicBinaryOperationQuantityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BasicBinaryOperationQuantityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BasicBinaryOperationQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BasicBinaryOperationQuantityJSON>, BasicBinaryOperationQuantityJSON *, bool> generator("Type BasicBinaryOperationQuantity", ignore_extras);
            parse_json_value(text, "Text for BasicBinaryOperationQuantityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BasicBinaryOperationQuantityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BasicBinaryOperationQuantityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BasicBinaryOperationQuantityJSON>, BasicBinaryOperationQuantityJSON *, bool> generator("Type BasicBinaryOperationQuantity", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public QuantityJSON::Generator
      {
      private:
    class FieldGeneratorOperation : public JSONStringGenerator
          {
          protected:
            FieldGeneratorOperation(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorOperation(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToOperation(result));
              }
            virtual void handle_result(TypeOperation result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorOperation, TypeOperation, TypeOperation > fieldGeneratorOperation;
        JSONHoldingGenerator<QuantityJSON::Generator, RCHandle<QuantityJSON>, QuantityJSON *, bool > fieldGeneratorLeft;
        JSONHoldingGenerator<QuantityJSON::Generator, RCHandle<QuantityJSON>, QuantityJSON *, bool > fieldGeneratorRight;
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
            if (!(strcmp(getQuantityJSONKey().c_str(), "BasicBinaryOperation") == 0))
                throw("The key field has a value other than `BasicBinaryOperation'.");
            BasicBinaryOperationQuantityJSON *result = new BasicBinaryOperationQuantityJSON();
            assert(result != NULL);
            RCHandle<BasicBinaryOperationQuantityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBasicBinaryOperationQuantityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(QuantityJSON *new_result)
          {
            handle_result((BasicBinaryOperationQuantityJSON *)new_result);
          }
        void finish(BasicBinaryOperationQuantityJSON *result)
          {
            if (fieldGeneratorOperation.have_value)
              {
                result->setOperation(fieldGeneratorOperation.value);
                fieldGeneratorOperation.have_value = false;
              }
            else if (!(result->hasOperation()))
              {
                error("When parsing the object for %what%, the \"Operation\" field was missing.");
              }
            if (fieldGeneratorLeft.have_value)
              {
                result->setLeft(fieldGeneratorLeft.value.referenced());
                fieldGeneratorLeft.have_value = false;
              }
            else if (!(result->hasLeft()))
              {
                error("When parsing the object for %what%, the \"Left\" field was missing.");
              }
            if (fieldGeneratorRight.have_value)
              {
                result->setRight(fieldGeneratorRight.value.referenced());
                fieldGeneratorRight.have_value = false;
              }
            else if (!(result->hasRight()))
              {
                error("When parsing the object for %what%, the \"Right\" field was missing.");
              }
            QuantityJSON::Generator::finish(result);
          }
        virtual void handle_result(BasicBinaryOperationQuantityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "eft") == 0)
                        return &fieldGeneratorLeft;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "peration") == 0)
                        return &fieldGeneratorOperation;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ight") == 0)
                        return &fieldGeneratorRight;
                    break;
                default:
                    break;
              }
            return QuantityJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : QuantityJSON::Generator(ignore_extras), fieldGeneratorOperation("field \"Operation\" of the BasicBinaryOperationQuantity class"), fieldGeneratorLeft("field \"Left\" of the BasicBinaryOperationQuantity class", ignore_extras), fieldGeneratorRight("field \"Right\" of the BasicBinaryOperationQuantity class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BasicBinaryOperationQuantity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOperation.reset();
            fieldGeneratorLeft.reset();
            fieldGeneratorRight.reset();
            QuantityJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BASICBINARYOPERATIONQUANTITYJSON_H */
