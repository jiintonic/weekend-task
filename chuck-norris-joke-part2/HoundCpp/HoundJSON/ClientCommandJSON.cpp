/* file "ClientCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientCommandJSON.h"

#include "ClientCommandJSON.h"
#include "ClientClearScreenCommandJSON.h"
#include "ClientGoBackCommandJSON.h"
#include "ClientRepeatCommandJSON.h"
#include "ClientWakeupPhraseCommandJSON.h"
#include "ClientMisrecognitionCommandJSON.h"
#include "ClientNewSearchCommandJSON.h"
#include "ClientSilentAudioCommandJSON.h"
#include "ClientEmptyQueryCommandJSON.h"
#include "ClientNoActionCommandJSON.h"


ClientCommandJSON::ClientCommandJSON(const ClientCommandJSON &)
  {
    assert(false);
  }

ClientCommandJSON &ClientCommandJSON::operator=(const ClientCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ClientCommandJSON::ClientCommandJSON(void)
  {
  }

ClientCommandJSON::~ClientCommandJSON(void)
  {
  }

const char *ClientCommandJSON::getCommandKind(void) const
  {
    return "ClientCommand";
  }

ClientCommandJSON *ClientCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Client", 6) == 0)
      {
        switch ((unsigned char)(key[6]))
          {
            case 'C':
                if (strcmp(&(key[7]), "learScreenCommand") == 0)
                    return new ClientClearScreenCommandJSON();
                break;
            case 'E':
                if (strcmp(&(key[7]), "mptyQueryCommand") == 0)
                    return new ClientEmptyQueryCommandJSON();
                break;
            case 'G':
                if (strcmp(&(key[7]), "oBackCommand") == 0)
                    return new ClientGoBackCommandJSON();
                break;
            case 'M':
                if (strcmp(&(key[7]), "isrecognitionCommand") == 0)
                    return new ClientMisrecognitionCommandJSON();
                break;
            case 'N':
                switch ((unsigned char)(key[7]))
                  {
                    case 'e':
                        if (strcmp(&(key[8]), "wSearchCommand") == 0)
                            return new ClientNewSearchCommandJSON();
                        break;
                    case 'o':
                        if (strcmp(&(key[8]), "ActionCommand") == 0)
                            return new ClientNoActionCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'R':
                if (strcmp(&(key[7]), "epeatCommand") == 0)
                    return new ClientRepeatCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[7]), "ilentAudioCommand") == 0)
                    return new ClientSilentAudioCommandJSON();
                break;
            case 'W':
                if (strcmp(&(key[7]), "akeupPhraseCommand") == 0)
                    return new ClientWakeupPhraseCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericClientCommandJSON : public ClientCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericClientCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericClientCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getClientCommandKind(void) const  { return key.c_str(); }
        size_t extraClientCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraClientCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraClientCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraClientCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraClientCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraClientCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraClientCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraClientCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraClientCommandLookup(key);
            if (old_field == NULL)
              {
                extraClientCommandAppendPair(key, new_component);
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
    return new GenericClientCommandJSON(key);
  }
ClientCommandJSON *ClientCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientCommandJSON>, ClientCommandJSON *, bool> generator("Type ClientCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
