/* file "LocalResultBusinessHoursJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALRESULTBUSINESSHOURSJSON_H
#define LOCALRESULTBUSINESSHOURSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class LocalResultBusinessHoursJSON : public ReferenceCounted
  {
  private:
    bool flagHasStartTime;
    uint32_t storeStartTime;
    bool flagHasEndTime;
    uint32_t storeEndTime;

    LocalResultBusinessHoursJSON(const LocalResultBusinessHoursJSON &);
    LocalResultBusinessHoursJSON & operator=(const LocalResultBusinessHoursJSON &other);

    void  fromJSONStartTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalResultBusinessHoursJSON(void);
    virtual ~LocalResultBusinessHoursJSON(void);
    bool  hasStartTime(void) const;
    uint32_t  getStartTime(void);
    const uint32_t  getStartTime(void) const;
    bool  hasEndTime(void) const;
    uint32_t  getEndTime(void);
    const uint32_t  getEndTime(void) const;


    void setStartTime(uint32_t new_value)
      {
        flagHasStartTime = true;
        if (new_value < 0)
            throw("The value for field StartTime of LocalResultBusinessHoursJSON is less than the lower bound (0) for that field.");
        if (new_value > 86400)
            throw("The value for field StartTime of LocalResultBusinessHoursJSON is greater than the upper bound (86400) for that field.");
        storeStartTime = new_value;
      }
    void unsetStartTime(void)
      {
        flagHasStartTime = false;
      }
    void setEndTime(uint32_t new_value)
      {
        flagHasEndTime = true;
        if (new_value < 0)
            throw("The value for field EndTime of LocalResultBusinessHoursJSON is less than the lower bound (0) for that field.");
        if (new_value > 86400)
            throw("The value for field EndTime of LocalResultBusinessHoursJSON is greater than the upper bound (86400) for that field.");
        storeEndTime = new_value;
      }
    void unsetEndTime(void)
      {
        flagHasEndTime = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasStartTime)
          {
            handler->start_pair("StartTime");
            handler->number_value(storeStartTime);
          }
        if (flagHasEndTime)
          {
            handler->start_pair("EndTime");
            handler->number_value(storeEndTime);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static LocalResultBusinessHoursJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalResultBusinessHoursJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalResultBusinessHoursJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool> generator("Type LocalResultBusinessHours", ignore_extras);
            parse_json_value(text, "Text for LocalResultBusinessHoursJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalResultBusinessHoursJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalResultBusinessHoursJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool> generator("Type LocalResultBusinessHours", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint32_t, 0, 86400>, uint32_t, uint32_t > fieldGeneratorStartTime;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint32_t, 0, 86400>, uint32_t, uint32_t > fieldGeneratorEndTime;


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
            LocalResultBusinessHoursJSON *result = new LocalResultBusinessHoursJSON();
            assert(result != NULL);
            RCHandle<LocalResultBusinessHoursJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(LocalResultBusinessHoursJSON *result)
          {
            if (fieldGeneratorStartTime.have_value)
              {
                result->setStartTime(fieldGeneratorStartTime.value);
                fieldGeneratorStartTime.have_value = false;
              }
            if (fieldGeneratorEndTime.have_value)
              {
                result->setEndTime(fieldGeneratorEndTime.value);
                fieldGeneratorEndTime.have_value = false;
              }
          }
        virtual void handle_result(LocalResultBusinessHoursJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ndTime") == 0)
                        return &fieldGeneratorEndTime;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tartTime") == 0)
                        return &fieldGeneratorStartTime;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStartTime("field \"StartTime\" of the LocalResultBusinessHours class"), fieldGeneratorEndTime("field \"EndTime\" of the LocalResultBusinessHours class")
          {
            set_what("the LocalResultBusinessHours class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartTime.reset();
            fieldGeneratorEndTime.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* LOCALRESULTBUSINESSHOURSJSON_H */
