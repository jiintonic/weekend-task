/* file "GeonameAttributeArgumentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEATTRIBUTEARGUMENTJSON_H
#define GEONAMEATTRIBUTEARGUMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
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


class GeonameAttributeArgumentJSON : public ReferenceCounted
  {
  private:
    bool flagHasAreaUnit;
    std::string storeAreaUnit;
    bool flagHasIsOfficial;
    bool storeIsOfficial;
    bool flagHasDateTimeRangeSpec;
    DateTimeRangeSpecJSON * storeDateTimeRangeSpec;

    GeonameAttributeArgumentJSON(const GeonameAttributeArgumentJSON &);
    GeonameAttributeArgumentJSON & operator=(const GeonameAttributeArgumentJSON &other);

    void  fromJSONAreaUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsOfficial(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameAttributeArgumentJSON(void);
    virtual ~GeonameAttributeArgumentJSON(void);
    bool  hasAreaUnit(void) const;
    std::string  getAreaUnit(void);
    const std::string  getAreaUnit(void) const;
    bool  hasIsOfficial(void) const;
    bool  getIsOfficial(void);
    const bool  getIsOfficial(void) const;
    bool  hasDateTimeRangeSpec(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void);
    const DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void) const;


    void setAreaUnit(std::string new_value)
      {
        flagHasAreaUnit = true;
        storeAreaUnit = new_value;
      }
    void unsetAreaUnit(void)
      {
        flagHasAreaUnit = false;
      }
    void setIsOfficial(bool new_value)
      {
        flagHasIsOfficial = true;
        storeIsOfficial = new_value;
      }
    void unsetIsOfficial(void)
      {
        flagHasIsOfficial = false;
      }
    void setDateTimeRangeSpec(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRangeSpec)
          {
            storeDateTimeRangeSpec->remove_reference();
          }
        flagHasDateTimeRangeSpec = true;
        storeDateTimeRangeSpec = new_value;
      }
    void unsetDateTimeRangeSpec(void)
      {
        if (flagHasDateTimeRangeSpec)
          {
            storeDateTimeRangeSpec->remove_reference();
          }
        flagHasDateTimeRangeSpec = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasAreaUnit)
          {
            handler->start_pair("AreaUnit");
            handler->string_value(storeAreaUnit);
          }
        if (flagHasIsOfficial)
          {
            handler->start_pair("IsOfficial");
            handler->boolean_value(storeIsOfficial);
          }
        if (flagHasDateTimeRangeSpec)
          {
            handler->start_pair("DateTimeRangeSpec");
            storeDateTimeRangeSpec->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static GeonameAttributeArgumentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameAttributeArgumentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameAttributeArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeArgumentJSON>, GeonameAttributeArgumentJSON *, bool> generator("Type GeonameAttributeArgument", ignore_extras);
            parse_json_value(text, "Text for GeonameAttributeArgumentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameAttributeArgumentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameAttributeArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeArgumentJSON>, GeonameAttributeArgumentJSON *, bool> generator("Type GeonameAttributeArgument", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAreaUnit;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsOfficial;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRangeSpec;


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
            GeonameAttributeArgumentJSON *result = new GeonameAttributeArgumentJSON();
            assert(result != NULL);
            RCHandle<GeonameAttributeArgumentJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(GeonameAttributeArgumentJSON *result)
          {
            if (fieldGeneratorAreaUnit.have_value)
              {
                result->setAreaUnit(fieldGeneratorAreaUnit.value);
                fieldGeneratorAreaUnit.have_value = false;
              }
            if (fieldGeneratorIsOfficial.have_value)
              {
                result->setIsOfficial(fieldGeneratorIsOfficial.value);
                fieldGeneratorIsOfficial.have_value = false;
              }
            if (fieldGeneratorDateTimeRangeSpec.have_value)
              {
                result->setDateTimeRangeSpec(fieldGeneratorDateTimeRangeSpec.value.referenced());
                fieldGeneratorDateTimeRangeSpec.have_value = false;
              }
          }
        virtual void handle_result(GeonameAttributeArgumentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "reaUnit") == 0)
                        return &fieldGeneratorAreaUnit;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateTimeRangeSpec") == 0)
                        return &fieldGeneratorDateTimeRangeSpec;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sOfficial") == 0)
                        return &fieldGeneratorIsOfficial;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAreaUnit("field \"AreaUnit\" of the GeonameAttributeArgument class"), fieldGeneratorIsOfficial("field \"IsOfficial\" of the GeonameAttributeArgument class"), fieldGeneratorDateTimeRangeSpec("field \"DateTimeRangeSpec\" of the GeonameAttributeArgument class", ignore_extras)
          {
            set_what("the GeonameAttributeArgument class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAreaUnit.reset();
            fieldGeneratorIsOfficial.reset();
            fieldGeneratorDateTimeRangeSpec.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* GEONAMEATTRIBUTEARGUMENTJSON_H */
