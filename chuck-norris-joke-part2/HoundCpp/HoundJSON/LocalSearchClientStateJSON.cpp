/* file "LocalSearchClientStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalSearchClientStateJSON.h"

#include "LocalSearchClientStateJSON.h"


LocalSearchClientStateJSON::LocalSearchClientStateJSON(const LocalSearchClientStateJSON &)
  {
    assert(false);
  }

LocalSearchClientStateJSON &LocalSearchClientStateJSON::operator=(const LocalSearchClientStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalSearchClientStateJSON::fromJSONSelectedResultID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SelectedResultID of LocalSearchClientStateJSON is not a string.");
    setSelectedResultID(std::string(json_string->getData()));
  }

LocalSearchClientStateJSON::LocalSearchClientStateJSON(void) :
        flagHasSelectedResultID(false)
  {
    extraIndex = create_string_index();
  }

LocalSearchClientStateJSON::~LocalSearchClientStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalSearchClientStateJSON::hasSelectedResultID(void) const
  {
    return flagHasSelectedResultID;
  }

std::string LocalSearchClientStateJSON::getSelectedResultID(void)
  {
    assert(flagHasSelectedResultID);
    return storeSelectedResultID;
  }

const std::string LocalSearchClientStateJSON::getSelectedResultID(void) const
  {
    assert(flagHasSelectedResultID);
    return storeSelectedResultID;
  }

LocalSearchClientStateJSON *LocalSearchClientStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalSearchClientStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalSearchClientStateJSON>, LocalSearchClientStateJSON *, bool> generator("Type LocalSearchClientState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
