/* file "HomeAutomationAmbiguityFlagsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationAmbiguityFlagsJSON.h"

#include "HomeAutomationAmbiguityFlagsJSON.h"


HomeAutomationAmbiguityFlagsJSON::HomeAutomationAmbiguityFlagsJSON(const HomeAutomationAmbiguityFlagsJSON &)
  {
    assert(false);
  }

HomeAutomationAmbiguityFlagsJSON &HomeAutomationAmbiguityFlagsJSON::operator=(const HomeAutomationAmbiguityFlagsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationAmbiguityFlagsJSON::fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HomeAutomationSolution of HomeAutomationAmbiguityFlagsJSON is not true for false.");
          }
      }
    setHomeAutomationSolution(the_bool);
  }

void HomeAutomationAmbiguityFlagsJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Name of HomeAutomationAmbiguityFlagsJSON is not true for false.");
          }
      }
    setName(the_bool);
  }

void HomeAutomationAmbiguityFlagsJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ID of HomeAutomationAmbiguityFlagsJSON is not true for false.");
          }
      }
    setID(the_bool);
  }

void HomeAutomationAmbiguityFlagsJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Type of HomeAutomationAmbiguityFlagsJSON is not true for false.");
          }
      }
    setType(the_bool);
  }

HomeAutomationAmbiguityFlagsJSON::HomeAutomationAmbiguityFlagsJSON(void) :
        flagHasHomeAutomationSolution(false),
        flagHasName(false),
        flagHasID(false),
        flagHasType(false)
  {
    storeHomeAutomationSolution = false;
    storeName = false;
    storeID = false;
    storeType = false;
    extraIndex = create_string_index();
  }

HomeAutomationAmbiguityFlagsJSON::~HomeAutomationAmbiguityFlagsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HomeAutomationAmbiguityFlagsJSON::hasHomeAutomationSolution(void) const
  {
    return flagHasHomeAutomationSolution;
  }

bool HomeAutomationAmbiguityFlagsJSON::getHomeAutomationSolution(void)
  {
    return storeHomeAutomationSolution;
  }

const bool HomeAutomationAmbiguityFlagsJSON::getHomeAutomationSolution(void) const
  {
    return storeHomeAutomationSolution;
  }

bool HomeAutomationAmbiguityFlagsJSON::hasName(void) const
  {
    return flagHasName;
  }

bool HomeAutomationAmbiguityFlagsJSON::getName(void)
  {
    return storeName;
  }

const bool HomeAutomationAmbiguityFlagsJSON::getName(void) const
  {
    return storeName;
  }

bool HomeAutomationAmbiguityFlagsJSON::hasID(void) const
  {
    return flagHasID;
  }

bool HomeAutomationAmbiguityFlagsJSON::getID(void)
  {
    return storeID;
  }

const bool HomeAutomationAmbiguityFlagsJSON::getID(void) const
  {
    return storeID;
  }

bool HomeAutomationAmbiguityFlagsJSON::hasType(void) const
  {
    return flagHasType;
  }

bool HomeAutomationAmbiguityFlagsJSON::getType(void)
  {
    return storeType;
  }

const bool HomeAutomationAmbiguityFlagsJSON::getType(void) const
  {
    return storeType;
  }

HomeAutomationAmbiguityFlagsJSON *HomeAutomationAmbiguityFlagsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationAmbiguityFlagsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityFlagsJSON>, HomeAutomationAmbiguityFlagsJSON *, bool> generator("Type HomeAutomationAmbiguityFlags", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
