/* file "ClientMatchJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ClientMatchJSON.h"

#include "ClientMatchJSON.h"
#include "ClientListMatchJSON.h"


ClientMatchJSON::TypeExtendedBlock ClientMatchJSON::stringToExtendedBlock(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'I':
            if (strcmp(&(chars[1]), "MPERATIVE_PHRASE") == 0)
                return ExtendedBlock_IMPERATIVE_PHRASE;
            break;
        case 'Q':
            if (strcmp(&(chars[1]), "UESTION") == 0)
                return ExtendedBlock_QUESTION;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "AW_TOP_LEVEL_QUERY") == 0)
                return ExtendedBlock_RAW_TOP_LEVEL_QUERY;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ENTENCE") == 0)
                return ExtendedBlock_SENTENCE;
            break;
        default:
            break;
      }
    throw("The value for field `ExtendedBlock' is not one of the legal values.");
  }

const char *ClientMatchJSON::stringFromExtendedBlock(TypeExtendedBlock the_enum)
  {
    switch (the_enum)
      {
        case ExtendedBlock_RAW_TOP_LEVEL_QUERY:
            return "RAW_TOP_LEVEL_QUERY";
        case ExtendedBlock_IMPERATIVE_PHRASE:
            return "IMPERATIVE_PHRASE";
        case ExtendedBlock_QUESTION:
            return "QUESTION";
        case ExtendedBlock_SENTENCE:
            return "SENTENCE";
        default:
            assert(false);
            return NULL;
      }
  }

ClientMatchJSON::TypeViewType ClientMatchJSON::stringToViewType(const char *chars)
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

const char *ClientMatchJSON::stringFromViewType(TypeViewType the_enum)
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

ClientMatchJSON::ClientMatchJSON(const ClientMatchJSON &)
  {
    assert(false);
  }

ClientMatchJSON &ClientMatchJSON::operator=(const ClientMatchJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ClientMatchJSON::fromJSONExpression(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Expression of ClientMatchJSON is not a string.");
    setExpression(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setResult(json_value);
  }

void ClientMatchJSON::fromJSONExtendedBlock(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExtendedBlock of ClientMatchJSON is not a string.");
    TypeExtendedBlock the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "MPERATIVE_PHRASE") == 0)
                  {
                    the_enum = ExtendedBlock_IMPERATIVE_PHRASE;
                    goto enum_is_done;
                  }
            break;
        case 'Q':
            if (strcmp(&(json_string->getData()[1]), "UESTION") == 0)
                  {
                    the_enum = ExtendedBlock_QUESTION;
                    goto enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "AW_TOP_LEVEL_QUERY") == 0)
                  {
                    the_enum = ExtendedBlock_RAW_TOP_LEVEL_QUERY;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ENTENCE") == 0)
                  {
                    the_enum = ExtendedBlock_SENTENCE;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field ExtendedBlock of ClientMatchJSON is not one of the legal strings.");
  enum_is_done:;
    setExtendedBlock(the_enum);
  }

void ClientMatchJSON::fromJSONResultIsInformationNugget(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ResultIsInformationNugget of ClientMatchJSON is not true for false.");
          }
      }
    setResultIsInformationNugget(the_bool);
  }

void ClientMatchJSON::fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponse of ClientMatchJSON is not a string.");
    setSpokenResponse(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseLong of ClientMatchJSON is not a string.");
    setSpokenResponseLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponse of ClientMatchJSON is not a string.");
    setWrittenResponse(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseLong of ClientMatchJSON is not a string.");
    setWrittenResponseLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSML of ClientMatchJSON is not a string.");
    setSpokenResponseSSML(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSMLLong of ClientMatchJSON is not a string.");
    setSpokenResponseSSMLLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponsePattern(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponsePattern of ClientMatchJSON is not a string.");
    setSpokenResponsePattern(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponsePatternLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponsePatternLong of ClientMatchJSON is not a string.");
    setSpokenResponsePatternLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONWrittenResponsePattern(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponsePattern of ClientMatchJSON is not a string.");
    setWrittenResponsePattern(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONWrittenResponsePatternLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponsePatternLong of ClientMatchJSON is not a string.");
    setWrittenResponsePatternLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponsePatternSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponsePatternSSML of ClientMatchJSON is not a string.");
    setSpokenResponsePatternSSML(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONSpokenResponsePatternSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponsePatternSSMLLong of ClientMatchJSON is not a string.");
    setSpokenResponsePatternSSMLLong(std::string(json_string->getData()));
  }

void ClientMatchJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of ClientMatchJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void ClientMatchJSON::fromJSONViewType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ViewType of ClientMatchJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ViewType of ClientMatchJSON has too few elements.");
    std::vector< TypeViewType > vector_ViewType1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ViewType of ClientMatchJSON is not a string.");
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
        throw("The value for an element of field ViewType of ClientMatchJSON is not one of the legal strings.");
      enum_is_done:;
        vector_ViewType1[num1] = the_enum;
      }
    assert(vector_ViewType1.size() >= 1);
    initViewType();
    for (size_t num2 = 0; num2 < vector_ViewType1.size(); ++num2)
        appendViewType(vector_ViewType1[num2]);
    for (size_t num1 = 0; num1 < vector_ViewType1.size(); ++num1)
      {
      }
  }

void ClientMatchJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchJSON::fromJSONPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PreviewJSON *convert_classy = PreviewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPreview(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchJSON::fromJSONHTMLData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HTMLDataJSON *convert_classy = HTMLDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHTMLData(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HintsJSON *convert_classy = HintsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHints(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchJSON::fromJSONEmotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmotionJSON *convert_classy = EmotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmotion(convert_classy);
    convert_classy->remove_reference();
  }

void ClientMatchJSON::fromJSONIcon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IconJSON *convert_classy = IconJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIcon(convert_classy);
    convert_classy->remove_reference();
  }

ClientMatchJSON::ClientMatchJSON(void) :
        flagHasExpression(false),
        flagHasResult(false),
        flagHasExtendedBlock(false),
        flagHasResultIsInformationNugget(false),
        flagHasSpokenResponse(false),
        flagHasSpokenResponseLong(false),
        flagHasWrittenResponse(false),
        flagHasWrittenResponseLong(false),
        flagHasSpokenResponseSSML(false),
        flagHasSpokenResponseSSMLLong(false),
        flagHasSpokenResponsePattern(false),
        flagHasSpokenResponsePatternLong(false),
        flagHasWrittenResponsePattern(false),
        flagHasWrittenResponsePatternLong(false),
        flagHasSpokenResponsePatternSSML(false),
        flagHasSpokenResponsePatternSSMLLong(false),
        flagHasAutoListen(false),
        flagHasViewType(false),
        flagHasTemplateData(false),
        flagHasPreview(false),
        flagHasHTMLData(false),
        flagHasHints(false),
        flagHasEmotion(false),
        flagHasIcon(false)
  {
    extraIndex = create_string_index();
  }

ClientMatchJSON::~ClientMatchJSON(void)
  {
    if (flagHasResult)
      {
        storeResult->remove_reference();
      }
    if (flagHasTemplateData)
      {
        storeTemplateData->remove_reference();
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
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ClientMatchJSON::hasExpression(void) const
  {
    return flagHasExpression;
  }

std::string ClientMatchJSON::getExpression(void)
  {
    assert(flagHasExpression);
    return storeExpression;
  }

const std::string ClientMatchJSON::getExpression(void) const
  {
    assert(flagHasExpression);
    return storeExpression;
  }

bool ClientMatchJSON::hasResult(void) const
  {
    return flagHasResult;
  }

JSONValue * ClientMatchJSON::getResult(void)
  {
    assert(flagHasResult);
    return storeResult;
  }

const JSONValue * ClientMatchJSON::getResult(void) const
  {
    assert(flagHasResult);
    return storeResult;
  }

bool ClientMatchJSON::hasExtendedBlock(void) const
  {
    return flagHasExtendedBlock;
  }

ClientMatchJSON::TypeExtendedBlock ClientMatchJSON::getExtendedBlock(void)
  {
    assert(flagHasExtendedBlock);
    return storeExtendedBlock;
  }

const ClientMatchJSON::TypeExtendedBlock ClientMatchJSON::getExtendedBlock(void) const
  {
    assert(flagHasExtendedBlock);
    return storeExtendedBlock;
  }

const char *ClientMatchJSON::getExtendedBlockAsChars(void) const
  {
    return stringFromExtendedBlock(getExtendedBlock());
  }

std::string ClientMatchJSON::getExtendedBlockAsString(void) const
  {
    return stringFromExtendedBlock(getExtendedBlock());
  }

bool ClientMatchJSON::hasResultIsInformationNugget(void) const
  {
    return flagHasResultIsInformationNugget;
  }

bool ClientMatchJSON::getResultIsInformationNugget(void)
  {
    assert(flagHasResultIsInformationNugget);
    return storeResultIsInformationNugget;
  }

const bool ClientMatchJSON::getResultIsInformationNugget(void) const
  {
    assert(flagHasResultIsInformationNugget);
    return storeResultIsInformationNugget;
  }

bool ClientMatchJSON::hasSpokenResponse(void) const
  {
    return flagHasSpokenResponse;
  }

std::string ClientMatchJSON::getSpokenResponse(void)
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

const std::string ClientMatchJSON::getSpokenResponse(void) const
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

bool ClientMatchJSON::hasSpokenResponseLong(void) const
  {
    return flagHasSpokenResponseLong;
  }

std::string ClientMatchJSON::getSpokenResponseLong(void)
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

const std::string ClientMatchJSON::getSpokenResponseLong(void) const
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

bool ClientMatchJSON::hasWrittenResponse(void) const
  {
    return flagHasWrittenResponse;
  }

std::string ClientMatchJSON::getWrittenResponse(void)
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

const std::string ClientMatchJSON::getWrittenResponse(void) const
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

bool ClientMatchJSON::hasWrittenResponseLong(void) const
  {
    return flagHasWrittenResponseLong;
  }

std::string ClientMatchJSON::getWrittenResponseLong(void)
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

const std::string ClientMatchJSON::getWrittenResponseLong(void) const
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

bool ClientMatchJSON::hasSpokenResponseSSML(void) const
  {
    return flagHasSpokenResponseSSML;
  }

std::string ClientMatchJSON::getSpokenResponseSSML(void)
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

const std::string ClientMatchJSON::getSpokenResponseSSML(void) const
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

bool ClientMatchJSON::hasSpokenResponseSSMLLong(void) const
  {
    return flagHasSpokenResponseSSMLLong;
  }

std::string ClientMatchJSON::getSpokenResponseSSMLLong(void)
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

const std::string ClientMatchJSON::getSpokenResponseSSMLLong(void) const
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

bool ClientMatchJSON::hasSpokenResponsePattern(void) const
  {
    return flagHasSpokenResponsePattern;
  }

std::string ClientMatchJSON::getSpokenResponsePattern(void)
  {
    assert(flagHasSpokenResponsePattern);
    return storeSpokenResponsePattern;
  }

const std::string ClientMatchJSON::getSpokenResponsePattern(void) const
  {
    assert(flagHasSpokenResponsePattern);
    return storeSpokenResponsePattern;
  }

bool ClientMatchJSON::hasSpokenResponsePatternLong(void) const
  {
    return flagHasSpokenResponsePatternLong;
  }

std::string ClientMatchJSON::getSpokenResponsePatternLong(void)
  {
    assert(flagHasSpokenResponsePatternLong);
    return storeSpokenResponsePatternLong;
  }

const std::string ClientMatchJSON::getSpokenResponsePatternLong(void) const
  {
    assert(flagHasSpokenResponsePatternLong);
    return storeSpokenResponsePatternLong;
  }

bool ClientMatchJSON::hasWrittenResponsePattern(void) const
  {
    return flagHasWrittenResponsePattern;
  }

std::string ClientMatchJSON::getWrittenResponsePattern(void)
  {
    assert(flagHasWrittenResponsePattern);
    return storeWrittenResponsePattern;
  }

const std::string ClientMatchJSON::getWrittenResponsePattern(void) const
  {
    assert(flagHasWrittenResponsePattern);
    return storeWrittenResponsePattern;
  }

bool ClientMatchJSON::hasWrittenResponsePatternLong(void) const
  {
    return flagHasWrittenResponsePatternLong;
  }

std::string ClientMatchJSON::getWrittenResponsePatternLong(void)
  {
    assert(flagHasWrittenResponsePatternLong);
    return storeWrittenResponsePatternLong;
  }

const std::string ClientMatchJSON::getWrittenResponsePatternLong(void) const
  {
    assert(flagHasWrittenResponsePatternLong);
    return storeWrittenResponsePatternLong;
  }

bool ClientMatchJSON::hasSpokenResponsePatternSSML(void) const
  {
    return flagHasSpokenResponsePatternSSML;
  }

std::string ClientMatchJSON::getSpokenResponsePatternSSML(void)
  {
    assert(flagHasSpokenResponsePatternSSML);
    return storeSpokenResponsePatternSSML;
  }

const std::string ClientMatchJSON::getSpokenResponsePatternSSML(void) const
  {
    assert(flagHasSpokenResponsePatternSSML);
    return storeSpokenResponsePatternSSML;
  }

bool ClientMatchJSON::hasSpokenResponsePatternSSMLLong(void) const
  {
    return flagHasSpokenResponsePatternSSMLLong;
  }

std::string ClientMatchJSON::getSpokenResponsePatternSSMLLong(void)
  {
    assert(flagHasSpokenResponsePatternSSMLLong);
    return storeSpokenResponsePatternSSMLLong;
  }

const std::string ClientMatchJSON::getSpokenResponsePatternSSMLLong(void) const
  {
    assert(flagHasSpokenResponsePatternSSMLLong);
    return storeSpokenResponsePatternSSMLLong;
  }

bool ClientMatchJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool ClientMatchJSON::getAutoListen(void)
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

const bool ClientMatchJSON::getAutoListen(void) const
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

bool ClientMatchJSON::hasViewType(void) const
  {
    return flagHasViewType;
  }

size_t ClientMatchJSON::countOfViewType(void) const
  {
    assert(flagHasViewType);
    return storeViewType.size();
  }

ClientMatchJSON::TypeViewType ClientMatchJSON::elementOfViewType(size_t element_num)
  {
    assert(flagHasViewType);
    return storeViewType[element_num];
  }

const ClientMatchJSON::TypeViewType ClientMatchJSON::elementOfViewType(size_t element_num) const
  {
    assert(flagHasViewType);
    return storeViewType[element_num];
  }

std::vector< ClientMatchJSON::TypeViewType > ClientMatchJSON::getViewType(void)
  {
    assert(flagHasViewType);
    return storeViewType;
  }

const std::vector< ClientMatchJSON::TypeViewType > ClientMatchJSON::getViewType(void) const
  {
    assert(flagHasViewType);
    return storeViewType;
  }

bool ClientMatchJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * ClientMatchJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * ClientMatchJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

bool ClientMatchJSON::hasPreview(void) const
  {
    return flagHasPreview;
  }

PreviewJSON * ClientMatchJSON::getPreview(void)
  {
    assert(flagHasPreview);
    return storePreview;
  }

const PreviewJSON * ClientMatchJSON::getPreview(void) const
  {
    assert(flagHasPreview);
    return storePreview;
  }

JSONValue * ClientMatchJSON::getPreviewValue(void)
  {
    return getPreview()->getValue();
  }

const JSONValue * ClientMatchJSON::getPreviewValue(void) const
  {
    return getPreview()->getValue();
  }

bool ClientMatchJSON::hasHTMLData(void) const
  {
    return flagHasHTMLData;
  }

HTMLDataJSON * ClientMatchJSON::getHTMLData(void)
  {
    assert(flagHasHTMLData);
    return storeHTMLData;
  }

const HTMLDataJSON * ClientMatchJSON::getHTMLData(void) const
  {
    assert(flagHasHTMLData);
    return storeHTMLData;
  }

bool ClientMatchJSON::hasHints(void) const
  {
    return flagHasHints;
  }

HintsJSON * ClientMatchJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const HintsJSON * ClientMatchJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

bool ClientMatchJSON::hasEmotion(void) const
  {
    return flagHasEmotion;
  }

EmotionJSON * ClientMatchJSON::getEmotion(void)
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

const EmotionJSON * ClientMatchJSON::getEmotion(void) const
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

EmotionJSON::TypeValue ClientMatchJSON::getEmotionValue(void)
  {
    return getEmotion()->getValue();
  }

const EmotionJSON::TypeValue ClientMatchJSON::getEmotionValue(void) const
  {
    return getEmotion()->getValue();
  }

const char *ClientMatchJSON::getEmotionAsChars(void) const
  {
    return getEmotion()->getValueAsChars();
  }

std::string ClientMatchJSON::getEmotionAsString(void) const
  {
    return getEmotion()->getValueAsString();
  }

bool ClientMatchJSON::hasIcon(void) const
  {
    return flagHasIcon;
  }

IconJSON * ClientMatchJSON::getIcon(void)
  {
    assert(flagHasIcon);
    return storeIcon;
  }

const IconJSON * ClientMatchJSON::getIcon(void) const
  {
    assert(flagHasIcon);
    return storeIcon;
  }

IconJSON::TypeValue ClientMatchJSON::getIconValue(void)
  {
    return getIcon()->getValue();
  }

const IconJSON::TypeValue ClientMatchJSON::getIconValue(void) const
  {
    return getIcon()->getValue();
  }

const char *ClientMatchJSON::getIconAsChars(void) const
  {
    return getIcon()->getValueAsChars();
  }

std::string ClientMatchJSON::getIconAsString(void) const
  {
    return getIcon()->getValueAsString();
  }

ClientMatchJSON *ClientMatchJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ClientMatchJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ClientMatchJSON>, ClientMatchJSON *, bool> generator("Type ClientMatch", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
