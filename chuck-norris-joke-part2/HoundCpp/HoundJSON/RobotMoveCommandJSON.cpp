/* file "RobotMoveCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RobotMoveCommandJSON.h"

#include "RobotMoveCommandJSON.h"


RobotMoveCommandJSON::TypeDistanceUnit::TypeDistanceUnit(void)
  {
  }

RobotMoveCommandJSON::TypeDistanceUnit::TypeDistanceUnit(const TypeDistanceUnit &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

RobotMoveCommandJSON::TypeDistanceUnit::TypeDistanceUnit(TypeDistanceUnitKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator==(const TypeDistanceUnit &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator!=(const TypeDistanceUnit &other) const
  {
    return !(operator==(other));
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator<(const TypeDistanceUnit &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator>(const TypeDistanceUnit &other) const
  {
    return other.operator<(*this);
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator>=(const TypeDistanceUnit &other) const
  {
    return !(operator<(other));
  }

bool RobotMoveCommandJSON::TypeDistanceUnit::operator<=(const TypeDistanceUnit &other) const
  {
    return !(other.operator<(*this));
  }

RobotMoveCommandJSON::TypeDistanceUnitKnownValues RobotMoveCommandJSON::stringToDistanceUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'c':
            if (strcmp(&(chars[1]), "entimeter") == 0)
                return DistanceUnit_centimeter;
            break;
        case 'f':
            if (strcmp(&(chars[1]), "oot") == 0)
                return DistanceUnit_foot;
            break;
        case 'i':
            if (strcmp(&(chars[1]), "nch") == 0)
                return DistanceUnit_inch;
            break;
        case 'm':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ter") == 0)
                        return DistanceUnit_meter;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "llimeter") == 0)
                        return DistanceUnit_millimeter;
                    break;
                default:
                    break;
              }
            break;
        case 'y':
            if (strcmp(&(chars[1]), "ard") == 0)
                return DistanceUnit_yard;
            break;
        default:
            break;
      }
    return DistanceUnit__none;
  }

const char *RobotMoveCommandJSON::stringFromDistanceUnit(TypeDistanceUnitKnownValues the_enum)
  {
    switch (the_enum)
      {
        case DistanceUnit_inch:
            return "inch";
        case DistanceUnit_foot:
            return "foot";
        case DistanceUnit_yard:
            return "yard";
        case DistanceUnit_millimeter:
            return "millimeter";
        case DistanceUnit_centimeter:
            return "centimeter";
        case DistanceUnit_meter:
            return "meter";
        default:
            assert(false);
            return NULL;
      }
  }

RobotMoveCommandJSON::RobotMoveCommandJSON(const RobotMoveCommandJSON &)
  {
    assert(false);
  }

RobotMoveCommandJSON &RobotMoveCommandJSON::operator=(const RobotMoveCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *RobotMoveCommandJSON::extraDirectionToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Direction = new JSONIntegerValue(storeDirection.get_o_integer());
    return generated_integer_Direction;
  }

JSONValue *RobotMoveCommandJSON::extraDistanceToJSON(void) const
  {
    JSONValue *generated_rational_Distance;
    if (((double)(long int)storeDistance) == storeDistance)
        generated_rational_Distance = new JSONIntegerValue((long int)(storeDistance));
    else
        generated_rational_Distance = new JSONRationalValue(storeDistance, DBL_DIG);
    return generated_rational_Distance;
  }

JSONValue *RobotMoveCommandJSON::extraDistanceUnitToJSON(void) const
  {
    JSONStringValue *generated_string_DistanceUnit;
    if (!(storeDistanceUnit.in_known_list))
      {
    generated_string_DistanceUnit = new JSONStringValue(storeDistanceUnit.string_value.c_str());
      }
    else
      {
    switch (storeDistanceUnit.list_value)
      {
        case DistanceUnit_inch:
            generated_string_DistanceUnit = new JSONStringValue("inch");
            break;
        case DistanceUnit_foot:
            generated_string_DistanceUnit = new JSONStringValue("foot");
            break;
        case DistanceUnit_yard:
            generated_string_DistanceUnit = new JSONStringValue("yard");
            break;
        case DistanceUnit_millimeter:
            generated_string_DistanceUnit = new JSONStringValue("millimeter");
            break;
        case DistanceUnit_centimeter:
            generated_string_DistanceUnit = new JSONStringValue("centimeter");
            break;
        case DistanceUnit_meter:
            generated_string_DistanceUnit = new JSONStringValue("meter");
            break;
        default:
            assert(false);
            generated_string_DistanceUnit = NULL;
      }
      }
    return generated_string_DistanceUnit;
  }

void RobotMoveCommandJSON::fromJSONDirection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Direction of RobotMoveCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Direction of RobotMoveCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDirection(extracted_integer);
  }

void RobotMoveCommandJSON::fromJSONDistance(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Distance of RobotMoveCommandJSON is not a number.");
          }
      }
    setDistanceText(the_rational_text);
  }

void RobotMoveCommandJSON::fromJSONDistanceUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DistanceUnit of RobotMoveCommandJSON is not a string.");
    TypeDistanceUnit the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "entimeter") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_centimeter;
                    goto open_enum_is_done;
                  }
            break;
        case 'f':
            if (strcmp(&(json_string->getData()[1]), "oot") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_foot;
                    goto open_enum_is_done;
                  }
            break;
        case 'i':
            if (strcmp(&(json_string->getData()[1]), "nch") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_inch;
                    goto open_enum_is_done;
                  }
            break;
        case 'm':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ter") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DistanceUnit_meter;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "llimeter") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = DistanceUnit_millimeter;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'y':
            if (strcmp(&(json_string->getData()[1]), "ard") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = DistanceUnit_yard;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setDistanceUnit(the_open_enum);
  }

RobotMoveCommandJSON::RobotMoveCommandJSON(void) :
        flagHasDirection(false),
        flagHasDistance(false),
        flagHasDistanceUnit(false)
  {
    extraIndex = create_string_index();
  }

RobotMoveCommandJSON::~RobotMoveCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *RobotMoveCommandJSON::getRobotCommandKind(void) const
  {
    return "MoveCommand";
  }

bool RobotMoveCommandJSON::hasDirection(void) const
  {
    return flagHasDirection;
  }

OInteger RobotMoveCommandJSON::getDirection(void)
  {
    assert(flagHasDirection);
    return storeDirection;
  }

const OInteger RobotMoveCommandJSON::getDirection(void) const
  {
    assert(flagHasDirection);
    return storeDirection;
  }

bool RobotMoveCommandJSON::hasDistance(void) const
  {
    return flagHasDistance;
  }

double RobotMoveCommandJSON::getDistance(void)
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

const double RobotMoveCommandJSON::getDistance(void) const
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

std::string RobotMoveCommandJSON::getDistanceAsText(void) const
  {
    assert(flagHasDistance);
    if (textStoreDistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDistance);
      }
  }

bool RobotMoveCommandJSON::hasDistanceUnit(void) const
  {
    return flagHasDistanceUnit;
  }

RobotMoveCommandJSON::TypeDistanceUnit RobotMoveCommandJSON::getDistanceUnit(void)
  {
    assert(flagHasDistanceUnit);
    return storeDistanceUnit;
  }

const RobotMoveCommandJSON::TypeDistanceUnit RobotMoveCommandJSON::getDistanceUnit(void) const
  {
    assert(flagHasDistanceUnit);
    return storeDistanceUnit;
  }

const char *RobotMoveCommandJSON::getDistanceUnitAsChars(void) const
  {
    TypeDistanceUnit result = getDistanceUnit();
    if (result.in_known_list)
        return stringFromDistanceUnit(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string RobotMoveCommandJSON::getDistanceUnitAsString(void) const
  {
    return getDistanceUnitAsChars();
  }

char RobotMoveCommandJSON::Generator::lowerBoundDirection[] = "-180";
char RobotMoveCommandJSON::Generator::upperBoundDirection[] = "180";
RobotMoveCommandJSON *RobotMoveCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RobotMoveCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RobotMoveCommandJSON>, RobotMoveCommandJSON *, bool> generator("Type RobotMoveCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
