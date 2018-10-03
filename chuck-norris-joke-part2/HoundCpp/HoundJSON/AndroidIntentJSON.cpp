/* file "AndroidIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AndroidIntentJSON.h"

#include "AndroidIntentJSON.h"


AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::TypeExtrasJSON(const TypeExtrasJSON &)
  {
    assert(false);
  }

AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON &AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::operator=(const TypeExtrasJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of TypeExtrasJSON is not a string.");
    setType(std::string(json_string->getData()));
  }

void AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::fromJSONKey(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Key of TypeExtrasJSON is not a string.");
    setKey(std::string(json_string->getData()));
  }

void AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of TypeExtrasJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::TypeExtrasJSON(void) :
        flagHasType(false),
        flagHasKey(false),
        flagHasValue(false)
  {
    extraIndex = create_string_index();
  }

AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::~TypeExtrasJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::hasType(void) const
  {
    return flagHasType;
  }

std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

bool AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::hasKey(void) const
  {
    return flagHasKey;
  }

std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getKey(void)
  {
    assert(flagHasKey);
    return storeKey;
  }

const std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getKey(void) const
  {
    assert(flagHasKey);
    return storeKey;
  }

bool AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

AndroidIntentJSON::TypeValueJSON::TypeValueJSON(const TypeValueJSON &)
  {
    assert(false);
  }

AndroidIntentJSON::TypeValueJSON &AndroidIntentJSON::TypeValueJSON::operator=(const TypeValueJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AndroidIntentJSON::TypeValueJSON::fromJSONLaunchMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LaunchMode of TypeValueJSON is not a string.");
    setLaunchMode(std::string(json_string->getData()));
  }

void AndroidIntentJSON::TypeValueJSON::fromJSONAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Action of TypeValueJSON is not a string.");
    setAction(std::string(json_string->getData()));
  }

void AndroidIntentJSON::TypeValueJSON::fromJSONExtras(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Extras of TypeValueJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeExtrasJSON * > vector_Extras1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeExtrasJSON *convert_classy = TypeExtrasJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Extras1[num1] = convert_classy;
      }
    initExtras();
    for (size_t num3 = 0; num3 < vector_Extras1.size(); ++num3)
        appendExtras(vector_Extras1[num3]);
    for (size_t num1 = 0; num1 < vector_Extras1.size(); ++num1)
      {
        vector_Extras1[num1]->remove_reference();
      }
  }

void AndroidIntentJSON::TypeValueJSON::fromJSONURI(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URI of TypeValueJSON is not a string.");
    setURI(std::string(json_string->getData()));
  }

AndroidIntentJSON::TypeValueJSON::TypeValueJSON(void) :
        flagHasLaunchMode(false),
        flagHasAction(false),
        flagHasExtras(false),
        flagHasURI(false)
  {
    extraIndex = create_string_index();
  }

AndroidIntentJSON::TypeValueJSON::~TypeValueJSON(void)
  {
    if (flagHasExtras)
      {
        for (size_t num7 = 0; num7 < storeExtras.size(); ++num7)
          {
            storeExtras[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AndroidIntentJSON::TypeValueJSON::hasLaunchMode(void) const
  {
    return flagHasLaunchMode;
  }

std::string AndroidIntentJSON::TypeValueJSON::getLaunchMode(void)
  {
    assert(flagHasLaunchMode);
    return storeLaunchMode;
  }

const std::string AndroidIntentJSON::TypeValueJSON::getLaunchMode(void) const
  {
    assert(flagHasLaunchMode);
    return storeLaunchMode;
  }

bool AndroidIntentJSON::TypeValueJSON::hasAction(void) const
  {
    return flagHasAction;
  }

std::string AndroidIntentJSON::TypeValueJSON::getAction(void)
  {
    assert(flagHasAction);
    return storeAction;
  }

const std::string AndroidIntentJSON::TypeValueJSON::getAction(void) const
  {
    assert(flagHasAction);
    return storeAction;
  }

bool AndroidIntentJSON::TypeValueJSON::hasExtras(void) const
  {
    return flagHasExtras;
  }

size_t AndroidIntentJSON::TypeValueJSON::countOfExtras(void) const
  {
    return storeExtras.size();
  }

AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON * AndroidIntentJSON::TypeValueJSON::elementOfExtras(size_t element_num)
  {
    return storeExtras[element_num];
  }

const AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON * AndroidIntentJSON::TypeValueJSON::elementOfExtras(size_t element_num) const
  {
    return storeExtras[element_num];
  }

std::vector< AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON * > AndroidIntentJSON::TypeValueJSON::getExtras(void)
  {
    return storeExtras;
  }

const std::vector< AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON * > AndroidIntentJSON::TypeValueJSON::getExtras(void) const
  {
    return storeExtras;
  }

bool AndroidIntentJSON::TypeValueJSON::hasURI(void) const
  {
    return flagHasURI;
  }

std::string AndroidIntentJSON::TypeValueJSON::getURI(void)
  {
    assert(flagHasURI);
    return storeURI;
  }

const std::string AndroidIntentJSON::TypeValueJSON::getURI(void) const
  {
    assert(flagHasURI);
    return storeURI;
  }

AndroidIntentJSON::AndroidIntentJSON(const AndroidIntentJSON &)
  {
    assert(false);
  }

AndroidIntentJSON &AndroidIntentJSON::operator=(const AndroidIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AndroidIntentJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Value of AndroidIntentJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Value of AndroidIntentJSON has too few elements.");
    std::vector< TypeValueJSON * > vector_Value1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeValueJSON *convert_classy = TypeValueJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Value1[num1] = convert_classy;
      }
    assert(vector_Value1.size() >= 1);
    initValue();
    for (size_t num4 = 0; num4 < vector_Value1.size(); ++num4)
        appendValue(vector_Value1[num4]);
    for (size_t num1 = 0; num1 < vector_Value1.size(); ++num1)
      {
        vector_Value1[num1]->remove_reference();
      }
  }

AndroidIntentJSON::AndroidIntentJSON(void) :
        flagHasValue(false)
  {
  }

AndroidIntentJSON::~AndroidIntentJSON(void)
  {
    if (flagHasValue)
      {
        for (size_t num10 = 0; num10 < storeValue.size(); ++num10)
          {
            storeValue[num10]->remove_reference();
          }
      }
  }

bool AndroidIntentJSON::hasValue(void) const
  {
    return flagHasValue;
  }

size_t AndroidIntentJSON::countOfValue(void) const
  {
    assert(flagHasValue);
    return storeValue.size();
  }

AndroidIntentJSON::TypeValueJSON * AndroidIntentJSON::elementOfValue(size_t element_num)
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

const AndroidIntentJSON::TypeValueJSON * AndroidIntentJSON::elementOfValue(size_t element_num) const
  {
    assert(flagHasValue);
    return storeValue[element_num];
  }

std::vector< AndroidIntentJSON::TypeValueJSON * > AndroidIntentJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::vector< AndroidIntentJSON::TypeValueJSON * > AndroidIntentJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON *AndroidIntentJSON::TypeValueJSON::TypeExtrasJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeExtrasJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeExtrasJSON>, TypeExtrasJSON *, bool> generator("Type TypeExtras", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AndroidIntentJSON::TypeValueJSON *AndroidIntentJSON::TypeValueJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeValueJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AndroidIntentJSON *AndroidIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AndroidIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AndroidIntentJSON>, AndroidIntentJSON *, bool> generator("Type AndroidIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
