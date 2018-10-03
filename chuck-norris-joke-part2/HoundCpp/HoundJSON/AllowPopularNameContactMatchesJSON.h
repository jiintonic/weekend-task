/* file "AllowPopularNameContactMatchesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALLOWPOPULARNAMECONTACTMATCHESJSON_H
#define ALLOWPOPULARNAMECONTACTMATCHESJSON_H

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


class AllowPopularNameContactMatchesJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    AllowPopularNameContactMatchesJSON(const AllowPopularNameContactMatchesJSON &);
    AllowPopularNameContactMatchesJSON & operator=(const AllowPopularNameContactMatchesJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    AllowPopularNameContactMatchesJSON(void);
    AllowPopularNameContactMatchesJSON(bool init_value);
    virtual ~AllowPopularNameContactMatchesJSON(void);
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

    static AllowPopularNameContactMatchesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AllowPopularNameContactMatchesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AllowPopularNameContactMatchesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AllowPopularNameContactMatchesJSON>, AllowPopularNameContactMatchesJSON *, bool> generator("Type AllowPopularNameContactMatches", ignore_extras);
            parse_json_value(text, "Text for AllowPopularNameContactMatchesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AllowPopularNameContactMatchesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AllowPopularNameContactMatchesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AllowPopularNameContactMatchesJSON>, AllowPopularNameContactMatchesJSON *, bool> generator("Type AllowPopularNameContactMatches", ignore_extras);
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
            AllowPopularNameContactMatchesJSON *result = new AllowPopularNameContactMatchesJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(AllowPopularNameContactMatchesJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* ALLOWPOPULARNAMECONTACTMATCHESJSON_H */
