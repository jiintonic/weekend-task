/* file "BlackjackCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackCommandJSON.h"

#include "BlackjackCommandJSON.h"
#include "BlackjackStartGameCommandJSON.h"
#include "BlackjackQuitGameCommandJSON.h"
#include "BlackjackBetCommandJSON.h"
#include "BlackjackDoubledownCommandJSON.h"
#include "BlackjackDoubledownNotAllowedCommandJSON.h"
#include "BlackjackHitCommandJSON.h"
#include "BlackjackStandCommandJSON.h"
#include "BlackjackNotUnderstoodCommandJSON.h"
#include "BlackjackActionNotSupportedCommandJSON.h"


BlackjackCommandJSON::BlackjackCommandJSON(const BlackjackCommandJSON &)
  {
    assert(false);
  }

BlackjackCommandJSON &BlackjackCommandJSON::operator=(const BlackjackCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackCommandJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void BlackjackCommandJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of BlackjackCommandJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

BlackjackCommandJSON::BlackjackCommandJSON(void) :
        flagHasGameName(false)
  {
  }

BlackjackCommandJSON::~BlackjackCommandJSON(void)
  {
  }

const char *BlackjackCommandJSON::getCommandKind(void) const
  {
    return "BlackjackCommand";
  }

bool BlackjackCommandJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string BlackjackCommandJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string BlackjackCommandJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

BlackjackCommandJSON *BlackjackCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Blackjack", 9) == 0)
      {
        switch ((unsigned char)(key[9]))
          {
            case 'A':
                if (strcmp(&(key[10]), "ctionNotSupportedCommand") == 0)
                    return new BlackjackActionNotSupportedCommandJSON();
                break;
            case 'B':
                if (strcmp(&(key[10]), "etCommand") == 0)
                    return new BlackjackBetCommandJSON();
                break;
            case 'D':
                if (strncmp(&(key[10]), "oubledown", 9) == 0)
                  {
                    switch ((unsigned char)(key[19]))
                      {
                        case 'C':
                            if (strcmp(&(key[20]), "ommand") == 0)
                                return new BlackjackDoubledownCommandJSON();
                            break;
                        case 'N':
                            if (strcmp(&(key[20]), "otAllowedCommand") == 0)
                                return new BlackjackDoubledownNotAllowedCommandJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'H':
                if (strcmp(&(key[10]), "itCommand") == 0)
                    return new BlackjackHitCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[10]), "otUnderstoodCommand") == 0)
                    return new BlackjackNotUnderstoodCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[10]), "uitGameCommand") == 0)
                    return new BlackjackQuitGameCommandJSON();
                break;
            case 'S':
                if (strncmp(&(key[10]), "ta", 2) == 0)
                  {
                    switch ((unsigned char)(key[12]))
                      {
                        case 'n':
                            if (strcmp(&(key[13]), "dCommand") == 0)
                                return new BlackjackStandCommandJSON();
                            break;
                        case 'r':
                            if (strcmp(&(key[13]), "tGameCommand") == 0)
                                return new BlackjackStartGameCommandJSON();
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

    class GenericBlackjackCommandJSON : public BlackjackCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericBlackjackCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericBlackjackCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getBlackjackCommandKind(void) const  { return key.c_str(); }
        size_t extraBlackjackCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraBlackjackCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraBlackjackCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraBlackjackCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraBlackjackCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraBlackjackCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraBlackjackCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraBlackjackCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraBlackjackCommandLookup(key);
            if (old_field == NULL)
              {
                extraBlackjackCommandAppendPair(key, new_component);
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
    return new GenericBlackjackCommandJSON(key);
  }
BlackjackCommandJSON *BlackjackCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackCommandJSON>, BlackjackCommandJSON *, bool> generator("Type BlackjackCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
