/* file "HoundUpdateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HoundUpdateJSON.h"

#include "HoundUpdateJSON.h"


HoundUpdateJSON::TypeFormat HoundUpdateJSON::stringToFormat(const char *chars)
  {
    if (strcmp(chars, "HoundQueryUpdate") == 0)
        return Format_HoundQueryUpdate;
    throw("The value for field `Format' is not one of the legal values.");
  }

const char *HoundUpdateJSON::stringFromFormat(TypeFormat the_enum)
  {
    switch (the_enum)
      {
        case Format_HoundQueryUpdate:
            return "HoundQueryUpdate";
        default:
            assert(false);
            return NULL;
      }
  }

HoundUpdateJSON::TypeFormatVersion HoundUpdateJSON::stringToFormatVersion(const char *chars)
  {
    if (strcmp(chars, "1.0") == 0)
        return FormatVersion_1_x2e_0;
    throw("The value for field `FormatVersion' is not one of the legal values.");
  }

const char *HoundUpdateJSON::stringFromFormatVersion(TypeFormatVersion the_enum)
  {
    switch (the_enum)
      {
        case FormatVersion_1_x2e_0:
            return "1.0";
        default:
            assert(false);
            return NULL;
      }
  }

HoundUpdateJSON::HoundUpdateJSON(const HoundUpdateJSON &)
  {
    assert(false);
  }

HoundUpdateJSON &HoundUpdateJSON::operator=(const HoundUpdateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HoundUpdateJSON::fromJSONFormat(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Format of HoundUpdateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "HoundQueryUpdate") == 0))
        throw("The value for field Format of HoundUpdateJSON is not `HoundQueryUpdate'.");
    setFormat();
  }

void HoundUpdateJSON::fromJSONFormatVersion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FormatVersion of HoundUpdateJSON is not a string.");
    if (!(strcmp(json_string->getData(), "1.0") == 0))
        throw("The value for field FormatVersion of HoundUpdateJSON is not `1.0'.");
    setFormatVersion();
  }

void HoundUpdateJSON::fromJSONIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Index of HoundUpdateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Index of HoundUpdateJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndex(extracted_integer);
  }

void HoundUpdateJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommandResultJSON *convert_classy = CommandResultJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setResult(convert_classy);
    convert_classy->remove_reference();
  }

void HoundUpdateJSON::fromJSONIsFinal(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsFinal of HoundUpdateJSON is not true for false.");
          }
      }
    setIsFinal(the_bool);
  }

HoundUpdateJSON::HoundUpdateJSON(void) :
        flagHasFormat(false),
        flagHasFormatVersion(false),
        flagHasIndex(false),
        flagHasResult(false),
        flagHasIsFinal(false)
  {
    extraIndex = create_string_index();
  }

HoundUpdateJSON::~HoundUpdateJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HoundUpdateJSON::hasFormat(void) const
  {
    return flagHasFormat;
  }

HoundUpdateJSON::TypeFormat HoundUpdateJSON::getFormat(void)
  {
    assert(flagHasFormat);
    return Format_HoundQueryUpdate;
  }

const HoundUpdateJSON::TypeFormat HoundUpdateJSON::getFormat(void) const
  {
    assert(flagHasFormat);
    return Format_HoundQueryUpdate;
  }

const char *HoundUpdateJSON::getFormatAsChars(void) const
  {
    return stringFromFormat(getFormat());
  }

std::string HoundUpdateJSON::getFormatAsString(void) const
  {
    return stringFromFormat(getFormat());
  }

bool HoundUpdateJSON::hasFormatVersion(void) const
  {
    return flagHasFormatVersion;
  }

HoundUpdateJSON::TypeFormatVersion HoundUpdateJSON::getFormatVersion(void)
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const HoundUpdateJSON::TypeFormatVersion HoundUpdateJSON::getFormatVersion(void) const
  {
    assert(flagHasFormatVersion);
    return FormatVersion_1_x2e_0;
  }

const char *HoundUpdateJSON::getFormatVersionAsChars(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

std::string HoundUpdateJSON::getFormatVersionAsString(void) const
  {
    return stringFromFormatVersion(getFormatVersion());
  }

bool HoundUpdateJSON::hasIndex(void) const
  {
    return flagHasIndex;
  }

OInteger HoundUpdateJSON::getIndex(void)
  {
    assert(flagHasIndex);
    return storeIndex;
  }

const OInteger HoundUpdateJSON::getIndex(void) const
  {
    assert(flagHasIndex);
    return storeIndex;
  }

bool HoundUpdateJSON::hasResult(void) const
  {
    return flagHasResult;
  }

CommandResultJSON * HoundUpdateJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const CommandResultJSON * HoundUpdateJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

bool HoundUpdateJSON::hasIsFinal(void) const
  {
    return flagHasIsFinal;
  }

bool HoundUpdateJSON::getIsFinal(void)
  {
    assert(flagHasIsFinal);
    return storeIsFinal;
  }

const bool HoundUpdateJSON::getIsFinal(void) const
  {
    assert(flagHasIsFinal);
    return storeIsFinal;
  }

char HoundUpdateJSON::Generator::lowerBoundIndex[] = "0";
HoundUpdateJSON *HoundUpdateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HoundUpdateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HoundUpdateJSON>, HoundUpdateJSON *, bool> generator("Type HoundUpdate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
