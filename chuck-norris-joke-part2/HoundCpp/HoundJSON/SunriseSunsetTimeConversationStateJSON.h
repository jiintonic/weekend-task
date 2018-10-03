/* file "SunriseSunsetTimeConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SUNRISESUNSETTIMECONVERSATIONSTATEJSON_H
#define SUNRISESUNSETTIMECONVERSATIONSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SunriseSunsetTimeConversationStateJSON : public ReferenceCounted
  {
  public:
    enum TypeDateAndTimeKind
      {
        DateAndTimeKind_SunriseSunsetTime
      };

    static TypeDateAndTimeKind  stringToDateAndTimeKind(const char *chars);
    static const char * stringFromDateAndTimeKind(TypeDateAndTimeKind the_enum);

  private:
    bool flagHasDateAndTimeKind;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasRequestedType;
    std::string storeRequestedType;
    bool flagHasDateTimeRangeSpec;
    DateTimeRangeSpecJSON * storeDateTimeRangeSpec;
    bool flagHasIsDateTimeRequested;
    bool storeIsDateTimeRequested;
    bool flagHasFutureRequested;
    bool storeFutureRequested;
    bool flagHasPastRequested;
    bool storePastRequested;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SunriseSunsetTimeConversationStateJSON(const SunriseSunsetTimeConversationStateJSON &);
    SunriseSunsetTimeConversationStateJSON & operator=(const SunriseSunsetTimeConversationStateJSON &other);

    void  fromJSONDateAndTimeKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRangeSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsDateTimeRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFutureRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPastRequested(JSONValue *json_value, bool ignore_extras = false);


  public:
    SunriseSunsetTimeConversationStateJSON(void);
    virtual ~SunriseSunsetTimeConversationStateJSON(void);
    bool  hasDateAndTimeKind(void) const;
    TypeDateAndTimeKind  getDateAndTimeKind(void);
    const TypeDateAndTimeKind  getDateAndTimeKind(void) const;
    const char * getDateAndTimeKindAsChars(void) const;
    std::string  getDateAndTimeKindAsString(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasRequestedType(void) const;
    std::string  getRequestedType(void);
    const std::string  getRequestedType(void) const;
    bool  hasDateTimeRangeSpec(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void);
    const DateTimeRangeSpecJSON *  getDateTimeRangeSpec(void) const;
    bool  hasIsDateTimeRequested(void) const;
    bool  getIsDateTimeRequested(void);
    const bool  getIsDateTimeRequested(void) const;
    bool  hasFutureRequested(void) const;
    bool  getFutureRequested(void);
    const bool  getFutureRequested(void) const;
    bool  hasPastRequested(void) const;
    bool  getPastRequested(void);
    const bool  getPastRequested(void) const;

    virtual size_t extraSunriseSunsetTimeConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSunriseSunsetTimeConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSunriseSunsetTimeConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSunriseSunsetTimeConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSunriseSunsetTimeConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSunriseSunsetTimeConversationStateLookup(const char *field_name) const
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
    void setIsDateTimeRequested(bool new_value)
      {
        flagHasIsDateTimeRequested = true;
        storeIsDateTimeRequested = new_value;
      }
    void unsetIsDateTimeRequested(void)
      {
        flagHasIsDateTimeRequested = false;
      }
    void setFutureRequested(bool new_value)
      {
        flagHasFutureRequested = true;
        storeFutureRequested = new_value;
      }
    void unsetFutureRequested(void)
      {
        flagHasFutureRequested = false;
      }
    void setPastRequested(bool new_value)
      {
        flagHasPastRequested = true;
        storePastRequested = new_value;
      }
    void unsetPastRequested(void)
      {
        flagHasPastRequested = false;
      }

    virtual void extraSunriseSunsetTimeConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSunriseSunsetTimeConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSunriseSunsetTimeConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraSunriseSunsetTimeConversationStateAppendPair(key, new_component);
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
        handler->string_value("SunriseSunsetTime");
        assert(flagHasMapLocation);
        handler->start_pair("MapLocation");
        storeMapLocation->write_as_json(handler);
        assert(flagHasRequestedType);
        handler->start_pair("RequestedType");
        handler->string_value(storeRequestedType);
        assert(flagHasDateTimeRangeSpec);
        handler->start_pair("DateTimeRangeSpec");
        storeDateTimeRangeSpec->write_as_json(handler);
        assert(flagHasIsDateTimeRequested);
        handler->start_pair("IsDateTimeRequested");
        handler->boolean_value(storeIsDateTimeRequested);
        assert(flagHasFutureRequested);
        handler->start_pair("FutureRequested");
        handler->boolean_value(storeFutureRequested);
        assert(flagHasPastRequested);
        handler->start_pair("PastRequested");
        handler->boolean_value(storePastRequested);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDateAndTimeKind()))
          {
            return "When parsing the object for %what%, the \"DateAndTimeKind\" field was missing.";
          }
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
        if (!(hasIsDateTimeRequested()))
          {
            return "When parsing the object for %what%, the \"IsDateTimeRequested\" field was missing.";
          }
        if (!(hasFutureRequested()))
          {
            return "When parsing the object for %what%, the \"FutureRequested\" field was missing.";
          }
        if (!(hasPastRequested()))
          {
            return "When parsing the object for %what%, the \"PastRequested\" field was missing.";
          }
        return NULL;
      }

    static SunriseSunsetTimeConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SunriseSunsetTimeConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SunriseSunsetTimeConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeConversationStateJSON>, SunriseSunsetTimeConversationStateJSON *, bool> generator("Type SunriseSunsetTimeConversationState", ignore_extras);
            parse_json_value(text, "Text for SunriseSunsetTimeConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SunriseSunsetTimeConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SunriseSunsetTimeConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SunriseSunsetTimeConversationStateJSON>, SunriseSunsetTimeConversationStateJSON *, bool> generator("Type SunriseSunsetTimeConversationState", ignore_extras);
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
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedType;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRangeSpec;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsDateTimeRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFutureRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPastRequested;
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
            SunriseSunsetTimeConversationStateJSON *result = new SunriseSunsetTimeConversationStateJSON();
            assert(result != NULL);
            RCHandle<SunriseSunsetTimeConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSunriseSunsetTimeConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SunriseSunsetTimeConversationStateJSON *result)
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
            if (fieldGeneratorIsDateTimeRequested.have_value)
              {
                result->setIsDateTimeRequested(fieldGeneratorIsDateTimeRequested.value);
                fieldGeneratorIsDateTimeRequested.have_value = false;
              }
            else if (!(result->hasIsDateTimeRequested()))
              {
                error("When parsing the object for %what%, the \"IsDateTimeRequested\" field was missing.");
              }
            if (fieldGeneratorFutureRequested.have_value)
              {
                result->setFutureRequested(fieldGeneratorFutureRequested.value);
                fieldGeneratorFutureRequested.have_value = false;
              }
            else if (!(result->hasFutureRequested()))
              {
                error("When parsing the object for %what%, the \"FutureRequested\" field was missing.");
              }
            if (fieldGeneratorPastRequested.have_value)
              {
                result->setPastRequested(fieldGeneratorPastRequested.value);
                fieldGeneratorPastRequested.have_value = false;
              }
            else if (!(result->hasPastRequested()))
              {
                error("When parsing the object for %what%, the \"PastRequested\" field was missing.");
              }
          }
        virtual void handle_result(SunriseSunsetTimeConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "ate", 3) == 0)
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
                case 'F':
                    if (strcmp(&(field_name[1]), "utureRequested") == 0)
                        return &fieldGeneratorFutureRequested;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sDateTimeRequested") == 0)
                        return &fieldGeneratorIsDateTimeRequested;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "astRequested") == 0)
                        return &fieldGeneratorPastRequested;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedType") == 0)
                        return &fieldGeneratorRequestedType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDateAndTimeKind("field \"DateAndTimeKind\" of the SunriseSunsetTimeConversationState class"), fieldGeneratorMapLocation("field \"MapLocation\" of the SunriseSunsetTimeConversationState class", ignore_extras), fieldGeneratorRequestedType("field \"RequestedType\" of the SunriseSunsetTimeConversationState class"), fieldGeneratorDateTimeRangeSpec("field \"DateTimeRangeSpec\" of the SunriseSunsetTimeConversationState class", ignore_extras), fieldGeneratorIsDateTimeRequested("field \"IsDateTimeRequested\" of the SunriseSunsetTimeConversationState class"), fieldGeneratorFutureRequested("field \"FutureRequested\" of the SunriseSunsetTimeConversationState class"), fieldGeneratorPastRequested("field \"PastRequested\" of the SunriseSunsetTimeConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SunriseSunsetTimeConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDateAndTimeKind.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorRequestedType.reset();
            fieldGeneratorDateTimeRangeSpec.reset();
            fieldGeneratorIsDateTimeRequested.reset();
            fieldGeneratorFutureRequested.reset();
            fieldGeneratorPastRequested.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SUNRISESUNSETTIMECONVERSATIONSTATEJSON_H */
