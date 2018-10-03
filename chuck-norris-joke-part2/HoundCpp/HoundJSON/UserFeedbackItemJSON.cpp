/* file "UserFeedbackItemJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserFeedbackItemJSON.h"

#include "UserFeedbackItemJSON.h"
#include "UserFeedbackMultipleChoiceJSON.h"
#include "UserFeedbackFreeformTextJSON.h"


UserFeedbackItemJSON::UserFeedbackItemJSON(const UserFeedbackItemJSON &)
  {
    assert(false);
  }

UserFeedbackItemJSON &UserFeedbackItemJSON::operator=(const UserFeedbackItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserFeedbackItemJSON::fromJSONFieldName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FieldName of UserFeedbackItemJSON is not a string.");
    setFieldName(std::string(json_string->getData()));
  }

UserFeedbackItemJSON::UserFeedbackItemJSON(void) :
        flagHasFieldName(false)
  {
  }

UserFeedbackItemJSON::~UserFeedbackItemJSON(void)
  {
  }

bool UserFeedbackItemJSON::hasFieldName(void) const
  {
    return flagHasFieldName;
  }

std::string UserFeedbackItemJSON::getFieldName(void)
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

const std::string UserFeedbackItemJSON::getFieldName(void) const
  {
    assert(flagHasFieldName);
    return storeFieldName;
  }

UserFeedbackItemJSON *UserFeedbackItemJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'F':
            if (strcmp(&(key[1]), "reeformText") == 0)
                return new UserFeedbackFreeformTextJSON();
            break;
        case 'M':
            if (strcmp(&(key[1]), "ultipleChoice") == 0)
                return new UserFeedbackMultipleChoiceJSON();
            break;
        default:
            break;
      }

    class GenericUserFeedbackItemJSON : public UserFeedbackItemJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUserFeedbackItemJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUserFeedbackItemJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getFeedbackKind(void) const  { return key.c_str(); }
        size_t extraUserFeedbackItemComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUserFeedbackItemComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUserFeedbackItemComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUserFeedbackItemComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUserFeedbackItemLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUserFeedbackItemLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUserFeedbackItemAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUserFeedbackItemSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUserFeedbackItemLookup(key);
            if (old_field == NULL)
              {
                extraUserFeedbackItemAppendPair(key, new_component);
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
    return new GenericUserFeedbackItemJSON(key);
  }
UserFeedbackItemJSON *UserFeedbackItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserFeedbackItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserFeedbackItemJSON>, UserFeedbackItemJSON *, bool> generator("Type UserFeedbackItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
