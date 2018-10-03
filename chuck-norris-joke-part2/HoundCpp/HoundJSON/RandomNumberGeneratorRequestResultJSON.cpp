/* file "RandomNumberGeneratorRequestResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RandomNumberGeneratorRequestResultJSON.h"

#include "RandomNumberGeneratorRequestResultJSON.h"
#include "RandomNumberGeneratorDiceRollRequestResultJSON.h"
#include "RandomNumberGeneratorCoinFlipRequestResultJSON.h"
#include "RandomNumberGeneratorNumberRequestResultJSON.h"


RandomNumberGeneratorRequestResultJSON::RandomNumberGeneratorRequestResultJSON(const RandomNumberGeneratorRequestResultJSON &)
  {
    assert(false);
  }

RandomNumberGeneratorRequestResultJSON &RandomNumberGeneratorRequestResultJSON::operator=(const RandomNumberGeneratorRequestResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

RandomNumberGeneratorRequestResultJSON::RandomNumberGeneratorRequestResultJSON(void)
  {
  }

RandomNumberGeneratorRequestResultJSON::~RandomNumberGeneratorRequestResultJSON(void)
  {
  }

RandomNumberGeneratorRequestResultJSON *RandomNumberGeneratorRequestResultJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            if (strcmp(&(key[1]), "oinFlipRequest") == 0)
                return new RandomNumberGeneratorCoinFlipRequestResultJSON();
            break;
        case 'D':
            if (strcmp(&(key[1]), "iceRollRequest") == 0)
                return new RandomNumberGeneratorDiceRollRequestResultJSON();
            break;
        case 'N':
            if (strcmp(&(key[1]), "umberRequest") == 0)
                return new RandomNumberGeneratorNumberRequestResultJSON();
            break;
        default:
            break;
      }

    class GenericRandomNumberGeneratorRequestResultJSON : public RandomNumberGeneratorRequestResultJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericRandomNumberGeneratorRequestResultJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericRandomNumberGeneratorRequestResultJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getRandomNumberRequestKind(void) const  { return key.c_str(); }
        size_t extraRandomNumberGeneratorRequestResultComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraRandomNumberGeneratorRequestResultComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraRandomNumberGeneratorRequestResultComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraRandomNumberGeneratorRequestResultLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraRandomNumberGeneratorRequestResultAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraRandomNumberGeneratorRequestResultSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraRandomNumberGeneratorRequestResultLookup(key);
            if (old_field == NULL)
              {
                extraRandomNumberGeneratorRequestResultAppendPair(key, new_component);
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
    return new GenericRandomNumberGeneratorRequestResultJSON(key);
  }
RandomNumberGeneratorRequestResultJSON *RandomNumberGeneratorRequestResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RandomNumberGeneratorRequestResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RandomNumberGeneratorRequestResultJSON>, RandomNumberGeneratorRequestResultJSON *, bool> generator("Type RandomNumberGeneratorRequestResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
