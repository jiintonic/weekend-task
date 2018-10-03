/* file "IncomingCallPendingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INCOMINGCALLPENDINGJSON_H
#define INCOMINGCALLPENDINGJSON_H

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


class IncomingCallPendingJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    IncomingCallPendingJSON(const IncomingCallPendingJSON &);
    IncomingCallPendingJSON & operator=(const IncomingCallPendingJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    IncomingCallPendingJSON(void);
    IncomingCallPendingJSON(bool init_value);
    virtual ~IncomingCallPendingJSON(void);
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

    static IncomingCallPendingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static IncomingCallPendingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        IncomingCallPendingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IncomingCallPendingJSON>, IncomingCallPendingJSON *, bool> generator("Type IncomingCallPending", ignore_extras);
            parse_json_value(text, "Text for IncomingCallPendingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static IncomingCallPendingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        IncomingCallPendingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<IncomingCallPendingJSON>, IncomingCallPendingJSON *, bool> generator("Type IncomingCallPending", ignore_extras);
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
            IncomingCallPendingJSON *result = new IncomingCallPendingJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(IncomingCallPendingJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* INCOMINGCALLPENDINGJSON_H */
