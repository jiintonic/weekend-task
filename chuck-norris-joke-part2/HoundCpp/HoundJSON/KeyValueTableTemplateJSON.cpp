/* file "KeyValueTableTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "KeyValueTableTemplateJSON.h"

#include "KeyValueTableTemplateJSON.h"


KeyValueTableTemplateJSON::TypeTableItemsJSON::TypeTableItemsJSON(const TypeTableItemsJSON &)
  {
    assert(false);
  }

KeyValueTableTemplateJSON::TypeTableItemsJSON &KeyValueTableTemplateJSON::TypeTableItemsJSON::operator=(const TypeTableItemsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void KeyValueTableTemplateJSON::TypeTableItemsJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of TypeTableItemsJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

void KeyValueTableTemplateJSON::TypeTableItemsJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypeTableItemsJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void KeyValueTableTemplateJSON::TypeTableItemsJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void KeyValueTableTemplateJSON::TypeTableItemsJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of TypeTableItemsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of TypeTableItemsJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of TypeTableItemsJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num4 = 0; num4 < vector_ActionURIs1.size(); ++num4)
        appendActionURIs(vector_ActionURIs1[num4]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

KeyValueTableTemplateJSON::TypeTableItemsJSON::TypeTableItemsJSON(void) :
        flagHasValue(false),
        flagHasLabel(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeLabel = "";
    extraIndex = create_string_index();
  }

KeyValueTableTemplateJSON::TypeTableItemsJSON::~TypeTableItemsJSON(void)
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

bool KeyValueTableTemplateJSON::TypeTableItemsJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool KeyValueTableTemplateJSON::TypeTableItemsJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::getLabel(void)
  {
    return storeLabel;
  }

const std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::getLabel(void) const
  {
    return storeLabel;
  }

bool KeyValueTableTemplateJSON::TypeTableItemsJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * KeyValueTableTemplateJSON::TypeTableItemsJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * KeyValueTableTemplateJSON::TypeTableItemsJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool KeyValueTableTemplateJSON::TypeTableItemsJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t KeyValueTableTemplateJSON::TypeTableItemsJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string KeyValueTableTemplateJSON::TypeTableItemsJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > KeyValueTableTemplateJSON::TypeTableItemsJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > KeyValueTableTemplateJSON::TypeTableItemsJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

KeyValueTableTemplateJSON::KeyValueTableTemplateJSON(const KeyValueTableTemplateJSON &)
  {
    assert(false);
  }

KeyValueTableTemplateJSON &KeyValueTableTemplateJSON::operator=(const KeyValueTableTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *KeyValueTableTemplateJSON::extraTitleToJSON(void) const
  {
    JSONStringValue *generated_string_Title = new JSONStringValue(storeTitle.c_str());
    return generated_string_Title;
  }

JSONValue *KeyValueTableTemplateJSON::extraSubtitleToJSON(void) const
  {
    JSONStringValue *generated_string_Subtitle = new JSONStringValue(storeSubtitle.c_str());
    return generated_string_Subtitle;
  }

JSONValue *KeyValueTableTemplateJSON::extraFooterToJSON(void) const
  {
    JSONStringValue *generated_string_Footer = new JSONStringValue(storeFooter.c_str());
    return generated_string_Footer;
  }

JSONValue *KeyValueTableTemplateJSON::extraSingleColumnToJSON(void) const
  {
    JSONValue *generated_boolean_SingleColumn = (storeSingleColumn ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_SingleColumn;
  }

JSONValue *KeyValueTableTemplateJSON::extraTableItemsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_TableItems = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeTableItems.size(); ++num1)
      {
        JSONValueHandler handler_TableItems;
        storeTableItems[num1]->write_as_json(&handler_TableItems);
        handler_TableItems.result->add_reference();
        generated_array_1_TableItems->appendComponent(handler_TableItems.result);
        handler_TableItems.result->remove_reference();
      }
    return generated_array_1_TableItems;
  }

JSONValue *KeyValueTableTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *KeyValueTableTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_ActionURIs = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeActionURIs.size(); ++num2)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num2].c_str());
        generated_array_2_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_2_ActionURIs;
  }

void KeyValueTableTemplateJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of KeyValueTableTemplateJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void KeyValueTableTemplateJSON::fromJSONSubtitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Subtitle of KeyValueTableTemplateJSON is not a string.");
    setSubtitle(std::string(json_string->getData()));
  }

void KeyValueTableTemplateJSON::fromJSONFooter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Footer of KeyValueTableTemplateJSON is not a string.");
    setFooter(std::string(json_string->getData()));
  }

void KeyValueTableTemplateJSON::fromJSONSingleColumn(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SingleColumn of KeyValueTableTemplateJSON is not true for false.");
          }
      }
    setSingleColumn(the_bool);
  }

void KeyValueTableTemplateJSON::fromJSONTableItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field TableItems of KeyValueTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field TableItems of KeyValueTableTemplateJSON has too few elements.");
    std::vector< TypeTableItemsJSON * > vector_TableItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeTableItemsJSON *convert_classy = TypeTableItemsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_TableItems1[num1] = convert_classy;
      }
    assert(vector_TableItems1.size() >= 1);
    initTableItems();
    for (size_t num5 = 0; num5 < vector_TableItems1.size(); ++num5)
        appendTableItems(vector_TableItems1[num5]);
    for (size_t num1 = 0; num1 < vector_TableItems1.size(); ++num1)
      {
        vector_TableItems1[num1]->remove_reference();
      }
  }

void KeyValueTableTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void KeyValueTableTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of KeyValueTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of KeyValueTableTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of KeyValueTableTemplateJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num6 = 0; num6 < vector_ActionURIs1.size(); ++num6)
        appendActionURIs(vector_ActionURIs1[num6]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

KeyValueTableTemplateJSON::KeyValueTableTemplateJSON(void) :
        flagHasTitle(false),
        flagHasSubtitle(false),
        flagHasFooter(false),
        flagHasSingleColumn(false),
        flagHasTableItems(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeTitle = "";
    storeSubtitle = "";
    storeFooter = "";
    storeSingleColumn = false;
    extraIndex = create_string_index();
  }

KeyValueTableTemplateJSON::~KeyValueTableTemplateJSON(void)
  {
    if (flagHasTableItems)
      {
        for (size_t num4 = 0; num4 < storeTableItems.size(); ++num4)
          {
            storeTableItems[num4]->remove_reference();
          }
      }
    if (flagHasActionAndroidIntent)
      {
        storeActionAndroidIntent->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *KeyValueTableTemplateJSON::getTemplateName(void) const
  {
    return "KeyValueTable";
  }

bool KeyValueTableTemplateJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string KeyValueTableTemplateJSON::getTitle(void)
  {
    return storeTitle;
  }

const std::string KeyValueTableTemplateJSON::getTitle(void) const
  {
    return storeTitle;
  }

bool KeyValueTableTemplateJSON::hasSubtitle(void) const
  {
    return flagHasSubtitle;
  }

std::string KeyValueTableTemplateJSON::getSubtitle(void)
  {
    return storeSubtitle;
  }

const std::string KeyValueTableTemplateJSON::getSubtitle(void) const
  {
    return storeSubtitle;
  }

bool KeyValueTableTemplateJSON::hasFooter(void) const
  {
    return flagHasFooter;
  }

std::string KeyValueTableTemplateJSON::getFooter(void)
  {
    return storeFooter;
  }

const std::string KeyValueTableTemplateJSON::getFooter(void) const
  {
    return storeFooter;
  }

bool KeyValueTableTemplateJSON::hasSingleColumn(void) const
  {
    return flagHasSingleColumn;
  }

bool KeyValueTableTemplateJSON::getSingleColumn(void)
  {
    return storeSingleColumn;
  }

const bool KeyValueTableTemplateJSON::getSingleColumn(void) const
  {
    return storeSingleColumn;
  }

bool KeyValueTableTemplateJSON::hasTableItems(void) const
  {
    return flagHasTableItems;
  }

size_t KeyValueTableTemplateJSON::countOfTableItems(void) const
  {
    assert(flagHasTableItems);
    return storeTableItems.size();
  }

KeyValueTableTemplateJSON::TypeTableItemsJSON * KeyValueTableTemplateJSON::elementOfTableItems(size_t element_num)
  {
    assert(flagHasTableItems);
    return storeTableItems[element_num];
  }

const KeyValueTableTemplateJSON::TypeTableItemsJSON * KeyValueTableTemplateJSON::elementOfTableItems(size_t element_num) const
  {
    assert(flagHasTableItems);
    return storeTableItems[element_num];
  }

std::vector< KeyValueTableTemplateJSON::TypeTableItemsJSON * > KeyValueTableTemplateJSON::getTableItems(void)
  {
    assert(flagHasTableItems);
    return storeTableItems;
  }

const std::vector< KeyValueTableTemplateJSON::TypeTableItemsJSON * > KeyValueTableTemplateJSON::getTableItems(void) const
  {
    assert(flagHasTableItems);
    return storeTableItems;
  }

bool KeyValueTableTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * KeyValueTableTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * KeyValueTableTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool KeyValueTableTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t KeyValueTableTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string KeyValueTableTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string KeyValueTableTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > KeyValueTableTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > KeyValueTableTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

KeyValueTableTemplateJSON::TypeTableItemsJSON *KeyValueTableTemplateJSON::TypeTableItemsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeTableItemsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeTableItemsJSON>, TypeTableItemsJSON *, bool> generator("Type TypeTableItems", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
KeyValueTableTemplateJSON *KeyValueTableTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    KeyValueTableTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<KeyValueTableTemplateJSON>, KeyValueTableTemplateJSON *, bool> generator("Type KeyValueTableTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
