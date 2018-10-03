/* file "CarControlLightsModeNotUnderstoodJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarControlLightsModeNotUnderstoodJSON.h"

#include "CarControlLightsModeNotUnderstoodJSON.h"


CarControlLightsModeNotUnderstoodJSON::TypeCommandType CarControlLightsModeNotUnderstoodJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "arkOut") == 0)
                return CommandType_DarkOut;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "oggy") == 0)
                return CommandType_Foggy;
            break;
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CarControlLightsModeNotUnderstoodJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_Foggy:
            return "Foggy";
        case CommandType_DarkOut:
            return "DarkOut";
        default:
            assert(false);
            return NULL;
      }
  }

CarControlLightsModeNotUnderstoodJSON::CarControlLightsModeNotUnderstoodJSON(const CarControlLightsModeNotUnderstoodJSON &)
  {
    assert(false);
  }

CarControlLightsModeNotUnderstoodJSON &CarControlLightsModeNotUnderstoodJSON::operator=(const CarControlLightsModeNotUnderstoodJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CarControlLightsModeNotUnderstoodJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_Foggy:
            generated_string_CommandType = new JSONStringValue("Foggy");
            break;
        case CommandType_DarkOut:
            generated_string_CommandType = new JSONStringValue("DarkOut");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CarControlLightsModeNotUnderstoodJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CarControlLightsModeNotUnderstoodJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "arkOut") == 0)
                  {
                    the_enum = CommandType_DarkOut;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "oggy") == 0)
                  {
                    the_enum = CommandType_Foggy;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandType of CarControlLightsModeNotUnderstoodJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CarControlLightsModeNotUnderstoodJSON::CarControlLightsModeNotUnderstoodJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CarControlLightsModeNotUnderstoodJSON::~CarControlLightsModeNotUnderstoodJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CarControlLightsModeNotUnderstoodJSON::getCarControlCommandKind(void) const
  {
    return "CarControlLightsModeNotUnderstood";
  }

bool CarControlLightsModeNotUnderstoodJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CarControlLightsModeNotUnderstoodJSON::TypeCommandType CarControlLightsModeNotUnderstoodJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CarControlLightsModeNotUnderstoodJSON::TypeCommandType CarControlLightsModeNotUnderstoodJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CarControlLightsModeNotUnderstoodJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CarControlLightsModeNotUnderstoodJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CarControlLightsModeNotUnderstoodJSON *CarControlLightsModeNotUnderstoodJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarControlLightsModeNotUnderstoodJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarControlLightsModeNotUnderstoodJSON>, CarControlLightsModeNotUnderstoodJSON *, bool> generator("Type CarControlLightsModeNotUnderstood", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
