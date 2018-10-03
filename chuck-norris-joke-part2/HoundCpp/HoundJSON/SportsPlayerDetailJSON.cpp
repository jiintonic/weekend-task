/* file "SportsPlayerDetailJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayerDetailJSON.h"

#include "SportsPlayerDetailJSON.h"


SportsPlayerDetailJSON::TypeValue::TypeValue(void)
  {
  }

SportsPlayerDetailJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayerDetailJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayerDetailJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayerDetailJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayerDetailJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayerDetailJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayerDetailJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayerDetailJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayerDetailJSON::TypeValueKnownValues SportsPlayerDetailJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ge") == 0)
                return Value_Age;
            break;
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tHand") == 0)
                        return Value_BatHand;
                    break;
                case 'i':
                    if (strncmp(&(chars[2]), "rth", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'D':
                                if (strcmp(&(chars[6]), "ate") == 0)
                                    return Value_BirthDate;
                                break;
                            case 'L':
                                if (strcmp(&(chars[6]), "ocation") == 0)
                                    return Value_BirthLocation;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "ollege") == 0)
                return Value_College;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "xperience") == 0)
                return Value_Experience;
            break;
        case 'H':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ight") == 0)
                        return Value_Height;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "ghSchool") == 0)
                        return Value_HighSchool;
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(chars[1]), "erseyNumber") == 0)
                return Value_JerseyNumber;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "eague") == 0)
                return Value_League;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "osition") == 0)
                return Value_Position;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "am") == 0)
                        return Value_Team;
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "rowHand") == 0)
                        return Value_ThrowHand;
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            if (strcmp(&(chars[1]), "eight") == 0)
                return Value_Weight;
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsPlayerDetailJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Team:
            return "Team";
        case Value_League:
            return "League";
        case Value_Position:
            return "Position";
        case Value_JerseyNumber:
            return "JerseyNumber";
        case Value_Weight:
            return "Weight";
        case Value_Height:
            return "Height";
        case Value_ThrowHand:
            return "ThrowHand";
        case Value_BatHand:
            return "BatHand";
        case Value_BirthDate:
            return "BirthDate";
        case Value_Age:
            return "Age";
        case Value_BirthLocation:
            return "BirthLocation";
        case Value_College:
            return "College";
        case Value_HighSchool:
            return "HighSchool";
        case Value_Experience:
            return "Experience";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(const SportsPlayerDetailJSON &)
  {
    assert(false);
  }

SportsPlayerDetailJSON &SportsPlayerDetailJSON::operator=(const SportsPlayerDetailJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayerDetailJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsPlayerDetailJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ge") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Age;
                    goto open_enum_is_done;
                  }
            break;
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "tHand") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_BatHand;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strncmp(&(json_string->getData()[2]), "rth", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'D':
                                if (strcmp(&(json_string->getData()[6]), "ate") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_BirthDate;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'L':
                                if (strcmp(&(json_string->getData()[6]), "ocation") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_BirthLocation;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ollege") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_College;
                    goto open_enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xperience") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Experience;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ight") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Height;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ghSchool") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_HighSchool;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "erseyNumber") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_JerseyNumber;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "eague") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_League;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "osition") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Position;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "am") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Team;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "rowHand") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ThrowHand;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "eight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Weight;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setValue(the_open_enum);
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(void) :
        flagHasValue(false)
  {
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

SportsPlayerDetailJSON::SportsPlayerDetailJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsPlayerDetailJSON::~SportsPlayerDetailJSON(void)
  {
  }

bool SportsPlayerDetailJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsPlayerDetailJSON::TypeValue SportsPlayerDetailJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsPlayerDetailJSON::TypeValue SportsPlayerDetailJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsPlayerDetailJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayerDetailJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsPlayerDetailJSON *SportsPlayerDetailJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayerDetailJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayerDetailJSON>, SportsPlayerDetailJSON *, bool> generator("Type SportsPlayerDetail", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
