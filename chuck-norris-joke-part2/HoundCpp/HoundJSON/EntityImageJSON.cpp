/* file "EntityImageJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EntityImageJSON.h"

#include "EntityImageJSON.h"


EntityImageJSON::EntityImageJSON(const EntityImageJSON &)
  {
    assert(false);
  }

EntityImageJSON &EntityImageJSON::operator=(const EntityImageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EntityImageJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of EntityImageJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void EntityImageJSON::fromJSONThumbnailURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ThumbnailURL of EntityImageJSON is not a string.");
    setThumbnailURL(std::string(json_string->getData()));
  }

void EntityImageJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of EntityImageJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void EntityImageJSON::fromJSONAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AttributionJSON *convert_classy = AttributionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttribution(convert_classy);
    convert_classy->remove_reference();
  }

EntityImageJSON::EntityImageJSON(void) :
        flagHasURL(false),
        flagHasThumbnailURL(false),
        flagHasLabel(false),
        flagHasAttribution(false)
  {
    extraIndex = create_string_index();
  }

EntityImageJSON::~EntityImageJSON(void)
  {
    if (flagHasAttribution)
      {
        storeAttribution->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool EntityImageJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string EntityImageJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string EntityImageJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool EntityImageJSON::hasThumbnailURL(void) const
  {
    return flagHasThumbnailURL;
  }

std::string EntityImageJSON::getThumbnailURL(void)
  {
    assert(flagHasThumbnailURL);
    return storeThumbnailURL;
  }

const std::string EntityImageJSON::getThumbnailURL(void) const
  {
    assert(flagHasThumbnailURL);
    return storeThumbnailURL;
  }

bool EntityImageJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string EntityImageJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string EntityImageJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool EntityImageJSON::hasAttribution(void) const
  {
    return flagHasAttribution;
  }

AttributionJSON * EntityImageJSON::getAttribution(void)
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

const AttributionJSON * EntityImageJSON::getAttribution(void) const
  {
    assert(flagHasAttribution);
    return storeAttribution;
  }

EntityImageJSON *EntityImageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EntityImageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EntityImageJSON>, EntityImageJSON *, bool> generator("Type EntityImage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
