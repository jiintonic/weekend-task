/* file "DynamicResponseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DynamicResponseJSON.h"

#include "DynamicResponseJSON.h"


DynamicResponseJSON::TypeViewType DynamicResponseJSON::stringToViewType(const char *chars)
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

const char *DynamicResponseJSON::stringFromViewType(TypeViewType the_enum)
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

DynamicResponseJSON::DynamicResponseJSON(const DynamicResponseJSON &)
  {
    assert(false);
  }

DynamicResponseJSON &DynamicResponseJSON::operator=(const DynamicResponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DynamicResponseJSON::fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponse of DynamicResponseJSON is not a string.");
    setSpokenResponse(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseLong of DynamicResponseJSON is not a string.");
    setSpokenResponseLong(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponse of DynamicResponseJSON is not a string.");
    setWrittenResponse(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseLong of DynamicResponseJSON is not a string.");
    setWrittenResponseLong(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSML of DynamicResponseJSON is not a string.");
    setSpokenResponseSSML(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSMLLong of DynamicResponseJSON is not a string.");
    setSpokenResponseSSMLLong(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of DynamicResponseJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void DynamicResponseJSON::fromJSONUserVisibleMode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserVisibleMode of DynamicResponseJSON is not a string.");
    setUserVisibleMode(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONConversationState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ConversationStateJSON *convert_classy = ConversationStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConversationState(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONViewType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ViewType of DynamicResponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeViewType > vector_ViewType1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ViewType of DynamicResponseJSON is not a string.");
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
        throw("The value for an element of field ViewType of DynamicResponseJSON is not one of the legal strings.");
      enum_is_done:;
        vector_ViewType1[num1] = the_enum;
      }
    initViewType();
    for (size_t num2 = 0; num2 < vector_ViewType1.size(); ++num2)
        appendViewType(vector_ViewType1[num2]);
    for (size_t num1 = 0; num1 < vector_ViewType1.size(); ++num1)
      {
      }
  }

void DynamicResponseJSON::fromJSONTemplateName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TemplateName of DynamicResponseJSON is not a string.");
    setTemplateName(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCombiningTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SmallScreenHTML of DynamicResponseJSON is not a string.");
    setSmallScreenHTML(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LargeScreenHTML of DynamicResponseJSON is not a string.");
    setLargeScreenHTML(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HintsJSON *convert_classy = HintsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHints(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONEmotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmotionJSON *convert_classy = EmotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmotion(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONIcon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IconJSON *convert_classy = IconJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIcon(convert_classy);
    convert_classy->remove_reference();
  }

void DynamicResponseJSON::fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioBytes of DynamicResponseJSON is not a string.");
    setResponseAudioBytes(std::string(json_string->getData()));
  }

void DynamicResponseJSON::fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioError of DynamicResponseJSON is not a string.");
    setResponseAudioError(std::string(json_string->getData()));
  }

DynamicResponseJSON::DynamicResponseJSON(void) :
        flagHasSpokenResponse(false),
        flagHasSpokenResponseLong(false),
        flagHasWrittenResponse(false),
        flagHasWrittenResponseLong(false),
        flagHasSpokenResponseSSML(false),
        flagHasSpokenResponseSSMLLong(false),
        flagHasAutoListen(false),
        flagHasUserVisibleMode(false),
        flagHasConversationState(false),
        flagHasViewType(false),
        flagHasTemplateName(false),
        flagHasTemplateData(false),
        flagHasCombiningTemplateData(false),
        flagHasSmallScreenHTML(false),
        flagHasLargeScreenHTML(false),
        flagHasHints(false),
        flagHasEmotion(false),
        flagHasIcon(false),
        flagHasResponseAudioBytes(false),
        flagHasResponseAudioError(false)
  {
    storeAutoListen = false;
    TypeViewType element7;
    element7 = ViewType_Native;
    storeViewType.push_back(element7);
    TypeViewType element8;
    element8 = ViewType_Template;
    storeViewType.push_back(element8);
    TypeViewType element9;
    element9 = ViewType_HTML;
    storeViewType.push_back(element9);
    TypeViewType element10;
    element10 = ViewType_None;
    storeViewType.push_back(element10);
    extraIndex = create_string_index();
  }

DynamicResponseJSON::~DynamicResponseJSON(void)
  {
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

bool DynamicResponseJSON::hasSpokenResponse(void) const
  {
    return flagHasSpokenResponse;
  }

std::string DynamicResponseJSON::getSpokenResponse(void)
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

const std::string DynamicResponseJSON::getSpokenResponse(void) const
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

bool DynamicResponseJSON::hasSpokenResponseLong(void) const
  {
    return flagHasSpokenResponseLong;
  }

std::string DynamicResponseJSON::getSpokenResponseLong(void)
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

const std::string DynamicResponseJSON::getSpokenResponseLong(void) const
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

bool DynamicResponseJSON::hasWrittenResponse(void) const
  {
    return flagHasWrittenResponse;
  }

std::string DynamicResponseJSON::getWrittenResponse(void)
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

const std::string DynamicResponseJSON::getWrittenResponse(void) const
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

bool DynamicResponseJSON::hasWrittenResponseLong(void) const
  {
    return flagHasWrittenResponseLong;
  }

std::string DynamicResponseJSON::getWrittenResponseLong(void)
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

const std::string DynamicResponseJSON::getWrittenResponseLong(void) const
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

bool DynamicResponseJSON::hasSpokenResponseSSML(void) const
  {
    return flagHasSpokenResponseSSML;
  }

std::string DynamicResponseJSON::getSpokenResponseSSML(void)
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

const std::string DynamicResponseJSON::getSpokenResponseSSML(void) const
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

bool DynamicResponseJSON::hasSpokenResponseSSMLLong(void) const
  {
    return flagHasSpokenResponseSSMLLong;
  }

std::string DynamicResponseJSON::getSpokenResponseSSMLLong(void)
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

const std::string DynamicResponseJSON::getSpokenResponseSSMLLong(void) const
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

bool DynamicResponseJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool DynamicResponseJSON::getAutoListen(void)
  {
    return storeAutoListen;
  }

const bool DynamicResponseJSON::getAutoListen(void) const
  {
    return storeAutoListen;
  }

bool DynamicResponseJSON::hasUserVisibleMode(void) const
  {
    return flagHasUserVisibleMode;
  }

std::string DynamicResponseJSON::getUserVisibleMode(void)
  {
    assert(flagHasUserVisibleMode);
    return storeUserVisibleMode;
  }

const std::string DynamicResponseJSON::getUserVisibleMode(void) const
  {
    assert(flagHasUserVisibleMode);
    return storeUserVisibleMode;
  }

bool DynamicResponseJSON::hasConversationState(void) const
  {
    return flagHasConversationState;
  }

ConversationStateJSON * DynamicResponseJSON::getConversationState(void)
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

const ConversationStateJSON * DynamicResponseJSON::getConversationState(void) const
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

bool DynamicResponseJSON::hasViewType(void) const
  {
    return flagHasViewType;
  }

size_t DynamicResponseJSON::countOfViewType(void) const
  {
    return storeViewType.size();
  }

DynamicResponseJSON::TypeViewType DynamicResponseJSON::elementOfViewType(size_t element_num)
  {
    return storeViewType[element_num];
  }

const DynamicResponseJSON::TypeViewType DynamicResponseJSON::elementOfViewType(size_t element_num) const
  {
    return storeViewType[element_num];
  }

std::vector< DynamicResponseJSON::TypeViewType > DynamicResponseJSON::getViewType(void)
  {
    return storeViewType;
  }

const std::vector< DynamicResponseJSON::TypeViewType > DynamicResponseJSON::getViewType(void) const
  {
    return storeViewType;
  }

bool DynamicResponseJSON::hasTemplateName(void) const
  {
    return flagHasTemplateName;
  }

std::string DynamicResponseJSON::getTemplateName(void)
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

const std::string DynamicResponseJSON::getTemplateName(void) const
  {
    assert(flagHasTemplateName);
    return storeTemplateName;
  }

bool DynamicResponseJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * DynamicResponseJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * DynamicResponseJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

bool DynamicResponseJSON::hasCombiningTemplateData(void) const
  {
    return flagHasCombiningTemplateData;
  }

TemplateJSON * DynamicResponseJSON::getCombiningTemplateData(void)
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

const TemplateJSON * DynamicResponseJSON::getCombiningTemplateData(void) const
  {
    assert(flagHasCombiningTemplateData);
    return storeCombiningTemplateData;
  }

bool DynamicResponseJSON::hasSmallScreenHTML(void) const
  {
    return flagHasSmallScreenHTML;
  }

std::string DynamicResponseJSON::getSmallScreenHTML(void)
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

const std::string DynamicResponseJSON::getSmallScreenHTML(void) const
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

bool DynamicResponseJSON::hasLargeScreenHTML(void) const
  {
    return flagHasLargeScreenHTML;
  }

std::string DynamicResponseJSON::getLargeScreenHTML(void)
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

const std::string DynamicResponseJSON::getLargeScreenHTML(void) const
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

bool DynamicResponseJSON::hasHints(void) const
  {
    return flagHasHints;
  }

HintsJSON * DynamicResponseJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const HintsJSON * DynamicResponseJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

bool DynamicResponseJSON::hasEmotion(void) const
  {
    return flagHasEmotion;
  }

EmotionJSON * DynamicResponseJSON::getEmotion(void)
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

const EmotionJSON * DynamicResponseJSON::getEmotion(void) const
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

EmotionJSON::TypeValue DynamicResponseJSON::getEmotionValue(void)
  {
    return getEmotion()->getValue();
  }

const EmotionJSON::TypeValue DynamicResponseJSON::getEmotionValue(void) const
  {
    return getEmotion()->getValue();
  }

const char *DynamicResponseJSON::getEmotionAsChars(void) const
  {
    return getEmotion()->getValueAsChars();
  }

std::string DynamicResponseJSON::getEmotionAsString(void) const
  {
    return getEmotion()->getValueAsString();
  }

bool DynamicResponseJSON::hasIcon(void) const
  {
    return flagHasIcon;
  }

IconJSON * DynamicResponseJSON::getIcon(void)
  {
    assert(flagHasIcon);
    return storeIcon;
  }

const IconJSON * DynamicResponseJSON::getIcon(void) const
  {
    assert(flagHasIcon);
    return storeIcon;
  }

IconJSON::TypeValue DynamicResponseJSON::getIconValue(void)
  {
    return getIcon()->getValue();
  }

const IconJSON::TypeValue DynamicResponseJSON::getIconValue(void) const
  {
    return getIcon()->getValue();
  }

const char *DynamicResponseJSON::getIconAsChars(void) const
  {
    return getIcon()->getValueAsChars();
  }

std::string DynamicResponseJSON::getIconAsString(void) const
  {
    return getIcon()->getValueAsString();
  }

bool DynamicResponseJSON::hasResponseAudioBytes(void) const
  {
    return flagHasResponseAudioBytes;
  }

std::string DynamicResponseJSON::getResponseAudioBytes(void)
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

const std::string DynamicResponseJSON::getResponseAudioBytes(void) const
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

bool DynamicResponseJSON::hasResponseAudioError(void) const
  {
    return flagHasResponseAudioError;
  }

std::string DynamicResponseJSON::getResponseAudioError(void)
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

const std::string DynamicResponseJSON::getResponseAudioError(void) const
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

DynamicResponseJSON *DynamicResponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DynamicResponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool> generator("Type DynamicResponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
