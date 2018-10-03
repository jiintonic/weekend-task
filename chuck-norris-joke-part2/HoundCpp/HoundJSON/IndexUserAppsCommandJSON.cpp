/* file "IndexUserAppsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IndexUserAppsCommandJSON.h"

#include "IndexUserAppsCommandJSON.h"


IndexUserAppsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

IndexUserAppsCommandJSON::TypeNativeDataJSON &IndexUserAppsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void IndexUserAppsCommandJSON::TypeNativeDataJSON::fromJSONIndexedUserAppsCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IndexedUserAppsCount of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IndexedUserAppsCount of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndexedUserAppsCount(extracted_integer);
  }

IndexUserAppsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasIndexedUserAppsCount(false)
  {
    extraIndex = create_string_index();
  }

IndexUserAppsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool IndexUserAppsCommandJSON::TypeNativeDataJSON::hasIndexedUserAppsCount(void) const
  {
    return flagHasIndexedUserAppsCount;
  }

OInteger IndexUserAppsCommandJSON::TypeNativeDataJSON::getIndexedUserAppsCount(void)
  {
    assert(flagHasIndexedUserAppsCount);
    return storeIndexedUserAppsCount;
  }

const OInteger IndexUserAppsCommandJSON::TypeNativeDataJSON::getIndexedUserAppsCount(void) const
  {
    assert(flagHasIndexedUserAppsCount);
    return storeIndexedUserAppsCount;
  }

IndexUserAppsCommandJSON::IndexUserAppsCommandJSON(const IndexUserAppsCommandJSON &)
  {
    assert(false);
  }

IndexUserAppsCommandJSON &IndexUserAppsCommandJSON::operator=(const IndexUserAppsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *IndexUserAppsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void IndexUserAppsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

IndexUserAppsCommandJSON::IndexUserAppsCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

IndexUserAppsCommandJSON::~IndexUserAppsCommandJSON(void)
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

const char *IndexUserAppsCommandJSON::getCommandKind(void) const
  {
    return "IndexUserAppsCommand";
  }

bool IndexUserAppsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

IndexUserAppsCommandJSON::TypeNativeDataJSON * IndexUserAppsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const IndexUserAppsCommandJSON::TypeNativeDataJSON * IndexUserAppsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

char IndexUserAppsCommandJSON::TypeNativeDataJSON::Generator::lowerBoundIndexedUserAppsCount[] = "0";
IndexUserAppsCommandJSON::TypeNativeDataJSON *IndexUserAppsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
IndexUserAppsCommandJSON *IndexUserAppsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IndexUserAppsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IndexUserAppsCommandJSON>, IndexUserAppsCommandJSON *, bool> generator("Type IndexUserAppsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
