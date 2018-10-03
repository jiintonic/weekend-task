/* file "UberInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberInformationNuggetJSON.h"

#include "UberInformationNuggetJSON.h"
#include "UberCancelInformationNuggetJSON.h"
#include "UberEstimatesInformationNuggetJSON.h"
#include "UberProductsInformationNuggetJSON.h"
#include "UberStatusInformationNuggetJSON.h"


UberInformationNuggetJSON::UberInformationNuggetJSON(const UberInformationNuggetJSON &)
  {
    assert(false);
  }

UberInformationNuggetJSON &UberInformationNuggetJSON::operator=(const UberInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberInformationNuggetJSON::UberInformationNuggetJSON(void)
  {
  }

UberInformationNuggetJSON::~UberInformationNuggetJSON(void)
  {
  }

const char *UberInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Uber";
  }

UberInformationNuggetJSON *UberInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Uber", 4) == 0)
      {
        switch ((unsigned char)(key[4]))
          {
            case 'C':
                if (strcmp(&(key[5]), "ancel") == 0)
                    return new UberCancelInformationNuggetJSON();
                break;
            case 'E':
                if (strcmp(&(key[5]), "stimates") == 0)
                    return new UberEstimatesInformationNuggetJSON();
                break;
            case 'P':
                if (strcmp(&(key[5]), "roducts") == 0)
                    return new UberProductsInformationNuggetJSON();
                break;
            case 'S':
                if (strcmp(&(key[5]), "tatus") == 0)
                    return new UberStatusInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericUberInformationNuggetJSON : public UberInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUberInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUberInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getUberNuggetKind(void) const  { return key.c_str(); }
        size_t extraUberInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUberInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUberInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUberInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUberInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUberInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUberInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUberInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUberInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraUberInformationNuggetAppendPair(key, new_component);
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
    return new GenericUberInformationNuggetJSON(key);
  }
UberInformationNuggetJSON *UberInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberInformationNuggetJSON>, UberInformationNuggetJSON *, bool> generator("Type UberInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
