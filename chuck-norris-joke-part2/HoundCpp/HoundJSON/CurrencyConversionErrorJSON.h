/* file "CurrencyConversionErrorJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CURRENCYCONVERSIONERRORJSON_H
#define CURRENCYCONVERSIONERRORJSON_H

#pragma interface

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


class CurrencyConversionErrorJSON : public ReferenceCounted
  {
  public:
    enum TypeTypeKnownValues
      {
        Type_BadResponse,
        Type_CodeNotFound,
        Type__none
      };
    struct TypeType
      {
        bool in_known_list;
        std::string string_value;
        TypeTypeKnownValues list_value;

        TypeType(void);
        TypeType(const TypeType &other);
        TypeType(TypeTypeKnownValues other);
        bool  operator==(const TypeType &other) const;
        bool  operator!=(const TypeType &other) const;
        bool  operator<(const TypeType &other) const;
        bool  operator>(const TypeType &other) const;
        bool  operator>=(const TypeType &other) const;
        bool  operator<=(const TypeType &other) const;

      };

    static TypeTypeKnownValues  stringToType(const char *chars);
    static const char * stringFromType(TypeTypeKnownValues the_enum);

  private:
    bool flagHasType;
    TypeType storeType;
    bool flagHasCode;
    std::string storeCode;

    CurrencyConversionErrorJSON(const CurrencyConversionErrorJSON &);
    CurrencyConversionErrorJSON & operator=(const CurrencyConversionErrorJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCode(JSONValue *json_value, bool ignore_extras = false);


  public:
    CurrencyConversionErrorJSON(void);
    virtual ~CurrencyConversionErrorJSON(void);
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasCode(void) const;
    std::string  getCode(void);
    const std::string  getCode(void) const;


    void setType(TypeType new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void setType(const char *chars)
      {
        TypeTypeKnownValues known = stringToType(chars);
        TypeType new_value;
        if (known == Type__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void setType(TypeTypeKnownValues new_value)
      {
        TypeType new_full_value;
        assert(new_value != Type__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setType(new_full_value);
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void setCode(std::string new_value)
      {
        flagHasCode = true;
        storeCode = new_value;
      }
    void unsetCode(void)
      {
        flagHasCode = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasType);
        handler->start_pair("Type");
        if (storeType.in_known_list)
          {
            switch (storeType.list_value)
              {
                case Type_BadResponse:
                    handler->string_value("BadResponse");
                    break;
                case Type_CodeNotFound:
                    handler->string_value("CodeNotFound");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeType.string_value);
          }
        if (flagHasCode)
          {
            handler->start_pair("Code");
            handler->string_value(storeCode);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static CurrencyConversionErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CurrencyConversionErrorJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CurrencyConversionErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionErrorJSON>, CurrencyConversionErrorJSON *, bool> generator("Type CurrencyConversionError", ignore_extras);
            parse_json_value(text, "Text for CurrencyConversionErrorJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CurrencyConversionErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CurrencyConversionErrorJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CurrencyConversionErrorJSON>, CurrencyConversionErrorJSON *, bool> generator("Type CurrencyConversionError", ignore_extras);
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
    class FieldGeneratorType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTypeKnownValues known = stringToType(result);
                TypeType new_value;
                if (known == Type__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCode;


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
            CurrencyConversionErrorJSON *result = new CurrencyConversionErrorJSON();
            assert(result != NULL);
            RCHandle<CurrencyConversionErrorJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(CurrencyConversionErrorJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorCode.have_value)
              {
                result->setCode(fieldGeneratorCode.value);
                fieldGeneratorCode.have_value = false;
              }
          }
        virtual void handle_result(CurrencyConversionErrorJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ode") == 0)
                        return &fieldGeneratorCode;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the CurrencyConversionError class"), fieldGeneratorCode("field \"Code\" of the CurrencyConversionError class")
          {
            set_what("the CurrencyConversionError class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorCode.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CURRENCYCONVERSIONERRORJSON_H */
