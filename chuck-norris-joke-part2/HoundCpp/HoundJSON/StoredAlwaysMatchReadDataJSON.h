/* file "StoredAlwaysMatchReadDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOREDALWAYSMATCHREADDATAJSON_H
#define STOREDALWAYSMATCHREADDATAJSON_H

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


class StoredAlwaysMatchReadDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    StoredAlwaysMatchReadDataJSON(const StoredAlwaysMatchReadDataJSON &);
    StoredAlwaysMatchReadDataJSON & operator=(const StoredAlwaysMatchReadDataJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    StoredAlwaysMatchReadDataJSON(void);
    StoredAlwaysMatchReadDataJSON(bool init_value);
    virtual ~StoredAlwaysMatchReadDataJSON(void);
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

    static StoredAlwaysMatchReadDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StoredAlwaysMatchReadDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StoredAlwaysMatchReadDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredAlwaysMatchReadDataJSON>, StoredAlwaysMatchReadDataJSON *, bool> generator("Type StoredAlwaysMatchReadData", ignore_extras);
            parse_json_value(text, "Text for StoredAlwaysMatchReadDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StoredAlwaysMatchReadDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StoredAlwaysMatchReadDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredAlwaysMatchReadDataJSON>, StoredAlwaysMatchReadDataJSON *, bool> generator("Type StoredAlwaysMatchReadData", ignore_extras);
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
            StoredAlwaysMatchReadDataJSON *result = new StoredAlwaysMatchReadDataJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(StoredAlwaysMatchReadDataJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* STOREDALWAYSMATCHREADDATAJSON_H */
