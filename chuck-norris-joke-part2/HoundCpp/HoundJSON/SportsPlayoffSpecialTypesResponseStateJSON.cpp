/* file "SportsPlayoffSpecialTypesResponseStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayoffSpecialTypesResponseStateJSON.h"

#include "SportsPlayoffSpecialTypesResponseStateJSON.h"


SportsPlayoffSpecialTypesResponseStateJSON::SportsPlayoffSpecialTypesResponseStateJSON(const SportsPlayoffSpecialTypesResponseStateJSON &)
  {
    assert(false);
  }

SportsPlayoffSpecialTypesResponseStateJSON &SportsPlayoffSpecialTypesResponseStateJSON::operator=(const SportsPlayoffSpecialTypesResponseStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayoffSpecialTypesResponseStateJSON::fromJSONPlayoffSpecialTypes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayoffSpecialTypes of SportsPlayoffSpecialTypesResponseStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayoffSpecialTypes of SportsPlayoffSpecialTypesResponseStateJSON has too few elements.");
    std::vector< SportsPlayoffSpecialGameJSON * > vector_PlayoffSpecialTypes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PlayoffSpecialTypes1[num1] = convert_classy;
      }
    assert(vector_PlayoffSpecialTypes1.size() >= 1);
    initPlayoffSpecialTypes();
    for (size_t num2 = 0; num2 < vector_PlayoffSpecialTypes1.size(); ++num2)
        appendPlayoffSpecialTypes(vector_PlayoffSpecialTypes1[num2]);
    for (size_t num1 = 0; num1 < vector_PlayoffSpecialTypes1.size(); ++num1)
      {
        vector_PlayoffSpecialTypes1[num1]->remove_reference();
      }
  }

SportsPlayoffSpecialTypesResponseStateJSON::SportsPlayoffSpecialTypesResponseStateJSON(void) :
        flagHasPlayoffSpecialTypes(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayoffSpecialTypesResponseStateJSON::~SportsPlayoffSpecialTypesResponseStateJSON(void)
  {
    if (flagHasPlayoffSpecialTypes)
      {
        for (size_t num4 = 0; num4 < storePlayoffSpecialTypes.size(); ++num4)
          {
            storePlayoffSpecialTypes[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayoffSpecialTypesResponseStateJSON::hasPlayoffSpecialTypes(void) const
  {
    return flagHasPlayoffSpecialTypes;
  }

size_t SportsPlayoffSpecialTypesResponseStateJSON::countOfPlayoffSpecialTypes(void) const
  {
    assert(flagHasPlayoffSpecialTypes);
    return storePlayoffSpecialTypes.size();
  }

SportsPlayoffSpecialGameJSON * SportsPlayoffSpecialTypesResponseStateJSON::elementOfPlayoffSpecialTypes(size_t element_num)
  {
    assert(flagHasPlayoffSpecialTypes);
    return storePlayoffSpecialTypes[element_num];
  }

const SportsPlayoffSpecialGameJSON * SportsPlayoffSpecialTypesResponseStateJSON::elementOfPlayoffSpecialTypes(size_t element_num) const
  {
    assert(flagHasPlayoffSpecialTypes);
    return storePlayoffSpecialTypes[element_num];
  }

std::vector< SportsPlayoffSpecialGameJSON * > SportsPlayoffSpecialTypesResponseStateJSON::getPlayoffSpecialTypes(void)
  {
    assert(flagHasPlayoffSpecialTypes);
    return storePlayoffSpecialTypes;
  }

const std::vector< SportsPlayoffSpecialGameJSON * > SportsPlayoffSpecialTypesResponseStateJSON::getPlayoffSpecialTypes(void) const
  {
    assert(flagHasPlayoffSpecialTypes);
    return storePlayoffSpecialTypes;
  }

SportsPlayoffSpecialTypesResponseStateJSON *SportsPlayoffSpecialTypesResponseStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayoffSpecialTypesResponseStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffSpecialTypesResponseStateJSON>, SportsPlayoffSpecialTypesResponseStateJSON *, bool> generator("Type SportsPlayoffSpecialTypesResponseState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
