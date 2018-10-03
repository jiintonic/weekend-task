/* file "ArithCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ArithCommandJSON.h"

#include "ArithCommandJSON.h"


ArithCommandJSON::TypeArithCommandKind ArithCommandJSON::stringToArithCommandKind(const char *chars)
  {
    if (strcmp(chars, "ArithCommand") == 0)
        return ArithCommandKind_ArithCommand;
    throw("The value for field `ArithCommandKind' is not one of the legal values.");
  }

const char *ArithCommandJSON::stringFromArithCommandKind(TypeArithCommandKind the_enum)
  {
    switch (the_enum)
      {
        case ArithCommandKind_ArithCommand:
            return "ArithCommand";
        default:
            assert(false);
            return NULL;
      }
  }

ArithCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

ArithCommandJSON::TypeNativeDataJSON &ArithCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ArithCommandJSON::TypeNativeDataJSON::fromJSONFormula(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Formula of TypeNativeDataJSON is not a string.");
    setFormula(std::string(json_string->getData()));
  }

void ArithCommandJSON::TypeNativeDataJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Result of TypeNativeDataJSON is not a string.");
    setResult(std::string(json_string->getData()));
  }

void ArithCommandJSON::TypeNativeDataJSON::fromJSONTextResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextResponse of TypeNativeDataJSON is not a string.");
    setTextResponse(std::string(json_string->getData()));
  }

ArithCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasFormula(false),
        flagHasResult(false),
        flagHasTextResponse(false)
  {
    extraIndex = create_string_index();
  }

ArithCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ArithCommandJSON::TypeNativeDataJSON::hasFormula(void) const
  {
    return flagHasFormula;
  }

std::string ArithCommandJSON::TypeNativeDataJSON::getFormula(void)
  {
    assert(flagHasFormula);
    return storeFormula;
  }

const std::string ArithCommandJSON::TypeNativeDataJSON::getFormula(void) const
  {
    assert(flagHasFormula);
    return storeFormula;
  }

bool ArithCommandJSON::TypeNativeDataJSON::hasResult(void) const
  {
    return flagHasResult;
  }

std::string ArithCommandJSON::TypeNativeDataJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const std::string ArithCommandJSON::TypeNativeDataJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

bool ArithCommandJSON::TypeNativeDataJSON::hasTextResponse(void) const
  {
    return flagHasTextResponse;
  }

std::string ArithCommandJSON::TypeNativeDataJSON::getTextResponse(void)
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

const std::string ArithCommandJSON::TypeNativeDataJSON::getTextResponse(void) const
  {
    assert(flagHasTextResponse);
    return storeTextResponse;
  }

ArithCommandJSON::ArithCommandJSON(const ArithCommandJSON &)
  {
    assert(false);
  }

ArithCommandJSON &ArithCommandJSON::operator=(const ArithCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ArithCommandJSON::extraArithCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_ArithCommandKind;
    generated_string_ArithCommandKind = new JSONStringValue("ArithCommand");
    return generated_string_ArithCommandKind;
  }

JSONValue *ArithCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void ArithCommandJSON::fromJSONArithCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArithCommandKind of ArithCommandJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ArithCommand") == 0))
        throw("The value for field ArithCommandKind of ArithCommandJSON is not `ArithCommand'.");
    setArithCommandKind();
  }

void ArithCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

ArithCommandJSON::ArithCommandJSON(void) :
        flagHasArithCommandKind(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

ArithCommandJSON::~ArithCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ArithCommandJSON::getCommandKind(void) const
  {
    return "ArithCommand";
  }

bool ArithCommandJSON::hasArithCommandKind(void) const
  {
    return flagHasArithCommandKind;
  }

ArithCommandJSON::TypeArithCommandKind ArithCommandJSON::getArithCommandKind(void)
  {
    assert(flagHasArithCommandKind);
    return ArithCommandKind_ArithCommand;
  }

const ArithCommandJSON::TypeArithCommandKind ArithCommandJSON::getArithCommandKind(void) const
  {
    assert(flagHasArithCommandKind);
    return ArithCommandKind_ArithCommand;
  }

const char *ArithCommandJSON::getArithCommandKindAsChars(void) const
  {
    return stringFromArithCommandKind(getArithCommandKind());
  }

std::string ArithCommandJSON::getArithCommandKindAsString(void) const
  {
    return stringFromArithCommandKind(getArithCommandKind());
  }

bool ArithCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ArithCommandJSON::TypeNativeDataJSON * ArithCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ArithCommandJSON::TypeNativeDataJSON * ArithCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

ArithCommandJSON::TypeNativeDataJSON *ArithCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ArithCommandJSON *ArithCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ArithCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ArithCommandJSON>, ArithCommandJSON *, bool> generator("Type ArithCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
