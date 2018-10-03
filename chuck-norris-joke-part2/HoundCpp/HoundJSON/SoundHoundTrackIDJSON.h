/* file "SoundHoundTrackIDJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SOUNDHOUNDTRACKIDJSON_H
#define SOUNDHOUNDTRACKIDJSON_H

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


class SoundHoundTrackIDJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    uint64_t storeValue;

    SoundHoundTrackIDJSON(const SoundHoundTrackIDJSON &);
    SoundHoundTrackIDJSON & operator=(const SoundHoundTrackIDJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SoundHoundTrackIDJSON(void);
    SoundHoundTrackIDJSON(uint64_t init_value);
    virtual ~SoundHoundTrackIDJSON(void);
    bool  hasValue(void) const;
    uint64_t  getValue(void);
    const uint64_t  getValue(void) const;


    void setValue(uint64_t new_value)
      {
        flagHasValue = true;
        if (new_value < 100000000000000000)
            throw("The value for field Value of SoundHoundTrackIDJSON is less than the lower bound (100000000000000000) for that field.");
        if (new_value > 100999999999999999)
            throw("The value for field Value of SoundHoundTrackIDJSON is greater than the upper bound (100999999999999999) for that field.");
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

    static SoundHoundTrackIDJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SoundHoundTrackIDJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SoundHoundTrackIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool> generator("Type SoundHoundTrackID", ignore_extras);
            parse_json_value(text, "Text for SoundHoundTrackIDJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SoundHoundTrackIDJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SoundHoundTrackIDJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool> generator("Type SoundHoundTrackID", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONIntegerRangeGenerator<uint64_t, 100000000000000000, 100999999999999999>
      {
      protected:
        void handle_result(uint64_t new_value)
          {
            SoundHoundTrackIDJSON *result = new SoundHoundTrackIDJSON();
            result->setValue(new_value);
            handle_result(result);
          }
        virtual void handle_result(SoundHoundTrackIDJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SOUNDHOUNDTRACKIDJSON_H */
