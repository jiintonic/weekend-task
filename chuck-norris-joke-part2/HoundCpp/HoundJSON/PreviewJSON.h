/* file "PreviewJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PREVIEWJSON_H
#define PREVIEWJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PreviewJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    JSONValue * storeValue;

    PreviewJSON(const PreviewJSON &);
    PreviewJSON & operator=(const PreviewJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    PreviewJSON(void);
    PreviewJSON(JSONValue * init_value);
    virtual ~PreviewJSON(void);
    bool  hasValue(void) const;
    JSONValue *  getValue(void);
    const JSONValue *  getValue(void) const;


    void setValue(JSONValue * new_value)
      {
        new_value->add_reference();
        if (flagHasValue)
          {
            storeValue->remove_reference();
          }
        flagHasValue = true;
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            storeValue->remove_reference();
          }
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        storeValue->write(handler);
      }

    static PreviewJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PreviewJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PreviewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool> generator("Type Preview", ignore_extras);
            parse_json_value(text, "Text for PreviewJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PreviewJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PreviewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool> generator("Type Preview", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONValueHandler
      {
      protected:
        void handle_result(JSONValue * new_value)
          {
            PreviewJSON *result = new PreviewJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(PreviewJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* PREVIEWJSON_H */
