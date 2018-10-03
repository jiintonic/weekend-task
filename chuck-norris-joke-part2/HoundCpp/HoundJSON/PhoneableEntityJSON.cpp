/* file "PhoneableEntityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PhoneableEntityJSON.h"

#include "PhoneableEntityJSON.h"


PhoneableEntityJSON::PhoneableEntityJSON(const PhoneableEntityJSON &)
  {
    assert(false);
  }

PhoneableEntityJSON &PhoneableEntityJSON::operator=(const PhoneableEntityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PhoneableEntityJSON::fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenLabel of PhoneableEntityJSON is not a string.");
    setSpokenLabel(std::string(json_string->getData()));
  }

void PhoneableEntityJSON::fromJSONWrittenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenLabel of PhoneableEntityJSON is not a string.");
    setWrittenLabel(std::string(json_string->getData()));
  }

PhoneableEntityJSON::PhoneableEntityJSON(void) :
        flagHasSpokenLabel(false),
        flagHasWrittenLabel(false)
  {
  }

PhoneableEntityJSON::~PhoneableEntityJSON(void)
  {
  }

bool PhoneableEntityJSON::hasSpokenLabel(void) const
  {
    return flagHasSpokenLabel;
  }

std::string PhoneableEntityJSON::getSpokenLabel(void)
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

const std::string PhoneableEntityJSON::getSpokenLabel(void) const
  {
    assert(flagHasSpokenLabel);
    return storeSpokenLabel;
  }

bool PhoneableEntityJSON::hasWrittenLabel(void) const
  {
    return flagHasWrittenLabel;
  }

std::string PhoneableEntityJSON::getWrittenLabel(void)
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

const std::string PhoneableEntityJSON::getWrittenLabel(void) const
  {
    assert(flagHasWrittenLabel);
    return storeWrittenLabel;
  }

PhoneableEntityJSON *PhoneableEntityJSON::createForKey(const char *key, string_index *other_field_index)
  {

    class GenericPhoneableEntityJSON : public PhoneableEntityJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericPhoneableEntityJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericPhoneableEntityJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getKind(void) const  { return key.c_str(); }
        size_t extraPhoneableEntityComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraPhoneableEntityComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraPhoneableEntityComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraPhoneableEntityComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraPhoneableEntityLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraPhoneableEntityLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraPhoneableEntityAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraPhoneableEntitySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraPhoneableEntityLookup(key);
            if (old_field == NULL)
              {
                extraPhoneableEntityAppendPair(key, new_component);
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
    return new GenericPhoneableEntityJSON(key);
  }
PhoneableEntityJSON *PhoneableEntityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PhoneableEntityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PhoneableEntityJSON>, PhoneableEntityJSON *, bool> generator("Type PhoneableEntity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
