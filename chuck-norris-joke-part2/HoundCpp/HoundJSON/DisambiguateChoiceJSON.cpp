/* file "DisambiguateChoiceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateChoiceJSON.h"

#include "DisambiguateChoiceJSON.h"


DisambiguateChoiceJSON::DisambiguateChoiceJSON(const DisambiguateChoiceJSON &)
  {
    assert(false);
  }

DisambiguateChoiceJSON &DisambiguateChoiceJSON::operator=(const DisambiguateChoiceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateChoiceJSON::fromJSONQueryText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryText of DisambiguateChoiceJSON is not a string.");
    setQueryText(std::string(json_string->getData()));
  }

void DisambiguateChoiceJSON::fromJSONPrimaryText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PrimaryText of DisambiguateChoiceJSON is not a string.");
    setPrimaryText(std::string(json_string->getData()));
  }

void DisambiguateChoiceJSON::fromJSONPrimaryTextLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PrimaryTextLabel of DisambiguateChoiceJSON is not a string.");
    setPrimaryTextLabel(std::string(json_string->getData()));
  }

void DisambiguateChoiceJSON::fromJSONSecondaryText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SecondaryText of DisambiguateChoiceJSON is not a string.");
    setSecondaryText(std::string(json_string->getData()));
  }

void DisambiguateChoiceJSON::fromJSONSecondaryTextLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SecondaryTextLabel of DisambiguateChoiceJSON is not a string.");
    setSecondaryTextLabel(std::string(json_string->getData()));
  }

void DisambiguateChoiceJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of DisambiguateChoiceJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

DisambiguateChoiceJSON::DisambiguateChoiceJSON(void) :
        flagHasQueryText(false),
        flagHasPrimaryText(false),
        flagHasPrimaryTextLabel(false),
        flagHasSecondaryText(false),
        flagHasSecondaryTextLabel(false),
        flagHasImageURL(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateChoiceJSON::~DisambiguateChoiceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisambiguateChoiceJSON::hasQueryText(void) const
  {
    return flagHasQueryText;
  }

std::string DisambiguateChoiceJSON::getQueryText(void)
  {
    assert(flagHasQueryText);
    return storeQueryText;
  }

const std::string DisambiguateChoiceJSON::getQueryText(void) const
  {
    assert(flagHasQueryText);
    return storeQueryText;
  }

bool DisambiguateChoiceJSON::hasPrimaryText(void) const
  {
    return flagHasPrimaryText;
  }

std::string DisambiguateChoiceJSON::getPrimaryText(void)
  {
    assert(flagHasPrimaryText);
    return storePrimaryText;
  }

const std::string DisambiguateChoiceJSON::getPrimaryText(void) const
  {
    assert(flagHasPrimaryText);
    return storePrimaryText;
  }

bool DisambiguateChoiceJSON::hasPrimaryTextLabel(void) const
  {
    return flagHasPrimaryTextLabel;
  }

std::string DisambiguateChoiceJSON::getPrimaryTextLabel(void)
  {
    assert(flagHasPrimaryTextLabel);
    return storePrimaryTextLabel;
  }

const std::string DisambiguateChoiceJSON::getPrimaryTextLabel(void) const
  {
    assert(flagHasPrimaryTextLabel);
    return storePrimaryTextLabel;
  }

bool DisambiguateChoiceJSON::hasSecondaryText(void) const
  {
    return flagHasSecondaryText;
  }

std::string DisambiguateChoiceJSON::getSecondaryText(void)
  {
    assert(flagHasSecondaryText);
    return storeSecondaryText;
  }

const std::string DisambiguateChoiceJSON::getSecondaryText(void) const
  {
    assert(flagHasSecondaryText);
    return storeSecondaryText;
  }

bool DisambiguateChoiceJSON::hasSecondaryTextLabel(void) const
  {
    return flagHasSecondaryTextLabel;
  }

std::string DisambiguateChoiceJSON::getSecondaryTextLabel(void)
  {
    assert(flagHasSecondaryTextLabel);
    return storeSecondaryTextLabel;
  }

const std::string DisambiguateChoiceJSON::getSecondaryTextLabel(void) const
  {
    assert(flagHasSecondaryTextLabel);
    return storeSecondaryTextLabel;
  }

bool DisambiguateChoiceJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string DisambiguateChoiceJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string DisambiguateChoiceJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

DisambiguateChoiceJSON *DisambiguateChoiceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateChoiceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool> generator("Type DisambiguateChoice", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
