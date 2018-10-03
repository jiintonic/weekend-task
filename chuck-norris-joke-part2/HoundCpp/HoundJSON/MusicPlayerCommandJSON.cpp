/* file "MusicPlayerCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicPlayerCommandJSON.h"

#include "MusicPlayerCommandJSON.h"


MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::TypeCommandType(void)
  {
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::TypeCommandType(const TypeCommandType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::TypeCommandType(TypeCommandTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator==(const TypeCommandType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator!=(const TypeCommandType &other) const
  {
    return !(operator==(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator<(const TypeCommandType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator>(const TypeCommandType &other) const
  {
    return other.operator<(*this);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator>=(const TypeCommandType &other) const
  {
    return !(operator<(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType::operator<=(const TypeCommandType &other) const
  {
    return !(other.operator<(*this));
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandTypeKnownValues MusicPlayerCommandJSON::TypeNativeDataJSON::stringToCommandType(const char *chars)
  {
    if (strncmp(chars, "MUSIC_PLAYER_RESPONSE_", 22) == 0)
      {
        switch ((unsigned char)(chars[22]))
          {
            case 'F':
                if (strcmp(&(chars[23]), "AST_FORWARD") == 0)
                    return CommandType_MUSIC_PLAYER_RESPONSE_FAST_FORWARD;
                break;
            case 'L':
                if (strcmp(&(chars[23]), "OWER_VOLUME") == 0)
                    return CommandType_MUSIC_PLAYER_RESPONSE_LOWER_VOLUME;
                break;
            case 'M':
                if (strcmp(&(chars[23]), "UTE") == 0)
                    return CommandType_MUSIC_PLAYER_RESPONSE_MUTE;
                break;
            case 'P':
                switch ((unsigned char)(chars[23]))
                  {
                    case 'A':
                        if (strcmp(&(chars[24]), "USE") == 0)
                            return CommandType_MUSIC_PLAYER_RESPONSE_PAUSE;
                        break;
                    case 'L':
                        if (strncmp(&(chars[24]), "AY_", 3) == 0)
                          {
                            switch ((unsigned char)(chars[27]))
                              {
                                case 'C':
                                    if (strcmp(&(chars[28]), "URRENT_SONG") == 0)
                                        return CommandType_MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG;
                                    break;
                                case 'L':
                                    if (strncmp(&(chars[28]), "AST_", 4) == 0)
                                      {
                                        switch ((unsigned char)(chars[32]))
                                          {
                                            case 'I':
                                                if (strcmp(&(chars[33]), "DENTIFIED_SONG") == 0)
                                                    return CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG;
                                                break;
                                            case 'S':
                                                if (strcmp(&(chars[33]), "ONG") == 0)
                                                    return CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'N':
                                    if (strcmp(&(chars[28]), "UMBERED_TRACK") == 0)
                                        return CommandType_MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK;
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
                switch ((unsigned char)(chars[23]))
                  {
                    case 'A':
                        if (strcmp(&(chars[24]), "ISE_VOLUME") == 0)
                            return CommandType_MUSIC_PLAYER_RESPONSE_RAISE_VOLUME;
                        break;
                    case 'E':
                        switch ((unsigned char)(chars[24]))
                          {
                            case 'P':
                                switch ((unsigned char)(chars[25]))
                                  {
                                    case 'E':
                                        if (strncmp(&(chars[26]), "AT_", 3) == 0)
                                          {
                                            switch ((unsigned char)(chars[29]))
                                              {
                                                case 'O':
                                                    switch ((unsigned char)(chars[30]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(chars[31]), "F") == 0)
                                                                return CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_OFF;
                                                            break;
                                                        case 'N':
                                                            if (chars[31] == 0)
                                                                return CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_ON;
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(chars[30]), "INGLE") == 0)
                                                        return CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strcmp(&(chars[26]), "AY") == 0)
                                            return CommandType_MUSIC_PLAYER_RESPONSE_REPLAY;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strcmp(&(chars[25]), "IND") == 0)
                                    return CommandType_MUSIC_PLAYER_RESPONSE_REWIND;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                switch ((unsigned char)(chars[23]))
                  {
                    case 'E':
                        switch ((unsigned char)(chars[24]))
                          {
                            case 'A':
                                if (strcmp(&(chars[25]), "RCH") == 0)
                                    return CommandType_MUSIC_PLAYER_RESPONSE_SEARCH;
                                break;
                            case 'E':
                                if (strcmp(&(chars[25]), "K") == 0)
                                    return CommandType_MUSIC_PLAYER_RESPONSE_SEEK;
                                break;
                            case 'T':
                                if (strncmp(&(chars[25]), "_P", 2) == 0)
                                  {
                                    switch ((unsigned char)(chars[27]))
                                      {
                                        case 'L':
                                            if (strcmp(&(chars[28]), "AYBACK_MODE") == 0)
                                                return CommandType_MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE;
                                            break;
                                        case 'R':
                                            if (strcmp(&(chars[28]), "OVIDER") == 0)
                                                return CommandType_MUSIC_PLAYER_RESPONSE_SET_PROVIDER;
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
                    case 'H':
                        if (strncmp(&(chars[24]), "UFFLE", 5) == 0)
                          {
                            switch ((unsigned char)(chars[29]))
                              {
                                case 0:
                                    return CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE;
                                case '_':
                                    if (strncmp(&(chars[30]), "O", 1) == 0)
                                      {
                                        switch ((unsigned char)(chars[31]))
                                          {
                                            case 'F':
                                                if (strcmp(&(chars[32]), "F") == 0)
                                                    return CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF;
                                                break;
                                            case 'N':
                                                if (chars[32] == 0)
                                                    return CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_ON;
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
                    case 'K':
                        if (strncmp(&(chars[24]), "IP", 2) == 0)
                          {
                            switch ((unsigned char)(chars[26]))
                              {
                                case 0:
                                    return CommandType_MUSIC_PLAYER_RESPONSE_SKIP;
                                case '_':
                                    if (strcmp(&(chars[27]), "ALBUM") == 0)
                                        return CommandType_MUSIC_PLAYER_RESPONSE_SKIP_ALBUM;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(chars[24]), "OP") == 0)
                            return CommandType_MUSIC_PLAYER_RESPONSE_STOP;
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strncmp(&(chars[23]), "HUMBS_", 6) == 0)
                  {
                    switch ((unsigned char)(chars[29]))
                      {
                        case 'D':
                            if (strcmp(&(chars[30]), "OWN") == 0)
                                return CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_DOWN;
                            break;
                        case 'U':
                            if (strcmp(&(chars[30]), "P") == 0)
                                return CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_UP;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(chars[23]), "NMUTE") == 0)
                    return CommandType_MUSIC_PLAYER_RESPONSE_UNMUTE;
                break;
            default:
                break;
          }
      }
    return CommandType__none;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::stringFromCommandType(TypeCommandTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case CommandType_MUSIC_PLAYER_RESPONSE_SEARCH:
            return "MUSIC_PLAYER_RESPONSE_SEARCH";
        case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK:
            return "MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK";
        case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG:
            return "MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG";
        case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG:
            return "MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG";
        case CommandType_MUSIC_PLAYER_RESPONSE_PAUSE:
            return "MUSIC_PLAYER_RESPONSE_PAUSE";
        case CommandType_MUSIC_PLAYER_RESPONSE_SKIP:
            return "MUSIC_PLAYER_RESPONSE_SKIP";
        case CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_UP:
            return "MUSIC_PLAYER_RESPONSE_THUMBS_UP";
        case CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_DOWN:
            return "MUSIC_PLAYER_RESPONSE_THUMBS_DOWN";
        case CommandType_MUSIC_PLAYER_RESPONSE_RAISE_VOLUME:
            return "MUSIC_PLAYER_RESPONSE_RAISE_VOLUME";
        case CommandType_MUSIC_PLAYER_RESPONSE_LOWER_VOLUME:
            return "MUSIC_PLAYER_RESPONSE_LOWER_VOLUME";
        case CommandType_MUSIC_PLAYER_RESPONSE_MUTE:
            return "MUSIC_PLAYER_RESPONSE_MUTE";
        case CommandType_MUSIC_PLAYER_RESPONSE_UNMUTE:
            return "MUSIC_PLAYER_RESPONSE_UNMUTE";
        case CommandType_MUSIC_PLAYER_RESPONSE_STOP:
            return "MUSIC_PLAYER_RESPONSE_STOP";
        case CommandType_MUSIC_PLAYER_RESPONSE_REPLAY:
            return "MUSIC_PLAYER_RESPONSE_REPLAY";
        case CommandType_MUSIC_PLAYER_RESPONSE_REWIND:
            return "MUSIC_PLAYER_RESPONSE_REWIND";
        case CommandType_MUSIC_PLAYER_RESPONSE_FAST_FORWARD:
            return "MUSIC_PLAYER_RESPONSE_FAST_FORWARD";
        case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG:
            return "MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG";
        case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE:
            return "MUSIC_PLAYER_RESPONSE_SHUFFLE";
        case CommandType_MUSIC_PLAYER_RESPONSE_SEEK:
            return "MUSIC_PLAYER_RESPONSE_SEEK";
        case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_ON:
            return "MUSIC_PLAYER_RESPONSE_SHUFFLE_ON";
        case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF:
            return "MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF";
        case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_ON:
            return "MUSIC_PLAYER_RESPONSE_REPEAT_ON";
        case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_OFF:
            return "MUSIC_PLAYER_RESPONSE_REPEAT_OFF";
        case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE:
            return "MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE";
        case CommandType_MUSIC_PLAYER_RESPONSE_SET_PROVIDER:
            return "MUSIC_PLAYER_RESPONSE_SET_PROVIDER";
        case CommandType_MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE:
            return "MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE";
        case CommandType_MUSIC_PLAYER_RESPONSE_SKIP_ALBUM:
            return "MUSIC_PLAYER_RESPONSE_SKIP_ALBUM";
        default:
            assert(false);
            return NULL;
      }
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::TypeMusicAudioInputSource(void)
  {
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::TypeMusicAudioInputSource(const TypeMusicAudioInputSource &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::TypeMusicAudioInputSource(TypeMusicAudioInputSourceKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator==(const TypeMusicAudioInputSource &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator!=(const TypeMusicAudioInputSource &other) const
  {
    return !(operator==(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator<(const TypeMusicAudioInputSource &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator>(const TypeMusicAudioInputSource &other) const
  {
    return other.operator<(*this);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator>=(const TypeMusicAudioInputSource &other) const
  {
    return !(operator<(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource::operator<=(const TypeMusicAudioInputSource &other) const
  {
    return !(other.operator<(*this));
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSourceKnownValues MusicPlayerCommandJSON::TypeNativeDataJSON::stringToMusicAudioInputSource(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "uxiliary") == 0)
                return MusicAudioInputSource_Auxiliary;
            break;
        case 'B':
            if (strcmp(&(chars[1]), "luetooth") == 0)
                return MusicAudioInputSource_Bluetooth;
            break;
        case 'C':
            if (strcmp(&(chars[1]), "D") == 0)
                return MusicAudioInputSource_CD;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "DMI1") == 0)
                return MusicAudioInputSource_HDMI1;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "ptical") == 0)
                return MusicAudioInputSource_Optical;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "SB") == 0)
                return MusicAudioInputSource_USB;
            break;
        default:
            break;
      }
    return MusicAudioInputSource__none;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::stringFromMusicAudioInputSource(TypeMusicAudioInputSourceKnownValues the_enum)
  {
    switch (the_enum)
      {
        case MusicAudioInputSource_Bluetooth:
            return "Bluetooth";
        case MusicAudioInputSource_Auxiliary:
            return "Auxiliary";
        case MusicAudioInputSource_HDMI1:
            return "HDMI1";
        case MusicAudioInputSource_Optical:
            return "Optical";
        case MusicAudioInputSource_CD:
            return "CD";
        case MusicAudioInputSource_USB:
            return "USB";
        default:
            assert(false);
            return NULL;
      }
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::TypeMusicSourceDevice(void)
  {
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::TypeMusicSourceDevice(const TypeMusicSourceDevice &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::TypeMusicSourceDevice(TypeMusicSourceDeviceKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator==(const TypeMusicSourceDevice &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator!=(const TypeMusicSourceDevice &other) const
  {
    return !(operator==(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator<(const TypeMusicSourceDevice &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator>(const TypeMusicSourceDevice &other) const
  {
    return other.operator<(*this);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator>=(const TypeMusicSourceDevice &other) const
  {
    return !(operator<(other));
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice::operator<=(const TypeMusicSourceDevice &other) const
  {
    return !(other.operator<(*this));
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDeviceKnownValues MusicPlayerCommandJSON::TypeNativeDataJSON::stringToMusicSourceDevice(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'D':
                    if (strcmp(&(chars[2]), "Player") == 0)
                        return MusicSourceDevice_CDPlayer;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "mputer") == 0)
                        return MusicSourceDevice_Computer;
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(chars[1]), "aptop") == 0)
                return MusicSourceDevice_Laptop;
            break;
        case 'i':
            if (strncmp(&(chars[1]), "P", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'h':
                        if (strcmp(&(chars[3]), "one") == 0)
                            return MusicSourceDevice_iPhone;
                        break;
                    case 'o':
                        if (strcmp(&(chars[3]), "d") == 0)
                            return MusicSourceDevice_iPod;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return MusicSourceDevice__none;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::stringFromMusicSourceDevice(TypeMusicSourceDeviceKnownValues the_enum)
  {
    switch (the_enum)
      {
        case MusicSourceDevice_iPhone:
            return "iPhone";
        case MusicSourceDevice_iPod:
            return "iPod";
        case MusicSourceDevice_CDPlayer:
            return "CDPlayer";
        case MusicSourceDevice_Laptop:
            return "Laptop";
        case MusicSourceDevice_Computer:
            return "Computer";
        default:
            assert(false);
            return NULL;
      }
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

MusicPlayerCommandJSON::TypeNativeDataJSON &MusicPlayerCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONCommandType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandType of TypeNativeDataJSON is not a string.");
    TypeCommandType the_open_enum;
    if (strncmp(json_string->getData(), "MUSIC_PLAYER_RESPONSE_", 22) == 0)
      {
        switch ((unsigned char)(json_string->getData()[22]))
          {
            case 'F':
                if (strcmp(&(json_string->getData()[23]), "AST_FORWARD") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_FAST_FORWARD;
                        goto open_enum_is_done;
                      }
                break;
            case 'L':
                if (strcmp(&(json_string->getData()[23]), "OWER_VOLUME") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_LOWER_VOLUME;
                        goto open_enum_is_done;
                      }
                break;
            case 'M':
                if (strcmp(&(json_string->getData()[23]), "UTE") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_MUTE;
                        goto open_enum_is_done;
                      }
                break;
            case 'P':
                switch ((unsigned char)(json_string->getData()[23]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[24]), "USE") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_PAUSE;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'L':
                        if (strncmp(&(json_string->getData()[24]), "AY_", 3) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[27]))
                              {
                                case 'C':
                                    if (strcmp(&(json_string->getData()[28]), "URRENT_SONG") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'L':
                                    if (strncmp(&(json_string->getData()[28]), "AST_", 4) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[32]))
                                          {
                                            case 'I':
                                                if (strcmp(&(json_string->getData()[33]), "DENTIFIED_SONG") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'S':
                                                if (strcmp(&(json_string->getData()[33]), "ONG") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'N':
                                    if (strcmp(&(json_string->getData()[28]), "UMBERED_TRACK") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK;
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
                switch ((unsigned char)(json_string->getData()[23]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[24]), "ISE_VOLUME") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_RAISE_VOLUME;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'E':
                        switch ((unsigned char)(json_string->getData()[24]))
                          {
                            case 'P':
                                switch ((unsigned char)(json_string->getData()[25]))
                                  {
                                    case 'E':
                                        if (strncmp(&(json_string->getData()[26]), "AT_", 3) == 0)
                                          {
                                            switch ((unsigned char)(json_string->getData()[29]))
                                              {
                                                case 'O':
                                                    switch ((unsigned char)(json_string->getData()[30]))
                                                      {
                                                        case 'F':
                                                            if (strcmp(&(json_string->getData()[31]), "F") == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_OFF;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        case 'N':
                                                            if (json_string->getData()[31] == 0)
                                                                  {
                                                                    the_open_enum.in_known_list = true;
                                                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_ON;
                                                                    goto open_enum_is_done;
                                                                  }
                                                            break;
                                                        default:
                                                            break;
                                                      }
                                                    break;
                                                case 'S':
                                                    if (strcmp(&(json_string->getData()[30]), "INGLE") == 0)
                                                          {
                                                            the_open_enum.in_known_list = true;
                                                            the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE;
                                                            goto open_enum_is_done;
                                                          }
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'L':
                                        if (strcmp(&(json_string->getData()[26]), "AY") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_REPLAY;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'W':
                                if (strcmp(&(json_string->getData()[25]), "IND") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_REWIND;
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
            case 'S':
                switch ((unsigned char)(json_string->getData()[23]))
                  {
                    case 'E':
                        switch ((unsigned char)(json_string->getData()[24]))
                          {
                            case 'A':
                                if (strcmp(&(json_string->getData()[25]), "RCH") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SEARCH;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'E':
                                if (strcmp(&(json_string->getData()[25]), "K") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SEEK;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strncmp(&(json_string->getData()[25]), "_P", 2) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[27]))
                                      {
                                        case 'L':
                                            if (strcmp(&(json_string->getData()[28]), "AYBACK_MODE") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'R':
                                            if (strcmp(&(json_string->getData()[28]), "OVIDER") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SET_PROVIDER;
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
                    case 'H':
                        if (strncmp(&(json_string->getData()[24]), "UFFLE", 5) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[29]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE;
                                        goto open_enum_is_done;
                                      }
                                case '_':
                                    if (strncmp(&(json_string->getData()[30]), "O", 1) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[31]))
                                          {
                                            case 'F':
                                                if (strcmp(&(json_string->getData()[32]), "F") == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF;
                                                        goto open_enum_is_done;
                                                      }
                                                break;
                                            case 'N':
                                                if (json_string->getData()[32] == 0)
                                                      {
                                                        the_open_enum.in_known_list = true;
                                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_ON;
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
                    case 'K':
                        if (strncmp(&(json_string->getData()[24]), "IP", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[26]))
                              {
                                case 0:
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SKIP;
                                        goto open_enum_is_done;
                                      }
                                case '_':
                                    if (strcmp(&(json_string->getData()[27]), "ALBUM") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_SKIP_ALBUM;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'T':
                        if (strcmp(&(json_string->getData()[24]), "OP") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_STOP;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strncmp(&(json_string->getData()[23]), "HUMBS_", 6) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[29]))
                      {
                        case 'D':
                            if (strcmp(&(json_string->getData()[30]), "OWN") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_DOWN;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'U':
                            if (strcmp(&(json_string->getData()[30]), "P") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_UP;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'U':
                if (strcmp(&(json_string->getData()[23]), "NMUTE") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CommandType_MUSIC_PLAYER_RESPONSE_UNMUTE;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setCommandType(the_open_enum);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONPlayNumberedTrackTrackNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayNumberedTrackTrackNumber of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayNumberedTrackTrackNumber of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPlayNumberedTrackTrackNumber(extracted_integer);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONRewindFastForwardAmountInSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RewindFastForwardAmountInSeconds of TypeNativeDataJSON is not a number.");
          }
      }
    setRewindFastForwardAmountInSecondsText(the_rational_text);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONSeekOffsetInSeconds(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SeekOffsetInSeconds of TypeNativeDataJSON is not a number.");
          }
      }
    setSeekOffsetInSecondsText(the_rational_text);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONSeekOffsetPercentage(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SeekOffsetPercentage of TypeNativeDataJSON is not a number.");
          }
      }
    setSeekOffsetPercentageText(the_rational_text);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONSkipAmount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SkipAmount of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SkipAmount of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSkipAmount(extracted_integer);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicThirdParty(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedVideos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedVideos of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedVideos(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedPreview of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedPreview(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedFullPlayback(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedFullPlayback of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedFullPlayback(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedSkip(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedSkip of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedSkip(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedAirplay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedAirplay of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedAirplay(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedResume(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedResume of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedResume(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserRequestedAll of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserRequestedAll(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserSpecifiedPlaylist(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserSpecifiedPlaylist of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserSpecifiedPlaylist(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONUserSpecifiedCurrentPage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field UserSpecifiedCurrentPage of TypeNativeDataJSON is not true for false.");
          }
      }
    setUserSpecifiedCurrentPage(the_bool);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONTargetTrackName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TargetTrackName of TypeNativeDataJSON is not a string.");
    setTargetTrackName(std::string(json_string->getData()));
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONTargetTrackArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TargetTrackArtistName of TypeNativeDataJSON is not a string.");
    setTargetTrackArtistName(std::string(json_string->getData()));
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONTargetTrackSoundHoundId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundTrackIDJSON *convert_classy = SoundHoundTrackIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTargetTrackSoundHoundId(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONMusicAudioInputSource(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MusicAudioInputSource of TypeNativeDataJSON is not a string.");
    TypeMusicAudioInputSource the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "uxiliary") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_Auxiliary;
                    goto open_enum_is_done;
                  }
            break;
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "luetooth") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_Bluetooth;
                    goto open_enum_is_done;
                  }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "D") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_CD;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "DMI1") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_HDMI1;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "ptical") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_Optical;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "SB") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicAudioInputSource_USB;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setMusicAudioInputSource(the_open_enum);
  }

void MusicPlayerCommandJSON::TypeNativeDataJSON::fromJSONMusicSourceDevice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field MusicSourceDevice of TypeNativeDataJSON is not a string.");
    TypeMusicSourceDevice the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'D':
                    if (strcmp(&(json_string->getData()[2]), "Player") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = MusicSourceDevice_CDPlayer;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "mputer") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = MusicSourceDevice_Computer;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "aptop") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = MusicSourceDevice_Laptop;
                    goto open_enum_is_done;
                  }
            break;
        case 'i':
            if (strncmp(&(json_string->getData()[1]), "P", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'h':
                        if (strcmp(&(json_string->getData()[3]), "one") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = MusicSourceDevice_iPhone;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strcmp(&(json_string->getData()[3]), "d") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = MusicSourceDevice_iPod;
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
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setMusicSourceDevice(the_open_enum);
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasCommandType(false),
        flagHasPlayNumberedTrackTrackNumber(false),
        flagHasRewindFastForwardAmountInSeconds(false),
        flagHasSeekOffsetInSeconds(false),
        flagHasSeekOffsetPercentage(false),
        flagHasSkipAmount(false),
        flagHasMusicThirdParty(false),
        flagHasUserRequestedVideos(false),
        flagHasUserRequestedPreview(false),
        flagHasUserRequestedFullPlayback(false),
        flagHasUserRequestedSkip(false),
        flagHasUserRequestedAirplay(false),
        flagHasUserRequestedResume(false),
        flagHasUserRequestedAll(false),
        flagHasUserSpecifiedPlaylist(false),
        flagHasUserSpecifiedCurrentPage(false),
        flagHasTargetTrackName(false),
        flagHasTargetTrackArtistName(false),
        flagHasTargetTrackSoundHoundId(false),
        flagHasMusicAudioInputSource(false),
        flagHasMusicSourceDevice(false)
  {
    extraIndex = create_string_index();
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasMusicThirdParty)
      {
        storeMusicThirdParty->remove_reference();
      }
    if (flagHasTargetTrackSoundHoundId)
      {
        storeTargetTrackSoundHoundId->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasCommandType(void) const
  {
    return flagHasCommandType;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType MusicPlayerCommandJSON::TypeNativeDataJSON::getCommandType(void)
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const MusicPlayerCommandJSON::TypeNativeDataJSON::TypeCommandType MusicPlayerCommandJSON::TypeNativeDataJSON::getCommandType(void) const
  {
    assert(flagHasCommandType);
    return storeCommandType;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::getCommandTypeAsChars(void) const
  {
    TypeCommandType result = getCommandType();
    if (result.in_known_list)
        return stringFromCommandType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getCommandTypeAsString(void) const
  {
    return getCommandTypeAsChars();
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasPlayNumberedTrackTrackNumber(void) const
  {
    return flagHasPlayNumberedTrackTrackNumber;
  }

OInteger MusicPlayerCommandJSON::TypeNativeDataJSON::getPlayNumberedTrackTrackNumber(void)
  {
    assert(flagHasPlayNumberedTrackTrackNumber);
    return storePlayNumberedTrackTrackNumber;
  }

const OInteger MusicPlayerCommandJSON::TypeNativeDataJSON::getPlayNumberedTrackTrackNumber(void) const
  {
    assert(flagHasPlayNumberedTrackTrackNumber);
    return storePlayNumberedTrackTrackNumber;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasRewindFastForwardAmountInSeconds(void) const
  {
    return flagHasRewindFastForwardAmountInSeconds;
  }

double MusicPlayerCommandJSON::TypeNativeDataJSON::getRewindFastForwardAmountInSeconds(void)
  {
    assert(flagHasRewindFastForwardAmountInSeconds);
    if (textStoreRewindFastForwardAmountInSeconds != "")
      {
        return atof(textStoreRewindFastForwardAmountInSeconds.c_str());
      }
    return storeRewindFastForwardAmountInSeconds;
  }

const double MusicPlayerCommandJSON::TypeNativeDataJSON::getRewindFastForwardAmountInSeconds(void) const
  {
    assert(flagHasRewindFastForwardAmountInSeconds);
    if (textStoreRewindFastForwardAmountInSeconds != "")
      {
        return atof(textStoreRewindFastForwardAmountInSeconds.c_str());
      }
    return storeRewindFastForwardAmountInSeconds;
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getRewindFastForwardAmountInSecondsAsText(void) const
  {
    assert(flagHasRewindFastForwardAmountInSeconds);
    if (textStoreRewindFastForwardAmountInSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRewindFastForwardAmountInSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRewindFastForwardAmountInSeconds);
      }
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasSeekOffsetInSeconds(void) const
  {
    return flagHasSeekOffsetInSeconds;
  }

double MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetInSeconds(void)
  {
    assert(flagHasSeekOffsetInSeconds);
    if (textStoreSeekOffsetInSeconds != "")
      {
        return atof(textStoreSeekOffsetInSeconds.c_str());
      }
    return storeSeekOffsetInSeconds;
  }

const double MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetInSeconds(void) const
  {
    assert(flagHasSeekOffsetInSeconds);
    if (textStoreSeekOffsetInSeconds != "")
      {
        return atof(textStoreSeekOffsetInSeconds.c_str());
      }
    return storeSeekOffsetInSeconds;
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetInSecondsAsText(void) const
  {
    assert(flagHasSeekOffsetInSeconds);
    if (textStoreSeekOffsetInSeconds == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSeekOffsetInSeconds);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSeekOffsetInSeconds);
      }
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasSeekOffsetPercentage(void) const
  {
    return flagHasSeekOffsetPercentage;
  }

double MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetPercentage(void)
  {
    assert(flagHasSeekOffsetPercentage);
    if (textStoreSeekOffsetPercentage != "")
      {
        return atof(textStoreSeekOffsetPercentage.c_str());
      }
    return storeSeekOffsetPercentage;
  }

const double MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetPercentage(void) const
  {
    assert(flagHasSeekOffsetPercentage);
    if (textStoreSeekOffsetPercentage != "")
      {
        return atof(textStoreSeekOffsetPercentage.c_str());
      }
    return storeSeekOffsetPercentage;
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getSeekOffsetPercentageAsText(void) const
  {
    assert(flagHasSeekOffsetPercentage);
    if (textStoreSeekOffsetPercentage == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSeekOffsetPercentage);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSeekOffsetPercentage);
      }
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasSkipAmount(void) const
  {
    return flagHasSkipAmount;
  }

OInteger MusicPlayerCommandJSON::TypeNativeDataJSON::getSkipAmount(void)
  {
    assert(flagHasSkipAmount);
    return storeSkipAmount;
  }

const OInteger MusicPlayerCommandJSON::TypeNativeDataJSON::getSkipAmount(void) const
  {
    assert(flagHasSkipAmount);
    return storeSkipAmount;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasMusicThirdParty(void) const
  {
    return flagHasMusicThirdParty;
  }

MusicThirdPartyJSON * MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicThirdParty(void)
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

const MusicThirdPartyJSON * MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicThirdParty(void) const
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedVideos(void) const
  {
    return flagHasUserRequestedVideos;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedVideos(void)
  {
    assert(flagHasUserRequestedVideos);
    return storeUserRequestedVideos;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedVideos(void) const
  {
    assert(flagHasUserRequestedVideos);
    return storeUserRequestedVideos;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedPreview(void) const
  {
    return flagHasUserRequestedPreview;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedPreview(void)
  {
    assert(flagHasUserRequestedPreview);
    return storeUserRequestedPreview;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedPreview(void) const
  {
    assert(flagHasUserRequestedPreview);
    return storeUserRequestedPreview;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedFullPlayback(void) const
  {
    return flagHasUserRequestedFullPlayback;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedFullPlayback(void)
  {
    assert(flagHasUserRequestedFullPlayback);
    return storeUserRequestedFullPlayback;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedFullPlayback(void) const
  {
    assert(flagHasUserRequestedFullPlayback);
    return storeUserRequestedFullPlayback;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedSkip(void) const
  {
    return flagHasUserRequestedSkip;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedSkip(void)
  {
    assert(flagHasUserRequestedSkip);
    return storeUserRequestedSkip;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedSkip(void) const
  {
    assert(flagHasUserRequestedSkip);
    return storeUserRequestedSkip;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedAirplay(void) const
  {
    return flagHasUserRequestedAirplay;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedAirplay(void)
  {
    assert(flagHasUserRequestedAirplay);
    return storeUserRequestedAirplay;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedAirplay(void) const
  {
    assert(flagHasUserRequestedAirplay);
    return storeUserRequestedAirplay;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedResume(void) const
  {
    return flagHasUserRequestedResume;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedResume(void)
  {
    assert(flagHasUserRequestedResume);
    return storeUserRequestedResume;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedResume(void) const
  {
    assert(flagHasUserRequestedResume);
    return storeUserRequestedResume;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserRequestedAll(void) const
  {
    return flagHasUserRequestedAll;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedAll(void)
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserRequestedAll(void) const
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserSpecifiedPlaylist(void) const
  {
    return flagHasUserSpecifiedPlaylist;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserSpecifiedPlaylist(void)
  {
    assert(flagHasUserSpecifiedPlaylist);
    return storeUserSpecifiedPlaylist;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserSpecifiedPlaylist(void) const
  {
    assert(flagHasUserSpecifiedPlaylist);
    return storeUserSpecifiedPlaylist;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasUserSpecifiedCurrentPage(void) const
  {
    return flagHasUserSpecifiedCurrentPage;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserSpecifiedCurrentPage(void)
  {
    assert(flagHasUserSpecifiedCurrentPage);
    return storeUserSpecifiedCurrentPage;
  }

const bool MusicPlayerCommandJSON::TypeNativeDataJSON::getUserSpecifiedCurrentPage(void) const
  {
    assert(flagHasUserSpecifiedCurrentPage);
    return storeUserSpecifiedCurrentPage;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasTargetTrackName(void) const
  {
    return flagHasTargetTrackName;
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackName(void)
  {
    assert(flagHasTargetTrackName);
    return storeTargetTrackName;
  }

const std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackName(void) const
  {
    assert(flagHasTargetTrackName);
    return storeTargetTrackName;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasTargetTrackArtistName(void) const
  {
    return flagHasTargetTrackArtistName;
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackArtistName(void)
  {
    assert(flagHasTargetTrackArtistName);
    return storeTargetTrackArtistName;
  }

const std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackArtistName(void) const
  {
    assert(flagHasTargetTrackArtistName);
    return storeTargetTrackArtistName;
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasTargetTrackSoundHoundId(void) const
  {
    return flagHasTargetTrackSoundHoundId;
  }

SoundHoundTrackIDJSON * MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackSoundHoundId(void)
  {
    assert(flagHasTargetTrackSoundHoundId);
    return storeTargetTrackSoundHoundId;
  }

const SoundHoundTrackIDJSON * MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackSoundHoundId(void) const
  {
    assert(flagHasTargetTrackSoundHoundId);
    return storeTargetTrackSoundHoundId;
  }

uint64_t MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackSoundHoundIdValue(void)
  {
    return getTargetTrackSoundHoundId()->getValue();
  }

const uint64_t MusicPlayerCommandJSON::TypeNativeDataJSON::getTargetTrackSoundHoundIdValue(void) const
  {
    return getTargetTrackSoundHoundId()->getValue();
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasMusicAudioInputSource(void) const
  {
    return flagHasMusicAudioInputSource;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicAudioInputSource(void)
  {
    assert(flagHasMusicAudioInputSource);
    return storeMusicAudioInputSource;
  }

const MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicAudioInputSource MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicAudioInputSource(void) const
  {
    assert(flagHasMusicAudioInputSource);
    return storeMusicAudioInputSource;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicAudioInputSourceAsChars(void) const
  {
    TypeMusicAudioInputSource result = getMusicAudioInputSource();
    if (result.in_known_list)
        return stringFromMusicAudioInputSource(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicAudioInputSourceAsString(void) const
  {
    return getMusicAudioInputSourceAsChars();
  }

bool MusicPlayerCommandJSON::TypeNativeDataJSON::hasMusicSourceDevice(void) const
  {
    return flagHasMusicSourceDevice;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicSourceDevice(void)
  {
    assert(flagHasMusicSourceDevice);
    return storeMusicSourceDevice;
  }

const MusicPlayerCommandJSON::TypeNativeDataJSON::TypeMusicSourceDevice MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicSourceDevice(void) const
  {
    assert(flagHasMusicSourceDevice);
    return storeMusicSourceDevice;
  }

const char *MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicSourceDeviceAsChars(void) const
  {
    TypeMusicSourceDevice result = getMusicSourceDevice();
    if (result.in_known_list)
        return stringFromMusicSourceDevice(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicPlayerCommandJSON::TypeNativeDataJSON::getMusicSourceDeviceAsString(void) const
  {
    return getMusicSourceDeviceAsChars();
  }

MusicPlayerCommandJSON::MusicPlayerCommandJSON(const MusicPlayerCommandJSON &)
  {
    assert(false);
  }

MusicPlayerCommandJSON &MusicPlayerCommandJSON::operator=(const MusicPlayerCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicPlayerCommandJSON::extraSuccessfulPlayerCommandToJSON(void) const
  {
    JSONValueHandler handler_SuccessfulPlayerCommand;
    storeSuccessfulPlayerCommand->write_as_json(&handler_SuccessfulPlayerCommand);
    handler_SuccessfulPlayerCommand.result->add_reference();
    return handler_SuccessfulPlayerCommand.result;
  }

JSONValue *MusicPlayerCommandJSON::extraSuccessfulPlayerCommandWithTrackNameToJSON(void) const
  {
    JSONValueHandler handler_SuccessfulPlayerCommandWithTrackName;
    storeSuccessfulPlayerCommandWithTrackName->write_as_json(&handler_SuccessfulPlayerCommandWithTrackName);
    handler_SuccessfulPlayerCommandWithTrackName.result->add_reference();
    return handler_SuccessfulPlayerCommandWithTrackName.result;
  }

JSONValue *MusicPlayerCommandJSON::extraNoControllableTrackToJSON(void) const
  {
    JSONValueHandler handler_NoControllableTrack;
    storeNoControllableTrack->write_as_json(&handler_NoControllableTrack);
    handler_NoControllableTrack.result->add_reference();
    return handler_NoControllableTrack.result;
  }

JSONValue *MusicPlayerCommandJSON::extraMusicProviderUnavailableToJSON(void) const
  {
    JSONValueHandler handler_MusicProviderUnavailable;
    storeMusicProviderUnavailable->write_as_json(&handler_MusicProviderUnavailable);
    handler_MusicProviderUnavailable.result->add_reference();
    return handler_MusicProviderUnavailable.result;
  }

JSONValue *MusicPlayerCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void MusicPlayerCommandJSON::fromJSONSuccessfulPlayerCommand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSuccessfulPlayerCommand(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::fromJSONSuccessfulPlayerCommandWithTrackName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSuccessfulPlayerCommandWithTrackName(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::fromJSONNoControllableTrack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNoControllableTrack(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::fromJSONMusicProviderUnavailable(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicProviderUnavailable(convert_classy);
    convert_classy->remove_reference();
  }

void MusicPlayerCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

MusicPlayerCommandJSON::MusicPlayerCommandJSON(void) :
        flagHasSuccessfulPlayerCommand(false),
        flagHasSuccessfulPlayerCommandWithTrackName(false),
        flagHasNoControllableTrack(false),
        flagHasMusicProviderUnavailable(false),
        flagHasNativeData(false)
  {
  }

MusicPlayerCommandJSON::~MusicPlayerCommandJSON(void)
  {
    if (flagHasSuccessfulPlayerCommand)
      {
        storeSuccessfulPlayerCommand->remove_reference();
      }
    if (flagHasSuccessfulPlayerCommandWithTrackName)
      {
        storeSuccessfulPlayerCommandWithTrackName->remove_reference();
      }
    if (flagHasNoControllableTrack)
      {
        storeNoControllableTrack->remove_reference();
      }
    if (flagHasMusicProviderUnavailable)
      {
        storeMusicProviderUnavailable->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *MusicPlayerCommandJSON::getCommandKind(void) const
  {
    return "MusicPlayerCommand";
  }

bool MusicPlayerCommandJSON::hasSuccessfulPlayerCommand(void) const
  {
    return flagHasSuccessfulPlayerCommand;
  }

DynamicResponseJSON * MusicPlayerCommandJSON::getSuccessfulPlayerCommand(void)
  {
    assert(flagHasSuccessfulPlayerCommand);
    return storeSuccessfulPlayerCommand;
  }

const DynamicResponseJSON * MusicPlayerCommandJSON::getSuccessfulPlayerCommand(void) const
  {
    assert(flagHasSuccessfulPlayerCommand);
    return storeSuccessfulPlayerCommand;
  }

bool MusicPlayerCommandJSON::hasSuccessfulPlayerCommandWithTrackName(void) const
  {
    return flagHasSuccessfulPlayerCommandWithTrackName;
  }

DynamicResponseJSON * MusicPlayerCommandJSON::getSuccessfulPlayerCommandWithTrackName(void)
  {
    assert(flagHasSuccessfulPlayerCommandWithTrackName);
    return storeSuccessfulPlayerCommandWithTrackName;
  }

const DynamicResponseJSON * MusicPlayerCommandJSON::getSuccessfulPlayerCommandWithTrackName(void) const
  {
    assert(flagHasSuccessfulPlayerCommandWithTrackName);
    return storeSuccessfulPlayerCommandWithTrackName;
  }

bool MusicPlayerCommandJSON::hasNoControllableTrack(void) const
  {
    return flagHasNoControllableTrack;
  }

DynamicResponseJSON * MusicPlayerCommandJSON::getNoControllableTrack(void)
  {
    assert(flagHasNoControllableTrack);
    return storeNoControllableTrack;
  }

const DynamicResponseJSON * MusicPlayerCommandJSON::getNoControllableTrack(void) const
  {
    assert(flagHasNoControllableTrack);
    return storeNoControllableTrack;
  }

bool MusicPlayerCommandJSON::hasMusicProviderUnavailable(void) const
  {
    return flagHasMusicProviderUnavailable;
  }

DynamicResponseJSON * MusicPlayerCommandJSON::getMusicProviderUnavailable(void)
  {
    assert(flagHasMusicProviderUnavailable);
    return storeMusicProviderUnavailable;
  }

const DynamicResponseJSON * MusicPlayerCommandJSON::getMusicProviderUnavailable(void) const
  {
    assert(flagHasMusicProviderUnavailable);
    return storeMusicProviderUnavailable;
  }

bool MusicPlayerCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON * MusicPlayerCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const MusicPlayerCommandJSON::TypeNativeDataJSON * MusicPlayerCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

MusicPlayerCommandJSON::TypeNativeDataJSON *MusicPlayerCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MusicPlayerCommandJSON *MusicPlayerCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicPlayerCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicPlayerCommandJSON>, MusicPlayerCommandJSON *, bool> generator("Type MusicPlayerCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
