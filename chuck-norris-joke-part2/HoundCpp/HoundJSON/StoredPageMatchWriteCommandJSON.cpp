/* file "StoredPageMatchWriteCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StoredPageMatchWriteCommandJSON.h"

#include "StoredPageMatchWriteCommandJSON.h"


StoredPageMatchWriteCommandJSON::StoredPageMatchWriteCommandJSON(const StoredPageMatchWriteCommandJSON &)
  {
    assert(false);
  }

StoredPageMatchWriteCommandJSON &StoredPageMatchWriteCommandJSON::operator=(const StoredPageMatchWriteCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *StoredPageMatchWriteCommandJSON::extraPageNameToJSON(void) const
  {
    JSONStringValue *generated_string_PageName = new JSONStringValue(storePageName.c_str());
    return generated_string_PageName;
  }

JSONValue *StoredPageMatchWriteCommandJSON::extraPageIsGlobalToJSON(void) const
  {
    JSONValue *generated_boolean_PageIsGlobal = (storePageIsGlobal ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_PageIsGlobal;
  }

void StoredPageMatchWriteCommandJSON::fromJSONPageName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PageName of StoredPageMatchWriteCommandJSON is not a string.");
    setPageName(std::string(json_string->getData()));
  }

void StoredPageMatchWriteCommandJSON::fromJSONPageIsGlobal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PageIsGlobal of StoredPageMatchWriteCommandJSON is not true for false.");
          }
      }
    setPageIsGlobal(the_bool);
  }

StoredPageMatchWriteCommandJSON::StoredPageMatchWriteCommandJSON(void) :
        flagHasPageName(false),
        flagHasPageIsGlobal(false)
  {
    extraIndex = create_string_index();
  }

StoredPageMatchWriteCommandJSON::~StoredPageMatchWriteCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *StoredPageMatchWriteCommandJSON::getStoredPageMatchCommandKind(void) const
  {
    return "Write";
  }

bool StoredPageMatchWriteCommandJSON::hasPageName(void) const
  {
    return flagHasPageName;
  }

std::string StoredPageMatchWriteCommandJSON::getPageName(void)
  {
    assert(flagHasPageName);
    return storePageName;
  }

const std::string StoredPageMatchWriteCommandJSON::getPageName(void) const
  {
    assert(flagHasPageName);
    return storePageName;
  }

bool StoredPageMatchWriteCommandJSON::hasPageIsGlobal(void) const
  {
    return flagHasPageIsGlobal;
  }

bool StoredPageMatchWriteCommandJSON::getPageIsGlobal(void)
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

const bool StoredPageMatchWriteCommandJSON::getPageIsGlobal(void) const
  {
    assert(flagHasPageIsGlobal);
    return storePageIsGlobal;
  }

StoredPageMatchWriteCommandJSON *StoredPageMatchWriteCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StoredPageMatchWriteCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StoredPageMatchWriteCommandJSON>, StoredPageMatchWriteCommandJSON *, bool> generator("Type StoredPageMatchWriteCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
