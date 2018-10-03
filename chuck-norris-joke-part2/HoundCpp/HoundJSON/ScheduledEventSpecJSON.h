/* file "ScheduledEventSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SCHEDULEDEVENTSPECJSON_H
#define SCHEDULEDEVENTSPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ScheduledEventSpecJSON : public ReferenceCounted
  {
  private:
    bool flagHasStartDateAndTime;
    DateAndOrTimeJSON * storeStartDateAndTime;
    bool flagHasEndDateAndTime;
    DateAndOrTimeJSON * storeEndDateAndTime;
    bool flagHasTimeZone;
    std::string storeTimeZone;
    bool flagHasScheduledEventName;
    std::string storeScheduledEventName;
    bool flagHasScheduledEventNameSpoken;
    std::string storeScheduledEventNameSpoken;
    bool flagHasIsMultiDay;
    bool storeIsMultiDay;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ScheduledEventSpecJSON(const ScheduledEventSpecJSON &);
    ScheduledEventSpecJSON & operator=(const ScheduledEventSpecJSON &other);

    void  fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledEventName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledEventNameSpoken(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsMultiDay(JSONValue *json_value, bool ignore_extras = false);


  public:
    ScheduledEventSpecJSON(void);
    virtual ~ScheduledEventSpecJSON(void);
    bool  hasStartDateAndTime(void) const;
    DateAndOrTimeJSON *  getStartDateAndTime(void);
    const DateAndOrTimeJSON *  getStartDateAndTime(void) const;
    bool  hasEndDateAndTime(void) const;
    DateAndOrTimeJSON *  getEndDateAndTime(void);
    const DateAndOrTimeJSON *  getEndDateAndTime(void) const;
    bool  hasTimeZone(void) const;
    std::string  getTimeZone(void);
    const std::string  getTimeZone(void) const;
    bool  hasScheduledEventName(void) const;
    std::string  getScheduledEventName(void);
    const std::string  getScheduledEventName(void) const;
    bool  hasScheduledEventNameSpoken(void) const;
    std::string  getScheduledEventNameSpoken(void);
    const std::string  getScheduledEventNameSpoken(void) const;
    bool  hasIsMultiDay(void) const;
    bool  getIsMultiDay(void);
    const bool  getIsMultiDay(void) const;

    virtual size_t extraScheduledEventSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraScheduledEventSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraScheduledEventSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraScheduledEventSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraScheduledEventSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraScheduledEventSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setStartDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = true;
        storeStartDateAndTime = new_value;
      }
    void unsetStartDateAndTime(void)
      {
        if (flagHasStartDateAndTime)
          {
            storeStartDateAndTime->remove_reference();
          }
        flagHasStartDateAndTime = false;
      }
    void setEndDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = true;
        storeEndDateAndTime = new_value;
      }
    void unsetEndDateAndTime(void)
      {
        if (flagHasEndDateAndTime)
          {
            storeEndDateAndTime->remove_reference();
          }
        flagHasEndDateAndTime = false;
      }
    void setTimeZone(std::string new_value)
      {
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        flagHasTimeZone = false;
      }
    void setScheduledEventName(std::string new_value)
      {
        flagHasScheduledEventName = true;
        storeScheduledEventName = new_value;
      }
    void unsetScheduledEventName(void)
      {
        flagHasScheduledEventName = false;
      }
    void setScheduledEventNameSpoken(std::string new_value)
      {
        flagHasScheduledEventNameSpoken = true;
        storeScheduledEventNameSpoken = new_value;
      }
    void unsetScheduledEventNameSpoken(void)
      {
        flagHasScheduledEventNameSpoken = false;
      }
    void setIsMultiDay(bool new_value)
      {
        flagHasIsMultiDay = true;
        storeIsMultiDay = new_value;
      }
    void unsetIsMultiDay(void)
      {
        flagHasIsMultiDay = false;
      }

    virtual void extraScheduledEventSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraScheduledEventSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraScheduledEventSpecLookup(key);
        if (old_field == NULL)
          {
            extraScheduledEventSpecAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasStartDateAndTime);
        handler->start_pair("StartDateAndTime");
        storeStartDateAndTime->write_as_json(handler);
        assert(flagHasEndDateAndTime);
        handler->start_pair("EndDateAndTime");
        storeEndDateAndTime->write_as_json(handler);
        if (flagHasTimeZone)
          {
            handler->start_pair("TimeZone");
            handler->string_value(storeTimeZone);
          }
        assert(flagHasScheduledEventName);
        handler->start_pair("ScheduledEventName");
        handler->string_value(storeScheduledEventName);
        assert(flagHasScheduledEventNameSpoken);
        handler->start_pair("ScheduledEventNameSpoken");
        handler->string_value(storeScheduledEventNameSpoken);
        assert(flagHasIsMultiDay);
        handler->start_pair("IsMultiDay");
        handler->boolean_value(storeIsMultiDay);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStartDateAndTime()))
          {
            return "When parsing the object for %what%, the \"StartDateAndTime\" field was missing.";
          }
        if (!(hasEndDateAndTime()))
          {
            return "When parsing the object for %what%, the \"EndDateAndTime\" field was missing.";
          }
        if (!(hasScheduledEventName()))
          {
            return "When parsing the object for %what%, the \"ScheduledEventName\" field was missing.";
          }
        if (!(hasScheduledEventNameSpoken()))
          {
            return "When parsing the object for %what%, the \"ScheduledEventNameSpoken\" field was missing.";
          }
        if (!(hasIsMultiDay()))
          {
            return "When parsing the object for %what%, the \"IsMultiDay\" field was missing.";
          }
        return NULL;
      }

    static ScheduledEventSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ScheduledEventSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ScheduledEventSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScheduledEventSpecJSON>, ScheduledEventSpecJSON *, bool> generator("Type ScheduledEventSpec", ignore_extras);
            parse_json_value(text, "Text for ScheduledEventSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ScheduledEventSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ScheduledEventSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ScheduledEventSpecJSON>, ScheduledEventSpecJSON *, bool> generator("Type ScheduledEventSpec", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStartDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEndDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTimeZone;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorScheduledEventName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorScheduledEventNameSpoken;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsMultiDay;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            ScheduledEventSpecJSON *result = new ScheduledEventSpecJSON();
            assert(result != NULL);
            RCHandle<ScheduledEventSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraScheduledEventSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ScheduledEventSpecJSON *result)
          {
            if (fieldGeneratorStartDateAndTime.have_value)
              {
                result->setStartDateAndTime(fieldGeneratorStartDateAndTime.value.referenced());
                fieldGeneratorStartDateAndTime.have_value = false;
              }
            else if (!(result->hasStartDateAndTime()))
              {
                error("When parsing the object for %what%, the \"StartDateAndTime\" field was missing.");
              }
            if (fieldGeneratorEndDateAndTime.have_value)
              {
                result->setEndDateAndTime(fieldGeneratorEndDateAndTime.value.referenced());
                fieldGeneratorEndDateAndTime.have_value = false;
              }
            else if (!(result->hasEndDateAndTime()))
              {
                error("When parsing the object for %what%, the \"EndDateAndTime\" field was missing.");
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value);
                fieldGeneratorTimeZone.have_value = false;
              }
            if (fieldGeneratorScheduledEventName.have_value)
              {
                result->setScheduledEventName(fieldGeneratorScheduledEventName.value);
                fieldGeneratorScheduledEventName.have_value = false;
              }
            else if (!(result->hasScheduledEventName()))
              {
                error("When parsing the object for %what%, the \"ScheduledEventName\" field was missing.");
              }
            if (fieldGeneratorScheduledEventNameSpoken.have_value)
              {
                result->setScheduledEventNameSpoken(fieldGeneratorScheduledEventNameSpoken.value);
                fieldGeneratorScheduledEventNameSpoken.have_value = false;
              }
            else if (!(result->hasScheduledEventNameSpoken()))
              {
                error("When parsing the object for %what%, the \"ScheduledEventNameSpoken\" field was missing.");
              }
            if (fieldGeneratorIsMultiDay.have_value)
              {
                result->setIsMultiDay(fieldGeneratorIsMultiDay.value);
                fieldGeneratorIsMultiDay.have_value = false;
              }
            else if (!(result->hasIsMultiDay()))
              {
                error("When parsing the object for %what%, the \"IsMultiDay\" field was missing.");
              }
          }
        virtual void handle_result(ScheduledEventSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ndDateAndTime") == 0)
                        return &fieldGeneratorEndDateAndTime;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sMultiDay") == 0)
                        return &fieldGeneratorIsMultiDay;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strncmp(&(field_name[2]), "heduledEventName", 16) == 0)
                              {
                                switch ((unsigned char)(field_name[18]))
                                  {
                                    case 0:
                                        return &fieldGeneratorScheduledEventName;
                                    case 'S':
                                        if (strcmp(&(field_name[19]), "poken") == 0)
                                            return &fieldGeneratorScheduledEventNameSpoken;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "artDateAndTime") == 0)
                                return &fieldGeneratorStartDateAndTime;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "imeZone") == 0)
                        return &fieldGeneratorTimeZone;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStartDateAndTime("field \"StartDateAndTime\" of the ScheduledEventSpec class", ignore_extras), fieldGeneratorEndDateAndTime("field \"EndDateAndTime\" of the ScheduledEventSpec class", ignore_extras), fieldGeneratorTimeZone("field \"TimeZone\" of the ScheduledEventSpec class"), fieldGeneratorScheduledEventName("field \"ScheduledEventName\" of the ScheduledEventSpec class"), fieldGeneratorScheduledEventNameSpoken("field \"ScheduledEventNameSpoken\" of the ScheduledEventSpec class"), fieldGeneratorIsMultiDay("field \"IsMultiDay\" of the ScheduledEventSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ScheduledEventSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStartDateAndTime.reset();
            fieldGeneratorEndDateAndTime.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorScheduledEventName.reset();
            fieldGeneratorScheduledEventNameSpoken.reset();
            fieldGeneratorIsMultiDay.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SCHEDULEDEVENTSPECJSON_H */
