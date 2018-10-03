/* file "AlarmCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AlarmCommandJSON.h"

#include "AlarmCommandJSON.h"
#include "AlarmDisplayCommandJSON.h"
#include "AlarmStartCommandJSON.h"
#include "AlarmSetCommandJSON.h"
#include "AlarmNotUnderstoodCommandJSON.h"
#include "AlarmUnsetCommandJSON.h"


AlarmCommandJSON::AlarmCommandJSON(const AlarmCommandJSON &)
  {
    assert(false);
  }

AlarmCommandJSON &AlarmCommandJSON::operator=(const AlarmCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

AlarmCommandJSON::AlarmCommandJSON(void)
  {
  }

AlarmCommandJSON::~AlarmCommandJSON(void)
  {
  }

const char *AlarmCommandJSON::getCommandKind(void) const
  {
    return "AlarmCommand";
  }

AlarmCommandJSON *AlarmCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Alarm", 5) == 0)
      {
        switch ((unsigned char)(key[5]))
          {
            case 'D':
                if (strcmp(&(key[6]), "isplayCommand") == 0)
                    return new AlarmDisplayCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[6]), "otUnderstoodCommand") == 0)
                    return new AlarmNotUnderstoodCommandJSON();
                break;
            case 'S':
                switch ((unsigned char)(key[6]))
                  {
                    case 'e':
                        if (strcmp(&(key[7]), "tCommand") == 0)
                            return new AlarmSetCommandJSON();
                        break;
                    case 't':
                        if (strcmp(&(key[7]), "artCommand") == 0)
                            return new AlarmStartCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(key[6]), "nsetCommand") == 0)
                    return new AlarmUnsetCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericAlarmCommandJSON : public AlarmCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericAlarmCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericAlarmCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getAlarmCommandKind(void) const  { return key.c_str(); }
        size_t extraAlarmCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraAlarmCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraAlarmCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraAlarmCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraAlarmCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraAlarmCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraAlarmCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraAlarmCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraAlarmCommandLookup(key);
            if (old_field == NULL)
              {
                extraAlarmCommandAppendPair(key, new_component);
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
    return new GenericAlarmCommandJSON(key);
  }
AlarmCommandJSON *AlarmCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AlarmCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AlarmCommandJSON>, AlarmCommandJSON *, bool> generator("Type AlarmCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
