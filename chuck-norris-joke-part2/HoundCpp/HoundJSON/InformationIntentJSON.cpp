/* file "InformationIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "InformationIntentJSON.h"

#include "InformationIntentJSON.h"


InformationIntentJSON::InformationIntentJSON(const InformationIntentJSON &)
  {
    assert(false);
  }

InformationIntentJSON &InformationIntentJSON::operator=(const InformationIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *InformationIntentJSON::extraInformationNuggetsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_InformationNuggets = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeInformationNuggets.size(); ++num1)
      {
        JSONValueHandler handler_InformationNuggets;
        storeInformationNuggets[num1]->write_as_json(&handler_InformationNuggets);
        handler_InformationNuggets.result->add_reference();
        generated_array_1_InformationNuggets->appendComponent(handler_InformationNuggets.result);
        handler_InformationNuggets.result->remove_reference();
      }
    return generated_array_1_InformationNuggets;
  }

void InformationIntentJSON::fromJSONInformationNuggets(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InformationNuggets of InformationIntentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field InformationNuggets of InformationIntentJSON has too few elements.");
    std::vector< InformationNuggetIntentJSON * > vector_InformationNuggets1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        InformationNuggetIntentJSON *convert_classy = InformationNuggetIntentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InformationNuggets1[num1] = convert_classy;
      }
    assert(vector_InformationNuggets1.size() >= 1);
    initInformationNuggets();
    for (size_t num2 = 0; num2 < vector_InformationNuggets1.size(); ++num2)
        appendInformationNuggets(vector_InformationNuggets1[num2]);
    for (size_t num1 = 0; num1 < vector_InformationNuggets1.size(); ++num1)
      {
        vector_InformationNuggets1[num1]->remove_reference();
      }
  }

InformationIntentJSON::InformationIntentJSON(void) :
        flagHasInformationNuggets(false)
  {
    extraIndex = create_string_index();
  }

InformationIntentJSON::~InformationIntentJSON(void)
  {
    if (flagHasInformationNuggets)
      {
        for (size_t num4 = 0; num4 < storeInformationNuggets.size(); ++num4)
          {
            storeInformationNuggets[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *InformationIntentJSON::getCommandIntentKind(void) const
  {
    return "Information";
  }

bool InformationIntentJSON::hasInformationNuggets(void) const
  {
    return flagHasInformationNuggets;
  }

size_t InformationIntentJSON::countOfInformationNuggets(void) const
  {
    assert(flagHasInformationNuggets);
    return storeInformationNuggets.size();
  }

InformationNuggetIntentJSON * InformationIntentJSON::elementOfInformationNuggets(size_t element_num)
  {
    assert(flagHasInformationNuggets);
    return storeInformationNuggets[element_num];
  }

const InformationNuggetIntentJSON * InformationIntentJSON::elementOfInformationNuggets(size_t element_num) const
  {
    assert(flagHasInformationNuggets);
    return storeInformationNuggets[element_num];
  }

std::vector< InformationNuggetIntentJSON * > InformationIntentJSON::getInformationNuggets(void)
  {
    assert(flagHasInformationNuggets);
    return storeInformationNuggets;
  }

const std::vector< InformationNuggetIntentJSON * > InformationIntentJSON::getInformationNuggets(void) const
  {
    assert(flagHasInformationNuggets);
    return storeInformationNuggets;
  }

InformationIntentJSON *InformationIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    InformationIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<InformationIntentJSON>, InformationIntentJSON *, bool> generator("Type InformationIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
