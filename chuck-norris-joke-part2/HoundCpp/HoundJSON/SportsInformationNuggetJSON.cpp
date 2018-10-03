/* file "SportsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsInformationNuggetJSON.h"

#include "SportsInformationNuggetJSON.h"
#include "SportsGameSchedulesScoresInformationNuggetJSON.h"
#include "SportsPlayersInformationNuggetJSON.h"
#include "SportsStatsInformationNuggetJSON.h"
#include "SportsStandingsInformationNuggetJSON.h"
#include "SportsLeagueLeadersInformationNuggetJSON.h"
#include "SportsPlayoffTriviaInformationNuggetJSON.h"


SportsInformationNuggetJSON::SportsInformationNuggetJSON(const SportsInformationNuggetJSON &)
  {
    assert(false);
  }

SportsInformationNuggetJSON &SportsInformationNuggetJSON::operator=(const SportsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsInformationNuggetJSON::extraUserDataToJSON(void) const
  {
    JSONValueHandler handler_UserData;
    storeUserData->write_as_json(&handler_UserData);
    handler_UserData.result->add_reference();
    return handler_UserData.result;
  }

void SportsInformationNuggetJSON::fromJSONUserData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsUserDataJSON *convert_classy = SportsUserDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserData(convert_classy);
    convert_classy->remove_reference();
  }

SportsInformationNuggetJSON::SportsInformationNuggetJSON(void) :
        flagHasUserData(false)
  {
  }

SportsInformationNuggetJSON::~SportsInformationNuggetJSON(void)
  {
    if (flagHasUserData)
      {
        storeUserData->remove_reference();
      }
  }

const char *SportsInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Sports";
  }

bool SportsInformationNuggetJSON::hasUserData(void) const
  {
    return flagHasUserData;
  }

SportsUserDataJSON * SportsInformationNuggetJSON::getUserData(void)
  {
    assert(flagHasUserData);
    return storeUserData;
  }

const SportsUserDataJSON * SportsInformationNuggetJSON::getUserData(void) const
  {
    assert(flagHasUserData);
    return storeUserData;
  }

SportsInformationNuggetJSON *SportsInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Sports", 6) == 0)
      {
        switch ((unsigned char)(key[6]))
          {
            case 'G':
                if (strcmp(&(key[7]), "ameSchedulesScores") == 0)
                    return new SportsGameSchedulesScoresInformationNuggetJSON();
                break;
            case 'L':
                if (strcmp(&(key[7]), "eagueLeaders") == 0)
                    return new SportsLeagueLeadersInformationNuggetJSON();
                break;
            case 'P':
                if (strncmp(&(key[7]), "lay", 3) == 0)
                  {
                    switch ((unsigned char)(key[10]))
                      {
                        case 'e':
                            if (strcmp(&(key[11]), "rs") == 0)
                                return new SportsPlayersInformationNuggetJSON();
                            break;
                        case 'o':
                            if (strcmp(&(key[11]), "ffTrivia") == 0)
                                return new SportsPlayoffTriviaInformationNuggetJSON();
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(key[7]), "ta", 2) == 0)
                  {
                    switch ((unsigned char)(key[9]))
                      {
                        case 'n':
                            if (strcmp(&(key[10]), "dings") == 0)
                                return new SportsStandingsInformationNuggetJSON();
                            break;
                        case 't':
                            if (strcmp(&(key[10]), "s") == 0)
                                return new SportsStatsInformationNuggetJSON();
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

    class GenericSportsInformationNuggetJSON : public SportsInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsNuggetKind(void) const  { return key.c_str(); }
        size_t extraSportsInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraSportsInformationNuggetAppendPair(key, new_component);
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
    return new GenericSportsInformationNuggetJSON(key);
  }
SportsInformationNuggetJSON *SportsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsInformationNuggetJSON>, SportsInformationNuggetJSON *, bool> generator("Type SportsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
