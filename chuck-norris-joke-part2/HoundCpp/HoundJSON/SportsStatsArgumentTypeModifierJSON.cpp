/* file "SportsStatsArgumentTypeModifierJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsStatsArgumentTypeModifierJSON.h"

#include "SportsStatsArgumentTypeModifierJSON.h"


SportsStatsArgumentTypeModifierJSON::TypeArgumentType SportsStatsArgumentTypeModifierJSON::stringToArgumentType(const char *chars)
  {
    if (strcmp(chars, "SportsStatsArgumentTypeModifier") == 0)
        return ArgumentType_SportsStatsArgumentTypeModifier;
    throw("The value for field `ArgumentType' is not one of the legal values.");
  }

const char *SportsStatsArgumentTypeModifierJSON::stringFromArgumentType(TypeArgumentType the_enum)
  {
    switch (the_enum)
      {
        case ArgumentType_SportsStatsArgumentTypeModifier:
            return "SportsStatsArgumentTypeModifier";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStatsArgumentTypeModifierJSON::TypeModifierName::TypeModifierName(void)
  {
  }

SportsStatsArgumentTypeModifierJSON::TypeModifierName::TypeModifierName(const TypeModifierName &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsStatsArgumentTypeModifierJSON::TypeModifierName::TypeModifierName(TypeModifierNameKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator==(const TypeModifierName &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator!=(const TypeModifierName &other) const
  {
    return !(operator==(other));
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator<(const TypeModifierName &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator>(const TypeModifierName &other) const
  {
    return other.operator<(*this);
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator>=(const TypeModifierName &other) const
  {
    return !(operator<(other));
  }

bool SportsStatsArgumentTypeModifierJSON::TypeModifierName::operator<=(const TypeModifierName &other) const
  {
    return !(other.operator<(*this));
  }

SportsStatsArgumentTypeModifierJSON::TypeModifierNameKnownValues SportsStatsArgumentTypeModifierJSON::stringToModifierName(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'N':
            if (strncmp(&(chars[1]), "HL", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'E':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'm':
                                if (strcmp(&(chars[5]), "ptyNet") == 0)
                                    return ModifierName_NHLEmptyNet;
                                break;
                            case 'v':
                                if (strcmp(&(chars[5]), "enStrength") == 0)
                                    return ModifierName_NHLEvenStrength;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'P':
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'e':
                                if (strcmp(&(chars[5]), "nalty") == 0)
                                    return ModifierName_NHLPenalty;
                                break;
                            case 'o':
                                if (strcmp(&(chars[5]), "werPlay") == 0)
                                    return ModifierName_NHLPowerPlay;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(chars[4]), "ho", 2) == 0)
                          {
                            switch ((unsigned char)(chars[6]))
                              {
                                case 'o':
                                    if (strcmp(&(chars[7]), "tout") == 0)
                                        return ModifierName_NHLShootout;
                                    break;
                                case 'r':
                                    if (strcmp(&(chars[7]), "tHanded") == 0)
                                        return ModifierName_NHLShortHanded;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'P':
            if (strcmp(&(chars[1]), "erGame") == 0)
                return ModifierName_PerGame;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return ModifierName_Unknown;
            break;
        default:
            break;
      }
    return ModifierName__none;
  }

const char *SportsStatsArgumentTypeModifierJSON::stringFromModifierName(TypeModifierNameKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ModifierName_Unknown:
            return "Unknown";
        case ModifierName_PerGame:
            return "PerGame";
        case ModifierName_NHLEvenStrength:
            return "NHLEvenStrength";
        case ModifierName_NHLPowerPlay:
            return "NHLPowerPlay";
        case ModifierName_NHLShortHanded:
            return "NHLShortHanded";
        case ModifierName_NHLPenalty:
            return "NHLPenalty";
        case ModifierName_NHLEmptyNet:
            return "NHLEmptyNet";
        case ModifierName_NHLShootout:
            return "NHLShootout";
        default:
            assert(false);
            return NULL;
      }
  }

SportsStatsArgumentTypeModifierJSON::SportsStatsArgumentTypeModifierJSON(const SportsStatsArgumentTypeModifierJSON &)
  {
    assert(false);
  }

SportsStatsArgumentTypeModifierJSON &SportsStatsArgumentTypeModifierJSON::operator=(const SportsStatsArgumentTypeModifierJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsStatsArgumentTypeModifierJSON::fromJSONArgumentType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArgumentType of SportsStatsArgumentTypeModifierJSON is not a string.");
    if (!(strcmp(json_string->getData(), "SportsStatsArgumentTypeModifier") == 0))
        throw("The value for field ArgumentType of SportsStatsArgumentTypeModifierJSON is not `SportsStatsArgumentTypeModifier'.");
    setArgumentType();
  }

void SportsStatsArgumentTypeModifierJSON::fromJSONModifierName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ModifierName of SportsStatsArgumentTypeModifierJSON is not a string.");
    TypeModifierName the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "HL", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'E':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'm':
                                if (strcmp(&(json_string->getData()[5]), "ptyNet") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = ModifierName_NHLEmptyNet;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'v':
                                if (strcmp(&(json_string->getData()[5]), "enStrength") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = ModifierName_NHLEvenStrength;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'P':
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[5]), "nalty") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = ModifierName_NHLPenalty;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[5]), "werPlay") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = ModifierName_NHLPowerPlay;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'S':
                        if (strncmp(&(json_string->getData()[4]), "ho", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[6]))
                              {
                                case 'o':
                                    if (strcmp(&(json_string->getData()[7]), "tout") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = ModifierName_NHLShootout;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'r':
                                    if (strcmp(&(json_string->getData()[7]), "tHanded") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = ModifierName_NHLShortHanded;
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
              }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "erGame") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ModifierName_PerGame;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ModifierName_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setModifierName(the_open_enum);
  }

SportsStatsArgumentTypeModifierJSON::SportsStatsArgumentTypeModifierJSON(void) :
        flagHasArgumentType(false),
        flagHasModifierName(false)
  {
    extraIndex = create_string_index();
  }

SportsStatsArgumentTypeModifierJSON::~SportsStatsArgumentTypeModifierJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsStatsArgumentTypeModifierJSON::hasArgumentType(void) const
  {
    return flagHasArgumentType;
  }

SportsStatsArgumentTypeModifierJSON::TypeArgumentType SportsStatsArgumentTypeModifierJSON::getArgumentType(void)
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStatsArgumentTypeModifier;
  }

const SportsStatsArgumentTypeModifierJSON::TypeArgumentType SportsStatsArgumentTypeModifierJSON::getArgumentType(void) const
  {
    assert(flagHasArgumentType);
    return ArgumentType_SportsStatsArgumentTypeModifier;
  }

const char *SportsStatsArgumentTypeModifierJSON::getArgumentTypeAsChars(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

std::string SportsStatsArgumentTypeModifierJSON::getArgumentTypeAsString(void) const
  {
    return stringFromArgumentType(getArgumentType());
  }

bool SportsStatsArgumentTypeModifierJSON::hasModifierName(void) const
  {
    return flagHasModifierName;
  }

SportsStatsArgumentTypeModifierJSON::TypeModifierName SportsStatsArgumentTypeModifierJSON::getModifierName(void)
  {
    assert(flagHasModifierName);
    return storeModifierName;
  }

const SportsStatsArgumentTypeModifierJSON::TypeModifierName SportsStatsArgumentTypeModifierJSON::getModifierName(void) const
  {
    assert(flagHasModifierName);
    return storeModifierName;
  }

const char *SportsStatsArgumentTypeModifierJSON::getModifierNameAsChars(void) const
  {
    TypeModifierName result = getModifierName();
    if (result.in_known_list)
        return stringFromModifierName(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsStatsArgumentTypeModifierJSON::getModifierNameAsString(void) const
  {
    return getModifierNameAsChars();
  }

SportsStatsArgumentTypeModifierJSON *SportsStatsArgumentTypeModifierJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsStatsArgumentTypeModifierJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsStatsArgumentTypeModifierJSON>, SportsStatsArgumentTypeModifierJSON *, bool> generator("Type SportsStatsArgumentTypeModifier", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
