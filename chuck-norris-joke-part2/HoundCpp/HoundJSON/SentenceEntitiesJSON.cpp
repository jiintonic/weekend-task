/* file "SentenceEntitiesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SentenceEntitiesJSON.h"

#include "SentenceEntitiesJSON.h"


SentenceEntitiesJSON::SentenceEntitiesJSON(const SentenceEntitiesJSON &)
  {
    assert(false);
  }

SentenceEntitiesJSON &SentenceEntitiesJSON::operator=(const SentenceEntitiesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SentenceEntitiesJSON::fromJSONWho(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Who of SentenceEntitiesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Who of SentenceEntitiesJSON has too few elements.");
    std::vector< WhoJSON * > vector_Who1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        WhoJSON *convert_classy = WhoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Who1[num1] = convert_classy;
      }
    assert(vector_Who1.size() >= 1);
    initWho();
    for (size_t num6 = 0; num6 < vector_Who1.size(); ++num6)
        appendWho(vector_Who1[num6]);
    for (size_t num1 = 0; num1 < vector_Who1.size(); ++num1)
      {
        vector_Who1[num1]->remove_reference();
      }
  }

void SentenceEntitiesJSON::fromJSONSpecialPersonIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SpecialPersonIndex of SentenceEntitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SpecialPersonIndex of SentenceEntitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSpecialPersonIndex(extracted_integer);
  }

void SentenceEntitiesJSON::fromJSONWhen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field When of SentenceEntitiesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field When of SentenceEntitiesJSON has too few elements.");
    std::vector< WhenJSON * > vector_When1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        WhenJSON *convert_classy = WhenJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_When1[num1] = convert_classy;
      }
    assert(vector_When1.size() >= 1);
    initWhen();
    for (size_t num7 = 0; num7 < vector_When1.size(); ++num7)
        appendWhen(vector_When1[num7]);
    for (size_t num1 = 0; num1 < vector_When1.size(); ++num1)
      {
        vector_When1[num1]->remove_reference();
      }
  }

void SentenceEntitiesJSON::fromJSONSpecialTimeIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SpecialTimeIndex of SentenceEntitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SpecialTimeIndex of SentenceEntitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSpecialTimeIndex(extracted_integer);
  }

void SentenceEntitiesJSON::fromJSONWhere(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Where of SentenceEntitiesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Where of SentenceEntitiesJSON has too few elements.");
    std::vector< MapLocationJSON * > vector_Where1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Where1[num1] = convert_classy;
      }
    assert(vector_Where1.size() >= 1);
    initWhere();
    for (size_t num8 = 0; num8 < vector_Where1.size(); ++num8)
        appendWhere(vector_Where1[num8]);
    for (size_t num1 = 0; num1 < vector_Where1.size(); ++num1)
      {
        vector_Where1[num1]->remove_reference();
      }
  }

void SentenceEntitiesJSON::fromJSONSpecialPlaceIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SpecialPlaceIndex of SentenceEntitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SpecialPlaceIndex of SentenceEntitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSpecialPlaceIndex(extracted_integer);
  }

void SentenceEntitiesJSON::fromJSONHowMuch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HowMuch of SentenceEntitiesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field HowMuch of SentenceEntitiesJSON has too few elements.");
    std::vector< AmountJSON * > vector_HowMuch1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        AmountJSON *convert_classy = AmountJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HowMuch1[num1] = convert_classy;
      }
    assert(vector_HowMuch1.size() >= 1);
    initHowMuch();
    for (size_t num9 = 0; num9 < vector_HowMuch1.size(); ++num9)
        appendHowMuch(vector_HowMuch1[num9]);
    for (size_t num1 = 0; num1 < vector_HowMuch1.size(); ++num1)
      {
        vector_HowMuch1[num1]->remove_reference();
      }
  }

void SentenceEntitiesJSON::fromJSONSpecialAmountIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SpecialAmountIndex of SentenceEntitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SpecialAmountIndex of SentenceEntitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSpecialAmountIndex(extracted_integer);
  }

void SentenceEntitiesJSON::fromJSONWhatWord(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WhatWord of SentenceEntitiesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field WhatWord of SentenceEntitiesJSON has too few elements.");
    std::vector< WhatWordJSON * > vector_WhatWord1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        WhatWordJSON *convert_classy = WhatWordJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_WhatWord1[num1] = convert_classy;
      }
    assert(vector_WhatWord1.size() >= 1);
    initWhatWord();
    for (size_t num10 = 0; num10 < vector_WhatWord1.size(); ++num10)
        appendWhatWord(vector_WhatWord1[num10]);
    for (size_t num1 = 0; num1 < vector_WhatWord1.size(); ++num1)
      {
        vector_WhatWord1[num1]->remove_reference();
      }
  }

void SentenceEntitiesJSON::fromJSONSpecialWhatWordIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SpecialWhatWordIndex of SentenceEntitiesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SpecialWhatWordIndex of SentenceEntitiesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSpecialWhatWordIndex(extracted_integer);
  }

SentenceEntitiesJSON::SentenceEntitiesJSON(void) :
        flagHasWho(false),
        flagHasSpecialPersonIndex(false),
        flagHasWhen(false),
        flagHasSpecialTimeIndex(false),
        flagHasWhere(false),
        flagHasSpecialPlaceIndex(false),
        flagHasHowMuch(false),
        flagHasSpecialAmountIndex(false),
        flagHasWhatWord(false),
        flagHasSpecialWhatWordIndex(false)
  {
    extraIndex = create_string_index();
  }

SentenceEntitiesJSON::~SentenceEntitiesJSON(void)
  {
    if (flagHasWho)
      {
        for (size_t num16 = 0; num16 < storeWho.size(); ++num16)
          {
            storeWho[num16]->remove_reference();
          }
      }
    if (flagHasWhen)
      {
        for (size_t num17 = 0; num17 < storeWhen.size(); ++num17)
          {
            storeWhen[num17]->remove_reference();
          }
      }
    if (flagHasWhere)
      {
        for (size_t num18 = 0; num18 < storeWhere.size(); ++num18)
          {
            storeWhere[num18]->remove_reference();
          }
      }
    if (flagHasHowMuch)
      {
        for (size_t num19 = 0; num19 < storeHowMuch.size(); ++num19)
          {
            storeHowMuch[num19]->remove_reference();
          }
      }
    if (flagHasWhatWord)
      {
        for (size_t num20 = 0; num20 < storeWhatWord.size(); ++num20)
          {
            storeWhatWord[num20]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SentenceEntitiesJSON::hasWho(void) const
  {
    return flagHasWho;
  }

size_t SentenceEntitiesJSON::countOfWho(void) const
  {
    assert(flagHasWho);
    return storeWho.size();
  }

WhoJSON * SentenceEntitiesJSON::elementOfWho(size_t element_num)
  {
    assert(flagHasWho);
    return storeWho[element_num];
  }

const WhoJSON * SentenceEntitiesJSON::elementOfWho(size_t element_num) const
  {
    assert(flagHasWho);
    return storeWho[element_num];
  }

std::vector< WhoJSON * > SentenceEntitiesJSON::getWho(void)
  {
    assert(flagHasWho);
    return storeWho;
  }

const std::vector< WhoJSON * > SentenceEntitiesJSON::getWho(void) const
  {
    assert(flagHasWho);
    return storeWho;
  }

bool SentenceEntitiesJSON::hasSpecialPersonIndex(void) const
  {
    return flagHasSpecialPersonIndex;
  }

OInteger SentenceEntitiesJSON::getSpecialPersonIndex(void)
  {
    assert(flagHasSpecialPersonIndex);
    return storeSpecialPersonIndex;
  }

const OInteger SentenceEntitiesJSON::getSpecialPersonIndex(void) const
  {
    assert(flagHasSpecialPersonIndex);
    return storeSpecialPersonIndex;
  }

bool SentenceEntitiesJSON::hasWhen(void) const
  {
    return flagHasWhen;
  }

size_t SentenceEntitiesJSON::countOfWhen(void) const
  {
    assert(flagHasWhen);
    return storeWhen.size();
  }

WhenJSON * SentenceEntitiesJSON::elementOfWhen(size_t element_num)
  {
    assert(flagHasWhen);
    return storeWhen[element_num];
  }

const WhenJSON * SentenceEntitiesJSON::elementOfWhen(size_t element_num) const
  {
    assert(flagHasWhen);
    return storeWhen[element_num];
  }

std::vector< WhenJSON * > SentenceEntitiesJSON::getWhen(void)
  {
    assert(flagHasWhen);
    return storeWhen;
  }

const std::vector< WhenJSON * > SentenceEntitiesJSON::getWhen(void) const
  {
    assert(flagHasWhen);
    return storeWhen;
  }

bool SentenceEntitiesJSON::hasSpecialTimeIndex(void) const
  {
    return flagHasSpecialTimeIndex;
  }

OInteger SentenceEntitiesJSON::getSpecialTimeIndex(void)
  {
    assert(flagHasSpecialTimeIndex);
    return storeSpecialTimeIndex;
  }

const OInteger SentenceEntitiesJSON::getSpecialTimeIndex(void) const
  {
    assert(flagHasSpecialTimeIndex);
    return storeSpecialTimeIndex;
  }

bool SentenceEntitiesJSON::hasWhere(void) const
  {
    return flagHasWhere;
  }

size_t SentenceEntitiesJSON::countOfWhere(void) const
  {
    assert(flagHasWhere);
    return storeWhere.size();
  }

MapLocationJSON * SentenceEntitiesJSON::elementOfWhere(size_t element_num)
  {
    assert(flagHasWhere);
    return storeWhere[element_num];
  }

const MapLocationJSON * SentenceEntitiesJSON::elementOfWhere(size_t element_num) const
  {
    assert(flagHasWhere);
    return storeWhere[element_num];
  }

std::vector< MapLocationJSON * > SentenceEntitiesJSON::getWhere(void)
  {
    assert(flagHasWhere);
    return storeWhere;
  }

const std::vector< MapLocationJSON * > SentenceEntitiesJSON::getWhere(void) const
  {
    assert(flagHasWhere);
    return storeWhere;
  }

bool SentenceEntitiesJSON::hasSpecialPlaceIndex(void) const
  {
    return flagHasSpecialPlaceIndex;
  }

OInteger SentenceEntitiesJSON::getSpecialPlaceIndex(void)
  {
    assert(flagHasSpecialPlaceIndex);
    return storeSpecialPlaceIndex;
  }

const OInteger SentenceEntitiesJSON::getSpecialPlaceIndex(void) const
  {
    assert(flagHasSpecialPlaceIndex);
    return storeSpecialPlaceIndex;
  }

bool SentenceEntitiesJSON::hasHowMuch(void) const
  {
    return flagHasHowMuch;
  }

size_t SentenceEntitiesJSON::countOfHowMuch(void) const
  {
    assert(flagHasHowMuch);
    return storeHowMuch.size();
  }

AmountJSON * SentenceEntitiesJSON::elementOfHowMuch(size_t element_num)
  {
    assert(flagHasHowMuch);
    return storeHowMuch[element_num];
  }

const AmountJSON * SentenceEntitiesJSON::elementOfHowMuch(size_t element_num) const
  {
    assert(flagHasHowMuch);
    return storeHowMuch[element_num];
  }

std::vector< AmountJSON * > SentenceEntitiesJSON::getHowMuch(void)
  {
    assert(flagHasHowMuch);
    return storeHowMuch;
  }

const std::vector< AmountJSON * > SentenceEntitiesJSON::getHowMuch(void) const
  {
    assert(flagHasHowMuch);
    return storeHowMuch;
  }

bool SentenceEntitiesJSON::hasSpecialAmountIndex(void) const
  {
    return flagHasSpecialAmountIndex;
  }

OInteger SentenceEntitiesJSON::getSpecialAmountIndex(void)
  {
    assert(flagHasSpecialAmountIndex);
    return storeSpecialAmountIndex;
  }

const OInteger SentenceEntitiesJSON::getSpecialAmountIndex(void) const
  {
    assert(flagHasSpecialAmountIndex);
    return storeSpecialAmountIndex;
  }

bool SentenceEntitiesJSON::hasWhatWord(void) const
  {
    return flagHasWhatWord;
  }

size_t SentenceEntitiesJSON::countOfWhatWord(void) const
  {
    assert(flagHasWhatWord);
    return storeWhatWord.size();
  }

WhatWordJSON * SentenceEntitiesJSON::elementOfWhatWord(size_t element_num)
  {
    assert(flagHasWhatWord);
    return storeWhatWord[element_num];
  }

const WhatWordJSON * SentenceEntitiesJSON::elementOfWhatWord(size_t element_num) const
  {
    assert(flagHasWhatWord);
    return storeWhatWord[element_num];
  }

std::vector< WhatWordJSON * > SentenceEntitiesJSON::getWhatWord(void)
  {
    assert(flagHasWhatWord);
    return storeWhatWord;
  }

const std::vector< WhatWordJSON * > SentenceEntitiesJSON::getWhatWord(void) const
  {
    assert(flagHasWhatWord);
    return storeWhatWord;
  }

bool SentenceEntitiesJSON::hasSpecialWhatWordIndex(void) const
  {
    return flagHasSpecialWhatWordIndex;
  }

OInteger SentenceEntitiesJSON::getSpecialWhatWordIndex(void)
  {
    assert(flagHasSpecialWhatWordIndex);
    return storeSpecialWhatWordIndex;
  }

const OInteger SentenceEntitiesJSON::getSpecialWhatWordIndex(void) const
  {
    assert(flagHasSpecialWhatWordIndex);
    return storeSpecialWhatWordIndex;
  }

char SentenceEntitiesJSON::Generator::lowerBoundSpecialPersonIndex[] = "0";
char SentenceEntitiesJSON::Generator::lowerBoundSpecialTimeIndex[] = "0";
char SentenceEntitiesJSON::Generator::lowerBoundSpecialPlaceIndex[] = "0";
char SentenceEntitiesJSON::Generator::lowerBoundSpecialAmountIndex[] = "0";
char SentenceEntitiesJSON::Generator::lowerBoundSpecialWhatWordIndex[] = "0";
SentenceEntitiesJSON *SentenceEntitiesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SentenceEntitiesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SentenceEntitiesJSON>, SentenceEntitiesJSON *, bool> generator("Type SentenceEntities", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
