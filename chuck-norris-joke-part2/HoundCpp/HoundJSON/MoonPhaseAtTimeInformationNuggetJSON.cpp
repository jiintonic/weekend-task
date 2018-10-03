/* file "MoonPhaseAtTimeInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MoonPhaseAtTimeInformationNuggetJSON.h"

#include "MoonPhaseAtTimeInformationNuggetJSON.h"


MoonPhaseAtTimeInformationNuggetJSON::MoonPhaseAtTimeInformationNuggetJSON(const MoonPhaseAtTimeInformationNuggetJSON &)
  {
    assert(false);
  }

MoonPhaseAtTimeInformationNuggetJSON &MoonPhaseAtTimeInformationNuggetJSON::operator=(const MoonPhaseAtTimeInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MoonPhaseAtTimeInformationNuggetJSON::extraDateTimeSpecToJSON(void) const
  {
    JSONValueHandler handler_DateTimeSpec;
    storeDateTimeSpec->write_as_json(&handler_DateTimeSpec);
    handler_DateTimeSpec.result->add_reference();
    return handler_DateTimeSpec.result;
  }

JSONValue *MoonPhaseAtTimeInformationNuggetJSON::extraMoonPhasePctToJSON(void) const
  {
    JSONIntegerValue *generated_integer_MoonPhasePct = new JSONIntegerValue(storeMoonPhasePct);
    return generated_integer_MoonPhasePct;
  }

JSONValue *MoonPhaseAtTimeInformationNuggetJSON::extraMoonPhaseToJSON(void) const
  {
    JSONStringValue *generated_string_MoonPhase = new JSONStringValue(storeMoonPhase.c_str());
    return generated_string_MoonPhase;
  }

JSONValue *MoonPhaseAtTimeInformationNuggetJSON::extraRequestedDateTimeInThePastToJSON(void) const
  {
    JSONValue *generated_boolean_RequestedDateTimeInThePast = (storeRequestedDateTimeInThePast ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_RequestedDateTimeInThePast;
  }

void MoonPhaseAtTimeInformationNuggetJSON::fromJSONDateTimeSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateTimeSpecJSON *convert_classy = DateTimeSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDateTimeSpec(convert_classy);
    convert_classy->remove_reference();
  }

void MoonPhaseAtTimeInformationNuggetJSON::fromJSONMoonPhasePct(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MoonPhasePct of MoonPhaseAtTimeInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MoonPhasePct of MoonPhaseAtTimeInformationNuggetJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setMoonPhasePct(extracted_integer);
  }

void MoonPhaseAtTimeInformationNuggetJSON::fromJSONMoonPhase(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MoonPhase of MoonPhaseAtTimeInformationNuggetJSON is not a string.");
    setMoonPhase(std::string(json_string->getData()));
  }

void MoonPhaseAtTimeInformationNuggetJSON::fromJSONRequestedDateTimeInThePast(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RequestedDateTimeInThePast of MoonPhaseAtTimeInformationNuggetJSON is not true for false.");
          }
      }
    setRequestedDateTimeInThePast(the_bool);
  }

MoonPhaseAtTimeInformationNuggetJSON::MoonPhaseAtTimeInformationNuggetJSON(void) :
        flagHasDateTimeSpec(false),
        flagHasMoonPhasePct(false),
        flagHasMoonPhase(false),
        flagHasRequestedDateTimeInThePast(false)
  {
    extraIndex = create_string_index();
  }

MoonPhaseAtTimeInformationNuggetJSON::~MoonPhaseAtTimeInformationNuggetJSON(void)
  {
    if (flagHasDateTimeSpec)
      {
        storeDateTimeSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MoonPhaseAtTimeInformationNuggetJSON::getDateAndTimeNuggetKind(void) const
  {
    return "MoonPhaseAtTime";
  }

bool MoonPhaseAtTimeInformationNuggetJSON::hasDateTimeSpec(void) const
  {
    return flagHasDateTimeSpec;
  }

DateTimeSpecJSON * MoonPhaseAtTimeInformationNuggetJSON::getDateTimeSpec(void)
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

const DateTimeSpecJSON * MoonPhaseAtTimeInformationNuggetJSON::getDateTimeSpec(void) const
  {
    assert(flagHasDateTimeSpec);
    return storeDateTimeSpec;
  }

bool MoonPhaseAtTimeInformationNuggetJSON::hasMoonPhasePct(void) const
  {
    return flagHasMoonPhasePct;
  }

uint8_t MoonPhaseAtTimeInformationNuggetJSON::getMoonPhasePct(void)
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

const uint8_t MoonPhaseAtTimeInformationNuggetJSON::getMoonPhasePct(void) const
  {
    assert(flagHasMoonPhasePct);
    return storeMoonPhasePct;
  }

bool MoonPhaseAtTimeInformationNuggetJSON::hasMoonPhase(void) const
  {
    return flagHasMoonPhase;
  }

std::string MoonPhaseAtTimeInformationNuggetJSON::getMoonPhase(void)
  {
    assert(flagHasMoonPhase);
    return storeMoonPhase;
  }

const std::string MoonPhaseAtTimeInformationNuggetJSON::getMoonPhase(void) const
  {
    assert(flagHasMoonPhase);
    return storeMoonPhase;
  }

bool MoonPhaseAtTimeInformationNuggetJSON::hasRequestedDateTimeInThePast(void) const
  {
    return flagHasRequestedDateTimeInThePast;
  }

bool MoonPhaseAtTimeInformationNuggetJSON::getRequestedDateTimeInThePast(void)
  {
    assert(flagHasRequestedDateTimeInThePast);
    return storeRequestedDateTimeInThePast;
  }

const bool MoonPhaseAtTimeInformationNuggetJSON::getRequestedDateTimeInThePast(void) const
  {
    assert(flagHasRequestedDateTimeInThePast);
    return storeRequestedDateTimeInThePast;
  }

MoonPhaseAtTimeInformationNuggetJSON *MoonPhaseAtTimeInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MoonPhaseAtTimeInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MoonPhaseAtTimeInformationNuggetJSON>, MoonPhaseAtTimeInformationNuggetJSON *, bool> generator("Type MoonPhaseAtTimeInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
