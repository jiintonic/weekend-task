/* file "HotelInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelInformationNuggetJSON.h"

#include "HotelInformationNuggetJSON.h"


HotelInformationNuggetJSON::TypeHotelCommandKind HotelInformationNuggetJSON::stringToHotelCommandKind(const char *chars)
  {
    if (strcmp(chars, "ShowList") == 0)
        return HotelCommandKind_ShowList;
    throw("The value for field `HotelCommandKind' is not one of the legal values.");
  }

const char *HotelInformationNuggetJSON::stringFromHotelCommandKind(TypeHotelCommandKind the_enum)
  {
    switch (the_enum)
      {
        case HotelCommandKind_ShowList:
            return "ShowList";
        default:
            assert(false);
            return NULL;
      }
  }

HotelInformationNuggetJSON::HotelInformationNuggetJSON(const HotelInformationNuggetJSON &)
  {
    assert(false);
  }

HotelInformationNuggetJSON &HotelInformationNuggetJSON::operator=(const HotelInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HotelInformationNuggetJSON::extraHotelCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_HotelCommandKind;
    generated_string_HotelCommandKind = new JSONStringValue("ShowList");
    return generated_string_HotelCommandKind;
  }

JSONValue *HotelInformationNuggetJSON::extraHotelSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_HotelSearchCriteria;
    storeHotelSearchCriteria->write_as_json(&handler_HotelSearchCriteria);
    handler_HotelSearchCriteria.result->add_reference();
    return handler_HotelSearchCriteria.result;
  }

JSONValue *HotelInformationNuggetJSON::extraHotelSearchCriteriaIncrementalToJSON(void) const
  {
    JSONValueHandler handler_HotelSearchCriteriaIncremental;
    storeHotelSearchCriteriaIncremental->write_as_json(&handler_HotelSearchCriteriaIncremental);
    handler_HotelSearchCriteriaIncremental.result->add_reference();
    return handler_HotelSearchCriteriaIncremental.result;
  }

JSONValue *HotelInformationNuggetJSON::extraTotalResultsFoundToJSON(void) const
  {
    JSONIntegerValue *generated_integer_TotalResultsFound = new JSONIntegerValue(storeTotalResultsFound.get_o_integer());
    return generated_integer_TotalResultsFound;
  }

JSONValue *HotelInformationNuggetJSON::extraCheckInDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_CheckInDateAndTime;
    storeCheckInDateAndTime->write_as_json(&handler_CheckInDateAndTime);
    handler_CheckInDateAndTime.result->add_reference();
    return handler_CheckInDateAndTime.result;
  }

JSONValue *HotelInformationNuggetJSON::extraCheckOutDateAndTimeToJSON(void) const
  {
    JSONValueHandler handler_CheckOutDateAndTime;
    storeCheckOutDateAndTime->write_as_json(&handler_CheckOutDateAndTime);
    handler_CheckOutDateAndTime.result->add_reference();
    return handler_CheckOutDateAndTime.result;
  }

JSONValue *HotelInformationNuggetJSON::extraHotelsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Hotels = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeHotels.size(); ++num1)
      {
        JSONValueHandler handler_Hotels;
        storeHotels[num1]->write_as_json(&handler_Hotels);
        handler_Hotels.result->add_reference();
        generated_array_1_Hotels->appendComponent(handler_Hotels.result);
        handler_Hotels.result->remove_reference();
      }
    return generated_array_1_Hotels;
  }

JSONValue *HotelInformationNuggetJSON::extraResultIndexReferencedToJSON(void) const
  {
    JSONIntegerValue *generated_integer_ResultIndexReferenced = new JSONIntegerValue(storeResultIndexReferenced.get_o_integer());
    return generated_integer_ResultIndexReferenced;
  }

void HotelInformationNuggetJSON::fromJSONHotelCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelCommandKind of HotelInformationNuggetJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ShowList") == 0))
        throw("The value for field HotelCommandKind of HotelInformationNuggetJSON is not `ShowList'.");
    setHotelCommandKind();
  }

void HotelInformationNuggetJSON::fromJSONHotelSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelFilterSpecJSON *convert_classy = HotelFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void HotelInformationNuggetJSON::fromJSONHotelSearchCriteriaIncremental(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelFilterSpecJSON *convert_classy = HotelFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelSearchCriteriaIncremental(convert_classy);
    convert_classy->remove_reference();
  }

void HotelInformationNuggetJSON::fromJSONTotalResultsFound(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TotalResultsFound of HotelInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TotalResultsFound of HotelInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTotalResultsFound(extracted_integer);
  }

void HotelInformationNuggetJSON::fromJSONCheckInDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCheckInDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void HotelInformationNuggetJSON::fromJSONCheckOutDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCheckOutDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void HotelInformationNuggetJSON::fromJSONHotels(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Hotels of HotelInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HotelJSON * > vector_Hotels1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HotelJSON *convert_classy = HotelJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Hotels1[num1] = convert_classy;
      }
    initHotels();
    for (size_t num2 = 0; num2 < vector_Hotels1.size(); ++num2)
        appendHotels(vector_Hotels1[num2]);
    for (size_t num1 = 0; num1 < vector_Hotels1.size(); ++num1)
      {
        vector_Hotels1[num1]->remove_reference();
      }
  }

void HotelInformationNuggetJSON::fromJSONResultIndexReferenced(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResultIndexReferenced of HotelInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResultIndexReferenced of HotelInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setResultIndexReferenced(extracted_integer);
  }

HotelInformationNuggetJSON::HotelInformationNuggetJSON(void) :
        flagHasHotelCommandKind(false),
        flagHasHotelSearchCriteria(false),
        flagHasHotelSearchCriteriaIncremental(false),
        flagHasTotalResultsFound(false),
        flagHasCheckInDateAndTime(false),
        flagHasCheckOutDateAndTime(false),
        flagHasHotels(false),
        flagHasResultIndexReferenced(false)
  {
    extraIndex = create_string_index();
  }

HotelInformationNuggetJSON::~HotelInformationNuggetJSON(void)
  {
    if (flagHasHotelSearchCriteria)
      {
        storeHotelSearchCriteria->remove_reference();
      }
    if (flagHasHotelSearchCriteriaIncremental)
      {
        storeHotelSearchCriteriaIncremental->remove_reference();
      }
    if (flagHasCheckInDateAndTime)
      {
        storeCheckInDateAndTime->remove_reference();
      }
    if (flagHasCheckOutDateAndTime)
      {
        storeCheckOutDateAndTime->remove_reference();
      }
    if (flagHasHotels)
      {
        for (size_t num4 = 0; num4 < storeHotels.size(); ++num4)
          {
            storeHotels[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HotelInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Hotel";
  }

bool HotelInformationNuggetJSON::hasHotelCommandKind(void) const
  {
    return flagHasHotelCommandKind;
  }

HotelInformationNuggetJSON::TypeHotelCommandKind HotelInformationNuggetJSON::getHotelCommandKind(void)
  {
    assert(flagHasHotelCommandKind);
    return HotelCommandKind_ShowList;
  }

const HotelInformationNuggetJSON::TypeHotelCommandKind HotelInformationNuggetJSON::getHotelCommandKind(void) const
  {
    assert(flagHasHotelCommandKind);
    return HotelCommandKind_ShowList;
  }

const char *HotelInformationNuggetJSON::getHotelCommandKindAsChars(void) const
  {
    return stringFromHotelCommandKind(getHotelCommandKind());
  }

std::string HotelInformationNuggetJSON::getHotelCommandKindAsString(void) const
  {
    return stringFromHotelCommandKind(getHotelCommandKind());
  }

bool HotelInformationNuggetJSON::hasHotelSearchCriteria(void) const
  {
    return flagHasHotelSearchCriteria;
  }

HotelFilterSpecJSON * HotelInformationNuggetJSON::getHotelSearchCriteria(void)
  {
    assert(flagHasHotelSearchCriteria);
    return storeHotelSearchCriteria;
  }

const HotelFilterSpecJSON * HotelInformationNuggetJSON::getHotelSearchCriteria(void) const
  {
    assert(flagHasHotelSearchCriteria);
    return storeHotelSearchCriteria;
  }

bool HotelInformationNuggetJSON::hasHotelSearchCriteriaIncremental(void) const
  {
    return flagHasHotelSearchCriteriaIncremental;
  }

HotelFilterSpecJSON * HotelInformationNuggetJSON::getHotelSearchCriteriaIncremental(void)
  {
    assert(flagHasHotelSearchCriteriaIncremental);
    return storeHotelSearchCriteriaIncremental;
  }

const HotelFilterSpecJSON * HotelInformationNuggetJSON::getHotelSearchCriteriaIncremental(void) const
  {
    assert(flagHasHotelSearchCriteriaIncremental);
    return storeHotelSearchCriteriaIncremental;
  }

bool HotelInformationNuggetJSON::hasTotalResultsFound(void) const
  {
    return flagHasTotalResultsFound;
  }

OInteger HotelInformationNuggetJSON::getTotalResultsFound(void)
  {
    assert(flagHasTotalResultsFound);
    return storeTotalResultsFound;
  }

const OInteger HotelInformationNuggetJSON::getTotalResultsFound(void) const
  {
    assert(flagHasTotalResultsFound);
    return storeTotalResultsFound;
  }

bool HotelInformationNuggetJSON::hasCheckInDateAndTime(void) const
  {
    return flagHasCheckInDateAndTime;
  }

DateAndOrTimeJSON * HotelInformationNuggetJSON::getCheckInDateAndTime(void)
  {
    assert(flagHasCheckInDateAndTime);
    return storeCheckInDateAndTime;
  }

const DateAndOrTimeJSON * HotelInformationNuggetJSON::getCheckInDateAndTime(void) const
  {
    assert(flagHasCheckInDateAndTime);
    return storeCheckInDateAndTime;
  }

bool HotelInformationNuggetJSON::hasCheckOutDateAndTime(void) const
  {
    return flagHasCheckOutDateAndTime;
  }

DateAndOrTimeJSON * HotelInformationNuggetJSON::getCheckOutDateAndTime(void)
  {
    assert(flagHasCheckOutDateAndTime);
    return storeCheckOutDateAndTime;
  }

const DateAndOrTimeJSON * HotelInformationNuggetJSON::getCheckOutDateAndTime(void) const
  {
    assert(flagHasCheckOutDateAndTime);
    return storeCheckOutDateAndTime;
  }

bool HotelInformationNuggetJSON::hasHotels(void) const
  {
    return flagHasHotels;
  }

size_t HotelInformationNuggetJSON::countOfHotels(void) const
  {
    assert(flagHasHotels);
    return storeHotels.size();
  }

HotelJSON * HotelInformationNuggetJSON::elementOfHotels(size_t element_num)
  {
    assert(flagHasHotels);
    return storeHotels[element_num];
  }

const HotelJSON * HotelInformationNuggetJSON::elementOfHotels(size_t element_num) const
  {
    assert(flagHasHotels);
    return storeHotels[element_num];
  }

std::vector< HotelJSON * > HotelInformationNuggetJSON::getHotels(void)
  {
    assert(flagHasHotels);
    return storeHotels;
  }

const std::vector< HotelJSON * > HotelInformationNuggetJSON::getHotels(void) const
  {
    assert(flagHasHotels);
    return storeHotels;
  }

bool HotelInformationNuggetJSON::hasResultIndexReferenced(void) const
  {
    return flagHasResultIndexReferenced;
  }

OInteger HotelInformationNuggetJSON::getResultIndexReferenced(void)
  {
    assert(flagHasResultIndexReferenced);
    return storeResultIndexReferenced;
  }

const OInteger HotelInformationNuggetJSON::getResultIndexReferenced(void) const
  {
    assert(flagHasResultIndexReferenced);
    return storeResultIndexReferenced;
  }

char HotelInformationNuggetJSON::Generator::lowerBoundTotalResultsFound[] = "0";
char HotelInformationNuggetJSON::Generator::lowerBoundResultIndexReferenced[] = "0";
HotelInformationNuggetJSON *HotelInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelInformationNuggetJSON>, HotelInformationNuggetJSON *, bool> generator("Type HotelInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
