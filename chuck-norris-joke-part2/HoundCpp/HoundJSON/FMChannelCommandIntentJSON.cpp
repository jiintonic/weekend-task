/* file "FMChannelCommandIntentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FMChannelCommandIntentJSON.h"

#include "FMChannelCommandIntentJSON.h"


FMChannelCommandIntentJSON::FMChannelCommandIntentJSON(const FMChannelCommandIntentJSON &)
  {
    assert(false);
  }

FMChannelCommandIntentJSON &FMChannelCommandIntentJSON::operator=(const FMChannelCommandIntentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *FMChannelCommandIntentJSON::extraChannelToJSON(void) const
  {
    JSONValue *generated_rational_Channel;
    if (((double)(long int)storeChannel) == storeChannel)
        generated_rational_Channel = new JSONIntegerValue((long int)(storeChannel));
    else
        generated_rational_Channel = new JSONRationalValue(storeChannel, DBL_DIG);
    return generated_rational_Channel;
  }

JSONValue *FMChannelCommandIntentJSON::extraHDSpecifiedToJSON(void) const
  {
    JSONValue *generated_boolean_HDSpecified = (storeHDSpecified ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_HDSpecified;
  }

void FMChannelCommandIntentJSON::fromJSONChannel(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Channel of FMChannelCommandIntentJSON is not a number.");
          }
      }
    setChannelText(the_rational_text);
  }

void FMChannelCommandIntentJSON::fromJSONHDSpecified(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HDSpecified of FMChannelCommandIntentJSON is not true for false.");
          }
      }
    setHDSpecified(the_bool);
  }

FMChannelCommandIntentJSON::FMChannelCommandIntentJSON(void) :
        flagHasChannel(false),
        flagHasHDSpecified(false)
  {
    extraIndex = create_string_index();
  }

FMChannelCommandIntentJSON::~FMChannelCommandIntentJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *FMChannelCommandIntentJSON::getRadioIntentKind(void) const
  {
    return "FMChannel";
  }

bool FMChannelCommandIntentJSON::hasChannel(void) const
  {
    return flagHasChannel;
  }

double FMChannelCommandIntentJSON::getChannel(void)
  {
    assert(flagHasChannel);
    if (textStoreChannel != "")
      {
        return atof(textStoreChannel.c_str());
      }
    return storeChannel;
  }

const double FMChannelCommandIntentJSON::getChannel(void) const
  {
    assert(flagHasChannel);
    if (textStoreChannel != "")
      {
        return atof(textStoreChannel.c_str());
      }
    return storeChannel;
  }

std::string FMChannelCommandIntentJSON::getChannelAsText(void) const
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

bool FMChannelCommandIntentJSON::hasHDSpecified(void) const
  {
    return flagHasHDSpecified;
  }

bool FMChannelCommandIntentJSON::getHDSpecified(void)
  {
    assert(flagHasHDSpecified);
    return storeHDSpecified;
  }

const bool FMChannelCommandIntentJSON::getHDSpecified(void) const
  {
    assert(flagHasHDSpecified);
    return storeHDSpecified;
  }

FMChannelCommandIntentJSON *FMChannelCommandIntentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FMChannelCommandIntentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FMChannelCommandIntentJSON>, FMChannelCommandIntentJSON *, bool> generator("Type FMChannelCommandIntent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
