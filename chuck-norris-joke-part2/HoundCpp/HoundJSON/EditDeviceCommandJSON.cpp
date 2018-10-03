/* file "EditDeviceCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EditDeviceCommandJSON.h"

#include "EditDeviceCommandJSON.h"
#include "IndexUserDevicesCommandJSON.h"
#include "IndexUserGroupsCommandJSON.h"


EditDeviceCommandJSON::EditDeviceCommandJSON(const EditDeviceCommandJSON &)
  {
    assert(false);
  }

EditDeviceCommandJSON &EditDeviceCommandJSON::operator=(const EditDeviceCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

EditDeviceCommandJSON::EditDeviceCommandJSON(void)
  {
  }

EditDeviceCommandJSON::~EditDeviceCommandJSON(void)
  {
  }

const char *EditDeviceCommandJSON::getCommandKind(void) const
  {
    return "EditDeviceCommand";
  }

EditDeviceCommandJSON *EditDeviceCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "IndexUser", 9) == 0)
      {
        switch ((unsigned char)(key[9]))
          {
            case 'D':
                if (strcmp(&(key[10]), "evices") == 0)
                    return new IndexUserDevicesCommandJSON();
                break;
            case 'G':
                if (strcmp(&(key[10]), "roups") == 0)
                    return new IndexUserGroupsCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericEditDeviceCommandJSON : public EditDeviceCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericEditDeviceCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericEditDeviceCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getEditDeviceCommandKind(void) const  { return key.c_str(); }
        size_t extraEditDeviceCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraEditDeviceCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraEditDeviceCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraEditDeviceCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraEditDeviceCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraEditDeviceCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraEditDeviceCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraEditDeviceCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraEditDeviceCommandLookup(key);
            if (old_field == NULL)
              {
                extraEditDeviceCommandAppendPair(key, new_component);
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
    return new GenericEditDeviceCommandJSON(key);
  }
EditDeviceCommandJSON *EditDeviceCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EditDeviceCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EditDeviceCommandJSON>, EditDeviceCommandJSON *, bool> generator("Type EditDeviceCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
