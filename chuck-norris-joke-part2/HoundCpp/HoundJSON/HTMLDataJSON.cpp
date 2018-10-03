/* file "HTMLDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HTMLDataJSON.h"

#include "HTMLDataJSON.h"


HTMLDataJSON::TypeHTMLHeadJSON::TypeHTMLHeadJSON(const TypeHTMLHeadJSON &)
  {
    assert(false);
  }

HTMLDataJSON::TypeHTMLHeadJSON &HTMLDataJSON::TypeHTMLHeadJSON::operator=(const TypeHTMLHeadJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HTMLDataJSON::TypeHTMLHeadJSON::fromJSONCSS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CSS of TypeHTMLHeadJSON is not a string.");
    setCSS(std::string(json_string->getData()));
  }

void HTMLDataJSON::TypeHTMLHeadJSON::fromJSONJS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field JS of TypeHTMLHeadJSON is not a string.");
    setJS(std::string(json_string->getData()));
  }

HTMLDataJSON::TypeHTMLHeadJSON::TypeHTMLHeadJSON(void) :
        flagHasCSS(false),
        flagHasJS(false)
  {
    extraIndex = create_string_index();
  }

HTMLDataJSON::TypeHTMLHeadJSON::~TypeHTMLHeadJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HTMLDataJSON::TypeHTMLHeadJSON::hasCSS(void) const
  {
    return flagHasCSS;
  }

std::string HTMLDataJSON::TypeHTMLHeadJSON::getCSS(void)
  {
    assert(flagHasCSS);
    return storeCSS;
  }

const std::string HTMLDataJSON::TypeHTMLHeadJSON::getCSS(void) const
  {
    assert(flagHasCSS);
    return storeCSS;
  }

bool HTMLDataJSON::TypeHTMLHeadJSON::hasJS(void) const
  {
    return flagHasJS;
  }

std::string HTMLDataJSON::TypeHTMLHeadJSON::getJS(void)
  {
    assert(flagHasJS);
    return storeJS;
  }

const std::string HTMLDataJSON::TypeHTMLHeadJSON::getJS(void) const
  {
    assert(flagHasJS);
    return storeJS;
  }

HTMLDataJSON::HTMLDataJSON(const HTMLDataJSON &)
  {
    assert(false);
  }

HTMLDataJSON &HTMLDataJSON::operator=(const HTMLDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HTMLDataJSON::fromJSONHTMLHead(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHTMLHeadJSON *convert_classy = TypeHTMLHeadJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHTMLHead(convert_classy);
    convert_classy->remove_reference();
  }

void HTMLDataJSON::fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SmallScreenHTML of HTMLDataJSON is not a string.");
    setSmallScreenHTML(std::string(json_string->getData()));
  }

void HTMLDataJSON::fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LargeScreenHTML of HTMLDataJSON is not a string.");
    setLargeScreenHTML(std::string(json_string->getData()));
  }

void HTMLDataJSON::fromJSONSmallScreenURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SmallScreenURL of HTMLDataJSON is not a string.");
    setSmallScreenURL(std::string(json_string->getData()));
  }

void HTMLDataJSON::fromJSONLargeScreenURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LargeScreenURL of HTMLDataJSON is not a string.");
    setLargeScreenURL(std::string(json_string->getData()));
  }

HTMLDataJSON::HTMLDataJSON(void) :
        flagHasHTMLHead(false),
        flagHasSmallScreenHTML(false),
        flagHasLargeScreenHTML(false),
        flagHasSmallScreenURL(false),
        flagHasLargeScreenURL(false)
  {
    extraIndex = create_string_index();
  }

HTMLDataJSON::~HTMLDataJSON(void)
  {
    if (flagHasHTMLHead)
      {
        storeHTMLHead->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HTMLDataJSON::hasHTMLHead(void) const
  {
    return flagHasHTMLHead;
  }

HTMLDataJSON::TypeHTMLHeadJSON * HTMLDataJSON::getHTMLHead(void)
  {
    assert(flagHasHTMLHead);
    return storeHTMLHead;
  }

const HTMLDataJSON::TypeHTMLHeadJSON * HTMLDataJSON::getHTMLHead(void) const
  {
    assert(flagHasHTMLHead);
    return storeHTMLHead;
  }

bool HTMLDataJSON::hasSmallScreenHTML(void) const
  {
    return flagHasSmallScreenHTML;
  }

std::string HTMLDataJSON::getSmallScreenHTML(void)
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

const std::string HTMLDataJSON::getSmallScreenHTML(void) const
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

bool HTMLDataJSON::hasLargeScreenHTML(void) const
  {
    return flagHasLargeScreenHTML;
  }

std::string HTMLDataJSON::getLargeScreenHTML(void)
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

const std::string HTMLDataJSON::getLargeScreenHTML(void) const
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

bool HTMLDataJSON::hasSmallScreenURL(void) const
  {
    return flagHasSmallScreenURL;
  }

std::string HTMLDataJSON::getSmallScreenURL(void)
  {
    assert(flagHasSmallScreenURL);
    return storeSmallScreenURL;
  }

const std::string HTMLDataJSON::getSmallScreenURL(void) const
  {
    assert(flagHasSmallScreenURL);
    return storeSmallScreenURL;
  }

bool HTMLDataJSON::hasLargeScreenURL(void) const
  {
    return flagHasLargeScreenURL;
  }

std::string HTMLDataJSON::getLargeScreenURL(void)
  {
    assert(flagHasLargeScreenURL);
    return storeLargeScreenURL;
  }

const std::string HTMLDataJSON::getLargeScreenURL(void) const
  {
    assert(flagHasLargeScreenURL);
    return storeLargeScreenURL;
  }

HTMLDataJSON::TypeHTMLHeadJSON *HTMLDataJSON::TypeHTMLHeadJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHTMLHeadJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHTMLHeadJSON>, TypeHTMLHeadJSON *, bool> generator("Type TypeHTMLHead", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HTMLDataJSON *HTMLDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HTMLDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HTMLDataJSON>, HTMLDataJSON *, bool> generator("Type HTMLData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
