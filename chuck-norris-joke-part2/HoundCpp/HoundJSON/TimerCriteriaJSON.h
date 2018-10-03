/* file "TimerCriteriaJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMERCRITERIAJSON_H
#define TIMERCRITERIAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimerCriteriaJSON : public ReferenceCounted
  {
  private:
    bool flagHasTitle;
    std::string storeTitle;
    bool flagHasPosition;
    OInteger storePosition;
    bool flagHasCenturies;
    OInteger storeCenturies;
    bool flagHasDecades;
    OInteger storeDecades;
    bool flagHasYears;
    OInteger storeYears;
    bool flagHasMonths;
    OInteger storeMonths;
    bool flagHasWeeks;
    OInteger storeWeeks;
    bool flagHasDays;
    OInteger storeDays;
    bool flagHasHours;
    OInteger storeHours;
    bool flagHasMinutes;
    OInteger storeMinutes;
    bool flagHasSeconds;
    OInteger storeSeconds;
    bool flagHasDurationInSeconds;
    OInteger storeDurationInSeconds;
    bool flagHasIsCountdown;
    bool storeIsCountdown;
    bool flagHasSecondsToAdd;
    OInteger storeSecondsToAdd;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimerCriteriaJSON(const TimerCriteriaJSON &);
    TimerCriteriaJSON & operator=(const TimerCriteriaJSON &other);

    void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPosition(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCenturies(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDecades(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYears(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMonths(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeeks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDays(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinutes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationInSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsCountdown(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSecondsToAdd(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimerCriteriaJSON(void);
    virtual ~TimerCriteriaJSON(void);
    bool  hasTitle(void) const;
    std::string  getTitle(void);
    const std::string  getTitle(void) const;
    bool  hasPosition(void) const;
    OInteger  getPosition(void);
    const OInteger  getPosition(void) const;
    bool  hasCenturies(void) const;
    OInteger  getCenturies(void);
    const OInteger  getCenturies(void) const;
    bool  hasDecades(void) const;
    OInteger  getDecades(void);
    const OInteger  getDecades(void) const;
    bool  hasYears(void) const;
    OInteger  getYears(void);
    const OInteger  getYears(void) const;
    bool  hasMonths(void) const;
    OInteger  getMonths(void);
    const OInteger  getMonths(void) const;
    bool  hasWeeks(void) const;
    OInteger  getWeeks(void);
    const OInteger  getWeeks(void) const;
    bool  hasDays(void) const;
    OInteger  getDays(void);
    const OInteger  getDays(void) const;
    bool  hasHours(void) const;
    OInteger  getHours(void);
    const OInteger  getHours(void) const;
    bool  hasMinutes(void) const;
    OInteger  getMinutes(void);
    const OInteger  getMinutes(void) const;
    bool  hasSeconds(void) const;
    OInteger  getSeconds(void);
    const OInteger  getSeconds(void) const;
    bool  hasDurationInSeconds(void) const;
    OInteger  getDurationInSeconds(void);
    const OInteger  getDurationInSeconds(void) const;
    bool  hasIsCountdown(void) const;
    bool  getIsCountdown(void);
    const bool  getIsCountdown(void) const;
    bool  hasSecondsToAdd(void) const;
    OInteger  getSecondsToAdd(void);
    const OInteger  getSecondsToAdd(void) const;

    virtual size_t extraTimerCriteriaComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimerCriteriaComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimerCriteriaComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimerCriteriaComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimerCriteriaLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimerCriteriaLookup(const char *field_name) const
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
    void setPosition(OInteger new_value)
      {
        flagHasPosition = true;
        if (new_value < 1)
            throw("The value for field Position of TimerCriteriaJSON is less than the lower bound (1) for that field.");
        storePosition = new_value;
      }
    void unsetPosition(void)
      {
        flagHasPosition = false;
      }
    void setCenturies(OInteger new_value)
      {
        flagHasCenturies = true;
        storeCenturies = new_value;
      }
    void unsetCenturies(void)
      {
        flagHasCenturies = false;
      }
    void setDecades(OInteger new_value)
      {
        flagHasDecades = true;
        storeDecades = new_value;
      }
    void unsetDecades(void)
      {
        flagHasDecades = false;
      }
    void setYears(OInteger new_value)
      {
        flagHasYears = true;
        storeYears = new_value;
      }
    void unsetYears(void)
      {
        flagHasYears = false;
      }
    void setMonths(OInteger new_value)
      {
        flagHasMonths = true;
        storeMonths = new_value;
      }
    void unsetMonths(void)
      {
        flagHasMonths = false;
      }
    void setWeeks(OInteger new_value)
      {
        flagHasWeeks = true;
        storeWeeks = new_value;
      }
    void unsetWeeks(void)
      {
        flagHasWeeks = false;
      }
    void setDays(OInteger new_value)
      {
        flagHasDays = true;
        storeDays = new_value;
      }
    void unsetDays(void)
      {
        flagHasDays = false;
      }
    void setHours(OInteger new_value)
      {
        flagHasHours = true;
        storeHours = new_value;
      }
    void unsetHours(void)
      {
        flagHasHours = false;
      }
    void setMinutes(OInteger new_value)
      {
        flagHasMinutes = true;
        storeMinutes = new_value;
      }
    void unsetMinutes(void)
      {
        flagHasMinutes = false;
      }
    void setSeconds(OInteger new_value)
      {
        flagHasSeconds = true;
        storeSeconds = new_value;
      }
    void unsetSeconds(void)
      {
        flagHasSeconds = false;
      }
    void setDurationInSeconds(OInteger new_value)
      {
        flagHasDurationInSeconds = true;
        storeDurationInSeconds = new_value;
      }
    void unsetDurationInSeconds(void)
      {
        flagHasDurationInSeconds = false;
      }
    void setIsCountdown(bool new_value)
      {
        flagHasIsCountdown = true;
        storeIsCountdown = new_value;
      }
    void unsetIsCountdown(void)
      {
        flagHasIsCountdown = false;
      }
    void setSecondsToAdd(OInteger new_value)
      {
        flagHasSecondsToAdd = true;
        storeSecondsToAdd = new_value;
      }
    void unsetSecondsToAdd(void)
      {
        flagHasSecondsToAdd = false;
      }

    virtual void extraTimerCriteriaAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimerCriteriaSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimerCriteriaLookup(key);
        if (old_field == NULL)
          {
            extraTimerCriteriaAppendPair(key, new_component);
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
        if (flagHasPosition)
          {
            handler->start_pair("Position");
            handler->number_value(storePosition.get_o_integer());
          }
        if (flagHasCenturies)
          {
            handler->start_pair("Centuries");
            handler->number_value(storeCenturies.get_o_integer());
          }
        if (flagHasDecades)
          {
            handler->start_pair("Decades");
            handler->number_value(storeDecades.get_o_integer());
          }
        if (flagHasYears)
          {
            handler->start_pair("Years");
            handler->number_value(storeYears.get_o_integer());
          }
        if (flagHasMonths)
          {
            handler->start_pair("Months");
            handler->number_value(storeMonths.get_o_integer());
          }
        if (flagHasWeeks)
          {
            handler->start_pair("Weeks");
            handler->number_value(storeWeeks.get_o_integer());
          }
        if (flagHasDays)
          {
            handler->start_pair("Days");
            handler->number_value(storeDays.get_o_integer());
          }
        if (flagHasHours)
          {
            handler->start_pair("Hours");
            handler->number_value(storeHours.get_o_integer());
          }
        if (flagHasMinutes)
          {
            handler->start_pair("Minutes");
            handler->number_value(storeMinutes.get_o_integer());
          }
        if (flagHasSeconds)
          {
            handler->start_pair("Seconds");
            handler->number_value(storeSeconds.get_o_integer());
          }
        if (flagHasDurationInSeconds)
          {
            handler->start_pair("DurationInSeconds");
            handler->number_value(storeDurationInSeconds.get_o_integer());
          }
        if (flagHasIsCountdown)
          {
            handler->start_pair("IsCountdown");
            handler->boolean_value(storeIsCountdown);
          }
        if (flagHasSecondsToAdd)
          {
            handler->start_pair("SecondsToAdd");
            handler->number_value(storeSecondsToAdd.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static TimerCriteriaJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimerCriteriaJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimerCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerCriteriaJSON>, TimerCriteriaJSON *, bool> generator("Type TimerCriteria", ignore_extras);
            parse_json_value(text, "Text for TimerCriteriaJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimerCriteriaJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimerCriteriaJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimerCriteriaJSON>, TimerCriteriaJSON *, bool> generator("Type TimerCriteria", ignore_extras);
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
        static char lowerBoundPosition[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundPosition>, OInteger, o_integer > fieldGeneratorPosition;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorCenturies;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorDecades;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYears;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorMonths;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorWeeks;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorDays;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorHours;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorMinutes;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorSeconds;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorDurationInSeconds;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsCountdown;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorSecondsToAdd;
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
            TimerCriteriaJSON *result = new TimerCriteriaJSON();
            assert(result != NULL);
            RCHandle<TimerCriteriaJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimerCriteriaAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimerCriteriaJSON *result)
          {
            if (fieldGeneratorTitle.have_value)
              {
                result->setTitle(fieldGeneratorTitle.value);
                fieldGeneratorTitle.have_value = false;
              }
            if (fieldGeneratorPosition.have_value)
              {
                result->setPosition(fieldGeneratorPosition.value);
                fieldGeneratorPosition.have_value = false;
              }
            if (fieldGeneratorCenturies.have_value)
              {
                result->setCenturies(fieldGeneratorCenturies.value);
                fieldGeneratorCenturies.have_value = false;
              }
            if (fieldGeneratorDecades.have_value)
              {
                result->setDecades(fieldGeneratorDecades.value);
                fieldGeneratorDecades.have_value = false;
              }
            if (fieldGeneratorYears.have_value)
              {
                result->setYears(fieldGeneratorYears.value);
                fieldGeneratorYears.have_value = false;
              }
            if (fieldGeneratorMonths.have_value)
              {
                result->setMonths(fieldGeneratorMonths.value);
                fieldGeneratorMonths.have_value = false;
              }
            if (fieldGeneratorWeeks.have_value)
              {
                result->setWeeks(fieldGeneratorWeeks.value);
                fieldGeneratorWeeks.have_value = false;
              }
            if (fieldGeneratorDays.have_value)
              {
                result->setDays(fieldGeneratorDays.value);
                fieldGeneratorDays.have_value = false;
              }
            if (fieldGeneratorHours.have_value)
              {
                result->setHours(fieldGeneratorHours.value);
                fieldGeneratorHours.have_value = false;
              }
            if (fieldGeneratorMinutes.have_value)
              {
                result->setMinutes(fieldGeneratorMinutes.value);
                fieldGeneratorMinutes.have_value = false;
              }
            if (fieldGeneratorSeconds.have_value)
              {
                result->setSeconds(fieldGeneratorSeconds.value);
                fieldGeneratorSeconds.have_value = false;
              }
            if (fieldGeneratorDurationInSeconds.have_value)
              {
                result->setDurationInSeconds(fieldGeneratorDurationInSeconds.value);
                fieldGeneratorDurationInSeconds.have_value = false;
              }
            if (fieldGeneratorIsCountdown.have_value)
              {
                result->setIsCountdown(fieldGeneratorIsCountdown.value);
                fieldGeneratorIsCountdown.have_value = false;
              }
            if (fieldGeneratorSecondsToAdd.have_value)
              {
                result->setSecondsToAdd(fieldGeneratorSecondsToAdd.value);
                fieldGeneratorSecondsToAdd.have_value = false;
              }
          }
        virtual void handle_result(TimerCriteriaJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "enturies") == 0)
                        return &fieldGeneratorCenturies;
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ys") == 0)
                                return &fieldGeneratorDays;
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "cades") == 0)
                                return &fieldGeneratorDecades;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rationInSeconds") == 0)
                                return &fieldGeneratorDurationInSeconds;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ours") == 0)
                        return &fieldGeneratorHours;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sCountdown") == 0)
                        return &fieldGeneratorIsCountdown;
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "nutes") == 0)
                                return &fieldGeneratorMinutes;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "nths") == 0)
                                return &fieldGeneratorMonths;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "osition") == 0)
                        return &fieldGeneratorPosition;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "econds", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 0:
                                return &fieldGeneratorSeconds;
                            case 'T':
                                if (strcmp(&(field_name[8]), "oAdd") == 0)
                                    return &fieldGeneratorSecondsToAdd;
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
                case 'W':
                    if (strcmp(&(field_name[1]), "eeks") == 0)
                        return &fieldGeneratorWeeks;
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "ears") == 0)
                        return &fieldGeneratorYears;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTitle("field \"Title\" of the TimerCriteria class"), fieldGeneratorPosition("field \"Position\" of the TimerCriteria class"), fieldGeneratorCenturies("field \"Centuries\" of the TimerCriteria class"), fieldGeneratorDecades("field \"Decades\" of the TimerCriteria class"), fieldGeneratorYears("field \"Years\" of the TimerCriteria class"), fieldGeneratorMonths("field \"Months\" of the TimerCriteria class"), fieldGeneratorWeeks("field \"Weeks\" of the TimerCriteria class"), fieldGeneratorDays("field \"Days\" of the TimerCriteria class"), fieldGeneratorHours("field \"Hours\" of the TimerCriteria class"), fieldGeneratorMinutes("field \"Minutes\" of the TimerCriteria class"), fieldGeneratorSeconds("field \"Seconds\" of the TimerCriteria class"), fieldGeneratorDurationInSeconds("field \"DurationInSeconds\" of the TimerCriteria class"), fieldGeneratorIsCountdown("field \"IsCountdown\" of the TimerCriteria class"), fieldGeneratorSecondsToAdd("field \"SecondsToAdd\" of the TimerCriteria class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimerCriteria class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTitle.reset();
            fieldGeneratorPosition.reset();
            fieldGeneratorCenturies.reset();
            fieldGeneratorDecades.reset();
            fieldGeneratorYears.reset();
            fieldGeneratorMonths.reset();
            fieldGeneratorWeeks.reset();
            fieldGeneratorDays.reset();
            fieldGeneratorHours.reset();
            fieldGeneratorMinutes.reset();
            fieldGeneratorSeconds.reset();
            fieldGeneratorDurationInSeconds.reset();
            fieldGeneratorIsCountdown.reset();
            fieldGeneratorSecondsToAdd.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMERCRITERIAJSON_H */
