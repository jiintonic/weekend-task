/* file "PhoneDisambiguationOmitListJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PHONEDISAMBIGUATIONOMITLISTJSON_H
#define PHONEDISAMBIGUATIONOMITLISTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PhoneDisambiguationOmitListJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    std::vector< OInteger > storeValue;

    PhoneDisambiguationOmitListJSON(const PhoneDisambiguationOmitListJSON &);
    PhoneDisambiguationOmitListJSON & operator=(const PhoneDisambiguationOmitListJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    PhoneDisambiguationOmitListJSON(void);
    virtual ~PhoneDisambiguationOmitListJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    OInteger  elementOfValue(size_t element_num);
    const OInteger  elementOfValue(size_t element_num) const;
    std::vector< OInteger >  getValue(void);
    const std::vector< OInteger >  getValue(void) const;


    void initValue(void)
      {
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(OInteger to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            handler->number_value(storeValue[num1].get_o_integer());
          }
        handler->finish_array();
      }

    static PhoneDisambiguationOmitListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PhoneDisambiguationOmitListJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PhoneDisambiguationOmitListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneDisambiguationOmitListJSON>, PhoneDisambiguationOmitListJSON *, bool> generator("Type PhoneDisambiguationOmitList", ignore_extras);
            parse_json_value(text, "Text for PhoneDisambiguationOmitListJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PhoneDisambiguationOmitListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PhoneDisambiguationOmitListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PhoneDisambiguationOmitListJSON>, PhoneDisambiguationOmitListJSON *, bool> generator("Type PhoneDisambiguationOmitList", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static char lowerBoundValue[];
    class Generator : public JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundValue>, OInteger, o_integer >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            PhoneDisambiguationOmitListJSON *result = new PhoneDisambiguationOmitListJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num]);
              }
            handle_result(result);
          }
        virtual void handle_result(PhoneDisambiguationOmitListJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* PHONEDISAMBIGUATIONOMITLISTJSON_H */
