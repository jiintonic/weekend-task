/* file "CalendarCreateDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALENDARCREATEDATAJSON_H
#define CALENDARCREATEDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "CalendarAttendeeJSON.h"
#include "CalendarReminderJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CalendarCreateDataJSON : public ReferenceCounted
  {
  public:
    enum TypeNextCreateAction
      {
        NextCreateAction_Undefined,
        NextCreateAction_CreateItem,
        NextCreateAction_AskDateAndTime,
        NextCreateAction_AskDate,
        NextCreateAction_AskTime
      };

    static TypeNextCreateAction  stringToNextCreateAction(const char *chars);
    static const char * stringFromNextCreateAction(TypeNextCreateAction the_enum);
    enum TypeLastCreateAction
      {
        LastCreateAction_Undefined,
        LastCreateAction_CreateItem,
        LastCreateAction_AskDateAndTime,
        LastCreateAction_AskDate,
        LastCreateAction_AskTime
      };

    static TypeLastCreateAction  stringToLastCreateAction(const char *chars);
    static const char * stringFromLastCreateAction(TypeLastCreateAction the_enum);
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
        Availability_Busy,
        Availability_Available,
        Availability_Tentative
      };

    static TypeAvailability  stringToAvailability(const char *chars);
    static const char * stringFromAvailability(TypeAvailability the_enum);
    enum TypeSelfAttendeeStatus
      {
        SelfAttendeeStatus_None,
        SelfAttendeeStatus_Accepted,
        SelfAttendeeStatus_Declined,
        SelfAttendeeStatus_Invited,
        SelfAttendeeStatus_Tentative
      };

    static TypeSelfAttendeeStatus  stringToSelfAttendeeStatus(const char *chars);
    static const char * stringFromSelfAttendeeStatus(TypeSelfAttendeeStatus the_enum);
    enum TypeAccessLevel
      {
        AccessLevel_Default,
        AccessLevel_Private,
        AccessLevel_Public
      };

    static TypeAccessLevel  stringToAccessLevel(const char *chars);
    static const char * stringFromAccessLevel(TypeAccessLevel the_enum);

  private:
    bool flagHasNextCreateAction;
    TypeNextCreateAction storeNextCreateAction;
    bool flagHasLastCreateAction;
    TypeLastCreateAction storeLastCreateAction;
    bool flagHasItemKind;
    std::string storeItemKind;
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasLocation;
    std::string storeLocation;
    bool flagHasMapLocation;
    std::string storeMapLocation;
    bool flagHasRequestedStart;
    DateAndOrTimeJSON * storeRequestedStart;
    bool flagHasRequestedEnd;
    DateAndOrTimeJSON * storeRequestedEnd;
    bool flagHasStart;
    DateAndOrTimeJSON * storeStart;
    bool flagHasEnd;
    DateAndOrTimeJSON * storeEnd;
    bool flagHasFrequencyType;
    TypeFrequencyType storeFrequencyType;
    bool flagHasFrequencyMultiplier;
    OInteger storeFrequencyMultiplier;
    bool flagHasIsRecurring;
    bool storeIsRecurring;
    bool flagHasRecurrenceRule;
    std::string storeRecurrenceRule;
    bool flagHasDurationSeconds;
    OInteger storeDurationSeconds;
    bool flagHasIsAllDay;
    bool storeIsAllDay;
    bool flagHasAvailability;
    TypeAvailability storeAvailability;
    bool flagHasCalendarName;
    std::string storeCalendarName;
    bool flagHasCalendarID;
    std::string storeCalendarID;
    bool flagHasDescription;
    std::string storeDescription;
    bool flagHasOrganizer;
    std::string storeOrganizer;
    bool flagHasSelfAttendeeStatus;
    TypeSelfAttendeeStatus storeSelfAttendeeStatus;
    bool flagHasAccessLevel;
    TypeAccessLevel storeAccessLevel;
    bool flagHasAttendees;
    std::vector< CalendarAttendeeJSON * > storeAttendees;
    bool flagHasReminders;
    std::vector< CalendarReminderJSON * > storeReminders;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CalendarCreateDataJSON(const CalendarCreateDataJSON &);
    CalendarCreateDataJSON & operator=(const CalendarCreateDataJSON &other);

    void  fromJSONNextCreateAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastCreateAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONItemKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFrequencyType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFrequencyMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecurrenceRule(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsAllDay(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAvailability(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalendarID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganizer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSelfAttendeeStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAccessLevel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttendees(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReminders(JSONValue *json_value, bool ignore_extras = false);


  public:
    CalendarCreateDataJSON(void);
    virtual ~CalendarCreateDataJSON(void);
    bool  hasNextCreateAction(void) const;
    TypeNextCreateAction  getNextCreateAction(void);
    const TypeNextCreateAction  getNextCreateAction(void) const;
    const char * getNextCreateActionAsChars(void) const;
    std::string  getNextCreateActionAsString(void) const;
    bool  hasLastCreateAction(void) const;
    TypeLastCreateAction  getLastCreateAction(void);
    const TypeLastCreateAction  getLastCreateAction(void) const;
    const char * getLastCreateActionAsChars(void) const;
    std::string  getLastCreateActionAsString(void) const;
    bool  hasItemKind(void) const;
    std::string  getItemKind(void);
    const std::string  getItemKind(void) const;
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasLocation(void) const;
    std::string  getLocation(void);
    const std::string  getLocation(void) const;
    bool  hasMapLocation(void) const;
    std::string  getMapLocation(void);
    const std::string  getMapLocation(void) const;
    bool  hasRequestedStart(void) const;
    DateAndOrTimeJSON *  getRequestedStart(void);
    const DateAndOrTimeJSON *  getRequestedStart(void) const;
    bool  hasRequestedEnd(void) const;
    DateAndOrTimeJSON *  getRequestedEnd(void);
    const DateAndOrTimeJSON *  getRequestedEnd(void) const;
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
    bool  hasIsRecurring(void) const;
    bool  getIsRecurring(void);
    const bool  getIsRecurring(void) const;
    bool  hasRecurrenceRule(void) const;
    std::string  getRecurrenceRule(void);
    const std::string  getRecurrenceRule(void) const;
    bool  hasDurationSeconds(void) const;
    OInteger  getDurationSeconds(void);
    const OInteger  getDurationSeconds(void) const;
    bool  hasIsAllDay(void) const;
    bool  getIsAllDay(void);
    const bool  getIsAllDay(void) const;
    bool  hasAvailability(void) const;
    TypeAvailability  getAvailability(void);
    const TypeAvailability  getAvailability(void) const;
    const char * getAvailabilityAsChars(void) const;
    std::string  getAvailabilityAsString(void) const;
    bool  hasCalendarName(void) const;
    std::string  getCalendarName(void);
    const std::string  getCalendarName(void) const;
    bool  hasCalendarID(void) const;
    std::string  getCalendarID(void);
    const std::string  getCalendarID(void) const;
    bool  hasDescription(void) const;
    std::string  getDescription(void);
    const std::string  getDescription(void) const;
    bool  hasOrganizer(void) const;
    std::string  getOrganizer(void);
    const std::string  getOrganizer(void) const;
    bool  hasSelfAttendeeStatus(void) const;
    TypeSelfAttendeeStatus  getSelfAttendeeStatus(void);
    const TypeSelfAttendeeStatus  getSelfAttendeeStatus(void) const;
    const char * getSelfAttendeeStatusAsChars(void) const;
    std::string  getSelfAttendeeStatusAsString(void) const;
    bool  hasAccessLevel(void) const;
    TypeAccessLevel  getAccessLevel(void);
    const TypeAccessLevel  getAccessLevel(void) const;
    const char * getAccessLevelAsChars(void) const;
    std::string  getAccessLevelAsString(void) const;
    bool  hasAttendees(void) const;
    size_t  countOfAttendees(void) const;
    CalendarAttendeeJSON *  elementOfAttendees(size_t element_num);
    const CalendarAttendeeJSON *  elementOfAttendees(size_t element_num) const;
    std::vector< CalendarAttendeeJSON * >  getAttendees(void);
    const std::vector< CalendarAttendeeJSON * >  getAttendees(void) const;
    bool  hasReminders(void) const;
    size_t  countOfReminders(void) const;
    CalendarReminderJSON *  elementOfReminders(size_t element_num);
    const CalendarReminderJSON *  elementOfReminders(size_t element_num) const;
    std::vector< CalendarReminderJSON * >  getReminders(void);
    const std::vector< CalendarReminderJSON * >  getReminders(void) const;

    virtual size_t extraCalendarCreateDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCalendarCreateDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCalendarCreateDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCalendarCreateDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCalendarCreateDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCalendarCreateDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNextCreateAction(TypeNextCreateAction new_value)
      {
        flagHasNextCreateAction = true;
        storeNextCreateAction = new_value;
      }
    void setNextCreateAction(const char *chars)
      {
        setNextCreateAction(stringToNextCreateAction(chars));
      }
    void setNextCreateAction(std::string the_string)
      {
        setNextCreateAction(stringToNextCreateAction(the_string.c_str()));
      }
    void unsetNextCreateAction(void)
      {
        flagHasNextCreateAction = false;
      }
    void setLastCreateAction(TypeLastCreateAction new_value)
      {
        flagHasLastCreateAction = true;
        storeLastCreateAction = new_value;
      }
    void setLastCreateAction(const char *chars)
      {
        setLastCreateAction(stringToLastCreateAction(chars));
      }
    void setLastCreateAction(std::string the_string)
      {
        setLastCreateAction(stringToLastCreateAction(the_string.c_str()));
      }
    void unsetLastCreateAction(void)
      {
        flagHasLastCreateAction = false;
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
    void setMapLocation(std::string new_value)
      {
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        flagHasMapLocation = false;
      }
    void setRequestedStart(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedStart)
          {
            storeRequestedStart->remove_reference();
          }
        flagHasRequestedStart = true;
        storeRequestedStart = new_value;
      }
    void unsetRequestedStart(void)
      {
        if (flagHasRequestedStart)
          {
            storeRequestedStart->remove_reference();
          }
        flagHasRequestedStart = false;
      }
    void setRequestedEnd(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequestedEnd)
          {
            storeRequestedEnd->remove_reference();
          }
        flagHasRequestedEnd = true;
        storeRequestedEnd = new_value;
      }
    void unsetRequestedEnd(void)
      {
        if (flagHasRequestedEnd)
          {
            storeRequestedEnd->remove_reference();
          }
        flagHasRequestedEnd = false;
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
            throw("The value for field FrequencyMultiplier of CalendarCreateDataJSON is less than the lower bound (1) for that field.");
        storeFrequencyMultiplier = new_value;
      }
    void unsetFrequencyMultiplier(void)
      {
        flagHasFrequencyMultiplier = false;
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
    void setRecurrenceRule(std::string new_value)
      {
        flagHasRecurrenceRule = true;
        storeRecurrenceRule = new_value;
      }
    void unsetRecurrenceRule(void)
      {
        flagHasRecurrenceRule = false;
      }
    void setDurationSeconds(OInteger new_value)
      {
        flagHasDurationSeconds = true;
        storeDurationSeconds = new_value;
      }
    void unsetDurationSeconds(void)
      {
        flagHasDurationSeconds = false;
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
    void setCalendarName(std::string new_value)
      {
        flagHasCalendarName = true;
        storeCalendarName = new_value;
      }
    void unsetCalendarName(void)
      {
        flagHasCalendarName = false;
      }
    void setCalendarID(std::string new_value)
      {
        flagHasCalendarID = true;
        storeCalendarID = new_value;
      }
    void unsetCalendarID(void)
      {
        flagHasCalendarID = false;
      }
    void setDescription(std::string new_value)
      {
        flagHasDescription = true;
        storeDescription = new_value;
      }
    void unsetDescription(void)
      {
        flagHasDescription = false;
      }
    void setOrganizer(std::string new_value)
      {
        flagHasOrganizer = true;
        storeOrganizer = new_value;
      }
    void unsetOrganizer(void)
      {
        flagHasOrganizer = false;
      }
    void setSelfAttendeeStatus(TypeSelfAttendeeStatus new_value)
      {
        flagHasSelfAttendeeStatus = true;
        storeSelfAttendeeStatus = new_value;
      }
    void setSelfAttendeeStatus(const char *chars)
      {
        setSelfAttendeeStatus(stringToSelfAttendeeStatus(chars));
      }
    void setSelfAttendeeStatus(std::string the_string)
      {
        setSelfAttendeeStatus(stringToSelfAttendeeStatus(the_string.c_str()));
      }
    void unsetSelfAttendeeStatus(void)
      {
        flagHasSelfAttendeeStatus = false;
      }
    void setAccessLevel(TypeAccessLevel new_value)
      {
        flagHasAccessLevel = true;
        storeAccessLevel = new_value;
      }
    void setAccessLevel(const char *chars)
      {
        setAccessLevel(stringToAccessLevel(chars));
      }
    void setAccessLevel(std::string the_string)
      {
        setAccessLevel(stringToAccessLevel(the_string.c_str()));
      }
    void unsetAccessLevel(void)
      {
        flagHasAccessLevel = false;
      }
    void initAttendees(void)
      {
        if (flagHasAttendees)
          {
            for (size_t num3 = 0; num3 < storeAttendees.size(); ++num3)
              {
                storeAttendees[num3]->remove_reference();
              }
          }
        flagHasAttendees = true;
        storeAttendees.clear();
      }
    void appendAttendees(CalendarAttendeeJSON * to_append)
      {
        if (!flagHasAttendees)
          {
            flagHasAttendees = true;
            storeAttendees.clear();
          }
        assert(flagHasAttendees);
        to_append->add_reference();
        storeAttendees.push_back(to_append);
      }
    void unsetAttendees(void)
      {
        if (flagHasAttendees)
          {
            for (size_t num4 = 0; num4 < storeAttendees.size(); ++num4)
              {
                storeAttendees[num4]->remove_reference();
              }
          }
        flagHasAttendees = false;
        storeAttendees.clear();
      }
    void initReminders(void)
      {
        if (flagHasReminders)
          {
            for (size_t num5 = 0; num5 < storeReminders.size(); ++num5)
              {
                storeReminders[num5]->remove_reference();
              }
          }
        flagHasReminders = true;
        storeReminders.clear();
      }
    void appendReminders(CalendarReminderJSON * to_append)
      {
        if (!flagHasReminders)
          {
            flagHasReminders = true;
            storeReminders.clear();
          }
        assert(flagHasReminders);
        to_append->add_reference();
        storeReminders.push_back(to_append);
      }
    void unsetReminders(void)
      {
        if (flagHasReminders)
          {
            for (size_t num6 = 0; num6 < storeReminders.size(); ++num6)
              {
                storeReminders[num6]->remove_reference();
              }
          }
        flagHasReminders = false;
        storeReminders.clear();
      }

    virtual void extraCalendarCreateDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCalendarCreateDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCalendarCreateDataLookup(key);
        if (old_field == NULL)
          {
            extraCalendarCreateDataAppendPair(key, new_component);
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
        assert(flagHasNextCreateAction);
        handler->start_pair("NextCreateAction");
        switch (storeNextCreateAction)
          {
            case NextCreateAction_Undefined:
                handler->string_value("Undefined");
                break;
            case NextCreateAction_CreateItem:
                handler->string_value("CreateItem");
                break;
            case NextCreateAction_AskDateAndTime:
                handler->string_value("AskDateAndTime");
                break;
            case NextCreateAction_AskDate:
                handler->string_value("AskDate");
                break;
            case NextCreateAction_AskTime:
                handler->string_value("AskTime");
                break;
            default:
                assert(false);
          }
        if (flagHasLastCreateAction)
          {
            handler->start_pair("LastCreateAction");
            switch (storeLastCreateAction)
              {
                case LastCreateAction_Undefined:
                    handler->string_value("Undefined");
                    break;
                case LastCreateAction_CreateItem:
                    handler->string_value("CreateItem");
                    break;
                case LastCreateAction_AskDateAndTime:
                    handler->string_value("AskDateAndTime");
                    break;
                case LastCreateAction_AskDate:
                    handler->string_value("AskDate");
                    break;
                case LastCreateAction_AskTime:
                    handler->string_value("AskTime");
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasItemKind);
        handler->start_pair("ItemKind");
        handler->string_value(storeItemKind);
        assert(flagHasTitle);
        handler->start_pair("Title");
        handler->string_value(storeTitle);
        if (flagHasLocation)
          {
            handler->start_pair("Location");
            handler->string_value(storeLocation);
          }
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            handler->string_value(storeMapLocation);
          }
        if (flagHasRequestedStart)
          {
            handler->start_pair("RequestedStart");
            storeRequestedStart->write_as_json(handler);
          }
        if (flagHasRequestedEnd)
          {
            handler->start_pair("RequestedEnd");
            storeRequestedEnd->write_as_json(handler);
          }
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
        assert(flagHasIsRecurring);
        handler->start_pair("IsRecurring");
        handler->boolean_value(storeIsRecurring);
        if (flagHasRecurrenceRule)
          {
            handler->start_pair("RecurrenceRule");
            handler->string_value(storeRecurrenceRule);
          }
        if (flagHasDurationSeconds)
          {
            handler->start_pair("DurationSeconds");
            handler->number_value(storeDurationSeconds.get_o_integer());
          }
        assert(flagHasIsAllDay);
        handler->start_pair("IsAllDay");
        handler->boolean_value(storeIsAllDay);
        if (flagHasAvailability)
          {
            handler->start_pair("Availability");
            switch (storeAvailability)
              {
                case Availability_Busy:
                    handler->string_value("Busy");
                    break;
                case Availability_Available:
                    handler->string_value("Available");
                    break;
                case Availability_Tentative:
                    handler->string_value("Tentative");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasCalendarName)
          {
            handler->start_pair("CalendarName");
            handler->string_value(storeCalendarName);
          }
        if (flagHasCalendarID)
          {
            handler->start_pair("CalendarID");
            handler->string_value(storeCalendarID);
          }
        if (flagHasDescription)
          {
            handler->start_pair("Description");
            handler->string_value(storeDescription);
          }
        if (flagHasOrganizer)
          {
            handler->start_pair("Organizer");
            handler->string_value(storeOrganizer);
          }
        if (flagHasSelfAttendeeStatus)
          {
            handler->start_pair("SelfAttendeeStatus");
            switch (storeSelfAttendeeStatus)
              {
                case SelfAttendeeStatus_None:
                    handler->string_value("None");
                    break;
                case SelfAttendeeStatus_Accepted:
                    handler->string_value("Accepted");
                    break;
                case SelfAttendeeStatus_Declined:
                    handler->string_value("Declined");
                    break;
                case SelfAttendeeStatus_Invited:
                    handler->string_value("Invited");
                    break;
                case SelfAttendeeStatus_Tentative:
                    handler->string_value("Tentative");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasAccessLevel)
          {
            handler->start_pair("AccessLevel");
            switch (storeAccessLevel)
              {
                case AccessLevel_Default:
                    handler->string_value("Default");
                    break;
                case AccessLevel_Private:
                    handler->string_value("Private");
                    break;
                case AccessLevel_Public:
                    handler->string_value("Public");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasAttendees)
          {
            handler->start_pair("Attendees");
            assert(storeAttendees.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAttendees.size(); ++num1)
              {
                storeAttendees[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasReminders)
          {
            handler->start_pair("Reminders");
            assert(storeReminders.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeReminders.size(); ++num2)
              {
                storeReminders[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNextCreateAction()))
          {
            return "When parsing the object for %what%, the \"NextCreateAction\" field was missing.";
          }
        if (!(hasItemKind()))
          {
            return "When parsing the object for %what%, the \"ItemKind\" field was missing.";
          }
        if (!(hasTitle()))
          {
            return "When parsing the object for %what%, the \"Title\" field was missing.";
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
        return NULL;
      }

    static CalendarCreateDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CalendarCreateDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CalendarCreateDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarCreateDataJSON>, CalendarCreateDataJSON *, bool> generator("Type CalendarCreateData", ignore_extras);
            parse_json_value(text, "Text for CalendarCreateDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CalendarCreateDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CalendarCreateDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CalendarCreateDataJSON>, CalendarCreateDataJSON *, bool> generator("Type CalendarCreateData", ignore_extras);
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
    class FieldGeneratorNextCreateAction : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNextCreateAction(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNextCreateAction(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNextCreateAction(result));
              }
            virtual void handle_result(TypeNextCreateAction result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNextCreateAction, TypeNextCreateAction, TypeNextCreateAction > fieldGeneratorNextCreateAction;
    class FieldGeneratorLastCreateAction : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLastCreateAction(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLastCreateAction(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLastCreateAction(result));
              }
            virtual void handle_result(TypeLastCreateAction result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLastCreateAction, TypeLastCreateAction, TypeLastCreateAction > fieldGeneratorLastCreateAction;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorItemKind;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMapLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRequestedStart;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorRequestedEnd;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRecurrenceRule;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorDurationSeconds;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCalendarName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCalendarID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOrganizer;
    class FieldGeneratorSelfAttendeeStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSelfAttendeeStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSelfAttendeeStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSelfAttendeeStatus(result));
              }
            virtual void handle_result(TypeSelfAttendeeStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSelfAttendeeStatus, TypeSelfAttendeeStatus, TypeSelfAttendeeStatus > fieldGeneratorSelfAttendeeStatus;
    class FieldGeneratorAccessLevel : public JSONStringGenerator
          {
          protected:
            FieldGeneratorAccessLevel(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorAccessLevel(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToAccessLevel(result));
              }
            virtual void handle_result(TypeAccessLevel result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorAccessLevel, TypeAccessLevel, TypeAccessLevel > fieldGeneratorAccessLevel;
        JSONHoldingArrayGenerator<CalendarAttendeeJSON::Generator, RCHandle<CalendarAttendeeJSON>, CalendarAttendeeJSON *, bool > fieldGeneratorAttendees;
        JSONHoldingArrayGenerator<CalendarReminderJSON::Generator, RCHandle<CalendarReminderJSON>, CalendarReminderJSON *, bool > fieldGeneratorReminders;
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
            CalendarCreateDataJSON *result = new CalendarCreateDataJSON();
            assert(result != NULL);
            RCHandle<CalendarCreateDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCalendarCreateDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(CalendarCreateDataJSON *result)
          {
            if (fieldGeneratorNextCreateAction.have_value)
              {
                result->setNextCreateAction(fieldGeneratorNextCreateAction.value);
                fieldGeneratorNextCreateAction.have_value = false;
              }
            else if (!(result->hasNextCreateAction()))
              {
                error("When parsing the object for %what%, the \"NextCreateAction\" field was missing.");
              }
            if (fieldGeneratorLastCreateAction.have_value)
              {
                result->setLastCreateAction(fieldGeneratorLastCreateAction.value);
                fieldGeneratorLastCreateAction.have_value = false;
              }
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
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value);
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorRequestedStart.have_value)
              {
                result->setRequestedStart(fieldGeneratorRequestedStart.value.referenced());
                fieldGeneratorRequestedStart.have_value = false;
              }
            if (fieldGeneratorRequestedEnd.have_value)
              {
                result->setRequestedEnd(fieldGeneratorRequestedEnd.value.referenced());
                fieldGeneratorRequestedEnd.have_value = false;
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
            if (fieldGeneratorIsRecurring.have_value)
              {
                result->setIsRecurring(fieldGeneratorIsRecurring.value);
                fieldGeneratorIsRecurring.have_value = false;
              }
            else if (!(result->hasIsRecurring()))
              {
                error("When parsing the object for %what%, the \"IsRecurring\" field was missing.");
              }
            if (fieldGeneratorRecurrenceRule.have_value)
              {
                result->setRecurrenceRule(fieldGeneratorRecurrenceRule.value);
                fieldGeneratorRecurrenceRule.have_value = false;
              }
            if (fieldGeneratorDurationSeconds.have_value)
              {
                result->setDurationSeconds(fieldGeneratorDurationSeconds.value);
                fieldGeneratorDurationSeconds.have_value = false;
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
            if (fieldGeneratorCalendarName.have_value)
              {
                result->setCalendarName(fieldGeneratorCalendarName.value);
                fieldGeneratorCalendarName.have_value = false;
              }
            if (fieldGeneratorCalendarID.have_value)
              {
                result->setCalendarID(fieldGeneratorCalendarID.value);
                fieldGeneratorCalendarID.have_value = false;
              }
            if (fieldGeneratorDescription.have_value)
              {
                result->setDescription(fieldGeneratorDescription.value);
                fieldGeneratorDescription.have_value = false;
              }
            if (fieldGeneratorOrganizer.have_value)
              {
                result->setOrganizer(fieldGeneratorOrganizer.value);
                fieldGeneratorOrganizer.have_value = false;
              }
            if (fieldGeneratorSelfAttendeeStatus.have_value)
              {
                result->setSelfAttendeeStatus(fieldGeneratorSelfAttendeeStatus.value);
                fieldGeneratorSelfAttendeeStatus.have_value = false;
              }
            if (fieldGeneratorAccessLevel.have_value)
              {
                result->setAccessLevel(fieldGeneratorAccessLevel.value);
                fieldGeneratorAccessLevel.have_value = false;
              }
            if (fieldGeneratorAttendees.have_value)
              {
                result->initAttendees();
                size_t count = fieldGeneratorAttendees.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAttendees(fieldGeneratorAttendees.value[num].referenced());
                  }
                fieldGeneratorAttendees.value.clear();
                fieldGeneratorAttendees.have_value = false;
              }
            if (fieldGeneratorReminders.have_value)
              {
                result->initReminders();
                size_t count = fieldGeneratorReminders.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendReminders(fieldGeneratorReminders.value[num].referenced());
                  }
                fieldGeneratorReminders.value.clear();
                fieldGeneratorReminders.have_value = false;
              }
          }
        virtual void handle_result(CalendarCreateDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'c':
                            if (strcmp(&(field_name[2]), "cessLevel") == 0)
                                return &fieldGeneratorAccessLevel;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "tendees") == 0)
                                return &fieldGeneratorAttendees;
                            break;
                        case 'v':
                            if (strcmp(&(field_name[2]), "ailability") == 0)
                                return &fieldGeneratorAvailability;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "alendar", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[9]), "D") == 0)
                                    return &fieldGeneratorCalendarID;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[9]), "ame") == 0)
                                    return &fieldGeneratorCalendarName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "scription") == 0)
                                return &fieldGeneratorDescription;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rationSeconds") == 0)
                                return &fieldGeneratorDurationSeconds;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "nd") == 0)
                        return &fieldGeneratorEnd;
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
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "stCreateAction") == 0)
                                return &fieldGeneratorLastCreateAction;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "cation") == 0)
                                return &fieldGeneratorLocation;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "extCreateAction") == 0)
                        return &fieldGeneratorNextCreateAction;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rganizer") == 0)
                        return &fieldGeneratorOrganizer;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'c':
                                if (strcmp(&(field_name[3]), "urrenceRule") == 0)
                                    return &fieldGeneratorRecurrenceRule;
                                break;
                            case 'm':
                                if (strcmp(&(field_name[3]), "inders") == 0)
                                    return &fieldGeneratorReminders;
                                break;
                            case 'q':
                                if (strncmp(&(field_name[3]), "uested", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'E':
                                            if (strcmp(&(field_name[10]), "nd") == 0)
                                                return &fieldGeneratorRequestedEnd;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[10]), "tart") == 0)
                                                return &fieldGeneratorRequestedStart;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "lfAttendeeStatus") == 0)
                                return &fieldGeneratorSelfAttendeeStatus;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "art") == 0)
                                return &fieldGeneratorStart;
                            break;
                        default:
                            break;
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
        Generator(bool ignore_extras = false) : fieldGeneratorNextCreateAction("field \"NextCreateAction\" of the CalendarCreateData class"), fieldGeneratorLastCreateAction("field \"LastCreateAction\" of the CalendarCreateData class"), fieldGeneratorItemKind("field \"ItemKind\" of the CalendarCreateData class"), fieldGeneratorTitle("field \"Title\" of the CalendarCreateData class"), fieldGeneratorLocation("field \"Location\" of the CalendarCreateData class"), fieldGeneratorMapLocation("field \"MapLocation\" of the CalendarCreateData class"), fieldGeneratorRequestedStart("field \"RequestedStart\" of the CalendarCreateData class", ignore_extras), fieldGeneratorRequestedEnd("field \"RequestedEnd\" of the CalendarCreateData class", ignore_extras), fieldGeneratorStart("field \"Start\" of the CalendarCreateData class", ignore_extras), fieldGeneratorEnd("field \"End\" of the CalendarCreateData class", ignore_extras), fieldGeneratorFrequencyType("field \"FrequencyType\" of the CalendarCreateData class"), fieldGeneratorFrequencyMultiplier("field \"FrequencyMultiplier\" of the CalendarCreateData class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the CalendarCreateData class"), fieldGeneratorRecurrenceRule("field \"RecurrenceRule\" of the CalendarCreateData class"), fieldGeneratorDurationSeconds("field \"DurationSeconds\" of the CalendarCreateData class"), fieldGeneratorIsAllDay("field \"IsAllDay\" of the CalendarCreateData class"), fieldGeneratorAvailability("field \"Availability\" of the CalendarCreateData class"), fieldGeneratorCalendarName("field \"CalendarName\" of the CalendarCreateData class"), fieldGeneratorCalendarID("field \"CalendarID\" of the CalendarCreateData class"), fieldGeneratorDescription("field \"Description\" of the CalendarCreateData class"), fieldGeneratorOrganizer("field \"Organizer\" of the CalendarCreateData class"), fieldGeneratorSelfAttendeeStatus("field \"SelfAttendeeStatus\" of the CalendarCreateData class"), fieldGeneratorAccessLevel("field \"AccessLevel\" of the CalendarCreateData class"), fieldGeneratorAttendees("field \"Attendees\" of the CalendarCreateData class", ignore_extras), fieldGeneratorReminders("field \"Reminders\" of the CalendarCreateData class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CalendarCreateData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNextCreateAction.reset();
            fieldGeneratorLastCreateAction.reset();
            fieldGeneratorItemKind.reset();
            fieldGeneratorTitle.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRequestedStart.reset();
            fieldGeneratorRequestedEnd.reset();
            fieldGeneratorStart.reset();
            fieldGeneratorEnd.reset();
            fieldGeneratorFrequencyType.reset();
            fieldGeneratorFrequencyMultiplier.reset();
            fieldGeneratorIsRecurring.reset();
            fieldGeneratorRecurrenceRule.reset();
            fieldGeneratorDurationSeconds.reset();
            fieldGeneratorIsAllDay.reset();
            fieldGeneratorAvailability.reset();
            fieldGeneratorCalendarName.reset();
            fieldGeneratorCalendarID.reset();
            fieldGeneratorDescription.reset();
            fieldGeneratorOrganizer.reset();
            fieldGeneratorSelfAttendeeStatus.reset();
            fieldGeneratorAccessLevel.reset();
            fieldGeneratorAttendees.reset();
            fieldGeneratorReminders.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CALENDARCREATEDATAJSON_H */
