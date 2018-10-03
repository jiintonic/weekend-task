/* file "SportsOlympicsEventSchedulesAndResultsArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"

#include "SportsOlympicsEventSchedulesAndResultsArgumentJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentEventJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentHostJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentLastJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentRankJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsArgumentYearJSON.h"


SportsOlympicsEventSchedulesAndResultsArgumentJSON::SportsOlympicsEventSchedulesAndResultsArgumentJSON(const SportsOlympicsEventSchedulesAndResultsArgumentJSON &)
  {
    assert(false);
  }

SportsOlympicsEventSchedulesAndResultsArgumentJSON &SportsOlympicsEventSchedulesAndResultsArgumentJSON::operator=(const SportsOlympicsEventSchedulesAndResultsArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsEventSchedulesAndResultsArgumentJSON::fromJSONArgumentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArgumentID of SportsOlympicsEventSchedulesAndResultsArgumentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArgumentID of SportsOlympicsEventSchedulesAndResultsArgumentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArgumentID(extracted_integer);
  }

SportsOlympicsEventSchedulesAndResultsArgumentJSON::SportsOlympicsEventSchedulesAndResultsArgumentJSON(void) :
        flagHasArgumentID(false)
  {
  }

SportsOlympicsEventSchedulesAndResultsArgumentJSON::~SportsOlympicsEventSchedulesAndResultsArgumentJSON(void)
  {
  }

bool SportsOlympicsEventSchedulesAndResultsArgumentJSON::hasArgumentID(void) const
  {
    return flagHasArgumentID;
  }

OInteger SportsOlympicsEventSchedulesAndResultsArgumentJSON::getArgumentID(void)
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

const OInteger SportsOlympicsEventSchedulesAndResultsArgumentJSON::getArgumentID(void) const
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

char SportsOlympicsEventSchedulesAndResultsArgumentJSON::Generator::lowerBoundArgumentID[] = "0";
SportsOlympicsEventSchedulesAndResultsArgumentJSON *SportsOlympicsEventSchedulesAndResultsArgumentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'E':
            if (strncmp(&(key[1]), "vent", 4) == 0)
              {
                switch ((unsigned char)(key[5]))
                  {
                    case 0:
                        return new SportsOlympicsEventSchedulesAndResultsArgumentEventJSON();
                    case 'C':
                        if (strcmp(&(key[6]), "ategory") == 0)
                            return new SportsOlympicsEventSchedulesAndResultsArgumentEventCategoryJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'G':
            if (strcmp(&(key[1]), "ender") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentGenderJSON();
            break;
        case 'H':
            if (strcmp(&(key[1]), "ost") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentHostJSON();
            break;
        case 'L':
            if (strcmp(&(key[1]), "ast") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentLastJSON();
            break;
        case 'M':
            if (strcmp(&(key[1]), "edalType") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentDateAndTimeJSON();
            break;
        case 'Q':
            if (strcmp(&(key[1]), "ueryType") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentQueryTypeJSON();
            break;
        case 'R':
            if (strcmp(&(key[1]), "ank") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentRankJSON();
            break;
        case 'S':
            if (strcmp(&(key[1]), "eason") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentSeasonJSON();
            break;
        case 'Y':
            if (strcmp(&(key[1]), "ear") == 0)
                return new SportsOlympicsEventSchedulesAndResultsArgumentYearJSON();
            break;
        default:
            break;
      }

    class GenericSportsOlympicsEventSchedulesAndResultsArgumentJSON : public SportsOlympicsEventSchedulesAndResultsArgumentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsOlympicsEventSchedulesAndResultsArgumentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsOlympicsEventSchedulesAndResultsArgumentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsOlympicsEventSchedulesAndResultsArgumentKind(void) const  { return key.c_str(); }
        size_t extraSportsOlympicsEventSchedulesAndResultsArgumentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsOlympicsEventSchedulesAndResultsArgumentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsOlympicsEventSchedulesAndResultsArgumentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsArgumentLookup(key);
            if (old_field == NULL)
              {
                extraSportsOlympicsEventSchedulesAndResultsArgumentAppendPair(key, new_component);
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
    return new GenericSportsOlympicsEventSchedulesAndResultsArgumentJSON(key);
  }
SportsOlympicsEventSchedulesAndResultsArgumentJSON *SportsOlympicsEventSchedulesAndResultsArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsEventSchedulesAndResultsArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsArgumentJSON>, SportsOlympicsEventSchedulesAndResultsArgumentJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
