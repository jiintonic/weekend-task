/* file "TimeOfMoonPhaseInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEOFMOONPHASEINFORMATIONNUGGETJSON_H
#define TIMEOFMOONPHASEINFORMATIONNUGGETJSON_H

#pragma interface

#include "DateAndTimeInformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "DateAndOrTimeJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeOfMoonPhaseInformationNuggetJSON : public DateAndTimeInformationNuggetJSON
  {
  private:
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRequestedMoonPhase;
    std::string storeRequestedMoonPhase;
    bool flagHasRequestedInThePast;
    bool storeRequestedInThePast;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeOfMoonPhaseInformationNuggetJSON(const TimeOfMoonPhaseInformationNuggetJSON &);
    TimeOfMoonPhaseInformationNuggetJSON & operator=(const TimeOfMoonPhaseInformationNuggetJSON &other);

    JSONValue * extraDateAndTimeToJSON(void) const;
    JSONValue * extraMapLocationToJSON(void) const;
    JSONValue * extraRequestedMoonPhaseToJSON(void) const;
    JSONValue * extraRequestedInThePastToJSON(void) const;

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedMoonPhase(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedInThePast(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeOfMoonPhaseInformationNuggetJSON(void);
    virtual ~TimeOfMoonPhaseInformationNuggetJSON(void);
    const char * getDateAndTimeNuggetKind(void) const;
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRequestedMoonPhase(void) const;
    std::string  getRequestedMoonPhase(void);
    const std::string  getRequestedMoonPhase(void) const;
    bool  hasRequestedInThePast(void) const;
    bool  getRequestedInThePast(void);
    const bool  getRequestedInThePast(void) const;

    virtual size_t extraTimeOfMoonPhaseInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeOfMoonPhaseInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeOfMoonPhaseInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeOfMoonPhaseInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeOfMoonPhaseInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeOfMoonPhaseInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDateAndTimeInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasDateAndTime)
            ++result;
        if (flagHasMapLocation)
            ++result;
        if (flagHasRequestedMoonPhase)
            ++result;
        if (flagHasRequestedInThePast)
            ++result;
        result += extraTimeOfMoonPhaseInformationNuggetComponentCount();
        return result;
      }
    const char *extraDateAndTimeInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return "DateAndTime";
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return "MapLocation";
            --remainder;
          }
        if (flagHasRequestedMoonPhase)
          {
            if (remainder == 0)
                return "RequestedMoonPhase";
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return "RequestedInThePast";
            --remainder;
          }
        return extraTimeOfMoonPhaseInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasRequestedMoonPhase)
          {
            if (remainder == 0)
                return extraRequestedMoonPhaseToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        return extraTimeOfMoonPhaseInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraDateAndTimeInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasDateAndTime)
          {
            if (remainder == 0)
                return extraDateAndTimeToJSON();
            --remainder;
          }
        if (flagHasMapLocation)
          {
            if (remainder == 0)
                return extraMapLocationToJSON();
            --remainder;
          }
        if (flagHasRequestedMoonPhase)
          {
            if (remainder == 0)
                return extraRequestedMoonPhaseToJSON();
            --remainder;
          }
        if (flagHasRequestedInThePast)
          {
            if (remainder == 0)
                return extraRequestedInThePastToJSON();
            --remainder;
          }
        return extraTimeOfMoonPhaseInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                    return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
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
                        case 'M':
                            if (strcmp(&(field_name[10]), "oonPhase") == 0)
                                return (flagHasRequestedMoonPhase ? extraRequestedMoonPhaseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeOfMoonPhaseInformationNuggetLookup(field_name);
      }
    const JSONValue *extraDateAndTimeInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                    return (flagHasDateAndTime ? extraDateAndTimeToJSON() : NULL);
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
                        case 'M':
                            if (strcmp(&(field_name[10]), "oonPhase") == 0)
                                return (flagHasRequestedMoonPhase ? extraRequestedMoonPhaseToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraTimeOfMoonPhaseInformationNuggetLookup(field_name);
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
    void setRequestedMoonPhase(std::string new_value)
      {
        flagHasRequestedMoonPhase = true;
        storeRequestedMoonPhase = new_value;
      }
    void unsetRequestedMoonPhase(void)
      {
        flagHasRequestedMoonPhase = false;
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

    virtual void extraTimeOfMoonPhaseInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeOfMoonPhaseInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeOfMoonPhaseInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraTimeOfMoonPhaseInformationNuggetAppendPair(key, new_component);
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
                        case 'M':
                            if (strcmp(&(key[10]), "oonPhase") == 0)
                                {
                                fromJSONRequestedMoonPhase(new_component, false);
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
        extraTimeOfMoonPhaseInformationNuggetAppendPair(key, new_component);
      }
    void extraDateAndTimeInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
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
                        case 'M':
                            if (strcmp(&(key[10]), "oonPhase") == 0)
                                {
                                fromJSONRequestedMoonPhase(new_component, false);
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
        extraTimeOfMoonPhaseInformationNuggetSetField(key, new_component);
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
        assert(flagHasDateAndTime);
        handler->start_pair("DateAndTime");
        storeDateAndTime->write_as_json(handler);
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        assert(flagHasRequestedMoonPhase);
        handler->start_pair("RequestedMoonPhase");
        handler->string_value(storeRequestedMoonPhase);
        assert(flagHasRequestedInThePast);
        handler->start_pair("RequestedInThePast");
        handler->boolean_value(storeRequestedInThePast);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasRequestedMoonPhase()))
          {
            return "When parsing the object for %what%, the \"RequestedMoonPhase\" field was missing.";
          }
        if (!(hasRequestedInThePast()))
          {
            return "When parsing the object for %what%, the \"RequestedInThePast\" field was missing.";
          }
        return NULL;
      }

    static TimeOfMoonPhaseInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeOfMoonPhaseInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeOfMoonPhaseInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseInformationNuggetJSON>, TimeOfMoonPhaseInformationNuggetJSON *, bool> generator("Type TimeOfMoonPhaseInformationNugget", ignore_extras);
            parse_json_value(text, "Text for TimeOfMoonPhaseInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeOfMoonPhaseInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeOfMoonPhaseInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseInformationNuggetJSON>, TimeOfMoonPhaseInformationNuggetJSON *, bool> generator("Type TimeOfMoonPhaseInformationNugget", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedMoonPhase;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequestedInThePast;
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
            if (!(strcmp(getDateAndTimeInformationNuggetJSONKey().c_str(), "TimeOfMoonPhase") == 0))
                throw("The key field has a value other than `TimeOfMoonPhase'.");
            TimeOfMoonPhaseInformationNuggetJSON *result = new TimeOfMoonPhaseInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<TimeOfMoonPhaseInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeOfMoonPhaseInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DateAndTimeInformationNuggetJSON *new_result)
          {
            handle_result((TimeOfMoonPhaseInformationNuggetJSON *)new_result);
          }
        void finish(TimeOfMoonPhaseInformationNuggetJSON *result)
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
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorRequestedMoonPhase.have_value)
              {
                result->setRequestedMoonPhase(fieldGeneratorRequestedMoonPhase.value);
                fieldGeneratorRequestedMoonPhase.have_value = false;
              }
            else if (!(result->hasRequestedMoonPhase()))
              {
                error("When parsing the object for %what%, the \"RequestedMoonPhase\" field was missing.");
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
            DateAndTimeInformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(TimeOfMoonPhaseInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ateAndTime") == 0)
                        return &fieldGeneratorDateAndTime;
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
                            case 'M':
                                if (strcmp(&(field_name[10]), "oonPhase") == 0)
                                    return &fieldGeneratorRequestedMoonPhase;
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
        Generator(bool ignore_extras = false) : DateAndTimeInformationNuggetJSON::Generator(ignore_extras), fieldGeneratorDateAndTime("field \"DateAndTime\" of the TimeOfMoonPhaseInformationNugget class", ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the TimeOfMoonPhaseInformationNugget class", ignore_extras), fieldGeneratorRequestedMoonPhase("field \"RequestedMoonPhase\" of the TimeOfMoonPhaseInformationNugget class"), fieldGeneratorRequestedInThePast("field \"RequestedInThePast\" of the TimeOfMoonPhaseInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeOfMoonPhaseInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRequestedMoonPhase.reset();
            fieldGeneratorRequestedInThePast.reset();
            DateAndTimeInformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEOFMOONPHASEINFORMATIONNUGGETJSON_H */
