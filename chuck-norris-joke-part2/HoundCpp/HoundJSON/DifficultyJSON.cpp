/* file "DifficultyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DifficultyJSON.h"

#include "DifficultyJSON.h"


DifficultyJSON::DifficultyJSON(const DifficultyJSON &)
  {
    assert(false);
  }

DifficultyJSON &DifficultyJSON::operator=(const DifficultyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DifficultyJSON::fromJSONDifficulty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Difficulty of DifficultyJSON is not a string.");
    setDifficulty(std::string(json_string->getData()));
  }

DifficultyJSON::DifficultyJSON(void) :
        flagHasDifficulty(false)
  {
    extraIndex = create_string_index();
  }

DifficultyJSON::~DifficultyJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DifficultyJSON::hasDifficulty(void) const
  {
    return flagHasDifficulty;
  }

std::string DifficultyJSON::getDifficulty(void)
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

const std::string DifficultyJSON::getDifficulty(void) const
  {
    assert(flagHasDifficulty);
    return storeDifficulty;
  }

DifficultyJSON *DifficultyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DifficultyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DifficultyJSON>, DifficultyJSON *, bool> generator("Type Difficulty", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
