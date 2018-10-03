/* file "UberCompositeProductJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCompositeProductJSON.h"

#include "UberCompositeProductJSON.h"


UberCompositeProductJSON::TypeFareType::TypeFareType(void)
  {
  }

UberCompositeProductJSON::TypeFareType::TypeFareType(const TypeFareType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberCompositeProductJSON::TypeFareType::TypeFareType(TypeFareTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberCompositeProductJSON::TypeFareType::operator==(const TypeFareType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberCompositeProductJSON::TypeFareType::operator!=(const TypeFareType &other) const
  {
    return !(operator==(other));
  }

bool UberCompositeProductJSON::TypeFareType::operator<(const TypeFareType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberCompositeProductJSON::TypeFareType::operator>(const TypeFareType &other) const
  {
    return other.operator<(*this);
  }

bool UberCompositeProductJSON::TypeFareType::operator>=(const TypeFareType &other) const
  {
    return !(operator<(other));
  }

bool UberCompositeProductJSON::TypeFareType::operator<=(const TypeFareType &other) const
  {
    return !(other.operator<(*this));
  }

UberCompositeProductJSON::TypeFareTypeKnownValues UberCompositeProductJSON::stringToFareType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'm':
            if (strcmp(&(chars[1]), "etered") == 0)
                return FareType_metered;
            break;
        case 'r':
            if (strcmp(&(chars[1]), "ated") == 0)
                return FareType_rated;
            break;
        case 'u':
            if (strcmp(&(chars[1]), "pfront") == 0)
                return FareType_upfront;
            break;
        default:
            break;
      }
    return FareType__none;
  }

const char *UberCompositeProductJSON::stringFromFareType(TypeFareTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case FareType_rated:
            return "rated";
        case FareType_metered:
            return "metered";
        case FareType_upfront:
            return "upfront";
        default:
            assert(false);
            return NULL;
      }
  }

UberCompositeProductJSON::UberCompositeProductJSON(const UberCompositeProductJSON &)
  {
    assert(false);
  }

UberCompositeProductJSON &UberCompositeProductJSON::operator=(const UberCompositeProductJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberCompositeProductJSON::fromJSONDisplayName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DisplayName of UberCompositeProductJSON is not a string.");
    setDisplayName(std::string(json_string->getData()));
  }

void UberCompositeProductJSON::fromJSONProductId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ProductId of UberCompositeProductJSON is not a string.");
    setProductId(std::string(json_string->getData()));
  }

void UberCompositeProductJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of UberCompositeProductJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void UberCompositeProductJSON::fromJSONImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Image of UberCompositeProductJSON is not a string.");
    setImage(std::string(json_string->getData()));
  }

void UberCompositeProductJSON::fromJSONCapacity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Capacity of UberCompositeProductJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Capacity of UberCompositeProductJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCapacity(extracted_integer);
  }

void UberCompositeProductJSON::fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SurgeMultiplier of UberCompositeProductJSON is not a number.");
          }
      }
    setSurgeMultiplierText(the_rational_text);
  }

void UberCompositeProductJSON::fromJSONIsSelected(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsSelected of UberCompositeProductJSON is not true for false.");
          }
      }
    setIsSelected(the_bool);
  }

void UberCompositeProductJSON::fromJSONIsShared(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsShared of UberCompositeProductJSON is not true for false.");
          }
      }
    setIsShared(the_bool);
  }

void UberCompositeProductJSON::fromJSONCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Count of UberCompositeProductJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Count of UberCompositeProductJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setCount(extracted_integer);
  }

void UberCompositeProductJSON::fromJSONPickUpEstimateInSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PickUpEstimateInSeconds of UberCompositeProductJSON is not a number.");
          }
      }
    setPickUpEstimateInSecondsText(the_rational_text);
  }

void UberCompositeProductJSON::fromJSONFareType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FareType of UberCompositeProductJSON is not a string.");
    TypeFareType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "etered") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = FareType_metered;
                    goto open_enum_is_done;
                  }
            break;
        case 'r':
            if (strcmp(&(json_string->getData()[1]), "ated") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = FareType_rated;
                    goto open_enum_is_done;
                  }
            break;
        case 'u':
            if (strcmp(&(json_string->getData()[1]), "pfront") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = FareType_upfront;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setFareType(the_open_enum);
  }

void UberCompositeProductJSON::fromJSONFare(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberFareJSON *convert_classy = UberFareJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setFare(convert_classy);
    convert_classy->remove_reference();
  }

void UberCompositeProductJSON::fromJSONTripEstimates(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberTripEstimatesJSON *convert_classy = UberTripEstimatesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTripEstimates(convert_classy);
    convert_classy->remove_reference();
  }

UberCompositeProductJSON::UberCompositeProductJSON(void) :
        flagHasDisplayName(false),
        flagHasProductId(false),
        flagHasDescription(false),
        flagHasImage(false),
        flagHasCapacity(false),
        flagHasSurgeMultiplier(false),
        flagHasIsSelected(false),
        flagHasIsShared(false),
        flagHasCount(false),
        flagHasPickUpEstimateInSeconds(false),
        flagHasFareType(false),
        flagHasFare(false),
        flagHasTripEstimates(false)
  {
    extraIndex = create_string_index();
  }

UberCompositeProductJSON::~UberCompositeProductJSON(void)
  {
    if (flagHasFare)
      {
        storeFare->remove_reference();
      }
    if (flagHasTripEstimates)
      {
        storeTripEstimates->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberCompositeProductJSON::hasDisplayName(void) const
  {
    return flagHasDisplayName;
  }

std::string UberCompositeProductJSON::getDisplayName(void)
  {
    assert(flagHasDisplayName);
    return storeDisplayName;
  }

const std::string UberCompositeProductJSON::getDisplayName(void) const
  {
    assert(flagHasDisplayName);
    return storeDisplayName;
  }

bool UberCompositeProductJSON::hasProductId(void) const
  {
    return flagHasProductId;
  }

std::string UberCompositeProductJSON::getProductId(void)
  {
    assert(flagHasProductId);
    return storeProductId;
  }

const std::string UberCompositeProductJSON::getProductId(void) const
  {
    assert(flagHasProductId);
    return storeProductId;
  }

bool UberCompositeProductJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string UberCompositeProductJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string UberCompositeProductJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool UberCompositeProductJSON::hasImage(void) const
  {
    return flagHasImage;
  }

std::string UberCompositeProductJSON::getImage(void)
  {
    assert(flagHasImage);
    return storeImage;
  }

const std::string UberCompositeProductJSON::getImage(void) const
  {
    assert(flagHasImage);
    return storeImage;
  }

bool UberCompositeProductJSON::hasCapacity(void) const
  {
    return flagHasCapacity;
  }

OInteger UberCompositeProductJSON::getCapacity(void)
  {
    assert(flagHasCapacity);
    return storeCapacity;
  }

const OInteger UberCompositeProductJSON::getCapacity(void) const
  {
    assert(flagHasCapacity);
    return storeCapacity;
  }

bool UberCompositeProductJSON::hasSurgeMultiplier(void) const
  {
    return flagHasSurgeMultiplier;
  }

double UberCompositeProductJSON::getSurgeMultiplier(void)
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

const double UberCompositeProductJSON::getSurgeMultiplier(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

std::string UberCompositeProductJSON::getSurgeMultiplierAsText(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSurgeMultiplier);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSurgeMultiplier);
      }
  }

bool UberCompositeProductJSON::hasIsSelected(void) const
  {
    return flagHasIsSelected;
  }

bool UberCompositeProductJSON::getIsSelected(void)
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

const bool UberCompositeProductJSON::getIsSelected(void) const
  {
    assert(flagHasIsSelected);
    return storeIsSelected;
  }

bool UberCompositeProductJSON::hasIsShared(void) const
  {
    return flagHasIsShared;
  }

bool UberCompositeProductJSON::getIsShared(void)
  {
    assert(flagHasIsShared);
    return storeIsShared;
  }

const bool UberCompositeProductJSON::getIsShared(void) const
  {
    assert(flagHasIsShared);
    return storeIsShared;
  }

bool UberCompositeProductJSON::hasCount(void) const
  {
    return flagHasCount;
  }

OInteger UberCompositeProductJSON::getCount(void)
  {
    assert(flagHasCount);
    return storeCount;
  }

const OInteger UberCompositeProductJSON::getCount(void) const
  {
    assert(flagHasCount);
    return storeCount;
  }

bool UberCompositeProductJSON::hasPickUpEstimateInSeconds(void) const
  {
    return flagHasPickUpEstimateInSeconds;
  }

double UberCompositeProductJSON::getPickUpEstimateInSeconds(void)
  {
    assert(flagHasPickUpEstimateInSeconds);
    if (textStorePickUpEstimateInSeconds != "")
      {
        return atof(textStorePickUpEstimateInSeconds.c_str());
      }
    return storePickUpEstimateInSeconds;
  }

const double UberCompositeProductJSON::getPickUpEstimateInSeconds(void) const
  {
    assert(flagHasPickUpEstimateInSeconds);
    if (textStorePickUpEstimateInSeconds != "")
      {
        return atof(textStorePickUpEstimateInSeconds.c_str());
      }
    return storePickUpEstimateInSeconds;
  }

std::string UberCompositeProductJSON::getPickUpEstimateInSecondsAsText(void) const
  {
    assert(flagHasPickUpEstimateInSeconds);
    if (textStorePickUpEstimateInSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePickUpEstimateInSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePickUpEstimateInSeconds);
      }
  }

bool UberCompositeProductJSON::hasFareType(void) const
  {
    return flagHasFareType;
  }

UberCompositeProductJSON::TypeFareType UberCompositeProductJSON::getFareType(void)
  {
    assert(flagHasFareType);
    return storeFareType;
  }

const UberCompositeProductJSON::TypeFareType UberCompositeProductJSON::getFareType(void) const
  {
    assert(flagHasFareType);
    return storeFareType;
  }

const char *UberCompositeProductJSON::getFareTypeAsChars(void) const
  {
    TypeFareType result = getFareType();
    if (result.in_known_list)
        return stringFromFareType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberCompositeProductJSON::getFareTypeAsString(void) const
  {
    return getFareTypeAsChars();
  }

bool UberCompositeProductJSON::hasFare(void) const
  {
    return flagHasFare;
  }

UberFareJSON * UberCompositeProductJSON::getFare(void)
  {
    assert(flagHasFare);
    return storeFare;
  }

const UberFareJSON * UberCompositeProductJSON::getFare(void) const
  {
    assert(flagHasFare);
    return storeFare;
  }

bool UberCompositeProductJSON::hasTripEstimates(void) const
  {
    return flagHasTripEstimates;
  }

UberTripEstimatesJSON * UberCompositeProductJSON::getTripEstimates(void)
  {
    assert(flagHasTripEstimates);
    return storeTripEstimates;
  }

const UberTripEstimatesJSON * UberCompositeProductJSON::getTripEstimates(void) const
  {
    assert(flagHasTripEstimates);
    return storeTripEstimates;
  }

char UberCompositeProductJSON::Generator::lowerBoundCapacity[] = "0";
char UberCompositeProductJSON::Generator::lowerBoundCount[] = "0";
UberCompositeProductJSON *UberCompositeProductJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCompositeProductJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCompositeProductJSON>, UberCompositeProductJSON *, bool> generator("Type UberCompositeProduct", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
