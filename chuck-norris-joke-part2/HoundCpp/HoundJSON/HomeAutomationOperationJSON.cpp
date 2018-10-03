/* file "HomeAutomationOperationJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HomeAutomationOperationJSON.h"

#include "HomeAutomationOperationJSON.h"


HomeAutomationOperationJSON::TypeValue::TypeValue(void)
  {
  }

HomeAutomationOperationJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

HomeAutomationOperationJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool HomeAutomationOperationJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool HomeAutomationOperationJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool HomeAutomationOperationJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool HomeAutomationOperationJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool HomeAutomationOperationJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool HomeAutomationOperationJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

HomeAutomationOperationJSON::TypeValueKnownValues HomeAutomationOperationJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'l':
                    if (strcmp(&(chars[2]), "arm") == 0)
                        return Value_Alarm;
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "to") == 0)
                        return Value_Auto;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ncel") == 0)
                        return Value_Cancel;
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "angeChannel") == 0)
                        return Value_ChangeChannel;
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "ose") == 0)
                        return Value_Close;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ol") == 0)
                        return Value_Cool;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ry") == 0)
                return Value_Dry;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "eat") == 0)
                return Value_Heat;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ock") == 0)
                return Value_Lock;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "pen") == 0)
                return Value_Open;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "use") == 0)
                        return Value_Pause;
                    break;
                case 'l':
                    if (strncmp(&(chars[2]), "ay", 2) == 0)
                      {
                        switch ((unsigned char)(chars[4]))
                          {
                            case 'M':
                                if (strcmp(&(chars[5]), "usic") == 0)
                                    return Value_PlayMusic;
                                break;
                            case 'V':
                                if (strcmp(&(chars[5]), "ideo") == 0)
                                    return Value_PlayVideo;
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
        case 'R':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'a':
                        if (strcmp(&(chars[3]), "dy") == 0)
                            return Value_Ready;
                        break;
                    case 'c':
                        if (strcmp(&(chars[3]), "ord") == 0)
                            return Value_Record;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "t", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'B':
                                if (strncmp(&(chars[4]), "rightness", 9) == 0)
                                  {
                                    switch ((unsigned char)(chars[13]))
                                      {
                                        case 0:
                                            return Value_SetBrightness;
                                        case 'D':
                                            if (strcmp(&(chars[14]), "elta") == 0)
                                                return Value_SetBrightnessDelta;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'C':
                                if (strncmp(&(chars[4]), "olor", 4) == 0)
                                  {
                                    switch ((unsigned char)(chars[8]))
                                      {
                                        case 0:
                                            return Value_SetColor;
                                        case 'D':
                                            if (strcmp(&(chars[9]), "elta") == 0)
                                                return Value_SetColorDelta;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strncmp(&(chars[4]), "emperature", 10) == 0)
                                  {
                                    switch ((unsigned char)(chars[14]))
                                      {
                                        case 0:
                                            return Value_SetTemperature;
                                        case 'D':
                                            if (strcmp(&(chars[15]), "elta") == 0)
                                                return Value_SetTemperatureDelta;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'V':
                                if (strncmp(&(chars[4]), "olume", 5) == 0)
                                  {
                                    switch ((unsigned char)(chars[9]))
                                      {
                                        case 0:
                                            return Value_SetVolume;
                                        case 'D':
                                            if (strcmp(&(chars[10]), "elta") == 0)
                                                return Value_SetVolumeDelta;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(chars[4]), "indSpeed", 8) == 0)
                                  {
                                    switch ((unsigned char)(chars[12]))
                                      {
                                        case 0:
                                            return Value_SetWindSpeed;
                                        case 'D':
                                            if (strcmp(&(chars[13]), "elta") == 0)
                                                return Value_SetWindSpeedDelta;
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
                case 'l':
                    if (strcmp(&(chars[2]), "eep") == 0)
                        return Value_Sleep;
                    break;
                case 't':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'a':
                            if (strcmp(&(chars[3]), "rtCleaning") == 0)
                                return Value_StartCleaning;
                            break;
                        case 'o':
                            if (strcmp(&(chars[3]), "pCleaning") == 0)
                                return Value_StopCleaning;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strncmp(&(chars[1]), "ur", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'b':
                        if (strcmp(&(chars[4]), "oControl") == 0)
                            return Value_TurboControl;
                        break;
                    case 'n':
                        if (strncmp(&(chars[4]), "O", 1) == 0)
                          {
                            switch ((unsigned char)(chars[5]))
                              {
                                case 'f':
                                    if (strcmp(&(chars[6]), "f") == 0)
                                        return Value_TurnOff;
                                    break;
                                case 'n':
                                    if (chars[6] == 0)
                                        return Value_TurnOn;
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
        case 'U':
            if (strcmp(&(chars[1]), "nlock") == 0)
                return Value_Unlock;
            break;
        case 'W':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "ke") == 0)
                        return Value_Wake;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "nd") == 0)
                        return Value_Wind;
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

const char *HomeAutomationOperationJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Auto:
            return "Auto";
        case Value_Sleep:
            return "Sleep";
        case Value_Wake:
            return "Wake";
        case Value_TurnOn:
            return "TurnOn";
        case Value_TurnOff:
            return "TurnOff";
        case Value_SetBrightness:
            return "SetBrightness";
        case Value_SetBrightnessDelta:
            return "SetBrightnessDelta";
        case Value_SetColor:
            return "SetColor";
        case Value_SetColorDelta:
            return "SetColorDelta";
        case Value_Heat:
            return "Heat";
        case Value_Cool:
            return "Cool";
        case Value_Dry:
            return "Dry";
        case Value_Wind:
            return "Wind";
        case Value_SetTemperature:
            return "SetTemperature";
        case Value_SetTemperatureDelta:
            return "SetTemperatureDelta";
        case Value_SetWindSpeed:
            return "SetWindSpeed";
        case Value_SetWindSpeedDelta:
            return "SetWindSpeedDelta";
        case Value_StartCleaning:
            return "StartCleaning";
        case Value_StopCleaning:
            return "StopCleaning";
        case Value_TurboControl:
            return "TurboControl";
        case Value_Ready:
            return "Ready";
        case Value_Pause:
            return "Pause";
        case Value_Cancel:
            return "Cancel";
        case Value_Lock:
            return "Lock";
        case Value_Unlock:
            return "Unlock";
        case Value_Open:
            return "Open";
        case Value_Close:
            return "Close";
        case Value_Alarm:
            return "Alarm";
        case Value_Record:
            return "Record";
        case Value_PlayMusic:
            return "PlayMusic";
        case Value_PlayVideo:
            return "PlayVideo";
        case Value_ChangeChannel:
            return "ChangeChannel";
        case Value_SetVolume:
            return "SetVolume";
        case Value_SetVolumeDelta:
            return "SetVolumeDelta";
        default:
            assert(false);
            return NULL;
      }
  }

HomeAutomationOperationJSON::HomeAutomationOperationJSON(const HomeAutomationOperationJSON &)
  {
    assert(false);
  }

HomeAutomationOperationJSON &HomeAutomationOperationJSON::operator=(const HomeAutomationOperationJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HomeAutomationOperationJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of HomeAutomationOperationJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "arm") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Alarm;
                            goto open_enum_is_done;
                          }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "to") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Auto;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ncel") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Cancel;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "angeChannel") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ChangeChannel;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "ose") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Close;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ol") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Cool;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ry") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Dry;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "eat") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Heat;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ock") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Lock;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "pen") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Open;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "use") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Pause;
                            goto open_enum_is_done;
                          }
                    break;
                case 'l':
                    if (strncmp(&(json_string->getData()[2]), "ay", 2) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[4]))
                          {
                            case 'M':
                                if (strcmp(&(json_string->getData()[5]), "usic") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_PlayMusic;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'V':
                                if (strcmp(&(json_string->getData()[5]), "ideo") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_PlayVideo;
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
        case 'R':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[3]), "dy") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Ready;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'c':
                        if (strcmp(&(json_string->getData()[3]), "ord") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_Record;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "t", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'B':
                                if (strncmp(&(json_string->getData()[4]), "rightness", 9) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[13]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SetBrightness;
                                                goto open_enum_is_done;
                                              }
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[14]), "elta") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SetBrightnessDelta;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'C':
                                if (strncmp(&(json_string->getData()[4]), "olor", 4) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[8]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SetColor;
                                                goto open_enum_is_done;
                                              }
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[9]), "elta") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SetColorDelta;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'T':
                                if (strncmp(&(json_string->getData()[4]), "emperature", 10) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[14]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SetTemperature;
                                                goto open_enum_is_done;
                                              }
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[15]), "elta") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SetTemperatureDelta;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'V':
                                if (strncmp(&(json_string->getData()[4]), "olume", 5) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[9]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SetVolume;
                                                goto open_enum_is_done;
                                              }
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[10]), "elta") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SetVolumeDelta;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'W':
                                if (strncmp(&(json_string->getData()[4]), "indSpeed", 8) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[12]))
                                      {
                                        case 0:
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_SetWindSpeed;
                                                goto open_enum_is_done;
                                              }
                                        case 'D':
                                            if (strcmp(&(json_string->getData()[13]), "elta") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_SetWindSpeedDelta;
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
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "eep") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Sleep;
                            goto open_enum_is_done;
                          }
                    break;
                case 't':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'a':
                            if (strcmp(&(json_string->getData()[3]), "rtCleaning") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_StartCleaning;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'o':
                            if (strcmp(&(json_string->getData()[3]), "pCleaning") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Value_StopCleaning;
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
            break;
        case 'T':
            if (strncmp(&(json_string->getData()[1]), "ur", 2) == 0)
              {
                switch ((unsigned char)(json_string->getData()[3]))
                  {
                    case 'b':
                        if (strcmp(&(json_string->getData()[4]), "oControl") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_TurboControl;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'n':
                        if (strncmp(&(json_string->getData()[4]), "O", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[5]))
                              {
                                case 'f':
                                    if (strcmp(&(json_string->getData()[6]), "f") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_TurnOff;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'n':
                                    if (json_string->getData()[6] == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_TurnOn;
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
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nlock") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_Unlock;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "ke") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Wake;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "nd") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Wind;
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

HomeAutomationOperationJSON::HomeAutomationOperationJSON(void) :
        flagHasValue(false)
  {
  }

HomeAutomationOperationJSON::HomeAutomationOperationJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

HomeAutomationOperationJSON::HomeAutomationOperationJSON(const char *init_value) :
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

HomeAutomationOperationJSON::HomeAutomationOperationJSON(std::string init_value) :
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

HomeAutomationOperationJSON::HomeAutomationOperationJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

HomeAutomationOperationJSON::~HomeAutomationOperationJSON(void)
  {
  }

bool HomeAutomationOperationJSON::hasValue(void) const
  {
    return flagHasValue;
  }

HomeAutomationOperationJSON::TypeValue HomeAutomationOperationJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const HomeAutomationOperationJSON::TypeValue HomeAutomationOperationJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *HomeAutomationOperationJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string HomeAutomationOperationJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

HomeAutomationOperationJSON *HomeAutomationOperationJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HomeAutomationOperationJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool> generator("Type HomeAutomationOperation", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
