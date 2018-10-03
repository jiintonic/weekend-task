/* file "EmailCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailCommandJSON.h"

#include "EmailCommandJSON.h"
#include "ComposeEmailCommandJSON.h"
#include "DiscardEmailCommandJSON.h"


EmailCommandJSON::EmailCommandJSON(const EmailCommandJSON &)
  {
    assert(false);
  }

EmailCommandJSON &EmailCommandJSON::operator=(const EmailCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

EmailCommandJSON::EmailCommandJSON(void)
  {
  }

EmailCommandJSON::~EmailCommandJSON(void)
  {
  }

const char *EmailCommandJSON::getCommandKind(void) const
  {
    return "EmailCommand";
  }

EmailCommandJSON *EmailCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            if (strcmp(&(key[1]), "omposeEmailCommand") == 0)
                return new ComposeEmailCommandJSON();
            break;
        case 'D':
            if (strcmp(&(key[1]), "iscardEmailCommand") == 0)
                return new DiscardEmailCommandJSON();
            break;
        default:
            break;
      }

    class GenericEmailCommandJSON : public EmailCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericEmailCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericEmailCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getEmailCommandKind(void) const  { return key.c_str(); }
        size_t extraEmailCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraEmailCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraEmailCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraEmailCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraEmailCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraEmailCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraEmailCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraEmailCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraEmailCommandLookup(key);
            if (old_field == NULL)
              {
                extraEmailCommandAppendPair(key, new_component);
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
    return new GenericEmailCommandJSON(key);
  }
EmailCommandJSON *EmailCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailCommandJSON>, EmailCommandJSON *, bool> generator("Type EmailCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
