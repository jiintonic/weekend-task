/* file "FlightProductJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightProductJSON.h"

#include "FlightProductJSON.h"


FlightProductJSON::FlightProductJSON(const FlightProductJSON &)
  {
    assert(false);
  }

FlightProductJSON &FlightProductJSON::operator=(const FlightProductJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightProductJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of FlightProductJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void FlightProductJSON::fromJSONDataProvider(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DataProvider of FlightProductJSON is not a string.");
    setDataProvider(std::string(json_string->getData()));
  }

void FlightProductJSON::fromJSONProductID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ProductID of FlightProductJSON is not a string.");
    setProductID(std::string(json_string->getData()));
  }

void FlightProductJSON::fromJSONTotalPrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalPrice(convert_classy);
    convert_classy->remove_reference();
  }

void FlightProductJSON::fromJSONFareBreakdownForEachPassengerType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FareBreakdownForEachPassengerType of FlightProductJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field FareBreakdownForEachPassengerType of FlightProductJSON has too few elements.");
    std::vector< FlightFareBreakdownForPassengerTypeJSON * > vector_FareBreakdownForEachPassengerType1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightFareBreakdownForPassengerTypeJSON *convert_classy = FlightFareBreakdownForPassengerTypeJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FareBreakdownForEachPassengerType1[num1] = convert_classy;
      }
    assert(vector_FareBreakdownForEachPassengerType1.size() >= 1);
    initFareBreakdownForEachPassengerType();
    for (size_t num3 = 0; num3 < vector_FareBreakdownForEachPassengerType1.size(); ++num3)
        appendFareBreakdownForEachPassengerType(vector_FareBreakdownForEachPassengerType1[num3]);
    for (size_t num1 = 0; num1 < vector_FareBreakdownForEachPassengerType1.size(); ++num1)
      {
        vector_FareBreakdownForEachPassengerType1[num1]->remove_reference();
      }
  }

void FlightProductJSON::fromJSONTotalTaxesAndFees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalTaxesAndFees(convert_classy);
    convert_classy->remove_reference();
  }

void FlightProductJSON::fromJSONTotalBookingFees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MoneyJSON *convert_classy = MoneyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTotalBookingFees(convert_classy);
    convert_classy->remove_reference();
  }

void FlightProductJSON::fromJSONTotalTravelDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field TotalTravelDuration of FlightProductJSON is not a number.");
          }
      }
    setTotalTravelDurationText(the_rational_text);
  }

void FlightProductJSON::fromJSONTotalFlightDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field TotalFlightDuration of FlightProductJSON is not a number.");
          }
      }
    setTotalFlightDurationText(the_rational_text);
  }

void FlightProductJSON::fromJSONTotalLayoverDuration(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field TotalLayoverDuration of FlightProductJSON is not a number.");
          }
      }
    setTotalLayoverDurationText(the_rational_text);
  }

void FlightProductJSON::fromJSONTotalNumberOfStops(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TotalNumberOfStops of FlightProductJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TotalNumberOfStops of FlightProductJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTotalNumberOfStops(extracted_integer);
  }

void FlightProductJSON::fromJSONNumberOfSeatsAvailable(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumberOfSeatsAvailable of FlightProductJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumberOfSeatsAvailable of FlightProductJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumberOfSeatsAvailable(extracted_integer);
  }

void FlightProductJSON::fromJSONFlightSegmentGroups(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FlightSegmentGroups of FlightProductJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field FlightSegmentGroups of FlightProductJSON has too few elements.");
    std::vector< FlightSegmentGroupJSON * > vector_FlightSegmentGroups1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightSegmentGroupJSON *convert_classy = FlightSegmentGroupJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FlightSegmentGroups1[num1] = convert_classy;
      }
    assert(vector_FlightSegmentGroups1.size() >= 1);
    initFlightSegmentGroups();
    for (size_t num4 = 0; num4 < vector_FlightSegmentGroups1.size(); ++num4)
        appendFlightSegmentGroups(vector_FlightSegmentGroups1[num4]);
    for (size_t num1 = 0; num1 < vector_FlightSegmentGroups1.size(); ++num1)
      {
        vector_FlightSegmentGroups1[num1]->remove_reference();
      }
  }

void FlightProductJSON::fromJSONDetailsUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DetailsUrl of FlightProductJSON is not a string.");
    setDetailsUrl(std::string(json_string->getData()));
  }

FlightProductJSON::FlightProductJSON(void) :
        flagHasLabel(false),
        flagHasDataProvider(false),
        flagHasProductID(false),
        flagHasTotalPrice(false),
        flagHasFareBreakdownForEachPassengerType(false),
        flagHasTotalTaxesAndFees(false),
        flagHasTotalBookingFees(false),
        flagHasTotalTravelDuration(false),
        flagHasTotalFlightDuration(false),
        flagHasTotalLayoverDuration(false),
        flagHasTotalNumberOfStops(false),
        flagHasNumberOfSeatsAvailable(false),
        flagHasFlightSegmentGroups(false),
        flagHasDetailsUrl(false)
  {
    extraIndex = create_string_index();
  }

FlightProductJSON::~FlightProductJSON(void)
  {
    if (flagHasTotalPrice)
      {
        storeTotalPrice->remove_reference();
      }
    if (flagHasFareBreakdownForEachPassengerType)
      {
        for (size_t num7 = 0; num7 < storeFareBreakdownForEachPassengerType.size(); ++num7)
          {
            storeFareBreakdownForEachPassengerType[num7]->remove_reference();
          }
      }
    if (flagHasTotalTaxesAndFees)
      {
        storeTotalTaxesAndFees->remove_reference();
      }
    if (flagHasTotalBookingFees)
      {
        storeTotalBookingFees->remove_reference();
      }
    if (flagHasFlightSegmentGroups)
      {
        for (size_t num8 = 0; num8 < storeFlightSegmentGroups.size(); ++num8)
          {
            storeFlightSegmentGroups[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightProductJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string FlightProductJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string FlightProductJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool FlightProductJSON::hasDataProvider(void) const
  {
    return flagHasDataProvider;
  }

std::string FlightProductJSON::getDataProvider(void)
  {
    assert(flagHasDataProvider);
    return storeDataProvider;
  }

const std::string FlightProductJSON::getDataProvider(void) const
  {
    assert(flagHasDataProvider);
    return storeDataProvider;
  }

bool FlightProductJSON::hasProductID(void) const
  {
    return flagHasProductID;
  }

std::string FlightProductJSON::getProductID(void)
  {
    assert(flagHasProductID);
    return storeProductID;
  }

const std::string FlightProductJSON::getProductID(void) const
  {
    assert(flagHasProductID);
    return storeProductID;
  }

bool FlightProductJSON::hasTotalPrice(void) const
  {
    return flagHasTotalPrice;
  }

MoneyJSON * FlightProductJSON::getTotalPrice(void)
  {
    assert(flagHasTotalPrice);
    return storeTotalPrice;
  }

const MoneyJSON * FlightProductJSON::getTotalPrice(void) const
  {
    assert(flagHasTotalPrice);
    return storeTotalPrice;
  }

bool FlightProductJSON::hasFareBreakdownForEachPassengerType(void) const
  {
    return flagHasFareBreakdownForEachPassengerType;
  }

size_t FlightProductJSON::countOfFareBreakdownForEachPassengerType(void) const
  {
    assert(flagHasFareBreakdownForEachPassengerType);
    return storeFareBreakdownForEachPassengerType.size();
  }

FlightFareBreakdownForPassengerTypeJSON * FlightProductJSON::elementOfFareBreakdownForEachPassengerType(size_t element_num)
  {
    assert(flagHasFareBreakdownForEachPassengerType);
    return storeFareBreakdownForEachPassengerType[element_num];
  }

const FlightFareBreakdownForPassengerTypeJSON * FlightProductJSON::elementOfFareBreakdownForEachPassengerType(size_t element_num) const
  {
    assert(flagHasFareBreakdownForEachPassengerType);
    return storeFareBreakdownForEachPassengerType[element_num];
  }

std::vector< FlightFareBreakdownForPassengerTypeJSON * > FlightProductJSON::getFareBreakdownForEachPassengerType(void)
  {
    assert(flagHasFareBreakdownForEachPassengerType);
    return storeFareBreakdownForEachPassengerType;
  }

const std::vector< FlightFareBreakdownForPassengerTypeJSON * > FlightProductJSON::getFareBreakdownForEachPassengerType(void) const
  {
    assert(flagHasFareBreakdownForEachPassengerType);
    return storeFareBreakdownForEachPassengerType;
  }

bool FlightProductJSON::hasTotalTaxesAndFees(void) const
  {
    return flagHasTotalTaxesAndFees;
  }

MoneyJSON * FlightProductJSON::getTotalTaxesAndFees(void)
  {
    assert(flagHasTotalTaxesAndFees);
    return storeTotalTaxesAndFees;
  }

const MoneyJSON * FlightProductJSON::getTotalTaxesAndFees(void) const
  {
    assert(flagHasTotalTaxesAndFees);
    return storeTotalTaxesAndFees;
  }

bool FlightProductJSON::hasTotalBookingFees(void) const
  {
    return flagHasTotalBookingFees;
  }

MoneyJSON * FlightProductJSON::getTotalBookingFees(void)
  {
    assert(flagHasTotalBookingFees);
    return storeTotalBookingFees;
  }

const MoneyJSON * FlightProductJSON::getTotalBookingFees(void) const
  {
    assert(flagHasTotalBookingFees);
    return storeTotalBookingFees;
  }

bool FlightProductJSON::hasTotalTravelDuration(void) const
  {
    return flagHasTotalTravelDuration;
  }

double FlightProductJSON::getTotalTravelDuration(void)
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration != "")
      {
        return atof(textStoreTotalTravelDuration.c_str());
      }
    return storeTotalTravelDuration;
  }

const double FlightProductJSON::getTotalTravelDuration(void) const
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration != "")
      {
        return atof(textStoreTotalTravelDuration.c_str());
      }
    return storeTotalTravelDuration;
  }

std::string FlightProductJSON::getTotalTravelDurationAsText(void) const
  {
    assert(flagHasTotalTravelDuration);
    if (textStoreTotalTravelDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalTravelDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalTravelDuration);
      }
  }

bool FlightProductJSON::hasTotalFlightDuration(void) const
  {
    return flagHasTotalFlightDuration;
  }

double FlightProductJSON::getTotalFlightDuration(void)
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration != "")
      {
        return atof(textStoreTotalFlightDuration.c_str());
      }
    return storeTotalFlightDuration;
  }

const double FlightProductJSON::getTotalFlightDuration(void) const
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration != "")
      {
        return atof(textStoreTotalFlightDuration.c_str());
      }
    return storeTotalFlightDuration;
  }

std::string FlightProductJSON::getTotalFlightDurationAsText(void) const
  {
    assert(flagHasTotalFlightDuration);
    if (textStoreTotalFlightDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalFlightDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalFlightDuration);
      }
  }

bool FlightProductJSON::hasTotalLayoverDuration(void) const
  {
    return flagHasTotalLayoverDuration;
  }

double FlightProductJSON::getTotalLayoverDuration(void)
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration != "")
      {
        return atof(textStoreTotalLayoverDuration.c_str());
      }
    return storeTotalLayoverDuration;
  }

const double FlightProductJSON::getTotalLayoverDuration(void) const
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration != "")
      {
        return atof(textStoreTotalLayoverDuration.c_str());
      }
    return storeTotalLayoverDuration;
  }

std::string FlightProductJSON::getTotalLayoverDurationAsText(void) const
  {
    assert(flagHasTotalLayoverDuration);
    if (textStoreTotalLayoverDuration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTotalLayoverDuration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTotalLayoverDuration);
      }
  }

bool FlightProductJSON::hasTotalNumberOfStops(void) const
  {
    return flagHasTotalNumberOfStops;
  }

OInteger FlightProductJSON::getTotalNumberOfStops(void)
  {
    assert(flagHasTotalNumberOfStops);
    return storeTotalNumberOfStops;
  }

const OInteger FlightProductJSON::getTotalNumberOfStops(void) const
  {
    assert(flagHasTotalNumberOfStops);
    return storeTotalNumberOfStops;
  }

bool FlightProductJSON::hasNumberOfSeatsAvailable(void) const
  {
    return flagHasNumberOfSeatsAvailable;
  }

OInteger FlightProductJSON::getNumberOfSeatsAvailable(void)
  {
    assert(flagHasNumberOfSeatsAvailable);
    return storeNumberOfSeatsAvailable;
  }

const OInteger FlightProductJSON::getNumberOfSeatsAvailable(void) const
  {
    assert(flagHasNumberOfSeatsAvailable);
    return storeNumberOfSeatsAvailable;
  }

bool FlightProductJSON::hasFlightSegmentGroups(void) const
  {
    return flagHasFlightSegmentGroups;
  }

size_t FlightProductJSON::countOfFlightSegmentGroups(void) const
  {
    assert(flagHasFlightSegmentGroups);
    return storeFlightSegmentGroups.size();
  }

FlightSegmentGroupJSON * FlightProductJSON::elementOfFlightSegmentGroups(size_t element_num)
  {
    assert(flagHasFlightSegmentGroups);
    return storeFlightSegmentGroups[element_num];
  }

const FlightSegmentGroupJSON * FlightProductJSON::elementOfFlightSegmentGroups(size_t element_num) const
  {
    assert(flagHasFlightSegmentGroups);
    return storeFlightSegmentGroups[element_num];
  }

std::vector< FlightSegmentGroupJSON * > FlightProductJSON::getFlightSegmentGroups(void)
  {
    assert(flagHasFlightSegmentGroups);
    return storeFlightSegmentGroups;
  }

const std::vector< FlightSegmentGroupJSON * > FlightProductJSON::getFlightSegmentGroups(void) const
  {
    assert(flagHasFlightSegmentGroups);
    return storeFlightSegmentGroups;
  }

bool FlightProductJSON::hasDetailsUrl(void) const
  {
    return flagHasDetailsUrl;
  }

std::string FlightProductJSON::getDetailsUrl(void)
  {
    assert(flagHasDetailsUrl);
    return storeDetailsUrl;
  }

const std::string FlightProductJSON::getDetailsUrl(void) const
  {
    assert(flagHasDetailsUrl);
    return storeDetailsUrl;
  }

char FlightProductJSON::Generator::lowerBoundTotalNumberOfStops[] = "0";
char FlightProductJSON::Generator::lowerBoundNumberOfSeatsAvailable[] = "0";
FlightProductJSON *FlightProductJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightProductJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightProductJSON>, FlightProductJSON *, bool> generator("Type FlightProduct", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
