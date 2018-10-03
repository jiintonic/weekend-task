/* file "StoredPageMatchReadCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchReadCommandJSON.h"

#include "StoredPageMatchReadCommandJSON.h"


StoredPageMatchReadCommandJSON::StoredPageMatchReadCommandJSON(const StoredPageMatchReadCommandJSON &)
  {
    assert(false);
  }

StoredPageMatchReadCommandJSON &StoredPageMatchReadCommandJSON::operator=(const StoredPageMatchReadCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StoredPageMatchReadCommandJSON::extraPageNameToJSON(void) const
  {
    JSONStringValue *generated_string_PageName = new JSONStringValue(storePageName.c_str());
    return generated_string_PageName;
  }

JSONValue *StoredPageMatchReadCommandJSON::extraPageIsGlobalToJSON(void) const
  {
    JSONValue *generated_boolean_PageIsGlobal = (storePageIsGlobal ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PageIsGlobal;
  }

JSONValue *StoredPageMatchReadCommandJSON::extraPageDataToJSON(void) const
  {
    JSONValueHandler handler_PageData;
    storePageData->write_as_json(&handler_PageData);
    handler_PageData.result->add_reference();
    return handler_PageData.result;
  }

void StoredPageMatchReadCommandJSON::fromJSONPageName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PageName of StoredPageMatchReadCommandJSON is not a string.");
    setPageName(std::string(json_string->getData()));
  }

void StoredPageMatchReadCommandJSON::fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PageIsGlobal of StoredPageMatchReadCommandJSON is not true for false.");
          }
      }
    setPageIsGlobal(the_bool);
  }

void StoredPageMatchReadCommandJSON::fromJSONPageData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchesJSON *convert_classy = ClientMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPageData(convert_classy);
    convert_classy->remove_reference();
  }

StoredPageMatchReadCommandJSON::StoredPageMatchReadCommandJSON(void) :
        flagHasPageName(false),
        flagHasPageIsGlobal(false),
        flagHasPageData(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchReadCommandJSON::~StoredPageMatchReadCommandJSON(void)
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

const char *StoredPageMatchReadCommandJSON::getStoredPageMatchCommandKind(void) const
  {
    return "Read";
  }

bool StoredPageMatchReadCommandJSON::hasPageName(void) const
  {
    return flagHasPageName;
  }

std::string StoredPageMatchReadCommandJSON::getPageName(void)
  {
    assert(flagHasPageName);
    return storePageName;
  }

const std::string StoredPageMatchReadCommandJSON::getPageName(void) const
  {
    assert(flagHasPageName);
    return storePageName;
  }

bool StoredPageMatchReadCommandJSON::hasPageIsGlobal(void) const
  {
    return flagHasPageIsGlobal;
  }

bool StoredPageMatchReadCommandJSON::getPageIsGlobal(void)
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

const bool StoredPageMatchReadCommandJSON::getPageIsGlobal(void) const
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

bool StoredPageMatchReadCommandJSON::hasPageData(void) const
  {
    return flagHasPageData;
  }

ClientMatchesJSON * StoredPageMatchReadCommandJSON::getPageData(void)
  {
    assert(flagHasPageData);
    return storePageData;
  }

const ClientMatchesJSON * StoredPageMatchReadCommandJSON::getPageData(void) const
  {
    assert(flagHasPageData);
    return storePageData;
  }

StoredPageMatchReadCommandJSON *StoredPageMatchReadCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchReadCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchReadCommandJSON>, StoredPageMatchReadCommandJSON *, bool> generator("Type StoredPageMatchReadCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
