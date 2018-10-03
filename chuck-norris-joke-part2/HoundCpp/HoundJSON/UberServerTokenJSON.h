/* file "UberServerTokenJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERSERVERTOKENJSON_H
#define UBERSERVERTOKENJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
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


class UberServerTokenJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    std::string storeValue;

    UberServerTokenJSON(const UberServerTokenJSON &);
    UberServerTokenJSON & operator=(const UberServerTokenJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberServerTokenJSON(void);
    UberServerTokenJSON(std::string init_value);
    virtual ~UberServerTokenJSON(void);
    bool  hasValue(void) const;
    std::string  getValue(void);
    const std::string  getValue(void) const;


    void setValue(std::string new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->string_value(storeValue);
      }

    static UberServerTokenJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberServerTokenJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberServerTokenJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberServerTokenJSON>, UberServerTokenJSON *, bool> generator("Type UberServerToken", ignore_extras);
            parse_json_value(text, "Text for UberServerTokenJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberServerTokenJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberServerTokenJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberServerTokenJSON>, UberServerTokenJSON *, bool> generator("Type UberServerToken", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONStringGenerator
      {
      protected:
        void handle_result(const char * new_value)
          {
            UberServerTokenJSON *result = new UberServerTokenJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(UberServerTokenJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* UBERSERVERTOKENJSON_H */
