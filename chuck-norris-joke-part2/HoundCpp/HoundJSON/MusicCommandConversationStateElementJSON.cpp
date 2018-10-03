/* file "MusicCommandConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicCommandConversationStateElementJSON.h"

#include "MusicCommandConversationStateElementJSON.h"
#include "MusicSearchCommandConversationStateElementJSON.h"
#include "GuessThatLyricConversationStateElementJSON.h"
#include "MusicPlayerCommandConversationStateElementJSON.h"
#include "MusicChartsCommandConversationStateElementJSON.h"


MusicCommandConversationStateElementJSON::MusicCommandConversationStateElementJSON(const MusicCommandConversationStateElementJSON &)
  {
    assert(false);
  }

MusicCommandConversationStateElementJSON &MusicCommandConversationStateElementJSON::operator=(const MusicCommandConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicCommandConversationStateElementJSON::fromJSONMusicSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchCriteriaJSON *convert_classy = MusicSearchCriteriaJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandConversationStateElementJSON::fromJSONUserRequestedAutoPlay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedAutoPlay of MusicCommandConversationStateElementJSON is not true for false.");
          }
      }
    setUserRequestedAutoPlay(the_bool);
  }

void MusicCommandConversationStateElementJSON::fromJSONResultIdLists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchResultsJSON *convert_classy = MusicSearchResultsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResultIdLists(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandConversationStateElementJSON::fromJSONLastResultIdLists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchResultsJSON *convert_classy = MusicSearchResultsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastResultIdLists(convert_classy);
    convert_classy->remove_reference();
  }

MusicCommandConversationStateElementJSON::MusicCommandConversationStateElementJSON(void) :
        flagHasMusicSearchCriteria(false),
        flagHasUserRequestedAutoPlay(false),
        flagHasResultIdLists(false),
        flagHasLastResultIdLists(false)
  {
  }

MusicCommandConversationStateElementJSON::~MusicCommandConversationStateElementJSON(void)
  {
    if (flagHasMusicSearchCriteria)
      {
        storeMusicSearchCriteria->remove_reference();
      }
    if (flagHasResultIdLists)
      {
        storeResultIdLists->remove_reference();
      }
    if (flagHasLastResultIdLists)
      {
        storeLastResultIdLists->remove_reference();
      }
  }

bool MusicCommandConversationStateElementJSON::hasMusicSearchCriteria(void) const
  {
    return flagHasMusicSearchCriteria;
  }

MusicSearchCriteriaJSON * MusicCommandConversationStateElementJSON::getMusicSearchCriteria(void)
  {
    assert(flagHasMusicSearchCriteria);
    return storeMusicSearchCriteria;
  }

const MusicSearchCriteriaJSON * MusicCommandConversationStateElementJSON::getMusicSearchCriteria(void) const
  {
    assert(flagHasMusicSearchCriteria);
    return storeMusicSearchCriteria;
  }

bool MusicCommandConversationStateElementJSON::hasUserRequestedAutoPlay(void) const
  {
    return flagHasUserRequestedAutoPlay;
  }

bool MusicCommandConversationStateElementJSON::getUserRequestedAutoPlay(void)
  {
    assert(flagHasUserRequestedAutoPlay);
    return storeUserRequestedAutoPlay;
  }

const bool MusicCommandConversationStateElementJSON::getUserRequestedAutoPlay(void) const
  {
    assert(flagHasUserRequestedAutoPlay);
    return storeUserRequestedAutoPlay;
  }

bool MusicCommandConversationStateElementJSON::hasResultIdLists(void) const
  {
    return flagHasResultIdLists;
  }

MusicSearchResultsJSON * MusicCommandConversationStateElementJSON::getResultIdLists(void)
  {
    assert(flagHasResultIdLists);
    return storeResultIdLists;
  }

const MusicSearchResultsJSON * MusicCommandConversationStateElementJSON::getResultIdLists(void) const
  {
    assert(flagHasResultIdLists);
    return storeResultIdLists;
  }

bool MusicCommandConversationStateElementJSON::hasLastResultIdLists(void) const
  {
    return flagHasLastResultIdLists;
  }

MusicSearchResultsJSON * MusicCommandConversationStateElementJSON::getLastResultIdLists(void)
  {
    assert(flagHasLastResultIdLists);
    return storeLastResultIdLists;
  }

const MusicSearchResultsJSON * MusicCommandConversationStateElementJSON::getLastResultIdLists(void) const
  {
    assert(flagHasLastResultIdLists);
    return storeLastResultIdLists;
  }

MusicCommandConversationStateElementJSON *MusicCommandConversationStateElementJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'G':
            if (strcmp(&(key[1]), "uessThatLyricConversationStateElement") == 0)
                return new GuessThatLyricConversationStateElementJSON();
            break;
        case 'M':
            if (strncmp(&(key[1]), "usic", 4) == 0)
              {
                switch ((unsigned char)(key[5]))
                  {
                    case 'C':
                        if (strcmp(&(key[6]), "hartsCommandConversationStateElement") == 0)
                            return new MusicChartsCommandConversationStateElementJSON();
                        break;
                    case 'P':
                        if (strcmp(&(key[6]), "layerCommandConversationStateElement") == 0)
                            return new MusicPlayerCommandConversationStateElementJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[6]), "earchCommandConversationStateElement") == 0)
                            return new MusicSearchCommandConversationStateElementJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericMusicCommandConversationStateElementJSON : public MusicCommandConversationStateElementJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMusicCommandConversationStateElementJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMusicCommandConversationStateElementJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMusicCommandConversationStateElementKind(void) const  { return key.c_str(); }
        size_t extraMusicCommandConversationStateElementComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMusicCommandConversationStateElementComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMusicCommandConversationStateElementComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMusicCommandConversationStateElementLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMusicCommandConversationStateElementAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMusicCommandConversationStateElementSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMusicCommandConversationStateElementLookup(key);
            if (old_field == NULL)
              {
                extraMusicCommandConversationStateElementAppendPair(key, new_component);
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
    return new GenericMusicCommandConversationStateElementJSON(key);
  }
MusicCommandConversationStateElementJSON *MusicCommandConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicCommandConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicCommandConversationStateElementJSON>, MusicCommandConversationStateElementJSON *, bool> generator("Type MusicCommandConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
