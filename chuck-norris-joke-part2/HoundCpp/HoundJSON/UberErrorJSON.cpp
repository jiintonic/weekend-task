/* file "UberErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberErrorJSON.h"

#include "UberErrorJSON.h"
#include "UberApiErrorJSON.h"
#include "UberErrorUnknownLocationJSON.h"
#include "UberErrorMissingCredentialsJSON.h"


UberErrorJSON::UberErrorJSON(const UberErrorJSON &)
  {
    assert(false);
  }

UberErrorJSON &UberErrorJSON::operator=(const UberErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UberErrorJSON::extraErrorDetailsToJSON(void) const
  {
    JSONStringValue *generated_string_ErrorDetails = new JSONStringValue(storeErrorDetails.c_str());
    return generated_string_ErrorDetails;
  }

void UberErrorJSON::fromJSONErrorDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorDetails of UberErrorJSON is not a string.");
    setErrorDetails(std::string(json_string->getData()));
  }

UberErrorJSON::UberErrorJSON(void) :
        flagHasErrorDetails(false)
  {
  }

UberErrorJSON::~UberErrorJSON(void)
  {
  }

const char *UberErrorJSON::getErrorType(void) const
  {
    return "UberError";
  }

bool UberErrorJSON::hasErrorDetails(void) const
  {
    return flagHasErrorDetails;
  }

std::string UberErrorJSON::getErrorDetails(void)
  {
    assert(flagHasErrorDetails);
    return storeErrorDetails;
  }

const std::string UberErrorJSON::getErrorDetails(void) const
  {
    assert(flagHasErrorDetails);
    return storeErrorDetails;
  }

UberErrorJSON *UberErrorJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Uber", 4) == 0)
      {
        switch ((unsigned char)(key[4]))
          {
            case 'A':
                if (strcmp(&(key[5]), "piError") == 0)
                    return new UberApiErrorJSON();
                break;
            case 'E':
                if (strncmp(&(key[5]), "rror", 4) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'M':
                            if (strcmp(&(key[10]), "issingCredentials") == 0)
                                return new UberErrorMissingCredentialsJSON();
                            break;
                        case 'U':
                            if (strcmp(&(key[10]), "nknownLocation") == 0)
                                return new UberErrorUnknownLocationJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
      }

    class GenericUberErrorJSON : public UberErrorJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUberErrorJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUberErrorJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getUberErrorKind(void) const  { return key.c_str(); }
        size_t extraUberErrorComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUberErrorComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUberErrorComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUberErrorComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUberErrorLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUberErrorLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUberErrorAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUberErrorSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUberErrorLookup(key);
            if (old_field == NULL)
              {
                extraUberErrorAppendPair(key, new_component);
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
    return new GenericUberErrorJSON(key);
  }
UberErrorJSON *UberErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberErrorJSON>, UberErrorJSON *, bool> generator("Type UberError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
