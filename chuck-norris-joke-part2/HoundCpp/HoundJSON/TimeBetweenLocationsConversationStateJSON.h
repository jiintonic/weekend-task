/* file "TimeBetweenLocationsConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEBETWEENLOCATIONSCONVERSATIONSTATEJSON_H
#define TIMEBETWEENLOCATIONSCONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class TimeBetweenLocationsConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_TimeBetweenLocations
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasSourceMapLocation;
    MapLocationJSON * storeSourceMapLocation;
    bool flagHasDestinationMapLocation;
    MapLocationJSON * storeDestinationMapLocation;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasOffset;
    double storeOffset;
    std::string textStoreOffset;
    bool flagHasUnits;
    std::string storeUnits;
    bool flagHasDateTimeRangeSpec;
    DateTimeRangeSpecJSON * storeDateTimeRangeSpec;
    bool flagHasSourceDateAndTime;
    DateAndOrTimeJSON * storeSourceDateAndTime;
    bool flagHasDestinationDateAndTime;
    DateAndOrTimeJSON * storeDestinationDateAndTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeBetweenLocationsConversationStateJSON(const TimeBetweenLocationsConversationStateJSON &);
    TimeBetweenLocationsConversationStateJSON & operator=(const TimeBetweenLocationsConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOffset(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationDateAndTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeBetweenLocationsConversationStateJSON(void);
    virtual ~TimeBetweenLocationsConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasSourceMapLocation(void) const;
    MapLocationJSON *  getSourceMapLocation(void);
    const MapLocationJSON *  getSourceMapLocation(void) const;
    bool  hasDestinationMapLocation(void) const;
    MapLocationJSON *  getDestinationMapLocation(void);
    const MapLocationJSON *  getDestinationMapLocation(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasOffset(void) const;
    double  getOffset(void);
    const double  getOffset(void) const;
    std::string  getOffsetAsText(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;
    bool  hasDateTimeRangeSpec(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void);
    const DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void) const;
    bool  hasSourceDateAndTime(void) const;
    DateAndOrTimeJSON *  getSourceDateAndTime(void);
    const DateAndOrTimeJSON *  getSourceDateAndTime(void) const;
    bool  hasDestinationDateAndTime(void) const;
    DateAndOrTimeJSON *  getDestinationDateAndTime(void);
    const DateAndOrTimeJSON *  getDestinationDateAndTime(void) const;

    virtual size_t extraTimeBetweenLocationsConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeBetweenLocationsConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeBetweenLocationsConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeBetweenLocationsConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeBetweenLocationsConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeBetweenLocationsConversationStateLookup(const char *field_name) const
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
            throw("The text value for field Offset of TimeBetweenLocationsConversationStateJSON is not a valid number.");
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
    void setSourceDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSourceDateAndTime)
          {
            storeSourceDateAndTime->remove_reference();
          }
        flagHasSourceDateAndTime = true;
        storeSourceDateAndTime = new_value;
      }
    void unsetSourceDateAndTime(void)
      {
        if (flagHasSourceDateAndTime)
          {
            storeSourceDateAndTime->remove_reference();
          }
        flagHasSourceDateAndTime = false;
      }
    void setDestinationDateAndTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDestinationDateAndTime)
          {
            storeDestinationDateAndTime->remove_reference();
          }
        flagHasDestinationDateAndTime = true;
        storeDestinationDateAndTime = new_value;
      }
    void unsetDestinationDateAndTime(void)
      {
        if (flagHasDestinationDateAndTime)
          {
            storeDestinationDateAndTime->remove_reference();
          }
        flagHasDestinationDateAndTime = false;
      }

    virtual void extraTimeBetweenLocationsConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeBetweenLocationsConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeBetweenLocationsConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraTimeBetweenLocationsConversationStateAppendPair(key, new_component);
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
        handler->string_value("TimeBetweenLocations");
        if (flagHasSourceMapLocation)
          {
            handler->start_pair("SourceMapLocation");
            storeSourceMapLocation->write_as_json(handler);
          }
        assert(flagHasDestinationMapLocation);
        handler->start_pair("DestinationMapLocation");
        storeDestinationMapLocation->write_as_json(handler);
        assert(flagHasMapLocation);
        handler->start_pair("MapLocation");
        storeMapLocation->write_as_json(handler);
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
        assert(flagHasDateTimeRangeSpec);
        handler->start_pair("DateTimeRangeSpec");
        storeDateTimeRangeSpec->write_as_json(handler);
        assert(flagHasSourceDateAndTime);
        handler->start_pair("SourceDateAndTime");
        storeSourceDateAndTime->write_as_json(handler);
        assert(flagHasDestinationDateAndTime);
        handler->start_pair("DestinationDateAndTime");
        storeDestinationDateAndTime->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasDestinationMapLocation()))
          {
            return "When parsing the object for %what%, the \"DestinationMapLocation\" field was missing.";
          }
        if (!(hasMapLocation()))
          {
            return "When parsing the object for %what%, the \"MapLocation\" field was missing.";
          }
        if (!(hasOffset()))
          {
            return "When parsing the object for %what%, the \"Offset\" field was missing.";
          }
        if (!(hasUnits()))
          {
            return "When parsing the object for %what%, the \"Units\" field was missing.";
          }
        if (!(hasDateTimeRangeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeRangeSpec\" field was missing.";
          }
        if (!(hasSourceDateAndTime()))
          {
            return "When parsing the object for %what%, the \"SourceDateAndTime\" field was missing.";
          }
        if (!(hasDestinationDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DestinationDateAndTime\" field was missing.";
          }
        return NULL;
      }

    static TimeBetweenLocationsConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeBetweenLocationsConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeBetweenLocationsConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenLocationsConversationStateJSON>, TimeBetweenLocationsConversationStateJSON *, bool> generator("Type TimeBetweenLocationsConversationState", ignore_extras);
            parse_json_value(text, "Text for TimeBetweenLocationsConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeBetweenLocationsConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeBetweenLocationsConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeBetweenLocationsConversationStateJSON>, TimeBetweenLocationsConversationStateJSON *, bool> generator("Type TimeBetweenLocationsConversationState", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocation;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOffset;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRangeSpec;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorSourceDateAndTime;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDestinationDateAndTime;
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
            TimeBetweenLocationsConversationStateJSON *result = new TimeBetweenLocationsConversationStateJSON();
            assert(result != NULL);
            RCHandle<TimeBetweenLocationsConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeBetweenLocationsConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeBetweenLocationsConversationStateJSON *result)
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
            if (fieldGeneratorDestinationMapLocation.have_value)
              {
                result->setDestinationMapLocation(fieldGeneratorDestinationMapLocation.value.referenced());
                fieldGeneratorDestinationMapLocation.have_value = false;
              }
            else if (!(result->hasDestinationMapLocation()))
              {
                error("When parsing the object for %what%, the \"DestinationMapLocation\" field was missing.");
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            else if (!(result->hasMapLocation()))
              {
                error("When parsing the object for %what%, the \"MapLocation\" field was missing.");
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
            if (fieldGeneratorDateTimeRangeSpec.have_value)
              {
                result->setDateTimeRangeSpec(fieldGeneratorDateTimeRangeSpec.value.referenced());
                fieldGeneratorDateTimeRangeSpec.have_value = false;
              }
            else if (!(result->hasDateTimeRangeSpec()))
              {
                error("When parsing the object for %what%, the \"DateTimeRangeSpec\" field was missing.");
              }
            if (fieldGeneratorSourceDateAndTime.have_value)
              {
                result->setSourceDateAndTime(fieldGeneratorSourceDateAndTime.value.referenced());
                fieldGeneratorSourceDateAndTime.have_value = false;
              }
            else if (!(result->hasSourceDateAndTime()))
              {
                error("When parsing the object for %what%, the \"SourceDateAndTime\" field was missing.");
              }
            if (fieldGeneratorDestinationDateAndTime.have_value)
              {
                result->setDestinationDateAndTime(fieldGeneratorDestinationDateAndTime.value.referenced());
                fieldGeneratorDestinationDateAndTime.have_value = false;
              }
            else if (!(result->hasDestinationDateAndTime()))
              {
                error("When parsing the object for %what%, the \"DestinationDateAndTime\" field was missing.");
              }
          }
        virtual void handle_result(TimeBetweenLocationsConversationStateJSON *new_result) = 0;
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
                                        if (strcmp(&(field_name[5]), "imeRangeSpec") == 0)
                                            return &fieldGeneratorDateTimeRangeSpec;
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
                                        if (strcmp(&(field_name[12]), "ateAndTime") == 0)
                                            return &fieldGeneratorDestinationDateAndTime;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[12]), "apLocation") == 0)
                                            return &fieldGeneratorDestinationMapLocation;
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
                case 'O':
                    if (strcmp(&(field_name[1]), "ffset") == 0)
                        return &fieldGeneratorOffset;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "ource", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[7]), "ateAndTime") == 0)
                                    return &fieldGeneratorSourceDateAndTime;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[7]), "apLocation") == 0)
                                    return &fieldGeneratorSourceMapLocation;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the TimeBetweenLocationsConversationState class"), fieldGeneratorSourceMapLocation("field \"SourceMapLocation\" of the TimeBetweenLocationsConversationState class", ignore_extras), fieldGeneratorDestinationMapLocation("field \"DestinationMapLocation\" of the TimeBetweenLocationsConversationState class", ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the TimeBetweenLocationsConversationState class", ignore_extras), fieldGeneratorOffset("field \"Offset\" of the TimeBetweenLocationsConversationState class"), fieldGeneratorUnits("field \"Units\" of the TimeBetweenLocationsConversationState class"), fieldGeneratorDateTimeRangeSpec("field \"DateTimeRangeSpec\" of the TimeBetweenLocationsConversationState class", ignore_extras), fieldGeneratorSourceDateAndTime("field \"SourceDateAndTime\" of the TimeBetweenLocationsConversationState class", ignore_extras), fieldGeneratorDestinationDateAndTime("field \"DestinationDateAndTime\" of the TimeBetweenLocationsConversationState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeBetweenLocationsConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorSourceMapLocation.reset();
            fieldGeneratorDestinationMapLocation.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorOffset.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorDateTimeRangeSpec.reset();
            fieldGeneratorSourceDateAndTime.reset();
            fieldGeneratorDestinationDateAndTime.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEBETWEENLOCATIONSCONVERSATIONSTATEJSON_H */
