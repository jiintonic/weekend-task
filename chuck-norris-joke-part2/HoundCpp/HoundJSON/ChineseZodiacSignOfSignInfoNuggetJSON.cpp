/* file "ChineseZodiacSignOfSignInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacSignOfSignInfoNuggetJSON.h"

#include "ChineseZodiacSignOfSignInfoNuggetJSON.h"


ChineseZodiacSignOfSignInfoNuggetJSON::ChineseZodiacSignOfSignInfoNuggetJSON(const ChineseZodiacSignOfSignInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacSignOfSignInfoNuggetJSON &ChineseZodiacSignOfSignInfoNuggetJSON::operator=(const ChineseZodiacSignOfSignInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ChineseZodiacSignOfSignInfoNuggetJSON::extraResultSignToJSON(void) const
  {
    JSONStringValue *generated_string_ResultSign = new JSONStringValue(storeResultSign.c_str());
    return generated_string_ResultSign;
  }

JSONValue *ChineseZodiacSignOfSignInfoNuggetJSON::extraQuerySignToJSON(void) const
  {
    JSONStringValue *generated_string_QuerySign = new JSONStringValue(storeQuerySign.c_str());
    return generated_string_QuerySign;
  }

JSONValue *ChineseZodiacSignOfSignInfoNuggetJSON::extraOrdinalToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Ordinal = new JSONIntegerValue(storeOrdinal.get_o_integer());
    return generated_integer_Ordinal;
  }

JSONValue *ChineseZodiacSignOfSignInfoNuggetJSON::extraCycledToJSON(void) const
  {
    JSONValue *generated_boolean_Cycled = (storeCycled ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Cycled;
  }

void ChineseZodiacSignOfSignInfoNuggetJSON::fromJSONResultSign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultSign of ChineseZodiacSignOfSignInfoNuggetJSON is not a string.");
    setResultSign(std::string(json_string->getData()));
  }

void ChineseZodiacSignOfSignInfoNuggetJSON::fromJSONQuerySign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QuerySign of ChineseZodiacSignOfSignInfoNuggetJSON is not a string.");
    setQuerySign(std::string(json_string->getData()));
  }

void ChineseZodiacSignOfSignInfoNuggetJSON::fromJSONOrdinal(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Ordinal of ChineseZodiacSignOfSignInfoNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Ordinal of ChineseZodiacSignOfSignInfoNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOrdinal(extracted_integer);
  }

void ChineseZodiacSignOfSignInfoNuggetJSON::fromJSONCycled(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Cycled of ChineseZodiacSignOfSignInfoNuggetJSON is not true for false.");
          }
      }
    setCycled(the_bool);
  }

ChineseZodiacSignOfSignInfoNuggetJSON::ChineseZodiacSignOfSignInfoNuggetJSON(void) :
        flagHasResultSign(false),
        flagHasQuerySign(false),
        flagHasOrdinal(false),
        flagHasCycled(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacSignOfSignInfoNuggetJSON::~ChineseZodiacSignOfSignInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ChineseZodiacSignOfSignInfoNuggetJSON::getChineseZodiacInfoNuggetKind(void) const
  {
    return "ChineseZodiacSignOfSignInfoNugget";
  }

bool ChineseZodiacSignOfSignInfoNuggetJSON::hasResultSign(void) const
  {
    return flagHasResultSign;
  }

std::string ChineseZodiacSignOfSignInfoNuggetJSON::getResultSign(void)
  {
    assert(flagHasResultSign);
    return storeResultSign;
  }

const std::string ChineseZodiacSignOfSignInfoNuggetJSON::getResultSign(void) const
  {
    assert(flagHasResultSign);
    return storeResultSign;
  }

bool ChineseZodiacSignOfSignInfoNuggetJSON::hasQuerySign(void) const
  {
    return flagHasQuerySign;
  }

std::string ChineseZodiacSignOfSignInfoNuggetJSON::getQuerySign(void)
  {
    assert(flagHasQuerySign);
    return storeQuerySign;
  }

const std::string ChineseZodiacSignOfSignInfoNuggetJSON::getQuerySign(void) const
  {
    assert(flagHasQuerySign);
    return storeQuerySign;
  }

bool ChineseZodiacSignOfSignInfoNuggetJSON::hasOrdinal(void) const
  {
    return flagHasOrdinal;
  }

OInteger ChineseZodiacSignOfSignInfoNuggetJSON::getOrdinal(void)
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

const OInteger ChineseZodiacSignOfSignInfoNuggetJSON::getOrdinal(void) const
  {
    assert(flagHasOrdinal);
    return storeOrdinal;
  }

bool ChineseZodiacSignOfSignInfoNuggetJSON::hasCycled(void) const
  {
    return flagHasCycled;
  }

bool ChineseZodiacSignOfSignInfoNuggetJSON::getCycled(void)
  {
    assert(flagHasCycled);
    return storeCycled;
  }

const bool ChineseZodiacSignOfSignInfoNuggetJSON::getCycled(void) const
  {
    assert(flagHasCycled);
    return storeCycled;
  }

ChineseZodiacSignOfSignInfoNuggetJSON *ChineseZodiacSignOfSignInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacSignOfSignInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacSignOfSignInfoNuggetJSON>, ChineseZodiacSignOfSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacSignOfSignInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
