/* file "IconJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ICONJSON_H
#define ICONJSON_H

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


class IconJSON : public ReferenceCounted
  {
  public:
    enum TypeValue
      {
        Value_Neutral,
        Value_Happy,
        Value_Sad,
        Value_Angry,
        Value_Coffee
      };

    static TypeValue  stringToValue(const char *chars);
    static const char * stringFromValue(TypeValue the_enum);

  private:
    bool flagHasValue;
    TypeValue storeValue;

    IconJSON(const IconJSON &);
    IconJSON & operator=(const IconJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    IconJSON(void);
    IconJSON(TypeValue init_value);
    IconJSON(const char *init_value);
    IconJSON(std::string init_value);
    virtual ~IconJSON(void);
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
        setValue(stringToValue(chars));
      }
    void setValue(std::string the_string)
      {
        setValue(stringToValue(the_string.c_str()));
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        switch (storeValue)
          {
            case Value_Neutral:
                handler->string_value("Neutral");
                break;
            case Value_Happy:
                handler->string_value("Happy");
                break;
            case Value_Sad:
                handler->string_value("Sad");
                break;
            case Value_Angry:
                handler->string_value("Angry");
                break;
            case Value_Coffee:
                handler->string_value("Coffee");
                break;
            default:
                assert(false);
          }
      }

    static IconJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static IconJSON *from_text(const char *text, bool ignore_extras = false)
      {
        IconJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IconJSON>, IconJSON *, bool> generator("Type Icon", ignore_extras);
            parse_json_value(text, "Text for IconJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static IconJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        IconJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IconJSON>, IconJSON *, bool> generator("Type Icon", ignore_extras);
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
            handle_result(stringToValue(result));
          }
        virtual void handle_result(TypeValue result) = 0;
      };
    class Generator : public FieldGeneratorValue
      {
      protected:
        void handle_result(TypeValue new_value)
          {
            IconJSON *result = new IconJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(IconJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* ICONJSON_H */
