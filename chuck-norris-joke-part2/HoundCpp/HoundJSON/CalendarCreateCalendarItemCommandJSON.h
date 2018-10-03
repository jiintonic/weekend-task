/* file "CalendarCreateCalendarItemCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALENDARCREATECALENDARITEMCOMMANDJSON_H
#define CALENDARCREATECALENDARITEMCOMMANDJSON_H

#pragma interface

#include "CalendarCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CalendarCreateCalendarItemCommandJSON : public CalendarCommandJSON
  {
  public:
    enum TypeFrequencyType
      {
        FrequencyType_unknown,
        FrequencyType_one_time,
        FrequencyType_daily,
        FrequencyType_weekly,
        FrequencyType_monthly,
        FrequencyType_yearly
      };

    static TypeFrequencyType  stringToFrequencyType(const char *chars);
    static const char * stringFromFrequencyType(TypeFrequencyType the_enum);
    enum TypeAvailability
      {
        Availability_Free,
        Availability_Busy
      };

    static TypeAvailability  stringToAvailability(const char *chars);
    static const char * stringFromAvailability(TypeAvailability the_enum);
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeFrequencyType
          {
            FrequencyType_unknown,
            FrequencyType_one_time,
            FrequencyType_daily,
            FrequencyType_weekly,
            FrequencyType_monthly,
            FrequencyType_yearly
          };

        static TypeFrequencyType  stringToFrequencyType(const char *chars);
        static const char * stringFromFrequencyType(TypeFrequencyType the_enum);
        enum TypeAvailability
          {
            Availability_Free,
            Availability_Busy
          };

        static TypeAvailability  stringToAvailability(const char *chars);
        static const char * stringFromAvailability(TypeAvailability the_enum);

      private:
        bool flagHasItemKind;
        std::string storeItemKind;
        bool flagHasTitle;
        std::string storeTitle;
        bool flagHasLocation;
        std::string storeLocation;
        bool flagHasStart;
        DateAndOrTimeJSON * storeStart;
        bool flagHasEnd;
        DateAndOrTimeJSON * storeEnd;
        bool flagHasFrequencyType;
        TypeFrequencyType storeFrequencyType;
        bool flagHasFrequencyMultiplier;
        OInteger storeFrequencyMultiplier;
        bool flagHasRecurrenceRule;
        std::string storeRecurrenceRule;
        bool flagHasIsRecurring;
        bool storeIsRecurring;
        bool flagHasIsAllDay;
        bool storeIsAllDay;
        bool flagHasAvailability;
        TypeAvailability storeAvailability;
        bool flagHasStartAMPMAmbiguous;
        bool storeStartAMPMAmbiguous;
        bool flagHasEndAMPMAmbiguous;
        bool storeEndAMPMAmbiguous;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONItemKind(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEnd(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAvailability(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStartAMPMAmbiguous(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEndAMPMAmbiguous(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasItemKind(void) const;
        std::string  getItemKind(void);
        const std::string  getItemKind(void) const;
        bool  hasTitle(void) const;
        std::string  getTitle(void);
        const std::string  getTitle(void) const;
        bool  hasLocation(void) const;
        std::string  getLocation(void);
        const std::string  getLocation(void) const;
        bool  hasStart(void) const;
        DateAndOrTimeJSON *  getStart(void);
        const DateAndOrTimeJSON *  getStart(void) const;
        bool  hasEnd(void) const;
        DateAndOrTimeJSON *  getEnd(void);
        const DateAndOrTimeJSON *  getEnd(void) const;
        bool  hasFrequencyType(void) const;
        TypeFrequencyType  getFrequencyType(void);
        const TypeFrequencyType  getFrequencyType(void) const;
        const char * getFrequencyTypeAsChars(void) const;
        std::string  getFrequencyTypeAsString(void) const;
        bool  hasFrequencyMultiplier(void) const;
        OInteger  getFrequencyMultiplier(void);
        const OInteger  getFrequencyMultiplier(void) const;
        bool  hasRecurrenceRule(void) const;
        std::string  getRecurrenceRule(void);
        const std::string  getRecurrenceRule(void) const;
        bool  hasIsRecurring(void) const;
        bool  getIsRecurring(void);
        const bool  getIsRecurring(void) const;
        bool  hasIsAllDay(void) const;
        bool  getIsAllDay(void);
        const bool  getIsAllDay(void) const;
        bool  hasAvailability(void) const;
        TypeAvailability  getAvailability(void);
        const TypeAvailability  getAvailability(void) const;
        const char * getAvailabilityAsChars(void) const;
        std::string  getAvailabilityAsString(void) const;
        bool  hasStartAMPMAmbiguous(void) const;
        bool  getStartAMPMAmbiguous(void);
        const bool  getStartAMPMAmbiguous(void) const;
        bool  hasEndAMPMAmbiguous(void) const;
        bool  getEndAMPMAmbiguous(void);
        const bool  getEndAMPMAmbiguous(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setItemKind(std::string new_value)
          {
            flagHasItemKind = true;
            storeItemKind = new_value;
          }
        void unsetItemKind(void)
          {
            flagHasItemKind = false;
          }
        void setTitle(std::string new_value)
          {
            flagHasTitle = true;
            storeTitle = new_value;
          }
        void unsetTitle(void)
          {
            flagHasTitle = false;
          }
        void setLocation(std::string new_value)
          {
            flagHasLocation = true;
            storeLocation = new_value;
          }
        void unsetLocation(void)
          {
            flagHasLocation = false;
          }
        void setStart(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStart)
              {
                storeStart->remove_reference();
              }
            flagHasStart = true;
            storeStart = new_value;
          }
        void unsetStart(void)
          {
            if (flagHasStart)
              {
                storeStart->remove_reference();
              }
            flagHasStart = false;
          }
        void setEnd(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasEnd)
              {
                storeEnd->remove_reference();
              }
            flagHasEnd = true;
            storeEnd = new_value;
          }
        void unsetEnd(void)
          {
            if (flagHasEnd)
              {
                storeEnd->remove_reference();
              }
            flagHasEnd = false;
          }
        void setFrequencyType(TypeFrequencyType new_value)
          {
            flagHasFrequencyType = true;
            storeFrequencyType = new_value;
          }
        void setFrequencyType(const char *chars)
          {
            setFrequencyType(stringToFrequencyType(chars));
          }
        void setFrequencyType(std::string the_string)
          {
            setFrequencyType(stringToFrequencyType(the_string.c_str()));
          }
        void unsetFrequencyType(void)
          {
            flagHasFrequencyType = false;
          }
        void setFrequencyMultiplier(OInteger new_value)
          {
            flagHasFrequencyMultiplier = true;
            if (new_value < 1)
                throw("The value for field FrequencyMultiplier of TypeNativeDataJSON is less than the lower bound (1) for that field.");
            storeFrequencyMultiplier = new_value;
          }
        void unsetFrequencyMultiplier(void)
          {
            flagHasFrequencyMultiplier = false;
          }
        void setRecurrenceRule(std::string new_value)
          {
            flagHasRecurrenceRule = true;
            storeRecurrenceRule = new_value;
          }
        void unsetRecurrenceRule(void)
          {
            flagHasRecurrenceRule = false;
          }
        void setIsRecurring(bool new_value)
          {
            flagHasIsRecurring = true;
            storeIsRecurring = new_value;
          }
        void unsetIsRecurring(void)
          {
            flagHasIsRecurring = false;
          }
        void setIsAllDay(bool new_value)
          {
            flagHasIsAllDay = true;
            storeIsAllDay = new_value;
          }
        void unsetIsAllDay(void)
          {
            flagHasIsAllDay = false;
          }
        void setAvailability(TypeAvailability new_value)
          {
            flagHasAvailability = true;
            storeAvailability = new_value;
          }
        void setAvailability(const char *chars)
          {
            setAvailability(stringToAvailability(chars));
          }
        void setAvailability(std::string the_string)
          {
            setAvailability(stringToAvailability(the_string.c_str()));
          }
        void unsetAvailability(void)
          {
            flagHasAvailability = false;
          }
        void setStartAMPMAmbiguous(bool new_value)
          {
            flagHasStartAMPMAmbiguous = true;
            storeStartAMPMAmbiguous = new_value;
          }
        void unsetStartAMPMAmbiguous(void)
          {
            flagHasStartAMPMAmbiguous = false;
          }
        void setEndAMPMAmbiguous(bool new_value)
          {
            flagHasEndAMPMAmbiguous = true;
            storeEndAMPMAmbiguous = new_value;
          }
        void unsetEndAMPMAmbiguous(void)
          {
            flagHasEndAMPMAmbiguous = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasItemKind);
            handler->start_pair("ItemKind");
            handler->string_value(storeItemKind);
            assert(flagHasTitle);
            handler->start_pair("Title");
            handler->string_value(storeTitle);
            assert(flagHasLocation);
            handler->start_pair("Location");
            handler->string_value(storeLocation);
            assert(flagHasStart);
            handler->start_pair("Start");
            storeStart->write_as_json(handler);
            assert(flagHasEnd);
            handler->start_pair("End");
            storeEnd->write_as_json(handler);
            assert(flagHasFrequencyType);
            handler->start_pair("FrequencyType");
            switch (storeFrequencyType)
              {
                case FrequencyType_unknown:
                    handler->string_value("unknown");
                    break;
                case FrequencyType_one_time:
                    handler->string_value("one-time");
                    break;
                case FrequencyType_daily:
                    handler->string_value("daily");
                    break;
                case FrequencyType_weekly:
                    handler->string_value("weekly");
                    break;
                case FrequencyType_monthly:
                    handler->string_value("monthly");
                    break;
                case FrequencyType_yearly:
                    handler->string_value("yearly");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasFrequencyMultiplier);
            handler->start_pair("FrequencyMultiplier");
            handler->number_value(storeFrequencyMultiplier.get_o_integer());
            if (flagHasRecurrenceRule)
              {
                handler->start_pair("RecurrenceRule");
                handler->string_value(storeRecurrenceRule);
              }
            assert(flagHasIsRecurring);
            handler->start_pair("IsRecurring");
            handler->boolean_value(storeIsRecurring);
            assert(flagHasIsAllDay);
            handler->start_pair("IsAllDay");
            handler->boolean_value(storeIsAllDay);
            assert(flagHasAvailability);
            handler->start_pair("Availability");
            switch (storeAvailability)
              {
                case Availability_Free:
                    handler->string_value("Free");
                    break;
                case Availability_Busy:
                    handler->string_value("Busy");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasStartAMPMAmbiguous);
            handler->start_pair("StartAMPMAmbiguous");
            handler->boolean_value(storeStartAMPMAmbiguous);
            assert(flagHasEndAMPMAmbiguous);
            handler->start_pair("EndAMPMAmbiguous");
            handler->boolean_value(storeEndAMPMAmbiguous);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasItemKind()))
              {
                return "When parsing the object for %what%, the \"ItemKind\" field was missing.";
              }
            if (!(hasTitle()))
              {
                return "When parsing the object for %what%, the \"Title\" field was missing.";
              }
            if (!(hasLocation()))
              {
                return "When parsing the object for %what%, the \"Location\" field was missing.";
              }
            if (!(hasStart()))
              {
                return "When parsing the object for %what%, the \"Start\" field was missing.";
              }
            if (!(hasEnd()))
              {
                return "When parsing the object for %what%, the \"End\" field was missing.";
              }
            if (!(hasFrequencyType()))
              {
                return "When parsing the object for %what%, the \"FrequencyType\" field was missing.";
              }
            if (!(hasFrequencyMultiplier()))
              {
                return "When parsing the object for %what%, the \"FrequencyMultiplier\" field was missing.";
              }
            if (!(hasIsRecurring()))
              {
                return "When parsing the object for %what%, the \"IsRecurring\" field was missing.";
              }
            if (!(hasIsAllDay()))
              {
                return "When parsing the object for %what%, the \"IsAllDay\" field was missing.";
              }
            if (!(hasAvailability()))
              {
                return "When parsing the object for %what%, the \"Availability\" field was missing.";
              }
            if (!(hasStartAMPMAmbiguous()))
              {
                return "When parsing the object for %what%, the \"StartAMPMAmbiguous\" field was missing.";
              }
            if (!(hasEndAMPMAmbiguous()))
              {
                return "When parsing the object for %what%, the \"EndAMPMAmbiguous\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemKind;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocation;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStart;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEnd;
        class FieldGeneratorFrequencyType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorFrequencyType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorFrequencyType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToFrequencyType(result));
                  }
                virtual void handle_result(TypeFrequencyType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorFrequencyType, TypeFrequencyType, TypeFrequencyType > fieldGeneratorFrequencyType;
            static char lowerBoundFrequencyMultiplier[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundFrequencyMultiplier>, OInteger, o_integer > fieldGeneratorFrequencyMultiplier;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRecurrenceRule;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsAllDay;
        class FieldGeneratorAvailability : public JSONStringGenerator
              {
              protected:
                FieldGeneratorAvailability(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorAvailability(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToAvailability(result));
                  }
                virtual void handle_result(TypeAvailability result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorAvailability, TypeAvailability, TypeAvailability > fieldGeneratorAvailability;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStartAMPMAmbiguous;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEndAMPMAmbiguous;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorItemKind.have_value)
                  {
                    result->setItemKind(fieldGeneratorItemKind.value);
                    fieldGeneratorItemKind.have_value = false;
                  }
                else if (!(result->hasItemKind()))
                  {
                    error("When parsing the object for %what%, the \"ItemKind\" field was missing.");
                  }
                if (fieldGeneratorTitle.have_value)
                  {
                    result->setTitle(fieldGeneratorTitle.value);
                    fieldGeneratorTitle.have_value = false;
                  }
                else if (!(result->hasTitle()))
                  {
                    error("When parsing the object for %what%, the \"Title\" field was missing.");
                  }
                if (fieldGeneratorLocation.have_value)
                  {
                    result->setLocation(fieldGeneratorLocation.value);
                    fieldGeneratorLocation.have_value = false;
                  }
                else if (!(result->hasLocation()))
                  {
                    error("When parsing the object for %what%, the \"Location\" field was missing.");
                  }
                if (fieldGeneratorStart.have_value)
                  {
                    result->setStart(fieldGeneratorStart.value.referenced());
                    fieldGeneratorStart.have_value = false;
                  }
                else if (!(result->hasStart()))
                  {
                    error("When parsing the object for %what%, the \"Start\" field was missing.");
                  }
                if (fieldGeneratorEnd.have_value)
                  {
                    result->setEnd(fieldGeneratorEnd.value.referenced());
                    fieldGeneratorEnd.have_value = false;
                  }
                else if (!(result->hasEnd()))
                  {
                    error("When parsing the object for %what%, the \"End\" field was missing.");
                  }
                if (fieldGeneratorFrequencyType.have_value)
                  {
                    result->setFrequencyType(fieldGeneratorFrequencyType.value);
                    fieldGeneratorFrequencyType.have_value = false;
                  }
                else if (!(result->hasFrequencyType()))
                  {
                    error("When parsing the object for %what%, the \"FrequencyType\" field was missing.");
                  }
                if (fieldGeneratorFrequencyMultiplier.have_value)
                  {
                    result->setFrequencyMultiplier(fieldGeneratorFrequencyMultiplier.value);
                    fieldGeneratorFrequencyMultiplier.have_value = false;
                  }
                else if (!(result->hasFrequencyMultiplier()))
                  {
                    error("When parsing the object for %what%, the \"FrequencyMultiplier\" field was missing.");
                  }
                if (fieldGeneratorRecurrenceRule.have_value)
                  {
                    result->setRecurrenceRule(fieldGeneratorRecurrenceRule.value);
                    fieldGeneratorRecurrenceRule.have_value = false;
                  }
                if (fieldGeneratorIsRecurring.have_value)
                  {
                    result->setIsRecurring(fieldGeneratorIsRecurring.value);
                    fieldGeneratorIsRecurring.have_value = false;
                  }
                else if (!(result->hasIsRecurring()))
                  {
                    error("When parsing the object for %what%, the \"IsRecurring\" field was missing.");
                  }
                if (fieldGeneratorIsAllDay.have_value)
                  {
                    result->setIsAllDay(fieldGeneratorIsAllDay.value);
                    fieldGeneratorIsAllDay.have_value = false;
                  }
                else if (!(result->hasIsAllDay()))
                  {
                    error("When parsing the object for %what%, the \"IsAllDay\" field was missing.");
                  }
                if (fieldGeneratorAvailability.have_value)
                  {
                    result->setAvailability(fieldGeneratorAvailability.value);
                    fieldGeneratorAvailability.have_value = false;
                  }
                else if (!(result->hasAvailability()))
                  {
                    error("When parsing the object for %what%, the \"Availability\" field was missing.");
                  }
                if (fieldGeneratorStartAMPMAmbiguous.have_value)
                  {
                    result->setStartAMPMAmbiguous(fieldGeneratorStartAMPMAmbiguous.value);
                    fieldGeneratorStartAMPMAmbiguous.have_value = false;
                  }
                else if (!(result->hasStartAMPMAmbiguous()))
                  {
                    error("When parsing the object for %what%, the \"StartAMPMAmbiguous\" field was missing.");
                  }
                if (fieldGeneratorEndAMPMAmbiguous.have_value)
                  {
                    result->setEndAMPMAmbiguous(fieldGeneratorEndAMPMAmbiguous.value);
                    fieldGeneratorEndAMPMAmbiguous.have_value = false;
                  }
                else if (!(result->hasEndAMPMAmbiguous()))
                  {
                    error("When parsing the object for %what%, the \"EndAMPMAmbiguous\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "vailability") == 0)
                            return &fieldGeneratorAvailability;
                        break;
                    case 'E':
                        if (strncmp(&(field_name[1]), "nd", 2) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 0:
                                    return &fieldGeneratorEnd;
                                case 'A':
                                    if (strcmp(&(field_name[4]), "MPMAmbiguous") == 0)
                                        return &fieldGeneratorEndAMPMAmbiguous;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'F':
                        if (strncmp(&(field_name[1]), "requency", 8) == 0)
                          {
                            switch ((unsigned char)(field_name[9]))
                              {
                                case 'M':
                                    if (strcmp(&(field_name[10]), "ultiplier") == 0)
                                        return &fieldGeneratorFrequencyMultiplier;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[10]), "ype") == 0)
                                        return &fieldGeneratorFrequencyType;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'I':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 's':
                                switch ((unsigned char)(field_name[2]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[3]), "llDay") == 0)
                                            return &fieldGeneratorIsAllDay;
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[3]), "ecurring") == 0)
                                            return &fieldGeneratorIsRecurring;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 't':
                                if (strcmp(&(field_name[2]), "emKind") == 0)
                                    return &fieldGeneratorItemKind;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "ocation") == 0)
                            return &fieldGeneratorLocation;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ecurrenceRule") == 0)
                            return &fieldGeneratorRecurrenceRule;
                        break;
                    case 'S':
                        if (strncmp(&(field_name[1]), "tart", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 0:
                                    return &fieldGeneratorStart;
                                case 'A':
                                    if (strcmp(&(field_name[6]), "MPMAmbiguous") == 0)
                                        return &fieldGeneratorStartAMPMAmbiguous;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "itle") == 0)
                            return &fieldGeneratorTitle;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorItemKind("field \"ItemKind\" of the TypeNativeData class"), fieldGeneratorTitle("field \"Title\" of the TypeNativeData class"), fieldGeneratorLocation("field \"Location\" of the TypeNativeData class"), fieldGeneratorStart("field \"Start\" of the TypeNativeData class", ignore_extras), fieldGeneratorEnd("field \"End\" of the TypeNativeData class", ignore_extras), fieldGeneratorFrequencyType("field \"FrequencyType\" of the TypeNativeData class"), fieldGeneratorFrequencyMultiplier("field \"FrequencyMultiplier\" of the TypeNativeData class"), fieldGeneratorRecurrenceRule("field \"RecurrenceRule\" of the TypeNativeData class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the TypeNativeData class"), fieldGeneratorIsAllDay("field \"IsAllDay\" of the TypeNativeData class"), fieldGeneratorAvailability("field \"Availability\" of the TypeNativeData class"), fieldGeneratorStartAMPMAmbiguous("field \"StartAMPMAmbiguous\" of the TypeNativeData class"), fieldGeneratorEndAMPMAmbiguous("field \"EndAMPMAmbiguous\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorItemKind.reset();
                fieldGeneratorTitle.reset();
                fieldGeneratorLocation.reset();
                fieldGeneratorStart.reset();
                fieldGeneratorEnd.reset();
                fieldGeneratorFrequencyType.reset();
                fieldGeneratorFrequencyMultiplier.reset();
                fieldGeneratorRecurrenceRule.reset();
                fieldGeneratorIsRecurring.reset();
                fieldGeneratorIsAllDay.reset();
                fieldGeneratorAvailability.reset();
                fieldGeneratorStartAMPMAmbiguous.reset();
                fieldGeneratorEndAMPMAmbiguous.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasItemKind;
    std::string storeItemKind;
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasLocation;
    std::string storeLocation;
    bool flagHasStart;
    DateAndOrTimeJSON * storeStart;
    bool flagHasEnd;
    DateAndOrTimeJSON * storeEnd;
    bool flagHasFrequencyType;
    TypeFrequencyType storeFrequencyType;
    bool flagHasFrequencyMultiplier;
    OInteger storeFrequencyMultiplier;
    bool flagHasRecurrenceRule;
    std::string storeRecurrenceRule;
    bool flagHasIsRecurring;
    bool storeIsRecurring;
    bool flagHasIsAllDay;
    bool storeIsAllDay;
    bool flagHasAvailability;
    TypeAvailability storeAvailability;
    bool flagHasStartAMPMAmbiguous;
    bool storeStartAMPMAmbiguous;
    bool flagHasEndAMPMAmbiguous;
    bool storeEndAMPMAmbiguous;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasEventsConflictResult;
    DynamicResponseJSON * storeEventsConflictResult;
    bool flagHasCalendarPreferenceIsNotSetResult;
    DynamicResponseJSON * storeCalendarPreferenceIsNotSetResult;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CalendarCreateCalendarItemCommandJSON(const CalendarCreateCalendarItemCommandJSON &);
    CalendarCreateCalendarItemCommandJSON & operator=(const CalendarCreateCalendarItemCommandJSON &other);

    JSONValue * extraItemKindToJSON(void) const;
    JSONValue * extraTitleToJSON(void) const;
    JSONValue * extraLocationToJSON(void) const;
    JSONValue * extraStartToJSON(void) const;
    JSONValue * extraEndToJSON(void) const;
    JSONValue * extraFrequencyTypeToJSON(void) const;
    JSONValue * extraFrequencyMultiplierToJSON(void) const;
    JSONValue * extraRecurrenceRuleToJSON(void) const;
    JSONValue * extraIsRecurringToJSON(void) const;
    JSONValue * extraIsAllDayToJSON(void) const;
    JSONValue * extraAvailabilityToJSON(void) const;
    JSONValue * extraStartAMPMAmbiguousToJSON(void) const;
    JSONValue * extraEndAMPMAmbiguousToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraEventsConflictResultToJSON(void) const;
    JSONValue * extraCalendarPreferenceIsNotSetResultToJSON(void) const;

    void  fromJSONItemKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvailability(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartAMPMAmbiguous(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEndAMPMAmbiguous(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEventsConflictResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarPreferenceIsNotSetResult(JSONValue *json_value, bool ignore_extras = false);


  public:
    CalendarCreateCalendarItemCommandJSON(void);
    virtual ~CalendarCreateCalendarItemCommandJSON(void);
    const char * getCalendarCommandKind(void) const;
    bool  hasItemKind(void) const;
    std::string  getItemKind(void);
    const std::string  getItemKind(void) const;
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasLocation(void) const;
    std::string  getLocation(void);
    const std::string  getLocation(void) const;
    bool  hasStart(void) const;
    DateAndOrTimeJSON *  getStart(void);
    const DateAndOrTimeJSON *  getStart(void) const;
    bool  hasEnd(void) const;
    DateAndOrTimeJSON *  getEnd(void);
    const DateAndOrTimeJSON *  getEnd(void) const;
    bool  hasFrequencyType(void) const;
    TypeFrequencyType  getFrequencyType(void);
    const TypeFrequencyType  getFrequencyType(void) const;
    const char * getFrequencyTypeAsChars(void) const;
    std::string  getFrequencyTypeAsString(void) const;
    bool  hasFrequencyMultiplier(void) const;
    OInteger  getFrequencyMultiplier(void);
    const OInteger  getFrequencyMultiplier(void) const;
    bool  hasRecurrenceRule(void) const;
    std::string  getRecurrenceRule(void);
    const std::string  getRecurrenceRule(void) const;
    bool  hasIsRecurring(void) const;
    bool  getIsRecurring(void);
    const bool  getIsRecurring(void) const;
    bool  hasIsAllDay(void) const;
    bool  getIsAllDay(void);
    const bool  getIsAllDay(void) const;
    bool  hasAvailability(void) const;
    TypeAvailability  getAvailability(void);
    const TypeAvailability  getAvailability(void) const;
    const char * getAvailabilityAsChars(void) const;
    std::string  getAvailabilityAsString(void) const;
    bool  hasStartAMPMAmbiguous(void) const;
    bool  getStartAMPMAmbiguous(void);
    const bool  getStartAMPMAmbiguous(void) const;
    bool  hasEndAMPMAmbiguous(void) const;
    bool  getEndAMPMAmbiguous(void);
    const bool  getEndAMPMAmbiguous(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasEventsConflictResult(void) const;
    DynamicResponseJSON *  getEventsConflictResult(void);
    const DynamicResponseJSON *  getEventsConflictResult(void) const;
    bool  hasCalendarPreferenceIsNotSetResult(void) const;
    DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void);
    const DynamicResponseJSON *  getCalendarPreferenceIsNotSetResult(void) const;

    virtual size_t extraCalendarCreateCalendarItemCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCalendarCreateCalendarItemCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCalendarCreateCalendarItemCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCalendarCreateCalendarItemCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCalendarCreateCalendarItemCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCalendarCreateCalendarItemCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCalendarCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasItemKind)
            ++result;
        if (flagHasTitle)
            ++result;
        if (flagHasLocation)
            ++result;
        if (flagHasStart)
            ++result;
        if (flagHasEnd)
            ++result;
        if (flagHasFrequencyType)
            ++result;
        if (flagHasFrequencyMultiplier)
            ++result;
        if (flagHasRecurrenceRule)
            ++result;
        if (flagHasIsRecurring)
            ++result;
        if (flagHasIsAllDay)
            ++result;
        if (flagHasAvailability)
            ++result;
        if (flagHasStartAMPMAmbiguous)
            ++result;
        if (flagHasEndAMPMAmbiguous)
            ++result;
        if (flagHasNativeData)
            ++result;
        if (flagHasEventsConflictResult)
            ++result;
        if (flagHasCalendarPreferenceIsNotSetResult)
            ++result;
        result += extraCalendarCreateCalendarItemCommandComponentCount();
        return result;
      }
    const char *extraCalendarCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItemKind)
          {
            if (remainder == 0)
                return "ItemKind";
            --remainder;
          }
        if (flagHasTitle)
          {
            if (remainder == 0)
                return "Title";
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return "Location";
            --remainder;
          }
        if (flagHasStart)
          {
            if (remainder == 0)
                return "Start";
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return "End";
            --remainder;
          }
        if (flagHasFrequencyType)
          {
            if (remainder == 0)
                return "FrequencyType";
            --remainder;
          }
        if (flagHasFrequencyMultiplier)
          {
            if (remainder == 0)
                return "FrequencyMultiplier";
            --remainder;
          }
        if (flagHasRecurrenceRule)
          {
            if (remainder == 0)
                return "RecurrenceRule";
            --remainder;
          }
        if (flagHasIsRecurring)
          {
            if (remainder == 0)
                return "IsRecurring";
            --remainder;
          }
        if (flagHasIsAllDay)
          {
            if (remainder == 0)
                return "IsAllDay";
            --remainder;
          }
        if (flagHasAvailability)
          {
            if (remainder == 0)
                return "Availability";
            --remainder;
          }
        if (flagHasStartAMPMAmbiguous)
          {
            if (remainder == 0)
                return "StartAMPMAmbiguous";
            --remainder;
          }
        if (flagHasEndAMPMAmbiguous)
          {
            if (remainder == 0)
                return "EndAMPMAmbiguous";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return "EventsConflictResult";
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return "CalendarPreferenceIsNotSetResult";
            --remainder;
          }
        return extraCalendarCreateCalendarItemCommandComponentKey(remainder);
      }
    JSONValue *extraCalendarCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasItemKind)
          {
            if (remainder == 0)
                return extraItemKindToJSON();
            --remainder;
          }
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasStart)
          {
            if (remainder == 0)
                return extraStartToJSON();
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return extraEndToJSON();
            --remainder;
          }
        if (flagHasFrequencyType)
          {
            if (remainder == 0)
                return extraFrequencyTypeToJSON();
            --remainder;
          }
        if (flagHasFrequencyMultiplier)
          {
            if (remainder == 0)
                return extraFrequencyMultiplierToJSON();
            --remainder;
          }
        if (flagHasRecurrenceRule)
          {
            if (remainder == 0)
                return extraRecurrenceRuleToJSON();
            --remainder;
          }
        if (flagHasIsRecurring)
          {
            if (remainder == 0)
                return extraIsRecurringToJSON();
            --remainder;
          }
        if (flagHasIsAllDay)
          {
            if (remainder == 0)
                return extraIsAllDayToJSON();
            --remainder;
          }
        if (flagHasAvailability)
          {
            if (remainder == 0)
                return extraAvailabilityToJSON();
            --remainder;
          }
        if (flagHasStartAMPMAmbiguous)
          {
            if (remainder == 0)
                return extraStartAMPMAmbiguousToJSON();
            --remainder;
          }
        if (flagHasEndAMPMAmbiguous)
          {
            if (remainder == 0)
                return extraEndAMPMAmbiguousToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return extraEventsConflictResultToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        return extraCalendarCreateCalendarItemCommandComponentValue(remainder);
      }
    const JSONValue *extraCalendarCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasItemKind)
          {
            if (remainder == 0)
                return extraItemKindToJSON();
            --remainder;
          }
        if (flagHasTitle)
          {
            if (remainder == 0)
                return extraTitleToJSON();
            --remainder;
          }
        if (flagHasLocation)
          {
            if (remainder == 0)
                return extraLocationToJSON();
            --remainder;
          }
        if (flagHasStart)
          {
            if (remainder == 0)
                return extraStartToJSON();
            --remainder;
          }
        if (flagHasEnd)
          {
            if (remainder == 0)
                return extraEndToJSON();
            --remainder;
          }
        if (flagHasFrequencyType)
          {
            if (remainder == 0)
                return extraFrequencyTypeToJSON();
            --remainder;
          }
        if (flagHasFrequencyMultiplier)
          {
            if (remainder == 0)
                return extraFrequencyMultiplierToJSON();
            --remainder;
          }
        if (flagHasRecurrenceRule)
          {
            if (remainder == 0)
                return extraRecurrenceRuleToJSON();
            --remainder;
          }
        if (flagHasIsRecurring)
          {
            if (remainder == 0)
                return extraIsRecurringToJSON();
            --remainder;
          }
        if (flagHasIsAllDay)
          {
            if (remainder == 0)
                return extraIsAllDayToJSON();
            --remainder;
          }
        if (flagHasAvailability)
          {
            if (remainder == 0)
                return extraAvailabilityToJSON();
            --remainder;
          }
        if (flagHasStartAMPMAmbiguous)
          {
            if (remainder == 0)
                return extraStartAMPMAmbiguousToJSON();
            --remainder;
          }
        if (flagHasEndAMPMAmbiguous)
          {
            if (remainder == 0)
                return extraEndAMPMAmbiguousToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasEventsConflictResult)
          {
            if (remainder == 0)
                return extraEventsConflictResultToJSON();
            --remainder;
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            if (remainder == 0)
                return extraCalendarPreferenceIsNotSetResultToJSON();
            --remainder;
          }
        return extraCalendarCreateCalendarItemCommandComponentValue(remainder);
      }
    JSONValue *extraCalendarCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "vailability") == 0)
                    return (flagHasAvailability ? extraAvailabilityToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 0:
                                    return (flagHasEnd ? extraEndToJSON() : NULL);
                                case 'A':
                                    if (strcmp(&(field_name[4]), "MPMAmbiguous") == 0)
                                        return (flagHasEndAMPMAmbiguous ? extraEndAMPMAmbiguousToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strcmp(&(field_name[2]), "entsConflictResult") == 0)
                            return (flagHasEventsConflictResult ? extraEventsConflictResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "requency", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'M':
                            if (strcmp(&(field_name[10]), "ultiplier") == 0)
                                return (flagHasFrequencyMultiplier ? extraFrequencyMultiplierToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[10]), "ype") == 0)
                                return (flagHasFrequencyType ? extraFrequencyTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 's':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[3]), "llDay") == 0)
                                    return (flagHasIsAllDay ? extraIsAllDayToJSON() : NULL);
                                break;
                            case 'R':
                                if (strcmp(&(field_name[3]), "ecurring") == 0)
                                    return (flagHasIsRecurring ? extraIsRecurringToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "emKind") == 0)
                            return (flagHasItemKind ? extraItemKindToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ecurrenceRule") == 0)
                    return (flagHasRecurrenceRule ? extraRecurrenceRuleToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 0:
                            return (flagHasStart ? extraStartToJSON() : NULL);
                        case 'A':
                            if (strcmp(&(field_name[6]), "MPMAmbiguous") == 0)
                                return (flagHasStartAMPMAmbiguous ? extraStartAMPMAmbiguousToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCalendarCreateCalendarItemCommandLookup(field_name);
      }
    const JSONValue *extraCalendarCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "vailability") == 0)
                    return (flagHasAvailability ? extraAvailabilityToJSON() : NULL);
                break;
            case 'C':
                if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                    return (flagHasCalendarPreferenceIsNotSetResult ? extraCalendarPreferenceIsNotSetResultToJSON() : NULL);
                break;
            case 'E':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'n':
                        if (strncmp(&(field_name[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(field_name[3]))
                              {
                                case 0:
                                    return (flagHasEnd ? extraEndToJSON() : NULL);
                                case 'A':
                                    if (strcmp(&(field_name[4]), "MPMAmbiguous") == 0)
                                        return (flagHasEndAMPMAmbiguous ? extraEndAMPMAmbiguousToJSON() : NULL);
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strcmp(&(field_name[2]), "entsConflictResult") == 0)
                            return (flagHasEventsConflictResult ? extraEventsConflictResultToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "requency", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'M':
                            if (strcmp(&(field_name[10]), "ultiplier") == 0)
                                return (flagHasFrequencyMultiplier ? extraFrequencyMultiplierToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[10]), "ype") == 0)
                                return (flagHasFrequencyType ? extraFrequencyTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 's':
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[3]), "llDay") == 0)
                                    return (flagHasIsAllDay ? extraIsAllDayToJSON() : NULL);
                                break;
                            case 'R':
                                if (strcmp(&(field_name[3]), "ecurring") == 0)
                                    return (flagHasIsRecurring ? extraIsRecurringToJSON() : NULL);
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "emKind") == 0)
                            return (flagHasItemKind ? extraItemKindToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ocation") == 0)
                    return (flagHasLocation ? extraLocationToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "ecurrenceRule") == 0)
                    return (flagHasRecurrenceRule ? extraRecurrenceRuleToJSON() : NULL);
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 0:
                            return (flagHasStart ? extraStartToJSON() : NULL);
                        case 'A':
                            if (strcmp(&(field_name[6]), "MPMAmbiguous") == 0)
                                return (flagHasStartAMPMAmbiguous ? extraStartAMPMAmbiguousToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "itle") == 0)
                    return (flagHasTitle ? extraTitleToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCalendarCreateCalendarItemCommandLookup(field_name);
      }

    void setItemKind(std::string new_value)
      {
        flagHasItemKind = true;
        storeItemKind = new_value;
      }
    void unsetItemKind(void)
      {
        flagHasItemKind = false;
      }
    void setTitle(std::string new_value)
      {
        flagHasTitle = true;
        storeTitle = new_value;
      }
    void unsetTitle(void)
      {
        flagHasTitle = false;
      }
    void setLocation(std::string new_value)
      {
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        flagHasLocation = false;
      }
    void setStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasStart)
          {
            storeStart->remove_reference();
          }
        flagHasStart = true;
        storeStart = new_value;
      }
    void unsetStart(void)
      {
        if (flagHasStart)
          {
            storeStart->remove_reference();
          }
        flagHasStart = false;
      }
    void setEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEnd)
          {
            storeEnd->remove_reference();
          }
        flagHasEnd = true;
        storeEnd = new_value;
      }
    void unsetEnd(void)
      {
        if (flagHasEnd)
          {
            storeEnd->remove_reference();
          }
        flagHasEnd = false;
      }
    void setFrequencyType(TypeFrequencyType new_value)
      {
        flagHasFrequencyType = true;
        storeFrequencyType = new_value;
      }
    void setFrequencyType(const char *chars)
      {
        setFrequencyType(stringToFrequencyType(chars));
      }
    void setFrequencyType(std::string the_string)
      {
        setFrequencyType(stringToFrequencyType(the_string.c_str()));
      }
    void unsetFrequencyType(void)
      {
        flagHasFrequencyType = false;
      }
    void setFrequencyMultiplier(OInteger new_value)
      {
        flagHasFrequencyMultiplier = true;
        if (new_value < 1)
            throw("The value for field FrequencyMultiplier of CalendarCreateCalendarItemCommandJSON is less than the lower bound (1) for that field.");
        storeFrequencyMultiplier = new_value;
      }
    void unsetFrequencyMultiplier(void)
      {
        flagHasFrequencyMultiplier = false;
      }
    void setRecurrenceRule(std::string new_value)
      {
        flagHasRecurrenceRule = true;
        storeRecurrenceRule = new_value;
      }
    void unsetRecurrenceRule(void)
      {
        flagHasRecurrenceRule = false;
      }
    void setIsRecurring(bool new_value)
      {
        flagHasIsRecurring = true;
        storeIsRecurring = new_value;
      }
    void unsetIsRecurring(void)
      {
        flagHasIsRecurring = false;
      }
    void setIsAllDay(bool new_value)
      {
        flagHasIsAllDay = true;
        storeIsAllDay = new_value;
      }
    void unsetIsAllDay(void)
      {
        flagHasIsAllDay = false;
      }
    void setAvailability(TypeAvailability new_value)
      {
        flagHasAvailability = true;
        storeAvailability = new_value;
      }
    void setAvailability(const char *chars)
      {
        setAvailability(stringToAvailability(chars));
      }
    void setAvailability(std::string the_string)
      {
        setAvailability(stringToAvailability(the_string.c_str()));
      }
    void unsetAvailability(void)
      {
        flagHasAvailability = false;
      }
    void setStartAMPMAmbiguous(bool new_value)
      {
        flagHasStartAMPMAmbiguous = true;
        storeStartAMPMAmbiguous = new_value;
      }
    void unsetStartAMPMAmbiguous(void)
      {
        flagHasStartAMPMAmbiguous = false;
      }
    void setEndAMPMAmbiguous(bool new_value)
      {
        flagHasEndAMPMAmbiguous = true;
        storeEndAMPMAmbiguous = new_value;
      }
    void unsetEndAMPMAmbiguous(void)
      {
        flagHasEndAMPMAmbiguous = false;
      }
    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }
    void setEventsConflictResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEventsConflictResult)
          {
            storeEventsConflictResult->remove_reference();
          }
        flagHasEventsConflictResult = true;
        storeEventsConflictResult = new_value;
      }
    void unsetEventsConflictResult(void)
      {
        if (flagHasEventsConflictResult)
          {
            storeEventsConflictResult->remove_reference();
          }
        flagHasEventsConflictResult = false;
      }
    void setCalendarPreferenceIsNotSetResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = true;
        storeCalendarPreferenceIsNotSetResult = new_value;
      }
    void unsetCalendarPreferenceIsNotSetResult(void)
      {
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            storeCalendarPreferenceIsNotSetResult->remove_reference();
          }
        flagHasCalendarPreferenceIsNotSetResult = false;
      }

    virtual void extraCalendarCreateCalendarItemCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCalendarCreateCalendarItemCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCalendarCreateCalendarItemCommandLookup(key);
        if (old_field == NULL)
          {
            extraCalendarCreateCalendarItemCommandAppendPair(key, new_component);
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
    void extraCalendarCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "vailability") == 0)
                    {
                    fromJSONAvailability(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 0:
                                    {
                                    fromJSONEnd(new_component, false);
                                    return;
                                    }
                                case 'A':
                                    if (strcmp(&(key[4]), "MPMAmbiguous") == 0)
                                        {
                                        fromJSONEndAMPMAmbiguous(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strcmp(&(key[2]), "entsConflictResult") == 0)
                            {
                            fromJSONEventsConflictResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strncmp(&(key[1]), "requency", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'M':
                            if (strcmp(&(key[10]), "ultiplier") == 0)
                                {
                                fromJSONFrequencyMultiplier(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[10]), "ype") == 0)
                                {
                                fromJSONFrequencyType(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                switch ((unsigned char)(key[1]))
                  {
                    case 's':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'A':
                                if (strcmp(&(key[3]), "llDay") == 0)
                                    {
                                    fromJSONIsAllDay(new_component, false);
                                    return;
                                    }
                                break;
                            case 'R':
                                if (strcmp(&(key[3]), "ecurring") == 0)
                                    {
                                    fromJSONIsRecurring(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "emKind") == 0)
                            {
                            fromJSONItemKind(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ecurrenceRule") == 0)
                    {
                    fromJSONRecurrenceRule(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strncmp(&(key[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 0:
                            {
                            fromJSONStart(new_component, false);
                            return;
                            }
                        case 'A':
                            if (strcmp(&(key[6]), "MPMAmbiguous") == 0)
                                {
                                fromJSONStartAMPMAmbiguous(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "itle") == 0)
                    {
                    fromJSONTitle(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCalendarCreateCalendarItemCommandAppendPair(key, new_component);
      }
    void extraCalendarCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "vailability") == 0)
                    {
                    fromJSONAvailability(new_component, false);
                    return;
                    }
                break;
            case 'C':
                if (strcmp(&(key[1]), "alendarPreferenceIsNotSetResult") == 0)
                    {
                    fromJSONCalendarPreferenceIsNotSetResult(new_component, false);
                    return;
                    }
                break;
            case 'E':
                switch ((unsigned char)(key[1]))
                  {
                    case 'n':
                        if (strncmp(&(key[2]), "d", 1) == 0)
                          {
                            switch ((unsigned char)(key[3]))
                              {
                                case 0:
                                    {
                                    fromJSONEnd(new_component, false);
                                    return;
                                    }
                                case 'A':
                                    if (strcmp(&(key[4]), "MPMAmbiguous") == 0)
                                        {
                                        fromJSONEndAMPMAmbiguous(new_component, false);
                                        return;
                                        }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'v':
                        if (strcmp(&(key[2]), "entsConflictResult") == 0)
                            {
                            fromJSONEventsConflictResult(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'F':
                if (strncmp(&(key[1]), "requency", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'M':
                            if (strcmp(&(key[10]), "ultiplier") == 0)
                                {
                                fromJSONFrequencyMultiplier(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[10]), "ype") == 0)
                                {
                                fromJSONFrequencyType(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'I':
                switch ((unsigned char)(key[1]))
                  {
                    case 's':
                        switch ((unsigned char)(key[2]))
                          {
                            case 'A':
                                if (strcmp(&(key[3]), "llDay") == 0)
                                    {
                                    fromJSONIsAllDay(new_component, false);
                                    return;
                                    }
                                break;
                            case 'R':
                                if (strcmp(&(key[3]), "ecurring") == 0)
                                    {
                                    fromJSONIsRecurring(new_component, false);
                                    return;
                                    }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 't':
                        if (strcmp(&(key[2]), "emKind") == 0)
                            {
                            fromJSONItemKind(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'L':
                if (strcmp(&(key[1]), "ocation") == 0)
                    {
                    fromJSONLocation(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "ecurrenceRule") == 0)
                    {
                    fromJSONRecurrenceRule(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strncmp(&(key[1]), "tart", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 0:
                            {
                            fromJSONStart(new_component, false);
                            return;
                            }
                        case 'A':
                            if (strcmp(&(key[6]), "MPMAmbiguous") == 0)
                                {
                                fromJSONStartAMPMAmbiguous(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "itle") == 0)
                    {
                    fromJSONTitle(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCalendarCreateCalendarItemCommandSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        CalendarCommandJSON::write_fields_as_json(handler);
        assert(flagHasItemKind);
        handler->start_pair("ItemKind");
        handler->string_value(storeItemKind);
        assert(flagHasTitle);
        handler->start_pair("Title");
        handler->string_value(storeTitle);
        assert(flagHasLocation);
        handler->start_pair("Location");
        handler->string_value(storeLocation);
        assert(flagHasStart);
        handler->start_pair("Start");
        storeStart->write_as_json(handler);
        assert(flagHasEnd);
        handler->start_pair("End");
        storeEnd->write_as_json(handler);
        assert(flagHasFrequencyType);
        handler->start_pair("FrequencyType");
        switch (storeFrequencyType)
          {
            case FrequencyType_unknown:
                handler->string_value("unknown");
                break;
            case FrequencyType_one_time:
                handler->string_value("one-time");
                break;
            case FrequencyType_daily:
                handler->string_value("daily");
                break;
            case FrequencyType_weekly:
                handler->string_value("weekly");
                break;
            case FrequencyType_monthly:
                handler->string_value("monthly");
                break;
            case FrequencyType_yearly:
                handler->string_value("yearly");
                break;
            default:
                assert(false);
          }
        assert(flagHasFrequencyMultiplier);
        handler->start_pair("FrequencyMultiplier");
        handler->number_value(storeFrequencyMultiplier.get_o_integer());
        if (flagHasRecurrenceRule)
          {
            handler->start_pair("RecurrenceRule");
            handler->string_value(storeRecurrenceRule);
          }
        assert(flagHasIsRecurring);
        handler->start_pair("IsRecurring");
        handler->boolean_value(storeIsRecurring);
        assert(flagHasIsAllDay);
        handler->start_pair("IsAllDay");
        handler->boolean_value(storeIsAllDay);
        assert(flagHasAvailability);
        handler->start_pair("Availability");
        switch (storeAvailability)
          {
            case Availability_Free:
                handler->string_value("Free");
                break;
            case Availability_Busy:
                handler->string_value("Busy");
                break;
            default:
                assert(false);
          }
        assert(flagHasStartAMPMAmbiguous);
        handler->start_pair("StartAMPMAmbiguous");
        handler->boolean_value(storeStartAMPMAmbiguous);
        assert(flagHasEndAMPMAmbiguous);
        handler->start_pair("EndAMPMAmbiguous");
        handler->boolean_value(storeEndAMPMAmbiguous);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasEventsConflictResult)
          {
            handler->start_pair("EventsConflictResult");
            storeEventsConflictResult->write_as_json(handler);
          }
        if (flagHasCalendarPreferenceIsNotSetResult)
          {
            handler->start_pair("CalendarPreferenceIsNotSetResult");
            storeCalendarPreferenceIsNotSetResult->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasItemKind()))
          {
            return "When parsing the object for %what%, the \"ItemKind\" field was missing.";
          }
        if (!(hasTitle()))
          {
            return "When parsing the object for %what%, the \"Title\" field was missing.";
          }
        if (!(hasLocation()))
          {
            return "When parsing the object for %what%, the \"Location\" field was missing.";
          }
        if (!(hasStart()))
          {
            return "When parsing the object for %what%, the \"Start\" field was missing.";
          }
        if (!(hasEnd()))
          {
            return "When parsing the object for %what%, the \"End\" field was missing.";
          }
        if (!(hasFrequencyType()))
          {
            return "When parsing the object for %what%, the \"FrequencyType\" field was missing.";
          }
        if (!(hasFrequencyMultiplier()))
          {
            return "When parsing the object for %what%, the \"FrequencyMultiplier\" field was missing.";
          }
        if (!(hasIsRecurring()))
          {
            return "When parsing the object for %what%, the \"IsRecurring\" field was missing.";
          }
        if (!(hasIsAllDay()))
          {
            return "When parsing the object for %what%, the \"IsAllDay\" field was missing.";
          }
        if (!(hasAvailability()))
          {
            return "When parsing the object for %what%, the \"Availability\" field was missing.";
          }
        if (!(hasStartAMPMAmbiguous()))
          {
            return "When parsing the object for %what%, the \"StartAMPMAmbiguous\" field was missing.";
          }
        if (!(hasEndAMPMAmbiguous()))
          {
            return "When parsing the object for %what%, the \"EndAMPMAmbiguous\" field was missing.";
          }
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static CalendarCreateCalendarItemCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CalendarCreateCalendarItemCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CalendarCreateCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarCreateCalendarItemCommandJSON>, CalendarCreateCalendarItemCommandJSON *, bool> generator("Type CalendarCreateCalendarItemCommand", ignore_extras);
            parse_json_value(text, "Text for CalendarCreateCalendarItemCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CalendarCreateCalendarItemCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CalendarCreateCalendarItemCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarCreateCalendarItemCommandJSON>, CalendarCreateCalendarItemCommandJSON *, bool> generator("Type CalendarCreateCalendarItemCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CalendarCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemKind;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorEnd;
    class FieldGeneratorFrequencyType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFrequencyType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFrequencyType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFrequencyType(result));
              }
            virtual void handle_result(TypeFrequencyType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFrequencyType, TypeFrequencyType, TypeFrequencyType > fieldGeneratorFrequencyType;
        static char lowerBoundFrequencyMultiplier[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundFrequencyMultiplier>, OInteger, o_integer > fieldGeneratorFrequencyMultiplier;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRecurrenceRule;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsAllDay;
    class FieldGeneratorAvailability : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAvailability(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAvailability(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAvailability(result));
              }
            virtual void handle_result(TypeAvailability result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorAvailability, TypeAvailability, TypeAvailability > fieldGeneratorAvailability;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStartAMPMAmbiguous;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEndAMPMAmbiguous;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorEventsConflictResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorCalendarPreferenceIsNotSetResult;
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
            if (!(strcmp(getCalendarCommandJSONKey().c_str(), "CreateItem") == 0))
                throw("The key field has a value other than `CreateItem'.");
            CalendarCreateCalendarItemCommandJSON *result = new CalendarCreateCalendarItemCommandJSON();
            assert(result != NULL);
            RCHandle<CalendarCreateCalendarItemCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCalendarCreateCalendarItemCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CalendarCommandJSON *new_result)
          {
            handle_result((CalendarCreateCalendarItemCommandJSON *)new_result);
          }
        void finish(CalendarCreateCalendarItemCommandJSON *result)
          {
            if (fieldGeneratorItemKind.have_value)
              {
                result->setItemKind(fieldGeneratorItemKind.value);
                fieldGeneratorItemKind.have_value = false;
              }
            else if (!(result->hasItemKind()))
              {
                error("When parsing the object for %what%, the \"ItemKind\" field was missing.");
              }
            if (fieldGeneratorTitle.have_value)
              {
                result->setTitle(fieldGeneratorTitle.value);
                fieldGeneratorTitle.have_value = false;
              }
            else if (!(result->hasTitle()))
              {
                error("When parsing the object for %what%, the \"Title\" field was missing.");
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value);
                fieldGeneratorLocation.have_value = false;
              }
            else if (!(result->hasLocation()))
              {
                error("When parsing the object for %what%, the \"Location\" field was missing.");
              }
            if (fieldGeneratorStart.have_value)
              {
                result->setStart(fieldGeneratorStart.value.referenced());
                fieldGeneratorStart.have_value = false;
              }
            else if (!(result->hasStart()))
              {
                error("When parsing the object for %what%, the \"Start\" field was missing.");
              }
            if (fieldGeneratorEnd.have_value)
              {
                result->setEnd(fieldGeneratorEnd.value.referenced());
                fieldGeneratorEnd.have_value = false;
              }
            else if (!(result->hasEnd()))
              {
                error("When parsing the object for %what%, the \"End\" field was missing.");
              }
            if (fieldGeneratorFrequencyType.have_value)
              {
                result->setFrequencyType(fieldGeneratorFrequencyType.value);
                fieldGeneratorFrequencyType.have_value = false;
              }
            else if (!(result->hasFrequencyType()))
              {
                error("When parsing the object for %what%, the \"FrequencyType\" field was missing.");
              }
            if (fieldGeneratorFrequencyMultiplier.have_value)
              {
                result->setFrequencyMultiplier(fieldGeneratorFrequencyMultiplier.value);
                fieldGeneratorFrequencyMultiplier.have_value = false;
              }
            else if (!(result->hasFrequencyMultiplier()))
              {
                error("When parsing the object for %what%, the \"FrequencyMultiplier\" field was missing.");
              }
            if (fieldGeneratorRecurrenceRule.have_value)
              {
                result->setRecurrenceRule(fieldGeneratorRecurrenceRule.value);
                fieldGeneratorRecurrenceRule.have_value = false;
              }
            if (fieldGeneratorIsRecurring.have_value)
              {
                result->setIsRecurring(fieldGeneratorIsRecurring.value);
                fieldGeneratorIsRecurring.have_value = false;
              }
            else if (!(result->hasIsRecurring()))
              {
                error("When parsing the object for %what%, the \"IsRecurring\" field was missing.");
              }
            if (fieldGeneratorIsAllDay.have_value)
              {
                result->setIsAllDay(fieldGeneratorIsAllDay.value);
                fieldGeneratorIsAllDay.have_value = false;
              }
            else if (!(result->hasIsAllDay()))
              {
                error("When parsing the object for %what%, the \"IsAllDay\" field was missing.");
              }
            if (fieldGeneratorAvailability.have_value)
              {
                result->setAvailability(fieldGeneratorAvailability.value);
                fieldGeneratorAvailability.have_value = false;
              }
            else if (!(result->hasAvailability()))
              {
                error("When parsing the object for %what%, the \"Availability\" field was missing.");
              }
            if (fieldGeneratorStartAMPMAmbiguous.have_value)
              {
                result->setStartAMPMAmbiguous(fieldGeneratorStartAMPMAmbiguous.value);
                fieldGeneratorStartAMPMAmbiguous.have_value = false;
              }
            else if (!(result->hasStartAMPMAmbiguous()))
              {
                error("When parsing the object for %what%, the \"StartAMPMAmbiguous\" field was missing.");
              }
            if (fieldGeneratorEndAMPMAmbiguous.have_value)
              {
                result->setEndAMPMAmbiguous(fieldGeneratorEndAMPMAmbiguous.value);
                fieldGeneratorEndAMPMAmbiguous.have_value = false;
              }
            else if (!(result->hasEndAMPMAmbiguous()))
              {
                error("When parsing the object for %what%, the \"EndAMPMAmbiguous\" field was missing.");
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            if (fieldGeneratorEventsConflictResult.have_value)
              {
                result->setEventsConflictResult(fieldGeneratorEventsConflictResult.value.referenced());
                fieldGeneratorEventsConflictResult.have_value = false;
              }
            if (fieldGeneratorCalendarPreferenceIsNotSetResult.have_value)
              {
                result->setCalendarPreferenceIsNotSetResult(fieldGeneratorCalendarPreferenceIsNotSetResult.value.referenced());
                fieldGeneratorCalendarPreferenceIsNotSetResult.have_value = false;
              }
            CalendarCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CalendarCreateCalendarItemCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "vailability") == 0)
                        return &fieldGeneratorAvailability;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "alendarPreferenceIsNotSetResult") == 0)
                        return &fieldGeneratorCalendarPreferenceIsNotSetResult;
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strncmp(&(field_name[2]), "d", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 0:
                                        return &fieldGeneratorEnd;
                                    case 'A':
                                        if (strcmp(&(field_name[4]), "MPMAmbiguous") == 0)
                                            return &fieldGeneratorEndAMPMAmbiguous;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strcmp(&(field_name[2]), "entsConflictResult") == 0)
                                return &fieldGeneratorEventsConflictResult;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "requency", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'M':
                                if (strcmp(&(field_name[10]), "ultiplier") == 0)
                                    return &fieldGeneratorFrequencyMultiplier;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[10]), "ype") == 0)
                                    return &fieldGeneratorFrequencyType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[3]), "llDay") == 0)
                                        return &fieldGeneratorIsAllDay;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[3]), "ecurring") == 0)
                                        return &fieldGeneratorIsRecurring;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "emKind") == 0)
                                return &fieldGeneratorItemKind;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ocation") == 0)
                        return &fieldGeneratorLocation;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ecurrenceRule") == 0)
                        return &fieldGeneratorRecurrenceRule;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "tart", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 0:
                                return &fieldGeneratorStart;
                            case 'A':
                                if (strcmp(&(field_name[6]), "MPMAmbiguous") == 0)
                                    return &fieldGeneratorStartAMPMAmbiguous;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "itle") == 0)
                        return &fieldGeneratorTitle;
                    break;
                default:
                    break;
              }
            return CalendarCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CalendarCommandJSON::Generator(ignore_extras), fieldGeneratorItemKind("field \"ItemKind\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorTitle("field \"Title\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorLocation("field \"Location\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorStart("field \"Start\" of the CalendarCreateCalendarItemCommand class", ignore_extras), fieldGeneratorEnd("field \"End\" of the CalendarCreateCalendarItemCommand class", ignore_extras), fieldGeneratorFrequencyType("field \"FrequencyType\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorFrequencyMultiplier("field \"FrequencyMultiplier\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorRecurrenceRule("field \"RecurrenceRule\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorIsAllDay("field \"IsAllDay\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorAvailability("field \"Availability\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorStartAMPMAmbiguous("field \"StartAMPMAmbiguous\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorEndAMPMAmbiguous("field \"EndAMPMAmbiguous\" of the CalendarCreateCalendarItemCommand class"), fieldGeneratorNativeData("field \"NativeData\" of the CalendarCreateCalendarItemCommand class", ignore_extras), fieldGeneratorEventsConflictResult("field \"EventsConflictResult\" of the CalendarCreateCalendarItemCommand class", ignore_extras), fieldGeneratorCalendarPreferenceIsNotSetResult("field \"CalendarPreferenceIsNotSetResult\" of the CalendarCreateCalendarItemCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CalendarCreateCalendarItemCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorItemKind.reset();
            fieldGeneratorTitle.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorStart.reset();
            fieldGeneratorEnd.reset();
            fieldGeneratorFrequencyType.reset();
            fieldGeneratorFrequencyMultiplier.reset();
            fieldGeneratorRecurrenceRule.reset();
            fieldGeneratorIsRecurring.reset();
            fieldGeneratorIsAllDay.reset();
            fieldGeneratorAvailability.reset();
            fieldGeneratorStartAMPMAmbiguous.reset();
            fieldGeneratorEndAMPMAmbiguous.reset();
            fieldGeneratorNativeData.reset();
            fieldGeneratorEventsConflictResult.reset();
            fieldGeneratorCalendarPreferenceIsNotSetResult.reset();
            CalendarCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CALENDARCREATECALENDARITEMCOMMANDJSON_H */
