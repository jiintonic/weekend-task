/* file "AreaCodeQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AreaCodeQueryStateJSON.h"

#include "AreaCodeQueryStateJSON.h"


AreaCodeQueryStateJSON::TypeQueryType AreaCodeQueryStateJSON::stringToQueryType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "reaCodeOfGivenCity") == 0)
                return QueryType_AreaCodeOfGivenCity;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "ityOfGivenAreaCode") == 0)
                return QueryType_CityOfGivenAreaCode;
            break;
        default:
            break;
      }
    throw("The value for field `QueryType' is not one of the legal values.");
  }

const char *AreaCodeQueryStateJSON::stringFromQueryType(TypeQueryType the_enum)
  {
    switch (the_enum)
      {
        case QueryType_CityOfGivenAreaCode:
            return "CityOfGivenAreaCode";
        case QueryType_AreaCodeOfGivenCity:
            return "AreaCodeOfGivenCity";
        default:
            assert(false);
            return NULL;
      }
  }

AreaCodeQueryStateJSON::AreaCodeQueryStateJSON(const AreaCodeQueryStateJSON &)
  {
    assert(false);
  }

AreaCodeQueryStateJSON &AreaCodeQueryStateJSON::operator=(const AreaCodeQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AreaCodeQueryStateJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryType of AreaCodeQueryStateJSON is not a string.");
    TypeQueryType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "reaCodeOfGivenCity") == 0)
                  {
                    the_enum = QueryType_AreaCodeOfGivenCity;
                    goto enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ityOfGivenAreaCode") == 0)
                  {
                    the_enum = QueryType_CityOfGivenAreaCode;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field QueryType of AreaCodeQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setQueryType(the_enum);
  }

void AreaCodeQueryStateJSON::fromJSONAreaCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AreaCode of AreaCodeQueryStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AreaCode of AreaCodeQueryStateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAreaCode(extracted_integer);
  }

void AreaCodeQueryStateJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of AreaCodeQueryStateJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

AreaCodeQueryStateJSON::AreaCodeQueryStateJSON(void) :
        flagHasQueryType(false),
        flagHasAreaCode(false),
        flagHasCity(false)
  {
    extraIndex = create_string_index();
  }

AreaCodeQueryStateJSON::~AreaCodeQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AreaCodeQueryStateJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

AreaCodeQueryStateJSON::TypeQueryType AreaCodeQueryStateJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const AreaCodeQueryStateJSON::TypeQueryType AreaCodeQueryStateJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const char *AreaCodeQueryStateJSON::getQueryTypeAsChars(void) const
  {
    return stringFromQueryType(getQueryType());
  }

std::string AreaCodeQueryStateJSON::getQueryTypeAsString(void) const
  {
    return stringFromQueryType(getQueryType());
  }

bool AreaCodeQueryStateJSON::hasAreaCode(void) const
  {
    return flagHasAreaCode;
  }

OInteger AreaCodeQueryStateJSON::getAreaCode(void)
  {
    assert(flagHasAreaCode);
    return storeAreaCode;
  }

const OInteger AreaCodeQueryStateJSON::getAreaCode(void) const
  {
    assert(flagHasAreaCode);
    return storeAreaCode;
  }

bool AreaCodeQueryStateJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string AreaCodeQueryStateJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string AreaCodeQueryStateJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

AreaCodeQueryStateJSON *AreaCodeQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AreaCodeQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AreaCodeQueryStateJSON>, AreaCodeQueryStateJSON *, bool> generator("Type AreaCodeQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
