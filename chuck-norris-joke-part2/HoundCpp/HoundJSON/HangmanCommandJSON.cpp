/* file "HangmanCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HangmanCommandJSON.h"

#include "HangmanCommandJSON.h"
#include "HangmanStartGameCommandJSON.h"
#include "HangmanGuessLetterCommandJSON.h"
#include "HangmanGuessWordCommandJSON.h"
#include "HangmanQuitGameCommandJSON.h"
#include "HangmanNotUnderstoodCommandJSON.h"


HangmanCommandJSON::HangmanCommandJSON(const HangmanCommandJSON &)
  {
    assert(false);
  }

HangmanCommandJSON &HangmanCommandJSON::operator=(const HangmanCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HangmanCommandJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void HangmanCommandJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of HangmanCommandJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

HangmanCommandJSON::HangmanCommandJSON(void) :
        flagHasGameName(false)
  {
  }

HangmanCommandJSON::~HangmanCommandJSON(void)
  {
  }

const char *HangmanCommandJSON::getCommandKind(void) const
  {
    return "HangmanCommand";
  }

bool HangmanCommandJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string HangmanCommandJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string HangmanCommandJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

HangmanCommandJSON *HangmanCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Hangman", 7) == 0)
      {
        switch ((unsigned char)(key[7]))
          {
            case 'G':
                if (strncmp(&(key[8]), "uess", 4) == 0)
                  {
                    switch ((unsigned char)(key[12]))
                      {
                        case 'L':
                            if (strcmp(&(key[13]), "etterCommand") == 0)
                                return new HangmanGuessLetterCommandJSON();
                            break;
                        case 'W':
                            if (strcmp(&(key[13]), "ordCommand") == 0)
                                return new HangmanGuessWordCommandJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[8]), "otUnderstoodGameCommand") == 0)
                    return new HangmanNotUnderstoodCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[8]), "uitGameCommand") == 0)
                    return new HangmanQuitGameCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[8]), "tartGameCommand") == 0)
                    return new HangmanStartGameCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericHangmanCommandJSON : public HangmanCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericHangmanCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericHangmanCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getHangmanCommandKind(void) const  { return key.c_str(); }
        size_t extraHangmanCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraHangmanCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraHangmanCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraHangmanCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraHangmanCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraHangmanCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraHangmanCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraHangmanCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraHangmanCommandLookup(key);
            if (old_field == NULL)
              {
                extraHangmanCommandAppendPair(key, new_component);
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
    return new GenericHangmanCommandJSON(key);
  }
HangmanCommandJSON *HangmanCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HangmanCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HangmanCommandJSON>, HangmanCommandJSON *, bool> generator("Type HangmanCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
