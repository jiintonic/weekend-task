/* file "TwoColumnTableTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TwoColumnTableTemplateJSON.h"

#include "TwoColumnTableTemplateJSON.h"


TwoColumnTableTemplateJSON::TypeRowsJSON::TypeRowsJSON(const TypeRowsJSON &)
  {
    assert(false);
  }

TwoColumnTableTemplateJSON::TypeRowsJSON &TwoColumnTableTemplateJSON::TypeRowsJSON::operator=(const TypeRowsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TwoColumnTableTemplateJSON::TypeRowsJSON::fromJSONLeftText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LeftText of TypeRowsJSON is not a string.");
    setLeftText(std::string(json_string->getData()));
  }

void TwoColumnTableTemplateJSON::TypeRowsJSON::fromJSONRightText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RightText of TypeRowsJSON is not a string.");
    setRightText(std::string(json_string->getData()));
  }

TwoColumnTableTemplateJSON::TypeRowsJSON::TypeRowsJSON(void) :
        flagHasLeftText(false),
        flagHasRightText(false)
  {
    storeLeftText = "";
    storeRightText = "";
    extraIndex = create_string_index();
  }

TwoColumnTableTemplateJSON::TypeRowsJSON::~TypeRowsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TwoColumnTableTemplateJSON::TypeRowsJSON::hasLeftText(void) const
  {
    return flagHasLeftText;
  }

std::string TwoColumnTableTemplateJSON::TypeRowsJSON::getLeftText(void)
  {
    return storeLeftText;
  }

const std::string TwoColumnTableTemplateJSON::TypeRowsJSON::getLeftText(void) const
  {
    return storeLeftText;
  }

bool TwoColumnTableTemplateJSON::TypeRowsJSON::hasRightText(void) const
  {
    return flagHasRightText;
  }

std::string TwoColumnTableTemplateJSON::TypeRowsJSON::getRightText(void)
  {
    return storeRightText;
  }

const std::string TwoColumnTableTemplateJSON::TypeRowsJSON::getRightText(void) const
  {
    return storeRightText;
  }

TwoColumnTableTemplateJSON::TwoColumnTableTemplateJSON(const TwoColumnTableTemplateJSON &)
  {
    assert(false);
  }

TwoColumnTableTemplateJSON &TwoColumnTableTemplateJSON::operator=(const TwoColumnTableTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *TwoColumnTableTemplateJSON::extraRowsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Rows = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeRows.size(); ++num1)
      {
        JSONValueHandler handler_Rows;
        storeRows[num1]->write_as_json(&handler_Rows);
        handler_Rows.result->add_reference();
        generated_array_1_Rows->appendComponent(handler_Rows.result);
        handler_Rows.result->remove_reference();
      }
    return generated_array_1_Rows;
  }

JSONValue *TwoColumnTableTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *TwoColumnTableTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_ActionURIs = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeActionURIs.size(); ++num2)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num2].c_str());
        generated_array_2_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_2_ActionURIs;
  }

void TwoColumnTableTemplateJSON::fromJSONRows(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Rows of TwoColumnTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Rows of TwoColumnTableTemplateJSON has too few elements.");
    std::vector< TypeRowsJSON * > vector_Rows1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeRowsJSON *convert_classy = TypeRowsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Rows1[num1] = convert_classy;
      }
    assert(vector_Rows1.size() >= 1);
    initRows();
    for (size_t num3 = 0; num3 < vector_Rows1.size(); ++num3)
        appendRows(vector_Rows1[num3]);
    for (size_t num1 = 0; num1 < vector_Rows1.size(); ++num1)
      {
        vector_Rows1[num1]->remove_reference();
      }
  }

void TwoColumnTableTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void TwoColumnTableTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of TwoColumnTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of TwoColumnTableTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of TwoColumnTableTemplateJSON is not a string.");
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

TwoColumnTableTemplateJSON::TwoColumnTableTemplateJSON(void) :
        flagHasRows(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    extraIndex = create_string_index();
  }

TwoColumnTableTemplateJSON::~TwoColumnTableTemplateJSON(void)
  {
    if (flagHasRows)
      {
        for (size_t num4 = 0; num4 < storeRows.size(); ++num4)
          {
            storeRows[num4]->remove_reference();
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

const char *TwoColumnTableTemplateJSON::getTemplateName(void) const
  {
    return "TwoColumnTable";
  }

bool TwoColumnTableTemplateJSON::hasRows(void) const
  {
    return flagHasRows;
  }

size_t TwoColumnTableTemplateJSON::countOfRows(void) const
  {
    assert(flagHasRows);
    return storeRows.size();
  }

TwoColumnTableTemplateJSON::TypeRowsJSON * TwoColumnTableTemplateJSON::elementOfRows(size_t element_num)
  {
    assert(flagHasRows);
    return storeRows[element_num];
  }

const TwoColumnTableTemplateJSON::TypeRowsJSON * TwoColumnTableTemplateJSON::elementOfRows(size_t element_num) const
  {
    assert(flagHasRows);
    return storeRows[element_num];
  }

std::vector< TwoColumnTableTemplateJSON::TypeRowsJSON * > TwoColumnTableTemplateJSON::getRows(void)
  {
    assert(flagHasRows);
    return storeRows;
  }

const std::vector< TwoColumnTableTemplateJSON::TypeRowsJSON * > TwoColumnTableTemplateJSON::getRows(void) const
  {
    assert(flagHasRows);
    return storeRows;
  }

bool TwoColumnTableTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * TwoColumnTableTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * TwoColumnTableTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool TwoColumnTableTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t TwoColumnTableTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string TwoColumnTableTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string TwoColumnTableTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > TwoColumnTableTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > TwoColumnTableTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

TwoColumnTableTemplateJSON::TypeRowsJSON *TwoColumnTableTemplateJSON::TypeRowsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRowsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRowsJSON>, TypeRowsJSON *, bool> generator("Type TypeRows", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
TwoColumnTableTemplateJSON *TwoColumnTableTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TwoColumnTableTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TwoColumnTableTemplateJSON>, TwoColumnTableTemplateJSON *, bool> generator("Type TwoColumnTableTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
