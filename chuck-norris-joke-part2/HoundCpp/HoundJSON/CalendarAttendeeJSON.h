/* file "CalendarAttendeeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALENDARATTENDEEJSON_H
#define CALENDARATTENDEEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CalendarAttendeeJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasEmailAddress;
    std::string storeEmailAddress;

    CalendarAttendeeJSON(const CalendarAttendeeJSON &);
    CalendarAttendeeJSON & operator=(const CalendarAttendeeJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmailAddress(JSONValue *json_value, bool ignore_extras = false);


  public:
    CalendarAttendeeJSON(void);
    virtual ~CalendarAttendeeJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasEmailAddress(void) const;
    std::string  getEmailAddress(void);
    const std::string  getEmailAddress(void) const;


    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setEmailAddress(std::string new_value)
      {
        flagHasEmailAddress = true;
        storeEmailAddress = new_value;
      }
    void unsetEmailAddress(void)
      {
        flagHasEmailAddress = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasEmailAddress)
          {
            handler->start_pair("EmailAddress");
            handler->string_value(storeEmailAddress);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static CalendarAttendeeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CalendarAttendeeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CalendarAttendeeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarAttendeeJSON>, CalendarAttendeeJSON *, bool> generator("Type CalendarAttendee", ignore_extras);
            parse_json_value(text, "Text for CalendarAttendeeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CalendarAttendeeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CalendarAttendeeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarAttendeeJSON>, CalendarAttendeeJSON *, bool> generator("Type CalendarAttendee", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEmailAddress;


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
            CalendarAttendeeJSON *result = new CalendarAttendeeJSON();
            assert(result != NULL);
            RCHandle<CalendarAttendeeJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(CalendarAttendeeJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorEmailAddress.have_value)
              {
                result->setEmailAddress(fieldGeneratorEmailAddress.value);
                fieldGeneratorEmailAddress.have_value = false;
              }
          }
        virtual void handle_result(CalendarAttendeeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "mailAddress") == 0)
                        return &fieldGeneratorEmailAddress;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the CalendarAttendee class"), fieldGeneratorEmailAddress("field \"EmailAddress\" of the CalendarAttendee class")
          {
            set_what("the CalendarAttendee class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorEmailAddress.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CALENDARATTENDEEJSON_H */
