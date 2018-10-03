/* file "DateTimeSpecJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DATETIMESPECJSON_H
#define DATETIMESPECJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "DateAndOrTimeJSON.h"
#include "ScheduledEventSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DateTimeSpecJSON : public ReferenceCounted
  {
  public:
    enum TypeDayPhaseKnownValues
      {
        DayPhase_Unknown,
        DayPhase_All_x20_day,
        DayPhase_Midnight,
        DayPhase_Dawn,
        DayPhase_Morning,
        DayPhase_Noon,
        DayPhase_Afternoon,
        DayPhase_Dusk,
        DayPhase_Evening,
        DayPhase_Night,
        DayPhase__none
      };
    struct TypeDayPhase
      {
        bool in_known_list;
        std::string string_value;
        TypeDayPhaseKnownValues list_value;

        TypeDayPhase(void);
        TypeDayPhase(const TypeDayPhase &other);
        TypeDayPhase(TypeDayPhaseKnownValues other);
        bool  operator==(const TypeDayPhase &other) const;
        bool  operator!=(const TypeDayPhase &other) const;
        bool  operator<(const TypeDayPhase &other) const;
        bool  operator>(const TypeDayPhase &other) const;
        bool  operator>=(const TypeDayPhase &other) const;
        bool  operator<=(const TypeDayPhase &other) const;

      };

    static TypeDayPhaseKnownValues  stringToDayPhase(const char *chars);
    static const char * stringFromDayPhase(TypeDayPhaseKnownValues the_enum);

  private:
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasScheduledEventSpec;
    ScheduledEventSpecJSON * storeScheduledEventSpec;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    bool flagHasPrepositionText;
    std::string storePrepositionText;
    bool flagHasHoliday;
    std::string storeHoliday;
    bool flagHasDayPhase;
    TypeDayPhase storeDayPhase;
    bool flagHasYearMentioned;
    bool storeYearMentioned;
    bool flagHasMonthMentioned;
    bool storeMonthMentioned;
    bool flagHasDayOfMonthMentioned;
    bool storeDayOfMonthMentioned;
    bool flagHasDayOfWeekMentioned;
    bool storeDayOfWeekMentioned;
    bool flagHasDateMentioned;
    bool storeDateMentioned;
    bool flagHasTimeMentioned;
    bool storeTimeMentioned;
    bool flagHasTodayRequested;
    bool storeTodayRequested;
    bool flagHasNowRequested;
    bool storeNowRequested;
    bool flagHasRelativeToNow;
    bool storeRelativeToNow;
    bool flagHasRelativeToConversationDateTime;
    bool storeRelativeToConversationDateTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DateTimeSpecJSON(const DateTimeSpecJSON &);
    DateTimeSpecJSON & operator=(const DateTimeSpecJSON &other);

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScheduledEventSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrepositionText(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHoliday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDayPhase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMonthMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDayOfMonthMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDayOfWeekMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeMentioned(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTodayRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNowRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRelativeToNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRelativeToConversationDateTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    DateTimeSpecJSON(void);
    virtual ~DateTimeSpecJSON(void);
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasScheduledEventSpec(void) const;
    ScheduledEventSpecJSON *  getScheduledEventSpec(void);
    const ScheduledEventSpecJSON *  getScheduledEventSpec(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;
    bool  hasPrepositionText(void) const;
    std::string  getPrepositionText(void);
    const std::string  getPrepositionText(void) const;
    bool  hasHoliday(void) const;
    std::string  getHoliday(void);
    const std::string  getHoliday(void) const;
    bool  hasDayPhase(void) const;
    TypeDayPhase  getDayPhase(void);
    const TypeDayPhase  getDayPhase(void) const;
    const char * getDayPhaseAsChars(void) const;
    std::string  getDayPhaseAsString(void) const;
    bool  hasYearMentioned(void) const;
    bool  getYearMentioned(void);
    const bool  getYearMentioned(void) const;
    bool  hasMonthMentioned(void) const;
    bool  getMonthMentioned(void);
    const bool  getMonthMentioned(void) const;
    bool  hasDayOfMonthMentioned(void) const;
    bool  getDayOfMonthMentioned(void);
    const bool  getDayOfMonthMentioned(void) const;
    bool  hasDayOfWeekMentioned(void) const;
    bool  getDayOfWeekMentioned(void);
    const bool  getDayOfWeekMentioned(void) const;
    bool  hasDateMentioned(void) const;
    bool  getDateMentioned(void);
    const bool  getDateMentioned(void) const;
    bool  hasTimeMentioned(void) const;
    bool  getTimeMentioned(void);
    const bool  getTimeMentioned(void) const;
    bool  hasTodayRequested(void) const;
    bool  getTodayRequested(void);
    const bool  getTodayRequested(void) const;
    bool  hasNowRequested(void) const;
    bool  getNowRequested(void);
    const bool  getNowRequested(void) const;
    bool  hasRelativeToNow(void) const;
    bool  getRelativeToNow(void);
    const bool  getRelativeToNow(void) const;
    bool  hasRelativeToConversationDateTime(void) const;
    bool  getRelativeToConversationDateTime(void);
    const bool  getRelativeToConversationDateTime(void) const;

    virtual size_t extraDateTimeSpecComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDateTimeSpecComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDateTimeSpecComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDateTimeSpecComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDateTimeSpecLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDateTimeSpecLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = true;
        storeDateAndTime = new_value;
      }
    void unsetDateAndTime(void)
      {
        if (flagHasDateAndTime)
          {
            storeDateAndTime->remove_reference();
          }
        flagHasDateAndTime = false;
      }
    void setScheduledEventSpec(ScheduledEventSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasScheduledEventSpec)
          {
            storeScheduledEventSpec->remove_reference();
          }
        flagHasScheduledEventSpec = true;
        storeScheduledEventSpec = new_value;
      }
    void unsetScheduledEventSpec(void)
      {
        if (flagHasScheduledEventSpec)
          {
            storeScheduledEventSpec->remove_reference();
          }
        flagHasScheduledEventSpec = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }
    void setPrepositionText(std::string new_value)
      {
        flagHasPrepositionText = true;
        storePrepositionText = new_value;
      }
    void unsetPrepositionText(void)
      {
        flagHasPrepositionText = false;
      }
    void setHoliday(std::string new_value)
      {
        flagHasHoliday = true;
        storeHoliday = new_value;
      }
    void unsetHoliday(void)
      {
        flagHasHoliday = false;
      }
    void setDayPhase(TypeDayPhase new_value)
      {
        flagHasDayPhase = true;
        storeDayPhase = new_value;
      }
    void setDayPhase(const char *chars)
      {
        TypeDayPhaseKnownValues known = stringToDayPhase(chars);
        TypeDayPhase new_value;
        if (known == DayPhase__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDayPhase(new_value);
      }
    void setDayPhase(std::string the_string)
      {
        setDayPhase(the_string.c_str());
      }
    void setDayPhase(TypeDayPhaseKnownValues new_value)
      {
        TypeDayPhase new_full_value;
        assert(new_value != DayPhase__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setDayPhase(new_full_value);
      }
    void unsetDayPhase(void)
      {
        flagHasDayPhase = false;
      }
    void setYearMentioned(bool new_value)
      {
        flagHasYearMentioned = true;
        storeYearMentioned = new_value;
      }
    void unsetYearMentioned(void)
      {
        flagHasYearMentioned = false;
      }
    void setMonthMentioned(bool new_value)
      {
        flagHasMonthMentioned = true;
        storeMonthMentioned = new_value;
      }
    void unsetMonthMentioned(void)
      {
        flagHasMonthMentioned = false;
      }
    void setDayOfMonthMentioned(bool new_value)
      {
        flagHasDayOfMonthMentioned = true;
        storeDayOfMonthMentioned = new_value;
      }
    void unsetDayOfMonthMentioned(void)
      {
        flagHasDayOfMonthMentioned = false;
      }
    void setDayOfWeekMentioned(bool new_value)
      {
        flagHasDayOfWeekMentioned = true;
        storeDayOfWeekMentioned = new_value;
      }
    void unsetDayOfWeekMentioned(void)
      {
        flagHasDayOfWeekMentioned = false;
      }
    void setDateMentioned(bool new_value)
      {
        flagHasDateMentioned = true;
        storeDateMentioned = new_value;
      }
    void unsetDateMentioned(void)
      {
        flagHasDateMentioned = false;
      }
    void setTimeMentioned(bool new_value)
      {
        flagHasTimeMentioned = true;
        storeTimeMentioned = new_value;
      }
    void unsetTimeMentioned(void)
      {
        flagHasTimeMentioned = false;
      }
    void setTodayRequested(bool new_value)
      {
        flagHasTodayRequested = true;
        storeTodayRequested = new_value;
      }
    void unsetTodayRequested(void)
      {
        flagHasTodayRequested = false;
      }
    void setNowRequested(bool new_value)
      {
        flagHasNowRequested = true;
        storeNowRequested = new_value;
      }
    void unsetNowRequested(void)
      {
        flagHasNowRequested = false;
      }
    void setRelativeToNow(bool new_value)
      {
        flagHasRelativeToNow = true;
        storeRelativeToNow = new_value;
      }
    void unsetRelativeToNow(void)
      {
        flagHasRelativeToNow = false;
      }
    void setRelativeToConversationDateTime(bool new_value)
      {
        flagHasRelativeToConversationDateTime = true;
        storeRelativeToConversationDateTime = new_value;
      }
    void unsetRelativeToConversationDateTime(void)
      {
        flagHasRelativeToConversationDateTime = false;
      }

    virtual void extraDateTimeSpecAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDateTimeSpecSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDateTimeSpecLookup(key);
        if (old_field == NULL)
          {
            extraDateTimeSpecAppendPair(key, new_component);
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
        assert(flagHasDateAndTime);
        handler->start_pair("DateAndTime");
        storeDateAndTime->write_as_json(handler);
        if (flagHasScheduledEventSpec)
          {
            handler->start_pair("ScheduledEventSpec");
            storeScheduledEventSpec->write_as_json(handler);
          }
        if (flagHasLabel)
          {
            handler->start_pair("Label");
            handler->string_value(storeLabel);
          }
        if (flagHasSpokenLabel)
          {
            handler->start_pair("SpokenLabel");
            handler->string_value(storeSpokenLabel);
          }
        if (flagHasPrepositionText)
          {
            handler->start_pair("PrepositionText");
            handler->string_value(storePrepositionText);
          }
        if (flagHasHoliday)
          {
            handler->start_pair("Holiday");
            handler->string_value(storeHoliday);
          }
        assert(flagHasDayPhase);
        handler->start_pair("DayPhase");
        if (storeDayPhase.in_known_list)
          {
            switch (storeDayPhase.list_value)
              {
                case DayPhase_Unknown:
                    handler->string_value("Unknown");
                    break;
                case DayPhase_All_x20_day:
                    handler->string_value("All day");
                    break;
                case DayPhase_Midnight:
                    handler->string_value("Midnight");
                    break;
                case DayPhase_Dawn:
                    handler->string_value("Dawn");
                    break;
                case DayPhase_Morning:
                    handler->string_value("Morning");
                    break;
                case DayPhase_Noon:
                    handler->string_value("Noon");
                    break;
                case DayPhase_Afternoon:
                    handler->string_value("Afternoon");
                    break;
                case DayPhase_Dusk:
                    handler->string_value("Dusk");
                    break;
                case DayPhase_Evening:
                    handler->string_value("Evening");
                    break;
                case DayPhase_Night:
                    handler->string_value("Night");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeDayPhase.string_value);
          }
        assert(flagHasYearMentioned);
        handler->start_pair("YearMentioned");
        handler->boolean_value(storeYearMentioned);
        assert(flagHasMonthMentioned);
        handler->start_pair("MonthMentioned");
        handler->boolean_value(storeMonthMentioned);
        assert(flagHasDayOfMonthMentioned);
        handler->start_pair("DayOfMonthMentioned");
        handler->boolean_value(storeDayOfMonthMentioned);
        assert(flagHasDayOfWeekMentioned);
        handler->start_pair("DayOfWeekMentioned");
        handler->boolean_value(storeDayOfWeekMentioned);
        assert(flagHasDateMentioned);
        handler->start_pair("DateMentioned");
        handler->boolean_value(storeDateMentioned);
        assert(flagHasTimeMentioned);
        handler->start_pair("TimeMentioned");
        handler->boolean_value(storeTimeMentioned);
        assert(flagHasTodayRequested);
        handler->start_pair("TodayRequested");
        handler->boolean_value(storeTodayRequested);
        assert(flagHasNowRequested);
        handler->start_pair("NowRequested");
        handler->boolean_value(storeNowRequested);
        assert(flagHasRelativeToNow);
        handler->start_pair("RelativeToNow");
        handler->boolean_value(storeRelativeToNow);
        assert(flagHasRelativeToConversationDateTime);
        handler->start_pair("RelativeToConversationDateTime");
        handler->boolean_value(storeRelativeToConversationDateTime);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasDayPhase()))
          {
            return "When parsing the object for %what%, the \"DayPhase\" field was missing.";
          }
        if (!(hasYearMentioned()))
          {
            return "When parsing the object for %what%, the \"YearMentioned\" field was missing.";
          }
        if (!(hasMonthMentioned()))
          {
            return "When parsing the object for %what%, the \"MonthMentioned\" field was missing.";
          }
        if (!(hasDayOfMonthMentioned()))
          {
            return "When parsing the object for %what%, the \"DayOfMonthMentioned\" field was missing.";
          }
        if (!(hasDayOfWeekMentioned()))
          {
            return "When parsing the object for %what%, the \"DayOfWeekMentioned\" field was missing.";
          }
        if (!(hasDateMentioned()))
          {
            return "When parsing the object for %what%, the \"DateMentioned\" field was missing.";
          }
        if (!(hasTimeMentioned()))
          {
            return "When parsing the object for %what%, the \"TimeMentioned\" field was missing.";
          }
        if (!(hasTodayRequested()))
          {
            return "When parsing the object for %what%, the \"TodayRequested\" field was missing.";
          }
        if (!(hasNowRequested()))
          {
            return "When parsing the object for %what%, the \"NowRequested\" field was missing.";
          }
        if (!(hasRelativeToNow()))
          {
            return "When parsing the object for %what%, the \"RelativeToNow\" field was missing.";
          }
        if (!(hasRelativeToConversationDateTime()))
          {
            return "When parsing the object for %what%, the \"RelativeToConversationDateTime\" field was missing.";
          }
        return NULL;
      }

    static DateTimeSpecJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DateTimeSpecJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DateTimeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool> generator("Type DateTimeSpec", ignore_extras);
            parse_json_value(text, "Text for DateTimeSpecJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DateTimeSpecJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DateTimeSpecJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool> generator("Type DateTimeSpec", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingGenerator<ScheduledEventSpecJSON::Generator, RCHandle<ScheduledEventSpecJSON>, ScheduledEventSpecJSON *, bool > fieldGeneratorScheduledEventSpec;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPrepositionText;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHoliday;
    class FieldGeneratorDayPhase : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDayPhase(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDayPhase(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeDayPhaseKnownValues known = stringToDayPhase(result);
                TypeDayPhase new_value;
                if (known == DayPhase__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeDayPhase result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDayPhase, TypeDayPhase, TypeDayPhase > fieldGeneratorDayPhase;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorYearMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMonthMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDayOfMonthMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDayOfWeekMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDateMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTimeMentioned;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTodayRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNowRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRelativeToNow;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRelativeToConversationDateTime;
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
            DateTimeSpecJSON *result = new DateTimeSpecJSON();
            assert(result != NULL);
            RCHandle<DateTimeSpecJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDateTimeSpecAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DateTimeSpecJSON *result)
          {
            if (fieldGeneratorDateAndTime.have_value)
              {
                result->setDateAndTime(fieldGeneratorDateAndTime.value.referenced());
                fieldGeneratorDateAndTime.have_value = false;
              }
            else if (!(result->hasDateAndTime()))
              {
                error("When parsing the object for %what%, the \"DateAndTime\" field was missing.");
              }
            if (fieldGeneratorScheduledEventSpec.have_value)
              {
                result->setScheduledEventSpec(fieldGeneratorScheduledEventSpec.value.referenced());
                fieldGeneratorScheduledEventSpec.have_value = false;
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
            if (fieldGeneratorPrepositionText.have_value)
              {
                result->setPrepositionText(fieldGeneratorPrepositionText.value);
                fieldGeneratorPrepositionText.have_value = false;
              }
            if (fieldGeneratorHoliday.have_value)
              {
                result->setHoliday(fieldGeneratorHoliday.value);
                fieldGeneratorHoliday.have_value = false;
              }
            if (fieldGeneratorDayPhase.have_value)
              {
                result->setDayPhase(fieldGeneratorDayPhase.value);
                fieldGeneratorDayPhase.have_value = false;
              }
            else if (!(result->hasDayPhase()))
              {
                error("When parsing the object for %what%, the \"DayPhase\" field was missing.");
              }
            if (fieldGeneratorYearMentioned.have_value)
              {
                result->setYearMentioned(fieldGeneratorYearMentioned.value);
                fieldGeneratorYearMentioned.have_value = false;
              }
            else if (!(result->hasYearMentioned()))
              {
                error("When parsing the object for %what%, the \"YearMentioned\" field was missing.");
              }
            if (fieldGeneratorMonthMentioned.have_value)
              {
                result->setMonthMentioned(fieldGeneratorMonthMentioned.value);
                fieldGeneratorMonthMentioned.have_value = false;
              }
            else if (!(result->hasMonthMentioned()))
              {
                error("When parsing the object for %what%, the \"MonthMentioned\" field was missing.");
              }
            if (fieldGeneratorDayOfMonthMentioned.have_value)
              {
                result->setDayOfMonthMentioned(fieldGeneratorDayOfMonthMentioned.value);
                fieldGeneratorDayOfMonthMentioned.have_value = false;
              }
            else if (!(result->hasDayOfMonthMentioned()))
              {
                error("When parsing the object for %what%, the \"DayOfMonthMentioned\" field was missing.");
              }
            if (fieldGeneratorDayOfWeekMentioned.have_value)
              {
                result->setDayOfWeekMentioned(fieldGeneratorDayOfWeekMentioned.value);
                fieldGeneratorDayOfWeekMentioned.have_value = false;
              }
            else if (!(result->hasDayOfWeekMentioned()))
              {
                error("When parsing the object for %what%, the \"DayOfWeekMentioned\" field was missing.");
              }
            if (fieldGeneratorDateMentioned.have_value)
              {
                result->setDateMentioned(fieldGeneratorDateMentioned.value);
                fieldGeneratorDateMentioned.have_value = false;
              }
            else if (!(result->hasDateMentioned()))
              {
                error("When parsing the object for %what%, the \"DateMentioned\" field was missing.");
              }
            if (fieldGeneratorTimeMentioned.have_value)
              {
                result->setTimeMentioned(fieldGeneratorTimeMentioned.value);
                fieldGeneratorTimeMentioned.have_value = false;
              }
            else if (!(result->hasTimeMentioned()))
              {
                error("When parsing the object for %what%, the \"TimeMentioned\" field was missing.");
              }
            if (fieldGeneratorTodayRequested.have_value)
              {
                result->setTodayRequested(fieldGeneratorTodayRequested.value);
                fieldGeneratorTodayRequested.have_value = false;
              }
            else if (!(result->hasTodayRequested()))
              {
                error("When parsing the object for %what%, the \"TodayRequested\" field was missing.");
              }
            if (fieldGeneratorNowRequested.have_value)
              {
                result->setNowRequested(fieldGeneratorNowRequested.value);
                fieldGeneratorNowRequested.have_value = false;
              }
            else if (!(result->hasNowRequested()))
              {
                error("When parsing the object for %what%, the \"NowRequested\" field was missing.");
              }
            if (fieldGeneratorRelativeToNow.have_value)
              {
                result->setRelativeToNow(fieldGeneratorRelativeToNow.value);
                fieldGeneratorRelativeToNow.have_value = false;
              }
            else if (!(result->hasRelativeToNow()))
              {
                error("When parsing the object for %what%, the \"RelativeToNow\" field was missing.");
              }
            if (fieldGeneratorRelativeToConversationDateTime.have_value)
              {
                result->setRelativeToConversationDateTime(fieldGeneratorRelativeToConversationDateTime.value);
                fieldGeneratorRelativeToConversationDateTime.have_value = false;
              }
            else if (!(result->hasRelativeToConversationDateTime()))
              {
                error("When parsing the object for %what%, the \"RelativeToConversationDateTime\" field was missing.");
              }
          }
        virtual void handle_result(DateTimeSpecJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 't':
                                if (strncmp(&(field_name[3]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[4]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[5]), "ndTime") == 0)
                                                return &fieldGeneratorDateAndTime;
                                            break;
                                        case 'M':
                                            if (strcmp(&(field_name[5]), "entioned") == 0)
                                                return &fieldGeneratorDateMentioned;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'y':
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'O':
                                        if (strncmp(&(field_name[4]), "f", 1) == 0)
                                          {
                                            switch ((unsigned char)(field_name[5]))
                                              {
                                                case 'M':
                                                    if (strcmp(&(field_name[6]), "onthMentioned") == 0)
                                                        return &fieldGeneratorDayOfMonthMentioned;
                                                    break;
                                                case 'W':
                                                    if (strcmp(&(field_name[6]), "eekMentioned") == 0)
                                                        return &fieldGeneratorDayOfWeekMentioned;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'P':
                                        if (strcmp(&(field_name[4]), "hase") == 0)
                                            return &fieldGeneratorDayPhase;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "oliday") == 0)
                        return &fieldGeneratorHoliday;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "abel") == 0)
                        return &fieldGeneratorLabel;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "onthMentioned") == 0)
                        return &fieldGeneratorMonthMentioned;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "owRequested") == 0)
                        return &fieldGeneratorNowRequested;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "repositionText") == 0)
                        return &fieldGeneratorPrepositionText;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "elativeTo", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[11]), "onversationDateTime") == 0)
                                    return &fieldGeneratorRelativeToConversationDateTime;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[11]), "ow") == 0)
                                    return &fieldGeneratorRelativeToNow;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "heduledEventSpec") == 0)
                                return &fieldGeneratorScheduledEventSpec;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "okenLabel") == 0)
                                return &fieldGeneratorSpokenLabel;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "meMentioned") == 0)
                                return &fieldGeneratorTimeMentioned;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "dayRequested") == 0)
                                return &fieldGeneratorTodayRequested;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "earMentioned") == 0)
                        return &fieldGeneratorYearMentioned;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTime("field \"DateAndTime\" of the DateTimeSpec class", ignore_extras), fieldGeneratorScheduledEventSpec("field \"ScheduledEventSpec\" of the DateTimeSpec class", ignore_extras), fieldGeneratorLabel("field \"Label\" of the DateTimeSpec class"), fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the DateTimeSpec class"), fieldGeneratorPrepositionText("field \"PrepositionText\" of the DateTimeSpec class"), fieldGeneratorHoliday("field \"Holiday\" of the DateTimeSpec class"), fieldGeneratorDayPhase("field \"DayPhase\" of the DateTimeSpec class"), fieldGeneratorYearMentioned("field \"YearMentioned\" of the DateTimeSpec class"), fieldGeneratorMonthMentioned("field \"MonthMentioned\" of the DateTimeSpec class"), fieldGeneratorDayOfMonthMentioned("field \"DayOfMonthMentioned\" of the DateTimeSpec class"), fieldGeneratorDayOfWeekMentioned("field \"DayOfWeekMentioned\" of the DateTimeSpec class"), fieldGeneratorDateMentioned("field \"DateMentioned\" of the DateTimeSpec class"), fieldGeneratorTimeMentioned("field \"TimeMentioned\" of the DateTimeSpec class"), fieldGeneratorTodayRequested("field \"TodayRequested\" of the DateTimeSpec class"), fieldGeneratorNowRequested("field \"NowRequested\" of the DateTimeSpec class"), fieldGeneratorRelativeToNow("field \"RelativeToNow\" of the DateTimeSpec class"), fieldGeneratorRelativeToConversationDateTime("field \"RelativeToConversationDateTime\" of the DateTimeSpec class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DateTimeSpec class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorScheduledEventSpec.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorSpokenLabel.reset();
            fieldGeneratorPrepositionText.reset();
            fieldGeneratorHoliday.reset();
            fieldGeneratorDayPhase.reset();
            fieldGeneratorYearMentioned.reset();
            fieldGeneratorMonthMentioned.reset();
            fieldGeneratorDayOfMonthMentioned.reset();
            fieldGeneratorDayOfWeekMentioned.reset();
            fieldGeneratorDateMentioned.reset();
            fieldGeneratorTimeMentioned.reset();
            fieldGeneratorTodayRequested.reset();
            fieldGeneratorNowRequested.reset();
            fieldGeneratorRelativeToNow.reset();
            fieldGeneratorRelativeToConversationDateTime.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DATETIMESPECJSON_H */
