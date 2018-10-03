/* file "RockPaperScissorsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RockPaperScissorsCommandJSON.h"

#include "RockPaperScissorsCommandJSON.h"
#include "RockPaperScissorsStartGameCommandJSON.h"
#include "RockPaperScissorsPickObjectCommandJSON.h"
#include "RockPaperScissorsNotUnderstoodCommandJSON.h"
#include "RockPaperScissorsQuitGameCommandJSON.h"


RockPaperScissorsCommandJSON::RockPaperScissorsCommandJSON(const RockPaperScissorsCommandJSON &)
  {
    assert(false);
  }

RockPaperScissorsCommandJSON &RockPaperScissorsCommandJSON::operator=(const RockPaperScissorsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RockPaperScissorsCommandJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void RockPaperScissorsCommandJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of RockPaperScissorsCommandJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

RockPaperScissorsCommandJSON::RockPaperScissorsCommandJSON(void) :
        flagHasGameName(false)
  {
  }

RockPaperScissorsCommandJSON::~RockPaperScissorsCommandJSON(void)
  {
  }

const char *RockPaperScissorsCommandJSON::getCommandKind(void) const
  {
    return "RockPaperScissorsCommand";
  }

bool RockPaperScissorsCommandJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string RockPaperScissorsCommandJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string RockPaperScissorsCommandJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

RockPaperScissorsCommandJSON *RockPaperScissorsCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "RockPaperScissors", 17) == 0)
      {
        switch ((unsigned char)(key[17]))
          {
            case 'N':
                if (strcmp(&(key[18]), "otUnderstoodCommand") == 0)
                    return new RockPaperScissorsNotUnderstoodCommandJSON();
                break;
            case 'P':
                if (strcmp(&(key[18]), "ickObjectCommand") == 0)
                    return new RockPaperScissorsPickObjectCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[18]), "uitCommand") == 0)
                    return new RockPaperScissorsQuitGameCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[18]), "tartGameCommand") == 0)
                    return new RockPaperScissorsStartGameCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericRockPaperScissorsCommandJSON : public RockPaperScissorsCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericRockPaperScissorsCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericRockPaperScissorsCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getRockPaperScissorsCommandKind(void) const  { return key.c_str(); }
        size_t extraRockPaperScissorsCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraRockPaperScissorsCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraRockPaperScissorsCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraRockPaperScissorsCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraRockPaperScissorsCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraRockPaperScissorsCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraRockPaperScissorsCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraRockPaperScissorsCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraRockPaperScissorsCommandLookup(key);
            if (old_field == NULL)
              {
                extraRockPaperScissorsCommandAppendPair(key, new_component);
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
    return new GenericRockPaperScissorsCommandJSON(key);
  }
RockPaperScissorsCommandJSON *RockPaperScissorsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RockPaperScissorsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RockPaperScissorsCommandJSON>, RockPaperScissorsCommandJSON *, bool> generator("Type RockPaperScissorsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
