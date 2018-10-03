/* file "CarMirrorSelectionEnumJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CarMirrorSelectionEnumJSON.h"

#include "CarMirrorSelectionEnumJSON.h"


CarMirrorSelectionEnumJSON::TypeValue CarMirrorSelectionEnumJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "othMirrors") == 0)
                return Value_BothMirrors;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "riverMirror") == 0)
                return Value_DriverMirror;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eftMirror") == 0)
                return Value_LeftMirror;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "assengerMirror") == 0)
                return Value_PassengerMirror;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "ightMirror") == 0)
                return Value_RightMirror;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *CarMirrorSelectionEnumJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_LeftMirror:
            return "LeftMirror";
        case Value_RightMirror:
            return "RightMirror";
        case Value_DriverMirror:
            return "DriverMirror";
        case Value_PassengerMirror:
            return "PassengerMirror";
        case Value_BothMirrors:
            return "BothMirrors";
        default:
            assert(false);
            return NULL;
      }
  }

CarMirrorSelectionEnumJSON::CarMirrorSelectionEnumJSON(const CarMirrorSelectionEnumJSON &)
  {
    assert(false);
  }

CarMirrorSelectionEnumJSON &CarMirrorSelectionEnumJSON::operator=(const CarMirrorSelectionEnumJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CarMirrorSelectionEnumJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of CarMirrorSelectionEnumJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "othMirrors") == 0)
                  {
                    the_enum = Value_BothMirrors;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "riverMirror") == 0)
                  {
                    the_enum = Value_DriverMirror;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eftMirror") == 0)
                  {
                    the_enum = Value_LeftMirror;
                    goto enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "assengerMirror") == 0)
                  {
                    the_enum = Value_PassengerMirror;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ightMirror") == 0)
                  {
                    the_enum = Value_RightMirror;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of CarMirrorSelectionEnumJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

CarMirrorSelectionEnumJSON::CarMirrorSelectionEnumJSON(void) :
        flagHasValue(false)
  {
  }

CarMirrorSelectionEnumJSON::CarMirrorSelectionEnumJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

CarMirrorSelectionEnumJSON::CarMirrorSelectionEnumJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

CarMirrorSelectionEnumJSON::CarMirrorSelectionEnumJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

CarMirrorSelectionEnumJSON::~CarMirrorSelectionEnumJSON(void)
  {
  }

bool CarMirrorSelectionEnumJSON::hasValue(void) const
  {
    return flagHasValue;
  }

CarMirrorSelectionEnumJSON::TypeValue CarMirrorSelectionEnumJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const CarMirrorSelectionEnumJSON::TypeValue CarMirrorSelectionEnumJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *CarMirrorSelectionEnumJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string CarMirrorSelectionEnumJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

CarMirrorSelectionEnumJSON *CarMirrorSelectionEnumJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CarMirrorSelectionEnumJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CarMirrorSelectionEnumJSON>, CarMirrorSelectionEnumJSON *, bool> generator("Type CarMirrorSelectionEnum", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
