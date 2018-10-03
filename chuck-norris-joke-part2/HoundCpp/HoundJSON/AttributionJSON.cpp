/* file "AttributionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AttributionJSON.h"

#include "AttributionJSON.h"


AttributionJSON::AttributionJSON(const AttributionJSON &)
  {
    assert(false);
  }

AttributionJSON &AttributionJSON::operator=(const AttributionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AttributionJSON::fromJSONLogoImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LogoImageURL of AttributionJSON is not a string.");
    setLogoImageURL(std::string(json_string->getData()));
  }

void AttributionJSON::fromJSONLogoImageGrayURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LogoImageGrayURL of AttributionJSON is not a string.");
    setLogoImageGrayURL(std::string(json_string->getData()));
  }

void AttributionJSON::fromJSONLogoLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LogoLabel of AttributionJSON is not a string.");
    setLogoLabel(std::string(json_string->getData()));
  }

void AttributionJSON::fromJSONTextOnlyLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TextOnlyLabel of AttributionJSON is not a string.");
    setTextOnlyLabel(std::string(json_string->getData()));
  }

void AttributionJSON::fromJSONProviderURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ProviderURL of AttributionJSON is not a string.");
    setProviderURL(std::string(json_string->getData()));
  }

void AttributionJSON::fromJSONRequiredToIncludeInline(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequiredToIncludeInline of AttributionJSON is not true for false.");
          }
      }
    setRequiredToIncludeInline(the_bool);
  }

AttributionJSON::AttributionJSON(void) :
        flagHasLogoImageURL(false),
        flagHasLogoImageGrayURL(false),
        flagHasLogoLabel(false),
        flagHasTextOnlyLabel(false),
        flagHasProviderURL(false),
        flagHasRequiredToIncludeInline(false)
  {
    extraIndex = create_string_index();
  }

AttributionJSON::~AttributionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AttributionJSON::hasLogoImageURL(void) const
  {
    return flagHasLogoImageURL;
  }

std::string AttributionJSON::getLogoImageURL(void)
  {
    assert(flagHasLogoImageURL);
    return storeLogoImageURL;
  }

const std::string AttributionJSON::getLogoImageURL(void) const
  {
    assert(flagHasLogoImageURL);
    return storeLogoImageURL;
  }

bool AttributionJSON::hasLogoImageGrayURL(void) const
  {
    return flagHasLogoImageGrayURL;
  }

std::string AttributionJSON::getLogoImageGrayURL(void)
  {
    assert(flagHasLogoImageGrayURL);
    return storeLogoImageGrayURL;
  }

const std::string AttributionJSON::getLogoImageGrayURL(void) const
  {
    assert(flagHasLogoImageGrayURL);
    return storeLogoImageGrayURL;
  }

bool AttributionJSON::hasLogoLabel(void) const
  {
    return flagHasLogoLabel;
  }

std::string AttributionJSON::getLogoLabel(void)
  {
    assert(flagHasLogoLabel);
    return storeLogoLabel;
  }

const std::string AttributionJSON::getLogoLabel(void) const
  {
    assert(flagHasLogoLabel);
    return storeLogoLabel;
  }

bool AttributionJSON::hasTextOnlyLabel(void) const
  {
    return flagHasTextOnlyLabel;
  }

std::string AttributionJSON::getTextOnlyLabel(void)
  {
    assert(flagHasTextOnlyLabel);
    return storeTextOnlyLabel;
  }

const std::string AttributionJSON::getTextOnlyLabel(void) const
  {
    assert(flagHasTextOnlyLabel);
    return storeTextOnlyLabel;
  }

bool AttributionJSON::hasProviderURL(void) const
  {
    return flagHasProviderURL;
  }

std::string AttributionJSON::getProviderURL(void)
  {
    assert(flagHasProviderURL);
    return storeProviderURL;
  }

const std::string AttributionJSON::getProviderURL(void) const
  {
    assert(flagHasProviderURL);
    return storeProviderURL;
  }

bool AttributionJSON::hasRequiredToIncludeInline(void) const
  {
    return flagHasRequiredToIncludeInline;
  }

bool AttributionJSON::getRequiredToIncludeInline(void)
  {
    assert(flagHasRequiredToIncludeInline);
    return storeRequiredToIncludeInline;
  }

const bool AttributionJSON::getRequiredToIncludeInline(void) const
  {
    assert(flagHasRequiredToIncludeInline);
    return storeRequiredToIncludeInline;
  }

AttributionJSON *AttributionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AttributionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool> generator("Type Attribution", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
