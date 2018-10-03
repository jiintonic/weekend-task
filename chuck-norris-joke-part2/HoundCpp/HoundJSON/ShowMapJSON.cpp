/* file "ShowMapJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowMapJSON.h"

#include "ShowMapJSON.h"


ShowMapJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

ShowMapJSON::TypeNativeDataJSON &ShowMapJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowMapJSON::TypeNativeDataJSON::fromJSONMapLocationSpecs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MapLocationSpecs of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MapLocationSpecs of TypeNativeDataJSON has too few elements.");
    std::vector< MapLocationJSON * > vector_MapLocationSpecs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MapLocationSpecs1[num1] = convert_classy;
      }
    assert(vector_MapLocationSpecs1.size() >= 1);
    initMapLocationSpecs();
    for (size_t num2 = 0; num2 < vector_MapLocationSpecs1.size(); ++num2)
        appendMapLocationSpecs(vector_MapLocationSpecs1[num2]);
    for (size_t num1 = 0; num1 < vector_MapLocationSpecs1.size(); ++num1)
      {
        vector_MapLocationSpecs1[num1]->remove_reference();
      }
  }

void ShowMapJSON::TypeNativeDataJSON::fromJSONRequestedCoordinates(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedCoordinates of TypeNativeDataJSON is not true for false.");
          }
      }
    setRequestedCoordinates(the_bool);
  }

ShowMapJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasMapLocationSpecs(false),
        flagHasRequestedCoordinates(false)
  {
  }

ShowMapJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasMapLocationSpecs)
      {
        for (size_t num4 = 0; num4 < storeMapLocationSpecs.size(); ++num4)
          {
            storeMapLocationSpecs[num4]->remove_reference();
          }
      }
  }

bool ShowMapJSON::TypeNativeDataJSON::hasMapLocationSpecs(void) const
  {
    return flagHasMapLocationSpecs;
  }

size_t ShowMapJSON::TypeNativeDataJSON::countOfMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs.size();
  }

MapLocationJSON * ShowMapJSON::TypeNativeDataJSON::elementOfMapLocationSpecs(size_t element_num)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

const MapLocationJSON * ShowMapJSON::TypeNativeDataJSON::elementOfMapLocationSpecs(size_t element_num) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs[element_num];
  }

std::vector< MapLocationJSON * > ShowMapJSON::TypeNativeDataJSON::getMapLocationSpecs(void)
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

const std::vector< MapLocationJSON * > ShowMapJSON::TypeNativeDataJSON::getMapLocationSpecs(void) const
  {
    assert(flagHasMapLocationSpecs);
    return storeMapLocationSpecs;
  }

bool ShowMapJSON::TypeNativeDataJSON::hasRequestedCoordinates(void) const
  {
    return flagHasRequestedCoordinates;
  }

bool ShowMapJSON::TypeNativeDataJSON::getRequestedCoordinates(void)
  {
    assert(flagHasRequestedCoordinates);
    return storeRequestedCoordinates;
  }

const bool ShowMapJSON::TypeNativeDataJSON::getRequestedCoordinates(void) const
  {
    assert(flagHasRequestedCoordinates);
    return storeRequestedCoordinates;
  }

ShowMapJSON::ShowMapJSON(const ShowMapJSON &)
  {
    assert(false);
  }

ShowMapJSON &ShowMapJSON::operator=(const ShowMapJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowMapJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void ShowMapJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

ShowMapJSON::ShowMapJSON(void) :
        flagHasNativeData(false)
  {
  }

ShowMapJSON::~ShowMapJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *ShowMapJSON::getMapCommandKind(void) const
  {
    return "ShowMap";
  }

bool ShowMapJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ShowMapJSON::TypeNativeDataJSON * ShowMapJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ShowMapJSON::TypeNativeDataJSON * ShowMapJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

ShowMapJSON::TypeNativeDataJSON *ShowMapJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ShowMapJSON *ShowMapJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowMapJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowMapJSON>, ShowMapJSON *, bool> generator("Type ShowMap", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
