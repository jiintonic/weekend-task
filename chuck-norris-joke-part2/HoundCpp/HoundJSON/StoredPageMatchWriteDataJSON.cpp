/* file "StoredPageMatchWriteDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchWriteDataJSON.h"

#include "StoredPageMatchWriteDataJSON.h"


StoredPageMatchWriteDataJSON::StoredPageMatchWriteDataJSON(const StoredPageMatchWriteDataJSON &)
  {
    assert(false);
  }

StoredPageMatchWriteDataJSON &StoredPageMatchWriteDataJSON::operator=(const StoredPageMatchWriteDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StoredPageMatchWriteDataJSON::fromJSONPageName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PageName of StoredPageMatchWriteDataJSON is not a string.");
    setPageName(std::string(json_string->getData()));
  }

void StoredPageMatchWriteDataJSON::fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PageIsGlobal of StoredPageMatchWriteDataJSON is not true for false.");
          }
      }
    setPageIsGlobal(the_bool);
  }

void StoredPageMatchWriteDataJSON::fromJSONPageData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchesJSON *convert_classy = ClientMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPageData(convert_classy);
    convert_classy->remove_reference();
  }

StoredPageMatchWriteDataJSON::StoredPageMatchWriteDataJSON(void) :
        flagHasPageName(false),
        flagHasPageIsGlobal(false),
        flagHasPageData(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchWriteDataJSON::~StoredPageMatchWriteDataJSON(void)
  {
    if (flagHasPageData)
      {
        storePageData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StoredPageMatchWriteDataJSON::hasPageName(void) const
  {
    return flagHasPageName;
  }

std::string StoredPageMatchWriteDataJSON::getPageName(void)
  {
    assert(flagHasPageName);
    return storePageName;
  }

const std::string StoredPageMatchWriteDataJSON::getPageName(void) const
  {
    assert(flagHasPageName);
    return storePageName;
  }

bool StoredPageMatchWriteDataJSON::hasPageIsGlobal(void) const
  {
    return flagHasPageIsGlobal;
  }

bool StoredPageMatchWriteDataJSON::getPageIsGlobal(void)
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

const bool StoredPageMatchWriteDataJSON::getPageIsGlobal(void) const
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

bool StoredPageMatchWriteDataJSON::hasPageData(void) const
  {
    return flagHasPageData;
  }

ClientMatchesJSON * StoredPageMatchWriteDataJSON::getPageData(void)
  {
    assert(flagHasPageData);
    return storePageData;
  }

const ClientMatchesJSON * StoredPageMatchWriteDataJSON::getPageData(void) const
  {
    assert(flagHasPageData);
    return storePageData;
  }

StoredPageMatchWriteDataJSON *StoredPageMatchWriteDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchWriteDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchWriteDataJSON>, StoredPageMatchWriteDataJSON *, bool> generator("Type StoredPageMatchWriteData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
