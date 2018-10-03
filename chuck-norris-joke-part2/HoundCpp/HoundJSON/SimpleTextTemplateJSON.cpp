/* file "SimpleTextTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SimpleTextTemplateJSON.h"

#include "SimpleTextTemplateJSON.h"


SimpleTextTemplateJSON::SimpleTextTemplateJSON(const SimpleTextTemplateJSON &)
  {
    assert(false);
  }

SimpleTextTemplateJSON &SimpleTextTemplateJSON::operator=(const SimpleTextTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SimpleTextTemplateJSON::extraTitleToJSON(void) const
  {
    JSONStringValue *generated_string_Title = new JSONStringValue(storeTitle.c_str());
    return generated_string_Title;
  }

JSONValue *SimpleTextTemplateJSON::extraSubtitleToJSON(void) const
  {
    JSONStringValue *generated_string_Subtitle = new JSONStringValue(storeSubtitle.c_str());
    return generated_string_Subtitle;
  }

JSONValue *SimpleTextTemplateJSON::extraFooterToJSON(void) const
  {
    JSONStringValue *generated_string_Footer = new JSONStringValue(storeFooter.c_str());
    return generated_string_Footer;
  }

JSONValue *SimpleTextTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *SimpleTextTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ActionURIs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num1].c_str());
        generated_array_1_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_1_ActionURIs;
  }

void SimpleTextTemplateJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of SimpleTextTemplateJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void SimpleTextTemplateJSON::fromJSONSubtitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Subtitle of SimpleTextTemplateJSON is not a string.");
    setSubtitle(std::string(json_string->getData()));
  }

void SimpleTextTemplateJSON::fromJSONFooter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Footer of SimpleTextTemplateJSON is not a string.");
    setFooter(std::string(json_string->getData()));
  }

void SimpleTextTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void SimpleTextTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of SimpleTextTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of SimpleTextTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of SimpleTextTemplateJSON is not a string.");
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

SimpleTextTemplateJSON::SimpleTextTemplateJSON(void) :
        flagHasTitle(false),
        flagHasSubtitle(false),
        flagHasFooter(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeTitle = "";
    storeSubtitle = "";
    storeFooter = "";
    extraIndex = create_string_index();
  }

SimpleTextTemplateJSON::~SimpleTextTemplateJSON(void)
  {
    if (flagHasActionAndroidIntent)
      {
        storeActionAndroidIntent->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SimpleTextTemplateJSON::getTemplateName(void) const
  {
    return "SimpleText";
  }

bool SimpleTextTemplateJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string SimpleTextTemplateJSON::getTitle(void)
  {
    return storeTitle;
  }

const std::string SimpleTextTemplateJSON::getTitle(void) const
  {
    return storeTitle;
  }

bool SimpleTextTemplateJSON::hasSubtitle(void) const
  {
    return flagHasSubtitle;
  }

std::string SimpleTextTemplateJSON::getSubtitle(void)
  {
    return storeSubtitle;
  }

const std::string SimpleTextTemplateJSON::getSubtitle(void) const
  {
    return storeSubtitle;
  }

bool SimpleTextTemplateJSON::hasFooter(void) const
  {
    return flagHasFooter;
  }

std::string SimpleTextTemplateJSON::getFooter(void)
  {
    return storeFooter;
  }

const std::string SimpleTextTemplateJSON::getFooter(void) const
  {
    return storeFooter;
  }

bool SimpleTextTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * SimpleTextTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * SimpleTextTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool SimpleTextTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t SimpleTextTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string SimpleTextTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string SimpleTextTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > SimpleTextTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > SimpleTextTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

SimpleTextTemplateJSON *SimpleTextTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SimpleTextTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SimpleTextTemplateJSON>, SimpleTextTemplateJSON *, bool> generator("Type SimpleTextTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
