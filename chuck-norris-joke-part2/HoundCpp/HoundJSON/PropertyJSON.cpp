/* file "PropertyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PropertyJSON.h"

#include "PropertyJSON.h"
#include "CoreUnitsPropertyJSON.h"


PropertyJSON::PropertyJSON(const PropertyJSON &)
  {
    assert(false);
  }

PropertyJSON &PropertyJSON::operator=(const PropertyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PropertyJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of PropertyJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void PropertyJSON::fromJSONWrittenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenLabel of PropertyJSON is not a string.");
    setWrittenLabel(std::string(json_string->getData()));
  }

void PropertyJSON::fromJSONSpokenLabelSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabelSSML of PropertyJSON is not a string.");
    setSpokenLabelSSML(std::string(json_string->getData()));
  }

PropertyJSON::PropertyJSON(void) :
        flagHasSpokenLabel(false),
        flagHasWrittenLabel(false),
        flagHasSpokenLabelSSML(false)
  {
  }

PropertyJSON::~PropertyJSON(void)
  {
  }

bool PropertyJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string PropertyJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string PropertyJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool PropertyJSON::hasWrittenLabel(void) const
  {
    return flagHasWrittenLabel;
  }

std::string PropertyJSON::getWrittenLabel(void)
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

const std::string PropertyJSON::getWrittenLabel(void) const
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

bool PropertyJSON::hasSpokenLabelSSML(void) const
  {
    return flagHasSpokenLabelSSML;
  }

std::string PropertyJSON::getSpokenLabelSSML(void)
  {
    assert(flagHasSpokenLabelSSML);
    return storeSpokenLabelSSML;
  }

const std::string PropertyJSON::getSpokenLabelSSML(void) const
  {
    assert(flagHasSpokenLabelSSML);
    return storeSpokenLabelSSML;
  }

PropertyJSON *PropertyJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strcmp(key, "Core") == 0)
        return new CoreUnitsPropertyJSON();

    class GenericPropertyJSON : public PropertyJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericPropertyJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericPropertyJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getPropertyKind(void) const  { return key.c_str(); }
        size_t extraPropertyComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraPropertyComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraPropertyComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraPropertyComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraPropertyLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraPropertyLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraPropertyAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraPropertySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraPropertyLookup(key);
            if (old_field == NULL)
              {
                extraPropertyAppendPair(key, new_component);
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
    return new GenericPropertyJSON(key);
  }
PropertyJSON *PropertyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PropertyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PropertyJSON>, PropertyJSON *, bool> generator("Type Property", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
