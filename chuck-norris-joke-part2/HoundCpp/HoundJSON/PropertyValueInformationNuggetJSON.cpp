/* file "PropertyValueInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PropertyValueInformationNuggetJSON.h"

#include "PropertyValueInformationNuggetJSON.h"
#include "AmountPropertyInformationNuggetJSON.h"


PropertyValueInformationNuggetJSON::PropertyValueInformationNuggetJSON(const PropertyValueInformationNuggetJSON &)
  {
    assert(false);
  }

PropertyValueInformationNuggetJSON &PropertyValueInformationNuggetJSON::operator=(const PropertyValueInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *PropertyValueInformationNuggetJSON::extraBaseToJSON(void) const
  {
    JSONValueHandler handler_Base;
    storeBase->write_as_json(&handler_Base);
    handler_Base.result->add_reference();
    return handler_Base.result;
  }

JSONValue *PropertyValueInformationNuggetJSON::extraPropertyToJSON(void) const
  {
    JSONValueHandler handler_Property;
    storeProperty->write_as_json(&handler_Property);
    handler_Property.result->add_reference();
    return handler_Property.result;
  }

JSONValue *PropertyValueInformationNuggetJSON::extraValueSpokenLabelToJSON(void) const
  {
    JSONStringValue *generated_string_ValueSpokenLabel = new JSONStringValue(storeValueSpokenLabel.c_str());
    return generated_string_ValueSpokenLabel;
  }

JSONValue *PropertyValueInformationNuggetJSON::extraValueWrittenLabelToJSON(void) const
  {
    JSONStringValue *generated_string_ValueWrittenLabel = new JSONStringValue(storeValueWrittenLabel.c_str());
    return generated_string_ValueWrittenLabel;
  }

void PropertyValueInformationNuggetJSON::fromJSONBase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    GeneralizedThingJSON *convert_classy = GeneralizedThingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBase(convert_classy);
    convert_classy->remove_reference();
  }

void PropertyValueInformationNuggetJSON::fromJSONProperty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PropertyJSON *convert_classy = PropertyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setProperty(convert_classy);
    convert_classy->remove_reference();
  }

void PropertyValueInformationNuggetJSON::fromJSONValueSpokenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ValueSpokenLabel of PropertyValueInformationNuggetJSON is not a string.");
    setValueSpokenLabel(std::string(json_string->getData()));
  }

void PropertyValueInformationNuggetJSON::fromJSONValueWrittenLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ValueWrittenLabel of PropertyValueInformationNuggetJSON is not a string.");
    setValueWrittenLabel(std::string(json_string->getData()));
  }

PropertyValueInformationNuggetJSON::PropertyValueInformationNuggetJSON(void) :
        flagHasBase(false),
        flagHasProperty(false),
        flagHasValueSpokenLabel(false),
        flagHasValueWrittenLabel(false)
  {
  }

PropertyValueInformationNuggetJSON::~PropertyValueInformationNuggetJSON(void)
  {
    if (flagHasBase)
      {
        storeBase->remove_reference();
      }
    if (flagHasProperty)
      {
        storeProperty->remove_reference();
      }
  }

const char *PropertyValueInformationNuggetJSON::getNuggetKind(void) const
  {
    return "PropertyValue";
  }

bool PropertyValueInformationNuggetJSON::hasBase(void) const
  {
    return flagHasBase;
  }

GeneralizedThingJSON * PropertyValueInformationNuggetJSON::getBase(void)
  {
    assert(flagHasBase);
    return storeBase;
  }

const GeneralizedThingJSON * PropertyValueInformationNuggetJSON::getBase(void) const
  {
    assert(flagHasBase);
    return storeBase;
  }

bool PropertyValueInformationNuggetJSON::hasProperty(void) const
  {
    return flagHasProperty;
  }

PropertyJSON * PropertyValueInformationNuggetJSON::getProperty(void)
  {
    assert(flagHasProperty);
    return storeProperty;
  }

const PropertyJSON * PropertyValueInformationNuggetJSON::getProperty(void) const
  {
    assert(flagHasProperty);
    return storeProperty;
  }

bool PropertyValueInformationNuggetJSON::hasValueSpokenLabel(void) const
  {
    return flagHasValueSpokenLabel;
  }

std::string PropertyValueInformationNuggetJSON::getValueSpokenLabel(void)
  {
    assert(flagHasValueSpokenLabel);
    return storeValueSpokenLabel;
  }

const std::string PropertyValueInformationNuggetJSON::getValueSpokenLabel(void) const
  {
    assert(flagHasValueSpokenLabel);
    return storeValueSpokenLabel;
  }

bool PropertyValueInformationNuggetJSON::hasValueWrittenLabel(void) const
  {
    return flagHasValueWrittenLabel;
  }

std::string PropertyValueInformationNuggetJSON::getValueWrittenLabel(void)
  {
    assert(flagHasValueWrittenLabel);
    return storeValueWrittenLabel;
  }

const std::string PropertyValueInformationNuggetJSON::getValueWrittenLabel(void) const
  {
    assert(flagHasValueWrittenLabel);
    return storeValueWrittenLabel;
  }

PropertyValueInformationNuggetJSON *PropertyValueInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strcmp(key, "AmountProperty") == 0)
        return new AmountPropertyInformationNuggetJSON();

    class GenericPropertyValueInformationNuggetJSON : public PropertyValueInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericPropertyValueInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericPropertyValueInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getPropertyValueKind(void) const  { return key.c_str(); }
        size_t extraPropertyValueInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraPropertyValueInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraPropertyValueInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraPropertyValueInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraPropertyValueInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraPropertyValueInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraPropertyValueInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraPropertyValueInformationNuggetAppendPair(key, new_component);
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
    return new GenericPropertyValueInformationNuggetJSON(key);
  }
PropertyValueInformationNuggetJSON *PropertyValueInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PropertyValueInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PropertyValueInformationNuggetJSON>, PropertyValueInformationNuggetJSON *, bool> generator("Type PropertyValueInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
