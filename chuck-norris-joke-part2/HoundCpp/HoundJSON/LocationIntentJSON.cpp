/* file "LocationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocationIntentJSON.h"

#include "LocationIntentJSON.h"
#include "MapLocationIntentJSON.h"
#include "UserCurrentLocationIntentJSON.h"
#include "UserLocationIntentJSON.h"
#include "AstronomyLocationIntentJSON.h"
#include "AreaCodeIntentJSON.h"


LocationIntentJSON::LocationIntentJSON(const LocationIntentJSON &)
  {
    assert(false);
  }

LocationIntentJSON &LocationIntentJSON::operator=(const LocationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

LocationIntentJSON::LocationIntentJSON(void)
  {
  }

LocationIntentJSON::~LocationIntentJSON(void)
  {
  }

LocationIntentJSON *LocationIntentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            switch ((unsigned char)(key[1]))
              {
                case 'r':
                    if (strcmp(&(key[2]), "eaCode") == 0)
                        return new AreaCodeIntentJSON();
                    break;
                case 's':
                    if (strcmp(&(key[2]), "tronomy") == 0)
                        return new AstronomyLocationIntentJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'M':
            if (strcmp(&(key[1]), "apLocation") == 0)
                return new MapLocationIntentJSON();
            break;
        case 'U':
            if (strncmp(&(key[1]), "ser", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 0:
                        return new UserLocationIntentJSON();
                    case 'C':
                        if (strcmp(&(key[5]), "urrentLocation") == 0)
                            return new UserCurrentLocationIntentJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericLocationIntentJSON : public LocationIntentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericLocationIntentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericLocationIntentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getLocationIntentKind(void) const  { return key.c_str(); }
        size_t extraLocationIntentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraLocationIntentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraLocationIntentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraLocationIntentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraLocationIntentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraLocationIntentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraLocationIntentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraLocationIntentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraLocationIntentLookup(key);
            if (old_field == NULL)
              {
                extraLocationIntentAppendPair(key, new_component);
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
    return new GenericLocationIntentJSON(key);
  }
LocationIntentJSON *LocationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocationIntentJSON>, LocationIntentJSON *, bool> generator("Type LocationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
