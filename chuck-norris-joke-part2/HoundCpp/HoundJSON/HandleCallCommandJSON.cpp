/* file "HandleCallCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HandleCallCommandJSON.h"

#include "HandleCallCommandJSON.h"


HandleCallCommandJSON::TypeAction HandleCallCommandJSON::stringToAction(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "nswer") == 0)
                return Action_Answer;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "gnore") == 0)
                return Action_Ignore;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "eject") == 0)
                return Action_Reject;
            break;
        default:
            break;
      }
    throw("The value for field `Action' is not one of the legal values.");
  }

const char *HandleCallCommandJSON::stringFromAction(TypeAction the_enum)
  {
    switch (the_enum)
      {
        case Action_Answer:
            return "Answer";
        case Action_Reject:
            return "Reject";
        case Action_Ignore:
            return "Ignore";
        default:
            assert(false);
            return NULL;
      }
  }

HandleCallCommandJSON::HandleCallCommandJSON(const HandleCallCommandJSON &)
  {
    assert(false);
  }

HandleCallCommandJSON &HandleCallCommandJSON::operator=(const HandleCallCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *HandleCallCommandJSON::extraActionToJSON(void) const
  {
    JSONStringValue *generated_string_Action;
    switch (storeAction)
      {
        case Action_Answer:
            generated_string_Action = new JSONStringValue("Answer");
            break;
        case Action_Reject:
            generated_string_Action = new JSONStringValue("Reject");
            break;
        case Action_Ignore:
            generated_string_Action = new JSONStringValue("Ignore");
            break;
        default:
            assert(false);
            generated_string_Action = NULL;
      }
    return generated_string_Action;
  }

void HandleCallCommandJSON::fromJSONAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Action of HandleCallCommandJSON is not a string.");
    TypeAction the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "nswer") == 0)
                  {
                    the_enum = Action_Answer;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "gnore") == 0)
                  {
                    the_enum = Action_Ignore;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "eject") == 0)
                  {
                    the_enum = Action_Reject;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Action of HandleCallCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setAction(the_enum);
  }

HandleCallCommandJSON::HandleCallCommandJSON(void) :
        flagHasAction(false)
  {
    extraIndex = create_string_index();
  }

HandleCallCommandJSON::~HandleCallCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *HandleCallCommandJSON::getPhoneCommandKind(void) const
  {
    return "HandleCall";
  }

bool HandleCallCommandJSON::hasAction(void) const
  {
    return flagHasAction;
  }

HandleCallCommandJSON::TypeAction HandleCallCommandJSON::getAction(void)
  {
    assert(flagHasAction);
    return storeAction;
  }

const HandleCallCommandJSON::TypeAction HandleCallCommandJSON::getAction(void) const
  {
    assert(flagHasAction);
    return storeAction;
  }

const char *HandleCallCommandJSON::getActionAsChars(void) const
  {
    return stringFromAction(getAction());
  }

std::string HandleCallCommandJSON::getActionAsString(void) const
  {
    return stringFromAction(getAction());
  }

HandleCallCommandJSON *HandleCallCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HandleCallCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HandleCallCommandJSON>, HandleCallCommandJSON *, bool> generator("Type HandleCallCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
