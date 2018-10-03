/* file "GeneralizedThingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeneralizedThingJSON.h"

#include "GeneralizedThingJSON.h"
#include "SolarSystemBodyJSON.h"
#include "AmountPropertyJSON.h"


GeneralizedThingJSON::GeneralizedThingJSON(const GeneralizedThingJSON &)
  {
    assert(false);
  }

GeneralizedThingJSON &GeneralizedThingJSON::operator=(const GeneralizedThingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeneralizedThingJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of GeneralizedThingJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void GeneralizedThingJSON::fromJSONWrittenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenLabel of GeneralizedThingJSON is not a string.");
    setWrittenLabel(std::string(json_string->getData()));
  }

void GeneralizedThingJSON::fromJSONSpokenLabelSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabelSSML of GeneralizedThingJSON is not a string.");
    setSpokenLabelSSML(std::string(json_string->getData()));
  }

GeneralizedThingJSON::GeneralizedThingJSON(void) :
        flagHasSpokenLabel(false),
        flagHasWrittenLabel(false),
        flagHasSpokenLabelSSML(false)
  {
  }

GeneralizedThingJSON::~GeneralizedThingJSON(void)
  {
  }

bool GeneralizedThingJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string GeneralizedThingJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string GeneralizedThingJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool GeneralizedThingJSON::hasWrittenLabel(void) const
  {
    return flagHasWrittenLabel;
  }

std::string GeneralizedThingJSON::getWrittenLabel(void)
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

const std::string GeneralizedThingJSON::getWrittenLabel(void) const
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

bool GeneralizedThingJSON::hasSpokenLabelSSML(void) const
  {
    return flagHasSpokenLabelSSML;
  }

std::string GeneralizedThingJSON::getSpokenLabelSSML(void)
  {
    assert(flagHasSpokenLabelSSML);
    return storeSpokenLabelSSML;
  }

const std::string GeneralizedThingJSON::getSpokenLabelSSML(void) const
  {
    assert(flagHasSpokenLabelSSML);
    return storeSpokenLabelSSML;
  }

GeneralizedThingJSON *GeneralizedThingJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "mountProperty") == 0)
                return new AmountPropertyJSON();
            break;
        case 'S':
            if (strcmp(&(key[1]), "olarSystemBody") == 0)
                return new SolarSystemBodyJSON();
            break;
        default:
            break;
      }

    class GenericGeneralizedThingJSON : public GeneralizedThingJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericGeneralizedThingJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericGeneralizedThingJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getThingKind(void) const  { return key.c_str(); }
        size_t extraGeneralizedThingComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraGeneralizedThingComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraGeneralizedThingComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraGeneralizedThingComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraGeneralizedThingLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraGeneralizedThingLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraGeneralizedThingAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraGeneralizedThingSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraGeneralizedThingLookup(key);
            if (old_field == NULL)
              {
                extraGeneralizedThingAppendPair(key, new_component);
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
    return new GenericGeneralizedThingJSON(key);
  }
GeneralizedThingJSON *GeneralizedThingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeneralizedThingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeneralizedThingJSON>, GeneralizedThingJSON *, bool> generator("Type GeneralizedThing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
