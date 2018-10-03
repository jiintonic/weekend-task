/* file "AutoActionTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AutoActionTemplateJSON.h"

#include "AutoActionTemplateJSON.h"


AutoActionTemplateJSON::TypeItemJSON::TypeItemJSON(const TypeItemJSON &)
  {
    assert(false);
  }

AutoActionTemplateJSON::TypeItemJSON &AutoActionTemplateJSON::TypeItemJSON::operator=(const TypeItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AutoActionTemplateJSON::TypeItemJSON::fromJSONTemplateName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TemplateName of TypeItemJSON is not a string.");
    setTemplateName(std::string(json_string->getData()));
  }

void AutoActionTemplateJSON::TypeItemJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

AutoActionTemplateJSON::TypeItemJSON::TypeItemJSON(void) :
        flagHasTemplateName(false),
        flagHasTemplateData(false)
  {
    extraIndex = create_string_index();
  }

AutoActionTemplateJSON::TypeItemJSON::~TypeItemJSON(void)
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

bool AutoActionTemplateJSON::TypeItemJSON::hasTemplateName(void) const
  {
    return flagHasTemplateName;
  }

std::string AutoActionTemplateJSON::TypeItemJSON::getTemplateName(void)
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

const std::string AutoActionTemplateJSON::TypeItemJSON::getTemplateName(void) const
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

bool AutoActionTemplateJSON::TypeItemJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * AutoActionTemplateJSON::TypeItemJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * AutoActionTemplateJSON::TypeItemJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

AutoActionTemplateJSON::AutoActionTemplateJSON(const AutoActionTemplateJSON &)
  {
    assert(false);
  }

AutoActionTemplateJSON &AutoActionTemplateJSON::operator=(const AutoActionTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *AutoActionTemplateJSON::extraActionTextToJSON(void) const
  {
    JSONStringValue *generated_string_ActionText = new JSONStringValue(storeActionText.c_str());
    return generated_string_ActionText;
  }

JSONValue *AutoActionTemplateJSON::extraActionTextInProgressToJSON(void) const
  {
    JSONStringValue *generated_string_ActionTextInProgress = new JSONStringValue(storeActionTextInProgress.c_str());
    return generated_string_ActionTextInProgress;
  }

JSONValue *AutoActionTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *AutoActionTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ActionURIs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num1].c_str());
        generated_array_1_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_1_ActionURIs;
  }

JSONValue *AutoActionTemplateJSON::extraItemToJSON(void) const
  {
    JSONValueHandler handler_Item;
    storeItem->write_as_json(&handler_Item);
    handler_Item.result->add_reference();
    return handler_Item.result;
  }

void AutoActionTemplateJSON::fromJSONActionText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ActionText of AutoActionTemplateJSON is not a string.");
    setActionText(std::string(json_string->getData()));
  }

void AutoActionTemplateJSON::fromJSONActionTextInProgress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ActionTextInProgress of AutoActionTemplateJSON is not a string.");
    setActionTextInProgress(std::string(json_string->getData()));
  }

void AutoActionTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void AutoActionTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of AutoActionTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of AutoActionTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of AutoActionTemplateJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num2 = 0; num2 < vector_ActionURIs1.size(); ++num2)
        appendActionURIs(vector_ActionURIs1[num2]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

void AutoActionTemplateJSON::fromJSONItem(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeItemJSON *convert_classy = TypeItemJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setItem(convert_classy);
    convert_classy->remove_reference();
  }

AutoActionTemplateJSON::AutoActionTemplateJSON(void) :
        flagHasActionText(false),
        flagHasActionTextInProgress(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false),
        flagHasItem(false)
  {
    extraIndex = create_string_index();
  }

AutoActionTemplateJSON::~AutoActionTemplateJSON(void)
  {
    if (flagHasActionAndroidIntent)
      {
        storeActionAndroidIntent->remove_reference();
      }
    if (flagHasItem)
      {
        storeItem->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *AutoActionTemplateJSON::getTemplateName(void) const
  {
    return "AutoAction";
  }

bool AutoActionTemplateJSON::hasActionText(void) const
  {
    return flagHasActionText;
  }

std::string AutoActionTemplateJSON::getActionText(void)
  {
    assert(flagHasActionText);
    return storeActionText;
  }

const std::string AutoActionTemplateJSON::getActionText(void) const
  {
    assert(flagHasActionText);
    return storeActionText;
  }

bool AutoActionTemplateJSON::hasActionTextInProgress(void) const
  {
    return flagHasActionTextInProgress;
  }

std::string AutoActionTemplateJSON::getActionTextInProgress(void)
  {
    assert(flagHasActionTextInProgress);
    return storeActionTextInProgress;
  }

const std::string AutoActionTemplateJSON::getActionTextInProgress(void) const
  {
    assert(flagHasActionTextInProgress);
    return storeActionTextInProgress;
  }

bool AutoActionTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * AutoActionTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * AutoActionTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool AutoActionTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t AutoActionTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string AutoActionTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string AutoActionTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > AutoActionTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > AutoActionTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

bool AutoActionTemplateJSON::hasItem(void) const
  {
    return flagHasItem;
  }

AutoActionTemplateJSON::TypeItemJSON * AutoActionTemplateJSON::getItem(void)
  {
    assert(flagHasItem);
    return storeItem;
  }

const AutoActionTemplateJSON::TypeItemJSON * AutoActionTemplateJSON::getItem(void) const
  {
    assert(flagHasItem);
    return storeItem;
  }

AutoActionTemplateJSON::TypeItemJSON *AutoActionTemplateJSON::TypeItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeItemJSON>, TypeItemJSON *, bool> generator("Type TypeItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AutoActionTemplateJSON *AutoActionTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AutoActionTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AutoActionTemplateJSON>, AutoActionTemplateJSON *, bool> generator("Type AutoActionTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
