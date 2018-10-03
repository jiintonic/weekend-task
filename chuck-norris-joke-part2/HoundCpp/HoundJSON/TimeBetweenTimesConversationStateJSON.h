/* file "TimeBetweenTimesConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEBETWEENTIMESCONVERSATIONSTATEJSON_H
#define TIMEBETWEENTIMESCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "DateAndOrTimeSpecJSON.h"
#include "UnitOfMeasureAmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeBetweenTimesConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_TimeBetweenTimes
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);
    enum TypeUnitsKnownValues
      {
        Units_unknown,
        Units_days,
        Units_weeks,
        Units_months,
        Units_years,
        Units_decades,
        Units_centuries,
        Units_seconds,
        Units_minutes,
        Units_hours,
        Units__none
      };
    struct TypeUnits
      {
        bool in_known_list;
        std::string string_value;
        TypeUnitsKnownValues list_value;

        TypeUnits(void);
        TypeUnits(const TypeUnits &other);
        TypeUnits(TypeUnitsKnownValues other);
        bool  operator==(const TypeUnits &other) const;
        bool  operator!=(const TypeUnits &other) const;
        bool  operator<(const TypeUnits &other) const;
        bool  operator>(const TypeUnits &other) const;
        bool  operator>=(const TypeUnits &other) const;
        bool  operator<=(const TypeUnits &other) const;

      };

    static TypeUnitsKnownValues  stringToUnits(const char *chars);
    static const char * stringFromUnits(TypeUnitsKnownValues the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasSourceDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeSourceDateAndOrTimeSpec;
    bool flagHasDestinationDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDestinationDateAndOrTimeSpec;
    bool flagHasDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDateAndOrTimeSpec;
    bool flagHasUnitOfMeasureAmount;
    UnitOfMeasureAmountJSON * storeUnitOfMeasureAmount;
    bool flagHasTimeDifference;
    double storeTimeDifference;
    std::string textStoreTimeDifference;
    bool flagHasUnits;
    TypeUnits storeUnits;
    bool flagHasRequestedInThePast;
    bool storeRequestedInThePast;
    bool flagHasIsBetweenTwoDateTimes;
    bool storeIsBetweenTwoDateTimes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeBetweenTimesConversationStateJSON(const TimeBetweenTimesConversationStateJSON &);
    TimeBetweenTimesConversationStateJSON & operator=(const TimeBetweenTimesConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfMeasureAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeDifference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsBetweenTwoDateTimes(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeBetweenTimesConversationStateJSON(void);
    virtual ~TimeBetweenTimesConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasSourceDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getSourceDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getSourceDateAndOrTimeSpec(void) const;
    bool  hasDestinationDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDestinationDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDestinationDateAndOrTimeSpec(void) const;
    bool  hasDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void) const;
    bool  hasUnitOfMeasureAmount(void) const;
    UnitOfMeasureAmountJSON *  getUnitOfMeasureAmount(void);
    const UnitOfMeasureAmountJSON *  getUnitOfMeasureAmount(void) const;
    bool  hasTimeDifference(void) const;
    double  getTimeDifference(void);
    const double  getTimeDifference(void) const;
    std::string  getTimeDifferenceAsText(void) const;
    bool  hasUnits(void) const;
    TypeUnits  getUnits(void);
    const TypeUnits  getUnits(void) const;
    const char * getUnitsAsChars(void) const;
    std::string  getUnitsAsString(void) const;
    bool  hasRequestedInThePast(void) const;
    bool  getRequestedInThePast(void);
    const bool  getRequestedInThePast(void) const;
    bool  hasIsBetweenTwoDateTimes(void) const;
    bool  getIsBetweenTwoDateTimes(void);
    const bool  getIsBetweenTwoDateTimes(void) const;

    virtual size_t extraTimeBetweenTimesConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeBetweenTimesConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeBetweenTimesConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeBetweenTimesConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeBetweenTimesConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeBetweenTimesConversationStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = true;
      }
    void setDateAndTimeKind(TypeDateAndTimeKind new_value)
      {
        setDateAndTimeKind();
      }
    void setDateAndTimeKind(const char *chars)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(chars));
      }
    void setDateAndTimeKind(std::string the_string)
      {
        setDateAndTimeKind(stringToDateAndTimeKind(the_string.c_str()));
      }
    void unsetDateAndTimeKind(void)
      {
        flagHasDateAndTimeKind = false;
      }
    void setSourceDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceDateAndOrTimeSpec)
          {
            storeSourceDateAndOrTimeSpec->remove_reference();
          }
        flagHasSourceDateAndOrTimeSpec = true;
        storeSourceDateAndOrTimeSpec = new_value;
      }
    void unsetSourceDateAndOrTimeSpec(void)
      {
        if (flagHasSourceDateAndOrTimeSpec)
          {
            storeSourceDateAndOrTimeSpec->remove_reference();
          }
        flagHasSourceDateAndOrTimeSpec = false;
      }
    void setDestinationDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            storeDestinationDateAndOrTimeSpec->remove_reference();
          }
        flagHasDestinationDateAndOrTimeSpec = true;
        storeDestinationDateAndOrTimeSpec = new_value;
      }
    void unsetDestinationDateAndOrTimeSpec(void)
      {
        if (flagHasDestinationDateAndOrTimeSpec)
          {
            storeDestinationDateAndOrTimeSpec->remove_reference();
          }
        flagHasDestinationDateAndOrTimeSpec = false;
      }
    void setDateAndOrTimeSpec(DateAndOrTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = true;
        storeDateAndOrTimeSpec = new_value;
      }
    void unsetDateAndOrTimeSpec(void)
      {
        if (flagHasDateAndOrTimeSpec)
          {
            storeDateAndOrTimeSpec->remove_reference();
          }
        flagHasDateAndOrTimeSpec = false;
      }
    void setUnitOfMeasureAmount(UnitOfMeasureAmountJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnitOfMeasureAmount)
          {
            storeUnitOfMeasureAmount->remove_reference();
          }
        flagHasUnitOfMeasureAmount = true;
        storeUnitOfMeasureAmount = new_value;
      }
    void unsetUnitOfMeasureAmount(void)
      {
        if (flagHasUnitOfMeasureAmount)
          {
            storeUnitOfMeasureAmount->remove_reference();
          }
        flagHasUnitOfMeasureAmount = false;
      }
    void setTimeDifference(double new_value)
      {
        flagHasTimeDifference = true;
        storeTimeDifference = new_value;
        textStoreTimeDifference = "";
      }
    void setTimeDifferenceText(std::string new_value)
      {
        flagHasTimeDifference = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TimeDifference of TimeBetweenTimesConversationStateJSON is not a valid number.");
        textStoreTimeDifference = new_value;
      }
    void unsetTimeDifference(void)
      {
        flagHasTimeDifference = false;
      }
    void setUnits(TypeUnits new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void setUnits(const char *chars)
      {
        TypeUnitsKnownValues known = stringToUnits(chars);
        TypeUnits new_value;
        if (known == Units__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setUnits(new_value);
      }
    void setUnits(std::string the_string)
      {
        setUnits(the_string.c_str());
      }
    void setUnits(TypeUnitsKnownValues new_value)
      {
        TypeUnits new_full_value;
        assert(new_value != Units__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setUnits(new_full_value);
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
      }
    void setRequestedInThePast(bool new_value)
      {
        flagHasRequestedInThePast = true;
        storeRequestedInThePast = new_value;
      }
    void unsetRequestedInThePast(void)
      {
        flagHasRequestedInThePast = false;
      }
    void setIsBetweenTwoDateTimes(bool new_value)
      {
        flagHasIsBetweenTwoDateTimes = true;
        storeIsBetweenTwoDateTimes = new_value;
      }
    void unsetIsBetweenTwoDateTimes(void)
      {
        flagHasIsBetweenTwoDateTimes = false;
      }

    virtual void extraTimeBetweenTimesConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeBetweenTimesConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeBetweenTimesConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraTimeBetweenTimesConversationStateAppendPair(key, new_component);
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
        assert(flagHasDateAndTimeKind);
        handler->start_pair("DateAndTimeKind");
        handler->string_value("TimeBetweenTimes");
        assert(flagHasSourceDateAndOrTimeSpec);
        handler->start_pair("SourceDateAndOrTimeSpec");
        storeSourceDateAndOrTimeSpec->write_as_json(handler);
        assert(flagHasDestinationDateAndOrTimeSpec);
        handler->start_pair("DestinationDateAndOrTimeSpec");
        storeDestinationDateAndOrTimeSpec->write_as_json(handler);
        assert(flagHasDateAndOrTimeSpec);
        handler->start_pair("DateAndOrTimeSpec");
        storeDateAndOrTimeSpec->write_as_json(handler);
        if (flagHasUnitOfMeasureAmount)
          {
            handler->start_pair("UnitOfMeasureAmount");
            storeUnitOfMeasureAmount->write_as_json(handler);
          }
        assert(flagHasTimeDifference);
        handler->start_pair("TimeDifference");
        if (textStoreTimeDifference != "")
            handler->number_value(textStoreTimeDifference.c_str());
        else if (((double)(long int)storeTimeDifference) == storeTimeDifference)
            handler->number_value((long int)storeTimeDifference);
        else
            handler->number_value(storeTimeDifference);
        if (flagHasUnits)
          {
            handler->start_pair("Units");
            if (storeUnits.in_known_list)
              {
                switch (storeUnits.list_value)
                  {
                    case Units_unknown:
                        handler->string_value("unknown");
                        break;
                    case Units_days:
                        handler->string_value("days");
                        break;
                    case Units_weeks:
                        handler->string_value("weeks");
                        break;
                    case Units_months:
                        handler->string_value("months");
                        break;
                    case Units_years:
                        handler->string_value("years");
                        break;
                    case Units_decades:
                        handler->string_value("decades");
                        break;
                    case Units_centuries:
                        handler->string_value("centuries");
                        break;
                    case Units_seconds:
                        handler->string_value("seconds");
                        break;
                    case Units_minutes:
                        handler->string_value("minutes");
                        break;
                    case Units_hours:
                        handler->string_value("hours");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeUnits.string_value);
              }
          }
        assert(flagHasRequestedInThePast);
        handler->start_pair("RequestedInThePast");
        handler->boolean_value(storeRequestedInThePast);
        assert(flagHasIsBetweenTwoDateTimes);
        handler->start_pair("IsBetweenTwoDateTimes");
        handler->boolean_value(storeIsBetweenTwoDateTimes);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasSourceDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"SourceDateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasDestinationDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationDateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasTimeDifference()))
          {
            return "When parsing the object for %what%, the \"TimeDifference\" field was missing.";
          }
        if (!(hasRequestedInThePast()))
          {
            return "When parsing the object for %what%, the \"RequestedInThePast\" field was missing.";
          }
        if (!(hasIsBetweenTwoDateTimes()))
          {
            return "When parsing the object for %what%, the \"IsBetweenTwoDateTimes\" field was missing.";
          }
        return NULL;
      }

    static TimeBetweenTimesConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeBetweenTimesConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeBetweenTimesConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesConversationStateJSON>, TimeBetweenTimesConversationStateJSON *, bool> generator("Type TimeBetweenTimesConversationState", ignore_extras);
            parse_json_value(text, "Text for TimeBetweenTimesConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeBetweenTimesConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeBetweenTimesConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenTimesConversationStateJSON>, TimeBetweenTimesConversationStateJSON *, bool> generator("Type TimeBetweenTimesConversationState", ignore_extras);
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
    class FieldGeneratorDateAndTimeKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDateAndTimeKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDateAndTimeKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDateAndTimeKind(result));
              }
            virtual void handle_result(TypeDateAndTimeKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDateAndTimeKind, TypeDateAndTimeKind, TypeDateAndTimeKind > fieldGeneratorDateAndTimeKind;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorSourceDateAndOrTimeSpec;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDestinationDateAndOrTimeSpec;
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDateAndOrTimeSpec;
        JSONHoldingGenerator<UnitOfMeasureAmountJSON::Generator, RCHandle<UnitOfMeasureAmountJSON>, UnitOfMeasureAmountJSON *, bool > fieldGeneratorUnitOfMeasureAmount;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTimeDifference;
    class FieldGeneratorUnits : public JSONStringGenerator
          {
          protected:
            FieldGeneratorUnits(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorUnits(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeUnitsKnownValues known = stringToUnits(result);
                TypeUnits new_value;
                if (known == Units__none)
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
            virtual void handle_result(TypeUnits result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorUnits, TypeUnits, TypeUnits > fieldGeneratorUnits;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedInThePast;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsBetweenTwoDateTimes;
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
            TimeBetweenTimesConversationStateJSON *result = new TimeBetweenTimesConversationStateJSON();
            assert(result != NULL);
            RCHandle<TimeBetweenTimesConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeBetweenTimesConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeBetweenTimesConversationStateJSON *result)
          {
            if (fieldGeneratorDateAndTimeKind.have_value)
              {
                result->setDateAndTimeKind();
                fieldGeneratorDateAndTimeKind.have_value = false;
              }
            else if (!(result->hasDateAndTimeKind()))
              {
                error("When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.");
              }
            if (fieldGeneratorSourceDateAndOrTimeSpec.have_value)
              {
                result->setSourceDateAndOrTimeSpec(fieldGeneratorSourceDateAndOrTimeSpec.value.referenced());
                fieldGeneratorSourceDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasSourceDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"SourceDateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDestinationDateAndOrTimeSpec.have_value)
              {
                result->setDestinationDateAndOrTimeSpec(fieldGeneratorDestinationDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDestinationDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDestinationDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DestinationDateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDateAndOrTimeSpec.have_value)
              {
                result->setDateAndOrTimeSpec(fieldGeneratorDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorUnitOfMeasureAmount.have_value)
              {
                result->setUnitOfMeasureAmount(fieldGeneratorUnitOfMeasureAmount.value.referenced());
                fieldGeneratorUnitOfMeasureAmount.have_value = false;
              }
            if (fieldGeneratorTimeDifference.have_value)
              {
                result->setTimeDifferenceText(fieldGeneratorTimeDifference.value);
                fieldGeneratorTimeDifference.have_value = false;
              }
            else if (!(result->hasTimeDifference()))
              {
                error("When parsing the object for %what%, the \"TimeDifference\" field was missing.");
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            if (fieldGeneratorRequestedInThePast.have_value)
              {
                result->setRequestedInThePast(fieldGeneratorRequestedInThePast.value);
                fieldGeneratorRequestedInThePast.have_value = false;
              }
            else if (!(result->hasRequestedInThePast()))
              {
                error("When parsing the object for %what%, the \"RequestedInThePast\" field was missing.");
              }
            if (fieldGeneratorIsBetweenTwoDateTimes.have_value)
              {
                result->setIsBetweenTwoDateTimes(fieldGeneratorIsBetweenTwoDateTimes.value);
                fieldGeneratorIsBetweenTwoDateTimes.have_value = false;
              }
            else if (!(result->hasIsBetweenTwoDateTimes()))
              {
                error("When parsing the object for %what%, the \"IsBetweenTwoDateTimes\" field was missing.");
              }
          }
        virtual void handle_result(TimeBetweenTimesConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "teAnd", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'O':
                                        if (strcmp(&(field_name[8]), "rTimeSpec") == 0)
                                            return &fieldGeneratorDateAndOrTimeSpec;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[8]), "imeKind") == 0)
                                            return &fieldGeneratorDateAndTimeKind;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "stinationDateAndOrTimeSpec") == 0)
                                return &fieldGeneratorDestinationDateAndOrTimeSpec;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sBetweenTwoDateTimes") == 0)
                        return &fieldGeneratorIsBetweenTwoDateTimes;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedInThePast") == 0)
                        return &fieldGeneratorRequestedInThePast;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ourceDateAndOrTimeSpec") == 0)
                        return &fieldGeneratorSourceDateAndOrTimeSpec;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "imeDifference") == 0)
                        return &fieldGeneratorTimeDifference;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nit", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'O':
                                if (strcmp(&(field_name[5]), "fMeasureAmount") == 0)
                                    return &fieldGeneratorUnitOfMeasureAmount;
                                break;
                            case 's':
                                if (field_name[5] == 0)
                                    return &fieldGeneratorUnits;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the TimeBetweenTimesConversationState class"), fieldGeneratorSourceDateAndOrTimeSpec("field \"SourceDateAndOrTimeSpec\" of the TimeBetweenTimesConversationState class", ignore_extras), fieldGeneratorDestinationDateAndOrTimeSpec("field \"DestinationDateAndOrTimeSpec\" of the TimeBetweenTimesConversationState class", ignore_extras), fieldGeneratorDateAndOrTimeSpec("field \"DateAndOrTimeSpec\" of the TimeBetweenTimesConversationState class", ignore_extras), fieldGeneratorUnitOfMeasureAmount("field \"UnitOfMeasureAmount\" of the TimeBetweenTimesConversationState class", ignore_extras), fieldGeneratorTimeDifference("field \"TimeDifference\" of the TimeBetweenTimesConversationState class"), fieldGeneratorUnits("field \"Units\" of the TimeBetweenTimesConversationState class"), fieldGeneratorRequestedInThePast("field \"RequestedInThePast\" of the TimeBetweenTimesConversationState class"), fieldGeneratorIsBetweenTwoDateTimes("field \"IsBetweenTwoDateTimes\" of the TimeBetweenTimesConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeBetweenTimesConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorSourceDateAndOrTimeSpec.reset();
            fieldGeneratorDestinationDateAndOrTimeSpec.reset();
            fieldGeneratorDateAndOrTimeSpec.reset();
            fieldGeneratorUnitOfMeasureAmount.reset();
            fieldGeneratorTimeDifference.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorRequestedInThePast.reset();
            fieldGeneratorIsBetweenTwoDateTimes.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEBETWEENTIMESCONVERSATIONSTATEJSON_H */
