/* file "CalendarReminderJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALENDARREMINDERJSON_H
#define CALENDARREMINDERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CalendarReminderJSON : public ReferenceCounted
  {
  public:
    enum TypeMethod
      {
        Method_Default,
        Method_Alert,
        Method_Email,
        Method_SMS
      };

    static TypeMethod  stringToMethod(const char *chars);
    static const char * stringFromMethod(TypeMethod the_enum);

  private:
    bool flagHasMethod;
    TypeMethod storeMethod;
    bool flagHasSecondsBeforeStartOfEvent;
    OInteger storeSecondsBeforeStartOfEvent;

    CalendarReminderJSON(const CalendarReminderJSON &);
    CalendarReminderJSON & operator=(const CalendarReminderJSON &other);

    void  fromJSONMethod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondsBeforeStartOfEvent(JSONValue *json_value, bool ignore_extras = false);


  public:
    CalendarReminderJSON(void);
    virtual ~CalendarReminderJSON(void);
    bool  hasMethod(void) const;
    TypeMethod  getMethod(void);
    const TypeMethod  getMethod(void) const;
    const char * getMethodAsChars(void) const;
    std::string  getMethodAsString(void) const;
    bool  hasSecondsBeforeStartOfEvent(void) const;
    OInteger  getSecondsBeforeStartOfEvent(void);
    const OInteger  getSecondsBeforeStartOfEvent(void) const;


    void setMethod(TypeMethod new_value)
      {
        flagHasMethod = true;
        storeMethod = new_value;
      }
    void setMethod(const char *chars)
      {
        setMethod(stringToMethod(chars));
      }
    void setMethod(std::string the_string)
      {
        setMethod(stringToMethod(the_string.c_str()));
      }
    void unsetMethod(void)
      {
        flagHasMethod = false;
      }
    void setSecondsBeforeStartOfEvent(OInteger new_value)
      {
        flagHasSecondsBeforeStartOfEvent = true;
        if (new_value < 0)
            throw("The value for field SecondsBeforeStartOfEvent of CalendarReminderJSON is less than the lower bound (0) for that field.");
        storeSecondsBeforeStartOfEvent = new_value;
      }
    void unsetSecondsBeforeStartOfEvent(void)
      {
        flagHasSecondsBeforeStartOfEvent = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasMethod)
          {
            handler->start_pair("Method");
            switch (storeMethod)
              {
                case Method_Default:
                    handler->string_value("Default");
                    break;
                case Method_Alert:
                    handler->string_value("Alert");
                    break;
                case Method_Email:
                    handler->string_value("Email");
                    break;
                case Method_SMS:
                    handler->string_value("SMS");
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasSecondsBeforeStartOfEvent);
        handler->start_pair("SecondsBeforeStartOfEvent");
        handler->number_value(storeSecondsBeforeStartOfEvent.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSecondsBeforeStartOfEvent()))
          {
            return "When parsing the object for %what%, the \"SecondsBeforeStartOfEvent\" field was missing.";
          }
        return NULL;
      }

    static CalendarReminderJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CalendarReminderJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CalendarReminderJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarReminderJSON>, CalendarReminderJSON *, bool> generator("Type CalendarReminder", ignore_extras);
            parse_json_value(text, "Text for CalendarReminderJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CalendarReminderJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CalendarReminderJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarReminderJSON>, CalendarReminderJSON *, bool> generator("Type CalendarReminder", ignore_extras);
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
    class FieldGeneratorMethod : public JSONStringGenerator
          {
          protected:
            FieldGeneratorMethod(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorMethod(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToMethod(result));
              }
            virtual void handle_result(TypeMethod result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorMethod, TypeMethod, TypeMethod > fieldGeneratorMethod;
        static char lowerBoundSecondsBeforeStartOfEvent[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSecondsBeforeStartOfEvent>, OInteger, o_integer > fieldGeneratorSecondsBeforeStartOfEvent;


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
            CalendarReminderJSON *result = new CalendarReminderJSON();
            assert(result != NULL);
            RCHandle<CalendarReminderJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(CalendarReminderJSON *result)
          {
            if (fieldGeneratorMethod.have_value)
              {
                result->setMethod(fieldGeneratorMethod.value);
                fieldGeneratorMethod.have_value = false;
              }
            if (fieldGeneratorSecondsBeforeStartOfEvent.have_value)
              {
                result->setSecondsBeforeStartOfEvent(fieldGeneratorSecondsBeforeStartOfEvent.value);
                fieldGeneratorSecondsBeforeStartOfEvent.have_value = false;
              }
            else if (!(result->hasSecondsBeforeStartOfEvent()))
              {
                error("When parsing the object for %what%, the \"SecondsBeforeStartOfEvent\" field was missing.");
              }
          }
        virtual void handle_result(CalendarReminderJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    if (strcmp(&(field_name[1]), "ethod") == 0)
                        return &fieldGeneratorMethod;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "econdsBeforeStartOfEvent") == 0)
                        return &fieldGeneratorSecondsBeforeStartOfEvent;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMethod("field \"Method\" of the CalendarReminder class"), fieldGeneratorSecondsBeforeStartOfEvent("field \"SecondsBeforeStartOfEvent\" of the CalendarReminder class")
          {
            set_what("the CalendarReminder class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMethod.reset();
            fieldGeneratorSecondsBeforeStartOfEvent.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CALENDARREMINDERJSON_H */
