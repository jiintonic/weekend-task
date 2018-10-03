/* file "MusicThirdPartyJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicThirdPartyJSON.h"

#include "MusicThirdPartyJSON.h"


MusicThirdPartyJSON::TypeName::TypeName(void)
  {
  }

MusicThirdPartyJSON::TypeName::TypeName(const TypeName &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicThirdPartyJSON::TypeName::TypeName(TypeNameKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicThirdPartyJSON::TypeName::operator==(const TypeName &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicThirdPartyJSON::TypeName::operator!=(const TypeName &other) const
  {
    return !(operator==(other));
  }

bool MusicThirdPartyJSON::TypeName::operator<(const TypeName &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicThirdPartyJSON::TypeName::operator>(const TypeName &other) const
  {
    return other.operator<(*this);
  }

bool MusicThirdPartyJSON::TypeName::operator>=(const TypeName &other) const
  {
    return !(operator<(other));
  }

bool MusicThirdPartyJSON::TypeName::operator<=(const TypeName &other) const
  {
    return !(other.operator<(*this));
  }

MusicThirdPartyJSON::TypeNameKnownValues MusicThirdPartyJSON::stringToName(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            switch ((unsigned char)(chars[1]))
              {
                case 'm':
                    if (strcmp(&(chars[2]), "azonPrimeMusic") == 0)
                        return Name_AmazonPrimeMusic;
                    break;
                case 'p':
                    if (strcmp(&(chars[2]), "pleMusic") == 0)
                        return Name_AppleMusic;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'e':
                        if (strcmp(&(chars[3]), "zer") == 0)
                            return Name_Deezer;
                        break;
                    case 'f':
                        if (strcmp(&(chars[3]), "ault") == 0)
                            return Name_Default;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'G':
            if (strcmp(&(chars[1]), "oogleMusic") == 0)
                return Name_GoogleMusic;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "andora") == 0)
                return Name_Pandora;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "dio") == 0)
                return Name_Rdio;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'o':
                    if (strncmp(&(chars[2]), "und", 3) == 0)
                      {
                        switch ((unsigned char)(chars[5]))
                          {
                            case 'C':
                                if (strcmp(&(chars[6]), "loud") == 0)
                                    return Name_SoundCloud;
                                break;
                            case 'H':
                                if (strcmp(&(chars[6]), "ound") == 0)
                                    return Name_SoundHound;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'p':
                    if (strcmp(&(chars[2]), "otify") == 0)
                        return Name_Spotify;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "idal") == 0)
                return Name_Tidal;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "ouTube") == 0)
                return Name_YouTube;
            break;
        default:
            break;
      }
    return Name__none;
  }

const char *MusicThirdPartyJSON::stringFromName(TypeNameKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Name_SoundHound:
            return "SoundHound";
        case Name_Pandora:
            return "Pandora";
        case Name_Spotify:
            return "Spotify";
        case Name_Rdio:
            return "Rdio";
        case Name_YouTube:
            return "YouTube";
        case Name_SoundCloud:
            return "SoundCloud";
        case Name_AppleMusic:
            return "AppleMusic";
        case Name_GoogleMusic:
            return "GoogleMusic";
        case Name_Deezer:
            return "Deezer";
        case Name_AmazonPrimeMusic:
            return "AmazonPrimeMusic";
        case Name_Tidal:
            return "Tidal";
        case Name_Default:
            return "Default";
        default:
            assert(false);
            return NULL;
      }
  }

MusicThirdPartyJSON::MusicThirdPartyJSON(const MusicThirdPartyJSON &)
  {
    assert(false);
  }

MusicThirdPartyJSON &MusicThirdPartyJSON::operator=(const MusicThirdPartyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicThirdPartyJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of MusicThirdPartyJSON is not a string.");
    TypeName the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'm':
                    if (strcmp(&(json_string->getData()[2]), "azonPrimeMusic") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Name_AmazonPrimeMusic;
                            goto open_enum_is_done;
                          }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "pleMusic") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Name_AppleMusic;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "e", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'e':
                        if (strcmp(&(json_string->getData()[3]), "zer") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Name_Deezer;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'f':
                        if (strcmp(&(json_string->getData()[3]), "ault") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Name_Default;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "oogleMusic") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Name_GoogleMusic;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "andora") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Name_Pandora;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "dio") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Name_Rdio;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'o':
                    if (strncmp(&(json_string->getData()[2]), "und", 3) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[5]))
                          {
                            case 'C':
                                if (strcmp(&(json_string->getData()[6]), "loud") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Name_SoundCloud;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'H':
                                if (strcmp(&(json_string->getData()[6]), "ound") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Name_SoundHound;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'p':
                    if (strcmp(&(json_string->getData()[2]), "otify") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Name_Spotify;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "idal") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Name_Tidal;
                    goto open_enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "ouTube") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Name_YouTube;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setName(the_open_enum);
  }

MusicThirdPartyJSON::MusicThirdPartyJSON(void) :
        flagHasName(false)
  {
  }

MusicThirdPartyJSON::~MusicThirdPartyJSON(void)
  {
  }

bool MusicThirdPartyJSON::hasName(void) const
  {
    return flagHasName;
  }

MusicThirdPartyJSON::TypeName MusicThirdPartyJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const MusicThirdPartyJSON::TypeName MusicThirdPartyJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

const char *MusicThirdPartyJSON::getNameAsChars(void) const
  {
    TypeName result = getName();
    if (result.in_known_list)
        return stringFromName(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicThirdPartyJSON::getNameAsString(void) const
  {
    return getNameAsChars();
  }

MusicThirdPartyJSON *MusicThirdPartyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicThirdPartyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool> generator("Type MusicThirdParty", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
