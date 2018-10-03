/* file "WeatherConversationStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WEATHERCONVERSATIONSTATEJSON_H
#define WEATHERCONVERSATIONSTATEJSON_H

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


class WeatherConversationStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasWeatherKind;
    std::string storeWeatherKind;
    bool flagHasWeatherQueryType;
    std::string storeWeatherQueryType;
    bool flagHasRequestedAttribute;
    std::string storeRequestedAttribute;
    bool flagHasRequestedAlmanacAttribute;
    std::string storeRequestedAlmanacAttribute;
    bool flagHasMapLocation;
    MapLocationJSON * storeMapLocation;
    bool flagHasDateTimeRange;
    DateTimeRangeSpecJSON * storeDateTimeRange;
    bool flagHasUnits;
    std::string storeUnits;
    bool flagHasIsSearchQuery;
    bool storeIsSearchQuery;
    bool flagHasDailyForecastExplicitlyRequested;
    bool storeDailyForecastExplicitlyRequested;
    bool flagHasHourlyForecastExplicitlyRequested;
    bool storeHourlyForecastExplicitlyRequested;
    bool flagHasSentenceType;
    std::string storeSentenceType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WeatherConversationStateJSON(const WeatherConversationStateJSON &);
    WeatherConversationStateJSON & operator=(const WeatherConversationStateJSON &other);

    void  fromJSONWeatherKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWeatherQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedAlmanacAttribute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDailyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHourlyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSentenceType(JSONValue *json_value, bool ignore_extras = false);


  public:
    WeatherConversationStateJSON(void);
    virtual ~WeatherConversationStateJSON(void);
    bool  hasWeatherKind(void) const;
    std::string  getWeatherKind(void);
    const std::string  getWeatherKind(void) const;
    bool  hasWeatherQueryType(void) const;
    std::string  getWeatherQueryType(void);
    const std::string  getWeatherQueryType(void) const;
    bool  hasRequestedAttribute(void) const;
    std::string  getRequestedAttribute(void);
    const std::string  getRequestedAttribute(void) const;
    bool  hasRequestedAlmanacAttribute(void) const;
    std::string  getRequestedAlmanacAttribute(void);
    const std::string  getRequestedAlmanacAttribute(void) const;
    bool  hasMapLocation(void) const;
    MapLocationJSON *  getMapLocation(void);
    const MapLocationJSON *  getMapLocation(void) const;
    bool  hasDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDateTimeRange(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;
    bool  hasIsSearchQuery(void) const;
    bool  getIsSearchQuery(void);
    const bool  getIsSearchQuery(void) const;
    bool  hasDailyForecastExplicitlyRequested(void) const;
    bool  getDailyForecastExplicitlyRequested(void);
    const bool  getDailyForecastExplicitlyRequested(void) const;
    bool  hasHourlyForecastExplicitlyRequested(void) const;
    bool  getHourlyForecastExplicitlyRequested(void);
    const bool  getHourlyForecastExplicitlyRequested(void) const;
    bool  hasSentenceType(void) const;
    std::string  getSentenceType(void);
    const std::string  getSentenceType(void) const;

    virtual size_t extraWeatherConversationStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWeatherConversationStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWeatherConversationStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWeatherConversationStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWeatherConversationStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWeatherConversationStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setWeatherKind(std::string new_value)
      {
        flagHasWeatherKind = true;
        storeWeatherKind = new_value;
      }
    void unsetWeatherKind(void)
      {
        flagHasWeatherKind = false;
      }
    void setWeatherQueryType(std::string new_value)
      {
        flagHasWeatherQueryType = true;
        storeWeatherQueryType = new_value;
      }
    void unsetWeatherQueryType(void)
      {
        flagHasWeatherQueryType = false;
      }
    void setRequestedAttribute(std::string new_value)
      {
        flagHasRequestedAttribute = true;
        storeRequestedAttribute = new_value;
      }
    void unsetRequestedAttribute(void)
      {
        flagHasRequestedAttribute = false;
      }
    void setRequestedAlmanacAttribute(std::string new_value)
      {
        flagHasRequestedAlmanacAttribute = true;
        storeRequestedAlmanacAttribute = new_value;
      }
    void unsetRequestedAlmanacAttribute(void)
      {
        flagHasRequestedAlmanacAttribute = false;
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
    void setDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = true;
        storeDateTimeRange = new_value;
      }
    void unsetDateTimeRange(void)
      {
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = false;
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
    void setIsSearchQuery(bool new_value)
      {
        flagHasIsSearchQuery = true;
        storeIsSearchQuery = new_value;
      }
    void unsetIsSearchQuery(void)
      {
        flagHasIsSearchQuery = false;
      }
    void setDailyForecastExplicitlyRequested(bool new_value)
      {
        flagHasDailyForecastExplicitlyRequested = true;
        storeDailyForecastExplicitlyRequested = new_value;
      }
    void unsetDailyForecastExplicitlyRequested(void)
      {
        flagHasDailyForecastExplicitlyRequested = false;
      }
    void setHourlyForecastExplicitlyRequested(bool new_value)
      {
        flagHasHourlyForecastExplicitlyRequested = true;
        storeHourlyForecastExplicitlyRequested = new_value;
      }
    void unsetHourlyForecastExplicitlyRequested(void)
      {
        flagHasHourlyForecastExplicitlyRequested = false;
      }
    void setSentenceType(std::string new_value)
      {
        flagHasSentenceType = true;
        storeSentenceType = new_value;
      }
    void unsetSentenceType(void)
      {
        flagHasSentenceType = false;
      }

    virtual void extraWeatherConversationStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWeatherConversationStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWeatherConversationStateLookup(key);
        if (old_field == NULL)
          {
            extraWeatherConversationStateAppendPair(key, new_component);
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
        if (flagHasWeatherKind)
          {
            handler->start_pair("WeatherKind");
            handler->string_value(storeWeatherKind);
          }
        if (flagHasWeatherQueryType)
          {
            handler->start_pair("WeatherQueryType");
            handler->string_value(storeWeatherQueryType);
          }
        if (flagHasRequestedAttribute)
          {
            handler->start_pair("RequestedAttribute");
            handler->string_value(storeRequestedAttribute);
          }
        if (flagHasRequestedAlmanacAttribute)
          {
            handler->start_pair("RequestedAlmanacAttribute");
            handler->string_value(storeRequestedAlmanacAttribute);
          }
        if (flagHasMapLocation)
          {
            handler->start_pair("MapLocation");
            storeMapLocation->write_as_json(handler);
          }
        if (flagHasDateTimeRange)
          {
            handler->start_pair("DateTimeRange");
            storeDateTimeRange->write_as_json(handler);
          }
        if (flagHasUnits)
          {
            handler->start_pair("Units");
            handler->string_value(storeUnits);
          }
        if (flagHasIsSearchQuery)
          {
            handler->start_pair("IsSearchQuery");
            handler->boolean_value(storeIsSearchQuery);
          }
        if (flagHasDailyForecastExplicitlyRequested)
          {
            handler->start_pair("DailyForecastExplicitlyRequested");
            handler->boolean_value(storeDailyForecastExplicitlyRequested);
          }
        if (flagHasHourlyForecastExplicitlyRequested)
          {
            handler->start_pair("HourlyForecastExplicitlyRequested");
            handler->boolean_value(storeHourlyForecastExplicitlyRequested);
          }
        if (flagHasSentenceType)
          {
            handler->start_pair("SentenceType");
            handler->string_value(storeSentenceType);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static WeatherConversationStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WeatherConversationStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WeatherConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WeatherConversationStateJSON>, WeatherConversationStateJSON *, bool> generator("Type WeatherConversationState", ignore_extras);
            parse_json_value(text, "Text for WeatherConversationStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WeatherConversationStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WeatherConversationStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WeatherConversationStateJSON>, WeatherConversationStateJSON *, bool> generator("Type WeatherConversationState", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherKind;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWeatherQueryType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAttribute;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestedAlmanacAttribute;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorMapLocation;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRange;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSearchQuery;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDailyForecastExplicitlyRequested;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHourlyForecastExplicitlyRequested;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSentenceType;
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
            WeatherConversationStateJSON *result = new WeatherConversationStateJSON();
            assert(result != NULL);
            RCHandle<WeatherConversationStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWeatherConversationStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WeatherConversationStateJSON *result)
          {
            if (fieldGeneratorWeatherKind.have_value)
              {
                result->setWeatherKind(fieldGeneratorWeatherKind.value);
                fieldGeneratorWeatherKind.have_value = false;
              }
            if (fieldGeneratorWeatherQueryType.have_value)
              {
                result->setWeatherQueryType(fieldGeneratorWeatherQueryType.value);
                fieldGeneratorWeatherQueryType.have_value = false;
              }
            if (fieldGeneratorRequestedAttribute.have_value)
              {
                result->setRequestedAttribute(fieldGeneratorRequestedAttribute.value);
                fieldGeneratorRequestedAttribute.have_value = false;
              }
            if (fieldGeneratorRequestedAlmanacAttribute.have_value)
              {
                result->setRequestedAlmanacAttribute(fieldGeneratorRequestedAlmanacAttribute.value);
                fieldGeneratorRequestedAlmanacAttribute.have_value = false;
              }
            if (fieldGeneratorMapLocation.have_value)
              {
                result->setMapLocation(fieldGeneratorMapLocation.value.referenced());
                fieldGeneratorMapLocation.have_value = false;
              }
            if (fieldGeneratorDateTimeRange.have_value)
              {
                result->setDateTimeRange(fieldGeneratorDateTimeRange.value.referenced());
                fieldGeneratorDateTimeRange.have_value = false;
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            if (fieldGeneratorIsSearchQuery.have_value)
              {
                result->setIsSearchQuery(fieldGeneratorIsSearchQuery.value);
                fieldGeneratorIsSearchQuery.have_value = false;
              }
            if (fieldGeneratorDailyForecastExplicitlyRequested.have_value)
              {
                result->setDailyForecastExplicitlyRequested(fieldGeneratorDailyForecastExplicitlyRequested.value);
                fieldGeneratorDailyForecastExplicitlyRequested.have_value = false;
              }
            if (fieldGeneratorHourlyForecastExplicitlyRequested.have_value)
              {
                result->setHourlyForecastExplicitlyRequested(fieldGeneratorHourlyForecastExplicitlyRequested.value);
                fieldGeneratorHourlyForecastExplicitlyRequested.have_value = false;
              }
            if (fieldGeneratorSentenceType.have_value)
              {
                result->setSentenceType(fieldGeneratorSentenceType.value);
                fieldGeneratorSentenceType.have_value = false;
              }
          }
        virtual void handle_result(WeatherConversationStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "lyForecastExplicitlyRequested") == 0)
                                    return &fieldGeneratorDailyForecastExplicitlyRequested;
                                break;
                            case 't':
                                if (strcmp(&(field_name[3]), "eTimeRange") == 0)
                                    return &fieldGeneratorDateTimeRange;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ourlyForecastExplicitlyRequested") == 0)
                        return &fieldGeneratorHourlyForecastExplicitlyRequested;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sSearchQuery") == 0)
                        return &fieldGeneratorIsSearchQuery;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apLocation") == 0)
                        return &fieldGeneratorMapLocation;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "equestedA", 9) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'l':
                                if (strcmp(&(field_name[11]), "manacAttribute") == 0)
                                    return &fieldGeneratorRequestedAlmanacAttribute;
                                break;
                            case 't':
                                if (strcmp(&(field_name[11]), "tribute") == 0)
                                    return &fieldGeneratorRequestedAttribute;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "entenceType") == 0)
                        return &fieldGeneratorSentenceType;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "eather", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'K':
                                if (strcmp(&(field_name[8]), "ind") == 0)
                                    return &fieldGeneratorWeatherKind;
                                break;
                            case 'Q':
                                if (strcmp(&(field_name[8]), "ueryType") == 0)
                                    return &fieldGeneratorWeatherQueryType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorWeatherKind("field \"WeatherKind\" of the WeatherConversationState class"), fieldGeneratorWeatherQueryType("field \"WeatherQueryType\" of the WeatherConversationState class"), fieldGeneratorRequestedAttribute("field \"RequestedAttribute\" of the WeatherConversationState class"), fieldGeneratorRequestedAlmanacAttribute("field \"RequestedAlmanacAttribute\" of the WeatherConversationState class"), fieldGeneratorMapLocation("field \"MapLocation\" of the WeatherConversationState class", ignore_extras), fieldGeneratorDateTimeRange("field \"DateTimeRange\" of the WeatherConversationState class", ignore_extras), fieldGeneratorUnits("field \"Units\" of the WeatherConversationState class"), fieldGeneratorIsSearchQuery("field \"IsSearchQuery\" of the WeatherConversationState class"), fieldGeneratorDailyForecastExplicitlyRequested("field \"DailyForecastExplicitlyRequested\" of the WeatherConversationState class"), fieldGeneratorHourlyForecastExplicitlyRequested("field \"HourlyForecastExplicitlyRequested\" of the WeatherConversationState class"), fieldGeneratorSentenceType("field \"SentenceType\" of the WeatherConversationState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WeatherConversationState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWeatherKind.reset();
            fieldGeneratorWeatherQueryType.reset();
            fieldGeneratorRequestedAttribute.reset();
            fieldGeneratorRequestedAlmanacAttribute.reset();
            fieldGeneratorMapLocation.reset();
            fieldGeneratorDateTimeRange.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorIsSearchQuery.reset();
            fieldGeneratorDailyForecastExplicitlyRequested.reset();
            fieldGeneratorHourlyForecastExplicitlyRequested.reset();
            fieldGeneratorSentenceType.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WEATHERCONVERSATIONSTATEJSON_H */
