/* file "ChineseZodiacSignOfYearInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacSignOfYearInfoNuggetJSON.h"

#include "ChineseZodiacSignOfYearInfoNuggetJSON.h"


ChineseZodiacSignOfYearInfoNuggetJSON::ChineseZodiacSignOfYearInfoNuggetJSON(const ChineseZodiacSignOfYearInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacSignOfYearInfoNuggetJSON &ChineseZodiacSignOfYearInfoNuggetJSON::operator=(const ChineseZodiacSignOfYearInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ChineseZodiacSignOfYearInfoNuggetJSON::extraYearToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Year = new JSONIntegerValue(storeYear.get_o_integer());
    return generated_integer_Year;
  }

JSONValue *ChineseZodiacSignOfYearInfoNuggetJSON::extraChineseYearToJSON(void) const
  {
    JSONStringValue *generated_string_ChineseYear = new JSONStringValue(storeChineseYear.c_str());
    return generated_string_ChineseYear;
  }

JSONValue *ChineseZodiacSignOfYearInfoNuggetJSON::extraZodiacSignToJSON(void) const
  {
    JSONStringValue *generated_string_ZodiacSign = new JSONStringValue(storeZodiacSign.c_str());
    return generated_string_ZodiacSign;
  }

JSONValue *ChineseZodiacSignOfYearInfoNuggetJSON::extraTenseIndicatorToJSON(void) const
  {
    JSONIntegerValue *generated_integer_TenseIndicator = new JSONIntegerValue(storeTenseIndicator.get_o_integer());
    return generated_integer_TenseIndicator;
  }

JSONValue *ChineseZodiacSignOfYearInfoNuggetJSON::extraYesOrNoToJSON(void) const
  {
    JSONValue *generated_boolean_YesOrNo = (storeYesOrNo ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_YesOrNo;
  }

void ChineseZodiacSignOfYearInfoNuggetJSON::fromJSONYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Year of ChineseZodiacSignOfYearInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Year of ChineseZodiacSignOfYearInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setYear(extracted_integer);
  }

void ChineseZodiacSignOfYearInfoNuggetJSON::fromJSONChineseYear(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ChineseYear of ChineseZodiacSignOfYearInfoNuggetJSON is not a string.");
    setChineseYear(std::string(json_string->getData()));
  }

void ChineseZodiacSignOfYearInfoNuggetJSON::fromJSONZodiacSign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ZodiacSign of ChineseZodiacSignOfYearInfoNuggetJSON is not a string.");
    setZodiacSign(std::string(json_string->getData()));
  }

void ChineseZodiacSignOfYearInfoNuggetJSON::fromJSONTenseIndicator(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TenseIndicator of ChineseZodiacSignOfYearInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TenseIndicator of ChineseZodiacSignOfYearInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTenseIndicator(extracted_integer);
  }

void ChineseZodiacSignOfYearInfoNuggetJSON::fromJSONYesOrNo(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field YesOrNo of ChineseZodiacSignOfYearInfoNuggetJSON is not true for false.");
          }
      }
    setYesOrNo(the_bool);
  }

ChineseZodiacSignOfYearInfoNuggetJSON::ChineseZodiacSignOfYearInfoNuggetJSON(void) :
        flagHasYear(false),
        flagHasChineseYear(false),
        flagHasZodiacSign(false),
        flagHasTenseIndicator(false),
        flagHasYesOrNo(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacSignOfYearInfoNuggetJSON::~ChineseZodiacSignOfYearInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ChineseZodiacSignOfYearInfoNuggetJSON::getChineseZodiacInfoNuggetKind(void) const
  {
    return "ChineseZodiacSignOfYearInfoNugget";
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::hasYear(void) const
  {
    return flagHasYear;
  }

OInteger ChineseZodiacSignOfYearInfoNuggetJSON::getYear(void)
  {
    assert(flagHasYear);
    return storeYear;
  }

const OInteger ChineseZodiacSignOfYearInfoNuggetJSON::getYear(void) const
  {
    assert(flagHasYear);
    return storeYear;
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::hasChineseYear(void) const
  {
    return flagHasChineseYear;
  }

std::string ChineseZodiacSignOfYearInfoNuggetJSON::getChineseYear(void)
  {
    assert(flagHasChineseYear);
    return storeChineseYear;
  }

const std::string ChineseZodiacSignOfYearInfoNuggetJSON::getChineseYear(void) const
  {
    assert(flagHasChineseYear);
    return storeChineseYear;
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::hasZodiacSign(void) const
  {
    return flagHasZodiacSign;
  }

std::string ChineseZodiacSignOfYearInfoNuggetJSON::getZodiacSign(void)
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

const std::string ChineseZodiacSignOfYearInfoNuggetJSON::getZodiacSign(void) const
  {
    assert(flagHasZodiacSign);
    return storeZodiacSign;
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::hasTenseIndicator(void) const
  {
    return flagHasTenseIndicator;
  }

OInteger ChineseZodiacSignOfYearInfoNuggetJSON::getTenseIndicator(void)
  {
    assert(flagHasTenseIndicator);
    return storeTenseIndicator;
  }

const OInteger ChineseZodiacSignOfYearInfoNuggetJSON::getTenseIndicator(void) const
  {
    assert(flagHasTenseIndicator);
    return storeTenseIndicator;
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::hasYesOrNo(void) const
  {
    return flagHasYesOrNo;
  }

bool ChineseZodiacSignOfYearInfoNuggetJSON::getYesOrNo(void)
  {
    assert(flagHasYesOrNo);
    return storeYesOrNo;
  }

const bool ChineseZodiacSignOfYearInfoNuggetJSON::getYesOrNo(void) const
  {
    assert(flagHasYesOrNo);
    return storeYesOrNo;
  }

char ChineseZodiacSignOfYearInfoNuggetJSON::Generator::lowerBoundTenseIndicator[] = "-1";
char ChineseZodiacSignOfYearInfoNuggetJSON::Generator::upperBoundTenseIndicator[] = "1";
ChineseZodiacSignOfYearInfoNuggetJSON *ChineseZodiacSignOfYearInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacSignOfYearInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfYearInfoNuggetJSON>, ChineseZodiacSignOfYearInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfYearInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
