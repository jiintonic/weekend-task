/* file "WeatherConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WeatherConversationStateJSON.h"

#include "WeatherConversationStateJSON.h"


WeatherConversationStateJSON::WeatherConversationStateJSON(const WeatherConversationStateJSON &)
  {
    assert(false);
  }

WeatherConversationStateJSON &WeatherConversationStateJSON::operator=(const WeatherConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WeatherConversationStateJSON::fromJSONWeatherKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherKind of WeatherConversationStateJSON is not a string.");
    setWeatherKind(std::string(json_string->getData()));
  }

void WeatherConversationStateJSON::fromJSONWeatherQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WeatherQueryType of WeatherConversationStateJSON is not a string.");
    setWeatherQueryType(std::string(json_string->getData()));
  }

void WeatherConversationStateJSON::fromJSONRequestedAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAttribute of WeatherConversationStateJSON is not a string.");
    setRequestedAttribute(std::string(json_string->getData()));
  }

void WeatherConversationStateJSON::fromJSONRequestedAlmanacAttribute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedAlmanacAttribute of WeatherConversationStateJSON is not a string.");
    setRequestedAlmanacAttribute(std::string(json_string->getData()));
  }

void WeatherConversationStateJSON::fromJSONMapLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMapLocation(convert_classy);
    convert_classy->remove_reference();
  }

void WeatherConversationStateJSON::fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeRangeSpecJSON *convert_classy = DateTimeRangeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeRange(convert_classy);
    convert_classy->remove_reference();
  }

void WeatherConversationStateJSON::fromJSONUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Units of WeatherConversationStateJSON is not a string.");
    setUnits(std::string(json_string->getData()));
  }

void WeatherConversationStateJSON::fromJSONIsSearchQuery(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field IsSearchQuery of WeatherConversationStateJSON is not true for false.");
          }
      }
    setIsSearchQuery(the_bool);
  }

void WeatherConversationStateJSON::fromJSONDailyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DailyForecastExplicitlyRequested of WeatherConversationStateJSON is not true for false.");
          }
      }
    setDailyForecastExplicitlyRequested(the_bool);
  }

void WeatherConversationStateJSON::fromJSONHourlyForecastExplicitlyRequested(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field HourlyForecastExplicitlyRequested of WeatherConversationStateJSON is not true for false.");
          }
      }
    setHourlyForecastExplicitlyRequested(the_bool);
  }

void WeatherConversationStateJSON::fromJSONSentenceType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SentenceType of WeatherConversationStateJSON is not a string.");
    setSentenceType(std::string(json_string->getData()));
  }

WeatherConversationStateJSON::WeatherConversationStateJSON(void) :
        flagHasWeatherKind(false),
        flagHasWeatherQueryType(false),
        flagHasRequestedAttribute(false),
        flagHasRequestedAlmanacAttribute(false),
        flagHasMapLocation(false),
        flagHasDateTimeRange(false),
        flagHasUnits(false),
        flagHasIsSearchQuery(false),
        flagHasDailyForecastExplicitlyRequested(false),
        flagHasHourlyForecastExplicitlyRequested(false),
        flagHasSentenceType(false)
  {
    extraIndex = create_string_index();
  }

WeatherConversationStateJSON::~WeatherConversationStateJSON(void)
  {
    if (flagHasMapLocation)
      {
        storeMapLocation->remove_reference();
      }
    if (flagHasDateTimeRange)
      {
        storeDateTimeRange->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WeatherConversationStateJSON::hasWeatherKind(void) const
  {
    return flagHasWeatherKind;
  }

std::string WeatherConversationStateJSON::getWeatherKind(void)
  {
    assert(flagHasWeatherKind);
    return storeWeatherKind;
  }

const std::string WeatherConversationStateJSON::getWeatherKind(void) const
  {
    assert(flagHasWeatherKind);
    return storeWeatherKind;
  }

bool WeatherConversationStateJSON::hasWeatherQueryType(void) const
  {
    return flagHasWeatherQueryType;
  }

std::string WeatherConversationStateJSON::getWeatherQueryType(void)
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

const std::string WeatherConversationStateJSON::getWeatherQueryType(void) const
  {
    assert(flagHasWeatherQueryType);
    return storeWeatherQueryType;
  }

bool WeatherConversationStateJSON::hasRequestedAttribute(void) const
  {
    return flagHasRequestedAttribute;
  }

std::string WeatherConversationStateJSON::getRequestedAttribute(void)
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

const std::string WeatherConversationStateJSON::getRequestedAttribute(void) const
  {
    assert(flagHasRequestedAttribute);
    return storeRequestedAttribute;
  }

bool WeatherConversationStateJSON::hasRequestedAlmanacAttribute(void) const
  {
    return flagHasRequestedAlmanacAttribute;
  }

std::string WeatherConversationStateJSON::getRequestedAlmanacAttribute(void)
  {
    assert(flagHasRequestedAlmanacAttribute);
    return storeRequestedAlmanacAttribute;
  }

const std::string WeatherConversationStateJSON::getRequestedAlmanacAttribute(void) const
  {
    assert(flagHasRequestedAlmanacAttribute);
    return storeRequestedAlmanacAttribute;
  }

bool WeatherConversationStateJSON::hasMapLocation(void) const
  {
    return flagHasMapLocation;
  }

MapLocationJSON * WeatherConversationStateJSON::getMapLocation(void)
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

const MapLocationJSON * WeatherConversationStateJSON::getMapLocation(void) const
  {
    assert(flagHasMapLocation);
    return storeMapLocation;
  }

bool WeatherConversationStateJSON::hasDateTimeRange(void) const
  {
    return flagHasDateTimeRange;
  }

DateTimeRangeSpecJSON * WeatherConversationStateJSON::getDateTimeRange(void)
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

const DateTimeRangeSpecJSON * WeatherConversationStateJSON::getDateTimeRange(void) const
  {
    assert(flagHasDateTimeRange);
    return storeDateTimeRange;
  }

bool WeatherConversationStateJSON::hasUnits(void) const
  {
    return flagHasUnits;
  }

std::string WeatherConversationStateJSON::getUnits(void)
  {
    assert(flagHasUnits);
    return storeUnits;
  }

const std::string WeatherConversationStateJSON::getUnits(void) const
  {
    assert(flagHasUnits);
    return storeUnits;
  }

bool WeatherConversationStateJSON::hasIsSearchQuery(void) const
  {
    return flagHasIsSearchQuery;
  }

bool WeatherConversationStateJSON::getIsSearchQuery(void)
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

const bool WeatherConversationStateJSON::getIsSearchQuery(void) const
  {
    assert(flagHasIsSearchQuery);
    return storeIsSearchQuery;
  }

bool WeatherConversationStateJSON::hasDailyForecastExplicitlyRequested(void) const
  {
    return flagHasDailyForecastExplicitlyRequested;
  }

bool WeatherConversationStateJSON::getDailyForecastExplicitlyRequested(void)
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

const bool WeatherConversationStateJSON::getDailyForecastExplicitlyRequested(void) const
  {
    assert(flagHasDailyForecastExplicitlyRequested);
    return storeDailyForecastExplicitlyRequested;
  }

bool WeatherConversationStateJSON::hasHourlyForecastExplicitlyRequested(void) const
  {
    return flagHasHourlyForecastExplicitlyRequested;
  }

bool WeatherConversationStateJSON::getHourlyForecastExplicitlyRequested(void)
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

const bool WeatherConversationStateJSON::getHourlyForecastExplicitlyRequested(void) const
  {
    assert(flagHasHourlyForecastExplicitlyRequested);
    return storeHourlyForecastExplicitlyRequested;
  }

bool WeatherConversationStateJSON::hasSentenceType(void) const
  {
    return flagHasSentenceType;
  }

std::string WeatherConversationStateJSON::getSentenceType(void)
  {
    assert(flagHasSentenceType);
    return storeSentenceType;
  }

const std::string WeatherConversationStateJSON::getSentenceType(void) const
  {
    assert(flagHasSentenceType);
    return storeSentenceType;
  }

WeatherConversationStateJSON *WeatherConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WeatherConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WeatherConversationStateJSON>, WeatherConversationStateJSON *, bool> generator("Type WeatherConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
