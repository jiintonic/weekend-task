/* file "AlarmJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ALARMJSON_H
#define ALARMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AlarmJSON : public ReferenceCounted
  {
  public:
    enum TypeDaysOfWeekKnownValues
      {
        DaysOfWeek_Sunday,
        DaysOfWeek_Monday,
        DaysOfWeek_Tuesday,
        DaysOfWeek_Wednesday,
        DaysOfWeek_Thursday,
        DaysOfWeek_Friday,
        DaysOfWeek_Saturday,
        DaysOfWeek__none
      };
    struct TypeDaysOfWeek
      {
        bool in_known_list;
        std::string string_value;
        TypeDaysOfWeekKnownValues list_value;

        TypeDaysOfWeek(void);
        TypeDaysOfWeek(const TypeDaysOfWeek &other);
        TypeDaysOfWeek(TypeDaysOfWeekKnownValues other);
        bool  operator==(const TypeDaysOfWeek &other) const;
        bool  operator!=(const TypeDaysOfWeek &other) const;
        bool  operator<(const TypeDaysOfWeek &other) const;
        bool  operator>(const TypeDaysOfWeek &other) const;
        bool  operator>=(const TypeDaysOfWeek &other) const;
        bool  operator<=(const TypeDaysOfWeek &other) const;

      };

    static TypeDaysOfWeekKnownValues  stringToDaysOfWeek(const char *chars);
    static const char * stringFromDaysOfWeek(TypeDaysOfWeekKnownValues the_enum);

  private:
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasIsWake;
    bool storeIsWake;
    bool flagHasIsRecurring;
    bool storeIsRecurring;
    bool flagHasHour;
    uint8_t storeHour;
    bool flagHasMinute;
    uint8_t storeMinute;
    bool flagHasSecond;
    uint8_t storeSecond;
    bool flagHasDaysOfWeek;
    std::vector< TypeDaysOfWeek > storeDaysOfWeek;
    bool flagHasInvalidDates;
    std::vector< DateAndOrTimeJSON * > storeInvalidDates;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AlarmJSON(const AlarmJSON &);
    AlarmJSON & operator=(const AlarmJSON &other);

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsWake(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRecurring(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHour(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecond(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDaysOfWeek(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInvalidDates(JSONValue *json_value, bool ignore_extras = false);


  public:
    AlarmJSON(void);
    virtual ~AlarmJSON(void);
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasIsWake(void) const;
    bool  getIsWake(void);
    const bool  getIsWake(void) const;
    bool  hasIsRecurring(void) const;
    bool  getIsRecurring(void);
    const bool  getIsRecurring(void) const;
    bool  hasHour(void) const;
    uint8_t  getHour(void);
    const uint8_t  getHour(void) const;
    bool  hasMinute(void) const;
    uint8_t  getMinute(void);
    const uint8_t  getMinute(void) const;
    bool  hasSecond(void) const;
    uint8_t  getSecond(void);
    const uint8_t  getSecond(void) const;
    bool  hasDaysOfWeek(void) const;
    size_t  countOfDaysOfWeek(void) const;
    TypeDaysOfWeek  elementOfDaysOfWeek(size_t element_num);
    const TypeDaysOfWeek  elementOfDaysOfWeek(size_t element_num) const;
    std::vector< TypeDaysOfWeek >  getDaysOfWeek(void);
    const std::vector< TypeDaysOfWeek >  getDaysOfWeek(void) const;
    bool  hasInvalidDates(void) const;
    size_t  countOfInvalidDates(void) const;
    DateAndOrTimeJSON *  elementOfInvalidDates(size_t element_num);
    const DateAndOrTimeJSON *  elementOfInvalidDates(size_t element_num) const;
    std::vector< DateAndOrTimeJSON * >  getInvalidDates(void);
    const std::vector< DateAndOrTimeJSON * >  getInvalidDates(void) const;

    virtual size_t extraAlarmComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAlarmComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAlarmComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAlarmComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAlarmLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAlarmLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setIsWake(bool new_value)
      {
        flagHasIsWake = true;
        storeIsWake = new_value;
      }
    void unsetIsWake(void)
      {
        flagHasIsWake = false;
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
    void setHour(uint8_t new_value)
      {
        flagHasHour = true;
        if (new_value < 0)
            throw("The value for field Hour of AlarmJSON is less than the lower bound (0) for that field.");
        if (new_value > 23)
            throw("The value for field Hour of AlarmJSON is greater than the upper bound (23) for that field.");
        storeHour = new_value;
      }
    void unsetHour(void)
      {
        flagHasHour = false;
      }
    void setMinute(uint8_t new_value)
      {
        flagHasMinute = true;
        if (new_value < 0)
            throw("The value for field Minute of AlarmJSON is less than the lower bound (0) for that field.");
        if (new_value > 59)
            throw("The value for field Minute of AlarmJSON is greater than the upper bound (59) for that field.");
        storeMinute = new_value;
      }
    void unsetMinute(void)
      {
        flagHasMinute = false;
      }
    void setSecond(uint8_t new_value)
      {
        flagHasSecond = true;
        if (new_value < 0)
            throw("The value for field Second of AlarmJSON is less than the lower bound (0) for that field.");
        if (new_value > 60)
            throw("The value for field Second of AlarmJSON is greater than the upper bound (60) for that field.");
        storeSecond = new_value;
      }
    void unsetSecond(void)
      {
        flagHasSecond = false;
      }
    void initDaysOfWeek(void)
      {
        flagHasDaysOfWeek = true;
        storeDaysOfWeek.clear();
      }
    void appendDaysOfWeek(TypeDaysOfWeek to_append)
      {
        if (!flagHasDaysOfWeek)
          {
            flagHasDaysOfWeek = true;
            storeDaysOfWeek.clear();
          }
        assert(flagHasDaysOfWeek);
        storeDaysOfWeek.push_back(to_append);
      }
    void appendDaysOfWeek(const char *chars)
      {
        TypeDaysOfWeekKnownValues known = stringToDaysOfWeek(chars);
        TypeDaysOfWeek new_value;
        if (known == DaysOfWeek__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendDaysOfWeek(new_value);
      }
    void appendDaysOfWeek(std::string the_string)
      {
        appendDaysOfWeek(the_string.c_str());
      }
    void appendDaysOfWeek(TypeDaysOfWeekKnownValues new_value)
      {
        TypeDaysOfWeek new_full_value;
        assert(new_value != DaysOfWeek__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        appendDaysOfWeek(new_full_value);
      }
    void unsetDaysOfWeek(void)
      {
        flagHasDaysOfWeek = false;
        storeDaysOfWeek.clear();
      }
    void initInvalidDates(void)
      {
        if (flagHasInvalidDates)
          {
            for (size_t num2 = 0; num2 < storeInvalidDates.size(); ++num2)
              {
                storeInvalidDates[num2]->remove_reference();
              }
          }
        flagHasInvalidDates = true;
        storeInvalidDates.clear();
      }
    void appendInvalidDates(DateAndOrTimeJSON * to_append)
      {
        if (!flagHasInvalidDates)
          {
            flagHasInvalidDates = true;
            storeInvalidDates.clear();
          }
        assert(flagHasInvalidDates);
        to_append->add_reference();
        storeInvalidDates.push_back(to_append);
      }
    void unsetInvalidDates(void)
      {
        if (flagHasInvalidDates)
          {
            for (size_t num3 = 0; num3 < storeInvalidDates.size(); ++num3)
              {
                storeInvalidDates[num3]->remove_reference();
              }
          }
        flagHasInvalidDates = false;
        storeInvalidDates.clear();
      }

    virtual void extraAlarmAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAlarmSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAlarmLookup(key);
        if (old_field == NULL)
          {
            extraAlarmAppendPair(key, new_component);
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
        if (flagHasTitle)
          {
            handler->start_pair("Title");
            handler->string_value(storeTitle);
          }
        if (flagHasIsWake)
          {
            handler->start_pair("IsWake");
            handler->boolean_value(storeIsWake);
          }
        assert(flagHasIsRecurring);
        handler->start_pair("IsRecurring");
        handler->boolean_value(storeIsRecurring);
        assert(flagHasHour);
        handler->start_pair("Hour");
        handler->number_value(storeHour);
        assert(flagHasMinute);
        handler->start_pair("Minute");
        handler->number_value(storeMinute);
        assert(flagHasSecond);
        handler->start_pair("Second");
        handler->number_value(storeSecond);
        assert(flagHasDaysOfWeek);
        handler->start_pair("DaysOfWeek");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeDaysOfWeek.size(); ++num1)
          {
            if (storeDaysOfWeek[num1].in_known_list)
              {
                switch (storeDaysOfWeek[num1].list_value)
                  {
                    case DaysOfWeek_Sunday:
                        handler->string_value("Sunday");
                        break;
                    case DaysOfWeek_Monday:
                        handler->string_value("Monday");
                        break;
                    case DaysOfWeek_Tuesday:
                        handler->string_value("Tuesday");
                        break;
                    case DaysOfWeek_Wednesday:
                        handler->string_value("Wednesday");
                        break;
                    case DaysOfWeek_Thursday:
                        handler->string_value("Thursday");
                        break;
                    case DaysOfWeek_Friday:
                        handler->string_value("Friday");
                        break;
                    case DaysOfWeek_Saturday:
                        handler->string_value("Saturday");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeDaysOfWeek[num1].string_value);
              }
          }
        handler->finish_array();
        assert(flagHasInvalidDates);
        handler->start_pair("InvalidDates");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeInvalidDates.size(); ++num2)
          {
            storeInvalidDates[num2]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasIsRecurring()))
          {
            return "When parsing the object for %what%, the \"IsRecurring\" field was missing.";
          }
        if (!(hasHour()))
          {
            return "When parsing the object for %what%, the \"Hour\" field was missing.";
          }
        if (!(hasMinute()))
          {
            return "When parsing the object for %what%, the \"Minute\" field was missing.";
          }
        if (!(hasSecond()))
          {
            return "When parsing the object for %what%, the \"Second\" field was missing.";
          }
        if (!(hasDaysOfWeek()))
          {
            return "When parsing the object for %what%, the \"DaysOfWeek\" field was missing.";
          }
        if (!(hasInvalidDates()))
          {
            return "When parsing the object for %what%, the \"InvalidDates\" field was missing.";
          }
        return NULL;
      }

    static AlarmJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AlarmJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AlarmJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmJSON>, AlarmJSON *, bool> generator("Type Alarm", ignore_extras);
            parse_json_value(text, "Text for AlarmJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AlarmJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AlarmJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AlarmJSON>, AlarmJSON *, bool> generator("Type Alarm", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTitle;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsWake;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRecurring;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 23>, uint8_t, uint8_t > fieldGeneratorHour;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 59>, uint8_t, uint8_t > fieldGeneratorMinute;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 60>, uint8_t, uint8_t > fieldGeneratorSecond;
    class FieldGeneratorDaysOfWeek : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDaysOfWeek(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDaysOfWeek(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeDaysOfWeekKnownValues known = stringToDaysOfWeek(result);
                TypeDaysOfWeek new_value;
                if (known == DaysOfWeek__none)
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
            virtual void handle_result(TypeDaysOfWeek result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorDaysOfWeek, TypeDaysOfWeek, TypeDaysOfWeek > fieldGeneratorDaysOfWeek;
        JSONHoldingArrayGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorInvalidDates;
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
            AlarmJSON *result = new AlarmJSON();
            assert(result != NULL);
            RCHandle<AlarmJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAlarmAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AlarmJSON *result)
          {
            if (fieldGeneratorTitle.have_value)
              {
                result->setTitle(fieldGeneratorTitle.value);
                fieldGeneratorTitle.have_value = false;
              }
            if (fieldGeneratorIsWake.have_value)
              {
                result->setIsWake(fieldGeneratorIsWake.value);
                fieldGeneratorIsWake.have_value = false;
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
            if (fieldGeneratorHour.have_value)
              {
                result->setHour(fieldGeneratorHour.value);
                fieldGeneratorHour.have_value = false;
              }
            else if (!(result->hasHour()))
              {
                error("When parsing the object for %what%, the \"Hour\" field was missing.");
              }
            if (fieldGeneratorMinute.have_value)
              {
                result->setMinute(fieldGeneratorMinute.value);
                fieldGeneratorMinute.have_value = false;
              }
            else if (!(result->hasMinute()))
              {
                error("When parsing the object for %what%, the \"Minute\" field was missing.");
              }
            if (fieldGeneratorSecond.have_value)
              {
                result->setSecond(fieldGeneratorSecond.value);
                fieldGeneratorSecond.have_value = false;
              }
            else if (!(result->hasSecond()))
              {
                error("When parsing the object for %what%, the \"Second\" field was missing.");
              }
            if (fieldGeneratorDaysOfWeek.have_value)
              {
                result->initDaysOfWeek();
                size_t count = fieldGeneratorDaysOfWeek.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDaysOfWeek(fieldGeneratorDaysOfWeek.value[num]);
                  }
                fieldGeneratorDaysOfWeek.value.clear();
                fieldGeneratorDaysOfWeek.have_value = false;
              }
            else if (!(result->hasDaysOfWeek()))
              {
                error("When parsing the object for %what%, the \"DaysOfWeek\" field was missing.");
              }
            if (fieldGeneratorInvalidDates.have_value)
              {
                result->initInvalidDates();
                size_t count = fieldGeneratorInvalidDates.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInvalidDates(fieldGeneratorInvalidDates.value[num].referenced());
                  }
                fieldGeneratorInvalidDates.value.clear();
                fieldGeneratorInvalidDates.have_value = false;
              }
            else if (!(result->hasInvalidDates()))
              {
                error("When parsing the object for %what%, the \"InvalidDates\" field was missing.");
              }
          }
        virtual void handle_result(AlarmJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "aysOfWeek") == 0)
                        return &fieldGeneratorDaysOfWeek;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "our") == 0)
                        return &fieldGeneratorHour;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'n':
                            if (strcmp(&(field_name[2]), "validDates") == 0)
                                return &fieldGeneratorInvalidDates;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'R':
                                    if (strcmp(&(field_name[3]), "ecurring") == 0)
                                        return &fieldGeneratorIsRecurring;
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[3]), "ake") == 0)
                                        return &fieldGeneratorIsWake;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "inute") == 0)
                        return &fieldGeneratorMinute;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "econd") == 0)
                        return &fieldGeneratorSecond;
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
        Generator(bool ignore_extras = false) : fieldGeneratorTitle("field \"Title\" of the Alarm class"), fieldGeneratorIsWake("field \"IsWake\" of the Alarm class"), fieldGeneratorIsRecurring("field \"IsRecurring\" of the Alarm class"), fieldGeneratorHour("field \"Hour\" of the Alarm class"), fieldGeneratorMinute("field \"Minute\" of the Alarm class"), fieldGeneratorSecond("field \"Second\" of the Alarm class"), fieldGeneratorDaysOfWeek("field \"DaysOfWeek\" of the Alarm class"), fieldGeneratorInvalidDates("field \"InvalidDates\" of the Alarm class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Alarm class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTitle.reset();
            fieldGeneratorIsWake.reset();
            fieldGeneratorIsRecurring.reset();
            fieldGeneratorHour.reset();
            fieldGeneratorMinute.reset();
            fieldGeneratorSecond.reset();
            fieldGeneratorDaysOfWeek.reset();
            fieldGeneratorInvalidDates.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ALARMJSON_H */
