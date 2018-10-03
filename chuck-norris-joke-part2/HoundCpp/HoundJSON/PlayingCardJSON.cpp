/* file "PlayingCardJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "PlayingCardJSON.h"

#include "PlayingCardJSON.h"


PlayingCardJSON::TypeWrittenRank::TypeWrittenRank(void)
  {
  }

PlayingCardJSON::TypeWrittenRank::TypeWrittenRank(const TypeWrittenRank &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

PlayingCardJSON::TypeWrittenRank::TypeWrittenRank(TypeWrittenRankKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool PlayingCardJSON::TypeWrittenRank::operator==(const TypeWrittenRank &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool PlayingCardJSON::TypeWrittenRank::operator!=(const TypeWrittenRank &other) const
  {
    return !(operator==(other));
  }

bool PlayingCardJSON::TypeWrittenRank::operator<(const TypeWrittenRank &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool PlayingCardJSON::TypeWrittenRank::operator>(const TypeWrittenRank &other) const
  {
    return other.operator<(*this);
  }

bool PlayingCardJSON::TypeWrittenRank::operator>=(const TypeWrittenRank &other) const
  {
    return !(operator<(other));
  }

bool PlayingCardJSON::TypeWrittenRank::operator<=(const TypeWrittenRank &other) const
  {
    return !(other.operator<(*this));
  }

PlayingCardJSON::TypeWrittenRankKnownValues PlayingCardJSON::stringToWrittenRank(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case '1':
            if (strcmp(&(chars[1]), "0") == 0)
                return WrittenRank_10;
            break;
        case '2':
            if (chars[1] == 0)
                return WrittenRank_2;
            break;
        case '3':
            if (chars[1] == 0)
                return WrittenRank_3;
            break;
        case '4':
            if (chars[1] == 0)
                return WrittenRank_4;
            break;
        case '5':
            if (chars[1] == 0)
                return WrittenRank_5;
            break;
        case '6':
            if (chars[1] == 0)
                return WrittenRank_6;
            break;
        case '7':
            if (chars[1] == 0)
                return WrittenRank_7;
            break;
        case '8':
            if (chars[1] == 0)
                return WrittenRank_8;
            break;
        case '9':
            if (chars[1] == 0)
                return WrittenRank_9;
            break;
        case 'A':
            if (chars[1] == 0)
                return WrittenRank_A;
            break;
        case 'J':
            if (chars[1] == 0)
                return WrittenRank_J;
            break;
        case 'K':
            if (chars[1] == 0)
                return WrittenRank_K;
            break;
        case 'Q':
            if (chars[1] == 0)
                return WrittenRank_Q;
            break;
        default:
            break;
      }
    return WrittenRank__none;
  }

const char *PlayingCardJSON::stringFromWrittenRank(TypeWrittenRankKnownValues the_enum)
  {
    switch (the_enum)
      {
        case WrittenRank_A:
            return "A";
        case WrittenRank_2:
            return "2";
        case WrittenRank_3:
            return "3";
        case WrittenRank_4:
            return "4";
        case WrittenRank_5:
            return "5";
        case WrittenRank_6:
            return "6";
        case WrittenRank_7:
            return "7";
        case WrittenRank_8:
            return "8";
        case WrittenRank_9:
            return "9";
        case WrittenRank_10:
            return "10";
        case WrittenRank_J:
            return "J";
        case WrittenRank_Q:
            return "Q";
        case WrittenRank_K:
            return "K";
        default:
            assert(false);
            return NULL;
      }
  }

PlayingCardJSON::TypeSpokenRank::TypeSpokenRank(void)
  {
  }

PlayingCardJSON::TypeSpokenRank::TypeSpokenRank(const TypeSpokenRank &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

PlayingCardJSON::TypeSpokenRank::TypeSpokenRank(TypeSpokenRankKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool PlayingCardJSON::TypeSpokenRank::operator==(const TypeSpokenRank &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool PlayingCardJSON::TypeSpokenRank::operator!=(const TypeSpokenRank &other) const
  {
    return !(operator==(other));
  }

bool PlayingCardJSON::TypeSpokenRank::operator<(const TypeSpokenRank &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool PlayingCardJSON::TypeSpokenRank::operator>(const TypeSpokenRank &other) const
  {
    return other.operator<(*this);
  }

bool PlayingCardJSON::TypeSpokenRank::operator>=(const TypeSpokenRank &other) const
  {
    return !(operator<(other));
  }

bool PlayingCardJSON::TypeSpokenRank::operator<=(const TypeSpokenRank &other) const
  {
    return !(other.operator<(*this));
  }

PlayingCardJSON::TypeSpokenRankKnownValues PlayingCardJSON::stringToSpokenRank(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ce") == 0)
                return SpokenRank_Ace;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "ight") == 0)
                return SpokenRank_Eight;
            break;
        case 'F':
            switch ((unsigned char)(chars[1]))
              {
                case 'i':
                    if (strcmp(&(chars[2]), "ve") == 0)
                        return SpokenRank_Five;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ur") == 0)
                        return SpokenRank_Four;
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(chars[1]), "ack") == 0)
                return SpokenRank_Jack;
            break;
        case 'K':
            if (strcmp(&(chars[1]), "ing") == 0)
                return SpokenRank_King;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "ine") == 0)
                return SpokenRank_Nine;
            break;
        case 'Q':
            if (strcmp(&(chars[1]), "ueen") == 0)
                return SpokenRank_Queen;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "ven") == 0)
                        return SpokenRank_Seven;
                    break;
                case 'i':
                    if (strcmp(&(chars[2]), "x") == 0)
                        return SpokenRank_Six;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strcmp(&(chars[2]), "n") == 0)
                        return SpokenRank_Ten;
                    break;
                case 'h':
                    if (strcmp(&(chars[2]), "ree") == 0)
                        return SpokenRank_Three;
                    break;
                case 'w':
                    if (strcmp(&(chars[2]), "o") == 0)
                        return SpokenRank_Two;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return SpokenRank__none;
  }

const char *PlayingCardJSON::stringFromSpokenRank(TypeSpokenRankKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SpokenRank_Ace:
            return "Ace";
        case SpokenRank_Two:
            return "Two";
        case SpokenRank_Three:
            return "Three";
        case SpokenRank_Four:
            return "Four";
        case SpokenRank_Five:
            return "Five";
        case SpokenRank_Six:
            return "Six";
        case SpokenRank_Seven:
            return "Seven";
        case SpokenRank_Eight:
            return "Eight";
        case SpokenRank_Nine:
            return "Nine";
        case SpokenRank_Ten:
            return "Ten";
        case SpokenRank_Jack:
            return "Jack";
        case SpokenRank_Queen:
            return "Queen";
        case SpokenRank_King:
            return "King";
        default:
            assert(false);
            return NULL;
      }
  }

PlayingCardJSON::TypeWrittenSuit::TypeWrittenSuit(void)
  {
  }

PlayingCardJSON::TypeWrittenSuit::TypeWrittenSuit(const TypeWrittenSuit &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

PlayingCardJSON::TypeWrittenSuit::TypeWrittenSuit(TypeWrittenSuitKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool PlayingCardJSON::TypeWrittenSuit::operator==(const TypeWrittenSuit &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool PlayingCardJSON::TypeWrittenSuit::operator!=(const TypeWrittenSuit &other) const
  {
    return !(operator==(other));
  }

bool PlayingCardJSON::TypeWrittenSuit::operator<(const TypeWrittenSuit &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool PlayingCardJSON::TypeWrittenSuit::operator>(const TypeWrittenSuit &other) const
  {
    return other.operator<(*this);
  }

bool PlayingCardJSON::TypeWrittenSuit::operator>=(const TypeWrittenSuit &other) const
  {
    return !(operator<(other));
  }

bool PlayingCardJSON::TypeWrittenSuit::operator<=(const TypeWrittenSuit &other) const
  {
    return !(other.operator<(*this));
  }

PlayingCardJSON::TypeWrittenSuitKnownValues PlayingCardJSON::stringToWrittenSuit(const char *chars)
  {
    if (strncmp(chars, "\342\231", 2) == 0)
      {
        switch ((unsigned char)(chars[2]))
          {
            case 160:
                if (chars[3] == 0)
                    return WrittenSuit__x2660_;
                break;
            case 163:
                if (chars[3] == 0)
                    return WrittenSuit__x2663_;
                break;
            case 165:
                if (chars[3] == 0)
                    return WrittenSuit__x2665_;
                break;
            case 166:
                if (chars[3] == 0)
                    return WrittenSuit__x2666_;
                break;
            default:
                break;
          }
      }
    return WrittenSuit__none;
  }

const char *PlayingCardJSON::stringFromWrittenSuit(TypeWrittenSuitKnownValues the_enum)
  {
    switch (the_enum)
      {
        case WrittenSuit__x2663_:
            return "♣";
        case WrittenSuit__x2666_:
            return "♦";
        case WrittenSuit__x2665_:
            return "♥";
        case WrittenSuit__x2660_:
            return "♠";
        default:
            assert(false);
            return NULL;
      }
  }

PlayingCardJSON::TypeSpokenSuit::TypeSpokenSuit(void)
  {
  }

PlayingCardJSON::TypeSpokenSuit::TypeSpokenSuit(const TypeSpokenSuit &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

PlayingCardJSON::TypeSpokenSuit::TypeSpokenSuit(TypeSpokenSuitKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool PlayingCardJSON::TypeSpokenSuit::operator==(const TypeSpokenSuit &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool PlayingCardJSON::TypeSpokenSuit::operator!=(const TypeSpokenSuit &other) const
  {
    return !(operator==(other));
  }

bool PlayingCardJSON::TypeSpokenSuit::operator<(const TypeSpokenSuit &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool PlayingCardJSON::TypeSpokenSuit::operator>(const TypeSpokenSuit &other) const
  {
    return other.operator<(*this);
  }

bool PlayingCardJSON::TypeSpokenSuit::operator>=(const TypeSpokenSuit &other) const
  {
    return !(operator<(other));
  }

bool PlayingCardJSON::TypeSpokenSuit::operator<=(const TypeSpokenSuit &other) const
  {
    return !(other.operator<(*this));
  }

PlayingCardJSON::TypeSpokenSuitKnownValues PlayingCardJSON::stringToSpokenSuit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "lubs") == 0)
                return SpokenSuit_Clubs;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "iamonds") == 0)
                return SpokenSuit_Diamonds;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "earts") == 0)
                return SpokenSuit_Hearts;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "pades") == 0)
                return SpokenSuit_Spades;
            break;
        default:
            break;
      }
    return SpokenSuit__none;
  }

const char *PlayingCardJSON::stringFromSpokenSuit(TypeSpokenSuitKnownValues the_enum)
  {
    switch (the_enum)
      {
        case SpokenSuit_Clubs:
            return "Clubs";
        case SpokenSuit_Diamonds:
            return "Diamonds";
        case SpokenSuit_Hearts:
            return "Hearts";
        case SpokenSuit_Spades:
            return "Spades";
        default:
            assert(false);
            return NULL;
      }
  }

PlayingCardJSON::PlayingCardJSON(const PlayingCardJSON &)
  {
    assert(false);
  }

PlayingCardJSON &PlayingCardJSON::operator=(const PlayingCardJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void PlayingCardJSON::fromJSONWrittenRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenRank of PlayingCardJSON is not a string.");
    TypeWrittenRank the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case '1':
            if (strcmp(&(json_string->getData()[1]), "0") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_10;
                    goto open_enum_is_done;
                  }
            break;
        case '2':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_2;
                    goto open_enum_is_done;
                  }
            break;
        case '3':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_3;
                    goto open_enum_is_done;
                  }
            break;
        case '4':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_4;
                    goto open_enum_is_done;
                  }
            break;
        case '5':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_5;
                    goto open_enum_is_done;
                  }
            break;
        case '6':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_6;
                    goto open_enum_is_done;
                  }
            break;
        case '7':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_7;
                    goto open_enum_is_done;
                  }
            break;
        case '8':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_8;
                    goto open_enum_is_done;
                  }
            break;
        case '9':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_9;
                    goto open_enum_is_done;
                  }
            break;
        case 'A':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_A;
                    goto open_enum_is_done;
                  }
            break;
        case 'J':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_J;
                    goto open_enum_is_done;
                  }
            break;
        case 'K':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_K;
                    goto open_enum_is_done;
                  }
            break;
        case 'Q':
            if (json_string->getData()[1] == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = WrittenRank_Q;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setWrittenRank(the_open_enum);
  }

void PlayingCardJSON::fromJSONSpokenRank(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenRank of PlayingCardJSON is not a string.");
    TypeSpokenRank the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ce") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_Ace;
                    goto open_enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "ight") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_Eight;
                    goto open_enum_is_done;
                  }
            break;
        case 'F':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "ve") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Five;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "ur") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Four;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'J':
            if (strcmp(&(json_string->getData()[1]), "ack") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_Jack;
                    goto open_enum_is_done;
                  }
            break;
        case 'K':
            if (strcmp(&(json_string->getData()[1]), "ing") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_King;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "ine") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_Nine;
                    goto open_enum_is_done;
                  }
            break;
        case 'Q':
            if (strcmp(&(json_string->getData()[1]), "ueen") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenRank_Queen;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ven") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Seven;
                            goto open_enum_is_done;
                          }
                    break;
                case 'i':
                    if (strcmp(&(json_string->getData()[2]), "x") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Six;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "n") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Ten;
                            goto open_enum_is_done;
                          }
                    break;
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ree") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Three;
                            goto open_enum_is_done;
                          }
                    break;
                case 'w':
                    if (strcmp(&(json_string->getData()[2]), "o") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = SpokenRank_Two;
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
    setSpokenRank(the_open_enum);
  }

void PlayingCardJSON::fromJSONWrittenSuit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenSuit of PlayingCardJSON is not a string.");
    TypeWrittenSuit the_open_enum;
    if (strncmp(json_string->getData(), "\342\231", 2) == 0)
      {
        switch ((unsigned char)(json_string->getData()[2]))
          {
            case 160:
                if (json_string->getData()[3] == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = WrittenSuit__x2660_;
                        goto open_enum_is_done;
                      }
                break;
            case 163:
                if (json_string->getData()[3] == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = WrittenSuit__x2663_;
                        goto open_enum_is_done;
                      }
                break;
            case 165:
                if (json_string->getData()[3] == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = WrittenSuit__x2665_;
                        goto open_enum_is_done;
                      }
                break;
            case 166:
                if (json_string->getData()[3] == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = WrittenSuit__x2666_;
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
    setWrittenSuit(the_open_enum);
  }

void PlayingCardJSON::fromJSONSpokenSuit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSuit of PlayingCardJSON is not a string.");
    TypeSpokenSuit the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "lubs") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenSuit_Clubs;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "iamonds") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenSuit_Diamonds;
                    goto open_enum_is_done;
                  }
            break;
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "earts") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenSuit_Hearts;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "pades") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = SpokenSuit_Spades;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setSpokenSuit(the_open_enum);
  }

void PlayingCardJSON::fromJSONIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Index of PlayingCardJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Index of PlayingCardJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setIndex(extracted_integer);
  }

PlayingCardJSON::PlayingCardJSON(void) :
        flagHasWrittenRank(false),
        flagHasSpokenRank(false),
        flagHasWrittenSuit(false),
        flagHasSpokenSuit(false),
        flagHasIndex(false)
  {
    extraIndex = create_string_index();
  }

PlayingCardJSON::~PlayingCardJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool PlayingCardJSON::hasWrittenRank(void) const
  {
    return flagHasWrittenRank;
  }

PlayingCardJSON::TypeWrittenRank PlayingCardJSON::getWrittenRank(void)
  {
    assert(flagHasWrittenRank);
    return storeWrittenRank;
  }

const PlayingCardJSON::TypeWrittenRank PlayingCardJSON::getWrittenRank(void) const
  {
    assert(flagHasWrittenRank);
    return storeWrittenRank;
  }

const char *PlayingCardJSON::getWrittenRankAsChars(void) const
  {
    TypeWrittenRank result = getWrittenRank();
    if (result.in_known_list)
        return stringFromWrittenRank(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string PlayingCardJSON::getWrittenRankAsString(void) const
  {
    return getWrittenRankAsChars();
  }

bool PlayingCardJSON::hasSpokenRank(void) const
  {
    return flagHasSpokenRank;
  }

PlayingCardJSON::TypeSpokenRank PlayingCardJSON::getSpokenRank(void)
  {
    assert(flagHasSpokenRank);
    return storeSpokenRank;
  }

const PlayingCardJSON::TypeSpokenRank PlayingCardJSON::getSpokenRank(void) const
  {
    assert(flagHasSpokenRank);
    return storeSpokenRank;
  }

const char *PlayingCardJSON::getSpokenRankAsChars(void) const
  {
    TypeSpokenRank result = getSpokenRank();
    if (result.in_known_list)
        return stringFromSpokenRank(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string PlayingCardJSON::getSpokenRankAsString(void) const
  {
    return getSpokenRankAsChars();
  }

bool PlayingCardJSON::hasWrittenSuit(void) const
  {
    return flagHasWrittenSuit;
  }

PlayingCardJSON::TypeWrittenSuit PlayingCardJSON::getWrittenSuit(void)
  {
    assert(flagHasWrittenSuit);
    return storeWrittenSuit;
  }

const PlayingCardJSON::TypeWrittenSuit PlayingCardJSON::getWrittenSuit(void) const
  {
    assert(flagHasWrittenSuit);
    return storeWrittenSuit;
  }

const char *PlayingCardJSON::getWrittenSuitAsChars(void) const
  {
    TypeWrittenSuit result = getWrittenSuit();
    if (result.in_known_list)
        return stringFromWrittenSuit(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string PlayingCardJSON::getWrittenSuitAsString(void) const
  {
    return getWrittenSuitAsChars();
  }

bool PlayingCardJSON::hasSpokenSuit(void) const
  {
    return flagHasSpokenSuit;
  }

PlayingCardJSON::TypeSpokenSuit PlayingCardJSON::getSpokenSuit(void)
  {
    assert(flagHasSpokenSuit);
    return storeSpokenSuit;
  }

const PlayingCardJSON::TypeSpokenSuit PlayingCardJSON::getSpokenSuit(void) const
  {
    assert(flagHasSpokenSuit);
    return storeSpokenSuit;
  }

const char *PlayingCardJSON::getSpokenSuitAsChars(void) const
  {
    TypeSpokenSuit result = getSpokenSuit();
    if (result.in_known_list)
        return stringFromSpokenSuit(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string PlayingCardJSON::getSpokenSuitAsString(void) const
  {
    return getSpokenSuitAsChars();
  }

bool PlayingCardJSON::hasIndex(void) const
  {
    return flagHasIndex;
  }

uint8_t PlayingCardJSON::getIndex(void)
  {
    assert(flagHasIndex);
    return storeIndex;
  }

const uint8_t PlayingCardJSON::getIndex(void) const
  {
    assert(flagHasIndex);
    return storeIndex;
  }

PlayingCardJSON *PlayingCardJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    PlayingCardJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<PlayingCardJSON>, PlayingCardJSON *, bool> generator("Type PlayingCard", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
