/* file "SportsPlayoffSpecialGameContainerJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffSpecialGameContainerJSON.h"

#include "SportsPlayoffSpecialGameContainerJSON.h"


SportsPlayoffSpecialGameContainerJSON::SportsPlayoffSpecialGameContainerJSON(const SportsPlayoffSpecialGameContainerJSON &)
  {
    assert(false);
  }

SportsPlayoffSpecialGameContainerJSON &SportsPlayoffSpecialGameContainerJSON::operator=(const SportsPlayoffSpecialGameContainerJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffSpecialGameContainerJSON::fromJSONPlayoffsSpecialGameCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPlayoffsSpecialGameCode(convert_classy);
    convert_classy->remove_reference();
  }

SportsPlayoffSpecialGameContainerJSON::SportsPlayoffSpecialGameContainerJSON(void) :
        flagHasPlayoffsSpecialGameCode(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffSpecialGameContainerJSON::~SportsPlayoffSpecialGameContainerJSON(void)
  {
    if (flagHasPlayoffsSpecialGameCode)
      {
        storePlayoffsSpecialGameCode->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffSpecialGameContainerJSON::hasPlayoffsSpecialGameCode(void) const
  {
    return flagHasPlayoffsSpecialGameCode;
  }

SportsPlayoffSpecialGameJSON * SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCode(void)
  {
    assert(flagHasPlayoffsSpecialGameCode);
    return storePlayoffsSpecialGameCode;
  }

const SportsPlayoffSpecialGameJSON * SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCode(void) const
  {
    assert(flagHasPlayoffsSpecialGameCode);
    return storePlayoffsSpecialGameCode;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCodeValue(void)
  {
    return getPlayoffsSpecialGameCode()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCodeValue(void) const
  {
    return getPlayoffsSpecialGameCode()->getValue();
  }

const char *SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCodeAsChars(void) const
  {
    return getPlayoffsSpecialGameCode()->getValueAsChars();
  }

std::string SportsPlayoffSpecialGameContainerJSON::getPlayoffsSpecialGameCodeAsString(void) const
  {
    return getPlayoffsSpecialGameCode()->getValueAsString();
  }

SportsPlayoffSpecialGameContainerJSON *SportsPlayoffSpecialGameContainerJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffSpecialGameContainerJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialGameContainerJSON>, SportsPlayoffSpecialGameContainerJSON *, bool> generator("Type SportsPlayoffSpecialGameContainer", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
