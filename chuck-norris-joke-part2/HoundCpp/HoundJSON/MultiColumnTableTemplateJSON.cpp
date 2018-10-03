/* file "MultiColumnTableTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MultiColumnTableTemplateJSON.h"

#include "MultiColumnTableTemplateJSON.h"


MultiColumnTableTemplateJSON::TypeHeaderJSON::TypeHeaderJSON(const TypeHeaderJSON &)
  {
    assert(false);
  }

MultiColumnTableTemplateJSON::TypeHeaderJSON &MultiColumnTableTemplateJSON::TypeHeaderJSON::operator=(const TypeHeaderJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MultiColumnTableTemplateJSON::TypeHeaderJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeHeaderJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

MultiColumnTableTemplateJSON::TypeHeaderJSON::TypeHeaderJSON(void) :
        flagHasText(false)
  {
    extraIndex = create_string_index();
  }

MultiColumnTableTemplateJSON::TypeHeaderJSON::~TypeHeaderJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MultiColumnTableTemplateJSON::TypeHeaderJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string MultiColumnTableTemplateJSON::TypeHeaderJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string MultiColumnTableTemplateJSON::TypeHeaderJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::TypeColumnsJSON(const TypeColumnsJSON &)
  {
    assert(false);
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON &MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::operator=(const TypeColumnsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeColumnsJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::TypeColumnsJSON(void) :
        flagHasText(false)
  {
    extraIndex = create_string_index();
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::~TypeColumnsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeContentRowsJSON(const TypeContentRowsJSON &)
  {
    assert(false);
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON &MultiColumnTableTemplateJSON::TypeContentRowsJSON::operator=(const TypeContentRowsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MultiColumnTableTemplateJSON::TypeContentRowsJSON::fromJSONColumns(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Columns of TypeContentRowsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Columns of TypeContentRowsJSON has too few elements.");
    std::vector< TypeColumnsJSON * > vector_Columns1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeColumnsJSON *convert_classy = TypeColumnsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Columns1[num1] = convert_classy;
      }
    assert(vector_Columns1.size() >= 1);
    initColumns();
    for (size_t num5 = 0; num5 < vector_Columns1.size(); ++num5)
        appendColumns(vector_Columns1[num5]);
    for (size_t num1 = 0; num1 < vector_Columns1.size(); ++num1)
      {
        vector_Columns1[num1]->remove_reference();
      }
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeContentRowsJSON(void) :
        flagHasColumns(false)
  {
    extraIndex = create_string_index();
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::~TypeContentRowsJSON(void)
  {
    if (flagHasColumns)
      {
        for (size_t num10 = 0; num10 < storeColumns.size(); ++num10)
          {
            storeColumns[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MultiColumnTableTemplateJSON::TypeContentRowsJSON::hasColumns(void) const
  {
    return flagHasColumns;
  }

size_t MultiColumnTableTemplateJSON::TypeContentRowsJSON::countOfColumns(void) const
  {
    assert(flagHasColumns);
    return storeColumns.size();
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON * MultiColumnTableTemplateJSON::TypeContentRowsJSON::elementOfColumns(size_t element_num)
  {
    assert(flagHasColumns);
    return storeColumns[element_num];
  }

const MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON * MultiColumnTableTemplateJSON::TypeContentRowsJSON::elementOfColumns(size_t element_num) const
  {
    assert(flagHasColumns);
    return storeColumns[element_num];
  }

std::vector< MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON * > MultiColumnTableTemplateJSON::TypeContentRowsJSON::getColumns(void)
  {
    assert(flagHasColumns);
    return storeColumns;
  }

const std::vector< MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON * > MultiColumnTableTemplateJSON::TypeContentRowsJSON::getColumns(void) const
  {
    assert(flagHasColumns);
    return storeColumns;
  }

MultiColumnTableTemplateJSON::MultiColumnTableTemplateJSON(const MultiColumnTableTemplateJSON &)
  {
    assert(false);
  }

MultiColumnTableTemplateJSON &MultiColumnTableTemplateJSON::operator=(const MultiColumnTableTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MultiColumnTableTemplateJSON::extraColumnCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_ColumnCount = new JSONIntegerValue(storeColumnCount);
    return generated_integer_ColumnCount;
  }

JSONValue *MultiColumnTableTemplateJSON::extraColumnStretchToJSON(void) const
  {
    JSONStringValue *generated_string_ColumnStretch = new JSONStringValue(storeColumnStretch.c_str());
    return generated_string_ColumnStretch;
  }

JSONValue *MultiColumnTableTemplateJSON::extraContentDividerToJSON(void) const
  {
    JSONValue *generated_boolean_ContentDivider = (storeContentDivider ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_ContentDivider;
  }

JSONValue *MultiColumnTableTemplateJSON::extraHeaderToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Header = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeHeader.size(); ++num1)
      {
        JSONValueHandler handler_Header;
        storeHeader[num1]->write_as_json(&handler_Header);
        handler_Header.result->add_reference();
        generated_array_1_Header->appendComponent(handler_Header.result);
        handler_Header.result->remove_reference();
      }
    return generated_array_1_Header;
  }

JSONValue *MultiColumnTableTemplateJSON::extraContentRowsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_ContentRows = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeContentRows.size(); ++num2)
      {
        JSONValueHandler handler_ContentRows;
        storeContentRows[num2]->write_as_json(&handler_ContentRows);
        handler_ContentRows.result->add_reference();
        generated_array_2_ContentRows->appendComponent(handler_ContentRows.result);
        handler_ContentRows.result->remove_reference();
      }
    return generated_array_2_ContentRows;
  }

JSONValue *MultiColumnTableTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *MultiColumnTableTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_3_ActionURIs = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeActionURIs.size(); ++num3)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num3].c_str());
        generated_array_3_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_3_ActionURIs;
  }

void MultiColumnTableTemplateJSON::fromJSONColumnCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ColumnCount of MultiColumnTableTemplateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ColumnCount of MultiColumnTableTemplateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setColumnCount(extracted_integer);
  }

void MultiColumnTableTemplateJSON::fromJSONColumnStretch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ColumnStretch of MultiColumnTableTemplateJSON is not a string.");
    setColumnStretch(std::string(json_string->getData()));
  }

void MultiColumnTableTemplateJSON::fromJSONContentDivider(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ContentDivider of MultiColumnTableTemplateJSON is not true for false.");
          }
      }
    setContentDivider(the_bool);
  }

void MultiColumnTableTemplateJSON::fromJSONHeader(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Header of MultiColumnTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Header of MultiColumnTableTemplateJSON has too few elements.");
    std::vector< TypeHeaderJSON * > vector_Header1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeHeaderJSON *convert_classy = TypeHeaderJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Header1[num1] = convert_classy;
      }
    assert(vector_Header1.size() >= 1);
    initHeader();
    for (size_t num6 = 0; num6 < vector_Header1.size(); ++num6)
        appendHeader(vector_Header1[num6]);
    for (size_t num1 = 0; num1 < vector_Header1.size(); ++num1)
      {
        vector_Header1[num1]->remove_reference();
      }
  }

void MultiColumnTableTemplateJSON::fromJSONContentRows(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ContentRows of MultiColumnTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ContentRows of MultiColumnTableTemplateJSON has too few elements.");
    std::vector< TypeContentRowsJSON * > vector_ContentRows1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeContentRowsJSON *convert_classy = TypeContentRowsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ContentRows1[num1] = convert_classy;
      }
    assert(vector_ContentRows1.size() >= 1);
    initContentRows();
    for (size_t num7 = 0; num7 < vector_ContentRows1.size(); ++num7)
        appendContentRows(vector_ContentRows1[num7]);
    for (size_t num1 = 0; num1 < vector_ContentRows1.size(); ++num1)
      {
        vector_ContentRows1[num1]->remove_reference();
      }
  }

void MultiColumnTableTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void MultiColumnTableTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of MultiColumnTableTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of MultiColumnTableTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of MultiColumnTableTemplateJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num8 = 0; num8 < vector_ActionURIs1.size(); ++num8)
        appendActionURIs(vector_ActionURIs1[num8]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

MultiColumnTableTemplateJSON::MultiColumnTableTemplateJSON(void) :
        flagHasColumnCount(false),
        flagHasColumnStretch(false),
        flagHasContentDivider(false),
        flagHasHeader(false),
        flagHasContentRows(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeColumnStretch = "*";
    storeContentDivider = true;
    extraIndex = create_string_index();
  }

MultiColumnTableTemplateJSON::~MultiColumnTableTemplateJSON(void)
  {
    if (flagHasHeader)
      {
        for (size_t num13 = 0; num13 < storeHeader.size(); ++num13)
          {
            storeHeader[num13]->remove_reference();
          }
      }
    if (flagHasContentRows)
      {
        for (size_t num14 = 0; num14 < storeContentRows.size(); ++num14)
          {
            storeContentRows[num14]->remove_reference();
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

const char *MultiColumnTableTemplateJSON::getTemplateName(void) const
  {
    return "MultiColumnTable";
  }

bool MultiColumnTableTemplateJSON::hasColumnCount(void) const
  {
    return flagHasColumnCount;
  }

uint8_t MultiColumnTableTemplateJSON::getColumnCount(void)
  {
    assert(flagHasColumnCount);
    return storeColumnCount;
  }

const uint8_t MultiColumnTableTemplateJSON::getColumnCount(void) const
  {
    assert(flagHasColumnCount);
    return storeColumnCount;
  }

bool MultiColumnTableTemplateJSON::hasColumnStretch(void) const
  {
    return flagHasColumnStretch;
  }

std::string MultiColumnTableTemplateJSON::getColumnStretch(void)
  {
    return storeColumnStretch;
  }

const std::string MultiColumnTableTemplateJSON::getColumnStretch(void) const
  {
    return storeColumnStretch;
  }

bool MultiColumnTableTemplateJSON::hasContentDivider(void) const
  {
    return flagHasContentDivider;
  }

bool MultiColumnTableTemplateJSON::getContentDivider(void)
  {
    return storeContentDivider;
  }

const bool MultiColumnTableTemplateJSON::getContentDivider(void) const
  {
    return storeContentDivider;
  }

bool MultiColumnTableTemplateJSON::hasHeader(void) const
  {
    return flagHasHeader;
  }

size_t MultiColumnTableTemplateJSON::countOfHeader(void) const
  {
    assert(flagHasHeader);
    return storeHeader.size();
  }

MultiColumnTableTemplateJSON::TypeHeaderJSON * MultiColumnTableTemplateJSON::elementOfHeader(size_t element_num)
  {
    assert(flagHasHeader);
    return storeHeader[element_num];
  }

const MultiColumnTableTemplateJSON::TypeHeaderJSON * MultiColumnTableTemplateJSON::elementOfHeader(size_t element_num) const
  {
    assert(flagHasHeader);
    return storeHeader[element_num];
  }

std::vector< MultiColumnTableTemplateJSON::TypeHeaderJSON * > MultiColumnTableTemplateJSON::getHeader(void)
  {
    assert(flagHasHeader);
    return storeHeader;
  }

const std::vector< MultiColumnTableTemplateJSON::TypeHeaderJSON * > MultiColumnTableTemplateJSON::getHeader(void) const
  {
    assert(flagHasHeader);
    return storeHeader;
  }

bool MultiColumnTableTemplateJSON::hasContentRows(void) const
  {
    return flagHasContentRows;
  }

size_t MultiColumnTableTemplateJSON::countOfContentRows(void) const
  {
    assert(flagHasContentRows);
    return storeContentRows.size();
  }

MultiColumnTableTemplateJSON::TypeContentRowsJSON * MultiColumnTableTemplateJSON::elementOfContentRows(size_t element_num)
  {
    assert(flagHasContentRows);
    return storeContentRows[element_num];
  }

const MultiColumnTableTemplateJSON::TypeContentRowsJSON * MultiColumnTableTemplateJSON::elementOfContentRows(size_t element_num) const
  {
    assert(flagHasContentRows);
    return storeContentRows[element_num];
  }

std::vector< MultiColumnTableTemplateJSON::TypeContentRowsJSON * > MultiColumnTableTemplateJSON::getContentRows(void)
  {
    assert(flagHasContentRows);
    return storeContentRows;
  }

const std::vector< MultiColumnTableTemplateJSON::TypeContentRowsJSON * > MultiColumnTableTemplateJSON::getContentRows(void) const
  {
    assert(flagHasContentRows);
    return storeContentRows;
  }

bool MultiColumnTableTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * MultiColumnTableTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * MultiColumnTableTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool MultiColumnTableTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t MultiColumnTableTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string MultiColumnTableTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string MultiColumnTableTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > MultiColumnTableTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > MultiColumnTableTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

RegEx MultiColumnTableTemplateJSON::expressionColumnStretch("^((\\*)|([0-3]((,[0-3])*)))$");
MultiColumnTableTemplateJSON::TypeHeaderJSON *MultiColumnTableTemplateJSON::TypeHeaderJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHeaderJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHeaderJSON>, TypeHeaderJSON *, bool> generator("Type TypeHeader", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON *MultiColumnTableTemplateJSON::TypeContentRowsJSON::TypeColumnsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeColumnsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeColumnsJSON>, TypeColumnsJSON *, bool> generator("Type TypeColumns", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MultiColumnTableTemplateJSON::TypeContentRowsJSON *MultiColumnTableTemplateJSON::TypeContentRowsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeContentRowsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeContentRowsJSON>, TypeContentRowsJSON *, bool> generator("Type TypeContentRows", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MultiColumnTableTemplateJSON *MultiColumnTableTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MultiColumnTableTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MultiColumnTableTemplateJSON>, MultiColumnTableTemplateJSON *, bool> generator("Type MultiColumnTableTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
