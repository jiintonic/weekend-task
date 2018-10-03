/* file "StockListingRequestTypeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOCKLISTINGREQUESTTYPEJSON_H
#define STOCKLISTINGREQUESTTYPEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StockListingRequestTypeJSON : public ReferenceCounted
  {
  public:
    enum TypeValueKnownValues
      {
        Value_CompanyName,
        Value_Symbol,
        Value_IndexName,
        Value__none
      };
    struct TypeValue
      {
        bool in_known_list;
        std::string string_value;
        TypeValueKnownValues list_value;

        TypeValue(void);
        TypeValue(const TypeValue &other);
        TypeValue(TypeValueKnownValues other);
        bool  operator==(const TypeValue &other) const;
        bool  operator!=(const TypeValue &other) const;
        bool  operator<(const TypeValue &other) const;
        bool  operator>(const TypeValue &other) const;
        bool  operator>=(const TypeValue &other) const;
        bool  operator<=(const TypeValue &other) const;

      };

    static TypeValueKnownValues  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValueKnownValues the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    StockListingRequestTypeJSON(const StockListingRequestTypeJSON &);
    StockListingRequestTypeJSON & operator=(const StockListingRequestTypeJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    StockListingRequestTypeJSON(void);
    StockListingRequestTypeJSON(TypeValue init_value);
    StockListingRequestTypeJSON(const char *init_value);
    StockListingRequestTypeJSON(std::string init_value);
    StockListingRequestTypeJSON(TypeValueKnownValues init_value);
    virtual ~StockListingRequestTypeJSON(void);
    bool  hasValue(void) const;
    TypeValue  getValue(void);
    const TypeValue  getValue(void) const;
    const char * getValueAsChars(void) const;
    std::string  getValueAsString(void) const;


    void setValue(TypeValue new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void setValue(const char *chars)
      {
        TypeValueKnownValues known = stringToValue(chars);
        TypeValue new_value;
        if (known == Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setValue(new_value);
      }
    void setValue(std::string the_string)
      {
        setValue(the_string.c_str());
      }
    void setValue(TypeValueKnownValues new_value)
      {
        TypeValue new_full_value;
        assert(new_value != Value__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setValue(new_full_value);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        if (storeValue.in_known_list)
          {
            switch (storeValue.list_value)
              {
                case Value_CompanyName:
                    handler->string_value("CompanyName");
                    break;
                case Value_Symbol:
                    handler->string_value("Symbol");
                    break;
                case Value_IndexName:
                    handler->string_value("IndexName");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeValue.string_value);
          }
      }

    static StockListingRequestTypeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StockListingRequestTypeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StockListingRequestTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool> generator("Type StockListingRequestType", ignore_extras);
            parse_json_value(text, "Text for StockListingRequestTypeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StockListingRequestTypeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StockListingRequestTypeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StockListingRequestTypeJSON>, StockListingRequestTypeJSON *, bool> generator("Type StockListingRequestType", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class FieldGeneratorValue : public JSONStringGenerator
      {
      protected:
        FieldGeneratorValue(const char *what)
          {
            set_what(what);
          }
        FieldGeneratorValue(void)
          {
          }
        void handle_result(const char *result)
          {
            TypeValueKnownValues known = stringToValue(result);
            TypeValue new_value;
            if (known == Value__none)
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
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            StockListingRequestTypeJSON *result = new StockListingRequestTypeJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(StockListingRequestTypeJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* STOCKLISTINGREQUESTTYPEJSON_H */
