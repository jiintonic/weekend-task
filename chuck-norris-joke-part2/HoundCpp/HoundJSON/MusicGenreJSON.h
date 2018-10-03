/* file "MusicGenreJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICGENREJSON_H
#define MUSICGENREJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicGenreJSON : public ReferenceCounted
  {
  private:
    bool flagHasBaseGenre;
    std::string storeBaseGenre;
    bool flagHasMatchedGenre;
    std::string storeMatchedGenre;
    bool flagHasDateRange;
    DateTimeRangeSpecJSON * storeDateRange;

    MusicGenreJSON(const MusicGenreJSON &);
    MusicGenreJSON & operator=(const MusicGenreJSON &other);

    void  fromJSONBaseGenre(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchedGenre(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateRange(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicGenreJSON(void);
    virtual ~MusicGenreJSON(void);
    bool  hasBaseGenre(void) const;
    std::string  getBaseGenre(void);
    const std::string  getBaseGenre(void) const;
    bool  hasMatchedGenre(void) const;
    std::string  getMatchedGenre(void);
    const std::string  getMatchedGenre(void) const;
    bool  hasDateRange(void) const;
    DateTimeRangeSpecJSON *  getDateRange(void);
    const DateTimeRangeSpecJSON *  getDateRange(void) const;


    void setBaseGenre(std::string new_value)
      {
        flagHasBaseGenre = true;
        storeBaseGenre = new_value;
      }
    void unsetBaseGenre(void)
      {
        flagHasBaseGenre = false;
      }
    void setMatchedGenre(std::string new_value)
      {
        flagHasMatchedGenre = true;
        storeMatchedGenre = new_value;
      }
    void unsetMatchedGenre(void)
      {
        flagHasMatchedGenre = false;
      }
    void setDateRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = true;
        storeDateRange = new_value;
      }
    void unsetDateRange(void)
      {
        if (flagHasDateRange)
          {
            storeDateRange->remove_reference();
          }
        flagHasDateRange = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasBaseGenre);
        handler->start_pair("BaseGenre");
        handler->string_value(storeBaseGenre);
        assert(flagHasMatchedGenre);
        handler->start_pair("MatchedGenre");
        handler->string_value(storeMatchedGenre);
        if (flagHasDateRange)
          {
            handler->start_pair("DateRange");
            storeDateRange->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBaseGenre()))
          {
            return "When parsing the object for %what%, the \"BaseGenre\" field was missing.";
          }
        if (!(hasMatchedGenre()))
          {
            return "When parsing the object for %what%, the \"MatchedGenre\" field was missing.";
          }
        return NULL;
      }

    static MusicGenreJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicGenreJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicGenreJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicGenreJSON>, MusicGenreJSON *, bool> generator("Type MusicGenre", ignore_extras);
            parse_json_value(text, "Text for MusicGenreJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicGenreJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicGenreJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicGenreJSON>, MusicGenreJSON *, bool> generator("Type MusicGenre", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBaseGenre;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMatchedGenre;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateRange;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            MusicGenreJSON *result = new MusicGenreJSON();
            assert(result != NULL);
            RCHandle<MusicGenreJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(MusicGenreJSON *result)
          {
            if (fieldGeneratorBaseGenre.have_value)
              {
                result->setBaseGenre(fieldGeneratorBaseGenre.value);
                fieldGeneratorBaseGenre.have_value = false;
              }
            else if (!(result->hasBaseGenre()))
              {
                error("When parsing the object for %what%, the \"BaseGenre\" field was missing.");
              }
            if (fieldGeneratorMatchedGenre.have_value)
              {
                result->setMatchedGenre(fieldGeneratorMatchedGenre.value);
                fieldGeneratorMatchedGenre.have_value = false;
              }
            else if (!(result->hasMatchedGenre()))
              {
                error("When parsing the object for %what%, the \"MatchedGenre\" field was missing.");
              }
            if (fieldGeneratorDateRange.have_value)
              {
                result->setDateRange(fieldGeneratorDateRange.value.referenced());
                fieldGeneratorDateRange.have_value = false;
              }
          }
        virtual void handle_result(MusicGenreJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "aseGenre") == 0)
                        return &fieldGeneratorBaseGenre;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateRange") == 0)
                        return &fieldGeneratorDateRange;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "atchedGenre") == 0)
                        return &fieldGeneratorMatchedGenre;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorBaseGenre("field \"BaseGenre\" of the MusicGenre class"), fieldGeneratorMatchedGenre("field \"MatchedGenre\" of the MusicGenre class"), fieldGeneratorDateRange("field \"DateRange\" of the MusicGenre class", ignore_extras)
          {
            set_what("the MusicGenre class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBaseGenre.reset();
            fieldGeneratorMatchedGenre.reset();
            fieldGeneratorDateRange.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* MUSICGENREJSON_H */
