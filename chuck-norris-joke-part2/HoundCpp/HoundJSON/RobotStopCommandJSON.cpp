/* file "RobotStopCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotStopCommandJSON.h"

#include "RobotStopCommandJSON.h"


RobotStopCommandJSON::TypeScope RobotStopCommandJSON::stringToScope(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            if (strcmp(&(chars[1]), "ll") == 0)
                return Scope_all;
            break;
        case 'l':
            if (strcmp(&(chars[1]), "ast") == 0)
                return Scope_last;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "ovement") == 0)
                return Scope_movement;
            break;
        default:
            break;
      }
    throw("The value for field `Scope' is not one of the legal values.");
  }

const char *RobotStopCommandJSON::stringFromScope(TypeScope the_enum)
  {
    switch (the_enum)
      {
        case Scope_all:
            return "all";
        case Scope_last:
            return "last";
        case Scope_movement:
            return "movement";
        default:
            assert(false);
            return NULL;
      }
  }

RobotStopCommandJSON::RobotStopCommandJSON(const RobotStopCommandJSON &)
  {
    assert(false);
  }

RobotStopCommandJSON &RobotStopCommandJSON::operator=(const RobotStopCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotStopCommandJSON::extraAlreadyStoppedResultToJSON(void) const
  {
    JSONValueHandler handler_AlreadyStoppedResult;
    storeAlreadyStoppedResult->write_as_json(&handler_AlreadyStoppedResult);
    handler_AlreadyStoppedResult.result->add_reference();
    return handler_AlreadyStoppedResult.result;
  }

JSONValue *RobotStopCommandJSON::extraScopeToJSON(void) const
  {
    JSONStringValue *generated_string_Scope;
    switch (storeScope)
      {
        case Scope_all:
            generated_string_Scope = new JSONStringValue("all");
            break;
        case Scope_last:
            generated_string_Scope = new JSONStringValue("last");
            break;
        case Scope_movement:
            generated_string_Scope = new JSONStringValue("movement");
            break;
        default:
            assert(false);
            generated_string_Scope = NULL;
      }
    return generated_string_Scope;
  }

void RobotStopCommandJSON::fromJSONAlreadyStoppedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlreadyStoppedResult(convert_classy);
    convert_classy->remove_reference();
  }

void RobotStopCommandJSON::fromJSONScope(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Scope of RobotStopCommandJSON is not a string.");
    TypeScope the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'a':
            if (strcmp(&(json_string->getData()[1]), "ll") == 0)
                  {
                    the_enum = Scope_all;
                    goto enum_is_done;
                  }
            break;
        case 'l':
            if (strcmp(&(json_string->getData()[1]), "ast") == 0)
                  {
                    the_enum = Scope_last;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "ovement") == 0)
                  {
                    the_enum = Scope_movement;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Scope of RobotStopCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setScope(the_enum);
  }

RobotStopCommandJSON::RobotStopCommandJSON(void) :
        flagHasAlreadyStoppedResult(false),
        flagHasScope(false)
  {
    extraIndex = create_string_index();
  }

RobotStopCommandJSON::~RobotStopCommandJSON(void)
  {
    if (flagHasAlreadyStoppedResult)
      {
        storeAlreadyStoppedResult->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotStopCommandJSON::getRobotCommandKind(void) const
  {
    return "StopCommand";
  }

bool RobotStopCommandJSON::hasAlreadyStoppedResult(void) const
  {
    return flagHasAlreadyStoppedResult;
  }

DynamicResponseJSON * RobotStopCommandJSON::getAlreadyStoppedResult(void)
  {
    assert(flagHasAlreadyStoppedResult);
    return storeAlreadyStoppedResult;
  }

const DynamicResponseJSON * RobotStopCommandJSON::getAlreadyStoppedResult(void) const
  {
    assert(flagHasAlreadyStoppedResult);
    return storeAlreadyStoppedResult;
  }

bool RobotStopCommandJSON::hasScope(void) const
  {
    return flagHasScope;
  }

RobotStopCommandJSON::TypeScope RobotStopCommandJSON::getScope(void)
  {
    assert(flagHasScope);
    return storeScope;
  }

const RobotStopCommandJSON::TypeScope RobotStopCommandJSON::getScope(void) const
  {
    assert(flagHasScope);
    return storeScope;
  }

const char *RobotStopCommandJSON::getScopeAsChars(void) const
  {
    return stringFromScope(getScope());
  }

std::string RobotStopCommandJSON::getScopeAsString(void) const
  {
    return stringFromScope(getScope());
  }

RobotStopCommandJSON *RobotStopCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotStopCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotStopCommandJSON>, RobotStopCommandJSON *, bool> generator("Type RobotStopCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
