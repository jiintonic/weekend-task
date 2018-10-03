/* file "CameraCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CameraCommandJSON.h"

#include "CameraCommandJSON.h"


CameraCommandJSON::TypeCommandType CameraCommandJSON::stringToCommandType(const char *chars)
  {
    if (strcmp(chars, "TakeAPicture") == 0)
        return CommandType_TakeAPicture;
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CameraCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TakeAPicture:
            return "TakeAPicture";
        default:
            assert(false);
            return NULL;
      }
  }

CameraCommandJSON::CameraCommandJSON(const CameraCommandJSON &)
  {
    assert(false);
  }

CameraCommandJSON &CameraCommandJSON::operator=(const CameraCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CameraCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    generated_string_CommandType = new JSONStringValue("TakeAPicture");
    return generated_string_CommandType;
  }

void CameraCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CameraCommandJSON is not a string.");
    if (!(strcmp(json_string->getData(), "TakeAPicture") == 0))
        throw("The value for field CommandType of CameraCommandJSON is not `TakeAPicture'.");
    setCommandType();
  }

CameraCommandJSON::CameraCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CameraCommandJSON::~CameraCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CameraCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "CameraCommand";
  }

bool CameraCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CameraCommandJSON::TypeCommandType CameraCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return CommandType_TakeAPicture;
  }

const CameraCommandJSON::TypeCommandType CameraCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return CommandType_TakeAPicture;
  }

const char *CameraCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CameraCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CameraCommandJSON *CameraCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CameraCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CameraCommandJSON>, CameraCommandJSON *, bool> generator("Type CameraCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
