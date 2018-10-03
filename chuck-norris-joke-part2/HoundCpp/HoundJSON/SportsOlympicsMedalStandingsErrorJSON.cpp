/* file "SportsOlympicsMedalStandingsErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsMedalStandingsErrorJSON.h"

#include "SportsOlympicsMedalStandingsErrorJSON.h"


SportsOlympicsMedalStandingsErrorJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsMedalStandingsErrorJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsMedalStandingsErrorJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsMedalStandingsErrorJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsMedalStandingsErrorJSON::TypeValueKnownValues SportsOlympicsMedalStandingsErrorJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strcmp(&(chars[1]), "ataUnavailable") == 0)
                return Value_DataUnavailable;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "oOrganization", 13) == 0)
              {
                switch ((unsigned char)(chars[14]))
                  {
                    case 'I':
                        if (strcmp(&(chars[15]), "nRank") == 0)
                            return Value_NoOrganizationInRank;
                        break;
                    case 's':
                        if (strcmp(&(chars[15]), "InResponse") == 0)
                            return Value_NoOrganizationsInResponse;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "ympicsGamesNotStarted") == 0)
                        return Value_OlympicsGamesNotStarted;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ganizationNotFound") == 0)
                        return Value_OrganizationNotFound;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *SportsOlympicsMedalStandingsErrorJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_DataUnavailable:
            return "DataUnavailable";
        case Value_NoOrganizationInRank:
            return "NoOrganizationInRank";
        case Value_OrganizationNotFound:
            return "OrganizationNotFound";
        case Value_OlympicsGamesNotStarted:
            return "OlympicsGamesNotStarted";
        case Value_NoOrganizationsInResponse:
            return "NoOrganizationsInResponse";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(const SportsOlympicsMedalStandingsErrorJSON &)
  {
    assert(false);
  }

SportsOlympicsMedalStandingsErrorJSON &SportsOlympicsMedalStandingsErrorJSON::operator=(const SportsOlympicsMedalStandingsErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsMedalStandingsErrorJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsMedalStandingsErrorJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ataUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_DataUnavailable;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "oOrganization", 13) == 0)
              {
                switch ((unsigned char)(json_string->getData()[14]))
                  {
                    case 'I':
                        if (strcmp(&(json_string->getData()[15]), "nRank") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_NoOrganizationInRank;
                                goto open_enum_is_done;
                              }
                        break;
                    case 's':
                        if (strcmp(&(json_string->getData()[15]), "InResponse") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_NoOrganizationsInResponse;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'O':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ympicsGamesNotStarted") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_OlympicsGamesNotStarted;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ganizationNotFound") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_OrganizationNotFound;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
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

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(const char *init_value) :
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

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(std::string init_value) :
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

SportsOlympicsMedalStandingsErrorJSON::SportsOlympicsMedalStandingsErrorJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsMedalStandingsErrorJSON::~SportsOlympicsMedalStandingsErrorJSON(void)
  {
  }

bool SportsOlympicsMedalStandingsErrorJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsMedalStandingsErrorJSON::TypeValue SportsOlympicsMedalStandingsErrorJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsMedalStandingsErrorJSON::TypeValue SportsOlympicsMedalStandingsErrorJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsMedalStandingsErrorJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsMedalStandingsErrorJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsMedalStandingsErrorJSON *SportsOlympicsMedalStandingsErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsMedalStandingsErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsErrorJSON>, SportsOlympicsMedalStandingsErrorJSON *, bool> generator("Type SportsOlympicsMedalStandingsError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
