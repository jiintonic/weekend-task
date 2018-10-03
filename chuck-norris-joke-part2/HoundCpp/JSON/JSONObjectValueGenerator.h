/* file "JSONObjectValueGenerator.h" */

/* Copyright 2015-2017 SoundHound, Incorporated.  All rights reserved. */

#ifndef JSONOBJECTVALUEGENERATOR_H
#define JSONOBJECTVALUEGENERATOR_H

#include "JSONObjectGenerator.h"
#include "JSONRep.h"
#include "RCHandle.h"


class JSONObjectValueGenerator : public JSONObjectGenerator
  {
  private:
    RCHandle<JSONObjectValue> value;
    JSONValueHandler local_field_handler;

  protected:
    JSONObjectValueGenerator(void)  { }
    ~JSONObjectValueGenerator(void)  { }

    void start(void)
      {
        assert(value.referenced() == NULL);
        value = new JSONObjectValue();
        value.referenced()->remove_reference();
      }
    JSONHandler *start_field(const char *field_name)
      {
        assert(value.referenced() != NULL);
        if (local_field_handler.result != NULL)
            local_field_handler.result->remove_reference();
        local_field_handler.result = NULL;
        return &local_field_handler;
      }
    void finish_field(const char *field_name, JSONHandler *field_handler)
      {
        assert(value.referenced() != NULL);
        assert(field_handler == &local_field_handler);
        assert(local_field_handler.result != NULL);
        value.referenced()->appendPair(field_name, local_field_handler.result);
      }
    void finish(void)
      {
        assert(value.referenced() != NULL);
        handle_result(value.referenced());
        value = NULL;
      }
    virtual void handle_result(JSONObjectValue *result) = 0;
  };


#endif /* JSONOBJECTVALUEGENERATOR_H */
