/* file "SportsOlympicsMedalStandingsArgumentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsArgumentJSON.h"

#include "SportsOlympicsMedalStandingsArgumentJSON.h"
#include "SportsOlympicsMedalStandingsArgumentHostJSON.h"
#include "SportsOlympicsMedalStandingsArgumentYearJSON.h"
#include "SportsOlympicsMedalStandingsArgumentLastJSON.h"
#include "SportsOlympicsMedalStandingsArgumentMedalTypeJSON.h"
#include "SportsOlympicsMedalStandingsArgumentOrganizationJSON.h"
#include "SportsOlympicsMedalStandingsArgumentQueryTypeJSON.h"
#include "SportsOlympicsMedalStandingsArgumentRankJSON.h"
#include "SportsOlympicsMedalStandingsArgumentSeasonJSON.h"
#include "SportsOlympicsMedalStandingsArgumentSortMethodJSON.h"


SportsOlympicsMedalStandingsArgumentJSON::SportsOlympicsMedalStandingsArgumentJSON(const SportsOlympicsMedalStandingsArgumentJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsArgumentJSON &SportsOlympicsMedalStandingsArgumentJSON::operator=(const SportsOlympicsMedalStandingsArgumentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsArgumentJSON::fromJSONArgumentID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ArgumentID of SportsOlympicsMedalStandingsArgumentJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ArgumentID of SportsOlympicsMedalStandingsArgumentJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setArgumentID(extracted_integer);
  }

SportsOlympicsMedalStandingsArgumentJSON::SportsOlympicsMedalStandingsArgumentJSON(void) :
        flagHasArgumentID(false)
  {
  }

SportsOlympicsMedalStandingsArgumentJSON::~SportsOlympicsMedalStandingsArgumentJSON(void)
  {
  }

bool SportsOlympicsMedalStandingsArgumentJSON::hasArgumentID(void) const
  {
    return flagHasArgumentID;
  }

OInteger SportsOlympicsMedalStandingsArgumentJSON::getArgumentID(void)
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

const OInteger SportsOlympicsMedalStandingsArgumentJSON::getArgumentID(void) const
  {
    assert(flagHasArgumentID);
    return storeArgumentID;
  }

char SportsOlympicsMedalStandingsArgumentJSON::Generator::lowerBoundArgumentID[] = "0";
SportsOlympicsMedalStandingsArgumentJSON *SportsOlympicsMedalStandingsArgumentJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'H':
            if (strcmp(&(key[1]), "ost") == 0)
                return new SportsOlympicsMedalStandingsArgumentHostJSON();
            break;
        case 'L':
            if (strcmp(&(key[1]), "ast") == 0)
                return new SportsOlympicsMedalStandingsArgumentLastJSON();
            break;
        case 'M':
            if (strcmp(&(key[1]), "edalType") == 0)
                return new SportsOlympicsMedalStandingsArgumentMedalTypeJSON();
            break;
        case 'O':
            if (strcmp(&(key[1]), "rganization") == 0)
                return new SportsOlympicsMedalStandingsArgumentOrganizationJSON();
            break;
        case 'Q':
            if (strcmp(&(key[1]), "ueryType") == 0)
                return new SportsOlympicsMedalStandingsArgumentQueryTypeJSON();
            break;
        case 'R':
            if (strcmp(&(key[1]), "ank") == 0)
                return new SportsOlympicsMedalStandingsArgumentRankJSON();
            break;
        case 'S':
            switch ((unsigned char)(key[1]))
              {
                case 'e':
                    if (strcmp(&(key[2]), "ason") == 0)
                        return new SportsOlympicsMedalStandingsArgumentSeasonJSON();
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "rtMethod") == 0)
                        return new SportsOlympicsMedalStandingsArgumentSortMethodJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'Y':
            if (strcmp(&(key[1]), "ear") == 0)
                return new SportsOlympicsMedalStandingsArgumentYearJSON();
            break;
        default:
            break;
      }

    class GenericSportsOlympicsMedalStandingsArgumentJSON : public SportsOlympicsMedalStandingsArgumentJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsOlympicsMedalStandingsArgumentJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsOlympicsMedalStandingsArgumentJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsOlympicsMedalStandingsArgumentKind(void) const  { return key.c_str(); }
        size_t extraSportsOlympicsMedalStandingsArgumentComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsOlympicsMedalStandingsArgumentComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsOlympicsMedalStandingsArgumentComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsOlympicsMedalStandingsArgumentLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsOlympicsMedalStandingsArgumentAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsOlympicsMedalStandingsArgumentSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsOlympicsMedalStandingsArgumentLookup(key);
            if (old_field == NULL)
              {
                extraSportsOlympicsMedalStandingsArgumentAppendPair(key, new_component);
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
    return new GenericSportsOlympicsMedalStandingsArgumentJSON(key);
  }
SportsOlympicsMedalStandingsArgumentJSON *SportsOlympicsMedalStandingsArgumentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsArgumentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsArgumentJSON>, SportsOlympicsMedalStandingsArgumentJSON *, bool> generator("Type SportsOlympicsMedalStandingsArgument", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
