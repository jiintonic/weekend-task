/* file "MoneyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MONEYJSON_H
#define MONEYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MoneyJSON : public ReferenceCounted
  {
  private:
    bool flagHasCode;
    std::string storeCode;
    bool flagHasSymbol;
    std::string storeSymbol;
    bool flagHasAmount;
    double storeAmount;
    std::string textStoreAmount;

    MoneyJSON(const MoneyJSON &);
    MoneyJSON & operator=(const MoneyJSON &other);

    void  fromJSONCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAmount(JSONValue *json_value, bool ignore_extras = false);


  public:
    MoneyJSON(void);
    virtual ~MoneyJSON(void);
    bool  hasCode(void) const;
    std::string  getCode(void);
    const std::string  getCode(void) const;
    bool  hasSymbol(void) const;
    std::string  getSymbol(void);
    const std::string  getSymbol(void) const;
    bool  hasAmount(void) const;
    double  getAmount(void);
    const double  getAmount(void) const;
    std::string  getAmountAsText(void) const;


    void setCode(std::string new_value)
      {
        flagHasCode = true;
        storeCode = new_value;
      }
    void unsetCode(void)
      {
        flagHasCode = false;
      }
    void setSymbol(std::string new_value)
      {
        flagHasSymbol = true;
        storeSymbol = new_value;
      }
    void unsetSymbol(void)
      {
        flagHasSymbol = false;
      }
    void setAmount(double new_value)
      {
        flagHasAmount = true;
        storeAmount = new_value;
        textStoreAmount = "";
      }
    void setAmountText(std::string new_value)
      {
        flagHasAmount = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Amount of MoneyJSON is not a valid number.");
        textStoreAmount = new_value;
      }
    void unsetAmount(void)
      {
        flagHasAmount = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasCode);
        handler->start_pair("Code");
        handler->string_value(storeCode);
        assert(flagHasSymbol);
        handler->start_pair("Symbol");
        handler->string_value(storeSymbol);
        assert(flagHasAmount);
        handler->start_pair("Amount");
        if (textStoreAmount != "")
            handler->number_value(textStoreAmount.c_str());
        else if (((double)(long int)storeAmount) == storeAmount)
            handler->number_value((long int)storeAmount);
        else
            handler->number_value(storeAmount);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCode()))
          {
            return "When parsing the object for %what%, the \"Code\" field was missing.";
          }
        if (!(hasSymbol()))
          {
            return "When parsing the object for %what%, the \"Symbol\" field was missing.";
          }
        if (!(hasAmount()))
          {
            return "When parsing the object for %what%, the \"Amount\" field was missing.";
          }
        return NULL;
      }

    static MoneyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MoneyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MoneyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool> generator("Type Money", ignore_extras);
            parse_json_value(text, "Text for MoneyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MoneyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MoneyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MoneyJSON>, MoneyJSON *, bool> generator("Type Money", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSymbol;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAmount;


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
            MoneyJSON *result = new MoneyJSON();
            assert(result != NULL);
            RCHandle<MoneyJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MoneyJSON *result)
          {
            if (fieldGeneratorCode.have_value)
              {
                result->setCode(fieldGeneratorCode.value);
                fieldGeneratorCode.have_value = false;
              }
            else if (!(result->hasCode()))
              {
                error("When parsing the object for %what%, the \"Code\" field was missing.");
              }
            if (fieldGeneratorSymbol.have_value)
              {
                result->setSymbol(fieldGeneratorSymbol.value);
                fieldGeneratorSymbol.have_value = false;
              }
            else if (!(result->hasSymbol()))
              {
                error("When parsing the object for %what%, the \"Symbol\" field was missing.");
              }
            if (fieldGeneratorAmount.have_value)
              {
                result->setAmountText(fieldGeneratorAmount.value);
                fieldGeneratorAmount.have_value = false;
              }
            else if (!(result->hasAmount()))
              {
                error("When parsing the object for %what%, the \"Amount\" field was missing.");
              }
          }
        virtual void handle_result(MoneyJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "mount") == 0)
                        return &fieldGeneratorAmount;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ode") == 0)
                        return &fieldGeneratorCode;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ymbol") == 0)
                        return &fieldGeneratorSymbol;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCode("field \"Code\" of the Money class"), fieldGeneratorSymbol("field \"Symbol\" of the Money class"), fieldGeneratorAmount("field \"Amount\" of the Money class")
          {
            set_what("the Money class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCode.reset();
            fieldGeneratorSymbol.reset();
            fieldGeneratorAmount.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MONEYJSON_H */
