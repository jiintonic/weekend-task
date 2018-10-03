/* file "CarControlWindowModeNotUnderstoodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlWindowModeNotUnderstoodJSON.h"

#include "CarControlWindowModeNotUnderstoodJSON.h"


CarControlWindowModeNotUnderstoodJSON::TypeCommandType CarControlWindowModeNotUnderstoodJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'R':
            if (strcmp(&(chars[1]), "aining") == 0)
                return CommandType_Raining;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "tinks") == 0)
                return CommandType_Stinks;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlWindowModeNotUnderstoodJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Raining:
            return "Raining";
        case CommandType_Stinks:
            return "Stinks";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlWindowModeNotUnderstoodJSON::CarControlWindowModeNotUnderstoodJSON(const CarControlWindowModeNotUnderstoodJSON &)
  {
    assert(false);
  }

CarControlWindowModeNotUnderstoodJSON &CarControlWindowModeNotUnderstoodJSON::operator=(const CarControlWindowModeNotUnderstoodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlWindowModeNotUnderstoodJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Raining:
            generated_string_CommandType = new JSONStringValue("Raining");
            break;
        case CommandType_Stinks:
            generated_string_CommandType = new JSONStringValue("Stinks");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlWindowModeNotUnderstoodJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlWindowModeNotUnderstoodJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "aining") == 0)
                  {
                    the_enum = CommandType_Raining;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "tinks") == 0)
                  {
                    the_enum = CommandType_Stinks;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlWindowModeNotUnderstoodJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlWindowModeNotUnderstoodJSON::CarControlWindowModeNotUnderstoodJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlWindowModeNotUnderstoodJSON::~CarControlWindowModeNotUnderstoodJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlWindowModeNotUnderstoodJSON::getCarControlCommandKind(void) const
  {
    return "CarControlWindowModeNotUnderstood";
  }

bool CarControlWindowModeNotUnderstoodJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlWindowModeNotUnderstoodJSON::TypeCommandType CarControlWindowModeNotUnderstoodJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlWindowModeNotUnderstoodJSON::TypeCommandType CarControlWindowModeNotUnderstoodJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlWindowModeNotUnderstoodJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlWindowModeNotUnderstoodJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlWindowModeNotUnderstoodJSON *CarControlWindowModeNotUnderstoodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlWindowModeNotUnderstoodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlWindowModeNotUnderstoodJSON>, CarControlWindowModeNotUnderstoodJSON *, bool> generator("Type CarControlWindowModeNotUnderstood", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
