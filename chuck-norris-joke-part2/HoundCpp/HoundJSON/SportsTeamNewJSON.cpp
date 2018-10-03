/* file "SportsTeamNewJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsTeamNewJSON.h"

#include "SportsTeamNewJSON.h"


SportsTeamNewJSON::SportsTeamNewJSON(const SportsTeamNewJSON &)
  {
    assert(false);
  }

SportsTeamNewJSON &SportsTeamNewJSON::operator=(const SportsTeamNewJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsTeamNewJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of SportsTeamNewJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void SportsTeamNewJSON::fromJSONNameShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NameShort of SportsTeamNewJSON is not a string.");
    setNameShort(std::string(json_string->getData()));
  }

void SportsTeamNewJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of SportsTeamNewJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

void SportsTeamNewJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsTeamNewJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of SportsTeamNewJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void SportsTeamNewJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of SportsTeamNewJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void SportsTeamNewJSON::fromJSONDivision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueDivisionJSON *convert_classy = SportsLeagueDivisionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDivision(convert_classy);
    convert_classy->remove_reference();
  }

void SportsTeamNewJSON::fromJSONToBeDetermined(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ToBeDetermined of SportsTeamNewJSON is not true for false.");
          }
      }
    setToBeDetermined(the_bool);
  }

void SportsTeamNewJSON::fromJSONLogos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Logos of SportsTeamNewJSON is not an array.");
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

void SportsTeamNewJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of SportsTeamNewJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

SportsTeamNewJSON::SportsTeamNewJSON(void) :
        flagHasName(false),
        flagHasNameShort(false),
        flagHasAlias(false),
        flagHasLeague(false),
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasDivision(false),
        flagHasToBeDetermined(false),
        flagHasLogos(false),
        flagHasID(false)
  {
    extraIndex = create_string_index();
  }

SportsTeamNewJSON::~SportsTeamNewJSON(void)
  {
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
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

bool SportsTeamNewJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string SportsTeamNewJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string SportsTeamNewJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool SportsTeamNewJSON::hasNameShort(void) const
  {
    return flagHasNameShort;
  }

std::string SportsTeamNewJSON::getNameShort(void)
  {
    assert(flagHasNameShort);
    return storeNameShort;
  }

const std::string SportsTeamNewJSON::getNameShort(void) const
  {
    assert(flagHasNameShort);
    return storeNameShort;
  }

bool SportsTeamNewJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string SportsTeamNewJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string SportsTeamNewJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

bool SportsTeamNewJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsTeamNewJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsTeamNewJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsTeamNewJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsTeamNewJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsTeamNewJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsTeamNewJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsTeamNewJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double SportsTeamNewJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double SportsTeamNewJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string SportsTeamNewJSON::getLatitudeAsText(void) const
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

bool SportsTeamNewJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double SportsTeamNewJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double SportsTeamNewJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string SportsTeamNewJSON::getLongitudeAsText(void) const
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

bool SportsTeamNewJSON::hasDivision(void) const
  {
    return flagHasDivision;
  }

SportsLeagueDivisionJSON * SportsTeamNewJSON::getDivision(void)
  {
    assert(flagHasDivision);
    return storeDivision;
  }

const SportsLeagueDivisionJSON * SportsTeamNewJSON::getDivision(void) const
  {
    assert(flagHasDivision);
    return storeDivision;
  }

SportsLeagueDivisionJSON::TypeValue SportsTeamNewJSON::getDivisionValue(void)
  {
    return getDivision()->getValue();
  }

const SportsLeagueDivisionJSON::TypeValue SportsTeamNewJSON::getDivisionValue(void) const
  {
    return getDivision()->getValue();
  }

const char *SportsTeamNewJSON::getDivisionAsChars(void) const
  {
    return getDivision()->getValueAsChars();
  }

std::string SportsTeamNewJSON::getDivisionAsString(void) const
  {
    return getDivision()->getValueAsString();
  }

bool SportsTeamNewJSON::hasToBeDetermined(void) const
  {
    return flagHasToBeDetermined;
  }

bool SportsTeamNewJSON::getToBeDetermined(void)
  {
    assert(flagHasToBeDetermined);
    return storeToBeDetermined;
  }

const bool SportsTeamNewJSON::getToBeDetermined(void) const
  {
    assert(flagHasToBeDetermined);
    return storeToBeDetermined;
  }

bool SportsTeamNewJSON::hasLogos(void) const
  {
    return flagHasLogos;
  }

size_t SportsTeamNewJSON::countOfLogos(void) const
  {
    assert(flagHasLogos);
    return storeLogos.size();
  }

SportsTeamLogoJSON * SportsTeamNewJSON::elementOfLogos(size_t element_num)
  {
    assert(flagHasLogos);
    return storeLogos[element_num];
  }

const SportsTeamLogoJSON * SportsTeamNewJSON::elementOfLogos(size_t element_num) const
  {
    assert(flagHasLogos);
    return storeLogos[element_num];
  }

std::vector< SportsTeamLogoJSON * > SportsTeamNewJSON::getLogos(void)
  {
    assert(flagHasLogos);
    return storeLogos;
  }

const std::vector< SportsTeamLogoJSON * > SportsTeamNewJSON::getLogos(void) const
  {
    assert(flagHasLogos);
    return storeLogos;
  }

bool SportsTeamNewJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsTeamNewJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsTeamNewJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

SportsTeamNewJSON *SportsTeamNewJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsTeamNewJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool> generator("Type SportsTeamNew", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
