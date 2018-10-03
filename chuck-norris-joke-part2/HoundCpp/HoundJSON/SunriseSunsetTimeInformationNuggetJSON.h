/* file "SunriseSunsetTimeInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SUNRISESUNSETTIMEINFORMATIONNUGGETJSON_H
#define SUNRISESUNSETTIMEINFORMATIONNUGGETJSON_H

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
#include "MapLocationJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SunriseSunsetTimeInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRequestedType;
    std::string storeRequestedType;
    bool flagHasDateTimeRangeSpec;
    DateTimeRangeSpecJSON * storeDateTimeRangeSpec;
    bool flagHasRequestedInThePast;
    bool storeRequestedInThePast;
    bool flagHasCalculatedDateAndTimes;
    std::vector< DateAndOrTimeJSON * > storeCalculatedDateAndTimes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SunriseSunsetTimeInformationNuggetJSON(const SunriseSunsetTimeInformationNuggetJSON &);
    SunriseSunsetTimeInformationNuggetJSON & operator=(const SunriseSunsetTimeInformationNuggetJSON &other);

    JSONValue * extraMapLocationToJSON(void) const;
    JSONValue * extraRequestedTypeToJSON(void) const;
    JSONValue * extraDateTimeRangeSpecToJSON(void) const;
    JSONValue * extraRequestedInThePastToJSON(void) const;
    JSONValue * extraCalculatedDateAndTimesToJSON(void) const;

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCalculatedDateAndTimes(JSONValue *json_value, bool ignore_extras = false);


  public:
    SunriseSunsetTimeInformationNuggetJSON(void);
    virtual ~SunriseSunsetTimeInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRequestedType(void) const;
    std::string  getRequestedType(void);
    const std::string  getRequestedType(void) const;
    bool  hasDateTimeRangeSpec(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void);
    const DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void) const;
    bool  hasRequestedInThePast(void) const;
    bool  getRequestedInThePast(void);
    const bool  getRequestedInThePast(void) const;
    bool  hasCalculatedDateAndTimes(void) const;
    size_t  countOfCalculatedDateAndTimes(void) const;
    DateAndOrTimeJSON *  elementOfCalculatedDateAndTimes(size_t element_num);
    const DateAndOrTimeJSON *  elementOfCalculatedDateAndTimes(size_t element_num) const;
    std::vector< DateAndOrTimeJSON * >  getCalculatedDateAndTimes(void);
    const std::vector< DateAndOrTimeJSON * >  getCalculatedDateAndTimes(void) const;

    virtual size_t extraSunriseSunsetTimeInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSunriseSunsetTimeInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSunriseSunsetTimeInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSunriseSunsetTimeInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSunriseSunsetTimeInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSunriseSunsetTimeInformationNuggetLookup(const char *field_name) const
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
        if (flagHasRequestedType)
            ++result;
        if (flagHasDateTimeRangeSpec)
            ++result;
        if (flagHasRequestedInThePast)
            ++result;
        if (flagHasCalculatedDateAndTimes)
            ++result;
        result += extraSunriseSunsetTimeInformationNuggetComponentCount();
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
        if (flagHasRequestedType)
          {
            if (remainder == 0)
                return "RequestedType";
            --remainder;
          }
        if (flagHasDateTimeRangeSpec)
          {
            if (remainder == 0)
                return "DateTimeRangeSpec";
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return "RequestedInThePast";
            --remainder;
          }
        if (flagHasCalculatedDateAndTimes)
          {
            if (remainder == 0)
                return "CalculatedDateAndTimes";
            --remainder;
          }
        return extraSunriseSunsetTimeInformationNuggetComponentKey(remainder);
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
        if (flagHasRequestedType)
          {
            if (remainder == 0)
                return extraRequestedTypeToJSON();
            --remainder;
          }
        if (flagHasDateTimeRangeSpec)
          {
            if (remainder == 0)
                return extraDateTimeRangeSpecToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        if (flagHasCalculatedDateAndTimes)
          {
            if (remainder == 0)
                return extraCalculatedDateAndTimesToJSON();
            --remainder;
          }
        return extraSunriseSunsetTimeInformationNuggetComponentValue(remainder);
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
        if (flagHasRequestedType)
          {
            if (remainder == 0)
                return extraRequestedTypeToJSON();
            --remainder;
          }
        if (flagHasDateTimeRangeSpec)
          {
            if (remainder == 0)
                return extraDateTimeRangeSpecToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        if (flagHasCalculatedDateAndTimes)
          {
            if (remainder == 0)
                return extraCalculatedDateAndTimesToJSON();
            --remainder;
          }
        return extraSunriseSunsetTimeInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "alculatedDateAndTimes") == 0)
                    return (flagHasCalculatedDateAndTimes ? extraCalculatedDateAndTimesToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ateTimeRangeSpec") == 0)
                    return (flagHasDateTimeRangeSpec ? extraDateTimeRangeSpecToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[10]), "nThePast") == 0)
                                return (flagHasRequestedInThePast ? extraRequestedInThePastToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[10]), "ype") == 0)
                                return (flagHasRequestedType ? extraRequestedTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSunriseSunsetTimeInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "alculatedDateAndTimes") == 0)
                    return (flagHasCalculatedDateAndTimes ? extraCalculatedDateAndTimesToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "ateTimeRangeSpec") == 0)
                    return (flagHasDateTimeRangeSpec ? extraDateTimeRangeSpecToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "apLocation") == 0)
                    return (flagHasMapLocation ? extraMapLocationToJSON() : NULL);
                break;
            case 'R':
                if (strncmp(&(field_name[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(field_name[9]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[10]), "nThePast") == 0)
                                return (flagHasRequestedInThePast ? extraRequestedInThePastToJSON() : NULL);
                            break;
                        case 'T':
                            if (strcmp(&(field_name[10]), "ype") == 0)
                                return (flagHasRequestedType ? extraRequestedTypeToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSunriseSunsetTimeInformationNuggetLookup(field_name);
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
    void setRequestedType(std::string new_value)
      {
        flagHasRequestedType = true;
        storeRequestedType = new_value;
      }
    void unsetRequestedType(void)
      {
        flagHasRequestedType = false;
      }
    void setDateTimeRangeSpec(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRangeSpec)
          {
            storeDateTimeRangeSpec->remove_reference();
          }
        flagHasDateTimeRangeSpec = true;
        storeDateTimeRangeSpec = new_value;
      }
    void unsetDateTimeRangeSpec(void)
      {
        if (flagHasDateTimeRangeSpec)
          {
            storeDateTimeRangeSpec->remove_reference();
          }
        flagHasDateTimeRangeSpec = false;
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
    void initCalculatedDateAndTimes(void)
      {
        if (flagHasCalculatedDateAndTimes)
          {
            for (size_t num2 = 0; num2 < storeCalculatedDateAndTimes.size(); ++num2)
              {
                storeCalculatedDateAndTimes[num2]->remove_reference();
              }
          }
        flagHasCalculatedDateAndTimes = true;
        storeCalculatedDateAndTimes.clear();
      }
    void appendCalculatedDateAndTimes(DateAndOrTimeJSON * to_append)
      {
        if (!flagHasCalculatedDateAndTimes)
          {
            flagHasCalculatedDateAndTimes = true;
            storeCalculatedDateAndTimes.clear();
          }
        assert(flagHasCalculatedDateAndTimes);
        to_append->add_reference();
        storeCalculatedDateAndTimes.push_back(to_append);
      }
    void unsetCalculatedDateAndTimes(void)
      {
        if (flagHasCalculatedDateAndTimes)
          {
            for (size_t num3 = 0; num3 < storeCalculatedDateAndTimes.size(); ++num3)
              {
                storeCalculatedDateAndTimes[num3]->remove_reference();
              }
          }
        flagHasCalculatedDateAndTimes = false;
        storeCalculatedDateAndTimes.clear();
      }

    virtual void extraSunriseSunsetTimeInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSunriseSunsetTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSunriseSunsetTimeInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraSunriseSunsetTimeInformationNuggetAppendPair(key, new_component);
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
            case 'C':
                if (strcmp(&(key[1]), "alculatedDateAndTimes") == 0)
                    {
                    fromJSONCalculatedDateAndTimes(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ateTimeRangeSpec") == 0)
                    {
                    fromJSONDateTimeRangeSpec(new_component, false);
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
            case 'R':
                if (strncmp(&(key[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'I':
                            if (strcmp(&(key[10]), "nThePast") == 0)
                                {
                                fromJSONRequestedInThePast(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[10]), "ype") == 0)
                                {
                                fromJSONRequestedType(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraSunriseSunsetTimeInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "alculatedDateAndTimes") == 0)
                    {
                    fromJSONCalculatedDateAndTimes(new_component, false);
                    return;
                    }
                break;
            case 'D':
                if (strcmp(&(key[1]), "ateTimeRangeSpec") == 0)
                    {
                    fromJSONDateTimeRangeSpec(new_component, false);
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
            case 'R':
                if (strncmp(&(key[1]), "equested", 8) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'I':
                            if (strcmp(&(key[10]), "nThePast") == 0)
                                {
                                fromJSONRequestedInThePast(new_component, false);
                                return;
                                }
                            break;
                        case 'T':
                            if (strcmp(&(key[10]), "ype") == 0)
                                {
                                fromJSONRequestedType(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraSunriseSunsetTimeInformationNuggetSetField(key, new_component);
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
        assert(flagHasRequestedType);
        handler->start_pair("RequestedType");
        handler->string_value(storeRequestedType);
        assert(flagHasDateTimeRangeSpec);
        handler->start_pair("DateTimeRangeSpec");
        storeDateTimeRangeSpec->write_as_json(handler);
        assert(flagHasRequestedInThePast);
        handler->start_pair("RequestedInThePast");
        handler->boolean_value(storeRequestedInThePast);
        assert(flagHasCalculatedDateAndTimes);
        handler->start_pair("CalculatedDateAndTimes");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeCalculatedDateAndTimes.size(); ++num1)
          {
            storeCalculatedDateAndTimes[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMapLocation()))
          {
            return "When parsing the object for %what%, the \"MapLocation\" field was missing.";
          }
        if (!(hasRequestedType()))
          {
            return "When parsing the object for %what%, the \"RequestedType\" field was missing.";
          }
        if (!(hasDateTimeRangeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeRangeSpec\" field was missing.";
          }
        if (!(hasRequestedInThePast()))
          {
            return "When parsing the object for %what%, the \"RequestedInThePast\" field was missing.";
          }
        if (!(hasCalculatedDateAndTimes()))
          {
            return "When parsing the object for %what%, the \"CalculatedDateAndTimes\" field was missing.";
          }
        return NULL;
      }

    static SunriseSunsetTimeInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SunriseSunsetTimeInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SunriseSunsetTimeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeInformationNuggetJSON>, SunriseSunsetTimeInformationNuggetJSON *, bool> generator("Type SunriseSunsetTimeInformationNugget", ignore_extras);
            parse_json_value(text, "Text for SunriseSunsetTimeInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SunriseSunsetTimeInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SunriseSunsetTimeInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeInformationNuggetJSON>, SunriseSunsetTimeInformationNuggetJSON *, bool> generator("Type SunriseSunsetTimeInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedType;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRangeSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedInThePast;
        JSONHoldingArrayGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCalculatedDateAndTimes;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "SunriseSunsetTime") == 0))
                throw("The key field has a value other than `SunriseSunsetTime'.");
            SunriseSunsetTimeInformationNuggetJSON *result = new SunriseSunsetTimeInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<SunriseSunsetTimeInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSunriseSunsetTimeInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((SunriseSunsetTimeInformationNuggetJSON *)new_result);
          }
        void finish(SunriseSunsetTimeInformationNuggetJSON *result)
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
            if (fieldGeneratorRequestedType.have_value)
              {
                result->setRequestedType(fieldGeneratorRequestedType.value);
                fieldGeneratorRequestedType.have_value = false;
              }
            else if (!(result->hasRequestedType()))
              {
                error("When parsing the object for %what%, the \"RequestedType\" field was missing.");
              }
            if (fieldGeneratorDateTimeRangeSpec.have_value)
              {
                result->setDateTimeRangeSpec(fieldGeneratorDateTimeRangeSpec.value.referenced());
                fieldGeneratorDateTimeRangeSpec.have_value = false;
              }
            else if (!(result->hasDateTimeRangeSpec()))
              {
                error("When parsing the object for %what%, the \"DateTimeRangeSpec\" field was missing.");
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
            if (fieldGeneratorCalculatedDateAndTimes.have_value)
              {
                result->initCalculatedDateAndTimes();
                size_t count = fieldGeneratorCalculatedDateAndTimes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCalculatedDateAndTimes(fieldGeneratorCalculatedDateAndTimes.value[num].referenced());
                  }
                fieldGeneratorCalculatedDateAndTimes.value.clear();
                fieldGeneratorCalculatedDateAndTimes.have_value = false;
              }
            else if (!(result->hasCalculatedDateAndTimes()))
              {
                error("When parsing the object for %what%, the \"CalculatedDateAndTimes\" field was missing.");
              }
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(SunriseSunsetTimeInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "alculatedDateAndTimes") == 0)
                        return &fieldGeneratorCalculatedDateAndTimes;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ateTimeRangeSpec") == 0)
                        return &fieldGeneratorDateTimeRangeSpec;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equested", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[10]), "nThePast") == 0)
                                    return &fieldGeneratorRequestedInThePast;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[10]), "ype") == 0)
                                    return &fieldGeneratorRequestedType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return DateAndTimeInformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the SunriseSunsetTimeInformationNugget class", ignore_extras), fieldGeneratorRequestedType("field \"RequestedType\" of the SunriseSunsetTimeInformationNugget class"), fieldGeneratorDateTimeRangeSpec("field \"DateTimeRangeSpec\" of the SunriseSunsetTimeInformationNugget class", ignore_extras), fieldGeneratorRequestedInThePast("field \"RequestedInThePast\" of the SunriseSunsetTimeInformationNugget class"), fieldGeneratorCalculatedDateAndTimes("field \"CalculatedDateAndTimes\" of the SunriseSunsetTimeInformationNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SunriseSunsetTimeInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRequestedType.reset();
            fieldGeneratorDateTimeRangeSpec.reset();
            fieldGeneratorRequestedInThePast.reset();
            fieldGeneratorCalculatedDateAndTimes.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SUNRISESUNSETTIMEINFORMATIONNUGGETJSON_H */
