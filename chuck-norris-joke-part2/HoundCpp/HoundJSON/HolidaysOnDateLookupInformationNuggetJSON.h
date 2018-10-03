/* file "HolidaysOnDateLookupInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOLIDAYSONDATELOOKUPINFORMATIONNUGGETJSON_H
#define HOLIDAYSONDATELOOKUPINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "DateAndOrTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HolidaysOnDateLookupInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasDateAndOrTimeSpec;
    DateAndOrTimeSpecJSON * storeDateAndOrTimeSpec;
    bool flagHasDateAndOrTimeSpecInFuture;
    bool storeDateAndOrTimeSpecInFuture;
    bool flagHasHolidays;
    std::vector< std::string > storeHolidays;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HolidaysOnDateLookupInformationNuggetJSON(const HolidaysOnDateLookupInformationNuggetJSON &);
    HolidaysOnDateLookupInformationNuggetJSON & operator=(const HolidaysOnDateLookupInformationNuggetJSON &other);

    JSONValue * extraDateAndOrTimeSpecToJSON(void) const;
    JSONValue * extraDateAndOrTimeSpecInFutureToJSON(void) const;
    JSONValue * extraHolidaysToJSON(void) const;

    void  fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndOrTimeSpecInFuture(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHolidays(JSONValue *json_value, bool ignore_extras = false);


  public:
    HolidaysOnDateLookupInformationNuggetJSON(void);
    virtual ~HolidaysOnDateLookupInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasDateAndOrTimeSpec(void) const;
    DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void);
    const DateAndOrTimeSpecJSON *  getDateAndOrTimeSpec(void) const;
    bool  hasDateAndOrTimeSpecInFuture(void) const;
    bool  getDateAndOrTimeSpecInFuture(void);
    const bool  getDateAndOrTimeSpecInFuture(void) const;
    bool  hasHolidays(void) const;
    size_t  countOfHolidays(void) const;
    std::string  elementOfHolidays(size_t element_num);
    const std::string  elementOfHolidays(size_t element_num) const;
    std::vector< std::string >  getHolidays(void);
    const std::vector< std::string >  getHolidays(void) const;

    virtual size_t extraHolidaysOnDateLookupInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHolidaysOnDateLookupInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHolidaysOnDateLookupInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHolidaysOnDateLookupInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHolidaysOnDateLookupInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHolidaysOnDateLookupInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDateAndOrTimeSpec)
            ++result;
        if (flagHasDateAndOrTimeSpecInFuture)
            ++result;
        if (flagHasHolidays)
            ++result;
        result += extraHolidaysOnDateLookupInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return "DateAndOrTimeSpec";
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return "DateAndOrTimeSpecInFuture";
            --remainder;
          }
        if (flagHasHolidays)
          {
            if (remainder == 0)
                return "Holidays";
            --remainder;
          }
        return extraHolidaysOnDateLookupInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecInFutureToJSON();
            --remainder;
          }
        if (flagHasHolidays)
          {
            if (remainder == 0)
                return extraHolidaysToJSON();
            --remainder;
          }
        return extraHolidaysOnDateLookupInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndOrTimeSpec)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecToJSON();
            --remainder;
          }
        if (flagHasDateAndOrTimeSpecInFuture)
          {
            if (remainder == 0)
                return extraDateAndOrTimeSpecInFutureToJSON();
            --remainder;
          }
        if (flagHasHolidays)
          {
            if (remainder == 0)
                return extraHolidaysToJSON();
            --remainder;
          }
        return extraHolidaysOnDateLookupInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "ateAndOrTimeSpec", 16) == 0)
                  {
                    switch ((unsigned char)(field_name[17]))
                      {
                        case 0:
                            return (flagHasDateAndOrTimeSpec ? extraDateAndOrTimeSpecToJSON() : NULL);
                        case 'I':
                            if (strcmp(&(field_name[18]), "nFuture") == 0)
                                return (flagHasDateAndOrTimeSpecInFuture ? extraDateAndOrTimeSpecInFutureToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "olidays") == 0)
                    return (flagHasHolidays ? extraHolidaysToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHolidaysOnDateLookupInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strncmp(&(field_name[1]), "ateAndOrTimeSpec", 16) == 0)
                  {
                    switch ((unsigned char)(field_name[17]))
                      {
                        case 0:
                            return (flagHasDateAndOrTimeSpec ? extraDateAndOrTimeSpecToJSON() : NULL);
                        case 'I':
                            if (strcmp(&(field_name[18]), "nFuture") == 0)
                                return (flagHasDateAndOrTimeSpecInFuture ? extraDateAndOrTimeSpecInFutureToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(field_name[1]), "olidays") == 0)
                    return (flagHasHolidays ? extraHolidaysToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraHolidaysOnDateLookupInformationNuggetLookup(field_name);
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
    void setDateAndOrTimeSpecInFuture(bool new_value)
      {
        flagHasDateAndOrTimeSpecInFuture = true;
        storeDateAndOrTimeSpecInFuture = new_value;
      }
    void unsetDateAndOrTimeSpecInFuture(void)
      {
        flagHasDateAndOrTimeSpecInFuture = false;
      }
    void initHolidays(void)
      {
        flagHasHolidays = true;
        storeHolidays.clear();
      }
    void appendHolidays(std::string to_append)
      {
        if (!flagHasHolidays)
          {
            flagHasHolidays = true;
            storeHolidays.clear();
          }
        assert(flagHasHolidays);
        storeHolidays.push_back(to_append);
      }
    void unsetHolidays(void)
      {
        flagHasHolidays = false;
        storeHolidays.clear();
      }

    virtual void extraHolidaysOnDateLookupInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHolidaysOnDateLookupInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHolidaysOnDateLookupInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraHolidaysOnDateLookupInformationNuggetAppendPair(key, new_component);
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
    void extraDateAndTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "ateAndOrTimeSpec", 16) == 0)
                  {
                    switch ((unsigned char)(key[17]))
                      {
                        case 0:
                            {
                            fromJSONDateAndOrTimeSpec(new_component, false);
                            return;
                            }
                        case 'I':
                            if (strcmp(&(key[18]), "nFuture") == 0)
                                {
                                fromJSONDateAndOrTimeSpecInFuture(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(key[1]), "olidays") == 0)
                    {
                    fromJSONHolidays(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHolidaysOnDateLookupInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strncmp(&(key[1]), "ateAndOrTimeSpec", 16) == 0)
                  {
                    switch ((unsigned char)(key[17]))
                      {
                        case 0:
                            {
                            fromJSONDateAndOrTimeSpec(new_component, false);
                            return;
                            }
                        case 'I':
                            if (strcmp(&(key[18]), "nFuture") == 0)
                                {
                                fromJSONDateAndOrTimeSpecInFuture(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(key[1]), "olidays") == 0)
                    {
                    fromJSONHolidays(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraHolidaysOnDateLookupInformationNuggetSetField(key, new_component);
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
        DateAndTimeInformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasDateAndOrTimeSpec);
        handler->start_pair("DateAndOrTimeSpec");
        storeDateAndOrTimeSpec->write_as_json(handler);
        assert(flagHasDateAndOrTimeSpecInFuture);
        handler->start_pair("DateAndOrTimeSpecInFuture");
        handler->boolean_value(storeDateAndOrTimeSpecInFuture);
        assert(flagHasHolidays);
        handler->start_pair("Holidays");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeHolidays.size(); ++num1)
          {
            handler->string_value(storeHolidays[num1]);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndOrTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.";
          }
        if (!(hasDateAndOrTimeSpecInFuture()))
          {
            return "When parsing the object for %what%, the \"DateAndOrTimeSpecInFuture\" field was missing.";
          }
        if (!(hasHolidays()))
          {
            return "When parsing the object for %what%, the \"Holidays\" field was missing.";
          }
        return NULL;
      }

    static HolidaysOnDateLookupInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HolidaysOnDateLookupInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HolidaysOnDateLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupInformationNuggetJSON>, HolidaysOnDateLookupInformationNuggetJSON *, bool> generator("Type HolidaysOnDateLookupInformationNugget", ignore_extras);
            parse_json_value(text, "Text for HolidaysOnDateLookupInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HolidaysOnDateLookupInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HolidaysOnDateLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupInformationNuggetJSON>, HolidaysOnDateLookupInformationNuggetJSON *, bool> generator("Type HolidaysOnDateLookupInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DateAndTimeInformationNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<DateAndOrTimeSpecJSON::Generator, RCHandle<DateAndOrTimeSpecJSON>, DateAndOrTimeSpecJSON *, bool > fieldGeneratorDateAndOrTimeSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDateAndOrTimeSpecInFuture;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHolidays;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "HolidaysOnDateLookup") == 0))
                throw("The key field has a value other than `HolidaysOnDateLookup'.");
            HolidaysOnDateLookupInformationNuggetJSON *result = new HolidaysOnDateLookupInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<HolidaysOnDateLookupInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHolidaysOnDateLookupInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((HolidaysOnDateLookupInformationNuggetJSON *)new_result);
          }
        void finish(HolidaysOnDateLookupInformationNuggetJSON *result)
          {
            if (fieldGeneratorDateAndOrTimeSpec.have_value)
              {
                result->setDateAndOrTimeSpec(fieldGeneratorDateAndOrTimeSpec.value.referenced());
                fieldGeneratorDateAndOrTimeSpec.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpec\" field was missing.");
              }
            if (fieldGeneratorDateAndOrTimeSpecInFuture.have_value)
              {
                result->setDateAndOrTimeSpecInFuture(fieldGeneratorDateAndOrTimeSpecInFuture.value);
                fieldGeneratorDateAndOrTimeSpecInFuture.have_value = false;
              }
            else if (!(result->hasDateAndOrTimeSpecInFuture()))
              {
                error("When parsing the object for %what%, the \"DateAndOrTimeSpecInFuture\" field was missing.");
              }
            if (fieldGeneratorHolidays.have_value)
              {
                result->initHolidays();
                size_t count = fieldGeneratorHolidays.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHolidays(fieldGeneratorHolidays.value[num]);
                  }
                fieldGeneratorHolidays.value.clear();
                fieldGeneratorHolidays.have_value = false;
              }
            else if (!(result->hasHolidays()))
              {
                error("When parsing the object for %what%, the \"Holidays\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(HolidaysOnDateLookupInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ateAndOrTimeSpec", 16) == 0)
                      {
                        switch ((unsigned char)(field_name[17]))
                          {
                            case 0:
                                return &fieldGeneratorDateAndOrTimeSpec;
                            case 'I':
                                if (strcmp(&(field_name[18]), "nFuture") == 0)
                                    return &fieldGeneratorDateAndOrTimeSpecInFuture;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "olidays") == 0)
                        return &fieldGeneratorHolidays;
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorDateAndOrTimeSpec("field \"DateAndOrTimeSpec\" of the HolidaysOnDateLookupInformationNugget class", ignore_extras), fieldGeneratorDateAndOrTimeSpecInFuture("field \"DateAndOrTimeSpecInFuture\" of the HolidaysOnDateLookupInformationNugget class"), fieldGeneratorHolidays("field \"Holidays\" of the HolidaysOnDateLookupInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HolidaysOnDateLookupInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndOrTimeSpec.reset();
            fieldGeneratorDateAndOrTimeSpecInFuture.reset();
            fieldGeneratorHolidays.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOLIDAYSONDATELOOKUPINFORMATIONNUGGETJSON_H */
