/* file "IndexUserGroupsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IndexUserGroupsCommandJSON.h"

#include "IndexUserGroupsCommandJSON.h"


IndexUserGroupsCommandJSON::IndexUserGroupsCommandJSON(const IndexUserGroupsCommandJSON &)
  {
    assert(false);
  }

IndexUserGroupsCommandJSON &IndexUserGroupsCommandJSON::operator=(const IndexUserGroupsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *IndexUserGroupsCommandJSON::extraIndexedUserGroupsCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_IndexedUserGroupsCount = new JSONIntegerValue(storeIndexedUserGroupsCount.get_o_integer());
    return generated_integer_IndexedUserGroupsCount;
  }

void IndexUserGroupsCommandJSON::fromJSONIndexedUserGroupsCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IndexedUserGroupsCount of IndexUserGroupsCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IndexedUserGroupsCount of IndexUserGroupsCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndexedUserGroupsCount(extracted_integer);
  }

IndexUserGroupsCommandJSON::IndexUserGroupsCommandJSON(void) :
        flagHasIndexedUserGroupsCount(false)
  {
    extraIndex = create_string_index();
  }

IndexUserGroupsCommandJSON::~IndexUserGroupsCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *IndexUserGroupsCommandJSON::getEditDeviceCommandKind(void) const
  {
    return "IndexUserGroups";
  }

bool IndexUserGroupsCommandJSON::hasIndexedUserGroupsCount(void) const
  {
    return flagHasIndexedUserGroupsCount;
  }

OInteger IndexUserGroupsCommandJSON::getIndexedUserGroupsCount(void)
  {
    assert(flagHasIndexedUserGroupsCount);
    return storeIndexedUserGroupsCount;
  }

const OInteger IndexUserGroupsCommandJSON::getIndexedUserGroupsCount(void) const
  {
    assert(flagHasIndexedUserGroupsCount);
    return storeIndexedUserGroupsCount;
  }

char IndexUserGroupsCommandJSON::Generator::lowerBoundIndexedUserGroupsCount[] = "0";
IndexUserGroupsCommandJSON *IndexUserGroupsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IndexUserGroupsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IndexUserGroupsCommandJSON>, IndexUserGroupsCommandJSON *, bool> generator("Type IndexUserGroupsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
