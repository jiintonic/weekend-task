/* file "TipCalculatorCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TipCalculatorCommandJSON.h"

#include "TipCalculatorCommandJSON.h"
#include "TipCalculatorShowResultsCommandJSON.h"


TipCalculatorCommandJSON::TipCalculatorCommandJSON(const TipCalculatorCommandJSON &)
  {
    assert(false);
  }

TipCalculatorCommandJSON &TipCalculatorCommandJSON::operator=(const TipCalculatorCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TipCalculatorCommandJSON::TipCalculatorCommandJSON(void)
  {
  }

TipCalculatorCommandJSON::~TipCalculatorCommandJSON(void)
  {
  }

const char *TipCalculatorCommandJSON::getCommandKind(void) const
  {
    return "TipCalculatorCommand";
  }

TipCalculatorCommandJSON *TipCalculatorCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strcmp(key, "TipCalculatorShowResultsCommand") == 0)
        return new TipCalculatorShowResultsCommandJSON();

    class GenericTipCalculatorCommandJSON : public TipCalculatorCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericTipCalculatorCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericTipCalculatorCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getTipCalculatorCommandKind(void) const  { return key.c_str(); }
        size_t extraTipCalculatorCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraTipCalculatorCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraTipCalculatorCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraTipCalculatorCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraTipCalculatorCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraTipCalculatorCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraTipCalculatorCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraTipCalculatorCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTipCalculatorCommandLookup(key);
            if (old_field == NULL)
              {
                extraTipCalculatorCommandAppendPair(key, new_component);
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
    return new GenericTipCalculatorCommandJSON(key);
  }
TipCalculatorCommandJSON *TipCalculatorCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TipCalculatorCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TipCalculatorCommandJSON>, TipCalculatorCommandJSON *, bool> generator("Type TipCalculatorCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
