/* file "MusicBuyLinkJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicBuyLinkJSON.h"

#include "MusicBuyLinkJSON.h"


MusicBuyLinkJSON::MusicBuyLinkJSON(const MusicBuyLinkJSON &)
  {
    assert(false);
  }

MusicBuyLinkJSON &MusicBuyLinkJSON::operator=(const MusicBuyLinkJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicBuyLinkJSON::fromJSONStore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Store of MusicBuyLinkJSON is not a string.");
    setStore(std::string(json_string->getData()));
  }

void MusicBuyLinkJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of MusicBuyLinkJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

MusicBuyLinkJSON::MusicBuyLinkJSON(void) :
        flagHasStore(false),
        flagHasURL(false)
  {
  }

MusicBuyLinkJSON::~MusicBuyLinkJSON(void)
  {
  }

bool MusicBuyLinkJSON::hasStore(void) const
  {
    return flagHasStore;
  }

std::string MusicBuyLinkJSON::getStore(void)
  {
    assert(flagHasStore);
    return storeStore;
  }

const std::string MusicBuyLinkJSON::getStore(void) const
  {
    assert(flagHasStore);
    return storeStore;
  }

bool MusicBuyLinkJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string MusicBuyLinkJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string MusicBuyLinkJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

MusicBuyLinkJSON *MusicBuyLinkJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicBuyLinkJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicBuyLinkJSON>, MusicBuyLinkJSON *, bool> generator("Type MusicBuyLink", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
