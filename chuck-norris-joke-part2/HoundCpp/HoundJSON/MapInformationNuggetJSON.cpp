/* file "MapInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MapInformationNuggetJSON.h"

#include "MapInformationNuggetJSON.h"
#include "ShowDirectionsInformationNuggetJSON.h"
#include "ShowMapInformationNuggetJSON.h"


MapInformationNuggetJSON::MapInformationNuggetJSON(const MapInformationNuggetJSON &)
  {
    assert(false);
  }

MapInformationNuggetJSON &MapInformationNuggetJSON::operator=(const MapInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MapInformationNuggetJSON::MapInformationNuggetJSON(void)
  {
  }

MapInformationNuggetJSON::~MapInformationNuggetJSON(void)
  {
  }

const char *MapInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Map";
  }

MapInformationNuggetJSON *MapInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Show", 4) == 0)
      {
        switch ((unsigned char)(key[4]))
          {
            case 'D':
                if (strcmp(&(key[5]), "irections") == 0)
                    return new ShowDirectionsInformationNuggetJSON();
                break;
            case 'M':
                if (strcmp(&(key[5]), "ap") == 0)
                    return new ShowMapInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericMapInformationNuggetJSON : public MapInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMapInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMapInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMapNuggetKind(void) const  { return key.c_str(); }
        size_t extraMapInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMapInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMapInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMapInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMapInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMapInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMapInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMapInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMapInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraMapInformationNuggetAppendPair(key, new_component);
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
    return new GenericMapInformationNuggetJSON(key);
  }
MapInformationNuggetJSON *MapInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MapInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MapInformationNuggetJSON>, MapInformationNuggetJSON *, bool> generator("Type MapInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
