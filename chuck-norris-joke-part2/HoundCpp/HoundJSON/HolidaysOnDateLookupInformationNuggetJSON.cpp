/* file "HolidaysOnDateLookupInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HolidaysOnDateLookupInformationNuggetJSON.h"

#include "HolidaysOnDateLookupInformationNuggetJSON.h"


HolidaysOnDateLookupInformationNuggetJSON::HolidaysOnDateLookupInformationNuggetJSON(const HolidaysOnDateLookupInformationNuggetJSON &)
  {
    assert(false);
  }

HolidaysOnDateLookupInformationNuggetJSON &HolidaysOnDateLookupInformationNuggetJSON::operator=(const HolidaysOnDateLookupInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HolidaysOnDateLookupInformationNuggetJSON::extraDateAndOrTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_DateAndOrTimeSpec;
    storeDateAndOrTimeSpec->write_as_json(&handler_DateAndOrTimeSpec);
    handler_DateAndOrTimeSpec.result->add_reference();
    return handler_DateAndOrTimeSpec.result;
  }

JSONValue *HolidaysOnDateLookupInformationNuggetJSON::extraDateAndOrTimeSpecInFutureToJSON(void) const
  {
    JSONValue *generated_boolean_DateAndOrTimeSpecInFuture = (storeDateAndOrTimeSpecInFuture ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_DateAndOrTimeSpecInFuture;
  }

JSONValue *HolidaysOnDateLookupInformationNuggetJSON::extraHolidaysToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Holidays = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeHolidays.size(); ++num1)
      {
        JSONStringValue *generated_string_Holidays = new JSONStringValue(storeHolidays[num1].c_str());
        generated_array_1_Holidays->appendComponent(generated_string_Holidays);
      }
    return generated_array_1_Holidays;
  }

void HolidaysOnDateLookupInformationNuggetJSON::fromJSONDateAndOrTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeSpecJSON *convert_classy = DateAndOrTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateAndOrTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void HolidaysOnDateLookupInformationNuggetJSON::fromJSONDateAndOrTimeSpecInFuture(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DateAndOrTimeSpecInFuture of HolidaysOnDateLookupInformationNuggetJSON is not true for false.");
          }
      }
    setDateAndOrTimeSpecInFuture(the_bool);
  }

void HolidaysOnDateLookupInformationNuggetJSON::fromJSONHolidays(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Holidays of HolidaysOnDateLookupInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Holidays1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Holidays of HolidaysOnDateLookupInformationNuggetJSON is not a string.");
        vector_Holidays1[num1] = std::string(json_string->getData());
      }
    initHolidays();
    for (size_t num2 = 0; num2 < vector_Holidays1.size(); ++num2)
        appendHolidays(vector_Holidays1[num2]);
    for (size_t num1 = 0; num1 < vector_Holidays1.size(); ++num1)
      {
      }
  }

HolidaysOnDateLookupInformationNuggetJSON::HolidaysOnDateLookupInformationNuggetJSON(void) :
        flagHasDateAndOrTimeSpec(false),
        flagHasDateAndOrTimeSpecInFuture(false),
        flagHasHolidays(false)
  {
    extraIndex = create_string_index();
  }

HolidaysOnDateLookupInformationNuggetJSON::~HolidaysOnDateLookupInformationNuggetJSON(void)
  {
    if (flagHasDateAndOrTimeSpec)
      {
        storeDateAndOrTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HolidaysOnDateLookupInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "HolidaysOnDateLookup";
  }

bool HolidaysOnDateLookupInformationNuggetJSON::hasDateAndOrTimeSpec(void) const
  {
    return flagHasDateAndOrTimeSpec;
  }

DateAndOrTimeSpecJSON * HolidaysOnDateLookupInformationNuggetJSON::getDateAndOrTimeSpec(void)
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

const DateAndOrTimeSpecJSON * HolidaysOnDateLookupInformationNuggetJSON::getDateAndOrTimeSpec(void) const
  {
    assert(flagHasDateAndOrTimeSpec);
    return storeDateAndOrTimeSpec;
  }

bool HolidaysOnDateLookupInformationNuggetJSON::hasDateAndOrTimeSpecInFuture(void) const
  {
    return flagHasDateAndOrTimeSpecInFuture;
  }

bool HolidaysOnDateLookupInformationNuggetJSON::getDateAndOrTimeSpecInFuture(void)
  {
    assert(flagHasDateAndOrTimeSpecInFuture);
    return storeDateAndOrTimeSpecInFuture;
  }

const bool HolidaysOnDateLookupInformationNuggetJSON::getDateAndOrTimeSpecInFuture(void) const
  {
    assert(flagHasDateAndOrTimeSpecInFuture);
    return storeDateAndOrTimeSpecInFuture;
  }

bool HolidaysOnDateLookupInformationNuggetJSON::hasHolidays(void) const
  {
    return flagHasHolidays;
  }

size_t HolidaysOnDateLookupInformationNuggetJSON::countOfHolidays(void) const
  {
    assert(flagHasHolidays);
    return storeHolidays.size();
  }

std::string HolidaysOnDateLookupInformationNuggetJSON::elementOfHolidays(size_t element_num)
  {
    assert(flagHasHolidays);
    return storeHolidays[element_num];
  }

const std::string HolidaysOnDateLookupInformationNuggetJSON::elementOfHolidays(size_t element_num) const
  {
    assert(flagHasHolidays);
    return storeHolidays[element_num];
  }

std::vector< std::string > HolidaysOnDateLookupInformationNuggetJSON::getHolidays(void)
  {
    assert(flagHasHolidays);
    return storeHolidays;
  }

const std::vector< std::string > HolidaysOnDateLookupInformationNuggetJSON::getHolidays(void) const
  {
    assert(flagHasHolidays);
    return storeHolidays;
  }

HolidaysOnDateLookupInformationNuggetJSON *HolidaysOnDateLookupInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HolidaysOnDateLookupInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HolidaysOnDateLookupInformationNuggetJSON>, HolidaysOnDateLookupInformationNuggetJSON *, bool> generator("Type HolidaysOnDateLookupInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
