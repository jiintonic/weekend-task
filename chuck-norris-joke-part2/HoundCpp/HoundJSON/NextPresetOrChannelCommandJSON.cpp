/* file "NextPresetOrChannelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NextPresetOrChannelCommandJSON.h"

#include "NextPresetOrChannelCommandJSON.h"


NextPresetOrChannelCommandJSON::NextPresetOrChannelCommandJSON(const NextPresetOrChannelCommandJSON &)
  {
    assert(false);
  }

NextPresetOrChannelCommandJSON &NextPresetOrChannelCommandJSON::operator=(const NextPresetOrChannelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NextPresetOrChannelCommandJSON::extraPresetResultToJSON(void) const
  {
    JSONValueHandler handler_PresetResult;
    storePresetResult->write_as_json(&handler_PresetResult);
    handler_PresetResult.result->add_reference();
    return handler_PresetResult.result;
  }

JSONValue *NextPresetOrChannelCommandJSON::extraChannelResultToJSON(void) const
  {
    JSONValueHandler handler_ChannelResult;
    storeChannelResult->write_as_json(&handler_ChannelResult);
    handler_ChannelResult.result->add_reference();
    return handler_ChannelResult.result;
  }

void NextPresetOrChannelCommandJSON::fromJSONPresetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPresetResult(convert_classy);
    convert_classy->remove_reference();
  }

void NextPresetOrChannelCommandJSON::fromJSONChannelResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChannelResult(convert_classy);
    convert_classy->remove_reference();
  }

NextPresetOrChannelCommandJSON::NextPresetOrChannelCommandJSON(void) :
        flagHasPresetResult(false),
        flagHasChannelResult(false)
  {
    extraIndex = create_string_index();
  }

NextPresetOrChannelCommandJSON::~NextPresetOrChannelCommandJSON(void)
  {
    if (flagHasPresetResult)
      {
        storePresetResult->remove_reference();
      }
    if (flagHasChannelResult)
      {
        storeChannelResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NextPresetOrChannelCommandJSON::getRadioCommandKind(void) const
  {
    return "NextPresetOrChannel";
  }

bool NextPresetOrChannelCommandJSON::hasPresetResult(void) const
  {
    return flagHasPresetResult;
  }

DynamicResponseJSON * NextPresetOrChannelCommandJSON::getPresetResult(void)
  {
    assert(flagHasPresetResult);
    return storePresetResult;
  }

const DynamicResponseJSON * NextPresetOrChannelCommandJSON::getPresetResult(void) const
  {
    assert(flagHasPresetResult);
    return storePresetResult;
  }

bool NextPresetOrChannelCommandJSON::hasChannelResult(void) const
  {
    return flagHasChannelResult;
  }

DynamicResponseJSON * NextPresetOrChannelCommandJSON::getChannelResult(void)
  {
    assert(flagHasChannelResult);
    return storeChannelResult;
  }

const DynamicResponseJSON * NextPresetOrChannelCommandJSON::getChannelResult(void) const
  {
    assert(flagHasChannelResult);
    return storeChannelResult;
  }

NextPresetOrChannelCommandJSON *NextPresetOrChannelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NextPresetOrChannelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NextPresetOrChannelCommandJSON>, NextPresetOrChannelCommandJSON *, bool> generator("Type NextPresetOrChannelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
