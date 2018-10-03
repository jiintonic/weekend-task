/* file "CommandResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CommandResultJSON.h"

#include "CommandResultJSON.h"
#include "CalendarCommandJSON.h"
#include "ErrorCommandJSON.h"
#include "MapCommandJSON.h"
#include "LocalSearchCommandJSON.h"
#include "InformationCommandJSON.h"
#include "DisambiguateLocationCommandJSON.h"
#include "NavigationCommandJSON.h"
#include "PhoneCommandJSON.h"
#include "DisambiguateCommandJSON.h"
#include "AlarmCommandJSON.h"
#include "ArithCommandJSON.h"
#include "ClientCommandJSON.h"
#include "GeonameFactsCommandJSON.h"
#include "CurrencyConverterCommandJSON.h"
#include "MusicCommandJSON.h"
#include "FlightStatusCommandJSON.h"
#include "FlightBookingCommandJSON.h"
#include "EmailCommandJSON.h"
#include "SMSCommandJSON.h"
#include "CommunicationCommandJSON.h"
#include "DictionaryCommandJSON.h"
#include "WikipediaCommandJSON.h"
#include "CountdownCommandJSON.h"
#include "GamesMenuCommandJSON.h"
#include "BattleshipCommandJSON.h"
#include "CompoundResultCommandJSON.h"
#include "BlackjackCommandJSON.h"
#include "HangmanCommandJSON.h"
#include "NumberGuessCommandJSON.h"
#include "RockPaperScissorsCommandJSON.h"
#include "GuessThatLyricDecadeMenuCommandJSON.h"
#include "GuessThatLyricQuitGameCommandJSON.h"
#include "MortgageCalculatorCommandJSON.h"
#include "TimerCommandJSON.h"
#include "TipCalculatorCommandJSON.h"
#include "KnowledgeCommandJSON.h"
#include "SportsCommandJSON.h"
#include "SoundHoundNowCommandJSON.h"
#include "ClientMatchCommandJSON.h"
#include "IOSAppLauncherCommandJSON.h"
#include "IndexUserAppsCommandJSON.h"
#include "AndroidAppLauncherCommandJSON.h"
#include "BaseConverterCommandJSON.h"
#include "UberCommandJSON.h"
#include "DeviceControlCommandJSON.h"
#include "SpeechToTextOnlyCommandJSON.h"
#include "MusicPlayerCommandJSON.h"
#include "CarControlCommandJSON.h"
#include "AstronomyDistanceFromEarthCommandJSON.h"
#include "NavigationControlCommandJSON.h"
#include "HomeAutomationListUserDataCommandJSON.h"
#include "HomeAutomationCancelCommandJSON.h"
#include "HomeAutomationControlCommandJSON.h"
#include "HomeAutomationQueryCommandJSON.h"
#include "EditDeviceCommandJSON.h"
#include "HomeAutomationCommandJSON.h"
#include "RandomNumberGeneratorCommandJSON.h"
#include "StockMarketCommandJSON.h"
#include "UserContactsCommandJSON.h"
#include "AgeCalculatorCommandJSON.h"
#include "AgeCalculatorStartCommandJSON.h"
#include "AgeCalculatorCancelCommandJSON.h"
#include "StoredPageMatchCommandJSON.h"
#include "StoredAlwaysMatchCommandJSON.h"
#include "UserFeedbackCommandJSON.h"
#include "RadioCommandJSON.h"
#include "RobotCommandJSON.h"


CommandResultJSON::TypeViewType CommandResultJSON::stringToViewType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "rror") == 0)
                return ViewType_Error;
            break;
        case 'H':
            if (strcmp(&(chars[1]), "TML") == 0)
                return ViewType_HTML;
            break;
        case 'N':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "tive") == 0)
                        return ViewType_Native;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "ne") == 0)
                        return ViewType_None;
                    break;
                default:
                    break;
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "emplate") == 0)
                return ViewType_Template;
            break;
        default:
            break;
      }
    throw("The value for field `ViewType' is not one of the legal values.");
  }

const char *CommandResultJSON::stringFromViewType(TypeViewType the_enum)
  {
    switch (the_enum)
      {
        case ViewType_Native:
            return "Native";
        case ViewType_Template:
            return "Template";
        case ViewType_HTML:
            return "HTML";
        case ViewType_None:
            return "None";
        case ViewType_Error:
            return "Error";
        default:
            assert(false);
            return NULL;
      }
  }

CommandResultJSON::TypeResponseAudioEncoding::TypeResponseAudioEncoding(void)
  {
  }

CommandResultJSON::TypeResponseAudioEncoding::TypeResponseAudioEncoding(const TypeResponseAudioEncoding &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

CommandResultJSON::TypeResponseAudioEncoding::TypeResponseAudioEncoding(TypeResponseAudioEncodingKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator==(const TypeResponseAudioEncoding &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator!=(const TypeResponseAudioEncoding &other) const
  {
    return !(operator==(other));
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator<(const TypeResponseAudioEncoding &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator>(const TypeResponseAudioEncoding &other) const
  {
    return other.operator<(*this);
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator>=(const TypeResponseAudioEncoding &other) const
  {
    return !(operator<(other));
  }

bool CommandResultJSON::TypeResponseAudioEncoding::operator<=(const TypeResponseAudioEncoding &other) const
  {
    return !(other.operator<(*this));
  }

CommandResultJSON::TypeResponseAudioEncodingKnownValues CommandResultJSON::stringToResponseAudioEncoding(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "peex") == 0)
                return ResponseAudioEncoding_Speex;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "AV") == 0)
                return ResponseAudioEncoding_WAV;
            break;
        default:
            break;
      }
    return ResponseAudioEncoding__none;
  }

const char *CommandResultJSON::stringFromResponseAudioEncoding(TypeResponseAudioEncodingKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResponseAudioEncoding_WAV:
            return "WAV";
        case ResponseAudioEncoding_Speex:
            return "Speex";
        default:
            assert(false);
            return NULL;
      }
  }

CommandResultJSON::CommandResultJSON(const CommandResultJSON &)
  {
    assert(false);
  }

CommandResultJSON &CommandResultJSON::operator=(const CommandResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CommandResultJSON::fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponse of CommandResultJSON is not a string.");
    setSpokenResponse(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseLong of CommandResultJSON is not a string.");
    setSpokenResponseLong(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponse of CommandResultJSON is not a string.");
    setWrittenResponse(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseLong of CommandResultJSON is not a string.");
    setWrittenResponseLong(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSML of CommandResultJSON is not a string.");
    setSpokenResponseSSML(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSMLLong of CommandResultJSON is not a string.");
    setSpokenResponseSSMLLong(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of CommandResultJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void CommandResultJSON::fromJSONUserVisibleMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserVisibleMode of CommandResultJSON is not a string.");
    setUserVisibleMode(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONIsRepeat(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRepeat of CommandResultJSON is not true for false.");
          }
      }
    setIsRepeat(the_bool);
  }

void CommandResultJSON::fromJSONAdditionalInformation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AdditionalInformation of CommandResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field AdditionalInformation of CommandResultJSON has too few elements.");
    std::vector< InformationNuggetJSON * > vector_AdditionalInformation1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        InformationNuggetJSON *convert_classy = InformationNuggetJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AdditionalInformation1[num1] = convert_classy;
      }
    assert(vector_AdditionalInformation1.size() >= 1);
    initAdditionalInformation();
    for (size_t num6 = 0; num6 < vector_AdditionalInformation1.size(); ++num6)
        appendAdditionalInformation(vector_AdditionalInformation1[num6]);
    for (size_t num1 = 0; num1 < vector_AdditionalInformation1.size(); ++num1)
      {
        vector_AdditionalInformation1[num1]->remove_reference();
      }
  }

void CommandResultJSON::fromJSONConversationState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ConversationStateJSON *convert_classy = ConversationStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConversationState(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONViewType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ViewType of CommandResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ViewType of CommandResultJSON has too few elements.");
    std::vector< TypeViewType > vector_ViewType1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ViewType of CommandResultJSON is not a string.");
        TypeViewType the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'E':
                if (strcmp(&(json_string->getData()[1]), "rror") == 0)
                      {
                        the_enum = ViewType_Error;
                        goto enum_is_done;
                      }
                break;
            case 'H':
                if (strcmp(&(json_string->getData()[1]), "TML") == 0)
                      {
                        the_enum = ViewType_HTML;
                        goto enum_is_done;
                      }
                break;
            case 'N':
                switch ((unsigned char)(json_string->getData()[1]))
                  {
                    case 'a':
                        if (strcmp(&(json_string->getData()[2]), "tive") == 0)
                              {
                                the_enum = ViewType_Native;
                                goto enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strcmp(&(json_string->getData()[2]), "ne") == 0)
                              {
                                the_enum = ViewType_None;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'T':
                if (strcmp(&(json_string->getData()[1]), "emplate") == 0)
                      {
                        the_enum = ViewType_Template;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
        throw("The value for an element of field ViewType of CommandResultJSON is not one of the legal strings.");
      enum_is_done:;
        vector_ViewType1[num1] = the_enum;
      }
    assert(vector_ViewType1.size() >= 1);
    initViewType();
    for (size_t num7 = 0; num7 < vector_ViewType1.size(); ++num7)
        appendViewType(vector_ViewType1[num7]);
    for (size_t num1 = 0; num1 < vector_ViewType1.size(); ++num1)
      {
      }
  }

void CommandResultJSON::fromJSONTemplateName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TemplateName of CommandResultJSON is not a string.");
    setTemplateName(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCombiningTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PreviewJSON *convert_classy = PreviewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPreview(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONHTMLData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HTMLDataJSON *convert_classy = HTMLDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHTMLData(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HintsJSON *convert_classy = HintsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHints(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONEmotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmotionJSON *convert_classy = EmotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmotion(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONIcon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IconJSON *convert_classy = IconJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIcon(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioBytes of CommandResultJSON is not a string.");
    setResponseAudioBytes(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONResponseAudioEncoding(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioEncoding of CommandResultJSON is not a string.");
    TypeResponseAudioEncoding the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "peex") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResponseAudioEncoding_Speex;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "AV") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResponseAudioEncoding_WAV;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setResponseAudioEncoding(the_open_enum);
  }

void CommandResultJSON::fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioError of CommandResultJSON is not a string.");
    setResponseAudioError(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONOutputOverrideDiagnostics(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputOverrideDiagnostics of CommandResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_OutputOverrideDiagnostics1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field OutputOverrideDiagnostics of CommandResultJSON is not a string.");
        vector_OutputOverrideDiagnostics1[num1] = std::string(json_string->getData());
      }
    initOutputOverrideDiagnostics();
    for (size_t num8 = 0; num8 < vector_OutputOverrideDiagnostics1.size(); ++num8)
        appendOutputOverrideDiagnostics(vector_OutputOverrideDiagnostics1[num8]);
    for (size_t num1 = 0; num1 < vector_OutputOverrideDiagnostics1.size(); ++num1)
      {
      }
  }

void CommandResultJSON::fromJSONUploadedTerrierDiagnostics(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field UploadedTerrierDiagnostics of CommandResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_UploadedTerrierDiagnostics1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field UploadedTerrierDiagnostics of CommandResultJSON is not a string.");
        vector_UploadedTerrierDiagnostics1[num1] = std::string(json_string->getData());
      }
    initUploadedTerrierDiagnostics();
    for (size_t num9 = 0; num9 < vector_UploadedTerrierDiagnostics1.size(); ++num9)
        appendUploadedTerrierDiagnostics(vector_UploadedTerrierDiagnostics1[num9]);
    for (size_t num1 = 0; num1 < vector_UploadedTerrierDiagnostics1.size(); ++num1)
      {
      }
  }

void CommandResultJSON::fromJSONRequiredFeatures(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequiredFeatures of CommandResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field RequiredFeatures of CommandResultJSON has too few elements.");
    std::vector< std::string > vector_RequiredFeatures1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field RequiredFeatures of CommandResultJSON is not a string.");
        vector_RequiredFeatures1[num1] = std::string(json_string->getData());
      }
    assert(vector_RequiredFeatures1.size() >= 1);
    initRequiredFeatures();
    for (size_t num10 = 0; num10 < vector_RequiredFeatures1.size(); ++num10)
        appendRequiredFeatures(vector_RequiredFeatures1[num10]);
    for (size_t num1 = 0; num1 < vector_RequiredFeatures1.size(); ++num1)
      {
      }
  }

void CommandResultJSON::fromJSONClientActionSucceededResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientActionSucceededResult(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONClientActionFailedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientActionFailedResult(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONRequiredFeaturesSupportedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequiredFeaturesSupportedResult(convert_classy);
    convert_classy->remove_reference();
  }

void CommandResultJSON::fromJSONSendBack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setSendBack(json_value);
  }

void CommandResultJSON::fromJSONUnderstandingConfidence(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UnderstandingConfidence of CommandResultJSON is not a number.");
          }
      }
    setUnderstandingConfidenceText(the_rational_text);
  }

void CommandResultJSON::fromJSONErrorType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorType of CommandResultJSON is not a string.");
    setErrorType(std::string(json_string->getData()));
  }

void CommandResultJSON::fromJSONErrorData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommandErrorJSON *convert_classy = CommandErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setErrorData(convert_classy);
    convert_classy->remove_reference();
  }

CommandResultJSON::CommandResultJSON(void) :
        flagHasSpokenResponse(false),
        flagHasSpokenResponseLong(false),
        flagHasWrittenResponse(false),
        flagHasWrittenResponseLong(false),
        flagHasSpokenResponseSSML(false),
        flagHasSpokenResponseSSMLLong(false),
        flagHasAutoListen(false),
        flagHasUserVisibleMode(false),
        flagHasIsRepeat(false),
        flagHasAdditionalInformation(false),
        flagHasConversationState(false),
        flagHasViewType(false),
        flagHasTemplateName(false),
        flagHasTemplateData(false),
        flagHasCombiningTemplateData(false),
        flagHasPreview(false),
        flagHasHTMLData(false),
        flagHasHints(false),
        flagHasEmotion(false),
        flagHasIcon(false),
        flagHasResponseAudioBytes(false),
        flagHasResponseAudioEncoding(false),
        flagHasResponseAudioError(false),
        flagHasOutputOverrideDiagnostics(false),
        flagHasUploadedTerrierDiagnostics(false),
        flagHasRequiredFeatures(false),
        flagHasClientActionSucceededResult(false),
        flagHasClientActionFailedResult(false),
        flagHasRequiredFeaturesSupportedResult(false),
        flagHasSendBack(false),
        flagHasUnderstandingConfidence(false),
        flagHasErrorType(false),
        flagHasErrorData(false)
  {
    storeAutoListen = false;
  }

CommandResultJSON::~CommandResultJSON(void)
  {
    if (flagHasAdditionalInformation)
      {
        for (size_t num4 = 0; num4 < storeAdditionalInformation.size(); ++num4)
          {
            storeAdditionalInformation[num4]->remove_reference();
          }
      }
    if (flagHasConversationState)
      {
        storeConversationState->remove_reference();
      }
    if (flagHasTemplateData)
      {
        storeTemplateData->remove_reference();
      }
    if (flagHasCombiningTemplateData)
      {
        storeCombiningTemplateData->remove_reference();
      }
    if (flagHasPreview)
      {
        storePreview->remove_reference();
      }
    if (flagHasHTMLData)
      {
        storeHTMLData->remove_reference();
      }
    if (flagHasHints)
      {
        storeHints->remove_reference();
      }
    if (flagHasEmotion)
      {
        storeEmotion->remove_reference();
      }
    if (flagHasIcon)
      {
        storeIcon->remove_reference();
      }
    if (flagHasClientActionSucceededResult)
      {
        storeClientActionSucceededResult->remove_reference();
      }
    if (flagHasClientActionFailedResult)
      {
        storeClientActionFailedResult->remove_reference();
      }
    if (flagHasRequiredFeaturesSupportedResult)
      {
        storeRequiredFeaturesSupportedResult->remove_reference();
      }
    if (flagHasSendBack)
      {
        storeSendBack->remove_reference();
      }
    if (flagHasErrorData)
      {
        storeErrorData->remove_reference();
      }
  }

bool CommandResultJSON::hasSpokenResponse(void) const
  {
    return flagHasSpokenResponse;
  }

std::string CommandResultJSON::getSpokenResponse(void)
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

const std::string CommandResultJSON::getSpokenResponse(void) const
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

bool CommandResultJSON::hasSpokenResponseLong(void) const
  {
    return flagHasSpokenResponseLong;
  }

std::string CommandResultJSON::getSpokenResponseLong(void)
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

const std::string CommandResultJSON::getSpokenResponseLong(void) const
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

bool CommandResultJSON::hasWrittenResponse(void) const
  {
    return flagHasWrittenResponse;
  }

std::string CommandResultJSON::getWrittenResponse(void)
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

const std::string CommandResultJSON::getWrittenResponse(void) const
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

bool CommandResultJSON::hasWrittenResponseLong(void) const
  {
    return flagHasWrittenResponseLong;
  }

std::string CommandResultJSON::getWrittenResponseLong(void)
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

const std::string CommandResultJSON::getWrittenResponseLong(void) const
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

bool CommandResultJSON::hasSpokenResponseSSML(void) const
  {
    return flagHasSpokenResponseSSML;
  }

std::string CommandResultJSON::getSpokenResponseSSML(void)
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

const std::string CommandResultJSON::getSpokenResponseSSML(void) const
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

bool CommandResultJSON::hasSpokenResponseSSMLLong(void) const
  {
    return flagHasSpokenResponseSSMLLong;
  }

std::string CommandResultJSON::getSpokenResponseSSMLLong(void)
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

const std::string CommandResultJSON::getSpokenResponseSSMLLong(void) const
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

bool CommandResultJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool CommandResultJSON::getAutoListen(void)
  {
    return storeAutoListen;
  }

const bool CommandResultJSON::getAutoListen(void) const
  {
    return storeAutoListen;
  }

bool CommandResultJSON::hasUserVisibleMode(void) const
  {
    return flagHasUserVisibleMode;
  }

std::string CommandResultJSON::getUserVisibleMode(void)
  {
    assert(flagHasUserVisibleMode);
    return storeUserVisibleMode;
  }

const std::string CommandResultJSON::getUserVisibleMode(void) const
  {
    assert(flagHasUserVisibleMode);
    return storeUserVisibleMode;
  }

bool CommandResultJSON::hasIsRepeat(void) const
  {
    return flagHasIsRepeat;
  }

bool CommandResultJSON::getIsRepeat(void)
  {
    assert(flagHasIsRepeat);
    return storeIsRepeat;
  }

const bool CommandResultJSON::getIsRepeat(void) const
  {
    assert(flagHasIsRepeat);
    return storeIsRepeat;
  }

bool CommandResultJSON::hasAdditionalInformation(void) const
  {
    return flagHasAdditionalInformation;
  }

size_t CommandResultJSON::countOfAdditionalInformation(void) const
  {
    assert(flagHasAdditionalInformation);
    return storeAdditionalInformation.size();
  }

InformationNuggetJSON * CommandResultJSON::elementOfAdditionalInformation(size_t element_num)
  {
    assert(flagHasAdditionalInformation);
    return storeAdditionalInformation[element_num];
  }

const InformationNuggetJSON * CommandResultJSON::elementOfAdditionalInformation(size_t element_num) const
  {
    assert(flagHasAdditionalInformation);
    return storeAdditionalInformation[element_num];
  }

std::vector< InformationNuggetJSON * > CommandResultJSON::getAdditionalInformation(void)
  {
    assert(flagHasAdditionalInformation);
    return storeAdditionalInformation;
  }

const std::vector< InformationNuggetJSON * > CommandResultJSON::getAdditionalInformation(void) const
  {
    assert(flagHasAdditionalInformation);
    return storeAdditionalInformation;
  }

bool CommandResultJSON::hasConversationState(void) const
  {
    return flagHasConversationState;
  }

ConversationStateJSON * CommandResultJSON::getConversationState(void)
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

const ConversationStateJSON * CommandResultJSON::getConversationState(void) const
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

bool CommandResultJSON::hasViewType(void) const
  {
    return flagHasViewType;
  }

size_t CommandResultJSON::countOfViewType(void) const
  {
    assert(flagHasViewType);
    return storeViewType.size();
  }

CommandResultJSON::TypeViewType CommandResultJSON::elementOfViewType(size_t element_num)
  {
    assert(flagHasViewType);
    return storeViewType[element_num];
  }

const CommandResultJSON::TypeViewType CommandResultJSON::elementOfViewType(size_t element_num) const
  {
    assert(flagHasViewType);
    return storeViewType[element_num];
  }

std::vector< CommandResultJSON::TypeViewType > CommandResultJSON::getViewType(void)
  {
    assert(flagHasViewType);
    return storeViewType;
  }

const std::vector< CommandResultJSON::TypeViewType > CommandResultJSON::getViewType(void) const
  {
    assert(flagHasViewType);
    return storeViewType;
  }

bool CommandResultJSON::hasTemplateName(void) const
  {
    return flagHasTemplateName;
  }

std::string CommandResultJSON::getTemplateName(void)
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

const std::string CommandResultJSON::getTemplateName(void) const
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

bool CommandResultJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * CommandResultJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * CommandResultJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

bool CommandResultJSON::hasCombiningTemplateData(void) const
  {
    return flagHasCombiningTemplateData;
  }

TemplateJSON * CommandResultJSON::getCombiningTemplateData(void)
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

const TemplateJSON * CommandResultJSON::getCombiningTemplateData(void) const
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

bool CommandResultJSON::hasPreview(void) const
  {
    return flagHasPreview;
  }

PreviewJSON * CommandResultJSON::getPreview(void)
  {
    assert(flagHasPreview);
    return storePreview;
  }

const PreviewJSON * CommandResultJSON::getPreview(void) const
  {
    assert(flagHasPreview);
    return storePreview;
  }

JSONValue * CommandResultJSON::getPreviewValue(void)
  {
    return getPreview()->getValue();
  }

const JSONValue * CommandResultJSON::getPreviewValue(void) const
  {
    return getPreview()->getValue();
  }

bool CommandResultJSON::hasHTMLData(void) const
  {
    return flagHasHTMLData;
  }

HTMLDataJSON * CommandResultJSON::getHTMLData(void)
  {
    assert(flagHasHTMLData);
    return storeHTMLData;
  }

const HTMLDataJSON * CommandResultJSON::getHTMLData(void) const
  {
    assert(flagHasHTMLData);
    return storeHTMLData;
  }

bool CommandResultJSON::hasHints(void) const
  {
    return flagHasHints;
  }

HintsJSON * CommandResultJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const HintsJSON * CommandResultJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

bool CommandResultJSON::hasEmotion(void) const
  {
    return flagHasEmotion;
  }

EmotionJSON * CommandResultJSON::getEmotion(void)
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

const EmotionJSON * CommandResultJSON::getEmotion(void) const
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

EmotionJSON::TypeValue CommandResultJSON::getEmotionValue(void)
  {
    return getEmotion()->getValue();
  }

const EmotionJSON::TypeValue CommandResultJSON::getEmotionValue(void) const
  {
    return getEmotion()->getValue();
  }

const char *CommandResultJSON::getEmotionAsChars(void) const
  {
    return getEmotion()->getValueAsChars();
  }

std::string CommandResultJSON::getEmotionAsString(void) const
  {
    return getEmotion()->getValueAsString();
  }

bool CommandResultJSON::hasIcon(void) const
  {
    return flagHasIcon;
  }

IconJSON * CommandResultJSON::getIcon(void)
  {
    assert(flagHasIcon);
    return storeIcon;
  }

const IconJSON * CommandResultJSON::getIcon(void) const
  {
    assert(flagHasIcon);
    return storeIcon;
  }

IconJSON::TypeValue CommandResultJSON::getIconValue(void)
  {
    return getIcon()->getValue();
  }

const IconJSON::TypeValue CommandResultJSON::getIconValue(void) const
  {
    return getIcon()->getValue();
  }

const char *CommandResultJSON::getIconAsChars(void) const
  {
    return getIcon()->getValueAsChars();
  }

std::string CommandResultJSON::getIconAsString(void) const
  {
    return getIcon()->getValueAsString();
  }

bool CommandResultJSON::hasResponseAudioBytes(void) const
  {
    return flagHasResponseAudioBytes;
  }

std::string CommandResultJSON::getResponseAudioBytes(void)
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

const std::string CommandResultJSON::getResponseAudioBytes(void) const
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

bool CommandResultJSON::hasResponseAudioEncoding(void) const
  {
    return flagHasResponseAudioEncoding;
  }

CommandResultJSON::TypeResponseAudioEncoding CommandResultJSON::getResponseAudioEncoding(void)
  {
    assert(flagHasResponseAudioEncoding);
    return storeResponseAudioEncoding;
  }

const CommandResultJSON::TypeResponseAudioEncoding CommandResultJSON::getResponseAudioEncoding(void) const
  {
    assert(flagHasResponseAudioEncoding);
    return storeResponseAudioEncoding;
  }

const char *CommandResultJSON::getResponseAudioEncodingAsChars(void) const
  {
    TypeResponseAudioEncoding result = getResponseAudioEncoding();
    if (result.in_known_list)
        return stringFromResponseAudioEncoding(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string CommandResultJSON::getResponseAudioEncodingAsString(void) const
  {
    return getResponseAudioEncodingAsChars();
  }

bool CommandResultJSON::hasResponseAudioError(void) const
  {
    return flagHasResponseAudioError;
  }

std::string CommandResultJSON::getResponseAudioError(void)
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

const std::string CommandResultJSON::getResponseAudioError(void) const
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

bool CommandResultJSON::hasOutputOverrideDiagnostics(void) const
  {
    return flagHasOutputOverrideDiagnostics;
  }

size_t CommandResultJSON::countOfOutputOverrideDiagnostics(void) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics.size();
  }

std::string CommandResultJSON::elementOfOutputOverrideDiagnostics(size_t element_num)
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics[element_num];
  }

const std::string CommandResultJSON::elementOfOutputOverrideDiagnostics(size_t element_num) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics[element_num];
  }

std::vector< std::string > CommandResultJSON::getOutputOverrideDiagnostics(void)
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics;
  }

const std::vector< std::string > CommandResultJSON::getOutputOverrideDiagnostics(void) const
  {
    assert(flagHasOutputOverrideDiagnostics);
    return storeOutputOverrideDiagnostics;
  }

bool CommandResultJSON::hasUploadedTerrierDiagnostics(void) const
  {
    return flagHasUploadedTerrierDiagnostics;
  }

size_t CommandResultJSON::countOfUploadedTerrierDiagnostics(void) const
  {
    assert(flagHasUploadedTerrierDiagnostics);
    return storeUploadedTerrierDiagnostics.size();
  }

std::string CommandResultJSON::elementOfUploadedTerrierDiagnostics(size_t element_num)
  {
    assert(flagHasUploadedTerrierDiagnostics);
    return storeUploadedTerrierDiagnostics[element_num];
  }

const std::string CommandResultJSON::elementOfUploadedTerrierDiagnostics(size_t element_num) const
  {
    assert(flagHasUploadedTerrierDiagnostics);
    return storeUploadedTerrierDiagnostics[element_num];
  }

std::vector< std::string > CommandResultJSON::getUploadedTerrierDiagnostics(void)
  {
    assert(flagHasUploadedTerrierDiagnostics);
    return storeUploadedTerrierDiagnostics;
  }

const std::vector< std::string > CommandResultJSON::getUploadedTerrierDiagnostics(void) const
  {
    assert(flagHasUploadedTerrierDiagnostics);
    return storeUploadedTerrierDiagnostics;
  }

bool CommandResultJSON::hasRequiredFeatures(void) const
  {
    return flagHasRequiredFeatures;
  }

size_t CommandResultJSON::countOfRequiredFeatures(void) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures.size();
  }

std::string CommandResultJSON::elementOfRequiredFeatures(size_t element_num)
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures[element_num];
  }

const std::string CommandResultJSON::elementOfRequiredFeatures(size_t element_num) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures[element_num];
  }

std::vector< std::string > CommandResultJSON::getRequiredFeatures(void)
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures;
  }

const std::vector< std::string > CommandResultJSON::getRequiredFeatures(void) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures;
  }

bool CommandResultJSON::hasClientActionSucceededResult(void) const
  {
    return flagHasClientActionSucceededResult;
  }

DynamicResponseJSON * CommandResultJSON::getClientActionSucceededResult(void)
  {
    assert(flagHasClientActionSucceededResult);
    return storeClientActionSucceededResult;
  }

const DynamicResponseJSON * CommandResultJSON::getClientActionSucceededResult(void) const
  {
    assert(flagHasClientActionSucceededResult);
    return storeClientActionSucceededResult;
  }

bool CommandResultJSON::hasClientActionFailedResult(void) const
  {
    return flagHasClientActionFailedResult;
  }

DynamicResponseJSON * CommandResultJSON::getClientActionFailedResult(void)
  {
    assert(flagHasClientActionFailedResult);
    return storeClientActionFailedResult;
  }

const DynamicResponseJSON * CommandResultJSON::getClientActionFailedResult(void) const
  {
    assert(flagHasClientActionFailedResult);
    return storeClientActionFailedResult;
  }

bool CommandResultJSON::hasRequiredFeaturesSupportedResult(void) const
  {
    return flagHasRequiredFeaturesSupportedResult;
  }

DynamicResponseJSON * CommandResultJSON::getRequiredFeaturesSupportedResult(void)
  {
    assert(flagHasRequiredFeaturesSupportedResult);
    return storeRequiredFeaturesSupportedResult;
  }

const DynamicResponseJSON * CommandResultJSON::getRequiredFeaturesSupportedResult(void) const
  {
    assert(flagHasRequiredFeaturesSupportedResult);
    return storeRequiredFeaturesSupportedResult;
  }

bool CommandResultJSON::hasSendBack(void) const
  {
    return flagHasSendBack;
  }

JSONValue * CommandResultJSON::getSendBack(void)
  {
    assert(flagHasSendBack);
    return storeSendBack;
  }

const JSONValue * CommandResultJSON::getSendBack(void) const
  {
    assert(flagHasSendBack);
    return storeSendBack;
  }

bool CommandResultJSON::hasUnderstandingConfidence(void) const
  {
    return flagHasUnderstandingConfidence;
  }

double CommandResultJSON::getUnderstandingConfidence(void)
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence != "")
      {
        return atof(textStoreUnderstandingConfidence.c_str());
      }
    return storeUnderstandingConfidence;
  }

const double CommandResultJSON::getUnderstandingConfidence(void) const
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence != "")
      {
        return atof(textStoreUnderstandingConfidence.c_str());
      }
    return storeUnderstandingConfidence;
  }

std::string CommandResultJSON::getUnderstandingConfidenceAsText(void) const
  {
    assert(flagHasUnderstandingConfidence);
    if (textStoreUnderstandingConfidence == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeUnderstandingConfidence);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreUnderstandingConfidence);
      }
  }

bool CommandResultJSON::hasErrorType(void) const
  {
    return flagHasErrorType;
  }

std::string CommandResultJSON::getErrorType(void)
  {
    assert(flagHasErrorType);
    return storeErrorType;
  }

const std::string CommandResultJSON::getErrorType(void) const
  {
    assert(flagHasErrorType);
    return storeErrorType;
  }

bool CommandResultJSON::hasErrorData(void) const
  {
    return flagHasErrorData;
  }

CommandErrorJSON * CommandResultJSON::getErrorData(void)
  {
    assert(flagHasErrorData);
    return storeErrorData;
  }

const CommandErrorJSON * CommandResultJSON::getErrorData(void) const
  {
    assert(flagHasErrorData);
    return storeErrorData;
  }

CommandResultJSON *CommandResultJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'A':
            switch ((unsigned char)(key[1]))
              {
                case 'g':
                    if (strncmp(&(key[2]), "eCalculator", 11) == 0)
                      {
                        switch ((unsigned char)(key[13]))
                          {
                            case 'C':
                                switch ((unsigned char)(key[14]))
                                  {
                                    case 'a':
                                        if (strcmp(&(key[15]), "ncelCommand") == 0)
                                            return new AgeCalculatorCancelCommandJSON();
                                        break;
                                    case 'o':
                                        if (strcmp(&(key[15]), "mmand") == 0)
                                            return new AgeCalculatorCommandJSON();
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'S':
                                if (strcmp(&(key[14]), "tartCommand") == 0)
                                    return new AgeCalculatorStartCommandJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'l':
                    if (strcmp(&(key[2]), "armCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "AlarmCommandKind")));
                        if (key_value == NULL)
                            throw("The `AlarmCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `AlarmCommandKind' field has a non-string value.");
                        return AlarmCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'n':
                    if (strcmp(&(key[2]), "droidAppLauncherCommand") == 0)
                        return new AndroidAppLauncherCommandJSON();
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "ithCommand") == 0)
                        return new ArithCommandJSON();
                    break;
                case 's':
                    if (strcmp(&(key[2]), "tronomyDistanceFromEarthCommand") == 0)
                        return new AstronomyDistanceFromEarthCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'B':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    switch ((unsigned char)(key[2]))
                      {
                        case 's':
                            if (strcmp(&(key[3]), "eConverterCommand") == 0)
                                return new BaseConverterCommandJSON();
                            break;
                        case 't':
                            if (strcmp(&(key[3]), "tleshipCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "BattleshipCommandKind")));
                                if (key_value == NULL)
                                    throw("The `BattleshipCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `BattleshipCommandKind' field has a non-string value.");
                                return BattleshipCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strcmp(&(key[2]), "ackjackCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "BlackjackCommandKind")));
                        if (key_value == NULL)
                            throw("The `BlackjackCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `BlackjackCommandKind' field has a non-string value.");
                        return BlackjackCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'l':
                            if (strcmp(&(key[3]), "endarCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "CalendarCommandKind")));
                                if (key_value == NULL)
                                    throw("The `CalendarCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `CalendarCommandKind' field has a non-string value.");
                                return CalendarCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        case 'r':
                            if (strcmp(&(key[3]), "ControlCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "CarControlCommandKind")));
                                if (key_value == NULL)
                                    throw("The `CarControlCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `CarControlCommandKind' field has a non-string value.");
                                return CarControlCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strncmp(&(key[2]), "ient", 4) == 0)
                      {
                        switch ((unsigned char)(key[6]))
                          {
                            case 'C':
                                if (strcmp(&(key[7]), "ommand") == 0)
                                  {
                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "ClientCommandKind")));
                                    if (key_value == NULL)
                                        throw("The `ClientCommandKind' field is missing.");
                                    JSONStringValue *key_string_value = key_value->string_value();
                                    if (key_string_value == NULL)
                                        throw("The `ClientCommandKind' field has a non-string value.");
                                    return ClientCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                  }
                                break;
                            case 'M':
                                if (strcmp(&(key[7]), "atchCommand") == 0)
                                    return new ClientMatchCommandJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'm':
                            switch ((unsigned char)(key[3]))
                              {
                                case 'm':
                                    if (strcmp(&(key[4]), "unicationCommand") == 0)
                                      {
                                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "CommunicationCommandKind")));
                                        if (key_value == NULL)
                                            throw("The `CommunicationCommandKind' field is missing.");
                                        JSONStringValue *key_string_value = key_value->string_value();
                                        if (key_string_value == NULL)
                                            throw("The `CommunicationCommandKind' field has a non-string value.");
                                        return CommunicationCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                      }
                                    break;
                                case 'p':
                                    if (strcmp(&(key[4]), "oundResultCommand") == 0)
                                        return new CompoundResultCommandJSON();
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'u':
                            if (strcmp(&(key[3]), "ntdownCommand") == 0)
                                return new CountdownCommandJSON();
                            break;
                        default:
                            break;
                      }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "rrencyConverterCommand") == 0)
                        return new CurrencyConverterCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'D':
            switch ((unsigned char)(key[1]))
              {
                case 'e':
                    if (strcmp(&(key[2]), "viceControlCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "DeviceControlCommandKind")));
                        if (key_value == NULL)
                            throw("The `DeviceControlCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `DeviceControlCommandKind' field has a non-string value.");
                        return DeviceControlCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'i':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'c':
                            if (strcmp(&(key[3]), "tionaryCommand") == 0)
                                return new DictionaryCommandJSON();
                            break;
                        case 's':
                            if (strncmp(&(key[3]), "ambiguate", 9) == 0)
                              {
                                switch ((unsigned char)(key[12]))
                                  {
                                    case 'C':
                                        if (strcmp(&(key[13]), "ommand") == 0)
                                          {
                                            JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "DisambiguateCommandKind")));
                                            if (key_value == NULL)
                                                throw("The `DisambiguateCommandKind' field is missing.");
                                            JSONStringValue *key_string_value = key_value->string_value();
                                            if (key_string_value == NULL)
                                                throw("The `DisambiguateCommandKind' field has a non-string value.");
                                            return DisambiguateCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                          }
                                        break;
                                    case 'L':
                                        if (strcmp(&(key[13]), "ocationCommand") == 0)
                                            return new DisambiguateLocationCommandJSON();
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
            break;
        case 'E':
            switch ((unsigned char)(key[1]))
              {
                case 'd':
                    if (strcmp(&(key[2]), "itDeviceCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "EditDeviceCommandKind")));
                        if (key_value == NULL)
                            throw("The `EditDeviceCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `EditDeviceCommandKind' field has a non-string value.");
                        return EditDeviceCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'm':
                    if (strcmp(&(key[2]), "ailCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "EmailCommandKind")));
                        if (key_value == NULL)
                            throw("The `EmailCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `EmailCommandKind' field has a non-string value.");
                        return EmailCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "rorCommand") == 0)
                        return new ErrorCommandJSON();
                    break;
                default:
                    break;
              }
            break;
        case 'F':
            if (strncmp(&(key[1]), "light", 5) == 0)
              {
                switch ((unsigned char)(key[6]))
                  {
                    case 'B':
                        if (strcmp(&(key[7]), "ookingCommand") == 0)
                            return new FlightBookingCommandJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[7]), "tatusCommand") == 0)
                            return new FlightStatusCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'G':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "mesMenuCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "GamesMenuCommandKind")));
                        if (key_value == NULL)
                            throw("The `GamesMenuCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `GamesMenuCommandKind' field has a non-string value.");
                        return GamesMenuCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'e':
                    if (strcmp(&(key[2]), "onameFactsCommand") == 0)
                        return new GeonameFactsCommandJSON();
                    break;
                case 'u':
                    if (strncmp(&(key[2]), "essThatLyric", 12) == 0)
                      {
                        switch ((unsigned char)(key[14]))
                          {
                            case 'D':
                                if (strcmp(&(key[15]), "ecadeMenuCommand") == 0)
                                    return new GuessThatLyricDecadeMenuCommandJSON();
                                break;
                            case 'Q':
                                if (strcmp(&(key[15]), "uitGameCommand") == 0)
                                    return new GuessThatLyricQuitGameCommandJSON();
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
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "ngmanCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "HangmanCommandKind")));
                        if (key_value == NULL)
                            throw("The `HangmanCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `HangmanCommandKind' field has a non-string value.");
                        return HangmanCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'o':
                    if (strncmp(&(key[2]), "meAutomation", 12) == 0)
                      {
                        switch ((unsigned char)(key[14]))
                          {
                            case 'C':
                                switch ((unsigned char)(key[15]))
                                  {
                                    case 'a':
                                        if (strcmp(&(key[16]), "ncelCommand") == 0)
                                            return new HomeAutomationCancelCommandJSON();
                                        break;
                                    case 'o':
                                        switch ((unsigned char)(key[16]))
                                          {
                                            case 'm':
                                                if (strcmp(&(key[17]), "mand") == 0)
                                                  {
                                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "HomeAutomationCommandKind")));
                                                    if (key_value == NULL)
                                                        throw("The `HomeAutomationCommandKind' field is missing.");
                                                    JSONStringValue *key_string_value = key_value->string_value();
                                                    if (key_string_value == NULL)
                                                        throw("The `HomeAutomationCommandKind' field has a non-string value.");
                                                    return HomeAutomationCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                                  }
                                                break;
                                            case 'n':
                                                if (strcmp(&(key[17]), "trolCommand") == 0)
                                                  {
                                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "HomeAutomationControlCommandKind")));
                                                    if (key_value == NULL)
                                                        throw("The `HomeAutomationControlCommandKind' field is missing.");
                                                    JSONStringValue *key_string_value = key_value->string_value();
                                                    if (key_string_value == NULL)
                                                        throw("The `HomeAutomationControlCommandKind' field has a non-string value.");
                                                    return HomeAutomationControlCommandJSON::createForKey(key_string_value->getData(), other_field_index);
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
                            case 'L':
                                if (strcmp(&(key[15]), "istUserDataCommand") == 0)
                                    return new HomeAutomationListUserDataCommandJSON();
                                break;
                            case 'Q':
                                if (strcmp(&(key[15]), "ueryCommand") == 0)
                                    return new HomeAutomationQueryCommandJSON();
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
        case 'I':
            switch ((unsigned char)(key[1]))
              {
                case 'O':
                    if (strcmp(&(key[2]), "SAppLauncherCommand") == 0)
                        return new IOSAppLauncherCommandJSON();
                    break;
                case 'n':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'd':
                            if (strcmp(&(key[3]), "exUserAppsCommand") == 0)
                                return new IndexUserAppsCommandJSON();
                            break;
                        case 'f':
                            if (strcmp(&(key[3]), "ormationCommand") == 0)
                                return new InformationCommandJSON();
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'K':
            if (strcmp(&(key[1]), "nowledgeCommand") == 0)
                return new KnowledgeCommandJSON();
            break;
        case 'L':
            if (strcmp(&(key[1]), "ocalSearchCommand") == 0)
                return new LocalSearchCommandJSON();
            break;
        case 'M':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "pCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "MapCommandKind")));
                        if (key_value == NULL)
                            throw("The `MapCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `MapCommandKind' field has a non-string value.");
                        return MapCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "rtgageCalculatorCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "MortgageCalculatorCommandKind")));
                        if (key_value == NULL)
                            throw("The `MortgageCalculatorCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `MortgageCalculatorCommandKind' field has a non-string value.");
                        return MortgageCalculatorCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'u':
                    if (strncmp(&(key[2]), "sic", 3) == 0)
                      {
                        switch ((unsigned char)(key[5]))
                          {
                            case 'C':
                                if (strcmp(&(key[6]), "ommand") == 0)
                                  {
                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "MusicCommandKind")));
                                    if (key_value == NULL)
                                        throw("The `MusicCommandKind' field is missing.");
                                    JSONStringValue *key_string_value = key_value->string_value();
                                    if (key_string_value == NULL)
                                        throw("The `MusicCommandKind' field has a non-string value.");
                                    return MusicCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                  }
                                break;
                            case 'P':
                                if (strcmp(&(key[6]), "layerCommand") == 0)
                                    return new MusicPlayerCommandJSON();
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
        case 'N':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strncmp(&(key[2]), "vigationCo", 10) == 0)
                      {
                        switch ((unsigned char)(key[12]))
                          {
                            case 'm':
                                if (strcmp(&(key[13]), "mand") == 0)
                                  {
                                    JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "NavigationCommandKind")));
                                    if (key_value == NULL)
                                        throw("The `NavigationCommandKind' field is missing.");
                                    JSONStringValue *key_string_value = key_value->string_value();
                                    if (key_string_value == NULL)
                                        throw("The `NavigationCommandKind' field has a non-string value.");
                                    return NavigationCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(key[13]), "trolCommand") == 0)
                                    return new NavigationControlCommandJSON();
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(key[2]), "mberGuessCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "NumberGuessCommandKind")));
                        if (key_value == NULL)
                            throw("The `NumberGuessCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `NumberGuessCommandKind' field has a non-string value.");
                        return NumberGuessCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                default:
                    break;
              }
            break;
        case 'P':
            if (strcmp(&(key[1]), "honeCommand") == 0)
              {
                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "PhoneCommandKind")));
                if (key_value == NULL)
                    throw("The `PhoneCommandKind' field is missing.");
                JSONStringValue *key_string_value = key_value->string_value();
                if (key_string_value == NULL)
                    throw("The `PhoneCommandKind' field has a non-string value.");
                return PhoneCommandJSON::createForKey(key_string_value->getData(), other_field_index);
              }
            break;
        case 'R':
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'd':
                            if (strcmp(&(key[3]), "ioCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RadioCommandKind")));
                                if (key_value == NULL)
                                    throw("The `RadioCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `RadioCommandKind' field has a non-string value.");
                                return RadioCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        case 'n':
                            if (strcmp(&(key[3]), "domNumberGeneratorCommand") == 0)
                                return new RandomNumberGeneratorCommandJSON();
                            break;
                        default:
                            break;
                      }
                    break;
                case 'o':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'b':
                            if (strcmp(&(key[3]), "otCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RobotCommandKind")));
                                if (key_value == NULL)
                                    throw("The `RobotCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `RobotCommandKind' field has a non-string value.");
                                return RobotCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        case 'c':
                            if (strcmp(&(key[3]), "kPaperScissorsCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "RockPaperScissorsCommandKind")));
                                if (key_value == NULL)
                                    throw("The `RockPaperScissorsCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `RockPaperScissorsCommandKind' field has a non-string value.");
                                return RockPaperScissorsCommandJSON::createForKey(key_string_value->getData(), other_field_index);
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
            switch ((unsigned char)(key[1]))
              {
                case 'M':
                    if (strcmp(&(key[2]), "SCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "SMSCommandKind")));
                        if (key_value == NULL)
                            throw("The `SMSCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `SMSCommandKind' field has a non-string value.");
                        return SMSCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "undHoundNowCommand") == 0)
                        return new SoundHoundNowCommandJSON();
                    break;
                case 'p':
                    switch ((unsigned char)(key[2]))
                      {
                        case 'e':
                            if (strcmp(&(key[3]), "echToTextOnlyCommand") == 0)
                                return new SpeechToTextOnlyCommandJSON();
                            break;
                        case 'o':
                            if (strcmp(&(key[3]), "rtsCommand") == 0)
                              {
                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "SportsCommandKind")));
                                if (key_value == NULL)
                                    throw("The `SportsCommandKind' field is missing.");
                                JSONStringValue *key_string_value = key_value->string_value();
                                if (key_string_value == NULL)
                                    throw("The `SportsCommandKind' field has a non-string value.");
                                return SportsCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 't':
                    if (strncmp(&(key[2]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(key[3]))
                          {
                            case 'c':
                                if (strcmp(&(key[4]), "kMarketCommand") == 0)
                                    return new StockMarketCommandJSON();
                                break;
                            case 'r':
                                if (strncmp(&(key[4]), "ed", 2) == 0)
                                  {
                                    switch ((unsigned char)(key[6]))
                                      {
                                        case 'A':
                                            if (strcmp(&(key[7]), "lwaysMatchCommand") == 0)
                                              {
                                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "StoredAlwaysMatchCommandKind")));
                                                if (key_value == NULL)
                                                    throw("The `StoredAlwaysMatchCommandKind' field is missing.");
                                                JSONStringValue *key_string_value = key_value->string_value();
                                                if (key_string_value == NULL)
                                                    throw("The `StoredAlwaysMatchCommandKind' field has a non-string value.");
                                                return StoredAlwaysMatchCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                                              }
                                            break;
                                        case 'P':
                                            if (strcmp(&(key[7]), "ageMatchCommand") == 0)
                                              {
                                                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "StoredPageMatchCommandKind")));
                                                if (key_value == NULL)
                                                    throw("The `StoredPageMatchCommandKind' field is missing.");
                                                JSONStringValue *key_string_value = key_value->string_value();
                                                if (key_string_value == NULL)
                                                    throw("The `StoredPageMatchCommandKind' field has a non-string value.");
                                                return StoredPageMatchCommandJSON::createForKey(key_string_value->getData(), other_field_index);
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
                default:
                    break;
              }
            break;
        case 'T':
            if (strncmp(&(key[1]), "i", 1) == 0)
              {
                switch ((unsigned char)(key[2]))
                  {
                    case 'm':
                        if (strcmp(&(key[3]), "erCommand") == 0)
                          {
                            JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "TimerCommandKind")));
                            if (key_value == NULL)
                                throw("The `TimerCommandKind' field is missing.");
                            JSONStringValue *key_string_value = key_value->string_value();
                            if (key_string_value == NULL)
                                throw("The `TimerCommandKind' field has a non-string value.");
                            return TimerCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                          }
                        break;
                    case 'p':
                        if (strcmp(&(key[3]), "CalculatorCommand") == 0)
                          {
                            JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "TipCalculatorCommandKind")));
                            if (key_value == NULL)
                                throw("The `TipCalculatorCommandKind' field is missing.");
                            JSONStringValue *key_string_value = key_value->string_value();
                            if (key_string_value == NULL)
                                throw("The `TipCalculatorCommandKind' field has a non-string value.");
                            return TipCalculatorCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            switch ((unsigned char)(key[1]))
              {
                case 'b':
                    if (strcmp(&(key[2]), "erCommand") == 0)
                      {
                        JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "UberCommandKind")));
                        if (key_value == NULL)
                            throw("The `UberCommandKind' field is missing.");
                        JSONStringValue *key_string_value = key_value->string_value();
                        if (key_string_value == NULL)
                            throw("The `UberCommandKind' field has a non-string value.");
                        return UberCommandJSON::createForKey(key_string_value->getData(), other_field_index);
                      }
                    break;
                case 's':
                    if (strncmp(&(key[2]), "er", 2) == 0)
                      {
                        switch ((unsigned char)(key[4]))
                          {
                            case 'C':
                                if (strcmp(&(key[5]), "ontactsCommand") == 0)
                                    return new UserContactsCommandJSON();
                                break;
                            case 'F':
                                if (strcmp(&(key[5]), "eedbackCommand") == 0)
                                    return new UserFeedbackCommandJSON();
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
        case 'W':
            if (strcmp(&(key[1]), "ikipediaCommand") == 0)
                return new WikipediaCommandJSON();
            break;
        default:
            break;
      }

    class GenericCommandResultJSON : public CommandResultJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericCommandResultJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericCommandResultJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getCommandKind(void) const  { return key.c_str(); }
        size_t extraCommandResultComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraCommandResultComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraCommandResultComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraCommandResultComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraCommandResultLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraCommandResultLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraCommandResultSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraCommandResultLookup(key);
            if (old_field == NULL)
              {
                extraCommandResultAppendPair(key, new_component);
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
    return new GenericCommandResultJSON(key);
  }
CommandResultJSON *CommandResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CommandResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CommandResultJSON>, CommandResultJSON *, bool> generator("Type CommandResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
