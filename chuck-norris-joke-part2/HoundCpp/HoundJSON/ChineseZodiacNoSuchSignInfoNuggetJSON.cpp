/* file "ChineseZodiacNoSuchSignInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacNoSuchSignInfoNuggetJSON.h"

#include "ChineseZodiacNoSuchSignInfoNuggetJSON.h"


ChineseZodiacNoSuchSignInfoNuggetJSON::ChineseZodiacNoSuchSignInfoNuggetJSON(const ChineseZodiacNoSuchSignInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacNoSuchSignInfoNuggetJSON &ChineseZodiacNoSuchSignInfoNuggetJSON::operator=(const ChineseZodiacNoSuchSignInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ChineseZodiacNoSuchSignInfoNuggetJSON::extraInputZodiacSignToJSON(void) const
  {
    JSONStringValue *generated_string_InputZodiacSign = new JSONStringValue(storeInputZodiacSign.c_str());
    return generated_string_InputZodiacSign;
  }

void ChineseZodiacNoSuchSignInfoNuggetJSON::fromJSONInputZodiacSign(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputZodiacSign of ChineseZodiacNoSuchSignInfoNuggetJSON is not a string.");
    setInputZodiacSign(std::string(json_string->getData()));
  }

ChineseZodiacNoSuchSignInfoNuggetJSON::ChineseZodiacNoSuchSignInfoNuggetJSON(void) :
        flagHasInputZodiacSign(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacNoSuchSignInfoNuggetJSON::~ChineseZodiacNoSuchSignInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ChineseZodiacNoSuchSignInfoNuggetJSON::getChineseZodiacInfoNuggetKind(void) const
  {
    return "ChineseZodiacNoSuchSignInfoNugget";
  }

bool ChineseZodiacNoSuchSignInfoNuggetJSON::hasInputZodiacSign(void) const
  {
    return flagHasInputZodiacSign;
  }

std::string ChineseZodiacNoSuchSignInfoNuggetJSON::getInputZodiacSign(void)
  {
    assert(flagHasInputZodiacSign);
    return storeInputZodiacSign;
  }

const std::string ChineseZodiacNoSuchSignInfoNuggetJSON::getInputZodiacSign(void) const
  {
    assert(flagHasInputZodiacSign);
    return storeInputZodiacSign;
  }

ChineseZodiacNoSuchSignInfoNuggetJSON *ChineseZodiacNoSuchSignInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacNoSuchSignInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacNoSuchSignInfoNuggetJSON>, ChineseZodiacNoSuchSignInfoNuggetJSON *, bool> generator("Type ChineseZodiacNoSuchSignInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
