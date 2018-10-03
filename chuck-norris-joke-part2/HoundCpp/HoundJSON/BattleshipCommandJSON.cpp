/* file "BattleshipCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BattleshipCommandJSON.h"

#include "BattleshipCommandJSON.h"
#include "BattleshipPlayCommandJSON.h"
#include "BattleshipDictateCoordinatesCommandJSON.h"
#include "BattleshipNotUnderstoodCommandJSON.h"
#include "BattleshipInvalidCoordinatesCommandJSON.h"


BattleshipCommandJSON::BattleshipCommandJSON(const BattleshipCommandJSON &)
  {
    assert(false);
  }

BattleshipCommandJSON &BattleshipCommandJSON::operator=(const BattleshipCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BattleshipCommandJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void BattleshipCommandJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of BattleshipCommandJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

BattleshipCommandJSON::BattleshipCommandJSON(void) :
        flagHasGameName(false)
  {
  }

BattleshipCommandJSON::~BattleshipCommandJSON(void)
  {
  }

const char *BattleshipCommandJSON::getCommandKind(void) const
  {
    return "BattleshipCommand";
  }

bool BattleshipCommandJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string BattleshipCommandJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string BattleshipCommandJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

BattleshipCommandJSON *BattleshipCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Battleship", 10) == 0)
      {
        switch ((unsigned char)(key[10]))
          {
            case 'D':
                if (strcmp(&(key[11]), "ictateCoordinatesCommand") == 0)
                    return new BattleshipDictateCoordinatesCommandJSON();
                break;
            case 'I':
                if (strcmp(&(key[11]), "nvalidCoordinatesCommand") == 0)
                    return new BattleshipInvalidCoordinatesCommandJSON();
                break;
            case 'N':
                if (strcmp(&(key[11]), "otUnderstoodCommand") == 0)
                    return new BattleshipNotUnderstoodCommandJSON();
                break;
            case 'P':
                if (strcmp(&(key[11]), "layCommand") == 0)
                    return new BattleshipPlayCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericBattleshipCommandJSON : public BattleshipCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericBattleshipCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericBattleshipCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getBattleshipCommandKind(void) const  { return key.c_str(); }
        size_t extraBattleshipCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraBattleshipCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraBattleshipCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraBattleshipCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraBattleshipCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraBattleshipCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraBattleshipCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraBattleshipCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraBattleshipCommandLookup(key);
            if (old_field == NULL)
              {
                extraBattleshipCommandAppendPair(key, new_component);
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
    return new GenericBattleshipCommandJSON(key);
  }
BattleshipCommandJSON *BattleshipCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BattleshipCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BattleshipCommandJSON>, BattleshipCommandJSON *, bool> generator("Type BattleshipCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
