/* file "UberCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCommandJSON.h"

#include "UberCommandJSON.h"
#include "GetClientUberClientIdCommandJSON.h"
#include "GetClientUberServerTokenCommandJSON.h"
#include "SetClientUberClientIdCommandJSON.h"
#include "SetClientUberServerTokenCommandJSON.h"
#include "UberAccessDataSyncCommandJSON.h"
#include "UberCancelCommandJSON.h"
#include "UberEstimatesCommandJSON.h"
#include "UberLoginCommandJSON.h"
#include "UberProductsCommandJSON.h"
#include "UberRequestsCommandJSON.h"
#include "UberRequireLoginCommandJSON.h"
#include "UberStatusCommandJSON.h"


UberCommandJSON::UberCommandJSON(const UberCommandJSON &)
  {
    assert(false);
  }

UberCommandJSON &UberCommandJSON::operator=(const UberCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

UberCommandJSON::UberCommandJSON(void)
  {
  }

UberCommandJSON::~UberCommandJSON(void)
  {
  }

const char *UberCommandJSON::getCommandKind(void) const
  {
    return "UberCommand";
  }

UberCommandJSON *UberCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'G':
            if (strncmp(&(key[1]), "etClientUber", 12) == 0)
              {
                switch ((unsigned char)(key[13]))
                  {
                    case 'C':
                        if (strcmp(&(key[14]), "lientId") == 0)
                            return new GetClientUberClientIdCommandJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[14]), "erverToken") == 0)
                            return new GetClientUberServerTokenCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strncmp(&(key[1]), "etClientUber", 12) == 0)
              {
                switch ((unsigned char)(key[13]))
                  {
                    case 'C':
                        if (strcmp(&(key[14]), "lientId") == 0)
                            return new SetClientUberClientIdCommandJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[14]), "erverToken") == 0)
                            return new SetClientUberServerTokenCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            if (strncmp(&(key[1]), "ber", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'A':
                        if (strcmp(&(key[5]), "ccessDataSync") == 0)
                            return new UberAccessDataSyncCommandJSON();
                        break;
                    case 'C':
                        if (strcmp(&(key[5]), "ancel") == 0)
                            return new UberCancelCommandJSON();
                        break;
                    case 'E':
                        if (strcmp(&(key[5]), "stimates") == 0)
                            return new UberEstimatesCommandJSON();
                        break;
                    case 'L':
                        if (strcmp(&(key[5]), "ogin") == 0)
                            return new UberLoginCommandJSON();
                        break;
                    case 'P':
                        if (strcmp(&(key[5]), "roducts") == 0)
                            return new UberProductsCommandJSON();
                        break;
                    case 'R':
                        if (strncmp(&(key[5]), "equ", 3) == 0)
                          {
                            switch ((unsigned char)(key[8]))
                              {
                                case 'e':
                                    if (strcmp(&(key[9]), "sts") == 0)
                                      {
                                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UberRequestsCommandKind")));
                                        if (key_value == NULL)
                                            throw("The `UberRequestsCommandKind' field is missing.");
                                        JSONStringValue *key_string_value = key_value->string_value();
                                        if (key_string_value == NULL)
                                            throw("The `UberRequestsCommandKind' field has a non-string value.");
                                        return UberRequestsCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                      }
                                    break;
                                case 'i':
                                    if (strcmp(&(key[9]), "reLogin") == 0)
                                        return new UberRequireLoginCommandJSON();
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(key[5]), "tatus") == 0)
                            return new UberStatusCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericUberCommandJSON : public UberCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericUberCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericUberCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getUberCommandKind(void) const  { return key.c_str(); }
        size_t extraUberCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraUberCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraUberCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraUberCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraUberCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraUberCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraUberCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraUberCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraUberCommandLookup(key);
            if (old_field == NULL)
              {
                extraUberCommandAppendPair(key, new_component);
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
    return new GenericUberCommandJSON(key);
  }
UberCommandJSON *UberCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCommandJSON>, UberCommandJSON *, bool> generator("Type UberCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
