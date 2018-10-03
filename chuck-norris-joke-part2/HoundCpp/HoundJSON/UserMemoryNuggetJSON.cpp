/* file "UserMemoryNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserMemoryNuggetJSON.h"

#include "UserMemoryNuggetJSON.h"
#include "RememberUserLocationNuggetJSON.h"
#include "ForgetUserLocationNuggetJSON.h"
#include "RememberUserNameNuggetJSON.h"
#include "ShowUserNameNuggetJSON.h"


UserMemoryNuggetJSON::UserMemoryNuggetJSON(const UserMemoryNuggetJSON &)
  {
    assert(false);
  }

UserMemoryNuggetJSON &UserMemoryNuggetJSON::operator=(const UserMemoryNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UserMemoryNuggetJSON::UserMemoryNuggetJSON(void)
  {
  }

UserMemoryNuggetJSON::~UserMemoryNuggetJSON(void)
  {
  }

const char *UserMemoryNuggetJSON::getNuggetKind(void) const
  {
    return "UserMemory";
  }

UserMemoryNuggetJSON *UserMemoryNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'F':
            if (strcmp(&(key[1]), "orgetUserLocation") == 0)
                return new ForgetUserLocationNuggetJSON();
            break;
        case 'R':
            if (strncmp(&(key[1]), "ememberUser", 11) == 0)
              {
                switch ((unsigned char)(key[12]))
                  {
                    case 'L':
                        if (strcmp(&(key[13]), "ocation") == 0)
                            return new RememberUserLocationNuggetJSON();
                        break;
                    case 'N':
                        if (strcmp(&(key[13]), "ame") == 0)
                            return new RememberUserNameNuggetJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(key[1]), "howUserName") == 0)
                return new ShowUserNameNuggetJSON();
            break;
        default:
            break;
      }

    class GenericUserMemoryNuggetJSON : public UserMemoryNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUserMemoryNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUserMemoryNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getUserMemoryNuggetKind(void) const  { return key.c_str(); }
        size_t extraUserMemoryNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUserMemoryNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUserMemoryNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUserMemoryNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUserMemoryNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUserMemoryNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUserMemoryNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUserMemoryNuggetLookup(key);
            if (old_field == NULL)
              {
                extraUserMemoryNuggetAppendPair(key, new_component);
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
    return new GenericUserMemoryNuggetJSON(key);
  }
UserMemoryNuggetJSON *UserMemoryNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserMemoryNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserMemoryNuggetJSON>, UserMemoryNuggetJSON *, bool> generator("Type UserMemoryNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
