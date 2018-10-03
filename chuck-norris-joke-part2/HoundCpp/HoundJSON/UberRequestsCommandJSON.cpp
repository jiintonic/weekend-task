/* file "UberRequestsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsCommandJSON.h"

#include "UberRequestsCommandJSON.h"
#include "UberRequestsAbortCommandJSON.h"
#include "UberRequestsFailureCommandJSON.h"
#include "UberRequestsInProgressCommandJSON.h"
#include "UberRequestsLoginCommandJSON.h"
#include "UberRequestsRedirectCommandJSON.h"
#include "UberRequestsSuccessCommandJSON.h"
#include "UberRequestsSurgeCommandJSON.h"


UberRequestsCommandJSON::UberRequestsCommandJSON(const UberRequestsCommandJSON &)
  {
    assert(false);
  }

UberRequestsCommandJSON &UberRequestsCommandJSON::operator=(const UberRequestsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberRequestsCommandJSON::UberRequestsCommandJSON(void)
  {
  }

UberRequestsCommandJSON::~UberRequestsCommandJSON(void)
  {
  }

const char *UberRequestsCommandJSON::getUberCommandKind(void) const
  {
    return "UberRequests";
  }

UberRequestsCommandJSON *UberRequestsCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "UberRequests", 12) == 0)
      {
        switch ((unsigned char)(key[12]))
          {
            case 'A':
                if (strcmp(&(key[13]), "bort") == 0)
                    return new UberRequestsAbortCommandJSON();
                break;
            case 'F':
                if (strcmp(&(key[13]), "ailure") == 0)
                    return new UberRequestsFailureCommandJSON();
                break;
            case 'I':
                if (strcmp(&(key[13]), "nProgress") == 0)
                    return new UberRequestsInProgressCommandJSON();
                break;
            case 'L':
                if (strcmp(&(key[13]), "ogin") == 0)
                    return new UberRequestsLoginCommandJSON();
                break;
            case 'R':
                if (strcmp(&(key[13]), "edirect") == 0)
                    return new UberRequestsRedirectCommandJSON();
                break;
            case 'S':
                if (strncmp(&(key[13]), "u", 1) == 0)
                  {
                    switch ((unsigned char)(key[14]))
                      {
                        case 'c':
                            if (strcmp(&(key[15]), "cess") == 0)
                                return new UberRequestsSuccessCommandJSON();
                            break;
                        case 'r':
                            if (strcmp(&(key[15]), "ge") == 0)
                                return new UberRequestsSurgeCommandJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
      }

    class GenericUberRequestsCommandJSON : public UberRequestsCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUberRequestsCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUberRequestsCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getUberRequestsCommandKind(void) const  { return key.c_str(); }
        size_t extraUberRequestsCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUberRequestsCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUberRequestsCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUberRequestsCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUberRequestsCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUberRequestsCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUberRequestsCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUberRequestsCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUberRequestsCommandLookup(key);
            if (old_field == NULL)
              {
                extraUberRequestsCommandAppendPair(key, new_component);
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
    return new GenericUberRequestsCommandJSON(key);
  }
UberRequestsCommandJSON *UberRequestsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsCommandJSON>, UberRequestsCommandJSON *, bool> generator("Type UberRequestsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
