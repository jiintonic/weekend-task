/* file "NavigationCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NavigationCommandJSON.h"

#include "NavigationCommandJSON.h"
#include "NavigationCancelCommandJSON.h"
#include "NavigationNotUnderstoodCommandJSON.h"
#include "NavigationStartCommandJSON.h"


NavigationCommandJSON::NavigationCommandJSON(const NavigationCommandJSON &)
  {
    assert(false);
  }

NavigationCommandJSON &NavigationCommandJSON::operator=(const NavigationCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

NavigationCommandJSON::NavigationCommandJSON(void)
  {
  }

NavigationCommandJSON::~NavigationCommandJSON(void)
  {
  }

const char *NavigationCommandJSON::getCommandKind(void) const
  {
    return "NavigationCommand";
  }

NavigationCommandJSON *NavigationCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Navigation", 10) == 0)
      {
        switch ((unsigned char)(key[10]))
          {
            case 'C':
                if (strcmp(&(key[11]), "ancelCommand") == 0)
                    return new NavigationCancelCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[11]), "otUnderstoodCommand") == 0)
                    return new NavigationNotUnderstoodCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[11]), "tartCommand") == 0)
                    return new NavigationStartCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericNavigationCommandJSON : public NavigationCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericNavigationCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericNavigationCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getNavigationCommandKind(void) const  { return key.c_str(); }
        size_t extraNavigationCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraNavigationCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraNavigationCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraNavigationCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraNavigationCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraNavigationCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraNavigationCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraNavigationCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraNavigationCommandLookup(key);
            if (old_field == NULL)
              {
                extraNavigationCommandAppendPair(key, new_component);
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
    return new GenericNavigationCommandJSON(key);
  }
NavigationCommandJSON *NavigationCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NavigationCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NavigationCommandJSON>, NavigationCommandJSON *, bool> generator("Type NavigationCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
