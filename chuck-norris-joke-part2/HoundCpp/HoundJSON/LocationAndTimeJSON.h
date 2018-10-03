/* file "LocationAndTimeJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCATIONANDTIMEJSON_H
#define LOCATIONANDTIMEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class LocationAndTimeJSON : public ReferenceCounted
  {
  private:
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasTimeZone;
    TimeZoneJSON * storeTimeZone;
    bool flagHasDateTimeSpec;
    DateTimeSpecJSON * storeDateTimeSpec;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocationAndTimeJSON(const LocationAndTimeJSON &);
    LocationAndTimeJSON & operator=(const LocationAndTimeJSON &other);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocationAndTimeJSON(void);
    virtual ~LocationAndTimeJSON(void);
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasTimeZone(void) const;
    TimeZoneJSON *  getTimeZone(void);
    const TimeZoneJSON *  getTimeZone(void) const;
    bool  hasDateTimeSpec(void) const;
    DateTimeSpecJSON *  getDateTimeSpec(void);
    const DateTimeSpecJSON *  getDateTimeSpec(void) const;

    virtual size_t extraLocationAndTimeComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocationAndTimeComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocationAndTimeComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocationAndTimeComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocationAndTimeLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocationAndTimeLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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

    virtual void extraLocationAndTimeAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocationAndTimeSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocationAndTimeLookup(key);
        if (old_field == NULL)
          {
            extraLocationAndTimeAppendPair(key, new_component);
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
        if (!(hasDateTimeSpec()))
          {
            return "When parsing the object for %what%, the \"DateTimeSpec\" field was missing.";
          }
        return NULL;
      }

    static LocationAndTimeJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocationAndTimeJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocationAndTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationAndTimeJSON>, LocationAndTimeJSON *, bool> generator("Type LocationAndTime", ignore_extras);
            parse_json_value(text, "Text for LocationAndTimeJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocationAndTimeJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocationAndTimeJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationAndTimeJSON>, LocationAndTimeJSON *, bool> generator("Type LocationAndTime", ignore_extras);
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
            LocationAndTimeJSON *result = new LocationAndTimeJSON();
            assert(result != NULL);
            RCHandle<LocationAndTimeJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocationAndTimeAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(LocationAndTimeJSON *result)
          {
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
        virtual void handle_result(LocationAndTimeJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ateTimeSpec") == 0)
                        return &fieldGeneratorDateTimeSpec;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
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
        Generator(bool ignore_extras = false) : fieldGeneratorMapLocation("field \"MapLocation\" of the LocationAndTime class", ignore_extras), fieldGeneratorTimeZone("field \"TimeZone\" of the LocationAndTime class", ignore_extras), fieldGeneratorDateTimeSpec("field \"DateTimeSpec\" of the LocationAndTime class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocationAndTime class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMapLocation.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorDateTimeSpec.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCATIONANDTIMEJSON_H */
