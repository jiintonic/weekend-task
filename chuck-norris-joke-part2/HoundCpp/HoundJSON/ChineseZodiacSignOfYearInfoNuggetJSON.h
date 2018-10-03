/* file "ChineseZodiacSignOfYearInfoNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CHINESEZODIACSIGNOFYEARINFONUGGETJSON_H
#define CHINESEZODIACSIGNOFYEARINFONUGGETJSON_H

#pragma interface

#include "ChineseZodiacInfoNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONIntegerRangeGenerator.h"
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


class ChineseZodiacSignOfYearInfoNuggetJSON : public ChineseZodiacInfoNuggetJSON
  {
  private:
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasChineseYear;
    std::string storeChineseYear;
    bool flagHasZodiacSign;
    std::string storeZodiacSign;
    bool flagHasTenseIndicator;
    OInteger storeTenseIndicator;
    bool flagHasYesOrNo;
    bool storeYesOrNo;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ChineseZodiacSignOfYearInfoNuggetJSON(const ChineseZodiacSignOfYearInfoNuggetJSON &);
    ChineseZodiacSignOfYearInfoNuggetJSON & operator=(const ChineseZodiacSignOfYearInfoNuggetJSON &other);

    JSONValue * extraYearToJSON(void) const;
    JSONValue * extraChineseYearToJSON(void) const;
    JSONValue * extraZodiacSignToJSON(void) const;
    JSONValue * extraTenseIndicatorToJSON(void) const;
    JSONValue * extraYesOrNoToJSON(void) const;

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChineseYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONZodiacSign(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTenseIndicator(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYesOrNo(JSONValue *json_value, bool ignore_extras = false);


  public:
    ChineseZodiacSignOfYearInfoNuggetJSON(void);
    virtual ~ChineseZodiacSignOfYearInfoNuggetJSON(void);
    const char * getChineseZodiacInfoNuggetKind(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;
    bool  hasChineseYear(void) const;
    std::string  getChineseYear(void);
    const std::string  getChineseYear(void) const;
    bool  hasZodiacSign(void) const;
    std::string  getZodiacSign(void);
    const std::string  getZodiacSign(void) const;
    bool  hasTenseIndicator(void) const;
    OInteger  getTenseIndicator(void);
    const OInteger  getTenseIndicator(void) const;
    bool  hasYesOrNo(void) const;
    bool  getYesOrNo(void);
    const bool  getYesOrNo(void) const;

    virtual size_t extraChineseZodiacSignOfYearInfoNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraChineseZodiacSignOfYearInfoNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraChineseZodiacSignOfYearInfoNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraChineseZodiacSignOfYearInfoNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraChineseZodiacSignOfYearInfoNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraChineseZodiacSignOfYearInfoNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraChineseZodiacInfoNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasYear)
            ++result;
        if (flagHasChineseYear)
            ++result;
        if (flagHasZodiacSign)
            ++result;
        if (flagHasTenseIndicator)
            ++result;
        if (flagHasYesOrNo)
            ++result;
        result += extraChineseZodiacSignOfYearInfoNuggetComponentCount();
        return result;
      }
    const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return "Year";
            --remainder;
          }
        if (flagHasChineseYear)
          {
            if (remainder == 0)
                return "ChineseYear";
            --remainder;
          }
        if (flagHasZodiacSign)
          {
            if (remainder == 0)
                return "ZodiacSign";
            --remainder;
          }
        if (flagHasTenseIndicator)
          {
            if (remainder == 0)
                return "TenseIndicator";
            --remainder;
          }
        if (flagHasYesOrNo)
          {
            if (remainder == 0)
                return "YesOrNo";
            --remainder;
          }
        return extraChineseZodiacSignOfYearInfoNuggetComponentKey(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        if (flagHasChineseYear)
          {
            if (remainder == 0)
                return extraChineseYearToJSON();
            --remainder;
          }
        if (flagHasZodiacSign)
          {
            if (remainder == 0)
                return extraZodiacSignToJSON();
            --remainder;
          }
        if (flagHasTenseIndicator)
          {
            if (remainder == 0)
                return extraTenseIndicatorToJSON();
            --remainder;
          }
        if (flagHasYesOrNo)
          {
            if (remainder == 0)
                return extraYesOrNoToJSON();
            --remainder;
          }
        return extraChineseZodiacSignOfYearInfoNuggetComponentValue(remainder);
      }
    const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasYear)
          {
            if (remainder == 0)
                return extraYearToJSON();
            --remainder;
          }
        if (flagHasChineseYear)
          {
            if (remainder == 0)
                return extraChineseYearToJSON();
            --remainder;
          }
        if (flagHasZodiacSign)
          {
            if (remainder == 0)
                return extraZodiacSignToJSON();
            --remainder;
          }
        if (flagHasTenseIndicator)
          {
            if (remainder == 0)
                return extraTenseIndicatorToJSON();
            --remainder;
          }
        if (flagHasYesOrNo)
          {
            if (remainder == 0)
                return extraYesOrNoToJSON();
            --remainder;
          }
        return extraChineseZodiacSignOfYearInfoNuggetComponentValue(remainder);
      }
    JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hineseYear") == 0)
                    return (flagHasChineseYear ? extraChineseYearToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "enseIndicator") == 0)
                    return (flagHasTenseIndicator ? extraTenseIndicatorToJSON() : NULL);
                break;
            case 'Y':
                if (strncmp(&(field_name[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[3]), "r") == 0)
                                return (flagHasYear ? extraYearToJSON() : NULL);
                            break;
                        case 's':
                            if (strcmp(&(field_name[3]), "OrNo") == 0)
                                return (flagHasYesOrNo ? extraYesOrNoToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strcmp(&(field_name[1]), "odiacSign") == 0)
                    return (flagHasZodiacSign ? extraZodiacSignToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraChineseZodiacSignOfYearInfoNuggetLookup(field_name);
      }
    const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "hineseYear") == 0)
                    return (flagHasChineseYear ? extraChineseYearToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "enseIndicator") == 0)
                    return (flagHasTenseIndicator ? extraTenseIndicatorToJSON() : NULL);
                break;
            case 'Y':
                if (strncmp(&(field_name[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[2]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[3]), "r") == 0)
                                return (flagHasYear ? extraYearToJSON() : NULL);
                            break;
                        case 's':
                            if (strcmp(&(field_name[3]), "OrNo") == 0)
                                return (flagHasYesOrNo ? extraYesOrNoToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strcmp(&(field_name[1]), "odiacSign") == 0)
                    return (flagHasZodiacSign ? extraZodiacSignToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraChineseZodiacSignOfYearInfoNuggetLookup(field_name);
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
    void setChineseYear(std::string new_value)
      {
        flagHasChineseYear = true;
        storeChineseYear = new_value;
      }
    void unsetChineseYear(void)
      {
        flagHasChineseYear = false;
      }
    void setZodiacSign(std::string new_value)
      {
        flagHasZodiacSign = true;
        storeZodiacSign = new_value;
      }
    void unsetZodiacSign(void)
      {
        flagHasZodiacSign = false;
      }
    void setTenseIndicator(OInteger new_value)
      {
        flagHasTenseIndicator = true;
        if (new_value < -1)
            throw("The value for field TenseIndicator of ChineseZodiacSignOfYearInfoNuggetJSON is less than the lower bound (-1) for that field.");
        if (new_value > 1)
            throw("The value for field TenseIndicator of ChineseZodiacSignOfYearInfoNuggetJSON is greater than the upper bound (1) for that field.");
        storeTenseIndicator = new_value;
      }
    void unsetTenseIndicator(void)
      {
        flagHasTenseIndicator = false;
      }
    void setYesOrNo(bool new_value)
      {
        flagHasYesOrNo = true;
        storeYesOrNo = new_value;
      }
    void unsetYesOrNo(void)
      {
        flagHasYesOrNo = false;
      }

    virtual void extraChineseZodiacSignOfYearInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraChineseZodiacSignOfYearInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraChineseZodiacSignOfYearInfoNuggetLookup(key);
        if (old_field == NULL)
          {
            extraChineseZodiacSignOfYearInfoNuggetAppendPair(key, new_component);
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
    void extraChineseZodiacInfoNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hineseYear") == 0)
                    {
                    fromJSONChineseYear(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "enseIndicator") == 0)
                    {
                    fromJSONTenseIndicator(new_component, false);
                    return;
                    }
                break;
            case 'Y':
                if (strncmp(&(key[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'a':
                            if (strcmp(&(key[3]), "r") == 0)
                                {
                                fromJSONYear(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (strcmp(&(key[3]), "OrNo") == 0)
                                {
                                fromJSONYesOrNo(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strcmp(&(key[1]), "odiacSign") == 0)
                    {
                    fromJSONZodiacSign(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraChineseZodiacSignOfYearInfoNuggetAppendPair(key, new_component);
      }
    void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "hineseYear") == 0)
                    {
                    fromJSONChineseYear(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "enseIndicator") == 0)
                    {
                    fromJSONTenseIndicator(new_component, false);
                    return;
                    }
                break;
            case 'Y':
                if (strncmp(&(key[1]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(key[2]))
                      {
                        case 'a':
                            if (strcmp(&(key[3]), "r") == 0)
                                {
                                fromJSONYear(new_component, false);
                                return;
                                }
                            break;
                        case 's':
                            if (strcmp(&(key[3]), "OrNo") == 0)
                                {
                                fromJSONYesOrNo(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Z':
                if (strcmp(&(key[1]), "odiacSign") == 0)
                    {
                    fromJSONZodiacSign(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraChineseZodiacSignOfYearInfoNuggetSetField(key, new_component);
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
        ChineseZodiacInfoNuggetJSON::write_fields_as_json(handler);
        assert(flagHasYear);
        handler->start_pair("Year");
        handler->number_value(storeYear.get_o_integer());
        if (flagHasChineseYear)
          {
            handler->start_pair("ChineseYear");
            handler->string_value(storeChineseYear);
          }
        assert(flagHasZodiacSign);
        handler->start_pair("ZodiacSign");
        handler->string_value(storeZodiacSign);
        assert(flagHasTenseIndicator);
        handler->start_pair("TenseIndicator");
        handler->number_value(storeTenseIndicator.get_o_integer());
        if (flagHasYesOrNo)
          {
            handler->start_pair("YesOrNo");
            handler->boolean_value(storeYesOrNo);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasYear()))
          {
            return "When parsing the object for %what%, the \"Year\" field was missing.";
          }
        if (!(hasZodiacSign()))
          {
            return "When parsing the object for %what%, the \"ZodiacSign\" field was missing.";
          }
        if (!(hasTenseIndicator()))
          {
            return "When parsing the object for %what%, the \"TenseIndicator\" field was missing.";
          }
        return NULL;
      }

    static ChineseZodiacSignOfYearInfoNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ChineseZodiacSignOfYearInfoNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ChineseZodiacSignOfYearInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfYearInfoNuggetJSON>, ChineseZodiacSignOfYearInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfYearInfoNugget", ignore_extras);
            parse_json_value(text, "Text for ChineseZodiacSignOfYearInfoNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ChineseZodiacSignOfYearInfoNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ChineseZodiacSignOfYearInfoNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfYearInfoNuggetJSON>, ChineseZodiacSignOfYearInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfYearInfoNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ChineseZodiacInfoNuggetJSON::Generator
      {
      private:
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorYear;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorChineseYear;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorZodiacSign;
        static char lowerBoundTenseIndicator[];
        static char upperBoundTenseIndicator[];
        JSONHoldingGenerator<JSONIntegerBigRangeGenerator<lowerBoundTenseIndicator, upperBoundTenseIndicator>, OInteger, o_integer > fieldGeneratorTenseIndicator;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorYesOrNo;
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
            if (!(strcmp(getChineseZodiacInfoNuggetJSONKey().c_str(), "ChineseZodiacSignOfYearInfoNugget") == 0))
                throw("The key field has a value other than `ChineseZodiacSignOfYearInfoNugget'.");
            ChineseZodiacSignOfYearInfoNuggetJSON *result = new ChineseZodiacSignOfYearInfoNuggetJSON();
            assert(result != NULL);
            RCHandle<ChineseZodiacSignOfYearInfoNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraChineseZodiacSignOfYearInfoNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ChineseZodiacInfoNuggetJSON *new_result)
          {
            handle_result((ChineseZodiacSignOfYearInfoNuggetJSON *)new_result);
          }
        void finish(ChineseZodiacSignOfYearInfoNuggetJSON *result)
          {
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            else if (!(result->hasYear()))
              {
                error("When parsing the object for %what%, the \"Year\" field was missing.");
              }
            if (fieldGeneratorChineseYear.have_value)
              {
                result->setChineseYear(fieldGeneratorChineseYear.value);
                fieldGeneratorChineseYear.have_value = false;
              }
            if (fieldGeneratorZodiacSign.have_value)
              {
                result->setZodiacSign(fieldGeneratorZodiacSign.value);
                fieldGeneratorZodiacSign.have_value = false;
              }
            else if (!(result->hasZodiacSign()))
              {
                error("When parsing the object for %what%, the \"ZodiacSign\" field was missing.");
              }
            if (fieldGeneratorTenseIndicator.have_value)
              {
                result->setTenseIndicator(fieldGeneratorTenseIndicator.value);
                fieldGeneratorTenseIndicator.have_value = false;
              }
            else if (!(result->hasTenseIndicator()))
              {
                error("When parsing the object for %what%, the \"TenseIndicator\" field was missing.");
              }
            if (fieldGeneratorYesOrNo.have_value)
              {
                result->setYesOrNo(fieldGeneratorYesOrNo.value);
                fieldGeneratorYesOrNo.have_value = false;
              }
            ChineseZodiacInfoNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ChineseZodiacSignOfYearInfoNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "hineseYear") == 0)
                        return &fieldGeneratorChineseYear;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "enseIndicator") == 0)
                        return &fieldGeneratorTenseIndicator;
                    break;
                case 'Y':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[3]), "r") == 0)
                                    return &fieldGeneratorYear;
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "OrNo") == 0)
                                    return &fieldGeneratorYesOrNo;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Z':
                    if (strcmp(&(field_name[1]), "odiacSign") == 0)
                        return &fieldGeneratorZodiacSign;
                    break;
                default:
                    break;
              }
            return ChineseZodiacInfoNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ChineseZodiacInfoNuggetJSON::Generator(ignore_extras), fieldGeneratorYear("field \"Year\" of the ChineseZodiacSignOfYearInfoNugget class"), fieldGeneratorChineseYear("field \"ChineseYear\" of the ChineseZodiacSignOfYearInfoNugget class"), fieldGeneratorZodiacSign("field \"ZodiacSign\" of the ChineseZodiacSignOfYearInfoNugget class"), fieldGeneratorTenseIndicator("field \"TenseIndicator\" of the ChineseZodiacSignOfYearInfoNugget class"), fieldGeneratorYesOrNo("field \"YesOrNo\" of the ChineseZodiacSignOfYearInfoNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ChineseZodiacSignOfYearInfoNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorYear.reset();
            fieldGeneratorChineseYear.reset();
            fieldGeneratorZodiacSign.reset();
            fieldGeneratorTenseIndicator.reset();
            fieldGeneratorYesOrNo.reset();
            ChineseZodiacInfoNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CHINESEZODIACSIGNOFYEARINFONUGGETJSON_H */
