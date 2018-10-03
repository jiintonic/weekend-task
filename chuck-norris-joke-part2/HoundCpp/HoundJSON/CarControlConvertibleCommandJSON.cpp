/* file "CarControlConvertibleCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlConvertibleCommandJSON.h"

#include "CarControlConvertibleCommandJSON.h"


CarControlConvertibleCommandJSON::TypeCommandType CarControlConvertibleCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "eploy") == 0)
                return CommandType_Deploy;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "etract") == 0)
                return CommandType_Retract;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlConvertibleCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Retract:
            return "Retract";
        case CommandType_Deploy:
            return "Deploy";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlConvertibleCommandJSON::CarControlConvertibleCommandJSON(const CarControlConvertibleCommandJSON &)
  {
    assert(false);
  }

CarControlConvertibleCommandJSON &CarControlConvertibleCommandJSON::operator=(const CarControlConvertibleCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlConvertibleCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Retract:
            generated_string_CommandType = new JSONStringValue("Retract");
            break;
        case CommandType_Deploy:
            generated_string_CommandType = new JSONStringValue("Deploy");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlConvertibleCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlConvertibleCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "eploy") == 0)
                  {
                    the_enum = CommandType_Deploy;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "etract") == 0)
                  {
                    the_enum = CommandType_Retract;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlConvertibleCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlConvertibleCommandJSON::CarControlConvertibleCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlConvertibleCommandJSON::~CarControlConvertibleCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlConvertibleCommandJSON::getCarControlCommandKind(void) const
  {
    return "CarControlConvertibleCommand";
  }

bool CarControlConvertibleCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlConvertibleCommandJSON::TypeCommandType CarControlConvertibleCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlConvertibleCommandJSON::TypeCommandType CarControlConvertibleCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlConvertibleCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlConvertibleCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlConvertibleCommandJSON *CarControlConvertibleCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlConvertibleCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlConvertibleCommandJSON>, CarControlConvertibleCommandJSON *, bool> generator("Type CarControlConvertibleCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
