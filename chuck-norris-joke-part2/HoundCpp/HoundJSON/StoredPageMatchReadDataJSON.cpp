/* file "StoredPageMatchReadDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchReadDataJSON.h"

#include "StoredPageMatchReadDataJSON.h"


StoredPageMatchReadDataJSON::StoredPageMatchReadDataJSON(const StoredPageMatchReadDataJSON &)
  {
    assert(false);
  }

StoredPageMatchReadDataJSON &StoredPageMatchReadDataJSON::operator=(const StoredPageMatchReadDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StoredPageMatchReadDataJSON::fromJSONPageName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PageName of StoredPageMatchReadDataJSON is not a string.");
    setPageName(std::string(json_string->getData()));
  }

void StoredPageMatchReadDataJSON::fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PageIsGlobal of StoredPageMatchReadDataJSON is not true for false.");
          }
      }
    setPageIsGlobal(the_bool);
  }

StoredPageMatchReadDataJSON::StoredPageMatchReadDataJSON(void) :
        flagHasPageName(false),
        flagHasPageIsGlobal(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchReadDataJSON::~StoredPageMatchReadDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StoredPageMatchReadDataJSON::hasPageName(void) const
  {
    return flagHasPageName;
  }

std::string StoredPageMatchReadDataJSON::getPageName(void)
  {
    assert(flagHasPageName);
    return storePageName;
  }

const std::string StoredPageMatchReadDataJSON::getPageName(void) const
  {
    assert(flagHasPageName);
    return storePageName;
  }

bool StoredPageMatchReadDataJSON::hasPageIsGlobal(void) const
  {
    return flagHasPageIsGlobal;
  }

bool StoredPageMatchReadDataJSON::getPageIsGlobal(void)
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

const bool StoredPageMatchReadDataJSON::getPageIsGlobal(void) const
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

StoredPageMatchReadDataJSON *StoredPageMatchReadDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchReadDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchReadDataJSON>, StoredPageMatchReadDataJSON *, bool> generator("Type StoredPageMatchReadData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
