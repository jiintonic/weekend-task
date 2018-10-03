/* file "BlackjackInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BlackjackInformationNuggetJSON.h"

#include "BlackjackInformationNuggetJSON.h"
#include "BlackjackQuitGameInformationNuggetJSON.h"
#include "BlackjackDoubledownInformationNuggetJSON.h"
#include "BlackjackStandInformationNuggetJSON.h"


BlackjackInformationNuggetJSON::BlackjackInformationNuggetJSON(const BlackjackInformationNuggetJSON &)
  {
    assert(false);
  }

BlackjackInformationNuggetJSON &BlackjackInformationNuggetJSON::operator=(const BlackjackInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *BlackjackInformationNuggetJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void BlackjackInformationNuggetJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of BlackjackInformationNuggetJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

BlackjackInformationNuggetJSON::BlackjackInformationNuggetJSON(void) :
        flagHasGameName(false)
  {
  }

BlackjackInformationNuggetJSON::~BlackjackInformationNuggetJSON(void)
  {
  }

const char *BlackjackInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Blackjack";
  }

bool BlackjackInformationNuggetJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string BlackjackInformationNuggetJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string BlackjackInformationNuggetJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

BlackjackInformationNuggetJSON *BlackjackInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Blackjack", 9) == 0)
      {
        switch ((unsigned char)(key[9]))
          {
            case 'D':
                if (strcmp(&(key[10]), "oubledownCommand") == 0)
                    return new BlackjackDoubledownInformationNuggetJSON();
                break;
            case 'Q':
                if (strcmp(&(key[10]), "uitGameCommand") == 0)
                    return new BlackjackQuitGameInformationNuggetJSON();
                break;
            case 'S':
                if (strcmp(&(key[10]), "tandCommand") == 0)
                    return new BlackjackStandInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericBlackjackInformationNuggetJSON : public BlackjackInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericBlackjackInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericBlackjackInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getBlackjackNuggetKind(void) const  { return key.c_str(); }
        size_t extraBlackjackInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraBlackjackInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraBlackjackInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraBlackjackInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraBlackjackInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraBlackjackInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraBlackjackInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraBlackjackInformationNuggetAppendPair(key, new_component);
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
    return new GenericBlackjackInformationNuggetJSON(key);
  }
BlackjackInformationNuggetJSON *BlackjackInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BlackjackInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BlackjackInformationNuggetJSON>, BlackjackInformationNuggetJSON *, bool> generator("Type BlackjackInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
