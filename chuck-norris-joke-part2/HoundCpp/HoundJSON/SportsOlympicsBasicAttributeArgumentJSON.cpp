/* file "SportsOlympicsBasicAttributeArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsBasicAttributeArgumentJSON.h"

#include "SportsOlympicsBasicAttributeArgumentJSON.h"
#include "SportsOlympicsBasicAttributeArgumentQueryTypeJSON.h"
#include "SportsOlympicsBasicAttributeArgumentHostJSON.h"
#include "SportsOlympicsBasicAttributeArgumentNextJSON.h"
#include "SportsOlympicsBasicAttributeArgumentLastJSON.h"
#include "SportsOlympicsBasicAttributeArgumentSeasonJSON.h"
#include "SportsOlympicsBasicAttributeArgumentYearJSON.h"


SportsOlympicsBasicAttributeArgumentJSON::SportsOlympicsBasicAttributeArgumentJSON(const SportsOlympicsBasicAttributeArgumentJSON &)
  {
    assert(false);
  }

SportsOlympicsBasicAttributeArgumentJSON &SportsOlympicsBasicAttributeArgumentJSON::operator=(const SportsOlympicsBasicAttributeArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsBasicAttributeArgumentJSON::fromJSONArgumentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArgumentID of SportsOlympicsBasicAttributeArgumentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArgumentID of SportsOlympicsBasicAttributeArgumentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArgumentID(extracted_integer);
  }

SportsOlympicsBasicAttributeArgumentJSON::SportsOlympicsBasicAttributeArgumentJSON(void) :
        flagHasArgumentID(false)
  {
  }

SportsOlympicsBasicAttributeArgumentJSON::~SportsOlympicsBasicAttributeArgumentJSON(void)
  {
  }

bool SportsOlympicsBasicAttributeArgumentJSON::hasArgumentID(void) const
  {
    return flagHasArgumentID;
  }

OInteger SportsOlympicsBasicAttributeArgumentJSON::getArgumentID(void)
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

const OInteger SportsOlympicsBasicAttributeArgumentJSON::getArgumentID(void) const
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

char SportsOlympicsBasicAttributeArgumentJSON::Generator::lowerBoundArgumentID[] = "0";
SportsOlympicsBasicAttributeArgumentJSON *SportsOlympicsBasicAttributeArgumentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'H':
            if (strcmp(&(key[1]), "ost") == 0)
                return new SportsOlympicsBasicAttributeArgumentHostJSON();
            break;
        case 'L':
            if (strcmp(&(key[1]), "ast") == 0)
                return new SportsOlympicsBasicAttributeArgumentLastJSON();
            break;
        case 'N':
            if (strcmp(&(key[1]), "ext") == 0)
                return new SportsOlympicsBasicAttributeArgumentNextJSON();
            break;
        case 'Q':
            if (strcmp(&(key[1]), "ueryType") == 0)
                return new SportsOlympicsBasicAttributeArgumentQueryTypeJSON();
            break;
        case 'S':
            if (strcmp(&(key[1]), "eason") == 0)
                return new SportsOlympicsBasicAttributeArgumentSeasonJSON();
            break;
        case 'Y':
            if (strcmp(&(key[1]), "ear") == 0)
                return new SportsOlympicsBasicAttributeArgumentYearJSON();
            break;
        default:
            break;
      }

    class GenericSportsOlympicsBasicAttributeArgumentJSON : public SportsOlympicsBasicAttributeArgumentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsOlympicsBasicAttributeArgumentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsOlympicsBasicAttributeArgumentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsOlympicsBasicAttributeArgumentKind(void) const  { return key.c_str(); }
        size_t extraSportsOlympicsBasicAttributeArgumentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsOlympicsBasicAttributeArgumentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsOlympicsBasicAttributeArgumentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsOlympicsBasicAttributeArgumentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsOlympicsBasicAttributeArgumentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsOlympicsBasicAttributeArgumentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsOlympicsBasicAttributeArgumentLookup(key);
            if (old_field == NULL)
              {
                extraSportsOlympicsBasicAttributeArgumentAppendPair(key, new_component);
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
    return new GenericSportsOlympicsBasicAttributeArgumentJSON(key);
  }
SportsOlympicsBasicAttributeArgumentJSON *SportsOlympicsBasicAttributeArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsBasicAttributeArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeArgumentJSON>, SportsOlympicsBasicAttributeArgumentJSON *, bool> generator("Type SportsOlympicsBasicAttributeArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
