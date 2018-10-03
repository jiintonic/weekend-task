/* file "StoredPageMatchPageListDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchPageListDataJSON.h"

#include "StoredPageMatchPageListDataJSON.h"


StoredPageMatchPageListDataJSON::StoredPageMatchPageListDataJSON(const StoredPageMatchPageListDataJSON &)
  {
    assert(false);
  }

StoredPageMatchPageListDataJSON &StoredPageMatchPageListDataJSON::operator=(const StoredPageMatchPageListDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StoredPageMatchPageListDataJSON::fromJSONIsGlobal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsGlobal of StoredPageMatchPageListDataJSON is not true for false.");
          }
      }
    setIsGlobal(the_bool);
  }

StoredPageMatchPageListDataJSON::StoredPageMatchPageListDataJSON(void) :
        flagHasIsGlobal(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchPageListDataJSON::~StoredPageMatchPageListDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StoredPageMatchPageListDataJSON::hasIsGlobal(void) const
  {
    return flagHasIsGlobal;
  }

bool StoredPageMatchPageListDataJSON::getIsGlobal(void)
  {
    assert(flagHasIsGlobal);
    return storeIsGlobal;
  }

const bool StoredPageMatchPageListDataJSON::getIsGlobal(void) const
  {
    assert(flagHasIsGlobal);
    return storeIsGlobal;
  }

StoredPageMatchPageListDataJSON *StoredPageMatchPageListDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchPageListDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchPageListDataJSON>, StoredPageMatchPageListDataJSON *, bool> generator("Type StoredPageMatchPageListData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
