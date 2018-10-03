/* file "RandomNumberGeneratorNumberRequestResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RANDOMNUMBERGENERATORNUMBERREQUESTRESULTJSON_H
#define RANDOMNUMBERGENERATORNUMBERREQUESTRESULTJSON_H

#pragma interface

#include "RandomNumberGeneratorRequestResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class RandomNumberGeneratorNumberRequestResultJSON : public RandomNumberGeneratorRequestResultJSON
  {
  public:
    enum TypeNumberType
      {
        NumberType_Integer,
        NumberType_Rational
      };

    static TypeNumberType  stringToNumberType(const char *chars);
    static const char * stringFromNumberType(TypeNumberType the_enum);

  private:
    bool flagHasValues;
    std::vector< double > storeValues;
    bool flagHasNumberType;
    TypeNumberType storeNumberType;
    bool flagHasUpperBound;
    double storeUpperBound;
    std::string textStoreUpperBound;
    bool flagHasLowerBound;
    double storeLowerBound;
    std::string textStoreLowerBound;

    RandomNumberGeneratorNumberRequestResultJSON(const RandomNumberGeneratorNumberRequestResultJSON &);
    RandomNumberGeneratorNumberRequestResultJSON & operator=(const RandomNumberGeneratorNumberRequestResultJSON &other);

    JSONValue * extraValuesToJSON(void) const;
    JSONValue * extraNumberTypeToJSON(void) const;
    JSONValue * extraUpperBoundToJSON(void) const;
    JSONValue * extraLowerBoundToJSON(void) const;

    void  fromJSONValues(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumberType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUpperBound(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLowerBound(JSONValue *json_value, bool ignore_extras = false);


  public:
    RandomNumberGeneratorNumberRequestResultJSON(void);
    virtual ~RandomNumberGeneratorNumberRequestResultJSON(void);
    const char * getRandomNumberRequestKind(void) const;
    bool  hasValues(void) const;
    size_t  countOfValues(void) const;
    double  elementOfValues(size_t element_num);
    const double  elementOfValues(size_t element_num) const;
    std::vector< double >  getValues(void);
    const std::vector< double >  getValues(void) const;
    bool  hasNumberType(void) const;
    TypeNumberType  getNumberType(void);
    const TypeNumberType  getNumberType(void) const;
    const char * getNumberTypeAsChars(void) const;
    std::string  getNumberTypeAsString(void) const;
    bool  hasUpperBound(void) const;
    double  getUpperBound(void);
    const double  getUpperBound(void) const;
    std::string  getUpperBoundAsText(void) const;
    bool  hasLowerBound(void) const;
    double  getLowerBound(void);
    const double  getLowerBound(void) const;
    std::string  getLowerBoundAsText(void) const;

    size_t extraRandomNumberGeneratorRequestResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasValues)
            ++result;
        if (flagHasNumberType)
            ++result;
        if (flagHasUpperBound)
            ++result;
        if (flagHasLowerBound)
            ++result;
        return result;
      }
    const char *extraRandomNumberGeneratorRequestResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return "Values";
            --remainder;
          }
        if (flagHasNumberType)
          {
            if (remainder == 0)
                return "NumberType";
            --remainder;
          }
        if (flagHasUpperBound)
          {
            if (remainder == 0)
                return "UpperBound";
            --remainder;
          }
        if (flagHasLowerBound)
          {
            if (remainder == 0)
                return "LowerBound";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return extraValuesToJSON();
            --remainder;
          }
        if (flagHasNumberType)
          {
            if (remainder == 0)
                return extraNumberTypeToJSON();
            --remainder;
          }
        if (flagHasUpperBound)
          {
            if (remainder == 0)
                return extraUpperBoundToJSON();
            --remainder;
          }
        if (flagHasLowerBound)
          {
            if (remainder == 0)
                return extraLowerBoundToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasValues)
          {
            if (remainder == 0)
                return extraValuesToJSON();
            --remainder;
          }
        if (flagHasNumberType)
          {
            if (remainder == 0)
                return extraNumberTypeToJSON();
            --remainder;
          }
        if (flagHasUpperBound)
          {
            if (remainder == 0)
                return extraUpperBoundToJSON();
            --remainder;
          }
        if (flagHasLowerBound)
          {
            if (remainder == 0)
                return extraLowerBoundToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "owerBound") == 0)
                    return (flagHasLowerBound ? extraLowerBoundToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umberType") == 0)
                    return (flagHasNumberType ? extraNumberTypeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "pperBound") == 0)
                    return (flagHasUpperBound ? extraUpperBoundToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "alues") == 0)
                    return (flagHasValues ? extraValuesToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'L':
                if (strcmp(&(field_name[1]), "owerBound") == 0)
                    return (flagHasLowerBound ? extraLowerBoundToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umberType") == 0)
                    return (flagHasNumberType ? extraNumberTypeToJSON() : NULL);
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "pperBound") == 0)
                    return (flagHasUpperBound ? extraUpperBoundToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "alues") == 0)
                    return (flagHasValues ? extraValuesToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void initValues(void)
      {
        flagHasValues = true;
        storeValues.clear();
      }
    void appendValues(double to_append)
      {
        if (!flagHasValues)
          {
            flagHasValues = true;
            storeValues.clear();
          }
        assert(flagHasValues);
        storeValues.push_back(to_append);
      }
    void unsetValues(void)
      {
        flagHasValues = false;
        storeValues.clear();
      }
    void setNumberType(TypeNumberType new_value)
      {
        flagHasNumberType = true;
        storeNumberType = new_value;
      }
    void setNumberType(const char *chars)
      {
        setNumberType(stringToNumberType(chars));
      }
    void setNumberType(std::string the_string)
      {
        setNumberType(stringToNumberType(the_string.c_str()));
      }
    void unsetNumberType(void)
      {
        flagHasNumberType = false;
      }
    void setUpperBound(double new_value)
      {
        flagHasUpperBound = true;
        storeUpperBound = new_value;
        textStoreUpperBound = "";
      }
    void setUpperBoundText(std::string new_value)
      {
        flagHasUpperBound = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field UpperBound of RandomNumberGeneratorNumberRequestResultJSON is not a valid number.");
        textStoreUpperBound = new_value;
      }
    void unsetUpperBound(void)
      {
        flagHasUpperBound = false;
      }
    void setLowerBound(double new_value)
      {
        flagHasLowerBound = true;
        storeLowerBound = new_value;
        textStoreLowerBound = "";
      }
    void setLowerBoundText(std::string new_value)
      {
        flagHasLowerBound = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field LowerBound of RandomNumberGeneratorNumberRequestResultJSON is not a valid number.");
        textStoreLowerBound = new_value;
      }
    void unsetLowerBound(void)
      {
        flagHasLowerBound = false;
      }

    void extraRandomNumberGeneratorRequestResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "owerBound") == 0)
                    {
                    fromJSONLowerBound(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umberType") == 0)
                    {
                    fromJSONNumberType(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "pperBound") == 0)
                    {
                    fromJSONUpperBound(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "alues") == 0)
                    {
                    fromJSONValues(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }
    void extraRandomNumberGeneratorRequestResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'L':
                if (strcmp(&(key[1]), "owerBound") == 0)
                    {
                    fromJSONLowerBound(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umberType") == 0)
                    {
                    fromJSONNumberType(new_component, false);
                    return;
                    }
                break;
            case 'U':
                if (strcmp(&(key[1]), "pperBound") == 0)
                    {
                    fromJSONUpperBound(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "alues") == 0)
                    {
                    fromJSONValues(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        RandomNumberGeneratorRequestResultJSON::write_fields_as_json(handler);
        if (flagHasValues)
          {
            handler->start_pair("Values");
            assert(storeValues.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeValues.size(); ++num1)
              {
                if (((double)(long int)storeValues[num1]) == storeValues[num1])
                    handler->number_value((long int)storeValues[num1]);
                else
                    handler->number_value(storeValues[num1]);
              }
            handler->finish_array();
          }
        assert(flagHasNumberType);
        handler->start_pair("NumberType");
        switch (storeNumberType)
          {
            case NumberType_Integer:
                handler->string_value("Integer");
                break;
            case NumberType_Rational:
                handler->string_value("Rational");
                break;
            default:
                assert(false);
          }
        assert(flagHasUpperBound);
        handler->start_pair("UpperBound");
        if (textStoreUpperBound != "")
            handler->number_value(textStoreUpperBound.c_str());
        else if (((double)(long int)storeUpperBound) == storeUpperBound)
            handler->number_value((long int)storeUpperBound);
        else
            handler->number_value(storeUpperBound);
        assert(flagHasLowerBound);
        handler->start_pair("LowerBound");
        if (textStoreLowerBound != "")
            handler->number_value(textStoreLowerBound.c_str());
        else if (((double)(long int)storeLowerBound) == storeLowerBound)
            handler->number_value((long int)storeLowerBound);
        else
            handler->number_value(storeLowerBound);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumberType()))
          {
            return "When parsing the object for %what%, the \"NumberType\" field was missing.";
          }
        if (!(hasUpperBound()))
          {
            return "When parsing the object for %what%, the \"UpperBound\" field was missing.";
          }
        if (!(hasLowerBound()))
          {
            return "When parsing the object for %what%, the \"LowerBound\" field was missing.";
          }
        return NULL;
      }

    static RandomNumberGeneratorNumberRequestResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static RandomNumberGeneratorNumberRequestResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        RandomNumberGeneratorNumberRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorNumberRequestResultJSON>, RandomNumberGeneratorNumberRequestResultJSON *, bool> generator("Type RandomNumberGeneratorNumberRequestResult", ignore_extras);
            parse_json_value(text, "Text for RandomNumberGeneratorNumberRequestResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static RandomNumberGeneratorNumberRequestResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        RandomNumberGeneratorNumberRequestResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorNumberRequestResultJSON>, RandomNumberGeneratorNumberRequestResultJSON *, bool> generator("Type RandomNumberGeneratorNumberRequestResult", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public RandomNumberGeneratorRequestResultJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValues;
    class FieldGeneratorNumberType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNumberType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNumberType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNumberType(result));
              }
            virtual void handle_result(TypeNumberType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNumberType, TypeNumberType, TypeNumberType > fieldGeneratorNumberType;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorUpperBound;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLowerBound;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getRandomNumberGeneratorRequestResultJSONKey().c_str(), "NumberRequest") == 0))
                throw("The key field has a value other than `NumberRequest'.");
            RandomNumberGeneratorNumberRequestResultJSON *result = new RandomNumberGeneratorNumberRequestResultJSON();
            assert(result != NULL);
            RCHandle<RandomNumberGeneratorNumberRequestResultJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(RandomNumberGeneratorRequestResultJSON *new_result)
          {
            handle_result((RandomNumberGeneratorNumberRequestResultJSON *)new_result);
          }
        void finish(RandomNumberGeneratorNumberRequestResultJSON *result)
          {
            if (fieldGeneratorValues.have_value)
              {
                result->initValues();
                size_t count = fieldGeneratorValues.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendValues(atof(fieldGeneratorValues.value[num].c_str()));
                  }
                fieldGeneratorValues.value.clear();
                fieldGeneratorValues.have_value = false;
              }
            if (fieldGeneratorNumberType.have_value)
              {
                result->setNumberType(fieldGeneratorNumberType.value);
                fieldGeneratorNumberType.have_value = false;
              }
            else if (!(result->hasNumberType()))
              {
                error("When parsing the object for %what%, the \"NumberType\" field was missing.");
              }
            if (fieldGeneratorUpperBound.have_value)
              {
                result->setUpperBoundText(fieldGeneratorUpperBound.value);
                fieldGeneratorUpperBound.have_value = false;
              }
            else if (!(result->hasUpperBound()))
              {
                error("When parsing the object for %what%, the \"UpperBound\" field was missing.");
              }
            if (fieldGeneratorLowerBound.have_value)
              {
                result->setLowerBoundText(fieldGeneratorLowerBound.value);
                fieldGeneratorLowerBound.have_value = false;
              }
            else if (!(result->hasLowerBound()))
              {
                error("When parsing the object for %what%, the \"LowerBound\" field was missing.");
              }
            RandomNumberGeneratorRequestResultJSON::Generator::finish(result);
          }
        virtual void handle_result(RandomNumberGeneratorNumberRequestResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strcmp(&(field_name[1]), "owerBound") == 0)
                        return &fieldGeneratorLowerBound;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umberType") == 0)
                        return &fieldGeneratorNumberType;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "pperBound") == 0)
                        return &fieldGeneratorUpperBound;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alues") == 0)
                        return &fieldGeneratorValues;
                    break;
                default:
                    break;
              }
            return RandomNumberGeneratorRequestResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : RandomNumberGeneratorRequestResultJSON::Generator(ignore_extras), fieldGeneratorValues("field \"Values\" of the RandomNumberGeneratorNumberRequestResult class"), fieldGeneratorNumberType("field \"NumberType\" of the RandomNumberGeneratorNumberRequestResult class"), fieldGeneratorUpperBound("field \"UpperBound\" of the RandomNumberGeneratorNumberRequestResult class"), fieldGeneratorLowerBound("field \"LowerBound\" of the RandomNumberGeneratorNumberRequestResult class")
          {
            set_what("the RandomNumberGeneratorNumberRequestResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorValues.reset();
            fieldGeneratorNumberType.reset();
            fieldGeneratorUpperBound.reset();
            fieldGeneratorLowerBound.reset();
            RandomNumberGeneratorRequestResultJSON::Generator::reset();
          }
      };
  };

#endif /* RANDOMNUMBERGENERATORNUMBERREQUESTRESULTJSON_H */
