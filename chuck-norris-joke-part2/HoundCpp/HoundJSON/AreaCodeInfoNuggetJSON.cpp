/* file "AreaCodeInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AreaCodeInfoNuggetJSON.h"

#include "AreaCodeInfoNuggetJSON.h"
#include "AreaCodeCityOfCodeInfoNuggetJSON.h"
#include "AreaCodeOfCityInfoNuggetJSON.h"


AreaCodeInfoNuggetJSON::AreaCodeInfoNuggetJSON(const AreaCodeInfoNuggetJSON &)
  {
    assert(false);
  }

AreaCodeInfoNuggetJSON &AreaCodeInfoNuggetJSON::operator=(const AreaCodeInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

AreaCodeInfoNuggetJSON::AreaCodeInfoNuggetJSON(void)
  {
  }

AreaCodeInfoNuggetJSON::~AreaCodeInfoNuggetJSON(void)
  {
  }

const char *AreaCodeInfoNuggetJSON::getNuggetKind(void) const
  {
    return "AreaCodeInfoNugget";
  }

AreaCodeInfoNuggetJSON *AreaCodeInfoNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "AreaCode", 8) == 0)
      {
        switch ((unsigned char)(key[8]))
          {
            case 'C':
                if (strcmp(&(key[9]), "ityOfCodeInfoNugget") == 0)
                    return new AreaCodeCityOfCodeInfoNuggetJSON();
                break;
            case 'O':
                if (strcmp(&(key[9]), "fCityInfoNugget") == 0)
                    return new AreaCodeOfCityInfoNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericAreaCodeInfoNuggetJSON : public AreaCodeInfoNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericAreaCodeInfoNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericAreaCodeInfoNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getAreaCodeInfoNuggetKind(void) const  { return key.c_str(); }
        size_t extraAreaCodeInfoNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraAreaCodeInfoNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraAreaCodeInfoNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraAreaCodeInfoNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraAreaCodeInfoNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraAreaCodeInfoNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraAreaCodeInfoNuggetLookup(key);
            if (old_field == NULL)
              {
                extraAreaCodeInfoNuggetAppendPair(key, new_component);
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
    return new GenericAreaCodeInfoNuggetJSON(key);
  }
AreaCodeInfoNuggetJSON *AreaCodeInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AreaCodeInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AreaCodeInfoNuggetJSON>, AreaCodeInfoNuggetJSON *, bool> generator("Type AreaCodeInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
