/* file "SportsStatsArgumentArrayJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSARGUMENTARRAYJSON_H
#define SPORTSSTATSARGUMENTARRAYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsStatsArgumentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsArgumentArrayJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    std::vector< SportsStatsArgumentJSON * > storeValue;

    SportsStatsArgumentArrayJSON(const SportsStatsArgumentArrayJSON &);
    SportsStatsArgumentArrayJSON & operator=(const SportsStatsArgumentArrayJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsArgumentArrayJSON(void);
    virtual ~SportsStatsArgumentArrayJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    SportsStatsArgumentJSON *  elementOfValue(size_t element_num);
    const SportsStatsArgumentJSON *  elementOfValue(size_t element_num) const;
    std::vector< SportsStatsArgumentJSON * >  getValue(void);
    const std::vector< SportsStatsArgumentJSON * >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num2 = 0; num2 < storeValue.size(); ++num2)
              {
                storeValue[num2]->remove_reference();
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(SportsStatsArgumentJSON * to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        to_append->add_reference();
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num3 = 0; num3 < storeValue.size(); ++num3)
              {
                storeValue[num3]->remove_reference();
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static SportsStatsArgumentArrayJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsArgumentArrayJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsArgumentArrayJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsArgumentArrayJSON>, SportsStatsArgumentArrayJSON *, bool> generator("Type SportsStatsArgumentArray", ignore_extras);
            parse_json_value(text, "Text for SportsStatsArgumentArrayJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsArgumentArrayJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsArgumentArrayJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsArgumentArrayJSON>, SportsStatsArgumentArrayJSON *, bool> generator("Type SportsStatsArgumentArray", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<SportsStatsArgumentJSON::Generator, RCHandle<SportsStatsArgumentJSON>, SportsStatsArgumentJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            SportsStatsArgumentArrayJSON *result = new SportsStatsArgumentArrayJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsStatsArgumentArrayJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<SportsStatsArgumentJSON::Generator, RCHandle<SportsStatsArgumentJSON>, SportsStatsArgumentJSON *, bool >("Type SportsStatsArgumentArray", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSSTATSARGUMENTARRAYJSON_H */
