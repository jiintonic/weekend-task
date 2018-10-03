/* file "CabinClassFilterJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CabinClassFilterJSON.h"

#include "CabinClassFilterJSON.h"


CabinClassFilterJSON::CabinClassFilterJSON(const CabinClassFilterJSON &)
  {
    assert(false);
  }

CabinClassFilterJSON &CabinClassFilterJSON::operator=(const CabinClassFilterJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CabinClassFilterJSON::fromJSONIncludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Includes of CabinClassFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Includes of CabinClassFilterJSON has too few elements.");
    std::vector< CabinClassJSON * > vector_Includes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CabinClassJSON *convert_classy = CabinClassJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Includes1[num1] = convert_classy;
      }
    assert(vector_Includes1.size() >= 1);
    initIncludes();
    for (size_t num3 = 0; num3 < vector_Includes1.size(); ++num3)
        appendIncludes(vector_Includes1[num3]);
    for (size_t num1 = 0; num1 < vector_Includes1.size(); ++num1)
      {
        vector_Includes1[num1]->remove_reference();
      }
  }

void CabinClassFilterJSON::fromJSONExcludes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Excludes of CabinClassFilterJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Excludes of CabinClassFilterJSON has too few elements.");
    std::vector< CabinClassJSON * > vector_Excludes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        CabinClassJSON *convert_classy = CabinClassJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Excludes1[num1] = convert_classy;
      }
    assert(vector_Excludes1.size() >= 1);
    initExcludes();
    for (size_t num4 = 0; num4 < vector_Excludes1.size(); ++num4)
        appendExcludes(vector_Excludes1[num4]);
    for (size_t num1 = 0; num1 < vector_Excludes1.size(); ++num1)
      {
        vector_Excludes1[num1]->remove_reference();
      }
  }

void CabinClassFilterJSON::fromJSONDefaultForOthers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IncludeExcludeStateJSON *convert_classy = IncludeExcludeStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDefaultForOthers(convert_classy);
    convert_classy->remove_reference();
  }

CabinClassFilterJSON::CabinClassFilterJSON(void) :
        flagHasIncludes(false),
        flagHasExcludes(false),
        flagHasDefaultForOthers(false)
  {
    extraIndex = create_string_index();
  }

CabinClassFilterJSON::~CabinClassFilterJSON(void)
  {
    if (flagHasIncludes)
      {
        for (size_t num7 = 0; num7 < storeIncludes.size(); ++num7)
          {
            storeIncludes[num7]->remove_reference();
          }
      }
    if (flagHasExcludes)
      {
        for (size_t num8 = 0; num8 < storeExcludes.size(); ++num8)
          {
            storeExcludes[num8]->remove_reference();
          }
      }
    if (flagHasDefaultForOthers)
      {
        storeDefaultForOthers->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool CabinClassFilterJSON::hasIncludes(void) const
  {
    return flagHasIncludes;
  }

size_t CabinClassFilterJSON::countOfIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes.size();
  }

CabinClassJSON * CabinClassFilterJSON::elementOfIncludes(size_t element_num)
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

const CabinClassJSON * CabinClassFilterJSON::elementOfIncludes(size_t element_num) const
  {
    assert(flagHasIncludes);
    return storeIncludes[element_num];
  }

std::vector< CabinClassJSON * > CabinClassFilterJSON::getIncludes(void)
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

const std::vector< CabinClassJSON * > CabinClassFilterJSON::getIncludes(void) const
  {
    assert(flagHasIncludes);
    return storeIncludes;
  }

bool CabinClassFilterJSON::hasExcludes(void) const
  {
    return flagHasExcludes;
  }

size_t CabinClassFilterJSON::countOfExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes.size();
  }

CabinClassJSON * CabinClassFilterJSON::elementOfExcludes(size_t element_num)
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

const CabinClassJSON * CabinClassFilterJSON::elementOfExcludes(size_t element_num) const
  {
    assert(flagHasExcludes);
    return storeExcludes[element_num];
  }

std::vector< CabinClassJSON * > CabinClassFilterJSON::getExcludes(void)
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

const std::vector< CabinClassJSON * > CabinClassFilterJSON::getExcludes(void) const
  {
    assert(flagHasExcludes);
    return storeExcludes;
  }

bool CabinClassFilterJSON::hasDefaultForOthers(void) const
  {
    return flagHasDefaultForOthers;
  }

IncludeExcludeStateJSON * CabinClassFilterJSON::getDefaultForOthers(void)
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

const IncludeExcludeStateJSON * CabinClassFilterJSON::getDefaultForOthers(void) const
  {
    assert(flagHasDefaultForOthers);
    return storeDefaultForOthers;
  }

IncludeExcludeStateJSON::TypeValue CabinClassFilterJSON::getDefaultForOthersValue(void)
  {
    return getDefaultForOthers()->getValue();
  }

const IncludeExcludeStateJSON::TypeValue CabinClassFilterJSON::getDefaultForOthersValue(void) const
  {
    return getDefaultForOthers()->getValue();
  }

const char *CabinClassFilterJSON::getDefaultForOthersAsChars(void) const
  {
    return getDefaultForOthers()->getValueAsChars();
  }

std::string CabinClassFilterJSON::getDefaultForOthersAsString(void) const
  {
    return getDefaultForOthers()->getValueAsString();
  }

CabinClassFilterJSON *CabinClassFilterJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CabinClassFilterJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CabinClassFilterJSON>, CabinClassFilterJSON *, bool> generator("Type CabinClassFilter", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
