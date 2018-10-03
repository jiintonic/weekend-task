/* file "FlightStatsFlightStatusJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatsFlightStatusJSON.h"

#include "FlightStatsFlightStatusJSON.h"


FlightStatsFlightStatusJSON::Typestatus FlightStatsFlightStatusJSON::stringTostatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (chars[1] == 0)
                return status_A;
            break;
        case 'C':
            if (chars[1] == 0)
                return status_C;
            break;
        case 'D':
            switch ((unsigned char)(chars[1]))
              {
                case 0:
                    return status_D;
                case 'N':
                    if (chars[2] == 0)
                        return status_DN;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (chars[1] == 0)
                return status_L;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "O") == 0)
                return status_NO;
            break;
        case 'R':
            if (chars[1] == 0)
                return status_R;
            break;
        case 'S':
            if (chars[1] == 0)
                return status_S;
            break;
        case 'U':
            if (chars[1] == 0)
                return status_U;
            break;
        default:
            break;
      }
    throw("The value for field `status' is not one of the legal values.");
  }

const char *FlightStatsFlightStatusJSON::stringFromstatus(Typestatus the_enum)
  {
    switch (the_enum)
      {
        case status_A:
            return "A";
        case status_C:
            return "C";
        case status_D:
            return "D";
        case status_DN:
            return "DN";
        case status_L:
            return "L";
        case status_NO:
            return "NO";
        case status_R:
            return "R";
        case status_S:
            return "S";
        case status_U:
            return "U";
        default:
            assert(false);
            return NULL;
      }
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::TypeflightEquipmentJSON(const TypeflightEquipmentJSON &)
  {
    assert(false);
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON &FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::operator=(const TypeflightEquipmentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::fromJSONscheduledEquipment(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsEquipmentJSON *convert_classy = FlightStatsEquipmentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setscheduledEquipment(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::fromJSONscheduledEquipmentIataCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field scheduledEquipmentIataCode of TypeflightEquipmentJSON is not a string.");
    setscheduledEquipmentIataCode(std::string(json_string->getData()));
  }

void FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::fromJSONactualEquipment(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsEquipmentJSON *convert_classy = FlightStatsEquipmentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setactualEquipment(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::fromJSONactualEquipmentIataCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field actualEquipmentIataCode of TypeflightEquipmentJSON is not a string.");
    setactualEquipmentIataCode(std::string(json_string->getData()));
  }

void FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::fromJSONtailNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field tailNumber of TypeflightEquipmentJSON is not a string.");
    settailNumber(std::string(json_string->getData()));
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::TypeflightEquipmentJSON(void) :
        flagHasscheduledEquipment(false),
        flagHasscheduledEquipmentIataCode(false),
        flagHasactualEquipment(false),
        flagHasactualEquipmentIataCode(false),
        flagHastailNumber(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::~TypeflightEquipmentJSON(void)
  {
    if (flagHasscheduledEquipment)
      {
        storescheduledEquipment->remove_reference();
      }
    if (flagHasactualEquipment)
      {
        storeactualEquipment->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::hasscheduledEquipment(void) const
  {
    return flagHasscheduledEquipment;
  }

FlightStatsEquipmentJSON * FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getscheduledEquipment(void)
  {
    assert(flagHasscheduledEquipment);
    return storescheduledEquipment;
  }

const FlightStatsEquipmentJSON * FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getscheduledEquipment(void) const
  {
    assert(flagHasscheduledEquipment);
    return storescheduledEquipment;
  }

bool FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::hasscheduledEquipmentIataCode(void) const
  {
    return flagHasscheduledEquipmentIataCode;
  }

std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getscheduledEquipmentIataCode(void)
  {
    assert(flagHasscheduledEquipmentIataCode);
    return storescheduledEquipmentIataCode;
  }

const std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getscheduledEquipmentIataCode(void) const
  {
    assert(flagHasscheduledEquipmentIataCode);
    return storescheduledEquipmentIataCode;
  }

bool FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::hasactualEquipment(void) const
  {
    return flagHasactualEquipment;
  }

FlightStatsEquipmentJSON * FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getactualEquipment(void)
  {
    assert(flagHasactualEquipment);
    return storeactualEquipment;
  }

const FlightStatsEquipmentJSON * FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getactualEquipment(void) const
  {
    assert(flagHasactualEquipment);
    return storeactualEquipment;
  }

bool FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::hasactualEquipmentIataCode(void) const
  {
    return flagHasactualEquipmentIataCode;
  }

std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getactualEquipmentIataCode(void)
  {
    assert(flagHasactualEquipmentIataCode);
    return storeactualEquipmentIataCode;
  }

const std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::getactualEquipmentIataCode(void) const
  {
    assert(flagHasactualEquipmentIataCode);
    return storeactualEquipmentIataCode;
  }

bool FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::hastailNumber(void) const
  {
    return flagHastailNumber;
  }

std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::gettailNumber(void)
  {
    assert(flagHastailNumber);
    return storetailNumber;
  }

const std::string FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::gettailNumber(void) const
  {
    assert(flagHastailNumber);
    return storetailNumber;
  }

FlightStatsFlightStatusJSON::FlightStatsFlightStatusJSON(const FlightStatsFlightStatusJSON &)
  {
    assert(false);
  }

FlightStatsFlightStatusJSON &FlightStatsFlightStatusJSON::operator=(const FlightStatsFlightStatusJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatsFlightStatusJSON::fromJSONflightId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field flightId of FlightStatsFlightStatusJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field flightId of FlightStatsFlightStatusJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setflightId(extracted_integer);
  }

void FlightStatsFlightStatusJSON::fromJSONcarrier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirlineJSON *convert_classy = FlightStatsAirlineJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setcarrier(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONflightNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field flightNumber of FlightStatsFlightStatusJSON is not a string.");
    setflightNumber(std::string(json_string->getData()));
  }

void FlightStatsFlightStatusJSON::fromJSONdepartureAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirportJSON *convert_classy = FlightStatsAirportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setdepartureAirport(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONarrivalAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirportJSON *convert_classy = FlightStatsAirportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setarrivalAirport(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONdivertedAirport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirportJSON *convert_classy = FlightStatsAirportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setdivertedAirport(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONdepartureDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setdepartureDate(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONarrivalDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsTimesJSON *convert_classy = FlightStatsTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setarrivalDate(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONstatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field status of FlightStatsFlightStatusJSON is not a string.");
    Typestatus the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_A;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_C;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 0:
                      {
                        the_enum = status_D;
                        goto enum_is_done;
                      }
                case 'N':
                    if (json_string->getData()[2] == 0)
                          {
                            the_enum = status_DN;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_L;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "O") == 0)
                  {
                    the_enum = status_NO;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_R;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_S;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (json_string->getData()[1] == 0)
                  {
                    the_enum = status_U;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field status of FlightStatsFlightStatusJSON is not one of the legal strings.");
  enum_is_done:;
    setstatus(the_enum);
  }

void FlightStatsFlightStatusJSON::fromJSONoperationalTimes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsOperationalTimesJSON *convert_classy = FlightStatsOperationalTimesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setoperationalTimes(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONcodeshares(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field codeshares of FlightStatsFlightStatusJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightStatsCodeshareJSON * > vector_codeshares1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightStatsCodeshareJSON *convert_classy = FlightStatsCodeshareJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_codeshares1[num1] = convert_classy;
      }
    initcodeshares();
    for (size_t num2 = 0; num2 < vector_codeshares1.size(); ++num2)
        appendcodeshares(vector_codeshares1[num2]);
    for (size_t num1 = 0; num1 < vector_codeshares1.size(); ++num1)
      {
        vector_codeshares1[num1]->remove_reference();
      }
  }

void FlightStatsFlightStatusJSON::fromJSONairportResources(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatsAirportResourcesJSON *convert_classy = FlightStatsAirportResourcesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setairportResources(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatsFlightStatusJSON::fromJSONflightEquipment(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeflightEquipmentJSON *convert_classy = TypeflightEquipmentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setflightEquipment(convert_classy);
    convert_classy->remove_reference();
  }

FlightStatsFlightStatusJSON::FlightStatsFlightStatusJSON(void) :
        flagHasflightId(false),
        flagHascarrier(false),
        flagHasflightNumber(false),
        flagHasdepartureAirport(false),
        flagHasarrivalAirport(false),
        flagHasdivertedAirport(false),
        flagHasdepartureDate(false),
        flagHasarrivalDate(false),
        flagHasstatus(false),
        flagHasoperationalTimes(false),
        flagHascodeshares(false),
        flagHasairportResources(false),
        flagHasflightEquipment(false)
  {
    extraIndex = create_string_index();
  }

FlightStatsFlightStatusJSON::~FlightStatsFlightStatusJSON(void)
  {
    if (flagHascarrier)
      {
        storecarrier->remove_reference();
      }
    if (flagHasdepartureAirport)
      {
        storedepartureAirport->remove_reference();
      }
    if (flagHasarrivalAirport)
      {
        storearrivalAirport->remove_reference();
      }
    if (flagHasdivertedAirport)
      {
        storedivertedAirport->remove_reference();
      }
    if (flagHasdepartureDate)
      {
        storedepartureDate->remove_reference();
      }
    if (flagHasarrivalDate)
      {
        storearrivalDate->remove_reference();
      }
    if (flagHasoperationalTimes)
      {
        storeoperationalTimes->remove_reference();
      }
    if (flagHascodeshares)
      {
        for (size_t num4 = 0; num4 < storecodeshares.size(); ++num4)
          {
            storecodeshares[num4]->remove_reference();
          }
      }
    if (flagHasairportResources)
      {
        storeairportResources->remove_reference();
      }
    if (flagHasflightEquipment)
      {
        storeflightEquipment->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightStatsFlightStatusJSON::hasflightId(void) const
  {
    return flagHasflightId;
  }

OInteger FlightStatsFlightStatusJSON::getflightId(void)
  {
    assert(flagHasflightId);
    return storeflightId;
  }

const OInteger FlightStatsFlightStatusJSON::getflightId(void) const
  {
    assert(flagHasflightId);
    return storeflightId;
  }

bool FlightStatsFlightStatusJSON::hascarrier(void) const
  {
    return flagHascarrier;
  }

FlightStatsAirlineJSON * FlightStatsFlightStatusJSON::getcarrier(void)
  {
    assert(flagHascarrier);
    return storecarrier;
  }

const FlightStatsAirlineJSON * FlightStatsFlightStatusJSON::getcarrier(void) const
  {
    assert(flagHascarrier);
    return storecarrier;
  }

bool FlightStatsFlightStatusJSON::hasflightNumber(void) const
  {
    return flagHasflightNumber;
  }

std::string FlightStatsFlightStatusJSON::getflightNumber(void)
  {
    assert(flagHasflightNumber);
    return storeflightNumber;
  }

const std::string FlightStatsFlightStatusJSON::getflightNumber(void) const
  {
    assert(flagHasflightNumber);
    return storeflightNumber;
  }

bool FlightStatsFlightStatusJSON::hasdepartureAirport(void) const
  {
    return flagHasdepartureAirport;
  }

FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getdepartureAirport(void)
  {
    assert(flagHasdepartureAirport);
    return storedepartureAirport;
  }

const FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getdepartureAirport(void) const
  {
    assert(flagHasdepartureAirport);
    return storedepartureAirport;
  }

bool FlightStatsFlightStatusJSON::hasarrivalAirport(void) const
  {
    return flagHasarrivalAirport;
  }

FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getarrivalAirport(void)
  {
    assert(flagHasarrivalAirport);
    return storearrivalAirport;
  }

const FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getarrivalAirport(void) const
  {
    assert(flagHasarrivalAirport);
    return storearrivalAirport;
  }

bool FlightStatsFlightStatusJSON::hasdivertedAirport(void) const
  {
    return flagHasdivertedAirport;
  }

FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getdivertedAirport(void)
  {
    assert(flagHasdivertedAirport);
    return storedivertedAirport;
  }

const FlightStatsAirportJSON * FlightStatsFlightStatusJSON::getdivertedAirport(void) const
  {
    assert(flagHasdivertedAirport);
    return storedivertedAirport;
  }

bool FlightStatsFlightStatusJSON::hasdepartureDate(void) const
  {
    return flagHasdepartureDate;
  }

FlightStatsTimesJSON * FlightStatsFlightStatusJSON::getdepartureDate(void)
  {
    assert(flagHasdepartureDate);
    return storedepartureDate;
  }

const FlightStatsTimesJSON * FlightStatsFlightStatusJSON::getdepartureDate(void) const
  {
    assert(flagHasdepartureDate);
    return storedepartureDate;
  }

bool FlightStatsFlightStatusJSON::hasarrivalDate(void) const
  {
    return flagHasarrivalDate;
  }

FlightStatsTimesJSON * FlightStatsFlightStatusJSON::getarrivalDate(void)
  {
    assert(flagHasarrivalDate);
    return storearrivalDate;
  }

const FlightStatsTimesJSON * FlightStatsFlightStatusJSON::getarrivalDate(void) const
  {
    assert(flagHasarrivalDate);
    return storearrivalDate;
  }

bool FlightStatsFlightStatusJSON::hasstatus(void) const
  {
    return flagHasstatus;
  }

FlightStatsFlightStatusJSON::Typestatus FlightStatsFlightStatusJSON::getstatus(void)
  {
    assert(flagHasstatus);
    return storestatus;
  }

const FlightStatsFlightStatusJSON::Typestatus FlightStatsFlightStatusJSON::getstatus(void) const
  {
    assert(flagHasstatus);
    return storestatus;
  }

const char *FlightStatsFlightStatusJSON::getstatusAsChars(void) const
  {
    return stringFromstatus(getstatus());
  }

std::string FlightStatsFlightStatusJSON::getstatusAsString(void) const
  {
    return stringFromstatus(getstatus());
  }

bool FlightStatsFlightStatusJSON::hasoperationalTimes(void) const
  {
    return flagHasoperationalTimes;
  }

FlightStatsOperationalTimesJSON * FlightStatsFlightStatusJSON::getoperationalTimes(void)
  {
    assert(flagHasoperationalTimes);
    return storeoperationalTimes;
  }

const FlightStatsOperationalTimesJSON * FlightStatsFlightStatusJSON::getoperationalTimes(void) const
  {
    assert(flagHasoperationalTimes);
    return storeoperationalTimes;
  }

bool FlightStatsFlightStatusJSON::hascodeshares(void) const
  {
    return flagHascodeshares;
  }

size_t FlightStatsFlightStatusJSON::countOfcodeshares(void) const
  {
    assert(flagHascodeshares);
    return storecodeshares.size();
  }

FlightStatsCodeshareJSON * FlightStatsFlightStatusJSON::elementOfcodeshares(size_t element_num)
  {
    assert(flagHascodeshares);
    return storecodeshares[element_num];
  }

const FlightStatsCodeshareJSON * FlightStatsFlightStatusJSON::elementOfcodeshares(size_t element_num) const
  {
    assert(flagHascodeshares);
    return storecodeshares[element_num];
  }

std::vector< FlightStatsCodeshareJSON * > FlightStatsFlightStatusJSON::getcodeshares(void)
  {
    assert(flagHascodeshares);
    return storecodeshares;
  }

const std::vector< FlightStatsCodeshareJSON * > FlightStatsFlightStatusJSON::getcodeshares(void) const
  {
    assert(flagHascodeshares);
    return storecodeshares;
  }

bool FlightStatsFlightStatusJSON::hasairportResources(void) const
  {
    return flagHasairportResources;
  }

FlightStatsAirportResourcesJSON * FlightStatsFlightStatusJSON::getairportResources(void)
  {
    assert(flagHasairportResources);
    return storeairportResources;
  }

const FlightStatsAirportResourcesJSON * FlightStatsFlightStatusJSON::getairportResources(void) const
  {
    assert(flagHasairportResources);
    return storeairportResources;
  }

bool FlightStatsFlightStatusJSON::hasflightEquipment(void) const
  {
    return flagHasflightEquipment;
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON * FlightStatsFlightStatusJSON::getflightEquipment(void)
  {
    assert(flagHasflightEquipment);
    return storeflightEquipment;
  }

const FlightStatsFlightStatusJSON::TypeflightEquipmentJSON * FlightStatsFlightStatusJSON::getflightEquipment(void) const
  {
    assert(flagHasflightEquipment);
    return storeflightEquipment;
  }

FlightStatsFlightStatusJSON::TypeflightEquipmentJSON *FlightStatsFlightStatusJSON::TypeflightEquipmentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeflightEquipmentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeflightEquipmentJSON>, TypeflightEquipmentJSON *, bool> generator("Type TypeflightEquipment", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
FlightStatsFlightStatusJSON *FlightStatsFlightStatusJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatsFlightStatusJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatsFlightStatusJSON>, FlightStatsFlightStatusJSON *, bool> generator("Type FlightStatsFlightStatus", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
