/* file "UploadedCodeSourceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UploadedCodeSourceJSON.h"

#include "UploadedCodeSourceJSON.h"


UploadedCodeSourceJSON::UploadedCodeSourceJSON(const UploadedCodeSourceJSON &)
  {
    assert(false);
  }

UploadedCodeSourceJSON &UploadedCodeSourceJSON::operator=(const UploadedCodeSourceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UploadedCodeSourceJSON::fromJSONFileName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FileName of UploadedCodeSourceJSON is not a string.");
    setFileName(std::string(json_string->getData()));
  }

void UploadedCodeSourceJSON::fromJSONStartLineNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartLineNumber of UploadedCodeSourceJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartLineNumber of UploadedCodeSourceJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartLineNumber(extracted_integer);
  }

void UploadedCodeSourceJSON::fromJSONStartColumnNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartColumnNumber of UploadedCodeSourceJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartColumnNumber of UploadedCodeSourceJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartColumnNumber(extracted_integer);
  }

UploadedCodeSourceJSON::UploadedCodeSourceJSON(void) :
        flagHasFileName(false),
        flagHasStartLineNumber(false),
        flagHasStartColumnNumber(false)
  {
    extraIndex = create_string_index();
  }

UploadedCodeSourceJSON::~UploadedCodeSourceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UploadedCodeSourceJSON::hasFileName(void) const
  {
    return flagHasFileName;
  }

std::string UploadedCodeSourceJSON::getFileName(void)
  {
    assert(flagHasFileName);
    return storeFileName;
  }

const std::string UploadedCodeSourceJSON::getFileName(void) const
  {
    assert(flagHasFileName);
    return storeFileName;
  }

bool UploadedCodeSourceJSON::hasStartLineNumber(void) const
  {
    return flagHasStartLineNumber;
  }

OInteger UploadedCodeSourceJSON::getStartLineNumber(void)
  {
    assert(flagHasStartLineNumber);
    return storeStartLineNumber;
  }

const OInteger UploadedCodeSourceJSON::getStartLineNumber(void) const
  {
    assert(flagHasStartLineNumber);
    return storeStartLineNumber;
  }

bool UploadedCodeSourceJSON::hasStartColumnNumber(void) const
  {
    return flagHasStartColumnNumber;
  }

OInteger UploadedCodeSourceJSON::getStartColumnNumber(void)
  {
    assert(flagHasStartColumnNumber);
    return storeStartColumnNumber;
  }

const OInteger UploadedCodeSourceJSON::getStartColumnNumber(void) const
  {
    assert(flagHasStartColumnNumber);
    return storeStartColumnNumber;
  }

char UploadedCodeSourceJSON::Generator::lowerBoundStartLineNumber[] = "1";
char UploadedCodeSourceJSON::Generator::lowerBoundStartColumnNumber[] = "1";
UploadedCodeSourceJSON *UploadedCodeSourceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UploadedCodeSourceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UploadedCodeSourceJSON>, UploadedCodeSourceJSON *, bool> generator("Type UploadedCodeSource", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
