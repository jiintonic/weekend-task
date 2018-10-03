/* file "ApproximateQuantityJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ApproximateQuantityJSON.h"

#include "ApproximateQuantityJSON.h"


ApproximateQuantityJSON::ApproximateQuantityJSON(const ApproximateQuantityJSON &)
  {
    assert(false);
  }

ApproximateQuantityJSON &ApproximateQuantityJSON::operator=(const ApproximateQuantityJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ApproximateQuantityJSON::extraBaseToJSON(void) const
  {
    JSONValueHandler handler_Base;
    storeBase->write_as_json(&handler_Base);
    handler_Base.result->add_reference();
    return handler_Base.result;
  }

void ApproximateQuantityJSON::fromJSONBase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    QuantityJSON *convert_classy = QuantityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBase(convert_classy);
    convert_classy->remove_reference();
  }

ApproximateQuantityJSON::ApproximateQuantityJSON(void) :
        flagHasBase(false)
  {
    extraIndex = create_string_index();
  }

ApproximateQuantityJSON::~ApproximateQuantityJSON(void)
  {
    if (flagHasBase)
      {
        storeBase->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ApproximateQuantityJSON::getQuantityKind(void) const
  {
    return "Approximate";
  }

bool ApproximateQuantityJSON::hasBase(void) const
  {
    return flagHasBase;
  }

QuantityJSON * ApproximateQuantityJSON::getBase(void)
  {
    assert(flagHasBase);
    return storeBase;
  }

const QuantityJSON * ApproximateQuantityJSON::getBase(void) const
  {
    assert(flagHasBase);
    return storeBase;
  }

ApproximateQuantityJSON *ApproximateQuantityJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ApproximateQuantityJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ApproximateQuantityJSON>, ApproximateQuantityJSON *, bool> generator("Type ApproximateQuantity", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
