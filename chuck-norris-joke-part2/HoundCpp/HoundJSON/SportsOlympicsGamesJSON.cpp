/* file "SportsOlympicsGamesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsGamesJSON.h"

#include "SportsOlympicsGamesJSON.h"


SportsOlympicsGamesJSON::TypeStatus::TypeStatus(void)
  {
  }

SportsOlympicsGamesJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsGamesJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsGamesJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsGamesJSON::TypeStatusKnownValues SportsOlympicsGamesJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "ompleted") == 0)
                return Status_Completed;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ngoing") == 0)
                return Status_Ongoing;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "pcoming") == 0)
                return Status_Upcoming;
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *SportsOlympicsGamesJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_Completed:
            return "Completed";
        case Status_Ongoing:
            return "Ongoing";
        case Status_Upcoming:
            return "Upcoming";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsGamesJSON::SportsOlympicsGamesJSON(const SportsOlympicsGamesJSON &)
  {
    assert(false);
  }

SportsOlympicsGamesJSON &SportsOlympicsGamesJSON::operator=(const SportsOlympicsGamesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsGamesJSON::fromJSONCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsGamesCodeJSON *convert_classy = SportsOlympicsGamesCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCode(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsGamesJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of SportsOlympicsGamesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of SportsOlympicsGamesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void SportsOlympicsGamesJSON::fromJSONHostCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HostCity of SportsOlympicsGamesJSON is not a string.");
    setHostCity(std::string(json_string->getData()));
  }

void SportsOlympicsGamesJSON::fromJSONHostCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HostCountry of SportsOlympicsGamesJSON is not a string.");
    setHostCountry(std::string(json_string->getData()));
  }

void SportsOlympicsGamesJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsOlympicsSeasonJSON *convert_classy = SportsOlympicsSeasonJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsGamesJSON::fromJSONOpeningCeremonyDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpeningCeremonyDate(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsGamesJSON::fromJSONClosingCeremonyDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClosingCeremonyDate(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsGamesJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of SportsOlympicsGamesJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ompleted") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Completed;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ngoing") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Ongoing;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "pcoming") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Upcoming;
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

SportsOlympicsGamesJSON::SportsOlympicsGamesJSON(void) :
        flagHasCode(false),
        flagHasYear(false),
        flagHasHostCity(false),
        flagHasHostCountry(false),
        flagHasSeason(false),
        flagHasOpeningCeremonyDate(false),
        flagHasClosingCeremonyDate(false),
        flagHasStatus(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsGamesJSON::~SportsOlympicsGamesJSON(void)
  {
    if (flagHasCode)
      {
        storeCode->remove_reference();
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasOpeningCeremonyDate)
      {
        storeOpeningCeremonyDate->remove_reference();
      }
    if (flagHasClosingCeremonyDate)
      {
        storeClosingCeremonyDate->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsGamesJSON::hasCode(void) const
  {
    return flagHasCode;
  }

SportsOlympicsGamesCodeJSON * SportsOlympicsGamesJSON::getCode(void)
  {
    assert(flagHasCode);
    return storeCode;
  }

const SportsOlympicsGamesCodeJSON * SportsOlympicsGamesJSON::getCode(void) const
  {
    assert(flagHasCode);
    return storeCode;
  }

SportsOlympicsGamesCodeJSON::TypeValue SportsOlympicsGamesJSON::getCodeValue(void)
  {
    return getCode()->getValue();
  }

const SportsOlympicsGamesCodeJSON::TypeValue SportsOlympicsGamesJSON::getCodeValue(void) const
  {
    return getCode()->getValue();
  }

const char *SportsOlympicsGamesJSON::getCodeAsChars(void) const
  {
    return getCode()->getValueAsChars();
  }

std::string SportsOlympicsGamesJSON::getCodeAsString(void) const
  {
    return getCode()->getValueAsString();
  }

bool SportsOlympicsGamesJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger SportsOlympicsGamesJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger SportsOlympicsGamesJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool SportsOlympicsGamesJSON::hasHostCity(void) const
  {
    return flagHasHostCity;
  }

std::string SportsOlympicsGamesJSON::getHostCity(void)
  {
    assert(flagHasHostCity);
    return storeHostCity;
  }

const std::string SportsOlympicsGamesJSON::getHostCity(void) const
  {
    assert(flagHasHostCity);
    return storeHostCity;
  }

bool SportsOlympicsGamesJSON::hasHostCountry(void) const
  {
    return flagHasHostCountry;
  }

std::string SportsOlympicsGamesJSON::getHostCountry(void)
  {
    assert(flagHasHostCountry);
    return storeHostCountry;
  }

const std::string SportsOlympicsGamesJSON::getHostCountry(void) const
  {
    assert(flagHasHostCountry);
    return storeHostCountry;
  }

bool SportsOlympicsGamesJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsOlympicsSeasonJSON * SportsOlympicsGamesJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsOlympicsSeasonJSON * SportsOlympicsGamesJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

SportsOlympicsSeasonJSON::TypeValue SportsOlympicsGamesJSON::getSeasonValue(void)
  {
    return getSeason()->getValue();
  }

const SportsOlympicsSeasonJSON::TypeValue SportsOlympicsGamesJSON::getSeasonValue(void) const
  {
    return getSeason()->getValue();
  }

const char *SportsOlympicsGamesJSON::getSeasonAsChars(void) const
  {
    return getSeason()->getValueAsChars();
  }

std::string SportsOlympicsGamesJSON::getSeasonAsString(void) const
  {
    return getSeason()->getValueAsString();
  }

bool SportsOlympicsGamesJSON::hasOpeningCeremonyDate(void) const
  {
    return flagHasOpeningCeremonyDate;
  }

DateAndOrTimeJSON * SportsOlympicsGamesJSON::getOpeningCeremonyDate(void)
  {
    assert(flagHasOpeningCeremonyDate);
    return storeOpeningCeremonyDate;
  }

const DateAndOrTimeJSON * SportsOlympicsGamesJSON::getOpeningCeremonyDate(void) const
  {
    assert(flagHasOpeningCeremonyDate);
    return storeOpeningCeremonyDate;
  }

bool SportsOlympicsGamesJSON::hasClosingCeremonyDate(void) const
  {
    return flagHasClosingCeremonyDate;
  }

DateAndOrTimeJSON * SportsOlympicsGamesJSON::getClosingCeremonyDate(void)
  {
    assert(flagHasClosingCeremonyDate);
    return storeClosingCeremonyDate;
  }

const DateAndOrTimeJSON * SportsOlympicsGamesJSON::getClosingCeremonyDate(void) const
  {
    assert(flagHasClosingCeremonyDate);
    return storeClosingCeremonyDate;
  }

bool SportsOlympicsGamesJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

SportsOlympicsGamesJSON::TypeStatus SportsOlympicsGamesJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const SportsOlympicsGamesJSON::TypeStatus SportsOlympicsGamesJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *SportsOlympicsGamesJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsGamesJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

char SportsOlympicsGamesJSON::Generator::lowerBoundYear[] = "0";
SportsOlympicsGamesJSON *SportsOlympicsGamesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsGamesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool> generator("Type SportsOlympicsGames", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
