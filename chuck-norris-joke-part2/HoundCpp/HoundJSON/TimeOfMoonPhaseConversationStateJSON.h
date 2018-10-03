/* file "TimeOfMoonPhaseConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef TIMEOFMOONPHASECONVERSATIONSTATEJSON_H
#define TIMEOFMOONPHASECONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
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


class TimeOfMoonPhaseConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_TimeOfMoonPhase
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasDateAndTime;
    DateAndOrTimeJSON * storeDateAndTime;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRequestedMoonPhase;
    std::string storeRequestedMoonPhase;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    TimeOfMoonPhaseConversationStateJSON(const TimeOfMoonPhaseConversationStateJSON &);
    TimeOfMoonPhaseConversationStateJSON & operator=(const TimeOfMoonPhaseConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateAndTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedMoonPhase(JSONValue *json_value, bool ignore_extras = false);


  public:
    TimeOfMoonPhaseConversationStateJSON(void);
    virtual ~TimeOfMoonPhaseConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasDateAndTime(void) const;
    DateAndOrTimeJSON *  getDateAndTime(void);
    const DateAndOrTimeJSON *  getDateAndTime(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRequestedMoonPhase(void) const;
    std::string  getRequestedMoonPhase(void);
    const std::string  getRequestedMoonPhase(void) const;

    virtual size_t extraTimeOfMoonPhaseConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraTimeOfMoonPhaseConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraTimeOfMoonPhaseConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraTimeOfMoonPhaseConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraTimeOfMoonPhaseConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraTimeOfMoonPhaseConversationStateLookup(const char *field_name) const
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

    virtual void extraTimeOfMoonPhaseConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraTimeOfMoonPhaseConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraTimeOfMoonPhaseConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraTimeOfMoonPhaseConversationStateAppendPair(key, new_component);
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
        handler->string_value("TimeOfMoonPhase");
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
        if (!(hasDateAndTime()))
          {
            return "When parsing the object for %what%, the \"DateAndTime\" field was missing.";
          }
        if (!(hasRequestedMoonPhase()))
          {
            return "When parsing the object for %what%, the \"RequestedMoonPhase\" field was missing.";
          }
        return NULL;
      }

    static TimeOfMoonPhaseConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static TimeOfMoonPhaseConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        TimeOfMoonPhaseConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseConversationStateJSON>, TimeOfMoonPhaseConversationStateJSON *, bool> generator("Type TimeOfMoonPhaseConversationState", ignore_extras);
            parse_json_value(text, "Text for TimeOfMoonPhaseConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static TimeOfMoonPhaseConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        TimeOfMoonPhaseConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<TimeOfMoonPhaseConversationStateJSON>, TimeOfMoonPhaseConversationStateJSON *, bool> generator("Type TimeOfMoonPhaseConversationState", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorDateAndTime;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedMoonPhase;
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
            TimeOfMoonPhaseConversationStateJSON *result = new TimeOfMoonPhaseConversationStateJSON();
            assert(result != NULL);
            RCHandle<TimeOfMoonPhaseConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraTimeOfMoonPhaseConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(TimeOfMoonPhaseConversationStateJSON *result)
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
          }
        virtual void handle_result(TimeOfMoonPhaseConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ateAndTime", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 0:
                                return &fieldGeneratorDateAndTime;
                            case 'K':
                                if (strcmp(&(field_name[12]), "ind") == 0)
                                    return &fieldGeneratorDateAndTimeKind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedMoonPhase") == 0)
                        return &fieldGeneratorRequestedMoonPhase;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the TimeOfMoonPhaseConversationState class"), fieldGeneratorDateAndTime("field \"DateAndTime\" of the TimeOfMoonPhaseConversationState class", ignore_extras), fieldGeneratorMapLocation("field \"MapLocation\" of the TimeOfMoonPhaseConversationState class", ignore_extras), fieldGeneratorRequestedMoonPhase("field \"RequestedMoonPhase\" of the TimeOfMoonPhaseConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the TimeOfMoonPhaseConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorDateAndTime.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRequestedMoonPhase.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* TIMEOFMOONPHASECONVERSATIONSTATEJSON_H */
