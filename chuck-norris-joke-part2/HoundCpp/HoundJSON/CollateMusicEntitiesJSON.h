/* file "CollateMusicEntitiesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COLLATEMUSICENTITIESJSON_H
#define COLLATEMUSICENTITIESJSON_H

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


class CollateMusicEntitiesJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    bool storeValue;

    CollateMusicEntitiesJSON(const CollateMusicEntitiesJSON &);
    CollateMusicEntitiesJSON & operator=(const CollateMusicEntitiesJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    CollateMusicEntitiesJSON(void);
    CollateMusicEntitiesJSON(bool init_value);
    virtual ~CollateMusicEntitiesJSON(void);
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

    static CollateMusicEntitiesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CollateMusicEntitiesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CollateMusicEntitiesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CollateMusicEntitiesJSON>, CollateMusicEntitiesJSON *, bool> generator("Type CollateMusicEntities", ignore_extras);
            parse_json_value(text, "Text for CollateMusicEntitiesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CollateMusicEntitiesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CollateMusicEntitiesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CollateMusicEntitiesJSON>, CollateMusicEntitiesJSON *, bool> generator("Type CollateMusicEntities", ignore_extras);
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
            CollateMusicEntitiesJSON *result = new CollateMusicEntitiesJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(CollateMusicEntitiesJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* COLLATEMUSICENTITIESJSON_H */
