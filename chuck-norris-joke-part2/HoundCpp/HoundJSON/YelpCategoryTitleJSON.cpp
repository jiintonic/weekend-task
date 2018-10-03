/* file "YelpCategoryTitleJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "YelpCategoryTitleJSON.h"

#include "YelpCategoryTitleJSON.h"


YelpCategoryTitleJSON::YelpCategoryTitleJSON(const YelpCategoryTitleJSON &)
  {
    assert(false);
  }

YelpCategoryTitleJSON &YelpCategoryTitleJSON::operator=(const YelpCategoryTitleJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void YelpCategoryTitleJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of YelpCategoryTitleJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

YelpCategoryTitleJSON::YelpCategoryTitleJSON(void) :
        flagHasValue(false)
  {
  }

YelpCategoryTitleJSON::YelpCategoryTitleJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

YelpCategoryTitleJSON::~YelpCategoryTitleJSON(void)
  {
  }

bool YelpCategoryTitleJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string YelpCategoryTitleJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string YelpCategoryTitleJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

YelpCategoryTitleJSON *YelpCategoryTitleJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    YelpCategoryTitleJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<YelpCategoryTitleJSON>, YelpCategoryTitleJSON *, bool> generator("Type YelpCategoryTitle", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
