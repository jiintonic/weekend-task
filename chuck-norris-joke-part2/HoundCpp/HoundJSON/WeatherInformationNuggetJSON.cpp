/* file "WeatherInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WeatherInformationNuggetJSON.h"

#include "WeatherInformationNuggetJSON.h"
#include "ShowWeatherAlmanacInformationNuggetJSON.h"
#include "ShowWeatherCurrentConditionsInformationNuggetJSON.h"
#include "ShowWeatherForecastDailyInformationNuggetJSON.h"
#include "ShowWeatherForecastHourlyInformationNuggetJSON.h"
#include "ShowWeatherHistoryInformationNuggetJSON.h"
#include "ShowWeatherPlannerInformationNuggetJSON.h"


WeatherInformationNuggetJSON::WeatherInformationNuggetJSON(const WeatherInformationNuggetJSON &)
  {
    assert(false);
  }

WeatherInformationNuggetJSON &WeatherInformationNuggetJSON::operator=(const WeatherInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

WeatherInformationNuggetJSON::WeatherInformationNuggetJSON(void)
  {
  }

WeatherInformationNuggetJSON::~WeatherInformationNuggetJSON(void)
  {
  }

const char *WeatherInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Weather";
  }

WeatherInformationNuggetJSON *WeatherInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "ShowWeather", 11) == 0)
      {
        switch ((unsigned char)(key[11]))
          {
            case 'A':
                if (strcmp(&(key[12]), "lmanac") == 0)
                    return new ShowWeatherAlmanacInformationNuggetJSON();
                break;
            case 'C':
                if (strcmp(&(key[12]), "urrentConditions") == 0)
                    return new ShowWeatherCurrentConditionsInformationNuggetJSON();
                break;
            case 'F':
                if (strncmp(&(key[12]), "orecast", 7) == 0)
                  {
                    switch ((unsigned char)(key[19]))
                      {
                        case 'D':
                            if (strcmp(&(key[20]), "aily") == 0)
                                return new ShowWeatherForecastDailyInformationNuggetJSON();
                            break;
                        case 'H':
                            if (strcmp(&(key[20]), "ourly") == 0)
                                return new ShowWeatherForecastHourlyInformationNuggetJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(key[12]), "istory") == 0)
                    return new ShowWeatherHistoryInformationNuggetJSON();
                break;
            case 'P':
                if (strcmp(&(key[12]), "lanner") == 0)
                    return new ShowWeatherPlannerInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericWeatherInformationNuggetJSON : public WeatherInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericWeatherInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericWeatherInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getWeatherNuggetKind(void) const  { return key.c_str(); }
        size_t extraWeatherInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraWeatherInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraWeatherInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraWeatherInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraWeatherInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraWeatherInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraWeatherInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraWeatherInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraWeatherInformationNuggetAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
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
      };
    return new GenericWeatherInformationNuggetJSON(key);
  }
WeatherInformationNuggetJSON *WeatherInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WeatherInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WeatherInformationNuggetJSON>, WeatherInformationNuggetJSON *, bool> generator("Type WeatherInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }