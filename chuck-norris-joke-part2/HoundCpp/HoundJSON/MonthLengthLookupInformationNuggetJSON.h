/* file "MonthLengthLookupInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MONTHLENGTHLOOKUPINFORMATIONNUGGETJSON_H
#define MONTHLENGTHLOOKUPINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MonthLengthLookupInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasMonthIndex;
    uint8_t storeMonthIndex;
    bool flagHasMonthName;
    std::string storeMonthName;
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasDaysInMonth;
    uint8_t storeDaysInMonth;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MonthLengthLookupInformationNuggetJSON(const MonthLengthLookupInformationNuggetJSON &);
    MonthLengthLookupInformationNuggetJSON & operator=(const MonthLengthLookupInformationNuggetJSON &other);

    JSONValue * extraMonthIndexToJSON(void) const;
    JSONValue * extraMonthNameToJSON(void) const;
    JSONValue * extraYearToJSON(void) const;
    JSONValue * extraDaysInMonthToJSON(void) const;

    void  fromJSONMonthIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMonthName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDaysInMonth(JSONValue *json_value, bool ignore_extras = false);


  public:
    MonthLengthLookupInformationNuggetJSON(void);
    virtual ~MonthLengthLookupInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasMonthIndex(void) const;
    uint8_t  getMonthIndex(void);
    const uint8_t  getMonthIndex(void) const;
    bool  hasMonthName(void) const;
    std::string  getMonthName(void);
    const std::string  getMonthName(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;
    bool  hasDaysInMonth(void) const;
    uint8_t  getDaysInMonth(void);
    const uint8_t  getDaysInMonth(void) const;

    virtual size_t extraMonthLengthLookupInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMonthLengthLookupInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMonthLengthLookupInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMonthLengthLookupInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMonthLengthLookupInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMonthLengthLookupInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasMonthIndex)
            ++result;
        if (flagHasMonthName)
            ++result;
        if (flagHasYear)
            ++result;
        if (flagHasDaysInMonth)
            ++result;
        result += extraMonthLengthLookupInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMonthIndex)
          {
            if (remainder == 0)
                return "MonthIndex";
            --remainder;
          }
        if (flagHasMonthName)
          {
            if (remainder == 0)
                return "MonthName";
            --remainder;
          }
        if (flagHasYear)
          {
            if (remainder == 0)
                return "Year";
            --remainder;
          }
        if (flagHasDaysInMonth)
          {
            if (remainder == 0)
                return "DaysInMonth";
            --remainder;
          }
        return extraMonthLengthLookupInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasMonthIndex)
          {
            if (remainder == 0)
                return extraMonthIndexToJSON();
            --remainder;
          }
        if (flagHasMonthName)
          {
            if (remainder == 0)
                return extraMonthNameToJSON();
            --remainder;
          }
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        if (flagHasDaysInMonth)
          {
            if (remainder == 0)
                return extraDaysInMonthToJSON();
            --remainder;
          }
        return extraMonthLengthLookupInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMonthIndex)
          {
            if (remainder == 0)
                return extraMonthIndexToJSON();
            --remainder;
          }
        if (flagHasMonthName)
          {
            if (remainder == 0)
                return extraMonthNameToJSON();
            --remainder;
          }
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        if (flagHasDaysInMonth)
          {
            if (remainder == 0)
                return extraDaysInMonthToJSON();
            --remainder;
          }
        return extraMonthLengthLookupInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "aysInMonth") == 0)
                    return (flagHasDaysInMonth ? extraDaysInMonthToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "onth", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "ndex") == 0)
                                return (flagHasMonthIndex ? extraMonthIndexToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[6]), "ame") == 0)
                                return (flagHasMonthName ? extraMonthNameToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Y':
                if (strcmp(&(field_name[1]), "ear") == 0)
                    return (flagHasYear ? extraYearToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMonthLengthLookupInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "aysInMonth") == 0)
                    return (flagHasDaysInMonth ? extraDaysInMonthToJSON() : NULL);
                break;
            case 'M':
                if (strncmp(&(field_name[1]), "onth", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[6]), "ndex") == 0)
                                return (flagHasMonthIndex ? extraMonthIndexToJSON() : NULL);
                            break;
                        case 'N':
                            if (strcmp(&(field_name[6]), "ame") == 0)
                                return (flagHasMonthName ? extraMonthNameToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Y':
                if (strcmp(&(field_name[1]), "ear") == 0)
                    return (flagHasYear ? extraYearToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraMonthLengthLookupInformationNuggetLookup(field_name);
      }

    void setMonthIndex(uint8_t new_value)
      {
        flagHasMonthIndex = true;
        if (new_value < 0)
            throw("The value for field MonthIndex of MonthLengthLookupInformationNuggetJSON is less than the lower bound (0) for that field.");
        if (new_value > 11)
            throw("The value for field MonthIndex of MonthLengthLookupInformationNuggetJSON is greater than the upper bound (11) for that field.");
        storeMonthIndex = new_value;
      }
    void unsetMonthIndex(void)
      {
        flagHasMonthIndex = false;
      }
    void setMonthName(std::string new_value)
      {
        flagHasMonthName = true;
        storeMonthName = new_value;
      }
    void unsetMonthName(void)
      {
        flagHasMonthName = false;
      }
    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }
    void setDaysInMonth(uint8_t new_value)
      {
        flagHasDaysInMonth = true;
        if (new_value < 28)
            throw("The value for field DaysInMonth of MonthLengthLookupInformationNuggetJSON is less than the lower bound (28) for that field.");
        if (new_value > 31)
            throw("The value for field DaysInMonth of MonthLengthLookupInformationNuggetJSON is greater than the upper bound (31) for that field.");
        storeDaysInMonth = new_value;
      }
    void unsetDaysInMonth(void)
      {
        flagHasDaysInMonth = false;
      }

    virtual void extraMonthLengthLookupInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMonthLengthLookupInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMonthLengthLookupInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraMonthLengthLookupInformationNuggetAppendPair(key, new_component);
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
                if (strcmp(&(key[1]), "aysInMonth") == 0)
                    {
                    fromJSONDaysInMonth(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "onth", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "ndex") == 0)
                                {
                                fromJSONMonthIndex(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[6]), "ame") == 0)
                                {
                                fromJSONMonthName(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Y':
                if (strcmp(&(key[1]), "ear") == 0)
                    {
                    fromJSONYear(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMonthLengthLookupInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "aysInMonth") == 0)
                    {
                    fromJSONDaysInMonth(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strncmp(&(key[1]), "onth", 4) == 0)
                  {
                    switch ((unsigned char)(key[5]))
                      {
                        case 'I':
                            if (strcmp(&(key[6]), "ndex") == 0)
                                {
                                fromJSONMonthIndex(new_component, false);
                                return;
                                }
                            break;
                        case 'N':
                            if (strcmp(&(key[6]), "ame") == 0)
                                {
                                fromJSONMonthName(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Y':
                if (strcmp(&(key[1]), "ear") == 0)
                    {
                    fromJSONYear(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraMonthLengthLookupInformationNuggetSetField(key, new_component);
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
        assert(flagHasMonthIndex);
        handler->start_pair("MonthIndex");
        handler->number_value(storeMonthIndex);
        assert(flagHasMonthName);
        handler->start_pair("MonthName");
        handler->string_value(storeMonthName);
        if (flagHasYear)
          {
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
          }
        assert(flagHasDaysInMonth);
        handler->start_pair("DaysInMonth");
        handler->number_value(storeDaysInMonth);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMonthIndex()))
          {
            return "When parsing the object for %what%, the \"MonthIndex\" field was missing.";
          }
        if (!(hasMonthName()))
          {
            return "When parsing the object for %what%, the \"MonthName\" field was missing.";
          }
        if (!(hasDaysInMonth()))
          {
            return "When parsing the object for %what%, the \"DaysInMonth\" field was missing.";
          }
        return NULL;
      }

    static MonthLengthLookupInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MonthLengthLookupInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MonthLengthLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupInformationNuggetJSON>, MonthLengthLookupInformationNuggetJSON *, bool> generator("Type MonthLengthLookupInformationNugget", ignore_extras);
            parse_json_value(text, "Text for MonthLengthLookupInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MonthLengthLookupInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MonthLengthLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MonthLengthLookupInformationNuggetJSON>, MonthLengthLookupInformationNuggetJSON *, bool> generator("Type MonthLengthLookupInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 11>, uint8_t, uint8_t > fieldGeneratorMonthIndex;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMonthName;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 28, 31>, uint8_t, uint8_t > fieldGeneratorDaysInMonth;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "MonthLengthLookup") == 0))
                throw("The key field has a value other than `MonthLengthLookup'.");
            MonthLengthLookupInformationNuggetJSON *result = new MonthLengthLookupInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<MonthLengthLookupInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMonthLengthLookupInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((MonthLengthLookupInformationNuggetJSON *)new_result);
          }
        void finish(MonthLengthLookupInformationNuggetJSON *result)
          {
            if (fieldGeneratorMonthIndex.have_value)
              {
                result->setMonthIndex(fieldGeneratorMonthIndex.value);
                fieldGeneratorMonthIndex.have_value = false;
              }
            else if (!(result->hasMonthIndex()))
              {
                error("When parsing the object for %what%, the \"MonthIndex\" field was missing.");
              }
            if (fieldGeneratorMonthName.have_value)
              {
                result->setMonthName(fieldGeneratorMonthName.value);
                fieldGeneratorMonthName.have_value = false;
              }
            else if (!(result->hasMonthName()))
              {
                error("When parsing the object for %what%, the \"MonthName\" field was missing.");
              }
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            if (fieldGeneratorDaysInMonth.have_value)
              {
                result->setDaysInMonth(fieldGeneratorDaysInMonth.value);
                fieldGeneratorDaysInMonth.have_value = false;
              }
            else if (!(result->hasDaysInMonth()))
              {
                error("When parsing the object for %what%, the \"DaysInMonth\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(MonthLengthLookupInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "aysInMonth") == 0)
                        return &fieldGeneratorDaysInMonth;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "onth", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[6]), "ndex") == 0)
                                    return &fieldGeneratorMonthIndex;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[6]), "ame") == 0)
                                    return &fieldGeneratorMonthName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "ear") == 0)
                        return &fieldGeneratorYear;
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorMonthIndex("field \"MonthIndex\" of the MonthLengthLookupInformationNugget class"), fieldGeneratorMonthName("field \"MonthName\" of the MonthLengthLookupInformationNugget class"), fieldGeneratorYear("field \"Year\" of the MonthLengthLookupInformationNugget class"), fieldGeneratorDaysInMonth("field \"DaysInMonth\" of the MonthLengthLookupInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MonthLengthLookupInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMonthIndex.reset();
            fieldGeneratorMonthName.reset();
            fieldGeneratorYear.reset();
            fieldGeneratorDaysInMonth.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MONTHLENGTHLOOKUPINFORMATIONNUGGETJSON_H */
