/* file "MusicPreviewLinkJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicPreviewLinkJSON.h"

#include "MusicPreviewLinkJSON.h"


MusicPreviewLinkJSON::MusicPreviewLinkJSON(const MusicPreviewLinkJSON &)
  {
    assert(false);
  }

MusicPreviewLinkJSON &MusicPreviewLinkJSON::operator=(const MusicPreviewLinkJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicPreviewLinkJSON::fromJSONSource(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Source of MusicPreviewLinkJSON is not a string.");
    setSource(std::string(json_string->getData()));
  }

void MusicPreviewLinkJSON::fromJSONUrl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Url of MusicPreviewLinkJSON is not a string.");
    setUrl(std::string(json_string->getData()));
  }

MusicPreviewLinkJSON::MusicPreviewLinkJSON(void) :
        flagHasSource(false),
        flagHasUrl(false)
  {
  }

MusicPreviewLinkJSON::~MusicPreviewLinkJSON(void)
  {
  }

bool MusicPreviewLinkJSON::hasSource(void) const
  {
    return flagHasSource;
  }

std::string MusicPreviewLinkJSON::getSource(void)
  {
    assert(flagHasSource);
    return storeSource;
  }

const std::string MusicPreviewLinkJSON::getSource(void) const
  {
    assert(flagHasSource);
    return storeSource;
  }

bool MusicPreviewLinkJSON::hasUrl(void) const
  {
    return flagHasUrl;
  }

std::string MusicPreviewLinkJSON::getUrl(void)
  {
    assert(flagHasUrl);
    return storeUrl;
  }

const std::string MusicPreviewLinkJSON::getUrl(void) const
  {
    assert(flagHasUrl);
    return storeUrl;
  }

MusicPreviewLinkJSON *MusicPreviewLinkJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicPreviewLinkJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicPreviewLinkJSON>, MusicPreviewLinkJSON *, bool> generator("Type MusicPreviewLink", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
