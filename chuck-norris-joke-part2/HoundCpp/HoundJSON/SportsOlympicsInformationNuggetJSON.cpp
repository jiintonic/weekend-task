/* file "SportsOlympicsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsInformationNuggetJSON.h"

#include "SportsOlympicsInformationNuggetJSON.h"
#include "SportsOlympicsMedalStandingsInformationNuggetJSON.h"
#include "SportsOlympicsBasicAttributeInformationNuggetJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON.h"


SportsOlympicsInformationNuggetJSON::SportsOlympicsInformationNuggetJSON(const SportsOlympicsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsOlympicsInformationNuggetJSON &SportsOlympicsInformationNuggetJSON::operator=(const SportsOlympicsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsOlympicsInformationNuggetJSON::extraAttributionToJSON(void) const
  {
    JSONValueHandler handler_Attribution;
    storeAttribution->write_as_json(&handler_Attribution);
    handler_Attribution.result->add_reference();
    return handler_Attribution.result;
  }

JSONValue *SportsOlympicsInformationNuggetJSON::extraNowToJSON(void) const
  {
    JSONValueHandler handler_Now;
    storeNow->write_as_json(&handler_Now);
    handler_Now.result->add_reference();
    return handler_Now.result;
  }

void SportsOlympicsInformationNuggetJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsInformationNuggetJSON::fromJSONNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNow(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsInformationNuggetJSON::SportsOlympicsInformationNuggetJSON(void) :
        flagHasAttribution(false),
        flagHasNow(false)
  {
  }

SportsOlympicsInformationNuggetJSON::~SportsOlympicsInformationNuggetJSON(void)
  {
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    if (flagHasNow)
      {
        storeNow->remove_reference();
      }
  }

const char *SportsOlympicsInformationNuggetJSON::getNuggetKind(void) const
  {
    return "SportsOlympicsInformationNugget";
  }

bool SportsOlympicsInformationNuggetJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * SportsOlympicsInformationNuggetJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * SportsOlympicsInformationNuggetJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

bool SportsOlympicsInformationNuggetJSON::hasNow(void) const
  {
    return flagHasNow;
  }

DateAndOrTimeJSON * SportsOlympicsInformationNuggetJSON::getNow(void)
  {
    assert(flagHasNow);
    return storeNow;
  }

const DateAndOrTimeJSON * SportsOlympicsInformationNuggetJSON::getNow(void) const
  {
    assert(flagHasNow);
    return storeNow;
  }

SportsOlympicsInformationNuggetJSON *SportsOlympicsInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "SportsOlympics", 14) == 0)
      {
        switch ((unsigned char)(key[14]))
          {
            case 'B':
                if (strcmp(&(key[15]), "asicAttributeInformationNugget") == 0)
                    return new SportsOlympicsBasicAttributeInformationNuggetJSON();
                break;
            case 'E':
                if (strcmp(&(key[15]), "ventSchedulesAndResultsInformationNugget") == 0)
                    return new SportsOlympicsEventSchedulesAndResultsInformationNuggetJSON();
                break;
            case 'M':
                if (strcmp(&(key[15]), "edalStandingsInformationNugget") == 0)
                    return new SportsOlympicsMedalStandingsInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericSportsOlympicsInformationNuggetJSON : public SportsOlympicsInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsOlympicsInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsOlympicsInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsOlympicsInformationNuggetKind(void) const  { return key.c_str(); }
        size_t extraSportsOlympicsInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsOlympicsInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsOlympicsInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsOlympicsInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsOlympicsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsOlympicsInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsOlympicsInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraSportsOlympicsInformationNuggetAppendPair(key, new_component);
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
    return new GenericSportsOlympicsInformationNuggetJSON(key);
  }
SportsOlympicsInformationNuggetJSON *SportsOlympicsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsInformationNuggetJSON>, SportsOlympicsInformationNuggetJSON *, bool> generator("Type SportsOlympicsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
