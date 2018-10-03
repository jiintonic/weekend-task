/* file "WhatWordJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhatWordJSON.h"

#include "WhatWordJSON.h"


WhatWordJSON::WhatWordJSON(const WhatWordJSON &)
  {
    assert(false);
  }

WhatWordJSON &WhatWordJSON::operator=(const WhatWordJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhatWordJSON::fromJSONWord(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Word of WhatWordJSON is not a string.");
    setWord(std::string(json_string->getData()));
  }

void WhatWordJSON::fromJSONPartOfSpeech(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartOfSpeech of WhatWordJSON is not a string.");
    setPartOfSpeech(std::string(json_string->getData()));
  }

WhatWordJSON::WhatWordJSON(void) :
        flagHasWord(false),
        flagHasPartOfSpeech(false)
  {
    extraIndex = create_string_index();
  }

WhatWordJSON::~WhatWordJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhatWordJSON::hasWord(void) const
  {
    return flagHasWord;
  }

std::string WhatWordJSON::getWord(void)
  {
    assert(flagHasWord);
    return storeWord;
  }

const std::string WhatWordJSON::getWord(void) const
  {
    assert(flagHasWord);
    return storeWord;
  }

bool WhatWordJSON::hasPartOfSpeech(void) const
  {
    return flagHasPartOfSpeech;
  }

std::string WhatWordJSON::getPartOfSpeech(void)
  {
    assert(flagHasPartOfSpeech);
    return storePartOfSpeech;
  }

const std::string WhatWordJSON::getPartOfSpeech(void) const
  {
    assert(flagHasPartOfSpeech);
    return storePartOfSpeech;
  }

WhatWordJSON *WhatWordJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhatWordJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhatWordJSON>, WhatWordJSON *, bool> generator("Type WhatWord", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
