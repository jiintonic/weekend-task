/* file "SportsGameJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsGameJSON.h"

#include "SportsGameJSON.h"
#include "SportsGameCricketJSON.h"
#include "SportsGameGenericJSON.h"


SportsGameJSON::TypeStatus::TypeStatus(void)
  {
  }

SportsGameJSON::TypeStatus::TypeStatus(const TypeStatus &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameJSON::TypeStatus::TypeStatus(TypeStatusKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameJSON::TypeStatus::operator==(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameJSON::TypeStatus::operator!=(const TypeStatus &other) const
  {
    return !(operator==(other));
  }

bool SportsGameJSON::TypeStatus::operator<(const TypeStatus &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameJSON::TypeStatus::operator>(const TypeStatus &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameJSON::TypeStatus::operator>=(const TypeStatus &other) const
  {
    return !(operator<(other));
  }

bool SportsGameJSON::TypeStatus::operator<=(const TypeStatus &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameJSON::TypeStatusKnownValues SportsGameJSON::stringToStatus(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "nceled") == 0)
                        return Status_Canceled;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "mplete") == 0)
                        return Status_Complete;
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(chars[1]), "elayed", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 0:
                        return Status_Delayed;
                    case 'F':
                        if (strcmp(&(chars[8]), "acility") == 0)
                            return Status_DelayedFacility;
                        break;
                    case 'W':
                        if (strcmp(&(chars[8]), "eather") == 0)
                            return Status_DelayedWeather;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nProgress") == 0)
                return Status_InProgress;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "ostponed") == 0)
                return Status_Postponed;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strncmp(&(chars[2]), "heduled", 7) == 0)
                      {
                        switch ((unsigned char)(chars[9]))
                          {
                            case 0:
                                return Status_Scheduled;
                            case 'F':
                                if (strcmp(&(chars[10]), "lex") == 0)
                                    return Status_ScheduledFlex;
                                break;
                            case 'T':
                                if (strcmp(&(chars[10]), "imeTBD") == 0)
                                    return Status_ScheduledTimeTBD;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "spended") == 0)
                        return Status_Suspended;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strncmp(&(chars[1]), "n", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'k':
                        if (strcmp(&(chars[3]), "nown") == 0)
                            return Status_Unknown;
                        break;
                    case 'n':
                        if (strcmp(&(chars[3]), "ecessary") == 0)
                            return Status_Unnecessary;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    return Status__none;
  }

const char *SportsGameJSON::stringFromStatus(TypeStatusKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Status_Scheduled:
            return "Scheduled";
        case Status_InProgress:
            return "InProgress";
        case Status_Complete:
            return "Complete";
        case Status_Delayed:
            return "Delayed";
        case Status_DelayedWeather:
            return "DelayedWeather";
        case Status_DelayedFacility:
            return "DelayedFacility";
        case Status_Postponed:
            return "Postponed";
        case Status_Suspended:
            return "Suspended";
        case Status_Canceled:
            return "Canceled";
        case Status_Unnecessary:
            return "Unnecessary";
        case Status_ScheduledFlex:
            return "ScheduledFlex";
        case Status_ScheduledTimeTBD:
            return "ScheduledTimeTBD";
        case Status_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameJSON::TypeClockJSON::TypeCountDirection::TypeCountDirection(void)
  {
  }

SportsGameJSON::TypeClockJSON::TypeCountDirection::TypeCountDirection(const TypeCountDirection &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameJSON::TypeClockJSON::TypeCountDirection::TypeCountDirection(TypeCountDirectionKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator==(const TypeCountDirection &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator!=(const TypeCountDirection &other) const
  {
    return !(operator==(other));
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator<(const TypeCountDirection &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator>(const TypeCountDirection &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator>=(const TypeCountDirection &other) const
  {
    return !(operator<(other));
  }

bool SportsGameJSON::TypeClockJSON::TypeCountDirection::operator<=(const TypeCountDirection &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameJSON::TypeClockJSON::TypeCountDirectionKnownValues SportsGameJSON::TypeClockJSON::stringToCountDirection(const char *chars)
  {
    if (strncmp(chars, "Count", 5) == 0)
      {
        switch ((unsigned char)(chars[5]))
          {
            case 'D':
                if (strcmp(&(chars[6]), "own") == 0)
                    return CountDirection_CountDown;
                break;
            case 'U':
                if (strcmp(&(chars[6]), "p") == 0)
                    return CountDirection_CountUp;
                break;
            default:
                break;
          }
      }
    return CountDirection__none;
  }

const char *SportsGameJSON::TypeClockJSON::stringFromCountDirection(TypeCountDirectionKnownValues the_enum)
  {
    switch (the_enum)
      {
        case CountDirection_CountDown:
            return "CountDown";
        case CountDirection_CountUp:
            return "CountUp";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameJSON::TypeClockJSON::TypeClockJSON(const TypeClockJSON &)
  {
    assert(false);
  }

SportsGameJSON::TypeClockJSON &SportsGameJSON::TypeClockJSON::operator=(const TypeClockJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameJSON::TypeClockJSON::fromJSONMinutes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Minutes of TypeClockJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Minutes of TypeClockJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinutes(extracted_integer);
  }

void SportsGameJSON::TypeClockJSON::fromJSONSeconds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Seconds of TypeClockJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Seconds of TypeClockJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setSeconds(extracted_integer);
  }

void SportsGameJSON::TypeClockJSON::fromJSONCountDirection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CountDirection of TypeClockJSON is not a string.");
    TypeCountDirection the_open_enum;
    if (strncmp(json_string->getData(), "Count", 5) == 0)
      {
        switch ((unsigned char)(json_string->getData()[5]))
          {
            case 'D':
                if (strcmp(&(json_string->getData()[6]), "own") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CountDirection_CountDown;
                        goto open_enum_is_done;
                      }
                break;
            case 'U':
                if (strcmp(&(json_string->getData()[6]), "p") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = CountDirection_CountUp;
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
    setCountDirection(the_open_enum);
  }

SportsGameJSON::TypeClockJSON::TypeClockJSON(void) :
        flagHasMinutes(false),
        flagHasSeconds(false),
        flagHasCountDirection(false)
  {
    extraIndex = create_string_index();
  }

SportsGameJSON::TypeClockJSON::~TypeClockJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsGameJSON::TypeClockJSON::hasMinutes(void) const
  {
    return flagHasMinutes;
  }

OInteger SportsGameJSON::TypeClockJSON::getMinutes(void)
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

const OInteger SportsGameJSON::TypeClockJSON::getMinutes(void) const
  {
    assert(flagHasMinutes);
    return storeMinutes;
  }

bool SportsGameJSON::TypeClockJSON::hasSeconds(void) const
  {
    return flagHasSeconds;
  }

uint8_t SportsGameJSON::TypeClockJSON::getSeconds(void)
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

const uint8_t SportsGameJSON::TypeClockJSON::getSeconds(void) const
  {
    assert(flagHasSeconds);
    return storeSeconds;
  }

bool SportsGameJSON::TypeClockJSON::hasCountDirection(void) const
  {
    return flagHasCountDirection;
  }

SportsGameJSON::TypeClockJSON::TypeCountDirection SportsGameJSON::TypeClockJSON::getCountDirection(void)
  {
    assert(flagHasCountDirection);
    return storeCountDirection;
  }

const SportsGameJSON::TypeClockJSON::TypeCountDirection SportsGameJSON::TypeClockJSON::getCountDirection(void) const
  {
    assert(flagHasCountDirection);
    return storeCountDirection;
  }

const char *SportsGameJSON::TypeClockJSON::getCountDirectionAsChars(void) const
  {
    TypeCountDirection result = getCountDirection();
    if (result.in_known_list)
        return stringFromCountDirection(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameJSON::TypeClockJSON::getCountDirectionAsString(void) const
  {
    return getCountDirectionAsChars();
  }

SportsGameJSON::TypeBaseballInningHalf::TypeBaseballInningHalf(void)
  {
  }

SportsGameJSON::TypeBaseballInningHalf::TypeBaseballInningHalf(const TypeBaseballInningHalf &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsGameJSON::TypeBaseballInningHalf::TypeBaseballInningHalf(TypeBaseballInningHalfKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator==(const TypeBaseballInningHalf &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator!=(const TypeBaseballInningHalf &other) const
  {
    return !(operator==(other));
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator<(const TypeBaseballInningHalf &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator>(const TypeBaseballInningHalf &other) const
  {
    return other.operator<(*this);
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator>=(const TypeBaseballInningHalf &other) const
  {
    return !(operator<(other));
  }

bool SportsGameJSON::TypeBaseballInningHalf::operator<=(const TypeBaseballInningHalf &other) const
  {
    return !(other.operator<(*this));
  }

SportsGameJSON::TypeBaseballInningHalfKnownValues SportsGameJSON::stringToBaseballInningHalf(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ottom") == 0)
                return BaseballInningHalf_Bottom;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "iddle") == 0)
                return BaseballInningHalf_Middle;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "op") == 0)
                return BaseballInningHalf_Top;
            break;
        default:
            break;
      }
    return BaseballInningHalf__none;
  }

const char *SportsGameJSON::stringFromBaseballInningHalf(TypeBaseballInningHalfKnownValues the_enum)
  {
    switch (the_enum)
      {
        case BaseballInningHalf_Top:
            return "Top";
        case BaseballInningHalf_Middle:
            return "Middle";
        case BaseballInningHalf_Bottom:
            return "Bottom";
        default:
            assert(false);
            return NULL;
      }
  }

SportsGameJSON::SportsGameJSON(const SportsGameJSON &)
  {
    assert(false);
  }

SportsGameJSON &SportsGameJSON::operator=(const SportsGameJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsGameJSON::fromJSONTeams(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Teams of SportsGameJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Teams of SportsGameJSON has too few elements.");
    std::vector< SportsTeamNewJSON * > vector_Teams1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Teams1[num1] = convert_classy;
      }
    assert(vector_Teams1.size() >= 2);
    initTeams();
    for (size_t num5 = 0; num5 < vector_Teams1.size(); ++num5)
        appendTeams(vector_Teams1[num5]);
    for (size_t num1 = 0; num1 < vector_Teams1.size(); ++num1)
      {
        vector_Teams1[num1]->remove_reference();
      }
  }

void SportsGameJSON::fromJSONLeague(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueCodeJSON *convert_classy = SportsLeagueCodeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLeague(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONScores(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Scores of SportsGameJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Scores of SportsGameJSON has too few elements.");
    std::vector< OInteger > vector_Scores1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field Scores of SportsGameJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field Scores of SportsGameJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_Scores1[num1] = extracted_integer;
      }
    assert(vector_Scores1.size() >= 2);
    initScores();
    for (size_t num6 = 0; num6 < vector_Scores1.size(); ++num6)
        appendScores(vector_Scores1[num6]);
    for (size_t num1 = 0; num1 < vector_Scores1.size(); ++num1)
      {
      }
  }

void SportsGameJSON::fromJSONHomeAway(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HomeAway of SportsGameJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field HomeAway of SportsGameJSON has too few elements.");
    std::vector< SportsHomeAwayJSON * > vector_HomeAway1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsHomeAwayJSON *convert_classy = SportsHomeAwayJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HomeAway1[num1] = convert_classy;
      }
    assert(vector_HomeAway1.size() >= 2);
    initHomeAway();
    for (size_t num7 = 0; num7 < vector_HomeAway1.size(); ++num7)
        appendHomeAway(vector_HomeAway1[num7]);
    for (size_t num1 = 0; num1 < vector_HomeAway1.size(); ++num1)
      {
        vector_HomeAway1[num1]->remove_reference();
      }
  }

void SportsGameJSON::fromJSONStartTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartTime(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Status of SportsGameJSON is not a string.");
    TypeStatus the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "nceled") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_Canceled;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "mplete") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_Complete;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "elayed", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 0:
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_Delayed;
                            goto open_enum_is_done;
                          }
                    case 'F':
                        if (strcmp(&(json_string->getData()[8]), "acility") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Status_DelayedFacility;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'W':
                        if (strcmp(&(json_string->getData()[8]), "eather") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Status_DelayedWeather;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nProgress") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_InProgress;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "ostponed") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Status_Postponed;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strncmp(&(json_string->getData()[2]), "heduled", 7) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[9]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = Status_Scheduled;
                                    goto open_enum_is_done;
                                  }
                            case 'F':
                                if (strcmp(&(json_string->getData()[10]), "lex") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Status_ScheduledFlex;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'T':
                                if (strcmp(&(json_string->getData()[10]), "imeTBD") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = Status_ScheduledTimeTBD;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "spended") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Status_Suspended;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strncmp(&(json_string->getData()[1]), "n", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'k':
                        if (strcmp(&(json_string->getData()[3]), "nown") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Status_Unknown;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'n':
                        if (strcmp(&(json_string->getData()[3]), "ecessary") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Status_Unnecessary;
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
    setStatus(the_open_enum);
  }

void SportsGameJSON::fromJSONPlayingPeriod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PlayingPeriod of SportsGameJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PlayingPeriod of SportsGameJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPlayingPeriod(extracted_integer);
  }

void SportsGameJSON::fromJSONClock(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeClockJSON *convert_classy = TypeClockJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClock(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONBaseballInningHalf(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BaseballInningHalf of SportsGameJSON is not a string.");
    TypeBaseballInningHalf the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ottom") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BaseballInningHalf_Bottom;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "iddle") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BaseballInningHalf_Middle;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "op") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = BaseballInningHalf_Top;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setBaseballInningHalf(the_open_enum);
  }

void SportsGameJSON::fromJSONVenue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsVenueNewJSON *convert_classy = SportsVenueNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVenue(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONBroadcastNetworks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field BroadcastNetworks of SportsGameJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field BroadcastNetworks of SportsGameJSON has too few elements.");
    std::vector< std::string > vector_BroadcastNetworks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field BroadcastNetworks of SportsGameJSON is not a string.");
        vector_BroadcastNetworks1[num1] = std::string(json_string->getData());
      }
    assert(vector_BroadcastNetworks1.size() >= 1);
    initBroadcastNetworks();
    for (size_t num8 = 0; num8 < vector_BroadcastNetworks1.size(); ++num8)
        appendBroadcastNetworks(vector_BroadcastNetworks1[num8]);
    for (size_t num1 = 0; num1 < vector_BroadcastNetworks1.size(); ++num1)
      {
      }
  }

void SportsGameJSON::fromJSONSeason(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeasonResolvedJSON *convert_classy = SportsSeasonResolvedJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeason(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayoffSpecialGameJSON *convert_classy = SportsPlayoffSpecialGameJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpecialGameType(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONTournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTournamentJSON *convert_classy = SportsTournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsGameJSON::fromJSONSeriesGameNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field SeriesGameNumber of SportsGameJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field SeriesGameNumber of SportsGameJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setSeriesGameNumber(extracted_integer);
  }

void SportsGameJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of SportsGameJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void SportsGameJSON::fromJSONSportImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSportImageJSON *convert_classy = SportsSportImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportImage(convert_classy);
    convert_classy->remove_reference();
  }

SportsGameJSON::SportsGameJSON(void) :
        flagHasTeams(false),
        flagHasLeague(false),
        flagHasScores(false),
        flagHasHomeAway(false),
        flagHasStartTime(false),
        flagHasStatus(false),
        flagHasPlayingPeriod(false),
        flagHasClock(false),
        flagHasBaseballInningHalf(false),
        flagHasVenue(false),
        flagHasBroadcastNetworks(false),
        flagHasSeason(false),
        flagHasSpecialGameType(false),
        flagHasTournament(false),
        flagHasSeriesGameNumber(false),
        flagHasID(false),
        flagHasSportImage(false)
  {
  }

SportsGameJSON::~SportsGameJSON(void)
  {
    if (flagHasTeams)
      {
        for (size_t num7 = 0; num7 < storeTeams.size(); ++num7)
          {
            storeTeams[num7]->remove_reference();
          }
      }
    if (flagHasLeague)
      {
        storeLeague->remove_reference();
      }
    if (flagHasHomeAway)
      {
        for (size_t num8 = 0; num8 < storeHomeAway.size(); ++num8)
          {
            storeHomeAway[num8]->remove_reference();
          }
      }
    if (flagHasStartTime)
      {
        storeStartTime->remove_reference();
      }
    if (flagHasClock)
      {
        storeClock->remove_reference();
      }
    if (flagHasVenue)
      {
        storeVenue->remove_reference();
      }
    if (flagHasSeason)
      {
        storeSeason->remove_reference();
      }
    if (flagHasSpecialGameType)
      {
        storeSpecialGameType->remove_reference();
      }
    if (flagHasTournament)
      {
        storeTournament->remove_reference();
      }
    if (flagHasSportImage)
      {
        storeSportImage->remove_reference();
      }
  }

bool SportsGameJSON::hasTeams(void) const
  {
    return flagHasTeams;
  }

size_t SportsGameJSON::countOfTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams.size();
  }

SportsTeamNewJSON * SportsGameJSON::elementOfTeams(size_t element_num)
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

const SportsTeamNewJSON * SportsGameJSON::elementOfTeams(size_t element_num) const
  {
    assert(flagHasTeams);
    return storeTeams[element_num];
  }

std::vector< SportsTeamNewJSON * > SportsGameJSON::getTeams(void)
  {
    assert(flagHasTeams);
    return storeTeams;
  }

const std::vector< SportsTeamNewJSON * > SportsGameJSON::getTeams(void) const
  {
    assert(flagHasTeams);
    return storeTeams;
  }

bool SportsGameJSON::hasLeague(void) const
  {
    return flagHasLeague;
  }

SportsLeagueCodeJSON * SportsGameJSON::getLeague(void)
  {
    assert(flagHasLeague);
    return storeLeague;
  }

const SportsLeagueCodeJSON * SportsGameJSON::getLeague(void) const
  {
    assert(flagHasLeague);
    return storeLeague;
  }

SportsLeagueCodeJSON::TypeValue SportsGameJSON::getLeagueValue(void)
  {
    return getLeague()->getValue();
  }

const SportsLeagueCodeJSON::TypeValue SportsGameJSON::getLeagueValue(void) const
  {
    return getLeague()->getValue();
  }

const char *SportsGameJSON::getLeagueAsChars(void) const
  {
    return getLeague()->getValueAsChars();
  }

std::string SportsGameJSON::getLeagueAsString(void) const
  {
    return getLeague()->getValueAsString();
  }

bool SportsGameJSON::hasScores(void) const
  {
    return flagHasScores;
  }

size_t SportsGameJSON::countOfScores(void) const
  {
    assert(flagHasScores);
    return storeScores.size();
  }

OInteger SportsGameJSON::elementOfScores(size_t element_num)
  {
    assert(flagHasScores);
    return storeScores[element_num];
  }

const OInteger SportsGameJSON::elementOfScores(size_t element_num) const
  {
    assert(flagHasScores);
    return storeScores[element_num];
  }

std::vector< OInteger > SportsGameJSON::getScores(void)
  {
    assert(flagHasScores);
    return storeScores;
  }

const std::vector< OInteger > SportsGameJSON::getScores(void) const
  {
    assert(flagHasScores);
    return storeScores;
  }

bool SportsGameJSON::hasHomeAway(void) const
  {
    return flagHasHomeAway;
  }

size_t SportsGameJSON::countOfHomeAway(void) const
  {
    assert(flagHasHomeAway);
    return storeHomeAway.size();
  }

SportsHomeAwayJSON * SportsGameJSON::elementOfHomeAway(size_t element_num)
  {
    assert(flagHasHomeAway);
    return storeHomeAway[element_num];
  }

const SportsHomeAwayJSON * SportsGameJSON::elementOfHomeAway(size_t element_num) const
  {
    assert(flagHasHomeAway);
    return storeHomeAway[element_num];
  }

std::vector< SportsHomeAwayJSON * > SportsGameJSON::getHomeAway(void)
  {
    assert(flagHasHomeAway);
    return storeHomeAway;
  }

const std::vector< SportsHomeAwayJSON * > SportsGameJSON::getHomeAway(void) const
  {
    assert(flagHasHomeAway);
    return storeHomeAway;
  }

bool SportsGameJSON::hasStartTime(void) const
  {
    return flagHasStartTime;
  }

DateAndOrTimeJSON * SportsGameJSON::getStartTime(void)
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

const DateAndOrTimeJSON * SportsGameJSON::getStartTime(void) const
  {
    assert(flagHasStartTime);
    return storeStartTime;
  }

bool SportsGameJSON::hasStatus(void) const
  {
    return flagHasStatus;
  }

SportsGameJSON::TypeStatus SportsGameJSON::getStatus(void)
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const SportsGameJSON::TypeStatus SportsGameJSON::getStatus(void) const
  {
    assert(flagHasStatus);
    return storeStatus;
  }

const char *SportsGameJSON::getStatusAsChars(void) const
  {
    TypeStatus result = getStatus();
    if (result.in_known_list)
        return stringFromStatus(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameJSON::getStatusAsString(void) const
  {
    return getStatusAsChars();
  }

bool SportsGameJSON::hasPlayingPeriod(void) const
  {
    return flagHasPlayingPeriod;
  }

OInteger SportsGameJSON::getPlayingPeriod(void)
  {
    assert(flagHasPlayingPeriod);
    return storePlayingPeriod;
  }

const OInteger SportsGameJSON::getPlayingPeriod(void) const
  {
    assert(flagHasPlayingPeriod);
    return storePlayingPeriod;
  }

bool SportsGameJSON::hasClock(void) const
  {
    return flagHasClock;
  }

SportsGameJSON::TypeClockJSON * SportsGameJSON::getClock(void)
  {
    assert(flagHasClock);
    return storeClock;
  }

const SportsGameJSON::TypeClockJSON * SportsGameJSON::getClock(void) const
  {
    assert(flagHasClock);
    return storeClock;
  }

bool SportsGameJSON::hasBaseballInningHalf(void) const
  {
    return flagHasBaseballInningHalf;
  }

SportsGameJSON::TypeBaseballInningHalf SportsGameJSON::getBaseballInningHalf(void)
  {
    assert(flagHasBaseballInningHalf);
    return storeBaseballInningHalf;
  }

const SportsGameJSON::TypeBaseballInningHalf SportsGameJSON::getBaseballInningHalf(void) const
  {
    assert(flagHasBaseballInningHalf);
    return storeBaseballInningHalf;
  }

const char *SportsGameJSON::getBaseballInningHalfAsChars(void) const
  {
    TypeBaseballInningHalf result = getBaseballInningHalf();
    if (result.in_known_list)
        return stringFromBaseballInningHalf(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsGameJSON::getBaseballInningHalfAsString(void) const
  {
    return getBaseballInningHalfAsChars();
  }

bool SportsGameJSON::hasVenue(void) const
  {
    return flagHasVenue;
  }

SportsVenueNewJSON * SportsGameJSON::getVenue(void)
  {
    assert(flagHasVenue);
    return storeVenue;
  }

const SportsVenueNewJSON * SportsGameJSON::getVenue(void) const
  {
    assert(flagHasVenue);
    return storeVenue;
  }

bool SportsGameJSON::hasBroadcastNetworks(void) const
  {
    return flagHasBroadcastNetworks;
  }

size_t SportsGameJSON::countOfBroadcastNetworks(void) const
  {
    assert(flagHasBroadcastNetworks);
    return storeBroadcastNetworks.size();
  }

std::string SportsGameJSON::elementOfBroadcastNetworks(size_t element_num)
  {
    assert(flagHasBroadcastNetworks);
    return storeBroadcastNetworks[element_num];
  }

const std::string SportsGameJSON::elementOfBroadcastNetworks(size_t element_num) const
  {
    assert(flagHasBroadcastNetworks);
    return storeBroadcastNetworks[element_num];
  }

std::vector< std::string > SportsGameJSON::getBroadcastNetworks(void)
  {
    assert(flagHasBroadcastNetworks);
    return storeBroadcastNetworks;
  }

const std::vector< std::string > SportsGameJSON::getBroadcastNetworks(void) const
  {
    assert(flagHasBroadcastNetworks);
    return storeBroadcastNetworks;
  }

bool SportsGameJSON::hasSeason(void) const
  {
    return flagHasSeason;
  }

SportsSeasonResolvedJSON * SportsGameJSON::getSeason(void)
  {
    assert(flagHasSeason);
    return storeSeason;
  }

const SportsSeasonResolvedJSON * SportsGameJSON::getSeason(void) const
  {
    assert(flagHasSeason);
    return storeSeason;
  }

bool SportsGameJSON::hasSpecialGameType(void) const
  {
    return flagHasSpecialGameType;
  }

SportsPlayoffSpecialGameJSON * SportsGameJSON::getSpecialGameType(void)
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

const SportsPlayoffSpecialGameJSON * SportsGameJSON::getSpecialGameType(void) const
  {
    assert(flagHasSpecialGameType);
    return storeSpecialGameType;
  }

SportsPlayoffSpecialGameJSON::TypeValue SportsGameJSON::getSpecialGameTypeValue(void)
  {
    return getSpecialGameType()->getValue();
  }

const SportsPlayoffSpecialGameJSON::TypeValue SportsGameJSON::getSpecialGameTypeValue(void) const
  {
    return getSpecialGameType()->getValue();
  }

const char *SportsGameJSON::getSpecialGameTypeAsChars(void) const
  {
    return getSpecialGameType()->getValueAsChars();
  }

std::string SportsGameJSON::getSpecialGameTypeAsString(void) const
  {
    return getSpecialGameType()->getValueAsString();
  }

bool SportsGameJSON::hasTournament(void) const
  {
    return flagHasTournament;
  }

SportsTournamentJSON * SportsGameJSON::getTournament(void)
  {
    assert(flagHasTournament);
    return storeTournament;
  }

const SportsTournamentJSON * SportsGameJSON::getTournament(void) const
  {
    assert(flagHasTournament);
    return storeTournament;
  }

bool SportsGameJSON::hasSeriesGameNumber(void) const
  {
    return flagHasSeriesGameNumber;
  }

OInteger SportsGameJSON::getSeriesGameNumber(void)
  {
    assert(flagHasSeriesGameNumber);
    return storeSeriesGameNumber;
  }

const OInteger SportsGameJSON::getSeriesGameNumber(void) const
  {
    assert(flagHasSeriesGameNumber);
    return storeSeriesGameNumber;
  }

bool SportsGameJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string SportsGameJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string SportsGameJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool SportsGameJSON::hasSportImage(void) const
  {
    return flagHasSportImage;
  }

SportsSportImageJSON * SportsGameJSON::getSportImage(void)
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

const SportsSportImageJSON * SportsGameJSON::getSportImage(void) const
  {
    assert(flagHasSportImage);
    return storeSportImage;
  }

char SportsGameJSON::Generator::lowerBoundScores[] = "0";
char SportsGameJSON::Generator::lowerBoundPlayingPeriod[] = "0";
char SportsGameJSON::TypeClockJSON::Generator::lowerBoundMinutes[] = "0";
SportsGameJSON::TypeClockJSON *SportsGameJSON::TypeClockJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeClockJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeClockJSON>, TypeClockJSON *, bool> generator("Type TypeClock", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char SportsGameJSON::Generator::lowerBoundSeriesGameNumber[] = "1";
SportsGameJSON *SportsGameJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'C':
            if (strcmp(&(key[1]), "ricket") == 0)
                return new SportsGameCricketJSON();
            break;
        case 'G':
            if (strcmp(&(key[1]), "eneric") == 0)
                return new SportsGameGenericJSON();
            break;
        default:
            break;
      }

    class GenericSportsGameJSON : public SportsGameJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericSportsGameJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericSportsGameJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getSportsGameKind(void) const  { return key.c_str(); }
        size_t extraSportsGameComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraSportsGameComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraSportsGameComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraSportsGameComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraSportsGameLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraSportsGameLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraSportsGameAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraSportsGameSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraSportsGameLookup(key);
            if (old_field == NULL)
              {
                extraSportsGameAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
                      {
                        extraValues[num] = new_component;
                        break;
                      }
                  }
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
                old_field->remove_reference();
                old_field->remove_reference();
              }
          }

        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            size_t extra_count = extraKeys.size();
            assert(extra_count == extraValues.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                handler->start_pair(extraKeys[extra_num].c_str());
                extraValues[extra_num]->write(handler);
              }
            handler->finish_object();
          }
      };
    return new GenericSportsGameJSON(key);
  }
SportsGameJSON *SportsGameJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsGameJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool> generator("Type SportsGame", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
