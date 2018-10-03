/* file "CurrencyConversionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CURRENCYCONVERSIONJSON_H
#define CURRENCYCONVERSIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MoneyJSON.h"
#include "MoneyJSON.h"
#include "CurrencyConversionErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CurrencyConversionJSON : public ReferenceCounted
  {
  public:
    class TypeOutputValueJSON : public ReferenceCounted
      {
      private:
        bool flagHasConvertedValue;
        MoneyJSON * storeConvertedValue;
        bool flagHasError;
        CurrencyConversionErrorJSON * storeError;

        TypeOutputValueJSON(const TypeOutputValueJSON &);
        TypeOutputValueJSON & operator=(const TypeOutputValueJSON &other);

        void  fromJSONConvertedValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeOutputValueJSON(void);
        virtual ~TypeOutputValueJSON(void);
        bool  hasConvertedValue(void) const;
        MoneyJSON *  getConvertedValue(void);
        const MoneyJSON *  getConvertedValue(void) const;
        bool  hasError(void) const;
        CurrencyConversionErrorJSON *  getError(void);
        const CurrencyConversionErrorJSON *  getError(void) const;


        void setConvertedValue(MoneyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasConvertedValue)
              {
                storeConvertedValue->remove_reference();
              }
            flagHasConvertedValue = true;
            storeConvertedValue = new_value;
          }
        void unsetConvertedValue(void)
          {
            if (flagHasConvertedValue)
              {
                storeConvertedValue->remove_reference();
              }
            flagHasConvertedValue = false;
          }
        void setError(CurrencyConversionErrorJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasError)
              {
                storeError->remove_reference();
              }
            flagHasError = true;
            storeError = new_value;
          }
        void unsetError(void)
          {
            if (flagHasError)
              {
                storeError->remove_reference();
              }
            flagHasError = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasConvertedValue);
            handler->start_pair("ConvertedValue");
            storeConvertedValue->write_as_json(handler);
            if (flagHasError)
              {
                handler->start_pair("Error");
                storeError->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasConvertedValue()))
              {
                return "When parsing the object for %what%, the \"ConvertedValue\" field was missing.";
              }
            return NULL;
          }

        static TypeOutputValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeOutputValueJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeOutputValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeOutputValueJSON>, TypeOutputValueJSON *, bool> generator("Type TypeOutputValue", ignore_extras);
                parse_json_value(text, "Text for TypeOutputValueJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeOutputValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeOutputValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeOutputValueJSON>, TypeOutputValueJSON *, bool> generator("Type TypeOutputValue", ignore_extras);
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
            JSONHoldingGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorConvertedValue;
            JSONHoldingGenerator<CurrencyConversionErrorJSON::Generator, RCHandle<CurrencyConversionErrorJSON>, CurrencyConversionErrorJSON *, bool > fieldGeneratorError;


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
                TypeOutputValueJSON *result = new TypeOutputValueJSON();
                assert(result != NULL);
                RCHandle<TypeOutputValueJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeOutputValueJSON *result)
              {
                if (fieldGeneratorConvertedValue.have_value)
                  {
                    result->setConvertedValue(fieldGeneratorConvertedValue.value.referenced());
                    fieldGeneratorConvertedValue.have_value = false;
                  }
                else if (!(result->hasConvertedValue()))
                  {
                    error("When parsing the object for %what%, the \"ConvertedValue\" field was missing.");
                  }
                if (fieldGeneratorError.have_value)
                  {
                    result->setError(fieldGeneratorError.value.referenced());
                    fieldGeneratorError.have_value = false;
                  }
              }
            virtual void handle_result(TypeOutputValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "onvertedValue") == 0)
                            return &fieldGeneratorConvertedValue;
                        break;
                    case 'E':
                        if (strcmp(&(field_name[1]), "rror") == 0)
                            return &fieldGeneratorError;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorConvertedValue("field \"ConvertedValue\" of the TypeOutputValue class", ignore_extras), fieldGeneratorError("field \"Error\" of the TypeOutputValue class", ignore_extras)
              {
                set_what("the TypeOutputValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorConvertedValue.reset();
                fieldGeneratorError.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasInputValue;
    std::vector< MoneyJSON * > storeInputValue;
    bool flagHasOutputValue;
    std::vector< TypeOutputValueJSON * > storeOutputValue;

    CurrencyConversionJSON(const CurrencyConversionJSON &);
    CurrencyConversionJSON & operator=(const CurrencyConversionJSON &other);

    void  fromJSONInputValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    CurrencyConversionJSON(void);
    virtual ~CurrencyConversionJSON(void);
    bool  hasInputValue(void) const;
    size_t  countOfInputValue(void) const;
    MoneyJSON *  elementOfInputValue(size_t element_num);
    const MoneyJSON *  elementOfInputValue(size_t element_num) const;
    std::vector< MoneyJSON * >  getInputValue(void);
    const std::vector< MoneyJSON * >  getInputValue(void) const;
    bool  hasOutputValue(void) const;
    size_t  countOfOutputValue(void) const;
    TypeOutputValueJSON *  elementOfOutputValue(size_t element_num);
    const TypeOutputValueJSON *  elementOfOutputValue(size_t element_num) const;
    std::vector< TypeOutputValueJSON * >  getOutputValue(void);
    const std::vector< TypeOutputValueJSON * >  getOutputValue(void) const;


    void initInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num3 = 0; num3 < storeInputValue.size(); ++num3)
              {
                storeInputValue[num3]->remove_reference();
              }
          }
        flagHasInputValue = true;
        storeInputValue.clear();
      }
    void appendInputValue(MoneyJSON * to_append)
      {
        if (!flagHasInputValue)
          {
            flagHasInputValue = true;
            storeInputValue.clear();
          }
        assert(flagHasInputValue);
        to_append->add_reference();
        storeInputValue.push_back(to_append);
      }
    void unsetInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num4 = 0; num4 < storeInputValue.size(); ++num4)
              {
                storeInputValue[num4]->remove_reference();
              }
          }
        flagHasInputValue = false;
        storeInputValue.clear();
      }
    void initOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num5 = 0; num5 < storeOutputValue.size(); ++num5)
              {
                storeOutputValue[num5]->remove_reference();
              }
          }
        flagHasOutputValue = true;
        storeOutputValue.clear();
      }
    void appendOutputValue(TypeOutputValueJSON * to_append)
      {
        if (!flagHasOutputValue)
          {
            flagHasOutputValue = true;
            storeOutputValue.clear();
          }
        assert(flagHasOutputValue);
        to_append->add_reference();
        storeOutputValue.push_back(to_append);
      }
    void unsetOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num6 = 0; num6 < storeOutputValue.size(); ++num6)
              {
                storeOutputValue[num6]->remove_reference();
              }
          }
        flagHasOutputValue = false;
        storeOutputValue.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasInputValue);
        handler->start_pair("InputValue");
        assert(storeInputValue.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeInputValue.size(); ++num1)
          {
            storeInputValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasOutputValue);
        handler->start_pair("OutputValue");
        assert(storeOutputValue.size() >= 1);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeOutputValue.size(); ++num2)
          {
            storeOutputValue[num2]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasInputValue()))
          {
            return "When parsing the object for %what%, the \"InputValue\" field was missing.";
          }
        if (!(hasOutputValue()))
          {
            return "When parsing the object for %what%, the \"OutputValue\" field was missing.";
          }
        return NULL;
      }

    static CurrencyConversionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CurrencyConversionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CurrencyConversionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionJSON>, CurrencyConversionJSON *, bool> generator("Type CurrencyConversion", ignore_extras);
            parse_json_value(text, "Text for CurrencyConversionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CurrencyConversionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CurrencyConversionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionJSON>, CurrencyConversionJSON *, bool> generator("Type CurrencyConversion", ignore_extras);
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
        JSONHoldingArrayGenerator<MoneyJSON::Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool > fieldGeneratorInputValue;
        JSONHoldingArrayGenerator<TypeOutputValueJSON::Generator, RCHandle<TypeOutputValueJSON>, TypeOutputValueJSON *, bool > fieldGeneratorOutputValue;


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
            CurrencyConversionJSON *result = new CurrencyConversionJSON();
            assert(result != NULL);
            RCHandle<CurrencyConversionJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(CurrencyConversionJSON *result)
          {
            if (fieldGeneratorInputValue.have_value)
              {
                result->initInputValue();
                size_t count = fieldGeneratorInputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInputValue(fieldGeneratorInputValue.value[num].referenced());
                  }
                fieldGeneratorInputValue.value.clear();
                fieldGeneratorInputValue.have_value = false;
              }
            else if (!(result->hasInputValue()))
              {
                error("When parsing the object for %what%, the \"InputValue\" field was missing.");
              }
            if (fieldGeneratorOutputValue.have_value)
              {
                result->initOutputValue();
                size_t count = fieldGeneratorOutputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputValue(fieldGeneratorOutputValue.value[num].referenced());
                  }
                fieldGeneratorOutputValue.value.clear();
                fieldGeneratorOutputValue.have_value = false;
              }
            else if (!(result->hasOutputValue()))
              {
                error("When parsing the object for %what%, the \"OutputValue\" field was missing.");
              }
          }
        virtual void handle_result(CurrencyConversionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "nputValue") == 0)
                        return &fieldGeneratorInputValue;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputValue") == 0)
                        return &fieldGeneratorOutputValue;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorInputValue("field \"InputValue\" of the CurrencyConversion class", ignore_extras), fieldGeneratorOutputValue("field \"OutputValue\" of the CurrencyConversion class", ignore_extras)
          {
            set_what("the CurrencyConversion class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorInputValue.reset();
            fieldGeneratorOutputValue.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CURRENCYCONVERSIONJSON_H */
