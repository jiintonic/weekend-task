/* file "NumberGuessInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NumberGuessInformationNuggetJSON.h"

#include "NumberGuessInformationNuggetJSON.h"
#include "NumberGuessQuitGameInformationNuggetJSON.h"


NumberGuessInformationNuggetJSON::NumberGuessInformationNuggetJSON(const NumberGuessInformationNuggetJSON &)
  {
    assert(false);
  }

NumberGuessInformationNuggetJSON &NumberGuessInformationNuggetJSON::operator=(const NumberGuessInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NumberGuessInformationNuggetJSON::extraGameNameToJSON(void) const
  {
    JSONStringValue *generated_string_GameName = new JSONStringValue(storeGameName.c_str());
    return generated_string_GameName;
  }

void NumberGuessInformationNuggetJSON::fromJSONGameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GameName of NumberGuessInformationNuggetJSON is not a string.");
    setGameName(std::string(json_string->getData()));
  }

NumberGuessInformationNuggetJSON::NumberGuessInformationNuggetJSON(void) :
        flagHasGameName(false)
  {
  }

NumberGuessInformationNuggetJSON::~NumberGuessInformationNuggetJSON(void)
  {
  }

const char *NumberGuessInformationNuggetJSON::getNuggetKind(void) const
  {
    return "NumberGuess";
  }

bool NumberGuessInformationNuggetJSON::hasGameName(void) const
  {
    return flagHasGameName;
  }

std::string NumberGuessInformationNuggetJSON::getGameName(void)
  {
    assert(flagHasGameName);
    return storeGameName;
  }

const std::string NumberGuessInformationNuggetJSON::getGameName(void) const
  {
    assert(flagHasGameName);
    return storeGameName;
  }

NumberGuessInformationNuggetJSON *NumberGuessInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strcmp(key, "NumberGuessQuitCommand") == 0)
        return new NumberGuessQuitGameInformationNuggetJSON();

    class GenericNumberGuessInformationNuggetJSON : public NumberGuessInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericNumberGuessInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericNumberGuessInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getNumberGuessNuggetKind(void) const  { return key.c_str(); }
        size_t extraNumberGuessInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraNumberGuessInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraNumberGuessInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraNumberGuessInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraNumberGuessInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraNumberGuessInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraNumberGuessInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraNumberGuessInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraNumberGuessInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraNumberGuessInformationNuggetAppendPair(key, new_component);
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
    return new GenericNumberGuessInformationNuggetJSON(key);
  }
NumberGuessInformationNuggetJSON *NumberGuessInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NumberGuessInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NumberGuessInformationNuggetJSON>, NumberGuessInformationNuggetJSON *, bool> generator("Type NumberGuessInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
