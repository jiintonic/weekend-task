/* file "SportsSeriesStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsSeriesStatusJSON.h"

#include "SportsSeriesStatusJSON.h"


SportsSeriesStatusJSON::SportsSeriesStatusJSON(const SportsSeriesStatusJSON &)
  {
    assert(false);
  }

SportsSeriesStatusJSON &SportsSeriesStatusJSON::operator=(const SportsSeriesStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsSeriesStatusJSON::fromJSONSeriesResult(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SeriesResult of SportsSeriesStatusJSON is not true for false.");
          }
      }
    setSeriesResult(the_bool);
  }

void SportsSeriesStatusJSON::fromJSONSeriesComplete(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SeriesComplete of SportsSeriesStatusJSON is not true for false.");
          }
      }
    setSeriesComplete(the_bool);
  }

void SportsSeriesStatusJSON::fromJSONSeriesName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeriesName(convert_classy);
    convert_classy->remove_reference();
  }

void SportsSeriesStatusJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsSeriesStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Teams of SportsSeriesStatusJSON has too few elements.");
    std::vector< SportsTeamJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamJSON *convert_classy = SportsTeamJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 2);
    initTeams();
    for (size_t num3 = 0; num3 < vector_Teams1.size(); ++num3)
        appendTeams(vector_Teams1[num3]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsSeriesStatusJSON::fromJSONAwayGoals(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AwayGoals of SportsSeriesStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field AwayGoals of SportsSeriesStatusJSON has too few elements.");
    std::vector< OInteger > vector_AwayGoals1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field AwayGoals of SportsSeriesStatusJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field AwayGoals of SportsSeriesStatusJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_AwayGoals1[num1] = extracted_integer;
      }
    assert(vector_AwayGoals1.size() >= 2);
    initAwayGoals();
    for (size_t num4 = 0; num4 < vector_AwayGoals1.size(); ++num4)
        appendAwayGoals(vector_AwayGoals1[num4]);
    for (size_t num1 = 0; num1 < vector_AwayGoals1.size(); ++num1)
      {
      }
  }

SportsSeriesStatusJSON::SportsSeriesStatusJSON(void) :
        flagHasSeriesResult(false),
        flagHasSeriesComplete(false),
        flagHasSeriesName(false),
        flagHasTeams(false),
        flagHasAwayGoals(false)
  {
    extraIndex = create_string_index();
  }

SportsSeriesStatusJSON::~SportsSeriesStatusJSON(void)
  {
    if (flagHasSeriesName)
      {
        storeSeriesName->remove_reference();
      }
    if (flagHasTeams)
      {
        for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
          {
            storeTeams[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsSeriesStatusJSON::hasSeriesResult(void) const
  {
    return flagHasSeriesResult;
  }

bool SportsSeriesStatusJSON::getSeriesResult(void)
  {
    assert(flagHasSeriesResult);
    return storeSeriesResult;
  }

const bool SportsSeriesStatusJSON::getSeriesResult(void) const
  {
    assert(flagHasSeriesResult);
    return storeSeriesResult;
  }

bool SportsSeriesStatusJSON::hasSeriesComplete(void) const
  {
    return flagHasSeriesComplete;
  }

bool SportsSeriesStatusJSON::getSeriesComplete(void)
  {
    assert(flagHasSeriesComplete);
    return storeSeriesComplete;
  }

const bool SportsSeriesStatusJSON::getSeriesComplete(void) const
  {
    assert(flagHasSeriesComplete);
    return storeSeriesComplete;
  }

bool SportsSeriesStatusJSON::hasSeriesName(void) const
  {
    return flagHasSeriesName;
  }

SportsPlayoffSpecialGameJSON * SportsSeriesStatusJSON::getSeriesName(void)
  {
    assert(flagHasSeriesName);
    return storeSeriesName;
  }

const SportsPlayoffSpecialGameJSON * SportsSeriesStatusJSON::getSeriesName(void) const
  {
    assert(flagHasSeriesName);
    return storeSeriesName;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsSeriesStatusJSON::getSeriesNameValue(void)
  {
    return getSeriesName()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsSeriesStatusJSON::getSeriesNameValue(void) const
  {
    return getSeriesName()->getValue();
  }

const char *SportsSeriesStatusJSON::getSeriesNameAsChars(void) const
  {
    return getSeriesName()->getValueAsChars();
  }

std::string SportsSeriesStatusJSON::getSeriesNameAsString(void) const
  {
    return getSeriesName()->getValueAsString();
  }

bool SportsSeriesStatusJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsSeriesStatusJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamJSON * SportsSeriesStatusJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamJSON * SportsSeriesStatusJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamJSON * > SportsSeriesStatusJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamJSON * > SportsSeriesStatusJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsSeriesStatusJSON::hasAwayGoals(void) const
  {
    return flagHasAwayGoals;
  }

size_t SportsSeriesStatusJSON::countOfAwayGoals(void) const
  {
    assert(flagHasAwayGoals);
    return storeAwayGoals.size();
  }

OInteger SportsSeriesStatusJSON::elementOfAwayGoals(size_t element_num)
  {
    assert(flagHasAwayGoals);
    return storeAwayGoals[element_num];
  }

const OInteger SportsSeriesStatusJSON::elementOfAwayGoals(size_t element_num) const
  {
    assert(flagHasAwayGoals);
    return storeAwayGoals[element_num];
  }

std::vector< OInteger > SportsSeriesStatusJSON::getAwayGoals(void)
  {
    assert(flagHasAwayGoals);
    return storeAwayGoals;
  }

const std::vector< OInteger > SportsSeriesStatusJSON::getAwayGoals(void) const
  {
    assert(flagHasAwayGoals);
    return storeAwayGoals;
  }

char SportsSeriesStatusJSON::Generator::lowerBoundAwayGoals[] = "0";
SportsSeriesStatusJSON *SportsSeriesStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsSeriesStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsSeriesStatusJSON>, SportsSeriesStatusJSON *, bool> generator("Type SportsSeriesStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
