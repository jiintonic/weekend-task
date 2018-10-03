/* file "VoiceActivityDetectionJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "VoiceActivityDetectionJSON.h"

#include "VoiceActivityDetectionJSON.h"


VoiceActivityDetectionJSON::VoiceActivityDetectionJSON(const VoiceActivityDetectionJSON &)
  {
    assert(false);
  }

VoiceActivityDetectionJSON &VoiceActivityDetectionJSON::operator=(const VoiceActivityDetectionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void VoiceActivityDetectionJSON::fromJSONMaxSilenceSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxSilenceSeconds of VoiceActivityDetectionJSON is not a number.");
          }
      }
    setMaxSilenceSecondsText(the_rational_text);
  }

void VoiceActivityDetectionJSON::fromJSONMaxSilenceAfterFullQuerySeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxSilenceAfterFullQuerySeconds of VoiceActivityDetectionJSON is not a number.");
          }
      }
    setMaxSilenceAfterFullQuerySecondsText(the_rational_text);
  }

void VoiceActivityDetectionJSON::fromJSONMaxSilenceAfterPartialQuerySeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field MaxSilenceAfterPartialQuerySeconds of VoiceActivityDetectionJSON is not a number.");
          }
      }
    setMaxSilenceAfterPartialQuerySecondsText(the_rational_text);
  }

VoiceActivityDetectionJSON::VoiceActivityDetectionJSON(void) :
        flagHasMaxSilenceSeconds(false),
        flagHasMaxSilenceAfterFullQuerySeconds(false),
        flagHasMaxSilenceAfterPartialQuerySeconds(false)
  {
    storeMaxSilenceSeconds = 5;
    storeMaxSilenceAfterFullQuerySeconds = 1;
    storeMaxSilenceAfterPartialQuerySeconds = 1.5;
    extraIndex = create_string_index();
  }

VoiceActivityDetectionJSON::~VoiceActivityDetectionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool VoiceActivityDetectionJSON::hasMaxSilenceSeconds(void) const
  {
    return flagHasMaxSilenceSeconds;
  }

double VoiceActivityDetectionJSON::getMaxSilenceSeconds(void)
  {
    if (textStoreMaxSilenceSeconds != "")
      {
        return atof(textStoreMaxSilenceSeconds.c_str());
      }
    return storeMaxSilenceSeconds;
  }

const double VoiceActivityDetectionJSON::getMaxSilenceSeconds(void) const
  {
    if (textStoreMaxSilenceSeconds != "")
      {
        return atof(textStoreMaxSilenceSeconds.c_str());
      }
    return storeMaxSilenceSeconds;
  }

std::string VoiceActivityDetectionJSON::getMaxSilenceSecondsAsText(void) const
  {
    if (textStoreMaxSilenceSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaxSilenceSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaxSilenceSeconds);
      }
  }

bool VoiceActivityDetectionJSON::hasMaxSilenceAfterFullQuerySeconds(void) const
  {
    return flagHasMaxSilenceAfterFullQuerySeconds;
  }

double VoiceActivityDetectionJSON::getMaxSilenceAfterFullQuerySeconds(void)
  {
    if (textStoreMaxSilenceAfterFullQuerySeconds != "")
      {
        return atof(textStoreMaxSilenceAfterFullQuerySeconds.c_str());
      }
    return storeMaxSilenceAfterFullQuerySeconds;
  }

const double VoiceActivityDetectionJSON::getMaxSilenceAfterFullQuerySeconds(void) const
  {
    if (textStoreMaxSilenceAfterFullQuerySeconds != "")
      {
        return atof(textStoreMaxSilenceAfterFullQuerySeconds.c_str());
      }
    return storeMaxSilenceAfterFullQuerySeconds;
  }

std::string VoiceActivityDetectionJSON::getMaxSilenceAfterFullQuerySecondsAsText(void) const
  {
    if (textStoreMaxSilenceAfterFullQuerySeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaxSilenceAfterFullQuerySeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaxSilenceAfterFullQuerySeconds);
      }
  }

bool VoiceActivityDetectionJSON::hasMaxSilenceAfterPartialQuerySeconds(void) const
  {
    return flagHasMaxSilenceAfterPartialQuerySeconds;
  }

double VoiceActivityDetectionJSON::getMaxSilenceAfterPartialQuerySeconds(void)
  {
    if (textStoreMaxSilenceAfterPartialQuerySeconds != "")
      {
        return atof(textStoreMaxSilenceAfterPartialQuerySeconds.c_str());
      }
    return storeMaxSilenceAfterPartialQuerySeconds;
  }

const double VoiceActivityDetectionJSON::getMaxSilenceAfterPartialQuerySeconds(void) const
  {
    if (textStoreMaxSilenceAfterPartialQuerySeconds != "")
      {
        return atof(textStoreMaxSilenceAfterPartialQuerySeconds.c_str());
      }
    return storeMaxSilenceAfterPartialQuerySeconds;
  }

std::string VoiceActivityDetectionJSON::getMaxSilenceAfterPartialQuerySecondsAsText(void) const
  {
    if (textStoreMaxSilenceAfterPartialQuerySeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeMaxSilenceAfterPartialQuerySeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreMaxSilenceAfterPartialQuerySeconds);
      }
  }

VoiceActivityDetectionJSON *VoiceActivityDetectionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    VoiceActivityDetectionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<VoiceActivityDetectionJSON>, VoiceActivityDetectionJSON *, bool> generator("Type VoiceActivityDetection", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
