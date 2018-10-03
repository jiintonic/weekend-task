/* file "MusicChartsCommandConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicChartsCommandConversationStateElementJSON.h"

#include "MusicChartsCommandConversationStateElementJSON.h"


MusicChartsCommandConversationStateElementJSON::MusicChartsCommandConversationStateElementJSON(const MusicChartsCommandConversationStateElementJSON &)
  {
    assert(false);
  }

MusicChartsCommandConversationStateElementJSON &MusicChartsCommandConversationStateElementJSON::operator=(const MusicChartsCommandConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicChartsCommandConversationStateElementJSON::extraMusicChartsSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_MusicChartsSearchCriteria;
    storeMusicChartsSearchCriteria->write_as_json(&handler_MusicChartsSearchCriteria);
    handler_MusicChartsSearchCriteria.result->add_reference();
    return handler_MusicChartsSearchCriteria.result;
  }

void MusicChartsCommandConversationStateElementJSON::fromJSONMusicChartsSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicChartsSearchCriteriaJSON *convert_classy = MusicChartsSearchCriteriaJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicChartsSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

MusicChartsCommandConversationStateElementJSON::MusicChartsCommandConversationStateElementJSON(void) :
        flagHasMusicChartsSearchCriteria(false)
  {
    extraIndex = create_string_index();
  }

MusicChartsCommandConversationStateElementJSON::~MusicChartsCommandConversationStateElementJSON(void)
  {
    if (flagHasMusicChartsSearchCriteria)
      {
        storeMusicChartsSearchCriteria->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MusicChartsCommandConversationStateElementJSON::getMusicCommandConversationStateElementKind(void) const
  {
    return "MusicChartsCommandConversationStateElement";
  }

bool MusicChartsCommandConversationStateElementJSON::hasMusicChartsSearchCriteria(void) const
  {
    return flagHasMusicChartsSearchCriteria;
  }

MusicChartsSearchCriteriaJSON * MusicChartsCommandConversationStateElementJSON::getMusicChartsSearchCriteria(void)
  {
    assert(flagHasMusicChartsSearchCriteria);
    return storeMusicChartsSearchCriteria;
  }

const MusicChartsSearchCriteriaJSON * MusicChartsCommandConversationStateElementJSON::getMusicChartsSearchCriteria(void) const
  {
    assert(flagHasMusicChartsSearchCriteria);
    return storeMusicChartsSearchCriteria;
  }

MusicChartsCommandConversationStateElementJSON *MusicChartsCommandConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicChartsCommandConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicChartsCommandConversationStateElementJSON>, MusicChartsCommandConversationStateElementJSON *, bool> generator("Type MusicChartsCommandConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
