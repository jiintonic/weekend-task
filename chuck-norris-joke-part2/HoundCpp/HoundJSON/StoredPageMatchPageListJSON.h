/* file "StoredPageMatchPageListJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef STOREDPAGEMATCHPAGELISTJSON_H
#define STOREDPAGEMATCHPAGELISTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class StoredPageMatchPageListJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    std::vector< std::string > storeValue;

    StoredPageMatchPageListJSON(const StoredPageMatchPageListJSON &);
    StoredPageMatchPageListJSON & operator=(const StoredPageMatchPageListJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    StoredPageMatchPageListJSON(void);
    virtual ~StoredPageMatchPageListJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    std::string  elementOfValue(size_t element_num);
    const std::string  elementOfValue(size_t element_num) const;
    std::vector< std::string >  getValue(void);
    const std::vector< std::string >  getValue(void) const;


    void initValue(void)
      {
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(std::string to_append)
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
        assert(storeValue.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            handler->string_value(storeValue[num1]);
          }
        handler->finish_array();
      }

    static StoredPageMatchPageListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static StoredPageMatchPageListJSON *from_text(const char *text, bool ignore_extras = false)
      {
        StoredPageMatchPageListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool> generator("Type StoredPageMatchPageList", ignore_extras);
            parse_json_value(text, "Text for StoredPageMatchPageListJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static StoredPageMatchPageListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        StoredPageMatchPageListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListJSON>, StoredPageMatchPageListJSON *, bool> generator("Type StoredPageMatchPageList", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            StoredPageMatchPageListJSON *result = new StoredPageMatchPageListJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num]);
              }
            handle_result(result);
          }
        virtual void handle_result(StoredPageMatchPageListJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* STOREDPAGEMATCHPAGELISTJSON_H */
