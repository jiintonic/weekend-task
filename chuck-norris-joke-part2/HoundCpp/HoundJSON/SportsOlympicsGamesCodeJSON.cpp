/* file "SportsOlympicsGamesCodeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsGamesCodeJSON.h"

#include "SportsOlympicsGamesCodeJSON.h"


SportsOlympicsGamesCodeJSON::TypeValue::TypeValue(void)
  {
  }

SportsOlympicsGamesCodeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsOlympicsGamesCodeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool SportsOlympicsGamesCodeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

SportsOlympicsGamesCodeJSON::TypeValueKnownValues SportsOlympicsGamesCodeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case '1':
            if (strncmp(&(chars[1]), "9", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case '0':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                if (strcmp(&(chars[4]), "Paris") == 0)
                                    return Value_1900Paris;
                                break;
                            case '4':
                                if (strcmp(&(chars[4]), "StLouis") == 0)
                                    return Value_1904StLouis;
                                break;
                            case '8':
                                if (strcmp(&(chars[4]), "London") == 0)
                                    return Value_1908London;
                                break;
                            default:
                                break;
                          }
                        break;
                    case '1':
                        if (strcmp(&(chars[3]), "2Stockholm") == 0)
                            return Value_1912Stockholm;
                        break;
                    case '2':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                if (strcmp(&(chars[4]), "Antwerp") == 0)
                                    return Value_1920Antwerp;
                                break;
                            case '4':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(chars[5]), "hamonix") == 0)
                                            return Value_1924Chamonix;
                                        break;
                                    case 'P':
                                        if (strcmp(&(chars[5]), "aris") == 0)
                                            return Value_1924Paris;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '8':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(chars[5]), "msterdam") == 0)
                                            return Value_1928Amsterdam;
                                        break;
                                    case 'S':
                                        if (strcmp(&(chars[5]), "tMoritz") == 0)
                                            return Value_1928StMoritz;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '3':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '2':
                                if (strncmp(&(chars[4]), "L", 1) == 0)
                                  {
                                    switch ((unsigned char)(chars[5]))
                                      {
                                        case 'a':
                                            if (strcmp(&(chars[6]), "kePlacid") == 0)
                                                return Value_1932LakePlacid;
                                            break;
                                        case 'o':
                                            if (strcmp(&(chars[6]), "sAngeles") == 0)
                                                return Value_1932LosAngeles;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'B':
                                        if (strcmp(&(chars[5]), "erlin") == 0)
                                            return Value_1936Berlin;
                                        break;
                                    case 'G':
                                        if (strcmp(&(chars[5]), "armischPartenkirchen") == 0)
                                            return Value_1936GarmischPartenkirchen;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '4':
                        if (strncmp(&(chars[3]), "8", 1) == 0)
                          {
                            switch ((unsigned char)(chars[4]))
                              {
                                case 'L':
                                    if (strcmp(&(chars[5]), "ondon") == 0)
                                        return Value_1948London;
                                    break;
                                case 'S':
                                    if (strcmp(&(chars[5]), "tMoritz") == 0)
                                        return Value_1948StMoritz;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case '5':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '2':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'H':
                                        if (strcmp(&(chars[5]), "elsinki") == 0)
                                            return Value_1952Helsinki;
                                        break;
                                    case 'O':
                                        if (strcmp(&(chars[5]), "slo") == 0)
                                            return Value_1952Oslo;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(chars[5]), "ortinaDAmpezzo") == 0)
                                            return Value_1956CortinaDAmpezzo;
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[5]), "elbourne") == 0)
                                            return Value_1956Melbourne;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '6':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'R':
                                        if (strcmp(&(chars[5]), "ome") == 0)
                                            return Value_1960Rome;
                                        break;
                                    case 'S':
                                        if (strcmp(&(chars[5]), "quawValley") == 0)
                                            return Value_1960SquawValley;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'I':
                                        if (strcmp(&(chars[5]), "nnsbruck") == 0)
                                            return Value_1964Innsbruck;
                                        break;
                                    case 'T':
                                        if (strcmp(&(chars[5]), "okyo") == 0)
                                            return Value_1964Tokyo;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '8':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'G':
                                        if (strcmp(&(chars[5]), "renoble") == 0)
                                            return Value_1968Grenoble;
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[5]), "exicoCity") == 0)
                                            return Value_1968MexicoCity;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '7':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '2':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'M':
                                        if (strcmp(&(chars[5]), "unich") == 0)
                                            return Value_1972Munich;
                                        break;
                                    case 'S':
                                        if (strcmp(&(chars[5]), "apporo") == 0)
                                            return Value_1972Sapporo;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'I':
                                        if (strcmp(&(chars[5]), "nnsbruck") == 0)
                                            return Value_1976Innsbruck;
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[5]), "ontreal") == 0)
                                            return Value_1976Montreal;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '8':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'L':
                                        if (strcmp(&(chars[5]), "akePlacid") == 0)
                                            return Value_1980LakePlacid;
                                        break;
                                    case 'M':
                                        if (strcmp(&(chars[5]), "oscow") == 0)
                                            return Value_1980Moscow;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'L':
                                        if (strcmp(&(chars[5]), "osAngeles") == 0)
                                            return Value_1984LosAngeles;
                                        break;
                                    case 'S':
                                        if (strcmp(&(chars[5]), "arajevo") == 0)
                                            return Value_1984Sarajevo;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                if (strcmp(&(chars[4]), "Athens") == 0)
                                    return Value_1986Athens;
                                break;
                            case '8':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(chars[5]), "algary") == 0)
                                            return Value_1988Calgary;
                                        break;
                                    case 'S':
                                        if (strcmp(&(chars[5]), "eoul") == 0)
                                            return Value_1988Seoul;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '9':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '2':
                                switch ((unsigned char)(chars[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(chars[5]), "lbertville") == 0)
                                            return Value_1992Albertville;
                                        break;
                                    case 'B':
                                        if (strcmp(&(chars[5]), "arcelona") == 0)
                                            return Value_1992Barcelona;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                if (strcmp(&(chars[4]), "Lillehammer") == 0)
                                    return Value_1994Lillehammer;
                                break;
                            case '6':
                                if (strcmp(&(chars[4]), "Atlanta") == 0)
                                    return Value_1996Atlanta;
                                break;
                            case '8':
                                if (strcmp(&(chars[4]), "Nagano") == 0)
                                    return Value_1998Nagano;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case '2':
            if (strncmp(&(chars[1]), "0", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case '0':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                if (strcmp(&(chars[4]), "Sydney") == 0)
                                    return Value_2000Sydney;
                                break;
                            case '2':
                                if (strcmp(&(chars[4]), "SaltLakeCity") == 0)
                                    return Value_2002SaltLakeCity;
                                break;
                            case '4':
                                if (strcmp(&(chars[4]), "Athens") == 0)
                                    return Value_2004Athens;
                                break;
                            case '6':
                                if (strcmp(&(chars[4]), "Turin") == 0)
                                    return Value_2006Turin;
                                break;
                            case '8':
                                if (strcmp(&(chars[4]), "Beijing") == 0)
                                    return Value_2008Beijing;
                                break;
                            default:
                                break;
                          }
                        break;
                    case '1':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                if (strcmp(&(chars[4]), "Vancouver") == 0)
                                    return Value_2010Vancouver;
                                break;
                            case '2':
                                if (strcmp(&(chars[4]), "London") == 0)
                                    return Value_2012London;
                                break;
                            case '4':
                                if (strcmp(&(chars[4]), "Sochi") == 0)
                                    return Value_2014Sochi;
                                break;
                            case '6':
                                if (strcmp(&(chars[4]), "RioDeJaneiro") == 0)
                                    return Value_2016RioDeJaneiro;
                                break;
                            case '8':
                                if (strcmp(&(chars[4]), "Pyeongchang") == 0)
                                    return Value_2018Pyeongchang;
                                break;
                            default:
                                break;
                          }
                        break;
                    case '2':
                        switch ((unsigned char)(chars[3]))
                          {
                            case '0':
                                if (strcmp(&(chars[4]), "Tokyo") == 0)
                                    return Value_2020Tokyo;
                                break;
                            case '2':
                                if (strcmp(&(chars[4]), "Beijing") == 0)
                                    return Value_2022Beijing;
                                break;
                            case '4':
                                if (strcmp(&(chars[4]), "Paris") == 0)
                                    return Value_2024Paris;
                                break;
                            case '6':
                                if (strcmp(&(chars[4]), "TBD") == 0)
                                    return Value_2026TBD;
                                break;
                            case '8':
                                if (strcmp(&(chars[4]), "LosAngeles") == 0)
                                    return Value_2028LosAngeles;
                                break;
                            default:
                                break;
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
    return Value__none;
  }

const char *SportsOlympicsGamesCodeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_1986Athens:
            return "1986Athens";
        case Value_1900Paris:
            return "1900Paris";
        case Value_1904StLouis:
            return "1904StLouis";
        case Value_1908London:
            return "1908London";
        case Value_1912Stockholm:
            return "1912Stockholm";
        case Value_1920Antwerp:
            return "1920Antwerp";
        case Value_1924Chamonix:
            return "1924Chamonix";
        case Value_1924Paris:
            return "1924Paris";
        case Value_1928StMoritz:
            return "1928StMoritz";
        case Value_1928Amsterdam:
            return "1928Amsterdam";
        case Value_1932LakePlacid:
            return "1932LakePlacid";
        case Value_1932LosAngeles:
            return "1932LosAngeles";
        case Value_1936GarmischPartenkirchen:
            return "1936GarmischPartenkirchen";
        case Value_1936Berlin:
            return "1936Berlin";
        case Value_1948StMoritz:
            return "1948StMoritz";
        case Value_1948London:
            return "1948London";
        case Value_1952Oslo:
            return "1952Oslo";
        case Value_1952Helsinki:
            return "1952Helsinki";
        case Value_1956CortinaDAmpezzo:
            return "1956CortinaDAmpezzo";
        case Value_1956Melbourne:
            return "1956Melbourne";
        case Value_1960SquawValley:
            return "1960SquawValley";
        case Value_1960Rome:
            return "1960Rome";
        case Value_1964Innsbruck:
            return "1964Innsbruck";
        case Value_1964Tokyo:
            return "1964Tokyo";
        case Value_1968Grenoble:
            return "1968Grenoble";
        case Value_1968MexicoCity:
            return "1968MexicoCity";
        case Value_1972Sapporo:
            return "1972Sapporo";
        case Value_1972Munich:
            return "1972Munich";
        case Value_1976Innsbruck:
            return "1976Innsbruck";
        case Value_1976Montreal:
            return "1976Montreal";
        case Value_1980LakePlacid:
            return "1980LakePlacid";
        case Value_1980Moscow:
            return "1980Moscow";
        case Value_1984Sarajevo:
            return "1984Sarajevo";
        case Value_1984LosAngeles:
            return "1984LosAngeles";
        case Value_1988Calgary:
            return "1988Calgary";
        case Value_1988Seoul:
            return "1988Seoul";
        case Value_1992Albertville:
            return "1992Albertville";
        case Value_1992Barcelona:
            return "1992Barcelona";
        case Value_1994Lillehammer:
            return "1994Lillehammer";
        case Value_1996Atlanta:
            return "1996Atlanta";
        case Value_1998Nagano:
            return "1998Nagano";
        case Value_2000Sydney:
            return "2000Sydney";
        case Value_2002SaltLakeCity:
            return "2002SaltLakeCity";
        case Value_2004Athens:
            return "2004Athens";
        case Value_2006Turin:
            return "2006Turin";
        case Value_2008Beijing:
            return "2008Beijing";
        case Value_2010Vancouver:
            return "2010Vancouver";
        case Value_2012London:
            return "2012London";
        case Value_2014Sochi:
            return "2014Sochi";
        case Value_2016RioDeJaneiro:
            return "2016RioDeJaneiro";
        case Value_2018Pyeongchang:
            return "2018Pyeongchang";
        case Value_2020Tokyo:
            return "2020Tokyo";
        case Value_2022Beijing:
            return "2022Beijing";
        case Value_2024Paris:
            return "2024Paris";
        case Value_2026TBD:
            return "2026TBD";
        case Value_2028LosAngeles:
            return "2028LosAngeles";
        default:
            assert(false);
            return NULL;
      }
  }

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(const SportsOlympicsGamesCodeJSON &)
  {
    assert(false);
  }

SportsOlympicsGamesCodeJSON &SportsOlympicsGamesCodeJSON::operator=(const SportsOlympicsGamesCodeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsGamesCodeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SportsOlympicsGamesCodeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case '1':
            if (strncmp(&(json_string->getData()[1]), "9", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case '0':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                if (strcmp(&(json_string->getData()[4]), "Paris") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1900Paris;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '4':
                                if (strcmp(&(json_string->getData()[4]), "StLouis") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1904StLouis;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                if (strcmp(&(json_string->getData()[4]), "London") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1908London;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '1':
                        if (strcmp(&(json_string->getData()[3]), "2Stockholm") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Value_1912Stockholm;
                                goto open_enum_is_done;
                              }
                        break;
                    case '2':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                if (strcmp(&(json_string->getData()[4]), "Antwerp") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1920Antwerp;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '4':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(json_string->getData()[5]), "hamonix") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1924Chamonix;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'P':
                                        if (strcmp(&(json_string->getData()[5]), "aris") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1924Paris;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '8':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(json_string->getData()[5]), "msterdam") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1928Amsterdam;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strcmp(&(json_string->getData()[5]), "tMoritz") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1928StMoritz;
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
                    case '3':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '2':
                                if (strncmp(&(json_string->getData()[4]), "L", 1) == 0)
                                  {
                                    switch ((unsigned char)(json_string->getData()[5]))
                                      {
                                        case 'a':
                                            if (strcmp(&(json_string->getData()[6]), "kePlacid") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_1932LakePlacid;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        case 'o':
                                            if (strcmp(&(json_string->getData()[6]), "sAngeles") == 0)
                                                  {
                                                    the_open_enum.in_known_list = true;
                                                    the_open_enum.list_value = Value_1932LosAngeles;
                                                    goto open_enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'B':
                                        if (strcmp(&(json_string->getData()[5]), "erlin") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1936Berlin;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'G':
                                        if (strcmp(&(json_string->getData()[5]), "armischPartenkirchen") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1936GarmischPartenkirchen;
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
                    case '4':
                        if (strncmp(&(json_string->getData()[3]), "8", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[4]))
                              {
                                case 'L':
                                    if (strcmp(&(json_string->getData()[5]), "ondon") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_1948London;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    if (strcmp(&(json_string->getData()[5]), "tMoritz") == 0)
                                          {
                                            the_open_enum.in_known_list = true;
                                            the_open_enum.list_value = Value_1948StMoritz;
                                            goto open_enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case '5':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '2':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'H':
                                        if (strcmp(&(json_string->getData()[5]), "elsinki") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1952Helsinki;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'O':
                                        if (strcmp(&(json_string->getData()[5]), "slo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1952Oslo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(json_string->getData()[5]), "ortinaDAmpezzo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1956CortinaDAmpezzo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "elbourne") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1956Melbourne;
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
                    case '6':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'R':
                                        if (strcmp(&(json_string->getData()[5]), "ome") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1960Rome;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strcmp(&(json_string->getData()[5]), "quawValley") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1960SquawValley;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[5]), "nnsbruck") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1964Innsbruck;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'T':
                                        if (strcmp(&(json_string->getData()[5]), "okyo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1964Tokyo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '8':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'G':
                                        if (strcmp(&(json_string->getData()[5]), "renoble") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1968Grenoble;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "exicoCity") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1968MexicoCity;
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
                    case '7':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '2':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "unich") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1972Munich;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strcmp(&(json_string->getData()[5]), "apporo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1972Sapporo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'I':
                                        if (strcmp(&(json_string->getData()[5]), "nnsbruck") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1976Innsbruck;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "ontreal") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1976Montreal;
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
                    case '8':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'L':
                                        if (strcmp(&(json_string->getData()[5]), "akePlacid") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1980LakePlacid;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'M':
                                        if (strcmp(&(json_string->getData()[5]), "oscow") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1980Moscow;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'L':
                                        if (strcmp(&(json_string->getData()[5]), "osAngeles") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1984LosAngeles;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strcmp(&(json_string->getData()[5]), "arajevo") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1984Sarajevo;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '6':
                                if (strcmp(&(json_string->getData()[4]), "Athens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1986Athens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'C':
                                        if (strcmp(&(json_string->getData()[5]), "algary") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1988Calgary;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'S':
                                        if (strcmp(&(json_string->getData()[5]), "eoul") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1988Seoul;
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
                    case '9':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '2':
                                switch ((unsigned char)(json_string->getData()[4]))
                                  {
                                    case 'A':
                                        if (strcmp(&(json_string->getData()[5]), "lbertville") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1992Albertville;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    case 'B':
                                        if (strcmp(&(json_string->getData()[5]), "arcelona") == 0)
                                              {
                                                the_open_enum.in_known_list = true;
                                                the_open_enum.list_value = Value_1992Barcelona;
                                                goto open_enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case '4':
                                if (strcmp(&(json_string->getData()[4]), "Lillehammer") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1994Lillehammer;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '6':
                                if (strcmp(&(json_string->getData()[4]), "Atlanta") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1996Atlanta;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                if (strcmp(&(json_string->getData()[4]), "Nagano") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_1998Nagano;
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
              }
            break;
        case '2':
            if (strncmp(&(json_string->getData()[1]), "0", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case '0':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                if (strcmp(&(json_string->getData()[4]), "Sydney") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2000Sydney;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '2':
                                if (strcmp(&(json_string->getData()[4]), "SaltLakeCity") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2002SaltLakeCity;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '4':
                                if (strcmp(&(json_string->getData()[4]), "Athens") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2004Athens;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '6':
                                if (strcmp(&(json_string->getData()[4]), "Turin") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2006Turin;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                if (strcmp(&(json_string->getData()[4]), "Beijing") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2008Beijing;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '1':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                if (strcmp(&(json_string->getData()[4]), "Vancouver") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2010Vancouver;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '2':
                                if (strcmp(&(json_string->getData()[4]), "London") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2012London;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '4':
                                if (strcmp(&(json_string->getData()[4]), "Sochi") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2014Sochi;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '6':
                                if (strcmp(&(json_string->getData()[4]), "RioDeJaneiro") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2016RioDeJaneiro;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                if (strcmp(&(json_string->getData()[4]), "Pyeongchang") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2018Pyeongchang;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                        break;
                    case '2':
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case '0':
                                if (strcmp(&(json_string->getData()[4]), "Tokyo") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2020Tokyo;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '2':
                                if (strcmp(&(json_string->getData()[4]), "Beijing") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2022Beijing;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '4':
                                if (strcmp(&(json_string->getData()[4]), "Paris") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2024Paris;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '6':
                                if (strcmp(&(json_string->getData()[4]), "TBD") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2026TBD;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case '8':
                                if (strcmp(&(json_string->getData()[4]), "LosAngeles") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Value_2028LosAngeles;
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

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(void) :
        flagHasValue(false)
  {
  }

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(const char *init_value) :
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

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(std::string init_value) :
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

SportsOlympicsGamesCodeJSON::SportsOlympicsGamesCodeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

SportsOlympicsGamesCodeJSON::~SportsOlympicsGamesCodeJSON(void)
  {
  }

bool SportsOlympicsGamesCodeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SportsOlympicsGamesCodeJSON::TypeValue SportsOlympicsGamesCodeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SportsOlympicsGamesCodeJSON::TypeValue SportsOlympicsGamesCodeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SportsOlympicsGamesCodeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsOlympicsGamesCodeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

SportsOlympicsGamesCodeJSON *SportsOlympicsGamesCodeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsGamesCodeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool> generator("Type SportsOlympicsGamesCode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
