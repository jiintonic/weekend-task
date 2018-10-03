/* file "DescriptiveTextTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DescriptiveTextTemplateJSON.h"

#include "DescriptiveTextTemplateJSON.h"


DescriptiveTextTemplateJSON::DescriptiveTextTemplateJSON(const DescriptiveTextTemplateJSON &)
  {
    assert(false);
  }

DescriptiveTextTemplateJSON &DescriptiveTextTemplateJSON::operator=(const DescriptiveTextTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DescriptiveTextTemplateJSON::extraTitleToJSON(void) const
  {
    JSONStringValue *generated_string_Title = new JSONStringValue(storeTitle.c_str());
    return generated_string_Title;
  }

JSONValue *DescriptiveTextTemplateJSON::extraSecondaryTitleToJSON(void) const
  {
    JSONStringValue *generated_string_SecondaryTitle = new JSONStringValue(storeSecondaryTitle.c_str());
    return generated_string_SecondaryTitle;
  }

JSONValue *DescriptiveTextTemplateJSON::extraSection1ToJSON(void) const
  {
    JSONStringValue *generated_string_Section1 = new JSONStringValue(storeSection1.c_str());
    return generated_string_Section1;
  }

JSONValue *DescriptiveTextTemplateJSON::extraSection2ToJSON(void) const
  {
    JSONStringValue *generated_string_Section2 = new JSONStringValue(storeSection2.c_str());
    return generated_string_Section2;
  }

JSONValue *DescriptiveTextTemplateJSON::extraFooterToJSON(void) const
  {
    JSONStringValue *generated_string_Footer = new JSONStringValue(storeFooter.c_str());
    return generated_string_Footer;
  }

JSONValue *DescriptiveTextTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *DescriptiveTextTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ActionURIs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num1].c_str());
        generated_array_1_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_1_ActionURIs;
  }

void DescriptiveTextTemplateJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of DescriptiveTextTemplateJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void DescriptiveTextTemplateJSON::fromJSONSecondaryTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SecondaryTitle of DescriptiveTextTemplateJSON is not a string.");
    setSecondaryTitle(std::string(json_string->getData()));
  }

void DescriptiveTextTemplateJSON::fromJSONSection1(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Section1 of DescriptiveTextTemplateJSON is not a string.");
    setSection1(std::string(json_string->getData()));
  }

void DescriptiveTextTemplateJSON::fromJSONSection2(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Section2 of DescriptiveTextTemplateJSON is not a string.");
    setSection2(std::string(json_string->getData()));
  }

void DescriptiveTextTemplateJSON::fromJSONFooter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Footer of DescriptiveTextTemplateJSON is not a string.");
    setFooter(std::string(json_string->getData()));
  }

void DescriptiveTextTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void DescriptiveTextTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of DescriptiveTextTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of DescriptiveTextTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of DescriptiveTextTemplateJSON is not a string.");
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

DescriptiveTextTemplateJSON::DescriptiveTextTemplateJSON(void) :
        flagHasTitle(false),
        flagHasSecondaryTitle(false),
        flagHasSection1(false),
        flagHasSection2(false),
        flagHasFooter(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeSecondaryTitle = "";
    storeSection1 = "";
    storeSection2 = "";
    storeFooter = "";
    extraIndex = create_string_index();
  }

DescriptiveTextTemplateJSON::~DescriptiveTextTemplateJSON(void)
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

const char *DescriptiveTextTemplateJSON::getTemplateName(void) const
  {
    return "DescriptiveText";
  }

bool DescriptiveTextTemplateJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string DescriptiveTextTemplateJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string DescriptiveTextTemplateJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool DescriptiveTextTemplateJSON::hasSecondaryTitle(void) const
  {
    return flagHasSecondaryTitle;
  }

std::string DescriptiveTextTemplateJSON::getSecondaryTitle(void)
  {
    return storeSecondaryTitle;
  }

const std::string DescriptiveTextTemplateJSON::getSecondaryTitle(void) const
  {
    return storeSecondaryTitle;
  }

bool DescriptiveTextTemplateJSON::hasSection1(void) const
  {
    return flagHasSection1;
  }

std::string DescriptiveTextTemplateJSON::getSection1(void)
  {
    return storeSection1;
  }

const std::string DescriptiveTextTemplateJSON::getSection1(void) const
  {
    return storeSection1;
  }

bool DescriptiveTextTemplateJSON::hasSection2(void) const
  {
    return flagHasSection2;
  }

std::string DescriptiveTextTemplateJSON::getSection2(void)
  {
    return storeSection2;
  }

const std::string DescriptiveTextTemplateJSON::getSection2(void) const
  {
    return storeSection2;
  }

bool DescriptiveTextTemplateJSON::hasFooter(void) const
  {
    return flagHasFooter;
  }

std::string DescriptiveTextTemplateJSON::getFooter(void)
  {
    return storeFooter;
  }

const std::string DescriptiveTextTemplateJSON::getFooter(void) const
  {
    return storeFooter;
  }

bool DescriptiveTextTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * DescriptiveTextTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * DescriptiveTextTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool DescriptiveTextTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t DescriptiveTextTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string DescriptiveTextTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string DescriptiveTextTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > DescriptiveTextTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > DescriptiveTextTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

DescriptiveTextTemplateJSON *DescriptiveTextTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DescriptiveTextTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DescriptiveTextTemplateJSON>, DescriptiveTextTemplateJSON *, bool> generator("Type DescriptiveTextTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
