/* file "GuessedTracksListJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GUESSEDTRACKSLISTJSON_H
#define GUESSEDTRACKSLISTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "MusicTrackJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GuessedTracksListJSON : public ReferenceCounted
  {
  private:
    bool flagHasValue;
    std::vector< MusicTrackJSON * > storeValue;

    GuessedTracksListJSON(const GuessedTracksListJSON &);
    GuessedTracksListJSON & operator=(const GuessedTracksListJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    GuessedTracksListJSON(void);
    virtual ~GuessedTracksListJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    MusicTrackJSON *  elementOfValue(size_t element_num);
    const MusicTrackJSON *  elementOfValue(size_t element_num) const;
    std::vector< MusicTrackJSON * >  getValue(void);
    const std::vector< MusicTrackJSON * >  getValue(void) const;


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
    void appendValue(MusicTrackJSON * to_append)
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

    static GuessedTracksListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GuessedTracksListJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GuessedTracksListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessedTracksListJSON>, GuessedTracksListJSON *, bool> generator("Type GuessedTracksList", ignore_extras);
            parse_json_value(text, "Text for GuessedTracksListJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GuessedTracksListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GuessedTracksListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GuessedTracksListJSON>, GuessedTracksListJSON *, bool> generator("Type GuessedTracksList", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<MusicTrackJSON::Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            GuessedTracksListJSON *result = new GuessedTracksListJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(GuessedTracksListJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<MusicTrackJSON::Generator, RCHandle<MusicTrackJSON>, MusicTrackJSON *, bool >("Type GuessedTracksList", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* GUESSEDTRACKSLISTJSON_H */
