/* file "FMChannelCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FMChannelCommandJSON.h"

#include "FMChannelCommandJSON.h"


FMChannelCommandJSON::FMChannelCommandJSON(const FMChannelCommandJSON &)
  {
    assert(false);
  }

FMChannelCommandJSON &FMChannelCommandJSON::operator=(const FMChannelCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FMChannelCommandJSON::extraChannelToJSON(void) const
  {
    JSONValue *generated_rational_Channel;
    if (((double)(long int)storeChannel) == storeChannel)
        generated_rational_Channel = new JSONIntegerValue((long int)(storeChannel));
    else
        generated_rational_Channel = new JSONRationalValue(storeChannel, DBL_DIG);
    return generated_rational_Channel;
  }

JSONValue *FMChannelCommandJSON::extraHDSpecifiedToJSON(void) const
  {
    JSONValue *generated_boolean_HDSpecified = (storeHDSpecified ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_HDSpecified;
  }

JSONValue *FMChannelCommandJSON::extraAlreadyOnResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyOnResult;
    storeAlreadyOnResult->write_as_json(&handler_AlreadyOnResult);
    handler_AlreadyOnResult.result->add_reference();
    return handler_AlreadyOnResult.result;
  }

void FMChannelCommandJSON::fromJSONChannel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Channel of FMChannelCommandJSON is not a number.");
          }
      }
    setChannelText(the_rational_text);
  }

void FMChannelCommandJSON::fromJSONHDSpecified(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HDSpecified of FMChannelCommandJSON is not true for false.");
          }
      }
    setHDSpecified(the_bool);
  }

void FMChannelCommandJSON::fromJSONAlreadyOnResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyOnResult(convert_classy);
    convert_classy->remove_reference();
  }

FMChannelCommandJSON::FMChannelCommandJSON(void) :
        flagHasChannel(false),
        flagHasHDSpecified(false),
        flagHasAlreadyOnResult(false)
  {
    extraIndex = create_string_index();
  }

FMChannelCommandJSON::~FMChannelCommandJSON(void)
  {
    if (flagHasAlreadyOnResult)
      {
        storeAlreadyOnResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FMChannelCommandJSON::getRadioCommandKind(void) const
  {
    return "FMChannel";
  }

bool FMChannelCommandJSON::hasChannel(void) const
  {
    return flagHasChannel;
  }

double FMChannelCommandJSON::getChannel(void)
  {
    assert(flagHasChannel);
    if (textStoreChannel != "")
      {
        return atof(textStoreChannel.c_str());
      }
    return storeChannel;
  }

const double FMChannelCommandJSON::getChannel(void) const
  {
    assert(flagHasChannel);
    if (textStoreChannel != "")
      {
        return atof(textStoreChannel.c_str());
      }
    return storeChannel;
  }

std::string FMChannelCommandJSON::getChannelAsText(void) const
  {
    assert(flagHasChannel);
    if (textStoreChannel == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeChannel);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreChannel);
      }
  }

bool FMChannelCommandJSON::hasHDSpecified(void) const
  {
    return flagHasHDSpecified;
  }

bool FMChannelCommandJSON::getHDSpecified(void)
  {
    assert(flagHasHDSpecified);
    return storeHDSpecified;
  }

const bool FMChannelCommandJSON::getHDSpecified(void) const
  {
    assert(flagHasHDSpecified);
    return storeHDSpecified;
  }

bool FMChannelCommandJSON::hasAlreadyOnResult(void) const
  {
    return flagHasAlreadyOnResult;
  }

DynamicResponseJSON * FMChannelCommandJSON::getAlreadyOnResult(void)
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

const DynamicResponseJSON * FMChannelCommandJSON::getAlreadyOnResult(void) const
  {
    assert(flagHasAlreadyOnResult);
    return storeAlreadyOnResult;
  }

FMChannelCommandJSON *FMChannelCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FMChannelCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandJSON>, FMChannelCommandJSON *, bool> generator("Type FMChannelCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
