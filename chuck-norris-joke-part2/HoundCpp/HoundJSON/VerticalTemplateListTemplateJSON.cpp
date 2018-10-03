/* file "VerticalTemplateListTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "VerticalTemplateListTemplateJSON.h"

#include "VerticalTemplateListTemplateJSON.h"


VerticalTemplateListTemplateJSON::TypeItemsJSON::TypeItemsJSON(const TypeItemsJSON &)
  {
    assert(false);
  }

VerticalTemplateListTemplateJSON::TypeItemsJSON &VerticalTemplateListTemplateJSON::TypeItemsJSON::operator=(const TypeItemsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void VerticalTemplateListTemplateJSON::TypeItemsJSON::fromJSONDividerBelow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DividerBelow of TypeItemsJSON is not true for false.");
          }
      }
    setDividerBelow(the_bool);
  }

void VerticalTemplateListTemplateJSON::TypeItemsJSON::fromJSONTemplateName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TemplateName of TypeItemsJSON is not a string.");
    setTemplateName(std::string(json_string->getData()));
  }

void VerticalTemplateListTemplateJSON::TypeItemsJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

VerticalTemplateListTemplateJSON::TypeItemsJSON::TypeItemsJSON(void) :
        flagHasDividerBelow(false),
        flagHasTemplateName(false),
        flagHasTemplateData(false)
  {
    storeDividerBelow = true;
    extraIndex = create_string_index();
  }

VerticalTemplateListTemplateJSON::TypeItemsJSON::~TypeItemsJSON(void)
  {
    if (flagHasTemplateData)
      {
        storeTemplateData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool VerticalTemplateListTemplateJSON::TypeItemsJSON::hasDividerBelow(void) const
  {
    return flagHasDividerBelow;
  }

bool VerticalTemplateListTemplateJSON::TypeItemsJSON::getDividerBelow(void)
  {
    return storeDividerBelow;
  }

const bool VerticalTemplateListTemplateJSON::TypeItemsJSON::getDividerBelow(void) const
  {
    return storeDividerBelow;
  }

bool VerticalTemplateListTemplateJSON::TypeItemsJSON::hasTemplateName(void) const
  {
    return flagHasTemplateName;
  }

std::string VerticalTemplateListTemplateJSON::TypeItemsJSON::getTemplateName(void)
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

const std::string VerticalTemplateListTemplateJSON::TypeItemsJSON::getTemplateName(void) const
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

bool VerticalTemplateListTemplateJSON::TypeItemsJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * VerticalTemplateListTemplateJSON::TypeItemsJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * VerticalTemplateListTemplateJSON::TypeItemsJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

VerticalTemplateListTemplateJSON::VerticalTemplateListTemplateJSON(const VerticalTemplateListTemplateJSON &)
  {
    assert(false);
  }

VerticalTemplateListTemplateJSON &VerticalTemplateListTemplateJSON::operator=(const VerticalTemplateListTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *VerticalTemplateListTemplateJSON::extraItemsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Items = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeItems.size(); ++num1)
      {
        JSONValueHandler handler_Items;
        storeItems[num1]->write_as_json(&handler_Items);
        handler_Items.result->add_reference();
        generated_array_1_Items->appendComponent(handler_Items.result);
        handler_Items.result->remove_reference();
      }
    return generated_array_1_Items;
  }

void VerticalTemplateListTemplateJSON::fromJSONItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Items of VerticalTemplateListTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Items of VerticalTemplateListTemplateJSON has too few elements.");
    std::vector< TypeItemsJSON * > vector_Items1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeItemsJSON *convert_classy = TypeItemsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Items1[num1] = convert_classy;
      }
    assert(vector_Items1.size() >= 1);
    initItems();
    for (size_t num2 = 0; num2 < vector_Items1.size(); ++num2)
        appendItems(vector_Items1[num2]);
    for (size_t num1 = 0; num1 < vector_Items1.size(); ++num1)
      {
        vector_Items1[num1]->remove_reference();
      }
  }

VerticalTemplateListTemplateJSON::VerticalTemplateListTemplateJSON(void) :
        flagHasItems(false)
  {
    extraIndex = create_string_index();
  }

VerticalTemplateListTemplateJSON::~VerticalTemplateListTemplateJSON(void)
  {
    if (flagHasItems)
      {
        for (size_t num4 = 0; num4 < storeItems.size(); ++num4)
          {
            storeItems[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *VerticalTemplateListTemplateJSON::getTemplateName(void) const
  {
    return "VerticalTemplateList";
  }

bool VerticalTemplateListTemplateJSON::hasItems(void) const
  {
    return flagHasItems;
  }

size_t VerticalTemplateListTemplateJSON::countOfItems(void) const
  {
    assert(flagHasItems);
    return storeItems.size();
  }

VerticalTemplateListTemplateJSON::TypeItemsJSON * VerticalTemplateListTemplateJSON::elementOfItems(size_t element_num)
  {
    assert(flagHasItems);
    return storeItems[element_num];
  }

const VerticalTemplateListTemplateJSON::TypeItemsJSON * VerticalTemplateListTemplateJSON::elementOfItems(size_t element_num) const
  {
    assert(flagHasItems);
    return storeItems[element_num];
  }

std::vector< VerticalTemplateListTemplateJSON::TypeItemsJSON * > VerticalTemplateListTemplateJSON::getItems(void)
  {
    assert(flagHasItems);
    return storeItems;
  }

const std::vector< VerticalTemplateListTemplateJSON::TypeItemsJSON * > VerticalTemplateListTemplateJSON::getItems(void) const
  {
    assert(flagHasItems);
    return storeItems;
  }

VerticalTemplateListTemplateJSON::TypeItemsJSON *VerticalTemplateListTemplateJSON::TypeItemsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeItemsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeItemsJSON>, TypeItemsJSON *, bool> generator("Type TypeItems", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
VerticalTemplateListTemplateJSON *VerticalTemplateListTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    VerticalTemplateListTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<VerticalTemplateListTemplateJSON>, VerticalTemplateListTemplateJSON *, bool> generator("Type VerticalTemplateListTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
