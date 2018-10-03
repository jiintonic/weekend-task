/* file "GetUberClientIdJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GETUBERCLIENTIDJSON_H
#define GETUBERCLIENTIDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GetUberClientIdJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    GetUberClientIdJSON(const GetUberClientIdJSON &);
    GetUberClientIdJSON & operator=(const GetUberClientIdJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    GetUberClientIdJSON(void);
    GetUberClientIdJSON(bool init_value);
    virtual ~GetUberClientIdJSON(void);
    bool  hasValue(void) const;
    bool  getValue(void);
    const bool  getValue(void) const;


    void setValue(bool new_value)
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
        handler->boolean_value(storeValue);
      }

    static GetUberClientIdJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GetUberClientIdJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GetUberClientIdJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GetUberClientIdJSON>, GetUberClientIdJSON *, bool> generator("Type GetUberClientId", ignore_extras);
            parse_json_value(text, "Text for GetUberClientIdJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GetUberClientIdJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GetUberClientIdJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GetUberClientIdJSON>, GetUberClientIdJSON *, bool> generator("Type GetUberClientId", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONBooleanGenerator
      {
      protected:
        void handle_result(bool new_value)
          {
            GetUberClientIdJSON *result = new GetUberClientIdJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(GetUberClientIdJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* GETUBERCLIENTIDJSON_H */
