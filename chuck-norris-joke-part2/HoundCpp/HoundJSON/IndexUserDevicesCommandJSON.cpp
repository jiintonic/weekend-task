/* file "IndexUserDevicesCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "IndexUserDevicesCommandJSON.h"

#include "IndexUserDevicesCommandJSON.h"


IndexUserDevicesCommandJSON::IndexUserDevicesCommandJSON(const IndexUserDevicesCommandJSON &)
  {
    assert(false);
  }

IndexUserDevicesCommandJSON &IndexUserDevicesCommandJSON::operator=(const IndexUserDevicesCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *IndexUserDevicesCommandJSON::extraIndexedUserDevicesCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_IndexedUserDevicesCount = new JSONIntegerValue(storeIndexedUserDevicesCount.get_o_integer());
    return generated_integer_IndexedUserDevicesCount;
  }

void IndexUserDevicesCommandJSON::fromJSONIndexedUserDevicesCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IndexedUserDevicesCount of IndexUserDevicesCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IndexedUserDevicesCount of IndexUserDevicesCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndexedUserDevicesCount(extracted_integer);
  }

IndexUserDevicesCommandJSON::IndexUserDevicesCommandJSON(void) :
        flagHasIndexedUserDevicesCount(false)
  {
    extraIndex = create_string_index();
  }

IndexUserDevicesCommandJSON::~IndexUserDevicesCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *IndexUserDevicesCommandJSON::getEditDeviceCommandKind(void) const
  {
    return "IndexUserDevices";
  }

bool IndexUserDevicesCommandJSON::hasIndexedUserDevicesCount(void) const
  {
    return flagHasIndexedUserDevicesCount;
  }

OInteger IndexUserDevicesCommandJSON::getIndexedUserDevicesCount(void)
  {
    assert(flagHasIndexedUserDevicesCount);
    return storeIndexedUserDevicesCount;
  }

const OInteger IndexUserDevicesCommandJSON::getIndexedUserDevicesCount(void) const
  {
    assert(flagHasIndexedUserDevicesCount);
    return storeIndexedUserDevicesCount;
  }

char IndexUserDevicesCommandJSON::Generator::lowerBoundIndexedUserDevicesCount[] = "0";
IndexUserDevicesCommandJSON *IndexUserDevicesCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    IndexUserDevicesCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<IndexUserDevicesCommandJSON>, IndexUserDevicesCommandJSON *, bool> generator("Type IndexUserDevicesCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
