/* file "NumberGuessCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessCommandJSON.h"

#include "NumberGuessCommandJSON.h"
#include "NumberGuessStartGameCommandJSON.h"
#include "NumberGuessSetDifficultyCommandJSON.h"
#include "NumberGuessGuessNumberCommandJSON.h"
#include "NumberGuessNotUnderstoodCommandJSON.h"
#include "NumberGuessQuitGameCommandJSON.h"


NumberGuessCommandJSON::NumberGuessCommandJSON(const NumberGuessCommandJSON &)
  {
    assert(false);
  }

NumberGuessCommandJSON &NumberGuessCommandJSON::operator=(const NumberGuessCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessCommandJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void NumberGuessCommandJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of NumberGuessCommandJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

NumberGuessCommandJSON::NumberGuessCommandJSON(void) :
        flagHasGameName(false)
  {
  }

NumberGuessCommandJSON::~NumberGuessCommandJSON(void)
  {
  }

const char *NumberGuessCommandJSON::getCommandKind(void) const
  {
    return "NumberGuessCommand";
  }

bool NumberGuessCommandJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string NumberGuessCommandJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string NumberGuessCommandJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

NumberGuessCommandJSON *NumberGuessCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "NumberGuess", 11) == 0)
      {
        switch ((unsigned char)(key[11]))
          {
            case 'G':
                if (strcmp(&(key[12]), "uessNumberCommand") == 0)
                    return new NumberGuessGuessNumberCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[12]), "otUnderstoodCommand") == 0)
                    return new NumberGuessNotUnderstoodCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[12]), "uitCommand") == 0)
                    return new NumberGuessQuitGameCommandJSON();
                break;
            case 'S':
                switch ((unsigned char)(key[12]))
                  {
                    case 'e':
                        if (strcmp(&(key[13]), "tDifficultyCommand") == 0)
                            return new NumberGuessSetDifficultyCommandJSON();
                        break;
                    case 't':
                        if (strcmp(&(key[13]), "artGameCommand") == 0)
                            return new NumberGuessStartGameCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
      }

    class GenericNumberGuessCommandJSON : public NumberGuessCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericNumberGuessCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericNumberGuessCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getNumberGuessCommandKind(void) const  { return key.c_str(); }
        size_t extraNumberGuessCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraNumberGuessCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraNumberGuessCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraNumberGuessCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraNumberGuessCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraNumberGuessCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraNumberGuessCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraNumberGuessCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraNumberGuessCommandLookup(key);
            if (old_field == NULL)
              {
                extraNumberGuessCommandAppendPair(key, new_component);
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
    return new GenericNumberGuessCommandJSON(key);
  }
NumberGuessCommandJSON *NumberGuessCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessCommandJSON>, NumberGuessCommandJSON *, bool> generator("Type NumberGuessCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
