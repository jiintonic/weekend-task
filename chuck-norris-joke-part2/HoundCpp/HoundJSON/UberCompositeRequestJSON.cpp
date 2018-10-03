/* file "UberCompositeRequestJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberCompositeRequestJSON.h"

#include "UberCompositeRequestJSON.h"


UberCompositeRequestJSON::TypeStatus::TypeStatus(void)
  {
  }

UberCompositeRequestJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberCompositeRequestJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberCompositeRequestJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberCompositeRequestJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool UberCompositeRequestJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberCompositeRequestJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool UberCompositeRequestJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool UberCompositeRequestJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

UberCompositeRequestJSON::TypeStatusKnownValues UberCompositeRequestJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "cepted") == 0)
                        return Status_accepted;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "riving") == 0)
                        return Status_arriving;
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            if (strcmp(&(chars[1]), "ompleted") == 0)
                return Status_completed;
            break;
        case 'd':
            if (strcmp(&(chars[1]), "river_canceled") == 0)
                return Status_driver_canceled;
            break;
        case 'i':
            if (strcmp(&(chars[1]), "n_progress") == 0)
                return Status_in_progress;
            break;
        case 'n':
            if (strcmp(&(chars[1]), "o_drivers_available") == 0)
                return Status_no_drivers_available;
            break;
        case 'p':
            if (strcmp(&(chars[1]), "rocessing") == 0)
                return Status_processing;
            break;
        case 'r':
            if (strcmp(&(chars[1]), "ider_canceled") == 0)
                return Status_rider_canceled;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *UberCompositeRequestJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_processing:
            return "processing";
        case Status_no_drivers_available:
            return "no_drivers_available";
        case Status_accepted:
            return "accepted";
        case Status_arriving:
            return "arriving";
        case Status_in_progress:
            return "in_progress";
        case Status_driver_canceled:
            return "driver_canceled";
        case Status_rider_canceled:
            return "rider_canceled";
        case Status_completed:
            return "completed";
        default:
            assert(false);
            return NULL;
      }
  }

UberCompositeRequestJSON::UberCompositeRequestJSON(const UberCompositeRequestJSON &)
  {
    assert(false);
  }

UberCompositeRequestJSON &UberCompositeRequestJSON::operator=(const UberCompositeRequestJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberCompositeRequestJSON::fromJSONRequestId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestId of UberCompositeRequestJSON is not a string.");
    setRequestId(std::string(json_string->getData()));
  }

void UberCompositeRequestJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of UberCompositeRequestJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'a':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "cepted") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_accepted;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "riving") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_arriving;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "ompleted") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_completed;
                    goto open_enum_is_done;
                  }
            break;
        case 'd':
            if (strcmp(&(json_string->getData()[1]), "river_canceled") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_driver_canceled;
                    goto open_enum_is_done;
                  }
            break;
        case 'i':
            if (strcmp(&(json_string->getData()[1]), "n_progress") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_in_progress;
                    goto open_enum_is_done;
                  }
            break;
        case 'n':
            if (strcmp(&(json_string->getData()[1]), "o_drivers_available") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_no_drivers_available;
                    goto open_enum_is_done;
                  }
            break;
        case 'p':
            if (strcmp(&(json_string->getData()[1]), "rocessing") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_processing;
                    goto open_enum_is_done;
                  }
            break;
        case 'r':
            if (strcmp(&(json_string->getData()[1]), "ider_canceled") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_rider_canceled;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setStatus(the_open_enum);
  }

void UberCompositeRequestJSON::fromJSONArrivalEstimateInMinutes(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ArrivalEstimateInMinutes of UberCompositeRequestJSON is not a number.");
          }
      }
    setArrivalEstimateInMinutesText(the_rational_text);
  }

void UberCompositeRequestJSON::fromJSONVehicle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberVehicleJSON *convert_classy = UberVehicleJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVehicle(convert_classy);
    convert_classy->remove_reference();
  }

void UberCompositeRequestJSON::fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SurgeMultiplier of UberCompositeRequestJSON is not a number.");
          }
      }
    setSurgeMultiplierText(the_rational_text);
  }

UberCompositeRequestJSON::UberCompositeRequestJSON(void) :
        flagHasRequestId(false),
        flagHasStatus(false),
        flagHasArrivalEstimateInMinutes(false),
        flagHasVehicle(false),
        flagHasSurgeMultiplier(false)
  {
    extraIndex = create_string_index();
  }

UberCompositeRequestJSON::~UberCompositeRequestJSON(void)
  {
    if (flagHasVehicle)
      {
        storeVehicle->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberCompositeRequestJSON::hasRequestId(void) const
  {
    return flagHasRequestId;
  }

std::string UberCompositeRequestJSON::getRequestId(void)
  {
    assert(flagHasRequestId);
    return storeRequestId;
  }

const std::string UberCompositeRequestJSON::getRequestId(void) const
  {
    assert(flagHasRequestId);
    return storeRequestId;
  }

bool UberCompositeRequestJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

UberCompositeRequestJSON::TypeStatus UberCompositeRequestJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const UberCompositeRequestJSON::TypeStatus UberCompositeRequestJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *UberCompositeRequestJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberCompositeRequestJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool UberCompositeRequestJSON::hasArrivalEstimateInMinutes(void) const
  {
    return flagHasArrivalEstimateInMinutes;
  }

double UberCompositeRequestJSON::getArrivalEstimateInMinutes(void)
  {
    assert(flagHasArrivalEstimateInMinutes);
    if (textStoreArrivalEstimateInMinutes != "")
      {
        return atof(textStoreArrivalEstimateInMinutes.c_str());
      }
    return storeArrivalEstimateInMinutes;
  }

const double UberCompositeRequestJSON::getArrivalEstimateInMinutes(void) const
  {
    assert(flagHasArrivalEstimateInMinutes);
    if (textStoreArrivalEstimateInMinutes != "")
      {
        return atof(textStoreArrivalEstimateInMinutes.c_str());
      }
    return storeArrivalEstimateInMinutes;
  }

std::string UberCompositeRequestJSON::getArrivalEstimateInMinutesAsText(void) const
  {
    assert(flagHasArrivalEstimateInMinutes);
    if (textStoreArrivalEstimateInMinutes == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeArrivalEstimateInMinutes);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreArrivalEstimateInMinutes);
      }
  }

bool UberCompositeRequestJSON::hasVehicle(void) const
  {
    return flagHasVehicle;
  }

UberVehicleJSON * UberCompositeRequestJSON::getVehicle(void)
  {
    assert(flagHasVehicle);
    return storeVehicle;
  }

const UberVehicleJSON * UberCompositeRequestJSON::getVehicle(void) const
  {
    assert(flagHasVehicle);
    return storeVehicle;
  }

bool UberCompositeRequestJSON::hasSurgeMultiplier(void) const
  {
    return flagHasSurgeMultiplier;
  }

double UberCompositeRequestJSON::getSurgeMultiplier(void)
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

const double UberCompositeRequestJSON::getSurgeMultiplier(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

std::string UberCompositeRequestJSON::getSurgeMultiplierAsText(void) const
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

UberCompositeRequestJSON *UberCompositeRequestJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberCompositeRequestJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberCompositeRequestJSON>, UberCompositeRequestJSON *, bool> generator("Type UberCompositeRequest", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
