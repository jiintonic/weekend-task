/* file "SportsTeamJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamJSON.h"

#include "SportsTeamJSON.h"


SportsTeamJSON::TypeHA::TypeHA(void)
  {
  }

SportsTeamJSON::TypeHA::TypeHA(const TypeHA &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsTeamJSON::TypeHA::TypeHA(TypeHAKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsTeamJSON::TypeHA::operator==(const TypeHA &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsTeamJSON::TypeHA::operator!=(const TypeHA &other) const
  {
    return !(operator==(other));
  }

bool SportsTeamJSON::TypeHA::operator<(const TypeHA &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsTeamJSON::TypeHA::operator>(const TypeHA &other) const
  {
    return other.operator<(*this);
  }

bool SportsTeamJSON::TypeHA::operator>=(const TypeHA &other) const
  {
    return !(operator<(other));
  }

bool SportsTeamJSON::TypeHA::operator<=(const TypeHA &other) const
  {
    return !(other.operator<(*this));
  }

SportsTeamJSON::TypeHAKnownValues SportsTeamJSON::stringToHA(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "way") == 0)
                return HA_Away;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "ome") == 0)
                return HA_Home;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return HA_Unknown;
            break;
        default:
            break;
      }
    return HA__none;
  }

const char *SportsTeamJSON::stringFromHA(TypeHAKnownValues the_enum)
  {
    switch (the_enum)
      {
        case HA_Unknown:
            return "Unknown";
        case HA_Home:
            return "Home";
        case HA_Away:
            return "Away";
        default:
            assert(false);
            return NULL;
      }
  }

SportsTeamJSON::SportsTeamJSON(const SportsTeamJSON &)
  {
    assert(false);
  }

SportsTeamJSON &SportsTeamJSON::operator=(const SportsTeamJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamJSON::fromJSONTeamName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamName of SportsTeamJSON is not a string.");
    setTeamName(std::string(json_string->getData()));
  }

void SportsTeamJSON::fromJSONTeamNameShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TeamNameShort of SportsTeamJSON is not a string.");
    setTeamNameShort(std::string(json_string->getData()));
  }

void SportsTeamJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of SportsTeamJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

void SportsTeamJSON::fromJSONTeamLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueJSON *convert_classy = SportsLeagueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeamLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsTeamJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of SportsTeamJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void SportsTeamJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of SportsTeamJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void SportsTeamJSON::fromJSONScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Score of SportsTeamJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Score of SportsTeamJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setScore(extracted_integer);
  }

void SportsTeamJSON::fromJSONHA(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HA of SportsTeamJSON is not a string.");
    TypeHA the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "way") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HA_Away;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "ome") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HA_Home;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = HA_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setHA(the_open_enum);
  }

void SportsTeamJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsTeamJSON::fromJSONToBeDetermined(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ToBeDetermined of SportsTeamJSON is not true for false.");
          }
      }
    setToBeDetermined(the_bool);
  }

void SportsTeamJSON::fromJSONLogos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Logos of SportsTeamJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SportsTeamLogoJSON * > vector_Logos1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamLogoJSON *convert_classy = SportsTeamLogoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Logos1[num1] = convert_classy;
      }
    initLogos();
    for (size_t num2 = 0; num2 < vector_Logos1.size(); ++num2)
        appendLogos(vector_Logos1[num2]);
    for (size_t num1 = 0; num1 < vector_Logos1.size(); ++num1)
      {
        vector_Logos1[num1]->remove_reference();
      }
  }

void SportsTeamJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of SportsTeamJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

SportsTeamJSON::SportsTeamJSON(void) :
        flagHasTeamName(false),
        flagHasTeamNameShort(false),
        flagHasAlias(false),
        flagHasTeamLeague(false),
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasScore(false),
        flagHasHA(false),
        flagHasDivision(false),
        flagHasToBeDetermined(false),
        flagHasLogos(false),
        flagHasID(false)
  {
    extraIndex = create_string_index();
  }

SportsTeamJSON::~SportsTeamJSON(void)
  {
    if (flagHasTeamLeague)
      {
        storeTeamLeague->remove_reference();
      }
    if (flagHasDivision)
      {
        storeDivision->remove_reference();
      }
    if (flagHasLogos)
      {
        for (size_t num4 = 0; num4 < storeLogos.size(); ++num4)
          {
            storeLogos[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsTeamJSON::hasTeamName(void) const
  {
    return flagHasTeamName;
  }

std::string SportsTeamJSON::getTeamName(void)
  {
    assert(flagHasTeamName);
    return storeTeamName;
  }

const std::string SportsTeamJSON::getTeamName(void) const
  {
    assert(flagHasTeamName);
    return storeTeamName;
  }

bool SportsTeamJSON::hasTeamNameShort(void) const
  {
    return flagHasTeamNameShort;
  }

std::string SportsTeamJSON::getTeamNameShort(void)
  {
    assert(flagHasTeamNameShort);
    return storeTeamNameShort;
  }

const std::string SportsTeamJSON::getTeamNameShort(void) const
  {
    assert(flagHasTeamNameShort);
    return storeTeamNameShort;
  }

bool SportsTeamJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string SportsTeamJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string SportsTeamJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

bool SportsTeamJSON::hasTeamLeague(void) const
  {
    return flagHasTeamLeague;
  }

SportsLeagueJSON * SportsTeamJSON::getTeamLeague(void)
  {
    assert(flagHasTeamLeague);
    return storeTeamLeague;
  }

const SportsLeagueJSON * SportsTeamJSON::getTeamLeague(void) const
  {
    assert(flagHasTeamLeague);
    return storeTeamLeague;
  }

bool SportsTeamJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double SportsTeamJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double SportsTeamJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string SportsTeamJSON::getLatitudeAsText(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLatitude);
      }
  }

bool SportsTeamJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double SportsTeamJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double SportsTeamJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string SportsTeamJSON::getLongitudeAsText(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLongitude);
      }
  }

bool SportsTeamJSON::hasScore(void) const
  {
    return flagHasScore;
  }

OInteger SportsTeamJSON::getScore(void)
  {
    assert(flagHasScore);
    return storeScore;
  }

const OInteger SportsTeamJSON::getScore(void) const
  {
    assert(flagHasScore);
    return storeScore;
  }

bool SportsTeamJSON::hasHA(void) const
  {
    return flagHasHA;
  }

SportsTeamJSON::TypeHA SportsTeamJSON::getHA(void)
  {
    assert(flagHasHA);
    return storeHA;
  }

const SportsTeamJSON::TypeHA SportsTeamJSON::getHA(void) const
  {
    assert(flagHasHA);
    return storeHA;
  }

const char *SportsTeamJSON::getHAAsChars(void) const
  {
    TypeHA result = getHA();
    if (result.in_known_list)
        return stringFromHA(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsTeamJSON::getHAAsString(void) const
  {
    return getHAAsChars();
  }

bool SportsTeamJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsTeamJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsTeamJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsTeamJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsTeamJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsTeamJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsTeamJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsTeamJSON::hasToBeDetermined(void) const
  {
    return flagHasToBeDetermined;
  }

bool SportsTeamJSON::getToBeDetermined(void)
  {
    assert(flagHasToBeDetermined);
    return storeToBeDetermined;
  }

const bool SportsTeamJSON::getToBeDetermined(void) const
  {
    assert(flagHasToBeDetermined);
    return storeToBeDetermined;
  }

bool SportsTeamJSON::hasLogos(void) const
  {
    return flagHasLogos;
  }

size_t SportsTeamJSON::countOfLogos(void) const
  {
    assert(flagHasLogos);
    return storeLogos.size();
  }

SportsTeamLogoJSON * SportsTeamJSON::elementOfLogos(size_t element_num)
  {
    assert(flagHasLogos);
    return storeLogos[element_num];
  }

const SportsTeamLogoJSON * SportsTeamJSON::elementOfLogos(size_t element_num) const
  {
    assert(flagHasLogos);
    return storeLogos[element_num];
  }

std::vector< SportsTeamLogoJSON * > SportsTeamJSON::getLogos(void)
  {
    assert(flagHasLogos);
    return storeLogos;
  }

const std::vector< SportsTeamLogoJSON * > SportsTeamJSON::getLogos(void) const
  {
    assert(flagHasLogos);
    return storeLogos;
  }

bool SportsTeamJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsTeamJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsTeamJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

char SportsTeamJSON::Generator::lowerBoundScore[] = "0";
SportsTeamJSON *SportsTeamJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool> generator("Type SportsTeam", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
