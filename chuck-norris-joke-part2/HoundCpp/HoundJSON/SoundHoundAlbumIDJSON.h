/* file "SoundHoundAlbumIDJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOUNDHOUNDALBUMIDJSON_H
#define SOUNDHOUNDALBUMIDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <stdint.h>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SoundHoundAlbumIDJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    uint64_t storeValue;

    SoundHoundAlbumIDJSON(const SoundHoundAlbumIDJSON &);
    SoundHoundAlbumIDJSON & operator=(const SoundHoundAlbumIDJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SoundHoundAlbumIDJSON(void);
    SoundHoundAlbumIDJSON(uint64_t init_value);
    virtual ~SoundHoundAlbumIDJSON(void);
    bool  hasValue(void) const;
    uint64_t  getValue(void);
    const uint64_t  getValue(void) const;


    void setValue(uint64_t new_value)
      {
        flagHasValue = true;
        if (new_value < 300000000000000000)
            throw("The value for field Value of SoundHoundAlbumIDJSON is less than the lower bound (300000000000000000) for that field.");
        if (new_value > 300999999999999999)
            throw("The value for field Value of SoundHoundAlbumIDJSON is greater than the upper bound (300999999999999999) for that field.");
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->number_value_uint64_t(storeValue);
      }

    static SoundHoundAlbumIDJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SoundHoundAlbumIDJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SoundHoundAlbumIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool> generator("Type SoundHoundAlbumID", ignore_extras);
            parse_json_value(text, "Text for SoundHoundAlbumIDJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SoundHoundAlbumIDJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SoundHoundAlbumIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundAlbumIDJSON>, SoundHoundAlbumIDJSON *, bool> generator("Type SoundHoundAlbumID", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONIntegerRangeGenerator<uint64_t, 300000000000000000, 300999999999999999>
      {
      protected:
        void handle_result(uint64_t new_value)
          {
            SoundHoundAlbumIDJSON *result = new SoundHoundAlbumIDJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SoundHoundAlbumIDJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SOUNDHOUNDALBUMIDJSON_H */
