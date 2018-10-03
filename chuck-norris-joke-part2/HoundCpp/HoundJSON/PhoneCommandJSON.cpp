/* file "PhoneCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PhoneCommandJSON.h"

#include "PhoneCommandJSON.h"
#include "CallExactContactCommandJSON.h"
#include "DialExactContactCommandJSON.h"
#include "NoPhoneNumberCommandJSON.h"
#include "EnableCallByNumberModeCommandJSON.h"
#include "EnableCallByNameModeCommandJSON.h"
#include "EnableCallByNumberOrNameModeCommandJSON.h"
#include "ShowContactsCommandJSON.h"
#include "ShowCallHistoryCommandJSON.h"
#include "CallNumberCommandJSON.h"
#include "DialNumberCommandJSON.h"
#include "PhoneCancelCommandJSON.h"
#include "HandleCallCommandJSON.h"
#include "RedialCommandJSON.h"
#include "LocalSearchActionsCallCommandJSON.h"


PhoneCommandJSON::PhoneCommandJSON(const PhoneCommandJSON &)
  {
    assert(false);
  }

PhoneCommandJSON &PhoneCommandJSON::operator=(const PhoneCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

PhoneCommandJSON::PhoneCommandJSON(void)
  {
  }

PhoneCommandJSON::~PhoneCommandJSON(void)
  {
  }

const char *PhoneCommandJSON::getCommandKind(void) const
  {
    return "PhoneCommand";
  }

PhoneCommandJSON *PhoneCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            if (strncmp(&(key[1]), "a", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'l':
                        if (strncmp(&(key[3]), "l", 1) == 0)
                          {
                            switch ((unsigned char)(key[4]))
                              {
                                case 'E':
                                    if (strcmp(&(key[5]), "xactContact") == 0)
                                        return new CallExactContactCommandJSON();
                                    break;
                                case 'L':
                                    if (strcmp(&(key[5]), "ocalBusiness") == 0)
                                        return new LocalSearchActionsCallCommandJSON();
                                    break;
                                case 'N':
                                    if (strcmp(&(key[5]), "umber") == 0)
                                        return new CallNumberCommandJSON();
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'n':
                        if (strcmp(&(key[3]), "cel") == 0)
                            return new PhoneCancelCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'D':
            if (strncmp(&(key[1]), "ial", 3) == 0)
              {
                switch ((unsigned char)(key[4]))
                  {
                    case 'E':
                        if (strcmp(&(key[5]), "xactContact") == 0)
                            return new DialExactContactCommandJSON();
                        break;
                    case 'N':
                        if (strcmp(&(key[5]), "umber") == 0)
                            return new DialNumberCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'E':
            if (strncmp(&(key[1]), "nableCallByN", 12) == 0)
              {
                switch ((unsigned char)(key[13]))
                  {
                    case 'a':
                        if (strcmp(&(key[14]), "meMode") == 0)
                            return new EnableCallByNameModeCommandJSON();
                        break;
                    case 'u':
                        if (strncmp(&(key[14]), "mber", 4) == 0)
                          {
                            switch ((unsigned char)(key[18]))
                              {
                                case 'M':
                                    if (strcmp(&(key[19]), "ode") == 0)
                                        return new EnableCallByNumberModeCommandJSON();
                                    break;
                                case 'O':
                                    if (strcmp(&(key[19]), "rNameMode") == 0)
                                        return new EnableCallByNumberOrNameModeCommandJSON();
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
            break;
        case 'H':
            if (strcmp(&(key[1]), "andleCall") == 0)
                return new HandleCallCommandJSON();
            break;
        case 'N':
            if (strcmp(&(key[1]), "oPhoneNumber") == 0)
                return new NoPhoneNumberCommandJSON();
            break;
        case 'R':
            if (strcmp(&(key[1]), "edial") == 0)
                return new RedialCommandJSON();
            break;
        case 'S':
            if (strncmp(&(key[1]), "howC", 4) == 0)
              {
                switch ((unsigned char)(key[5]))
                  {
                    case 'a':
                        if (strcmp(&(key[6]), "llHistory") == 0)
                            return new ShowCallHistoryCommandJSON();
                        break;
                    case 'o':
                        if (strcmp(&(key[6]), "ntacts") == 0)
                            return new ShowContactsCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericPhoneCommandJSON : public PhoneCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericPhoneCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericPhoneCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getPhoneCommandKind(void) const  { return key.c_str(); }
        size_t extraPhoneCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraPhoneCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraPhoneCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraPhoneCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraPhoneCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraPhoneCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraPhoneCommandLookup(key);
            if (old_field == NULL)
              {
                extraPhoneCommandAppendPair(key, new_component);
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
    return new GenericPhoneCommandJSON(key);
  }
PhoneCommandJSON *PhoneCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PhoneCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PhoneCommandJSON>, PhoneCommandJSON *, bool> generator("Type PhoneCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
