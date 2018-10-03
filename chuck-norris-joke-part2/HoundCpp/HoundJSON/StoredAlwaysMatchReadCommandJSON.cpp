/* file "StoredAlwaysMatchReadCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredAlwaysMatchReadCommandJSON.h"

#include "StoredAlwaysMatchReadCommandJSON.h"


StoredAlwaysMatchReadCommandJSON::StoredAlwaysMatchReadCommandJSON(const StoredAlwaysMatchReadCommandJSON &)
  {
    assert(false);
  }

StoredAlwaysMatchReadCommandJSON &StoredAlwaysMatchReadCommandJSON::operator=(const StoredAlwaysMatchReadCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StoredAlwaysMatchReadCommandJSON::extraDataToJSON(void) const
  {
    JSONValueHandler handler_Data;
    storeData->write_as_json(&handler_Data);
    handler_Data.result->add_reference();
    return handler_Data.result;
  }

void StoredAlwaysMatchReadCommandJSON::fromJSONData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchesJSON *convert_classy = ClientMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setData(convert_classy);
    convert_classy->remove_reference();
  }

StoredAlwaysMatchReadCommandJSON::StoredAlwaysMatchReadCommandJSON(void) :
        flagHasData(false)
  {
    extraIndex = create_string_index();
  }

StoredAlwaysMatchReadCommandJSON::~StoredAlwaysMatchReadCommandJSON(void)
  {
    if (flagHasData)
      {
        storeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *StoredAlwaysMatchReadCommandJSON::getStoredAlwaysMatchCommandKind(void) const
  {
    return "Read";
  }

bool StoredAlwaysMatchReadCommandJSON::hasData(void) const
  {
    return flagHasData;
  }

ClientMatchesJSON * StoredAlwaysMatchReadCommandJSON::getData(void)
  {
    assert(flagHasData);
    return storeData;
  }

const ClientMatchesJSON * StoredAlwaysMatchReadCommandJSON::getData(void) const
  {
    assert(flagHasData);
    return storeData;
  }

StoredAlwaysMatchReadCommandJSON *StoredAlwaysMatchReadCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredAlwaysMatchReadCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredAlwaysMatchReadCommandJSON>, StoredAlwaysMatchReadCommandJSON *, bool> generator("Type StoredAlwaysMatchReadCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
