/* file "QuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "QuantityJSON.h"

#include "QuantityJSON.h"
#include "ScientificNotationQuantityJSON.h"
#include "FiniteRationalQuantityJSON.h"
#include "PositiveInfinityQuantityJSON.h"
#include "NegativeInfinityQuantityJSON.h"
#include "UnsignedInfinityQuantityJSON.h"
#include "ZeroZeroQuantityJSON.h"
#include "BasicBinaryOperationQuantityJSON.h"
#include "ApproximateQuantityJSON.h"


QuantityJSON::QuantityJSON(const QuantityJSON &)
  {
    assert(false);
  }

QuantityJSON &QuantityJSON::operator=(const QuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

QuantityJSON::QuantityJSON(void)
  {
  }

QuantityJSON::~QuantityJSON(void)
  {
  }

QuantityJSON *QuantityJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            if (strcmp(&(key[1]), "pproximate") == 0)
                return new ApproximateQuantityJSON();
            break;
        case 'B':
            if (strcmp(&(key[1]), "asicBinaryOperation") == 0)
                return new BasicBinaryOperationQuantityJSON();
            break;
        case 'F':
            if (strcmp(&(key[1]), "initeRational") == 0)
                return new FiniteRationalQuantityJSON();
            break;
        case 'N':
            if (strcmp(&(key[1]), "egativeInfinity") == 0)
                return new NegativeInfinityQuantityJSON();
            break;
        case 'P':
            if (strcmp(&(key[1]), "ositiveInfinity") == 0)
                return new PositiveInfinityQuantityJSON();
            break;
        case 'S':
            if (strcmp(&(key[1]), "cientificNotation") == 0)
                return new ScientificNotationQuantityJSON();
            break;
        case 'U':
            if (strcmp(&(key[1]), "nsignedInfinity") == 0)
                return new UnsignedInfinityQuantityJSON();
            break;
        case 'Z':
            if (strcmp(&(key[1]), "eroZero") == 0)
                return new ZeroZeroQuantityJSON();
            break;
        default:
            break;
      }

    class GenericQuantityJSON : public QuantityJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericQuantityJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericQuantityJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getQuantityKind(void) const  { return key.c_str(); }
        size_t extraQuantityComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraQuantityComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraQuantityComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraQuantityComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraQuantityLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraQuantityLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraQuantityAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraQuantitySetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraQuantityLookup(key);
            if (old_field == NULL)
              {
                extraQuantityAppendPair(key, new_component);
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
    return new GenericQuantityJSON(key);
  }
QuantityJSON *QuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    QuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<QuantityJSON>, QuantityJSON *, bool> generator("Type Quantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
