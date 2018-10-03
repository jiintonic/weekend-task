/* file "CommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CommandIntentJSON.h"

#include "CommandIntentJSON.h"
#include "InformationIntentJSON.h"
#include "RadioCommandIntentJSON.h"
#include "RobotCommandIntentJSON.h"


CommandIntentJSON::CommandIntentJSON(const CommandIntentJSON &)
  {
    assert(false);
  }

CommandIntentJSON &CommandIntentJSON::operator=(const CommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

CommandIntentJSON::CommandIntentJSON(void)
  {
  }

CommandIntentJSON::~CommandIntentJSON(void)
  {
  }

CommandIntentJSON *CommandIntentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'I':
            if (strcmp(&(key[1]), "nformation") == 0)
                return new InformationIntentJSON();
            break;
        case 'R':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "dio") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RadioIntentKind")));
                        if (key_value == NULL)
                            throw("The `RadioIntentKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `RadioIntentKind' field has a non-string value.");
                        return RadioCommandIntentJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "bot") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RobotIntentKind")));
                        if (key_value == NULL)
                            throw("The `RobotIntentKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `RobotIntentKind' field has a non-string value.");
                        return RobotCommandIntentJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }

    class GenericCommandIntentJSON : public CommandIntentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericCommandIntentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericCommandIntentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getCommandIntentKind(void) const  { return key.c_str(); }
        size_t extraCommandIntentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraCommandIntentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraCommandIntentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraCommandIntentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraCommandIntentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraCommandIntentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraCommandIntentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraCommandIntentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraCommandIntentLookup(key);
            if (old_field == NULL)
              {
                extraCommandIntentAppendPair(key, new_component);
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
    return new GenericCommandIntentJSON(key);
  }
CommandIntentJSON *CommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CommandIntentJSON>, CommandIntentJSON *, bool> generator("Type CommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
