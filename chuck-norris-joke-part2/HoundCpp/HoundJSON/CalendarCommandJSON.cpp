/* file "CalendarCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CalendarCommandJSON.h"

#include "CalendarCommandJSON.h"
#include "CalendarCreateCalendarItemCommandJSON.h"
#include "ModifyCalendarItemCommandJSON.h"
#include "CancelCalendarItemCommandJSON.h"
#include "DisplayCalendarItemCommandJSON.h"
#include "CancelCalendarItemsCommandJSON.h"
#include "DisplayCalendarItemsCommandJSON.h"


CalendarCommandJSON::CalendarCommandJSON(const CalendarCommandJSON &)
  {
    assert(false);
  }

CalendarCommandJSON &CalendarCommandJSON::operator=(const CalendarCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

CalendarCommandJSON::CalendarCommandJSON(void)
  {
  }

CalendarCommandJSON::~CalendarCommandJSON(void)
  {
  }

const char *CalendarCommandJSON::getCommandKind(void) const
  {
    return "CalendarCommand";
  }

CalendarCommandJSON *CalendarCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strncmp(&(key[2]), "ncelItem", 8) == 0)
                      {
                        switch ((unsigned char)(key[10]))
                          {
                            case 0:
                                return new CancelCalendarItemCommandJSON();
                            case 's':
                                if (key[11] == 0)
                                    return new CancelCalendarItemsCommandJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "eateItem") == 0)
                        return new CalendarCreateCalendarItemCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(key[1]), "isplayItem", 10) == 0)
              {
                switch ((unsigned char)(key[11]))
                  {
                    case 0:
                        return new DisplayCalendarItemCommandJSON();
                    case 's':
                        if (key[12] == 0)
                            return new DisplayCalendarItemsCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'M':
            if (strcmp(&(key[1]), "odifyItem") == 0)
                return new ModifyCalendarItemCommandJSON();
            break;
        default:
            break;
      }

    class GenericCalendarCommandJSON : public CalendarCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericCalendarCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericCalendarCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getCalendarCommandKind(void) const  { return key.c_str(); }
        size_t extraCalendarCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraCalendarCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraCalendarCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraCalendarCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraCalendarCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraCalendarCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraCalendarCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraCalendarCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraCalendarCommandLookup(key);
            if (old_field == NULL)
              {
                extraCalendarCommandAppendPair(key, new_component);
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
    return new GenericCalendarCommandJSON(key);
  }
CalendarCommandJSON *CalendarCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CalendarCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CalendarCommandJSON>, CalendarCommandJSON *, bool> generator("Type CalendarCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
