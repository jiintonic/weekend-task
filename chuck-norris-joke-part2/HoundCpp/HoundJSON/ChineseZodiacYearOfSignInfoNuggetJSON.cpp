/* file "ChineseZodiacYearOfSignInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacYearOfSignInfoNuggetJSON.h"

#include "ChineseZodiacYearOfSignInfoNuggetJSON.h"


ChineseZodiacYearOfSignInfoNuggetJSON::ChineseZodiacYearOfSignInfoNuggetJSON(const ChineseZodiacYearOfSignInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacYearOfSignInfoNuggetJSON &ChineseZodiacYearOfSignInfoNuggetJSON::operator=(const ChineseZodiacYearOfSignInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ChineseZodiacYearOfSignInfoNuggetJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

JSONValue *ChineseZodiacYearOfSignInfoNuggetJSON::extraChineseYearToJSON(void) const
  {
    JSONStringValue *generated_string_ChineseYear = new JSONStringValue(storeChineseYear.c_str());
    return generated_string_ChineseYear;
  }

JSONValue *ChineseZodiacYearOfSignInfoNuggetJSON::extraZodiacSignToJSON(void) const
  {
    JSONStringValue *generated_string_ZodiacSign = new JSONStringValue(storeZodiacSign.c_str());
    return generated_string_ZodiacSign;
  }

JSONValue *ChineseZodiacYearOfSignInfoNuggetJSON::extraOrdinalToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Ordinal = new JSONIntegerValue(storeOrdinal.get_o_integer());
    return generated_integer_Ordinal;
  }

JSONValue *ChineseZodiacYearOfSignInfoNuggetJSON::extraFromNowToJSON(void) const
  {
    JSONIntegerValue *generated_integer_FromNow = new JSONIntegerValue(storeFromNow.get_o_integer());
    return generated_integer_FromNow;
  }

void ChineseZodiacYearOfSignInfoNuggetJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of ChineseZodiacYearOfSignInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of ChineseZodiacYearOfSignInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void ChineseZodiacYearOfSignInfoNuggetJSON::fromJSONChineseYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChineseYear of ChineseZodiacYearOfSignInfoNuggetJSON is not a string.");
    setChineseYear(std::string(json_string->getData()));
  }

void ChineseZodiacYearOfSignInfoNuggetJSON::fromJSONZodiacSign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ZodiacSign of ChineseZodiacYearOfSignInfoNuggetJSON is not a string.");
    setZodiacSign(std::string(json_string->getData()));
  }

void ChineseZodiacYearOfSignInfoNuggetJSON::fromJSONOrdinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Ordinal of ChineseZodiacYearOfSignInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Ordinal of ChineseZodiacYearOfSignInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOrdinal(extracted_integer);
  }

void ChineseZodiacYearOfSignInfoNuggetJSON::fromJSONFromNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FromNow of ChineseZodiacYearOfSignInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FromNow of ChineseZodiacYearOfSignInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFromNow(extracted_integer);
  }

ChineseZodiacYearOfSignInfoNuggetJSON::ChineseZodiacYearOfSignInfoNuggetJSON(void) :
        flagHasYear(false),
        flagHasChineseYear(false),
        flagHasZodiacSign(false),
        flagHasOrdinal(false),
        flagHasFromNow(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacYearOfSignInfoNuggetJSON::~ChineseZodiacYearOfSignInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ChineseZodiacYearOfSignInfoNuggetJSON::getChineseZodiacInfoNuggetKind(void) const
  {
    return "ChineseZodiacYearOfSignInfoNugget";
  }

bool ChineseZodiacYearOfSignInfoNuggetJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool ChineseZodiacYearOfSignInfoNuggetJSON::hasChineseYear(void) const
  {
    return flagHasChineseYear;
  }

std::string ChineseZodiacYearOfSignInfoNuggetJSON::getChineseYear(void)
  {
    assert(flagHasChineseYear);
    return storeChineseYear;
  }

const std::string ChineseZodiacYearOfSignInfoNuggetJSON::getChineseYear(void) const
  {
    assert(flagHasChineseYear);
    return storeChineseYear;
  }

bool ChineseZodiacYearOfSignInfoNuggetJSON::hasZodiacSign(void) const
  {
    return flagHasZodiacSign;
  }

std::string ChineseZodiacYearOfSignInfoNuggetJSON::getZodiacSign(void)
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

const std::string ChineseZodiacYearOfSignInfoNuggetJSON::getZodiacSign(void) const
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

bool ChineseZodiacYearOfSignInfoNuggetJSON::hasOrdinal(void) const
  {
    return flagHasOrdinal;
  }

OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getOrdinal(void)
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

const OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getOrdinal(void) const
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

bool ChineseZodiacYearOfSignInfoNuggetJSON::hasFromNow(void) const
  {
    return flagHasFromNow;
  }

OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getFromNow(void)
  {
    assert(flagHasFromNow);
    return storeFromNow;
  }

const OInteger ChineseZodiacYearOfSignInfoNuggetJSON::getFromNow(void) const
  {
    assert(flagHasFromNow);
    return storeFromNow;
  }

ChineseZodiacYearOfSignInfoNuggetJSON *ChineseZodiacYearOfSignInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacYearOfSignInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacYearOfSignInfoNuggetJSON>, ChineseZodiacYearOfSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacYearOfSignInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
