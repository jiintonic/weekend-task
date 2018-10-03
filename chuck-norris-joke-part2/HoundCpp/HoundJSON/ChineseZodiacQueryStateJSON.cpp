/* file "ChineseZodiacQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacQueryStateJSON.h"

#include "ChineseZodiacQueryStateJSON.h"


ChineseZodiacQueryStateJSON::TypeQueryType ChineseZodiacQueryStateJSON::stringToQueryType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'G':
            if (strcmp(&(chars[1]), "eneralInformation") == 0)
                return QueryType_GeneralInformation;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "ignOfGiven", 10) == 0)
              {
                switch ((unsigned char)(chars[11]))
                  {
                    case 'S':
                        if (strcmp(&(chars[12]), "ign") == 0)
                            return QueryType_SignOfGivenSign;
                        break;
                    case 'Y':
                        if (strcmp(&(chars[12]), "ear") == 0)
                            return QueryType_SignOfGivenYear;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "earOfGivenSign") == 0)
                return QueryType_YearOfGivenSign;
            break;
        default:
            break;
      }
    throw("The value for field `QueryType' is not one of the legal values.");
  }

const char *ChineseZodiacQueryStateJSON::stringFromQueryType(TypeQueryType the_enum)
  {
    switch (the_enum)
      {
        case QueryType_GeneralInformation:
            return "GeneralInformation";
        case QueryType_SignOfGivenYear:
            return "SignOfGivenYear";
        case QueryType_YearOfGivenSign:
            return "YearOfGivenSign";
        case QueryType_SignOfGivenSign:
            return "SignOfGivenSign";
        default:
            assert(false);
            return NULL;
      }
  }

ChineseZodiacQueryStateJSON::ChineseZodiacQueryStateJSON(const ChineseZodiacQueryStateJSON &)
  {
    assert(false);
  }

ChineseZodiacQueryStateJSON &ChineseZodiacQueryStateJSON::operator=(const ChineseZodiacQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ChineseZodiacQueryStateJSON::fromJSONQueryType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryType of ChineseZodiacQueryStateJSON is not a string.");
    TypeQueryType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "eneralInformation") == 0)
                  {
                    the_enum = QueryType_GeneralInformation;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "ignOfGiven", 10) == 0)
              {
                switch ((unsigned char)(json_string->getData()[11]))
                  {
                    case 'S':
                        if (strcmp(&(json_string->getData()[12]), "ign") == 0)
                              {
                                the_enum = QueryType_SignOfGivenSign;
                                goto enum_is_done;
                              }
                        break;
                    case 'Y':
                        if (strcmp(&(json_string->getData()[12]), "ear") == 0)
                              {
                                the_enum = QueryType_SignOfGivenYear;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "earOfGivenSign") == 0)
                  {
                    the_enum = QueryType_YearOfGivenSign;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field QueryType of ChineseZodiacQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setQueryType(the_enum);
  }

void ChineseZodiacQueryStateJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of ChineseZodiacQueryStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of ChineseZodiacQueryStateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void ChineseZodiacQueryStateJSON::fromJSONZodiacSign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ZodiacSign of ChineseZodiacQueryStateJSON is not a string.");
    setZodiacSign(std::string(json_string->getData()));
  }

void ChineseZodiacQueryStateJSON::fromJSONOrdinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Ordinal of ChineseZodiacQueryStateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Ordinal of ChineseZodiacQueryStateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOrdinal(extracted_integer);
  }

void ChineseZodiacQueryStateJSON::fromJSONYesOrNo(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field YesOrNo of ChineseZodiacQueryStateJSON is not true for false.");
          }
      }
    setYesOrNo(the_bool);
  }

ChineseZodiacQueryStateJSON::ChineseZodiacQueryStateJSON(void) :
        flagHasQueryType(false),
        flagHasYear(false),
        flagHasZodiacSign(false),
        flagHasOrdinal(false),
        flagHasYesOrNo(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacQueryStateJSON::~ChineseZodiacQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ChineseZodiacQueryStateJSON::hasQueryType(void) const
  {
    return flagHasQueryType;
  }

ChineseZodiacQueryStateJSON::TypeQueryType ChineseZodiacQueryStateJSON::getQueryType(void)
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const ChineseZodiacQueryStateJSON::TypeQueryType ChineseZodiacQueryStateJSON::getQueryType(void) const
  {
    assert(flagHasQueryType);
    return storeQueryType;
  }

const char *ChineseZodiacQueryStateJSON::getQueryTypeAsChars(void) const
  {
    return stringFromQueryType(getQueryType());
  }

std::string ChineseZodiacQueryStateJSON::getQueryTypeAsString(void) const
  {
    return stringFromQueryType(getQueryType());
  }

bool ChineseZodiacQueryStateJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger ChineseZodiacQueryStateJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger ChineseZodiacQueryStateJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool ChineseZodiacQueryStateJSON::hasZodiacSign(void) const
  {
    return flagHasZodiacSign;
  }

std::string ChineseZodiacQueryStateJSON::getZodiacSign(void)
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

const std::string ChineseZodiacQueryStateJSON::getZodiacSign(void) const
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

bool ChineseZodiacQueryStateJSON::hasOrdinal(void) const
  {
    return flagHasOrdinal;
  }

OInteger ChineseZodiacQueryStateJSON::getOrdinal(void)
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

const OInteger ChineseZodiacQueryStateJSON::getOrdinal(void) const
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

bool ChineseZodiacQueryStateJSON::hasYesOrNo(void) const
  {
    return flagHasYesOrNo;
  }

bool ChineseZodiacQueryStateJSON::getYesOrNo(void)
  {
    assert(flagHasYesOrNo);
    return storeYesOrNo;
  }

const bool ChineseZodiacQueryStateJSON::getYesOrNo(void) const
  {
    assert(flagHasYesOrNo);
    return storeYesOrNo;
  }

ChineseZodiacQueryStateJSON *ChineseZodiacQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacQueryStateJSON>, ChineseZodiacQueryStateJSON *, bool> generator("Type ChineseZodiacQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
