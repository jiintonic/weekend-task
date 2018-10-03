/* file "CellularDataCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CellularDataCommandJSON.h"

#include "CellularDataCommandJSON.h"


CellularDataCommandJSON::TypeCommandType CellularDataCommandJSON::stringToCommandType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "heckDataState") == 0)
                return CommandType_CheckDataState;
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strcmp(&(chars[2]), "ggleDataState") == 0)
                        return CommandType_ToggleDataState;
                    break;
                case 'u':
                    if (strncmp(&(chars[2]), "rnDataO", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 'f':
                                if (strcmp(&(chars[10]), "f") == 0)
                                    return CommandType_TurnDataOff;
                                break;
                            case 'n':
                                if (chars[10] == 0)
                                    return CommandType_TurnDataOn;
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
        default:
            break;
      }
    throw("The value for field `CommandType' is not one of the legal values.");
  }

const char *CellularDataCommandJSON::stringFromCommandType(TypeCommandType the_enum)
  {
    switch (the_enum)
      {
        case CommandType_TurnDataOn:
            return "TurnDataOn";
        case CommandType_TurnDataOff:
            return "TurnDataOff";
        case CommandType_CheckDataState:
            return "CheckDataState";
        case CommandType_ToggleDataState:
            return "ToggleDataState";
        default:
            assert(false);
            return NULL;
      }
  }

CellularDataCommandJSON::CellularDataCommandJSON(const CellularDataCommandJSON &)
  {
    assert(false);
  }

CellularDataCommandJSON &CellularDataCommandJSON::operator=(const CellularDataCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CellularDataCommandJSON::extraCommandTypeToJSON(void) const
  {
    JSONStringValue *generated_string_CommandType;
    switch (storeCommandType)
      {
        case CommandType_TurnDataOn:
            generated_string_CommandType = new JSONStringValue("TurnDataOn");
            break;
        case CommandType_TurnDataOff:
            generated_string_CommandType = new JSONStringValue("TurnDataOff");
            break;
        case CommandType_CheckDataState:
            generated_string_CommandType = new JSONStringValue("CheckDataState");
            break;
        case CommandType_ToggleDataState:
            generated_string_CommandType = new JSONStringValue("ToggleDataState");
            break;
        default:
            assert(false);
            generated_string_CommandType = NULL;
      }
    return generated_string_CommandType;
  }

void CellularDataCommandJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of CellularDataCommandJSON is not a string.");
    TypeCommandType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "heckDataState") == 0)
                  {
                    the_enum = CommandType_CheckDataState;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ggleDataState") == 0)
                          {
                            the_enum = CommandType_ToggleDataState;
                            goto enum_is_done;
                          }
                    break;
                case 'u':
                    if (strncmp(&(json_string->getData()[2]), "rnDataO", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 'f':
                                if (strcmp(&(json_string->getData()[10]), "f") == 0)
                                      {
                                        the_enum = CommandType_TurnDataOff;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'n':
                                if (json_string->getData()[10] == 0)
                                      {
                                        the_enum = CommandType_TurnDataOn;
                                        goto enum_is_done;
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
        default:
            break;
      }
    throw("The value for field CommandType of CellularDataCommandJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandType(the_enum);
  }

CellularDataCommandJSON::CellularDataCommandJSON(void) :
        flagHasCommandType(false)
  {
    extraIndex = create_string_index();
  }

CellularDataCommandJSON::~CellularDataCommandJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *CellularDataCommandJSON::getDeviceControlCommandKind(void) const
  {
    return "CellularDataCommand";
  }

bool CellularDataCommandJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

CellularDataCommandJSON::TypeCommandType CellularDataCommandJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const CellularDataCommandJSON::TypeCommandType CellularDataCommandJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *CellularDataCommandJSON::getCommandTypeAsChars(void) const
  {
    return stringFromCommandType(getCommandType());
  }

std::string CellularDataCommandJSON::getCommandTypeAsString(void) const
  {
    return stringFromCommandType(getCommandType());
  }

CellularDataCommandJSON *CellularDataCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CellularDataCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CellularDataCommandJSON>, CellularDataCommandJSON *, bool> generator("Type CellularDataCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
