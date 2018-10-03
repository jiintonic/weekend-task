/* file "UberFareJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberFareJSON.h"

#include "UberFareJSON.h"


UberFareJSON::TypeDistanceUnit::TypeDistanceUnit(void)
  {
  }

UberFareJSON::TypeDistanceUnit::TypeDistanceUnit(const TypeDistanceUnit &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberFareJSON::TypeDistanceUnit::TypeDistanceUnit(TypeDistanceUnitKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberFareJSON::TypeDistanceUnit::operator==(const TypeDistanceUnit &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberFareJSON::TypeDistanceUnit::operator!=(const TypeDistanceUnit &other) const
  {
    return !(operator==(other));
  }

bool UberFareJSON::TypeDistanceUnit::operator<(const TypeDistanceUnit &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberFareJSON::TypeDistanceUnit::operator>(const TypeDistanceUnit &other) const
  {
    return other.operator<(*this);
  }

bool UberFareJSON::TypeDistanceUnit::operator>=(const TypeDistanceUnit &other) const
  {
    return !(operator<(other));
  }

bool UberFareJSON::TypeDistanceUnit::operator<=(const TypeDistanceUnit &other) const
  {
    return !(other.operator<(*this));
  }

UberFareJSON::TypeDistanceUnitKnownValues UberFareJSON::stringToDistanceUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'k':
            if (strcmp(&(chars[1]), "m") == 0)
                return DistanceUnit_km;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "ile") == 0)
                return DistanceUnit_mile;
            break;
        default:
            break;
      }
    return DistanceUnit__none;
  }

const char *UberFareJSON::stringFromDistanceUnit(TypeDistanceUnitKnownValues the_enum)
  {
    switch (the_enum)
      {
        case DistanceUnit_mile:
            return "mile";
        case DistanceUnit_km:
            return "km";
        default:
            assert(false);
            return NULL;
      }
  }

UberFareJSON::TypeServiceFeesJSON::TypeServiceFeesJSON(const TypeServiceFeesJSON &)
  {
    assert(false);
  }

UberFareJSON::TypeServiceFeesJSON &UberFareJSON::TypeServiceFeesJSON::operator=(const TypeServiceFeesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberFareJSON::TypeServiceFeesJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeServiceFeesJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void UberFareJSON::TypeServiceFeesJSON::fromJSONFee(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Fee of TypeServiceFeesJSON is not a number.");
          }
      }
    setFeeText(the_rational_text);
  }

UberFareJSON::TypeServiceFeesJSON::TypeServiceFeesJSON(void) :
        flagHasName(false),
        flagHasFee(false)
  {
    extraIndex = create_string_index();
  }

UberFareJSON::TypeServiceFeesJSON::~TypeServiceFeesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberFareJSON::TypeServiceFeesJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string UberFareJSON::TypeServiceFeesJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string UberFareJSON::TypeServiceFeesJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool UberFareJSON::TypeServiceFeesJSON::hasFee(void) const
  {
    return flagHasFee;
  }

double UberFareJSON::TypeServiceFeesJSON::getFee(void)
  {
    assert(flagHasFee);
    if (textStoreFee != "")
      {
        return atof(textStoreFee.c_str());
      }
    return storeFee;
  }

const double UberFareJSON::TypeServiceFeesJSON::getFee(void) const
  {
    assert(flagHasFee);
    if (textStoreFee != "")
      {
        return atof(textStoreFee.c_str());
      }
    return storeFee;
  }

std::string UberFareJSON::TypeServiceFeesJSON::getFeeAsText(void) const
  {
    assert(flagHasFee);
    if (textStoreFee == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeFee);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreFee);
      }
  }

UberFareJSON::UberFareJSON(const UberFareJSON &)
  {
    assert(false);
  }

UberFareJSON &UberFareJSON::operator=(const UberFareJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberFareJSON::fromJSONBasePrice(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BasePrice of UberFareJSON is not a number.");
          }
      }
    setBasePriceText(the_rational_text);
  }

void UberFareJSON::fromJSONMinimumPrice(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MinimumPrice of UberFareJSON is not a number.");
          }
      }
    setMinimumPriceText(the_rational_text);
  }

void UberFareJSON::fromJSONRatePerMinute(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RatePerMinute of UberFareJSON is not a number.");
          }
      }
    setRatePerMinuteText(the_rational_text);
  }

void UberFareJSON::fromJSONRatePerDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RatePerDistance of UberFareJSON is not a number.");
          }
      }
    setRatePerDistanceText(the_rational_text);
  }

void UberFareJSON::fromJSONDistanceUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DistanceUnit of UberFareJSON is not a string.");
    TypeDistanceUnit the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'k':
            if (strcmp(&(json_string->getData()[1]), "m") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_km;
                    goto open_enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "ile") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_mile;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setDistanceUnit(the_open_enum);
  }

void UberFareJSON::fromJSONCancellationFee(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CancellationFee of UberFareJSON is not a number.");
          }
      }
    setCancellationFeeText(the_rational_text);
  }

void UberFareJSON::fromJSONCurrency(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Currency of UberFareJSON is not a string.");
    setCurrency(std::string(json_string->getData()));
  }

void UberFareJSON::fromJSONServiceFees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ServiceFees of UberFareJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeServiceFeesJSON * > vector_ServiceFees1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeServiceFeesJSON *convert_classy = TypeServiceFeesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ServiceFees1[num1] = convert_classy;
      }
    initServiceFees();
    for (size_t num2 = 0; num2 < vector_ServiceFees1.size(); ++num2)
        appendServiceFees(vector_ServiceFees1[num2]);
    for (size_t num1 = 0; num1 < vector_ServiceFees1.size(); ++num1)
      {
        vector_ServiceFees1[num1]->remove_reference();
      }
  }

UberFareJSON::UberFareJSON(void) :
        flagHasBasePrice(false),
        flagHasMinimumPrice(false),
        flagHasRatePerMinute(false),
        flagHasRatePerDistance(false),
        flagHasDistanceUnit(false),
        flagHasCancellationFee(false),
        flagHasCurrency(false),
        flagHasServiceFees(false)
  {
    extraIndex = create_string_index();
  }

UberFareJSON::~UberFareJSON(void)
  {
    if (flagHasServiceFees)
      {
        for (size_t num4 = 0; num4 < storeServiceFees.size(); ++num4)
          {
            storeServiceFees[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberFareJSON::hasBasePrice(void) const
  {
    return flagHasBasePrice;
  }

double UberFareJSON::getBasePrice(void)
  {
    assert(flagHasBasePrice);
    if (textStoreBasePrice != "")
      {
        return atof(textStoreBasePrice.c_str());
      }
    return storeBasePrice;
  }

const double UberFareJSON::getBasePrice(void) const
  {
    assert(flagHasBasePrice);
    if (textStoreBasePrice != "")
      {
        return atof(textStoreBasePrice.c_str());
      }
    return storeBasePrice;
  }

std::string UberFareJSON::getBasePriceAsText(void) const
  {
    assert(flagHasBasePrice);
    if (textStoreBasePrice == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBasePrice);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBasePrice);
      }
  }

bool UberFareJSON::hasMinimumPrice(void) const
  {
    return flagHasMinimumPrice;
  }

double UberFareJSON::getMinimumPrice(void)
  {
    assert(flagHasMinimumPrice);
    if (textStoreMinimumPrice != "")
      {
        return atof(textStoreMinimumPrice.c_str());
      }
    return storeMinimumPrice;
  }

const double UberFareJSON::getMinimumPrice(void) const
  {
    assert(flagHasMinimumPrice);
    if (textStoreMinimumPrice != "")
      {
        return atof(textStoreMinimumPrice.c_str());
      }
    return storeMinimumPrice;
  }

std::string UberFareJSON::getMinimumPriceAsText(void) const
  {
    assert(flagHasMinimumPrice);
    if (textStoreMinimumPrice == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMinimumPrice);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMinimumPrice);
      }
  }

bool UberFareJSON::hasRatePerMinute(void) const
  {
    return flagHasRatePerMinute;
  }

double UberFareJSON::getRatePerMinute(void)
  {
    assert(flagHasRatePerMinute);
    if (textStoreRatePerMinute != "")
      {
        return atof(textStoreRatePerMinute.c_str());
      }
    return storeRatePerMinute;
  }

const double UberFareJSON::getRatePerMinute(void) const
  {
    assert(flagHasRatePerMinute);
    if (textStoreRatePerMinute != "")
      {
        return atof(textStoreRatePerMinute.c_str());
      }
    return storeRatePerMinute;
  }

std::string UberFareJSON::getRatePerMinuteAsText(void) const
  {
    assert(flagHasRatePerMinute);
    if (textStoreRatePerMinute == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRatePerMinute);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRatePerMinute);
      }
  }

bool UberFareJSON::hasRatePerDistance(void) const
  {
    return flagHasRatePerDistance;
  }

double UberFareJSON::getRatePerDistance(void)
  {
    assert(flagHasRatePerDistance);
    if (textStoreRatePerDistance != "")
      {
        return atof(textStoreRatePerDistance.c_str());
      }
    return storeRatePerDistance;
  }

const double UberFareJSON::getRatePerDistance(void) const
  {
    assert(flagHasRatePerDistance);
    if (textStoreRatePerDistance != "")
      {
        return atof(textStoreRatePerDistance.c_str());
      }
    return storeRatePerDistance;
  }

std::string UberFareJSON::getRatePerDistanceAsText(void) const
  {
    assert(flagHasRatePerDistance);
    if (textStoreRatePerDistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRatePerDistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRatePerDistance);
      }
  }

bool UberFareJSON::hasDistanceUnit(void) const
  {
    return flagHasDistanceUnit;
  }

UberFareJSON::TypeDistanceUnit UberFareJSON::getDistanceUnit(void)
  {
    assert(flagHasDistanceUnit);
    return storeDistanceUnit;
  }

const UberFareJSON::TypeDistanceUnit UberFareJSON::getDistanceUnit(void) const
  {
    assert(flagHasDistanceUnit);
    return storeDistanceUnit;
  }

const char *UberFareJSON::getDistanceUnitAsChars(void) const
  {
    TypeDistanceUnit result = getDistanceUnit();
    if (result.in_known_list)
        return stringFromDistanceUnit(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberFareJSON::getDistanceUnitAsString(void) const
  {
    return getDistanceUnitAsChars();
  }

bool UberFareJSON::hasCancellationFee(void) const
  {
    return flagHasCancellationFee;
  }

double UberFareJSON::getCancellationFee(void)
  {
    assert(flagHasCancellationFee);
    if (textStoreCancellationFee != "")
      {
        return atof(textStoreCancellationFee.c_str());
      }
    return storeCancellationFee;
  }

const double UberFareJSON::getCancellationFee(void) const
  {
    assert(flagHasCancellationFee);
    if (textStoreCancellationFee != "")
      {
        return atof(textStoreCancellationFee.c_str());
      }
    return storeCancellationFee;
  }

std::string UberFareJSON::getCancellationFeeAsText(void) const
  {
    assert(flagHasCancellationFee);
    if (textStoreCancellationFee == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeCancellationFee);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreCancellationFee);
      }
  }

bool UberFareJSON::hasCurrency(void) const
  {
    return flagHasCurrency;
  }

std::string UberFareJSON::getCurrency(void)
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

const std::string UberFareJSON::getCurrency(void) const
  {
    assert(flagHasCurrency);
    return storeCurrency;
  }

bool UberFareJSON::hasServiceFees(void) const
  {
    return flagHasServiceFees;
  }

size_t UberFareJSON::countOfServiceFees(void) const
  {
    assert(flagHasServiceFees);
    return storeServiceFees.size();
  }

UberFareJSON::TypeServiceFeesJSON * UberFareJSON::elementOfServiceFees(size_t element_num)
  {
    assert(flagHasServiceFees);
    return storeServiceFees[element_num];
  }

const UberFareJSON::TypeServiceFeesJSON * UberFareJSON::elementOfServiceFees(size_t element_num) const
  {
    assert(flagHasServiceFees);
    return storeServiceFees[element_num];
  }

std::vector< UberFareJSON::TypeServiceFeesJSON * > UberFareJSON::getServiceFees(void)
  {
    assert(flagHasServiceFees);
    return storeServiceFees;
  }

const std::vector< UberFareJSON::TypeServiceFeesJSON * > UberFareJSON::getServiceFees(void) const
  {
    assert(flagHasServiceFees);
    return storeServiceFees;
  }

UberFareJSON::TypeServiceFeesJSON *UberFareJSON::TypeServiceFeesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeServiceFeesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeServiceFeesJSON>, TypeServiceFeesJSON *, bool> generator("Type TypeServiceFees", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UberFareJSON *UberFareJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberFareJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberFareJSON>, UberFareJSON *, bool> generator("Type UberFare", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
