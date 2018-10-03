/* file "OpenHoursSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "OpenHoursSpecJSON.h"

#include "OpenHoursSpecJSON.h"


OpenHoursSpecJSON::OpenHoursSpecJSON(const OpenHoursSpecJSON &)
  {
    assert(false);
  }

OpenHoursSpecJSON &OpenHoursSpecJSON::operator=(const OpenHoursSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OpenHoursSpecJSON::fromJSONOpenNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenNow of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenNow(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpen24Hrs(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Open24Hrs of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpen24Hrs(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenEveryday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenEveryday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenEveryday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenMonday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenMonday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenMonday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenTuesday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenTuesday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenTuesday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenWednesday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenWednesday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenWednesday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenThursday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenThursday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenThursday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenFriday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenFriday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenFriday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenSaturday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenSaturday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenSaturday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenSunday(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenSunday of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenSunday(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenAfterTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenAfterTime of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenAfterTime(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenBeforeTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenBeforeTime of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenBeforeTime(the_bool);
  }

void OpenHoursSpecJSON::fromJSONOpenTimeMentioned(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenTimeMentioned of OpenHoursSpecJSON is not true for false.");
          }
      }
    setOpenTimeMentioned(the_bool);
  }

void OpenHoursSpecJSON::fromJSONStartDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

void OpenHoursSpecJSON::fromJSONEndDateAndTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndDateAndTime(convert_classy);
    convert_classy->remove_reference();
  }

OpenHoursSpecJSON::OpenHoursSpecJSON(void) :
        flagHasOpenNow(false),
        flagHasOpen24Hrs(false),
        flagHasOpenEveryday(false),
        flagHasOpenMonday(false),
        flagHasOpenTuesday(false),
        flagHasOpenWednesday(false),
        flagHasOpenThursday(false),
        flagHasOpenFriday(false),
        flagHasOpenSaturday(false),
        flagHasOpenSunday(false),
        flagHasOpenAfterTime(false),
        flagHasOpenBeforeTime(false),
        flagHasOpenTimeMentioned(false),
        flagHasStartDateAndTime(false),
        flagHasEndDateAndTime(false)
  {
    extraIndex = create_string_index();
  }

OpenHoursSpecJSON::~OpenHoursSpecJSON(void)
  {
    if (flagHasStartDateAndTime)
      {
        storeStartDateAndTime->remove_reference();
      }
    if (flagHasEndDateAndTime)
      {
        storeEndDateAndTime->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OpenHoursSpecJSON::hasOpenNow(void) const
  {
    return flagHasOpenNow;
  }

bool OpenHoursSpecJSON::getOpenNow(void)
  {
    assert(flagHasOpenNow);
    return storeOpenNow;
  }

const bool OpenHoursSpecJSON::getOpenNow(void) const
  {
    assert(flagHasOpenNow);
    return storeOpenNow;
  }

bool OpenHoursSpecJSON::hasOpen24Hrs(void) const
  {
    return flagHasOpen24Hrs;
  }

bool OpenHoursSpecJSON::getOpen24Hrs(void)
  {
    assert(flagHasOpen24Hrs);
    return storeOpen24Hrs;
  }

const bool OpenHoursSpecJSON::getOpen24Hrs(void) const
  {
    assert(flagHasOpen24Hrs);
    return storeOpen24Hrs;
  }

bool OpenHoursSpecJSON::hasOpenEveryday(void) const
  {
    return flagHasOpenEveryday;
  }

bool OpenHoursSpecJSON::getOpenEveryday(void)
  {
    assert(flagHasOpenEveryday);
    return storeOpenEveryday;
  }

const bool OpenHoursSpecJSON::getOpenEveryday(void) const
  {
    assert(flagHasOpenEveryday);
    return storeOpenEveryday;
  }

bool OpenHoursSpecJSON::hasOpenMonday(void) const
  {
    return flagHasOpenMonday;
  }

bool OpenHoursSpecJSON::getOpenMonday(void)
  {
    assert(flagHasOpenMonday);
    return storeOpenMonday;
  }

const bool OpenHoursSpecJSON::getOpenMonday(void) const
  {
    assert(flagHasOpenMonday);
    return storeOpenMonday;
  }

bool OpenHoursSpecJSON::hasOpenTuesday(void) const
  {
    return flagHasOpenTuesday;
  }

bool OpenHoursSpecJSON::getOpenTuesday(void)
  {
    assert(flagHasOpenTuesday);
    return storeOpenTuesday;
  }

const bool OpenHoursSpecJSON::getOpenTuesday(void) const
  {
    assert(flagHasOpenTuesday);
    return storeOpenTuesday;
  }

bool OpenHoursSpecJSON::hasOpenWednesday(void) const
  {
    return flagHasOpenWednesday;
  }

bool OpenHoursSpecJSON::getOpenWednesday(void)
  {
    assert(flagHasOpenWednesday);
    return storeOpenWednesday;
  }

const bool OpenHoursSpecJSON::getOpenWednesday(void) const
  {
    assert(flagHasOpenWednesday);
    return storeOpenWednesday;
  }

bool OpenHoursSpecJSON::hasOpenThursday(void) const
  {
    return flagHasOpenThursday;
  }

bool OpenHoursSpecJSON::getOpenThursday(void)
  {
    assert(flagHasOpenThursday);
    return storeOpenThursday;
  }

const bool OpenHoursSpecJSON::getOpenThursday(void) const
  {
    assert(flagHasOpenThursday);
    return storeOpenThursday;
  }

bool OpenHoursSpecJSON::hasOpenFriday(void) const
  {
    return flagHasOpenFriday;
  }

bool OpenHoursSpecJSON::getOpenFriday(void)
  {
    assert(flagHasOpenFriday);
    return storeOpenFriday;
  }

const bool OpenHoursSpecJSON::getOpenFriday(void) const
  {
    assert(flagHasOpenFriday);
    return storeOpenFriday;
  }

bool OpenHoursSpecJSON::hasOpenSaturday(void) const
  {
    return flagHasOpenSaturday;
  }

bool OpenHoursSpecJSON::getOpenSaturday(void)
  {
    assert(flagHasOpenSaturday);
    return storeOpenSaturday;
  }

const bool OpenHoursSpecJSON::getOpenSaturday(void) const
  {
    assert(flagHasOpenSaturday);
    return storeOpenSaturday;
  }

bool OpenHoursSpecJSON::hasOpenSunday(void) const
  {
    return flagHasOpenSunday;
  }

bool OpenHoursSpecJSON::getOpenSunday(void)
  {
    assert(flagHasOpenSunday);
    return storeOpenSunday;
  }

const bool OpenHoursSpecJSON::getOpenSunday(void) const
  {
    assert(flagHasOpenSunday);
    return storeOpenSunday;
  }

bool OpenHoursSpecJSON::hasOpenAfterTime(void) const
  {
    return flagHasOpenAfterTime;
  }

bool OpenHoursSpecJSON::getOpenAfterTime(void)
  {
    assert(flagHasOpenAfterTime);
    return storeOpenAfterTime;
  }

const bool OpenHoursSpecJSON::getOpenAfterTime(void) const
  {
    assert(flagHasOpenAfterTime);
    return storeOpenAfterTime;
  }

bool OpenHoursSpecJSON::hasOpenBeforeTime(void) const
  {
    return flagHasOpenBeforeTime;
  }

bool OpenHoursSpecJSON::getOpenBeforeTime(void)
  {
    assert(flagHasOpenBeforeTime);
    return storeOpenBeforeTime;
  }

const bool OpenHoursSpecJSON::getOpenBeforeTime(void) const
  {
    assert(flagHasOpenBeforeTime);
    return storeOpenBeforeTime;
  }

bool OpenHoursSpecJSON::hasOpenTimeMentioned(void) const
  {
    return flagHasOpenTimeMentioned;
  }

bool OpenHoursSpecJSON::getOpenTimeMentioned(void)
  {
    assert(flagHasOpenTimeMentioned);
    return storeOpenTimeMentioned;
  }

const bool OpenHoursSpecJSON::getOpenTimeMentioned(void) const
  {
    assert(flagHasOpenTimeMentioned);
    return storeOpenTimeMentioned;
  }

bool OpenHoursSpecJSON::hasStartDateAndTime(void) const
  {
    return flagHasStartDateAndTime;
  }

DateAndOrTimeJSON * OpenHoursSpecJSON::getStartDateAndTime(void)
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

const DateAndOrTimeJSON * OpenHoursSpecJSON::getStartDateAndTime(void) const
  {
    assert(flagHasStartDateAndTime);
    return storeStartDateAndTime;
  }

bool OpenHoursSpecJSON::hasEndDateAndTime(void) const
  {
    return flagHasEndDateAndTime;
  }

DateAndOrTimeJSON * OpenHoursSpecJSON::getEndDateAndTime(void)
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

const DateAndOrTimeJSON * OpenHoursSpecJSON::getEndDateAndTime(void) const
  {
    assert(flagHasEndDateAndTime);
    return storeEndDateAndTime;
  }

OpenHoursSpecJSON *OpenHoursSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    OpenHoursSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<OpenHoursSpecJSON>, OpenHoursSpecJSON *, bool> generator("Type OpenHoursSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
