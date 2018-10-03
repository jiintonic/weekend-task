/* file "SoundHoundArtistIDJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOUNDHOUNDARTISTIDJSON_H
#define SOUNDHOUNDARTISTIDJSON_H

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


class SoundHoundArtistIDJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    uint64_t storeValue;

    SoundHoundArtistIDJSON(const SoundHoundArtistIDJSON &);
    SoundHoundArtistIDJSON & operator=(const SoundHoundArtistIDJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SoundHoundArtistIDJSON(void);
    SoundHoundArtistIDJSON(uint64_t init_value);
    virtual ~SoundHoundArtistIDJSON(void);
    bool  hasValue(void) const;
    uint64_t  getValue(void);
    const uint64_t  getValue(void) const;


    void setValue(uint64_t new_value)
      {
        flagHasValue = true;
        if (new_value < 200000000000000000)
            throw("The value for field Value of SoundHoundArtistIDJSON is less than the lower bound (200000000000000000) for that field.");
        if (new_value > 200999999999999999)
            throw("The value for field Value of SoundHoundArtistIDJSON is greater than the upper bound (200999999999999999) for that field.");
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

    static SoundHoundArtistIDJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SoundHoundArtistIDJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SoundHoundArtistIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool> generator("Type SoundHoundArtistID", ignore_extras);
            parse_json_value(text, "Text for SoundHoundArtistIDJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SoundHoundArtistIDJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SoundHoundArtistIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundArtistIDJSON>, SoundHoundArtistIDJSON *, bool> generator("Type SoundHoundArtistID", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONIntegerRangeGenerator<uint64_t, 200000000000000000, 200999999999999999>
      {
      protected:
        void handle_result(uint64_t new_value)
          {
            SoundHoundArtistIDJSON *result = new SoundHoundArtistIDJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SoundHoundArtistIDJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SOUNDHOUNDARTISTIDJSON_H */
