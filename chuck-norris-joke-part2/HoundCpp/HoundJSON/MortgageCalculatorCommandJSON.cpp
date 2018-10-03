/* file "MortgageCalculatorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MortgageCalculatorCommandJSON.h"

#include "MortgageCalculatorCommandJSON.h"
#include "MortgageCalculatorCancelCommandJSON.h"
#include "MortgageCalculatorShowResultsCommandJSON.h"


MortgageCalculatorCommandJSON::MortgageCalculatorCommandJSON(const MortgageCalculatorCommandJSON &)
  {
    assert(false);
  }

MortgageCalculatorCommandJSON &MortgageCalculatorCommandJSON::operator=(const MortgageCalculatorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

MortgageCalculatorCommandJSON::MortgageCalculatorCommandJSON(void)
  {
  }

MortgageCalculatorCommandJSON::~MortgageCalculatorCommandJSON(void)
  {
  }

const char *MortgageCalculatorCommandJSON::getCommandKind(void) const
  {
    return "MortgageCalculatorCommand";
  }

MortgageCalculatorCommandJSON *MortgageCalculatorCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "MortgageCalculator", 18) == 0)
      {
        switch ((unsigned char)(key[18]))
          {
            case 'C':
                if (strcmp(&(key[19]), "ancelCommand") == 0)
                    return new MortgageCalculatorCancelCommandJSON();
                break;
            case 'S':
                if (strcmp(&(key[19]), "howResultsCommand") == 0)
                    return new MortgageCalculatorShowResultsCommandJSON();
                break;
            default:
                break;
          }
      }

    class GenericMortgageCalculatorCommandJSON : public MortgageCalculatorCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMortgageCalculatorCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMortgageCalculatorCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMortgageCalculatorCommandKind(void) const  { return key.c_str(); }
        size_t extraMortgageCalculatorCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMortgageCalculatorCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMortgageCalculatorCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMortgageCalculatorCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMortgageCalculatorCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMortgageCalculatorCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMortgageCalculatorCommandLookup(key);
            if (old_field == NULL)
              {
                extraMortgageCalculatorCommandAppendPair(key, new_component);
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
    return new GenericMortgageCalculatorCommandJSON(key);
  }
MortgageCalculatorCommandJSON *MortgageCalculatorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MortgageCalculatorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MortgageCalculatorCommandJSON>, MortgageCalculatorCommandJSON *, bool> generator("Type MortgageCalculatorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
