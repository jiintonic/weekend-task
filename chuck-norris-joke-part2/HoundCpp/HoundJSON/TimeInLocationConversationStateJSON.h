/* file "TimeInLocationConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEINLOCATIONCONVERSATIONSTATEJSON_H
#define TIMEINLOCATIONCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "MapLocationJSON.h"
#include "TimeZoneJSON.h"
#include "DateTimeSpecJSON.h"
#include "MapLocationJSON.h"
#include "TimeZoneJSON.h"
#include "DateTimeSpecJSON.h"
#include "MapLocationJSON.h"
#include "TimeZoneJSON.h"
#include "DateTimeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeInLocationConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_TimeInLocation
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasSourceMapLocation;
    MapLocationJSON * storeSourceMapLocation;
    bool flagHasSourceTimeZone;
    TimeZoneJSON * storeSourceTimeZone;
    bool flagHasSourceDateTimeSpec;
    DateTimeSpecJSON * storeSourceDateTimeSpec;
    bool flagHasDestinationMapLocation;
    MapLocationJSON * storeDestinationMapLocation;
    bool flagHasDestinationTimeZone;
    TimeZoneJSON * storeDestinationTimeZone;
    bool flagHasDestinationDateTimeSpec;
    DateTimeSpecJSON * storeDestinationDateTimeSpec;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasTimeZone;
    TimeZoneJSON * storeTimeZone;
    bool flagHasDateTimeSpec;
    DateTimeSpecJSON * storeDateTimeSpec;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeInLocationConversationStateJSON(const TimeInLocationConversationStateJSON &);
    TimeInLocationConversationStateJSON & operator=(const TimeInLocationConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeInLocationConversationStateJSON(void);
    virtual ~TimeInLocationConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasSourceMapLocation(void) const;
    MapLocationJSON *  getSourceMapLocation(void);
    const MapLocationJSON *  getSourceMapLocation(void) const;
    bool  hasSourceTimeZone(void) const;
    TimeZoneJSON *  getSourceTimeZone(void);
    const TimeZoneJSON *  getSourceTimeZone(void) const;
    bool  hasSourceDateTimeSpec(void) const;
    DateTimeSpecJSON *  getSourceDateTimeSpec(void);
    const DateTimeSpecJSON *  getSourceDateTimeSpec(void) const;
    bool  hasDestinationMapLocation(void) const;
    MapLocationJSON *  getDestinationMapLocation(void);
    const MapLocationJSON *  getDestinationMapLocation(void) const;
    bool  hasDestinationTimeZone(void) const;
    TimeZoneJSON *  getDestinationTimeZone(void);
    const TimeZoneJSON *  getDestinationTimeZone(void) const;
    bool  hasDestinationDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDestinationDateTimeSpec(void);
    const DateTimeSpecJSON *  getDestinationDateTimeSpec(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasTimeZone(void) const;
    TimeZoneJSON *  getTimeZone(void);
    const TimeZoneJSON *  getTimeZone(void) const;
    bool  hasDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDateTimeSpec(void);
    const DateTimeSpecJSON *  getDateTimeSpec(void) const;

    virtual size_t extraTimeInLocationConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeInLocationConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeInLocationConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeInLocationConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeInLocationConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeInLocationConversationStateLookup(const char *field_name) const
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
    void setSourceMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceMapLocation)
          {
            storeSourceMapLocation->remove_reference();
          }
        flagHasSourceMapLocation = true;
        storeSourceMapLocation = new_value;
      }
    void unsetSourceMapLocation(void)
      {
        if (flagHasSourceMapLocation)
          {
            storeSourceMapLocation->remove_reference();
          }
        flagHasSourceMapLocation = false;
      }
    void setSourceTimeZone(TimeZoneJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceTimeZone)
          {
            storeSourceTimeZone->remove_reference();
          }
        flagHasSourceTimeZone = true;
        storeSourceTimeZone = new_value;
      }
    void unsetSourceTimeZone(void)
      {
        if (flagHasSourceTimeZone)
          {
            storeSourceTimeZone->remove_reference();
          }
        flagHasSourceTimeZone = false;
      }
    void setSourceDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceDateTimeSpec)
          {
            storeSourceDateTimeSpec->remove_reference();
          }
        flagHasSourceDateTimeSpec = true;
        storeSourceDateTimeSpec = new_value;
      }
    void unsetSourceDateTimeSpec(void)
      {
        if (flagHasSourceDateTimeSpec)
          {
            storeSourceDateTimeSpec->remove_reference();
          }
        flagHasSourceDateTimeSpec = false;
      }
    void setDestinationMapLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationMapLocation)
          {
            storeDestinationMapLocation->remove_reference();
          }
        flagHasDestinationMapLocation = true;
        storeDestinationMapLocation = new_value;
      }
    void unsetDestinationMapLocation(void)
      {
        if (flagHasDestinationMapLocation)
          {
            storeDestinationMapLocation->remove_reference();
          }
        flagHasDestinationMapLocation = false;
      }
    void setDestinationTimeZone(TimeZoneJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationTimeZone)
          {
            storeDestinationTimeZone->remove_reference();
          }
        flagHasDestinationTimeZone = true;
        storeDestinationTimeZone = new_value;
      }
    void unsetDestinationTimeZone(void)
      {
        if (flagHasDestinationTimeZone)
          {
            storeDestinationTimeZone->remove_reference();
          }
        flagHasDestinationTimeZone = false;
      }
    void setDestinationDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDateTimeSpec)
          {
            storeDestinationDateTimeSpec->remove_reference();
          }
        flagHasDestinationDateTimeSpec = true;
        storeDestinationDateTimeSpec = new_value;
      }
    void unsetDestinationDateTimeSpec(void)
      {
        if (flagHasDestinationDateTimeSpec)
          {
            storeDestinationDateTimeSpec->remove_reference();
          }
        flagHasDestinationDateTimeSpec = false;
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
    void setTimeZone(TimeZoneJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTimeZone)
          {
            storeTimeZone->remove_reference();
          }
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        if (flagHasTimeZone)
          {
            storeTimeZone->remove_reference();
          }
        flagHasTimeZone = false;
      }
    void setDateTimeSpec(DateTimeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = true;
        storeDateTimeSpec = new_value;
      }
    void unsetDateTimeSpec(void)
      {
        if (flagHasDateTimeSpec)
          {
            storeDateTimeSpec->remove_reference();
          }
        flagHasDateTimeSpec = false;
      }

    virtual void extraTimeInLocationConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeInLocationConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeInLocationConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraTimeInLocationConversationStateAppendPair(key, new_component);
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
        handler->string_value("TimeInLocation");
        if (flagHasSourceMapLocation)
          {
            handler->start_pair("SourceMapLocation");
            storeSourceMapLocation->write_as_json(handler);
          }
        if (flagHasSourceTimeZone)
          {
            handler->start_pair("SourceTimeZone");
            storeSourceTimeZone->write_as_json(handler);
          }
        if (flagHasSourceDateTimeSpec)
          {
            handler->start_pair("SourceDateTimeSpec");
            storeSourceDateTimeSpec->write_as_json(handler);
          }
        if (flagHasDestinationMapLocation)
          {
            handler->start_pair("DestinationMapLocation");
            storeDestinationMapLocation->write_as_json(handler);
          }
        if (flagHasDestinationTimeZone)
          {
            handler->start_pair("DestinationTimeZone");
            storeDestinationTimeZone->write_as_json(handler);
          }
        assert(flagHasDestinationDateTimeSpec);
        handler->start_pair("DestinationDateTimeSpec");
        storeDestinationDateTimeSpec->write_as_json(handler);
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        if (flagHasTimeZone)
          {
            handler->start_pair("TimeZone");
            storeTimeZone->write_as_json(handler);
          }
        assert(flagHasDateTimeSpec);
        handler->start_pair("DateTimeSpec");
        storeDateTimeSpec->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasDestinationDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationDateTimeSpec\" field was missing.";
          }
        if (!(hasDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeSpec\" field was missing.";
          }
        return NULL;
      }

    static TimeInLocationConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeInLocationConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeInLocationConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeInLocationConversationStateJSON>, TimeInLocationConversationStateJSON *, bool> generator("Type TimeInLocationConversationState", ignore_extras);
            parse_json_value(text, "Text for TimeInLocationConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeInLocationConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeInLocationConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeInLocationConversationStateJSON>, TimeInLocationConversationStateJSON *, bool> generator("Type TimeInLocationConversationState", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorSourceMapLocation;
        JSONHoldingGenerator<TimeZoneJSON::Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool > fieldGeneratorSourceTimeZone;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorSourceDateTimeSpec;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocation;
        JSONHoldingGenerator<TimeZoneJSON::Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool > fieldGeneratorDestinationTimeZone;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorDestinationDateTimeSpec;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<TimeZoneJSON::Generator, RCHandle<TimeZoneJSON>, TimeZoneJSON *, bool > fieldGeneratorTimeZone;
        JSONHoldingGenerator<DateTimeSpecJSON::Generator, RCHandle<DateTimeSpecJSON>, DateTimeSpecJSON *, bool > fieldGeneratorDateTimeSpec;
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
            TimeInLocationConversationStateJSON *result = new TimeInLocationConversationStateJSON();
            assert(result != NULL);
            RCHandle<TimeInLocationConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeInLocationConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeInLocationConversationStateJSON *result)
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
            if (fieldGeneratorSourceMapLocation.have_value)
              {
                result->setSourceMapLocation(fieldGeneratorSourceMapLocation.value.referenced());
                fieldGeneratorSourceMapLocation.have_value = false;
              }
            if (fieldGeneratorSourceTimeZone.have_value)
              {
                result->setSourceTimeZone(fieldGeneratorSourceTimeZone.value.referenced());
                fieldGeneratorSourceTimeZone.have_value = false;
              }
            if (fieldGeneratorSourceDateTimeSpec.have_value)
              {
                result->setSourceDateTimeSpec(fieldGeneratorSourceDateTimeSpec.value.referenced());
                fieldGeneratorSourceDateTimeSpec.have_value = false;
              }
            if (fieldGeneratorDestinationMapLocation.have_value)
              {
                result->setDestinationMapLocation(fieldGeneratorDestinationMapLocation.value.referenced());
                fieldGeneratorDestinationMapLocation.have_value = false;
              }
            if (fieldGeneratorDestinationTimeZone.have_value)
              {
                result->setDestinationTimeZone(fieldGeneratorDestinationTimeZone.value.referenced());
                fieldGeneratorDestinationTimeZone.have_value = false;
              }
            if (fieldGeneratorDestinationDateTimeSpec.have_value)
              {
                result->setDestinationDateTimeSpec(fieldGeneratorDestinationDateTimeSpec.value.referenced());
                fieldGeneratorDestinationDateTimeSpec.have_value = false;
              }
            else if (!(result->hasDestinationDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DestinationDateTimeSpec\" field was missing.");
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value.referenced());
                fieldGeneratorTimeZone.have_value = false;
              }
            if (fieldGeneratorDateTimeSpec.have_value)
              {
                result->setDateTimeSpec(fieldGeneratorDateTimeSpec.value.referenced());
                fieldGeneratorDateTimeSpec.have_value = false;
              }
            else if (!(result->hasDateTimeSpec()))
              {
                error("When parsing the object for %what%, the \"DateTimeSpec\" field was missing.");
              }
          }
        virtual void handle_result(TimeInLocationConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "te", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[5]), "ndTimeKind") == 0)
                                            return &fieldGeneratorDateAndTimeKind;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[5]), "imeSpec") == 0)
                                            return &fieldGeneratorDateTimeSpec;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "stination", 9) == 0)
                              {
                                switch ((unsigned char)(field_name[11]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[12]), "ateTimeSpec") == 0)
                                            return &fieldGeneratorDestinationDateTimeSpec;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[12]), "apLocation") == 0)
                                            return &fieldGeneratorDestinationMapLocation;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[12]), "imeZone") == 0)
                                            return &fieldGeneratorDestinationTimeZone;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "ource", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "ateTimeSpec") == 0)
                                    return &fieldGeneratorSourceDateTimeSpec;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "apLocation") == 0)
                                    return &fieldGeneratorSourceMapLocation;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "imeZone") == 0)
                                    return &fieldGeneratorSourceTimeZone;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "imeZone") == 0)
                        return &fieldGeneratorTimeZone;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the TimeInLocationConversationState class"), fieldGeneratorSourceMapLocation("field \"SourceMapLocation\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorSourceTimeZone("field \"SourceTimeZone\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorSourceDateTimeSpec("field \"SourceDateTimeSpec\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorDestinationMapLocation("field \"DestinationMapLocation\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorDestinationTimeZone("field \"DestinationTimeZone\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorDestinationDateTimeSpec("field \"DestinationDateTimeSpec\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorTimeZone("field \"TimeZone\" of the TimeInLocationConversationState class", ignore_extras), fieldGeneratorDateTimeSpec("field \"DateTimeSpec\" of the TimeInLocationConversationState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeInLocationConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorSourceMapLocation.reset();
            fieldGeneratorSourceTimeZone.reset();
            fieldGeneratorSourceDateTimeSpec.reset();
            fieldGeneratorDestinationMapLocation.reset();
            fieldGeneratorDestinationTimeZone.reset();
            fieldGeneratorDestinationDateTimeSpec.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorDateTimeSpec.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEINLOCATIONCONVERSATIONSTATEJSON_H */
