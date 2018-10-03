/* file "GenericUberErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GenericUberErrorJSON.h"

#include "GenericUberErrorJSON.h"


GenericUberErrorJSON::GenericUberErrorJSON(const GenericUberErrorJSON &)
  {
    assert(false);
  }

GenericUberErrorJSON &GenericUberErrorJSON::operator=(const GenericUberErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GenericUberErrorJSON::fromJSONstatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field status of GenericUberErrorJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field status of GenericUberErrorJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setstatus(extracted_integer);
  }

void GenericUberErrorJSON::fromJSONcode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field code of GenericUberErrorJSON is not a string.");
    setcode(std::string(json_string->getData()));
  }

void GenericUberErrorJSON::fromJSONtitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field title of GenericUberErrorJSON is not a string.");
    settitle(std::string(json_string->getData()));
  }

GenericUberErrorJSON::GenericUberErrorJSON(void) :
        flagHasstatus(false),
        flagHascode(false),
        flagHastitle(false)
  {
    extraIndex = create_string_index();
  }

GenericUberErrorJSON::~GenericUberErrorJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GenericUberErrorJSON::hasstatus(void) const
  {
    return flagHasstatus;
  }

OInteger GenericUberErrorJSON::getstatus(void)
  {
    assert(flagHasstatus);
    return storestatus;
  }

const OInteger GenericUberErrorJSON::getstatus(void) const
  {
    assert(flagHasstatus);
    return storestatus;
  }

bool GenericUberErrorJSON::hascode(void) const
  {
    return flagHascode;
  }

std::string GenericUberErrorJSON::getcode(void)
  {
    assert(flagHascode);
    return storecode;
  }

const std::string GenericUberErrorJSON::getcode(void) const
  {
    assert(flagHascode);
    return storecode;
  }

bool GenericUberErrorJSON::hastitle(void) const
  {
    return flagHastitle;
  }

std::string GenericUberErrorJSON::gettitle(void)
  {
    assert(flagHastitle);
    return storetitle;
  }

const std::string GenericUberErrorJSON::gettitle(void) const
  {
    assert(flagHastitle);
    return storetitle;
  }

char GenericUberErrorJSON::Generator::lowerBoundstatus[] = "0";
GenericUberErrorJSON *GenericUberErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GenericUberErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GenericUberErrorJSON>, GenericUberErrorJSON *, bool> generator("Type GenericUberError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
