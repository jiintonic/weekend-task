/* file "DisableListPositionSpecificationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISABLELISTPOSITIONSPECIFICATIONJSON_H
#define DISABLELISTPOSITIONSPECIFICATIONJSON_H

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


class DisableListPositionSpecificationJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    DisableListPositionSpecificationJSON(const DisableListPositionSpecificationJSON &);
    DisableListPositionSpecificationJSON & operator=(const DisableListPositionSpecificationJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisableListPositionSpecificationJSON(void);
    DisableListPositionSpecificationJSON(bool init_value);
    virtual ~DisableListPositionSpecificationJSON(void);
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

    static DisableListPositionSpecificationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisableListPositionSpecificationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisableListPositionSpecificationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisableListPositionSpecificationJSON>, DisableListPositionSpecificationJSON *, bool> generator("Type DisableListPositionSpecification", ignore_extras);
            parse_json_value(text, "Text for DisableListPositionSpecificationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisableListPositionSpecificationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisableListPositionSpecificationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisableListPositionSpecificationJSON>, DisableListPositionSpecificationJSON *, bool> generator("Type DisableListPositionSpecification", ignore_extras);
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
            DisableListPositionSpecificationJSON *result = new DisableListPositionSpecificationJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(DisableListPositionSpecificationJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* DISABLELISTPOSITIONSPECIFICATIONJSON_H */
