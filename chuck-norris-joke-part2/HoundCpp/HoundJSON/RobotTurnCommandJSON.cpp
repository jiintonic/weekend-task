/* file "RobotTurnCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotTurnCommandJSON.h"

#include "RobotTurnCommandJSON.h"


RobotTurnCommandJSON::RobotTurnCommandJSON(const RobotTurnCommandJSON &)
  {
    assert(false);
  }

RobotTurnCommandJSON &RobotTurnCommandJSON::operator=(const RobotTurnCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotTurnCommandJSON::extraDirectionToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Direction = new JSONIntegerValue(storeDirection.get_o_integer());
    return generated_integer_Direction;
  }

void RobotTurnCommandJSON::fromJSONDirection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Direction of RobotTurnCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Direction of RobotTurnCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDirection(extracted_integer);
  }

RobotTurnCommandJSON::RobotTurnCommandJSON(void) :
        flagHasDirection(false)
  {
    extraIndex = create_string_index();
  }

RobotTurnCommandJSON::~RobotTurnCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotTurnCommandJSON::getRobotCommandKind(void) const
  {
    return "TurnCommand";
  }

bool RobotTurnCommandJSON::hasDirection(void) const
  {
    return flagHasDirection;
  }

OInteger RobotTurnCommandJSON::getDirection(void)
  {
    assert(flagHasDirection);
    return storeDirection;
  }

const OInteger RobotTurnCommandJSON::getDirection(void) const
  {
    assert(flagHasDirection);
    return storeDirection;
  }

char RobotTurnCommandJSON::Generator::lowerBoundDirection[] = "-180";
char RobotTurnCommandJSON::Generator::upperBoundDirection[] = "180";
RobotTurnCommandJSON *RobotTurnCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotTurnCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotTurnCommandJSON>, RobotTurnCommandJSON *, bool> generator("Type RobotTurnCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
