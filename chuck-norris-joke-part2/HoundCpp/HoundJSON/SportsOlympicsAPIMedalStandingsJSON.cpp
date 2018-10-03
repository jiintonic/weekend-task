/* file "SportsOlympicsAPIMedalStandingsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsAPIMedalStandingsJSON.h"

#include "SportsOlympicsAPIMedalStandingsJSON.h"


SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Typemedal_infoJSON(const Typemedal_infoJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON &SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::operator=(const Typemedal_infoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONcountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field country of Typemedal_infoJSON is not a string.");
    setcountry(std::string(json_string->getData()));
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONcountry_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field country_code of Typemedal_infoJSON is not a string.");
    setcountry_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONioc_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ioc_code of Typemedal_infoJSON is not a string.");
    setioc_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONtotal_ranking(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field total_ranking of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field total_ranking of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    settotal_ranking(extracted_integer);
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONgold_ranking(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field gold_ranking of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field gold_ranking of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setgold_ranking(extracted_integer);
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONtotal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field total of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field total of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    settotal(extracted_integer);
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONgold(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field gold of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field gold of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setgold(extracted_integer);
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONsilver(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field silver of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field silver of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setsilver(extracted_integer);
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::fromJSONbronze(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field bronze of Typemedal_infoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field bronze of Typemedal_infoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setbronze(extracted_integer);
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Typemedal_infoJSON(void) :
        flagHascountry(false),
        flagHascountry_code(false),
        flagHasioc_code(false),
        flagHastotal_ranking(false),
        flagHasgold_ranking(false),
        flagHastotal(false),
        flagHasgold(false),
        flagHassilver(false),
        flagHasbronze(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::~Typemedal_infoJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hascountry(void) const
  {
    return flagHascountry;
  }

std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getcountry(void)
  {
    assert(flagHascountry);
    return storecountry;
  }

const std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getcountry(void) const
  {
    assert(flagHascountry);
    return storecountry;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hascountry_code(void) const
  {
    return flagHascountry_code;
  }

std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getcountry_code(void)
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

const std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getcountry_code(void) const
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hasioc_code(void) const
  {
    return flagHasioc_code;
  }

std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getioc_code(void)
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

const std::string SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getioc_code(void) const
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hastotal_ranking(void) const
  {
    return flagHastotal_ranking;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::gettotal_ranking(void)
  {
    assert(flagHastotal_ranking);
    return storetotal_ranking;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::gettotal_ranking(void) const
  {
    assert(flagHastotal_ranking);
    return storetotal_ranking;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hasgold_ranking(void) const
  {
    return flagHasgold_ranking;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getgold_ranking(void)
  {
    assert(flagHasgold_ranking);
    return storegold_ranking;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getgold_ranking(void) const
  {
    assert(flagHasgold_ranking);
    return storegold_ranking;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hastotal(void) const
  {
    return flagHastotal;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::gettotal(void)
  {
    assert(flagHastotal);
    return storetotal;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::gettotal(void) const
  {
    assert(flagHastotal);
    return storetotal;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hasgold(void) const
  {
    return flagHasgold;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getgold(void)
  {
    assert(flagHasgold);
    return storegold;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getgold(void) const
  {
    assert(flagHasgold);
    return storegold;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hassilver(void) const
  {
    return flagHassilver;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getsilver(void)
  {
    assert(flagHassilver);
    return storesilver;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getsilver(void) const
  {
    assert(flagHassilver);
    return storesilver;
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::hasbronze(void) const
  {
    return flagHasbronze;
  }

OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getbronze(void)
  {
    assert(flagHasbronze);
    return storebronze;
  }

const OInteger SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::getbronze(void) const
  {
    assert(flagHasbronze);
    return storebronze;
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedals_by_countryJSON(const Typemedals_by_countryJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON &SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::operator=(const Typemedals_by_countryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::fromJSONmedal_info(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typemedal_infoJSON *convert_classy = Typemedal_infoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setmedal_info(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedals_by_countryJSON(void) :
        flagHasmedal_info(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::~Typemedals_by_countryJSON(void)
  {
    if (flagHasmedal_info)
      {
        storemedal_info->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::hasmedal_info(void) const
  {
    return flagHasmedal_info;
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON * SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::getmedal_info(void)
  {
    assert(flagHasmedal_info);
    return storemedal_info;
  }

const SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON * SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::getmedal_info(void) const
  {
    assert(flagHasmedal_info);
    return storemedal_info;
  }

SportsOlympicsAPIMedalStandingsJSON::SportsOlympicsAPIMedalStandingsJSON(const SportsOlympicsAPIMedalStandingsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIMedalStandingsJSON &SportsOlympicsAPIMedalStandingsJSON::operator=(const SportsOlympicsAPIMedalStandingsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIMedalStandingsJSON::fromJSONmedals_by_country(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field medals_by_country of SportsOlympicsAPIMedalStandingsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< Typemedals_by_countryJSON * > vector_medals_by_country1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        Typemedals_by_countryJSON *convert_classy = Typemedals_by_countryJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_medals_by_country1[num1] = convert_classy;
      }
    initmedals_by_country();
    for (size_t num2 = 0; num2 < vector_medals_by_country1.size(); ++num2)
        appendmedals_by_country(vector_medals_by_country1[num2]);
    for (size_t num1 = 0; num1 < vector_medals_by_country1.size(); ++num1)
      {
        vector_medals_by_country1[num1]->remove_reference();
      }
  }

SportsOlympicsAPIMedalStandingsJSON::SportsOlympicsAPIMedalStandingsJSON(void) :
        flagHasmedals_by_country(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIMedalStandingsJSON::~SportsOlympicsAPIMedalStandingsJSON(void)
  {
    if (flagHasmedals_by_country)
      {
        for (size_t num4 = 0; num4 < storemedals_by_country.size(); ++num4)
          {
            storemedals_by_country[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIMedalStandingsJSON::hasmedals_by_country(void) const
  {
    return flagHasmedals_by_country;
  }

size_t SportsOlympicsAPIMedalStandingsJSON::countOfmedals_by_country(void) const
  {
    assert(flagHasmedals_by_country);
    return storemedals_by_country.size();
  }

SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON * SportsOlympicsAPIMedalStandingsJSON::elementOfmedals_by_country(size_t element_num)
  {
    assert(flagHasmedals_by_country);
    return storemedals_by_country[element_num];
  }

const SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON * SportsOlympicsAPIMedalStandingsJSON::elementOfmedals_by_country(size_t element_num) const
  {
    assert(flagHasmedals_by_country);
    return storemedals_by_country[element_num];
  }

std::vector< SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON * > SportsOlympicsAPIMedalStandingsJSON::getmedals_by_country(void)
  {
    assert(flagHasmedals_by_country);
    return storemedals_by_country;
  }

const std::vector< SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON * > SportsOlympicsAPIMedalStandingsJSON::getmedals_by_country(void) const
  {
    assert(flagHasmedals_by_country);
    return storemedals_by_country;
  }

char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundtotal_ranking[] = "0";
char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundgold_ranking[] = "0";
char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundtotal[] = "0";
char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundgold[] = "0";
char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundsilver[] = "0";
char SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::Generator::lowerBoundbronze[] = "0";
SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON *SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::Typemedal_infoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typemedal_infoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typemedal_infoJSON>, Typemedal_infoJSON *, bool> generator("Type Typemedal_info", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON *SportsOlympicsAPIMedalStandingsJSON::Typemedals_by_countryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typemedals_by_countryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typemedals_by_countryJSON>, Typemedals_by_countryJSON *, bool> generator("Type Typemedals_by_country", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIMedalStandingsJSON *SportsOlympicsAPIMedalStandingsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsAPIMedalStandingsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIMedalStandingsJSON>, SportsOlympicsAPIMedalStandingsJSON *, bool> generator("Type SportsOlympicsAPIMedalStandings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
