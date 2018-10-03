/* file "PreviousPresetOrChannelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PreviousPresetOrChannelCommandJSON.h"

#include "PreviousPresetOrChannelCommandJSON.h"


PreviousPresetOrChannelCommandJSON::PreviousPresetOrChannelCommandJSON(const PreviousPresetOrChannelCommandJSON &)
  {
    assert(false);
  }

PreviousPresetOrChannelCommandJSON &PreviousPresetOrChannelCommandJSON::operator=(const PreviousPresetOrChannelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *PreviousPresetOrChannelCommandJSON::extraPresetResultToJSON(void) const
  {
    JSONValueHandler handler_PresetResult;
    storePresetResult->write_as_json(&handler_PresetResult);
    handler_PresetResult.result->add_reference();
    return handler_PresetResult.result;
  }

JSONValue *PreviousPresetOrChannelCommandJSON::extraChannelResultToJSON(void) const
  {
    JSONValueHandler handler_ChannelResult;
    storeChannelResult->write_as_json(&handler_ChannelResult);
    handler_ChannelResult.result->add_reference();
    return handler_ChannelResult.result;
  }

void PreviousPresetOrChannelCommandJSON::fromJSONPresetResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPresetResult(convert_classy);
    convert_classy->remove_reference();
  }

void PreviousPresetOrChannelCommandJSON::fromJSONChannelResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setChannelResult(convert_classy);
    convert_classy->remove_reference();
  }

PreviousPresetOrChannelCommandJSON::PreviousPresetOrChannelCommandJSON(void) :
        flagHasPresetResult(false),
        flagHasChannelResult(false)
  {
    extraIndex = create_string_index();
  }

PreviousPresetOrChannelCommandJSON::~PreviousPresetOrChannelCommandJSON(void)
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

const char *PreviousPresetOrChannelCommandJSON::getRadioCommandKind(void) const
  {
    return "PreviousPresetOrChannel";
  }

bool PreviousPresetOrChannelCommandJSON::hasPresetResult(void) const
  {
    return flagHasPresetResult;
  }

DynamicResponseJSON * PreviousPresetOrChannelCommandJSON::getPresetResult(void)
  {
    assert(flagHasPresetResult);
    return storePresetResult;
  }

const DynamicResponseJSON * PreviousPresetOrChannelCommandJSON::getPresetResult(void) const
  {
    assert(flagHasPresetResult);
    return storePresetResult;
  }

bool PreviousPresetOrChannelCommandJSON::hasChannelResult(void) const
  {
    return flagHasChannelResult;
  }

DynamicResponseJSON * PreviousPresetOrChannelCommandJSON::getChannelResult(void)
  {
    assert(flagHasChannelResult);
    return storeChannelResult;
  }

const DynamicResponseJSON * PreviousPresetOrChannelCommandJSON::getChannelResult(void) const
  {
    assert(flagHasChannelResult);
    return storeChannelResult;
  }

PreviousPresetOrChannelCommandJSON *PreviousPresetOrChannelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PreviousPresetOrChannelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PreviousPresetOrChannelCommandJSON>, PreviousPresetOrChannelCommandJSON *, bool> generator("Type PreviousPresetOrChannelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
