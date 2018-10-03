/* file "DisambiguateResultsBeforeActionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATERESULTSBEFOREACTIONJSON_H
#define DISAMBIGUATERESULTSBEFOREACTIONJSON_H

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


class DisambiguateResultsBeforeActionJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    DisambiguateResultsBeforeActionJSON(const DisambiguateResultsBeforeActionJSON &);
    DisambiguateResultsBeforeActionJSON & operator=(const DisambiguateResultsBeforeActionJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguateResultsBeforeActionJSON(void);
    DisambiguateResultsBeforeActionJSON(bool init_value);
    virtual ~DisambiguateResultsBeforeActionJSON(void);
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

    static DisambiguateResultsBeforeActionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguateResultsBeforeActionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguateResultsBeforeActionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateResultsBeforeActionJSON>, DisambiguateResultsBeforeActionJSON *, bool> generator("Type DisambiguateResultsBeforeAction", ignore_extras);
            parse_json_value(text, "Text for DisambiguateResultsBeforeActionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguateResultsBeforeActionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguateResultsBeforeActionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateResultsBeforeActionJSON>, DisambiguateResultsBeforeActionJSON *, bool> generator("Type DisambiguateResultsBeforeAction", ignore_extras);
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
            DisambiguateResultsBeforeActionJSON *result = new DisambiguateResultsBeforeActionJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(DisambiguateResultsBeforeActionJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* DISAMBIGUATERESULTSBEFOREACTIONJSON_H */
