/* file "InformationNuggetIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "InformationNuggetIntentJSON.h"

#include "InformationNuggetIntentJSON.h"
#include "HoundWeatherInformationNuggetIntentJSON.h"
#include "WeatherInformationNuggetIntentJSON.h"
#include "UserMemoryIntentJSON.h"


InformationNuggetIntentJSON::InformationNuggetIntentJSON(const InformationNuggetIntentJSON &)
  {
    assert(false);
  }

InformationNuggetIntentJSON &InformationNuggetIntentJSON::operator=(const InformationNuggetIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

InformationNuggetIntentJSON::InformationNuggetIntentJSON(void)
  {
  }

InformationNuggetIntentJSON::~InformationNuggetIntentJSON(void)
  {
  }

InformationNuggetIntentJSON *InformationNuggetIntentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'H':
            if (strcmp(&(key[1]), "oundWeather") == 0)
                return new HoundWeatherInformationNuggetIntentJSON();
            break;
        case 'U':
            if (strcmp(&(key[1]), "serMemory") == 0)
              {
                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UserMemoryIntentKind")));
                if (key_value == NULL)
                    throw("The `UserMemoryIntentKind' field is missing.");
                JSONStringValue *key_string_value = key_value->string_value();
                if (key_string_value == NULL)
                    throw("The `UserMemoryIntentKind' field has a non-string value.");
                return UserMemoryIntentJSON::createForKey(key_string_value->getData(), other_field_index);
              }
            break;
        case 'W':
            if (strcmp(&(key[1]), "eather") == 0)
                return new WeatherInformationNuggetIntentJSON();
            break;
        default:
            break;
      }

    class GenericInformationNuggetIntentJSON : public InformationNuggetIntentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericInformationNuggetIntentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericInformationNuggetIntentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getNuggetIntentKind(void) const  { return key.c_str(); }
        size_t extraInformationNuggetIntentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraInformationNuggetIntentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraInformationNuggetIntentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraInformationNuggetIntentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraInformationNuggetIntentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraInformationNuggetIntentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraInformationNuggetIntentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraInformationNuggetIntentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraInformationNuggetIntentLookup(key);
            if (old_field == NULL)
              {
                extraInformationNuggetIntentAppendPair(key, new_component);
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
    return new GenericInformationNuggetIntentJSON(key);
  }
InformationNuggetIntentJSON *InformationNuggetIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    InformationNuggetIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<InformationNuggetIntentJSON>, InformationNuggetIntentJSON *, bool> generator("Type InformationNuggetIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
