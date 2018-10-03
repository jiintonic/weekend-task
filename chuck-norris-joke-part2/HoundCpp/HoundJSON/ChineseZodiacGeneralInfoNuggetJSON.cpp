/* file "ChineseZodiacGeneralInfoNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ChineseZodiacGeneralInfoNuggetJSON.h"

#include "ChineseZodiacGeneralInfoNuggetJSON.h"


ChineseZodiacGeneralInfoNuggetJSON::ChineseZodiacGeneralInfoNuggetJSON(const ChineseZodiacGeneralInfoNuggetJSON &)
  {
    assert(false);
  }

ChineseZodiacGeneralInfoNuggetJSON &ChineseZodiacGeneralInfoNuggetJSON::operator=(const ChineseZodiacGeneralInfoNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ChineseZodiacGeneralInfoNuggetJSON::extraAdditionalInfoToJSON(void) const
  {
    JSONStringValue *generated_string_AdditionalInfo = new JSONStringValue(storeAdditionalInfo.c_str());
    return generated_string_AdditionalInfo;
  }

void ChineseZodiacGeneralInfoNuggetJSON::fromJSONAdditionalInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AdditionalInfo of ChineseZodiacGeneralInfoNuggetJSON is not a string.");
    setAdditionalInfo(std::string(json_string->getData()));
  }

ChineseZodiacGeneralInfoNuggetJSON::ChineseZodiacGeneralInfoNuggetJSON(void) :
        flagHasAdditionalInfo(false)
  {
    extraIndex = create_string_index();
  }

ChineseZodiacGeneralInfoNuggetJSON::~ChineseZodiacGeneralInfoNuggetJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ChineseZodiacGeneralInfoNuggetJSON::getChineseZodiacInfoNuggetKind(void) const
  {
    return "ChineseZodiacGeneralInfoNugget";
  }

bool ChineseZodiacGeneralInfoNuggetJSON::hasAdditionalInfo(void) const
  {
    return flagHasAdditionalInfo;
  }

std::string ChineseZodiacGeneralInfoNuggetJSON::getAdditionalInfo(void)
  {
    assert(flagHasAdditionalInfo);
    return storeAdditionalInfo;
  }

const std::string ChineseZodiacGeneralInfoNuggetJSON::getAdditionalInfo(void) const
  {
    assert(flagHasAdditionalInfo);
    return storeAdditionalInfo;
  }

ChineseZodiacGeneralInfoNuggetJSON *ChineseZodiacGeneralInfoNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ChineseZodiacGeneralInfoNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ChineseZodiacGeneralInfoNuggetJSON>, ChineseZodiacGeneralInfoNuggetJSON *, bool> generator("Type ChineseZodiacGeneralInfoNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
