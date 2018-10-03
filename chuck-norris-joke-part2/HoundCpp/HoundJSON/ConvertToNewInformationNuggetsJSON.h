/* file "ConvertToNewInformationNuggetsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONVERTTONEWINFORMATIONNUGGETSJSON_H
#define CONVERTTONEWINFORMATIONNUGGETSJSON_H

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


class ConvertToNewInformationNuggetsJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    ConvertToNewInformationNuggetsJSON(const ConvertToNewInformationNuggetsJSON &);
    ConvertToNewInformationNuggetsJSON & operator=(const ConvertToNewInformationNuggetsJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    ConvertToNewInformationNuggetsJSON(void);
    ConvertToNewInformationNuggetsJSON(bool init_value);
    virtual ~ConvertToNewInformationNuggetsJSON(void);
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

    static ConvertToNewInformationNuggetsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ConvertToNewInformationNuggetsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ConvertToNewInformationNuggetsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ConvertToNewInformationNuggetsJSON>, ConvertToNewInformationNuggetsJSON *, bool> generator("Type ConvertToNewInformationNuggets", ignore_extras);
            parse_json_value(text, "Text for ConvertToNewInformationNuggetsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ConvertToNewInformationNuggetsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ConvertToNewInformationNuggetsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ConvertToNewInformationNuggetsJSON>, ConvertToNewInformationNuggetsJSON *, bool> generator("Type ConvertToNewInformationNuggets", ignore_extras);
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
            ConvertToNewInformationNuggetsJSON *result = new ConvertToNewInformationNuggetsJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(ConvertToNewInformationNuggetsJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* CONVERTTONEWINFORMATIONNUGGETSJSON_H */
