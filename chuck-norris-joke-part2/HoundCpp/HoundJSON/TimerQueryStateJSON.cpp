/* file "TimerQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "TimerQueryStateJSON.h"

#include "TimerQueryStateJSON.h"


TimerQueryStateJSON::TypeTimerCommandKind TimerQueryStateJSON::stringToTimerCommandKind(const char *chars)
  {
    if (strncmp(chars, "Timer", 5) == 0)
      {
        switch ((unsigned char)(chars[5]))
          {
            case 'A':
                if (strcmp(&(chars[6]), "ddTimeCommand") == 0)
                    return TimerCommandKind_TimerAddTimeCommand;
                break;
            case 'D':
                switch ((unsigned char)(chars[6]))
                  {
                    case 'e':
                        if (strcmp(&(chars[7]), "leteCommand") == 0)
                            return TimerCommandKind_TimerDeleteCommand;
                        break;
                    case 'i':
                        if (strcmp(&(chars[7]), "splayCommand") == 0)
                            return TimerCommandKind_TimerDisplayCommand;
                        break;
                    default:
                        break;
                  }
                break;
            case 'N':
                if (strcmp(&(chars[6]), "otUnderstoodCommand") == 0)
                    return TimerCommandKind_TimerNotUnderstoodCommand;
                break;
            case 'Q':
                if (strcmp(&(chars[6]), "uitInformationNugget") == 0)
                    return TimerCommandKind_TimerQuitInformationNugget;
                break;
            case 'R':
                if (strncmp(&(chars[6]), "es", 2) == 0)
                  {
                    switch ((unsigned char)(chars[8]))
                      {
                        case 'e':
                            if (strcmp(&(chars[9]), "tCommand") == 0)
                                return TimerCommandKind_TimerResetCommand;
                            break;
                        case 'u':
                            if (strcmp(&(chars[9]), "meCommand") == 0)
                                return TimerCommandKind_TimerResumeCommand;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(chars[6]))
                  {
                    case 'e':
                        if (strcmp(&(chars[7]), "tCommand") == 0)
                            return TimerCommandKind_TimerSetCommand;
                        break;
                    case 't':
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'a':
                                if (strcmp(&(chars[8]), "rtModeCommand") == 0)
                                    return TimerCommandKind_TimerStartModeCommand;
                                break;
                            case 'o':
                                if (strcmp(&(chars[8]), "pCommand") == 0)
                                    return TimerCommandKind_TimerStopCommand;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                break;
            case 'U':
                if (strcmp(&(chars[6]), "nsetCommand") == 0)
                    return TimerCommandKind_TimerUnsetCommand;
                break;
            default:
                break;
          }
      }
    throw("The value for field `TimerCommandKind' is not one of the legal values.");
  }

const char *TimerQueryStateJSON::stringFromTimerCommandKind(TypeTimerCommandKind the_enum)
  {
    switch (the_enum)
      {
        case TimerCommandKind_TimerAddTimeCommand:
            return "TimerAddTimeCommand";
        case TimerCommandKind_TimerDeleteCommand:
            return "TimerDeleteCommand";
        case TimerCommandKind_TimerDisplayCommand:
            return "TimerDisplayCommand";
        case TimerCommandKind_TimerNotUnderstoodCommand:
            return "TimerNotUnderstoodCommand";
        case TimerCommandKind_TimerQuitInformationNugget:
            return "TimerQuitInformationNugget";
        case TimerCommandKind_TimerResetCommand:
            return "TimerResetCommand";
        case TimerCommandKind_TimerResumeCommand:
            return "TimerResumeCommand";
        case TimerCommandKind_TimerSetCommand:
            return "TimerSetCommand";
        case TimerCommandKind_TimerStartModeCommand:
            return "TimerStartModeCommand";
        case TimerCommandKind_TimerStopCommand:
            return "TimerStopCommand";
        case TimerCommandKind_TimerUnsetCommand:
            return "TimerUnsetCommand";
        default:
            assert(false);
            return NULL;
      }
  }

TimerQueryStateJSON::TimerQueryStateJSON(const TimerQueryStateJSON &)
  {
    assert(false);
  }

TimerQueryStateJSON &TimerQueryStateJSON::operator=(const TimerQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void TimerQueryStateJSON::fromJSONTimerCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimerCommandKind of TimerQueryStateJSON is not a string.");
    TypeTimerCommandKind the_enum;
    if (strncmp(json_string->getData(), "Timer", 5) == 0)
      {
        switch ((unsigned char)(json_string->getData()[5]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[6]), "ddTimeCommand") == 0)
                      {
                        the_enum = TimerCommandKind_TimerAddTimeCommand;
                        goto enum_is_done;
                      }
                break;
            case 'D':
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'e':
                        if (strcmp(&(json_string->getData()[7]), "leteCommand") == 0)
                              {
                                the_enum = TimerCommandKind_TimerDeleteCommand;
                                goto enum_is_done;
                              }
                        break;
                    case 'i':
                        if (strcmp(&(json_string->getData()[7]), "splayCommand") == 0)
                              {
                                the_enum = TimerCommandKind_TimerDisplayCommand;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'N':
                if (strcmp(&(json_string->getData()[6]), "otUnderstoodCommand") == 0)
                      {
                        the_enum = TimerCommandKind_TimerNotUnderstoodCommand;
                        goto enum_is_done;
                      }
                break;
            case 'Q':
                if (strcmp(&(json_string->getData()[6]), "uitInformationNugget") == 0)
                      {
                        the_enum = TimerCommandKind_TimerQuitInformationNugget;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strncmp(&(json_string->getData()[6]), "es", 2) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[8]))
                      {
                        case 'e':
                            if (strcmp(&(json_string->getData()[9]), "tCommand") == 0)
                                  {
                                    the_enum = TimerCommandKind_TimerResetCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'u':
                            if (strcmp(&(json_string->getData()[9]), "meCommand") == 0)
                                  {
                                    the_enum = TimerCommandKind_TimerResumeCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                switch ((unsigned char)(json_string->getData()[6]))
                  {
                    case 'e':
                        if (strcmp(&(json_string->getData()[7]), "tCommand") == 0)
                              {
                                the_enum = TimerCommandKind_TimerSetCommand;
                                goto enum_is_done;
                              }
                        break;
                    case 't':
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'a':
                                if (strcmp(&(json_string->getData()[8]), "rtModeCommand") == 0)
                                      {
                                        the_enum = TimerCommandKind_TimerStartModeCommand;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'o':
                                if (strcmp(&(json_string->getData()[8]), "pCommand") == 0)
                                      {
                                        the_enum = TimerCommandKind_TimerStopCommand;
                                        goto enum_is_done;
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
            case 'U':
                if (strcmp(&(json_string->getData()[6]), "nsetCommand") == 0)
                      {
                        the_enum = TimerCommandKind_TimerUnsetCommand;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field TimerCommandKind of TimerQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setTimerCommandKind(the_enum);
  }

TimerQueryStateJSON::TimerQueryStateJSON(void) :
        flagHasTimerCommandKind(false)
  {
    extraIndex = create_string_index();
  }

TimerQueryStateJSON::~TimerQueryStateJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool TimerQueryStateJSON::hasTimerCommandKind(void) const
  {
    return flagHasTimerCommandKind;
  }

TimerQueryStateJSON::TypeTimerCommandKind TimerQueryStateJSON::getTimerCommandKind(void)
  {
    assert(flagHasTimerCommandKind);
    return storeTimerCommandKind;
  }

const TimerQueryStateJSON::TypeTimerCommandKind TimerQueryStateJSON::getTimerCommandKind(void) const
  {
    assert(flagHasTimerCommandKind);
    return storeTimerCommandKind;
  }

const char *TimerQueryStateJSON::getTimerCommandKindAsChars(void) const
  {
    return stringFromTimerCommandKind(getTimerCommandKind());
  }

std::string TimerQueryStateJSON::getTimerCommandKindAsString(void) const
  {
    return stringFromTimerCommandKind(getTimerCommandKind());
  }

TimerQueryStateJSON *TimerQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TimerQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TimerQueryStateJSON>, TimerQueryStateJSON *, bool> generator("Type TimerQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
