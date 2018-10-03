/* file "UserContactsRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsRequestJSON.h"

#include "UserContactsRequestJSON.h"
#include "UserContactsAddRequestJSON.h"
#include "UserContactsClearRequestJSON.h"
#include "UserContactsDeleteRequestJSON.h"
#include "UserContactsModifyRequestJSON.h"
#include "UserContactsFindRequestJSON.h"


UserContactsRequestJSON::UserContactsRequestJSON(const UserContactsRequestJSON &)
  {
    assert(false);
  }

UserContactsRequestJSON &UserContactsRequestJSON::operator=(const UserContactsRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UserContactsRequestJSON::UserContactsRequestJSON(void)
  {
  }

UserContactsRequestJSON::~UserContactsRequestJSON(void)
  {
  }

UserContactsRequestJSON *UserContactsRequestJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "dd") == 0)
                return new UserContactsAddRequestJSON();
            break;
        case 'C':
            if (strcmp(&(key[1]), "lear") == 0)
                return new UserContactsClearRequestJSON();
            break;
        case 'D':
            if (strcmp(&(key[1]), "elete") == 0)
                return new UserContactsDeleteRequestJSON();
            break;
        case 'F':
            if (strcmp(&(key[1]), "ind") == 0)
                return new UserContactsFindRequestJSON();
            break;
        case 'M':
            if (strcmp(&(key[1]), "odify") == 0)
                return new UserContactsModifyRequestJSON();
            break;
        default:
            break;
      }

    class GenericUserContactsRequestJSON : public UserContactsRequestJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUserContactsRequestJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUserContactsRequestJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getRequestKind(void) const  { return key.c_str(); }
        size_t extraUserContactsRequestComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUserContactsRequestComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUserContactsRequestComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUserContactsRequestComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUserContactsRequestLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUserContactsRequestLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUserContactsRequestAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUserContactsRequestSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUserContactsRequestLookup(key);
            if (old_field == NULL)
              {
                extraUserContactsRequestAppendPair(key, new_component);
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
    return new GenericUserContactsRequestJSON(key);
  }
UserContactsRequestJSON *UserContactsRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsRequestJSON>, UserContactsRequestJSON *, bool> generator("Type UserContactsRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
