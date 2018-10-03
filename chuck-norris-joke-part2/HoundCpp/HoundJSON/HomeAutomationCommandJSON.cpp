/* file "HomeAutomationCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationCommandJSON.h"

#include "HomeAutomationCommandJSON.h"
#include "HomeAutomationWriteClientSettingsCommandJSON.h"
#include "HomeAutomationWriteUserSettingsCommandJSON.h"


HomeAutomationCommandJSON::HomeAutomationCommandJSON(const HomeAutomationCommandJSON &)
  {
    assert(false);
  }

HomeAutomationCommandJSON &HomeAutomationCommandJSON::operator=(const HomeAutomationCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

HomeAutomationCommandJSON::HomeAutomationCommandJSON(void)
  {
  }

HomeAutomationCommandJSON::~HomeAutomationCommandJSON(void)
  {
  }

const char *HomeAutomationCommandJSON::getCommandKind(void) const
  {
    return "HomeAutomationCommand";
  }

HomeAutomationCommandJSON *HomeAutomationCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "HomeAutomationWrite", 19) == 0)
      {
        switch ((unsigned char)(key[19]))
          {
            case 'C':
                if (strcmp(&(key[20]), "lientSettingsCommand") == 0)
                    return new HomeAutomationWriteClientSettingsCommandJSON();
                break;
            case 'U':
                if (strcmp(&(key[20]), "serSettingsCommand") == 0)
                    return new HomeAutomationWriteUserSettingsCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericHomeAutomationCommandJSON : public HomeAutomationCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericHomeAutomationCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericHomeAutomationCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getHomeAutomationCommandKind(void) const  { return key.c_str(); }
        size_t extraHomeAutomationCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraHomeAutomationCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraHomeAutomationCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraHomeAutomationCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraHomeAutomationCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraHomeAutomationCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraHomeAutomationCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraHomeAutomationCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraHomeAutomationCommandLookup(key);
            if (old_field == NULL)
              {
                extraHomeAutomationCommandAppendPair(key, new_component);
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
    return new GenericHomeAutomationCommandJSON(key);
  }
HomeAutomationCommandJSON *HomeAutomationCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCommandJSON>, HomeAutomationCommandJSON *, bool> generator("Type HomeAutomationCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
