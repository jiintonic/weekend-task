/* file "TimezoneLookupInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEZONELOOKUPINFORMATIONNUGGETJSON_H
#define TIMEZONELOOKUPINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimezoneLookupInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasOlsonCode;
    std::string storeOlsonCode;
    bool flagHasAbbreviatedCurrentRule;
    std::string storeAbbreviatedCurrentRule;
    bool flagHasOffset;
    double storeOffset;
    std::string textStoreOffset;
    bool flagHasUnits;
    std::string storeUnits;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimezoneLookupInformationNuggetJSON(const TimezoneLookupInformationNuggetJSON &);
    TimezoneLookupInformationNuggetJSON & operator=(const TimezoneLookupInformationNuggetJSON &other);

    JSONValue * extraMapLocationToJSON(void) const;
    JSONValue * extraDateAndTimeToJSON(void) const;
    JSONValue * extraOlsonCodeToJSON(void) const;
    JSONValue * extraAbbreviatedCurrentRuleToJSON(void) const;
    JSONValue * extraOffsetToJSON(void) const;
    JSONValue * extraUnitsToJSON(void) const;

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOlsonCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAbbreviatedCurrentRule(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOffset(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimezoneLookupInformationNuggetJSON(void);
    virtual ~TimezoneLookupInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasOlsonCode(void) const;
    std::string  getOlsonCode(void);
    const std::string  getOlsonCode(void) const;
    bool  hasAbbreviatedCurrentRule(void) const;
    std::string  getAbbreviatedCurrentRule(void);
    const std::string  getAbbreviatedCurrentRule(void) const;
    bool  hasOffset(void) const;
    double  getOffset(void);
    const double  getOffset(void) const;
    std::string  getOffsetAsText(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;

    virtual size_t extraTimezoneLookupInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimezoneLookupInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimezoneLookupInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimezoneLookupInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimezoneLookupInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimezoneLookupInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasMapLocation)
            ++result;
        if (flagHasDateAndTime)
            ++result;
        if (flagHasOlsonCode)
            ++result;
        if (flagHasAbbreviatedCurrentRule)
            ++result;
        if (flagHasOffset)
            ++result;
        if (flagHasUnits)
            ++result;
        result += extraTimezoneLookupInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return "MapLocation";
            --remainder;
          }
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return "DateAndTime";
            --remainder;
          }
        if (flagHasOlsonCode)
          {
            if (remainder == 0)
                return "OlsonCode";
            --remainder;
          }
        if (flagHasAbbreviatedCurrentRule)
          {
            if (remainder == 0)
                return "AbbreviatedCurrentRule";
            --remainder;
          }
        if (flagHasOffset)
          {
            if (remainder == 0)
                return "Offset";
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return "Units";
            --remainder;
          }
        return extraTimezoneLookupInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasOlsonCode)
          {
            if (remainder == 0)
                return extraOlsonCodeToJSON();
            --remainder;
          }
        if (flagHasAbbreviatedCurrentRule)
          {
            if (remainder == 0)
                return extraAbbreviatedCurrentRuleToJSON();
            --remainder;
          }
        if (flagHasOffset)
          {
            if (remainder == 0)
                return extraOffsetToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        return extraTimezoneLookupInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasOlsonCode)
          {
            if (remainder == 0)
                return extraOlsonCodeToJSON();
            --remainder;
          }
        if (flagHasAbbreviatedCurrentRule)
          {
            if (remainder == 0)
                return extraAbbreviatedCurrentRuleToJSON();
            --remainder;
          }
        if (flagHasOffset)
          {
            if (remainder == 0)
                return extraOffsetToJSON();
            --remainder;
          }
        if (flagHasUnits)
          {
            if (remainder == 0)
                return extraUnitsToJSON();
            --remainder;
          }
        return extraTimezoneLookupInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "bbreviatedCurrentRule") == 0)
                    return (flagHasAbbreviatedCurrentRule ? extraAbbreviatedCurrentRuleToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                    return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'O':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'f':
                        if (strcmp(&(field_name[2]), "fset") == 0)
                            return (flagHasOffset ? extraOffsetToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "sonCode") == 0)
                            return (flagHasOlsonCode ? extraOlsonCodeToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "nits") == 0)
                    return (flagHasUnits ? extraUnitsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraTimezoneLookupInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'A':
                if (strcmp(&(field_name[1]), "bbreviatedCurrentRule") == 0)
                    return (flagHasAbbreviatedCurrentRule ? extraAbbreviatedCurrentRuleToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                    return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'O':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'f':
                        if (strcmp(&(field_name[2]), "fset") == 0)
                            return (flagHasOffset ? extraOffsetToJSON() : NULL);
                        break;
                    case 'l':
                        if (strcmp(&(field_name[2]), "sonCode") == 0)
                            return (flagHasOlsonCode ? extraOlsonCodeToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(field_name[1]), "nits") == 0)
                    return (flagHasUnits ? extraUnitsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraTimezoneLookupInformationNuggetLookup(field_name);
      }

    void setMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = true;
        storeMapLocation = new_value;
      }
    void unsetMapLocation(void)
      {
        if (flagHasMapLocation)
          {
            storeMapLocation->remove_reference();
          }
        flagHasMapLocation = false;
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
    void setOlsonCode(std::string new_value)
      {
        flagHasOlsonCode = true;
        storeOlsonCode = new_value;
      }
    void unsetOlsonCode(void)
      {
        flagHasOlsonCode = false;
      }
    void setAbbreviatedCurrentRule(std::string new_value)
      {
        flagHasAbbreviatedCurrentRule = true;
        storeAbbreviatedCurrentRule = new_value;
      }
    void unsetAbbreviatedCurrentRule(void)
      {
        flagHasAbbreviatedCurrentRule = false;
      }
    void setOffset(double new_value)
      {
        flagHasOffset = true;
        storeOffset = new_value;
        textStoreOffset = "";
      }
    void setOffsetText(std::string new_value)
      {
        flagHasOffset = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Offset of TimezoneLookupInformationNuggetJSON is not a valid number.");
        textStoreOffset = new_value;
      }
    void unsetOffset(void)
      {
        flagHasOffset = false;
      }
    void setUnits(std::string new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
      }

    virtual void extraTimezoneLookupInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimezoneLookupInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimezoneLookupInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraTimezoneLookupInformationNuggetAppendPair(key, new_component);
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
            case 'A':
                if (strcmp(&(key[1]), "bbreviatedCurrentRule") == 0)
                    {
                    fromJSONAbbreviatedCurrentRule(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ateAndTime") == 0)
                    {
                    fromJSONDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
                    return;
                    }
                break;
            case 'O':
                switch ((unsigned char)(key[1]))
                  {
                    case 'f':
                        if (strcmp(&(key[2]), "fset") == 0)
                            {
                            fromJSONOffset(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "sonCode") == 0)
                            {
                            fromJSONOlsonCode(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(key[1]), "nits") == 0)
                    {
                    fromJSONUnits(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraTimezoneLookupInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'A':
                if (strcmp(&(key[1]), "bbreviatedCurrentRule") == 0)
                    {
                    fromJSONAbbreviatedCurrentRule(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ateAndTime") == 0)
                    {
                    fromJSONDateAndTime(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "apLocation") == 0)
                    {
                    fromJSONMapLocation(new_component, false);
                    return;
                    }
                break;
            case 'O':
                switch ((unsigned char)(key[1]))
                  {
                    case 'f':
                        if (strcmp(&(key[2]), "fset") == 0)
                            {
                            fromJSONOffset(new_component, false);
                            return;
                            }
                        break;
                    case 'l':
                        if (strcmp(&(key[2]), "sonCode") == 0)
                            {
                            fromJSONOlsonCode(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(key[1]), "nits") == 0)
                    {
                    fromJSONUnits(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraTimezoneLookupInformationNuggetSetField(key, new_component);
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
        assert(flagHasMapLocation);
        handler->start_pair("MapLocation");
        storeMapLocation->write_as_json(handler);
        assert(flagHasDateAndTime);
        handler->start_pair("DateAndTime");
        storeDateAndTime->write_as_json(handler);
        assert(flagHasOlsonCode);
        handler->start_pair("OlsonCode");
        handler->string_value(storeOlsonCode);
        assert(flagHasAbbreviatedCurrentRule);
        handler->start_pair("AbbreviatedCurrentRule");
        handler->string_value(storeAbbreviatedCurrentRule);
        assert(flagHasOffset);
        handler->start_pair("Offset");
        if (textStoreOffset != "")
            handler->number_value(textStoreOffset.c_str());
        else if (((double)(long int)storeOffset) == storeOffset)
            handler->number_value((long int)storeOffset);
        else
            handler->number_value(storeOffset);
        assert(flagHasUnits);
        handler->start_pair("Units");
        handler->string_value(storeUnits);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMapLocation()))
          {
            return "When parsing the object for %what%, the \"MapLocation\" field was missing.";
          }
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasOlsonCode()))
          {
            return "When parsing the object for %what%, the \"OlsonCode\" field was missing.";
          }
        if (!(hasAbbreviatedCurrentRule()))
          {
            return "When parsing the object for %what%, the \"AbbreviatedCurrentRule\" field was missing.";
          }
        if (!(hasOffset()))
          {
            return "When parsing the object for %what%, the \"Offset\" field was missing.";
          }
        if (!(hasUnits()))
          {
            return "When parsing the object for %what%, the \"Units\" field was missing.";
          }
        return NULL;
      }

    static TimezoneLookupInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimezoneLookupInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimezoneLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupInformationNuggetJSON>, TimezoneLookupInformationNuggetJSON *, bool> generator("Type TimezoneLookupInformationNugget", ignore_extras);
            parse_json_value(text, "Text for TimezoneLookupInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimezoneLookupInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimezoneLookupInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimezoneLookupInformationNuggetJSON>, TimezoneLookupInformationNuggetJSON *, bool> generator("Type TimezoneLookupInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOlsonCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAbbreviatedCurrentRule;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOffset;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "TimezoneLookup") == 0))
                throw("The key field has a value other than `TimezoneLookup'.");
            TimezoneLookupInformationNuggetJSON *result = new TimezoneLookupInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<TimezoneLookupInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimezoneLookupInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((TimezoneLookupInformationNuggetJSON *)new_result);
          }
        void finish(TimezoneLookupInformationNuggetJSON *result)
          {
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            else if (!(result->hasMapLocation()))
              {
                error("When parsing the object for %what%, the \"MapLocation\" field was missing.");
              }
            if (fieldGeneratorDateAndTime.have_value)
              {
                result->setDateAndTime(fieldGeneratorDateAndTime.value.referenced());
                fieldGeneratorDateAndTime.have_value = false;
              }
            else if (!(result->hasDateAndTime()))
              {
                error("When parsing the object for %what%, the \"DateAndTime\" field was missing.");
              }
            if (fieldGeneratorOlsonCode.have_value)
              {
                result->setOlsonCode(fieldGeneratorOlsonCode.value);
                fieldGeneratorOlsonCode.have_value = false;
              }
            else if (!(result->hasOlsonCode()))
              {
                error("When parsing the object for %what%, the \"OlsonCode\" field was missing.");
              }
            if (fieldGeneratorAbbreviatedCurrentRule.have_value)
              {
                result->setAbbreviatedCurrentRule(fieldGeneratorAbbreviatedCurrentRule.value);
                fieldGeneratorAbbreviatedCurrentRule.have_value = false;
              }
            else if (!(result->hasAbbreviatedCurrentRule()))
              {
                error("When parsing the object for %what%, the \"AbbreviatedCurrentRule\" field was missing.");
              }
            if (fieldGeneratorOffset.have_value)
              {
                result->setOffsetText(fieldGeneratorOffset.value);
                fieldGeneratorOffset.have_value = false;
              }
            else if (!(result->hasOffset()))
              {
                error("When parsing the object for %what%, the \"Offset\" field was missing.");
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            else if (!(result->hasUnits()))
              {
                error("When parsing the object for %what%, the \"Units\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(TimezoneLookupInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "bbreviatedCurrentRule") == 0)
                        return &fieldGeneratorAbbreviatedCurrentRule;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                        return &fieldGeneratorDateAndTime;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'f':
                            if (strcmp(&(field_name[2]), "fset") == 0)
                                return &fieldGeneratorOffset;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "sonCode") == 0)
                                return &fieldGeneratorOlsonCode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the TimezoneLookupInformationNugget class", ignore_extras), fieldGeneratorDateAndTime("field \"DateAndTime\" of the TimezoneLookupInformationNugget class", ignore_extras), fieldGeneratorOlsonCode("field \"OlsonCode\" of the TimezoneLookupInformationNugget class"), fieldGeneratorAbbreviatedCurrentRule("field \"AbbreviatedCurrentRule\" of the TimezoneLookupInformationNugget class"), fieldGeneratorOffset("field \"Offset\" of the TimezoneLookupInformationNugget class"), fieldGeneratorUnits("field \"Units\" of the TimezoneLookupInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimezoneLookupInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMapLocation.reset();
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorOlsonCode.reset();
            fieldGeneratorAbbreviatedCurrentRule.reset();
            fieldGeneratorOffset.reset();
            fieldGeneratorUnits.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEZONELOOKUPINFORMATIONNUGGETJSON_H */
