/* file "GamesMenuShowMenuCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GamesMenuShowMenuCommandJSON.h"

#include "GamesMenuShowMenuCommandJSON.h"


GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

GamesMenuShowMenuCommandJSON::TypeNativeDataJSON &GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::fromJSONGames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Games of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Games of TypeNativeDataJSON has too few elements.");
    std::vector< GameJSON * > vector_Games1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GameJSON *convert_classy = GameJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Games1[num1] = convert_classy;
      }
    assert(vector_Games1.size() >= 1);
    initGames();
    for (size_t num2 = 0; num2 < vector_Games1.size(); ++num2)
        appendGames(vector_Games1[num2]);
    for (size_t num1 = 0; num1 < vector_Games1.size(); ++num1)
      {
        vector_Games1[num1]->remove_reference();
      }
  }

GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasGames(false)
  {
    extraIndex = create_string_index();
  }

GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasGames)
      {
        for (size_t num4 = 0; num4 < storeGames.size(); ++num4)
          {
            storeGames[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::hasGames(void) const
  {
    return flagHasGames;
  }

size_t GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::countOfGames(void) const
  {
    assert(flagHasGames);
    return storeGames.size();
  }

GameJSON * GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::elementOfGames(size_t element_num)
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

const GameJSON * GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::elementOfGames(size_t element_num) const
  {
    assert(flagHasGames);
    return storeGames[element_num];
  }

std::vector< GameJSON * > GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::getGames(void)
  {
    assert(flagHasGames);
    return storeGames;
  }

const std::vector< GameJSON * > GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::getGames(void) const
  {
    assert(flagHasGames);
    return storeGames;
  }

GamesMenuShowMenuCommandJSON::GamesMenuShowMenuCommandJSON(const GamesMenuShowMenuCommandJSON &)
  {
    assert(false);
  }

GamesMenuShowMenuCommandJSON &GamesMenuShowMenuCommandJSON::operator=(const GamesMenuShowMenuCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *GamesMenuShowMenuCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void GamesMenuShowMenuCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

GamesMenuShowMenuCommandJSON::GamesMenuShowMenuCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

GamesMenuShowMenuCommandJSON::~GamesMenuShowMenuCommandJSON(void)
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

const char *GamesMenuShowMenuCommandJSON::getGamesMenuCommandKind(void) const
  {
    return "GamesMenuShowMenuCommand";
  }

bool GamesMenuShowMenuCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

GamesMenuShowMenuCommandJSON::TypeNativeDataJSON * GamesMenuShowMenuCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const GamesMenuShowMenuCommandJSON::TypeNativeDataJSON * GamesMenuShowMenuCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

GamesMenuShowMenuCommandJSON::TypeNativeDataJSON *GamesMenuShowMenuCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
GamesMenuShowMenuCommandJSON *GamesMenuShowMenuCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GamesMenuShowMenuCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GamesMenuShowMenuCommandJSON>, GamesMenuShowMenuCommandJSON *, bool> generator("Type GamesMenuShowMenuCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
