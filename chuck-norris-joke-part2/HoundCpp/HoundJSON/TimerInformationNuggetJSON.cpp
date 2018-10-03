/* file "TimerInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerInformationNuggetJSON.h"

#include "TimerInformationNuggetJSON.h"
#include "TimerQuitInformationNuggetJSON.h"


TimerInformationNuggetJSON::TimerInformationNuggetJSON(const TimerInformationNuggetJSON &)
  {
    assert(false);
  }

TimerInformationNuggetJSON &TimerInformationNuggetJSON::operator=(const TimerInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

TimerInformationNuggetJSON::TimerInformationNuggetJSON(void)
  {
  }

TimerInformationNuggetJSON::~TimerInformationNuggetJSON(void)
  {
  }

const char *TimerInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Timer";
  }

TimerInformationNuggetJSON *TimerInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strcmp(key, "TimerQuit") == 0)
        return new TimerQuitInformationNuggetJSON();

    class GenericTimerInformationNuggetJSON : public TimerInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericTimerInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericTimerInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getTimerNuggetKind(void) const  { return key.c_str(); }
        size_t extraTimerInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraTimerInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraTimerInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraTimerInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraTimerInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraTimerInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraTimerInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraTimerInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTimerInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraTimerInformationNuggetAppendPair(key, new_component);
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
    return new GenericTimerInformationNuggetJSON(key);
  }
TimerInformationNuggetJSON *TimerInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerInformationNuggetJSON>, TimerInformationNuggetJSON *, bool> generator("Type TimerInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
