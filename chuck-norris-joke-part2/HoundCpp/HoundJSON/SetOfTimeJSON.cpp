/* file "SetOfTimeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SetOfTimeJSON.h"

#include "SetOfTimeJSON.h"
#include "DateAndOrTimeRangeSetOfTimeJSON.h"
#include "DateAndOrTimeSetOfTimeJSON.h"
#include "PointInTimeSetOfTimeJSON.h"


SetOfTimeJSON::SetOfTimeJSON(const SetOfTimeJSON &)
  {
    assert(false);
  }

SetOfTimeJSON &SetOfTimeJSON::operator=(const SetOfTimeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

SetOfTimeJSON::SetOfTimeJSON(void)
  {
  }

SetOfTimeJSON::~SetOfTimeJSON(void)
  {
  }

SetOfTimeJSON *SetOfTimeJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'D':
            if (strncmp(&(key[1]), "ateAndOrTime", 12) == 0)
              {
                switch ((unsigned char)(key[13]))
                  {
                    case 0:
                        return new DateAndOrTimeSetOfTimeJSON();
                    case 'R':
                        if (strcmp(&(key[14]), "ange") == 0)
                            return new DateAndOrTimeRangeSetOfTimeJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(key[1]), "oint") == 0)
                return new PointInTimeSetOfTimeJSON();
            break;
        default:
            break;
      }

    class GenericSetOfTimeJSON : public SetOfTimeJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSetOfTimeJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSetOfTimeJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSetOfTimeKind(void) const  { return key.c_str(); }
        size_t extraSetOfTimeComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSetOfTimeComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSetOfTimeComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSetOfTimeComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSetOfTimeLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSetOfTimeLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSetOfTimeAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSetOfTimeSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSetOfTimeLookup(key);
            if (old_field == NULL)
              {
                extraSetOfTimeAppendPair(key, new_component);
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
    return new GenericSetOfTimeJSON(key);
  }
SetOfTimeJSON *SetOfTimeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SetOfTimeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SetOfTimeJSON>, SetOfTimeJSON *, bool> generator("Type SetOfTime", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
