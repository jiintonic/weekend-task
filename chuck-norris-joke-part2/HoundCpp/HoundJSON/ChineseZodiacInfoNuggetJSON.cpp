/* file "ChineseZodiacInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacInfoNuggetJSON.h"

#include "ChineseZodiacInfoNuggetJSON.h"
#include "ChineseZodiacGeneralInfoNuggetJSON.h"
#include "ChineseZodiacSignOfYearInfoNuggetJSON.h"
#include "ChineseZodiacYearOfSignInfoNuggetJSON.h"
#include "ChineseZodiacSignOfSignInfoNuggetJSON.h"
#include "ChineseZodiacNoSuchSignInfoNuggetJSON.h"


ChineseZodiacInfoNuggetJSON::ChineseZodiacInfoNuggetJSON(const ChineseZodiacInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacInfoNuggetJSON &ChineseZodiacInfoNuggetJSON::operator=(const ChineseZodiacInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

ChineseZodiacInfoNuggetJSON::ChineseZodiacInfoNuggetJSON(void)
  {
  }

ChineseZodiacInfoNuggetJSON::~ChineseZodiacInfoNuggetJSON(void)
  {
  }

const char *ChineseZodiacInfoNuggetJSON::getNuggetKind(void) const
  {
    return "ChineseZodiacInfoNugget";
  }

ChineseZodiacInfoNuggetJSON *ChineseZodiacInfoNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "ChineseZodiac", 13) == 0)
      {
        switch ((unsigned char)(key[13]))
          {
            case 'G':
                if (strcmp(&(key[14]), "eneralInfoNugget") == 0)
                    return new ChineseZodiacGeneralInfoNuggetJSON();
                break;
            case 'N':
                if (strcmp(&(key[14]), "oSuchSignInfoNugget") == 0)
                    return new ChineseZodiacNoSuchSignInfoNuggetJSON();
                break;
            case 'S':
                if (strncmp(&(key[14]), "ignOf", 5) == 0)
                  {
                    switch ((unsigned char)(key[19]))
                      {
                        case 'S':
                            if (strcmp(&(key[20]), "ignInfoNugget") == 0)
                                return new ChineseZodiacSignOfSignInfoNuggetJSON();
                            break;
                        case 'Y':
                            if (strcmp(&(key[20]), "earInfoNugget") == 0)
                                return new ChineseZodiacSignOfYearInfoNuggetJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'Y':
                if (strcmp(&(key[14]), "earOfSignInfoNugget") == 0)
                    return new ChineseZodiacYearOfSignInfoNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericChineseZodiacInfoNuggetJSON : public ChineseZodiacInfoNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericChineseZodiacInfoNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericChineseZodiacInfoNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getChineseZodiacInfoNuggetKind(void) const  { return key.c_str(); }
        size_t extraChineseZodiacInfoNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraChineseZodiacInfoNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraChineseZodiacInfoNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraChineseZodiacInfoNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraChineseZodiacInfoNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraChineseZodiacInfoNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraChineseZodiacInfoNuggetLookup(key);
            if (old_field == NULL)
              {
                extraChineseZodiacInfoNuggetAppendPair(key, new_component);
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
    return new GenericChineseZodiacInfoNuggetJSON(key);
  }
ChineseZodiacInfoNuggetJSON *ChineseZodiacInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacInfoNuggetJSON>, ChineseZodiacInfoNuggetJSON *, bool> generator("Type ChineseZodiacInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
