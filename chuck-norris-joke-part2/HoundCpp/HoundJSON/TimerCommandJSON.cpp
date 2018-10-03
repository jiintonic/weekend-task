/* file "TimerCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerCommandJSON.h"

#include "TimerCommandJSON.h"
#include "TimerDisplayCommandJSON.h"
#include "TimerSetCommandJSON.h"
#include "TimerResetCommandJSON.h"
#include "TimerResumeCommandJSON.h"
#include "TimerStopCommandJSON.h"
#include "TimerDeleteCommandJSON.h"
#include "TimerAddTimeCommandJSON.h"
#include "TimerStartModeCommandJSON.h"
#include "TimerNotUnderstoodCommandJSON.h"
#include "TimerQuitCommandJSON.h"


TimerCommandJSON::TimerCommandJSON(const TimerCommandJSON &)
  {
    assert(false);
  }

TimerCommandJSON &TimerCommandJSON::operator=(const TimerCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TimerCommandJSON::TimerCommandJSON(void)
  {
  }

TimerCommandJSON::~TimerCommandJSON(void)
  {
  }

const char *TimerCommandJSON::getCommandKind(void) const
  {
    return "TimerCommand";
  }

TimerCommandJSON *TimerCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Timer", 5) == 0)
      {
        switch ((unsigned char)(key[5]))
          {
            case 'A':
                if (strcmp(&(key[6]), "ddTimeCommand") == 0)
                    return new TimerAddTimeCommandJSON();
                break;
            case 'D':
                switch ((unsigned char)(key[6]))
                  {
                    case 'e':
                        if (strcmp(&(key[7]), "leteCommand") == 0)
                            return new TimerDeleteCommandJSON();
                        break;
                    case 'i':
                        if (strcmp(&(key[7]), "splayCommand") == 0)
                            return new TimerDisplayCommandJSON();
                        break;
                    default:
                        break;
                  }
                break;
            case 'N':
                if (strcmp(&(key[6]), "otUnderstoodCommand") == 0)
                    return new TimerNotUnderstoodCommandJSON();
                break;
            case 'Q':
                if (strcmp(&(key[6]), "uitCommand") == 0)
                    return new TimerQuitCommandJSON();
                break;
            case 'R':
                if (strncmp(&(key[6]), "es", 2) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 'e':
                            if (strcmp(&(key[9]), "tCommand") == 0)
                                return new TimerResetCommandJSON();
                            break;
                        case 'u':
                            if (strcmp(&(key[9]), "meCommand") == 0)
                                return new TimerResumeCommandJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(key[6]))
                  {
                    case 'e':
                        if (strcmp(&(key[7]), "tCommand") == 0)
                            return new TimerSetCommandJSON();
                        break;
                    case 't':
                        switch ((unsigned char)(key[7]))
                          {
                            case 'a':
                                if (strcmp(&(key[8]), "rtModeCommand") == 0)
                                    return new TimerStartModeCommandJSON();
                                break;
                            case 'o':
                                if (strcmp(&(key[8]), "pCommand") == 0)
                                    return new TimerStopCommandJSON();
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                break;
            default:
                break;
          }
      }

    class GenericTimerCommandJSON : public TimerCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericTimerCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericTimerCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getTimerCommandKind(void) const  { return key.c_str(); }
        size_t extraTimerCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraTimerCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraTimerCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraTimerCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraTimerCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraTimerCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraTimerCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraTimerCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTimerCommandLookup(key);
            if (old_field == NULL)
              {
                extraTimerCommandAppendPair(key, new_component);
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
    return new GenericTimerCommandJSON(key);
  }
TimerCommandJSON *TimerCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerCommandJSON>, TimerCommandJSON *, bool> generator("Type TimerCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
