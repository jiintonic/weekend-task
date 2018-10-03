/* file "DynamicResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DYNAMICRESPONSEJSON_H
#define DYNAMICRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "ConversationStateJSON.h"
#include "TemplateJSON.h"
#include "TemplateJSON.h"
#include "HintsJSON.h"
#include "EmotionJSON.h"
#include "IconJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DynamicResponseJSON : public ReferenceCounted
  {
  public:
    enum TypeViewType
      {
        ViewType_Native,
        ViewType_Template,
        ViewType_HTML,
        ViewType_None,
        ViewType_Error
      };

    static TypeViewType  stringToViewType(const char *chars);
    static const char * stringFromViewType(TypeViewType the_enum);

  private:
    bool flagHasSpokenResponse;
    std::string storeSpokenResponse;
    bool flagHasSpokenResponseLong;
    std::string storeSpokenResponseLong;
    bool flagHasWrittenResponse;
    std::string storeWrittenResponse;
    bool flagHasWrittenResponseLong;
    std::string storeWrittenResponseLong;
    bool flagHasSpokenResponseSSML;
    std::string storeSpokenResponseSSML;
    bool flagHasSpokenResponseSSMLLong;
    std::string storeSpokenResponseSSMLLong;
    bool flagHasAutoListen;
    bool storeAutoListen;
    bool flagHasUserVisibleMode;
    std::string storeUserVisibleMode;
    bool flagHasConversationState;
    ConversationStateJSON * storeConversationState;
    bool flagHasViewType;
    std::vector< TypeViewType > storeViewType;
    bool flagHasTemplateName;
    std::string storeTemplateName;
    bool flagHasTemplateData;
    TemplateJSON * storeTemplateData;
    bool flagHasCombiningTemplateData;
    TemplateJSON * storeCombiningTemplateData;
    bool flagHasSmallScreenHTML;
    std::string storeSmallScreenHTML;
    bool flagHasLargeScreenHTML;
    std::string storeLargeScreenHTML;
    bool flagHasHints;
    HintsJSON * storeHints;
    bool flagHasEmotion;
    EmotionJSON * storeEmotion;
    bool flagHasIcon;
    IconJSON * storeIcon;
    bool flagHasResponseAudioBytes;
    std::string storeResponseAudioBytes;
    bool flagHasResponseAudioError;
    std::string storeResponseAudioError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    DynamicResponseJSON(const DynamicResponseJSON &);
    DynamicResponseJSON & operator=(const DynamicResponseJSON &other);

    void  fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUserVisibleMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConversationState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONViewType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIcon(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras = false);


  public:
    DynamicResponseJSON(void);
    virtual ~DynamicResponseJSON(void);
    bool  hasSpokenResponse(void) const;
    std::string  getSpokenResponse(void);
    const std::string  getSpokenResponse(void) const;
    bool  hasSpokenResponseLong(void) const;
    std::string  getSpokenResponseLong(void);
    const std::string  getSpokenResponseLong(void) const;
    bool  hasWrittenResponse(void) const;
    std::string  getWrittenResponse(void);
    const std::string  getWrittenResponse(void) const;
    bool  hasWrittenResponseLong(void) const;
    std::string  getWrittenResponseLong(void);
    const std::string  getWrittenResponseLong(void) const;
    bool  hasSpokenResponseSSML(void) const;
    std::string  getSpokenResponseSSML(void);
    const std::string  getSpokenResponseSSML(void) const;
    bool  hasSpokenResponseSSMLLong(void) const;
    std::string  getSpokenResponseSSMLLong(void);
    const std::string  getSpokenResponseSSMLLong(void) const;
    bool  hasAutoListen(void) const;
    bool  getAutoListen(void);
    const bool  getAutoListen(void) const;
    bool  hasUserVisibleMode(void) const;
    std::string  getUserVisibleMode(void);
    const std::string  getUserVisibleMode(void) const;
    bool  hasConversationState(void) const;
    ConversationStateJSON *  getConversationState(void);
    const ConversationStateJSON *  getConversationState(void) const;
    bool  hasViewType(void) const;
    size_t  countOfViewType(void) const;
    TypeViewType  elementOfViewType(size_t element_num);
    const TypeViewType  elementOfViewType(size_t element_num) const;
    std::vector< TypeViewType >  getViewType(void);
    const std::vector< TypeViewType >  getViewType(void) const;
    bool  hasTemplateName(void) const;
    std::string  getTemplateName(void);
    const std::string  getTemplateName(void) const;
    bool  hasTemplateData(void) const;
    TemplateJSON *  getTemplateData(void);
    const TemplateJSON *  getTemplateData(void) const;
    bool  hasCombiningTemplateData(void) const;
    TemplateJSON *  getCombiningTemplateData(void);
    const TemplateJSON *  getCombiningTemplateData(void) const;
    bool  hasSmallScreenHTML(void) const;
    std::string  getSmallScreenHTML(void);
    const std::string  getSmallScreenHTML(void) const;
    bool  hasLargeScreenHTML(void) const;
    std::string  getLargeScreenHTML(void);
    const std::string  getLargeScreenHTML(void) const;
    bool  hasHints(void) const;
    HintsJSON *  getHints(void);
    const HintsJSON *  getHints(void) const;
    bool  hasEmotion(void) const;
    EmotionJSON *  getEmotion(void);
    const EmotionJSON *  getEmotion(void) const;
    EmotionJSON::TypeValue  getEmotionValue(void);
    const EmotionJSON::TypeValue  getEmotionValue(void) const;
    const char * getEmotionAsChars(void) const;
    std::string  getEmotionAsString(void) const;
    bool  hasIcon(void) const;
    IconJSON *  getIcon(void);
    const IconJSON *  getIcon(void) const;
    IconJSON::TypeValue  getIconValue(void);
    const IconJSON::TypeValue  getIconValue(void) const;
    const char * getIconAsChars(void) const;
    std::string  getIconAsString(void) const;
    bool  hasResponseAudioBytes(void) const;
    std::string  getResponseAudioBytes(void);
    const std::string  getResponseAudioBytes(void) const;
    bool  hasResponseAudioError(void) const;
    std::string  getResponseAudioError(void);
    const std::string  getResponseAudioError(void) const;

    virtual size_t extraDynamicResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDynamicResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDynamicResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDynamicResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDynamicResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDynamicResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpokenResponse(std::string new_value)
      {
        flagHasSpokenResponse = true;
        storeSpokenResponse = new_value;
      }
    void unsetSpokenResponse(void)
      {
        flagHasSpokenResponse = false;
      }
    void setSpokenResponseLong(std::string new_value)
      {
        flagHasSpokenResponseLong = true;
        storeSpokenResponseLong = new_value;
      }
    void unsetSpokenResponseLong(void)
      {
        flagHasSpokenResponseLong = false;
      }
    void setWrittenResponse(std::string new_value)
      {
        flagHasWrittenResponse = true;
        storeWrittenResponse = new_value;
      }
    void unsetWrittenResponse(void)
      {
        flagHasWrittenResponse = false;
      }
    void setWrittenResponseLong(std::string new_value)
      {
        flagHasWrittenResponseLong = true;
        storeWrittenResponseLong = new_value;
      }
    void unsetWrittenResponseLong(void)
      {
        flagHasWrittenResponseLong = false;
      }
    void setSpokenResponseSSML(std::string new_value)
      {
        flagHasSpokenResponseSSML = true;
        storeSpokenResponseSSML = new_value;
      }
    void unsetSpokenResponseSSML(void)
      {
        flagHasSpokenResponseSSML = false;
      }
    void setSpokenResponseSSMLLong(std::string new_value)
      {
        flagHasSpokenResponseSSMLLong = true;
        storeSpokenResponseSSMLLong = new_value;
      }
    void unsetSpokenResponseSSMLLong(void)
      {
        flagHasSpokenResponseSSMLLong = false;
      }
    void setAutoListen(bool new_value)
      {
        flagHasAutoListen = true;
        storeAutoListen = new_value;
      }
    void unsetAutoListen(void)
      {
        flagHasAutoListen = false;
      }
    void setUserVisibleMode(std::string new_value)
      {
        flagHasUserVisibleMode = true;
        storeUserVisibleMode = new_value;
      }
    void unsetUserVisibleMode(void)
      {
        flagHasUserVisibleMode = false;
      }
    void setConversationState(ConversationStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasConversationState)
          {
            storeConversationState->remove_reference();
          }
        flagHasConversationState = true;
        storeConversationState = new_value;
      }
    void unsetConversationState(void)
      {
        if (flagHasConversationState)
          {
            storeConversationState->remove_reference();
          }
        flagHasConversationState = false;
      }
    void initViewType(void)
      {
        flagHasViewType = true;
        storeViewType.clear();
      }
    void appendViewType(TypeViewType to_append)
      {
        if (!flagHasViewType)
          {
            flagHasViewType = true;
            storeViewType.clear();
          }
        assert(flagHasViewType);
        storeViewType.push_back(to_append);
      }
    void appendViewType(const char *chars)
      {
        appendViewType(stringToViewType(chars));
      }
    void appendViewType(std::string the_string)
      {
        appendViewType(stringToViewType(the_string.c_str()));
      }
    void unsetViewType(void)
      {
        flagHasViewType = false;
        storeViewType.clear();
      }
    void setTemplateName(std::string new_value)
      {
        flagHasTemplateName = true;
        storeTemplateName = new_value;
      }
    void unsetTemplateName(void)
      {
        flagHasTemplateName = false;
      }
    void setTemplateData(TemplateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTemplateData)
          {
            storeTemplateData->remove_reference();
          }
        flagHasTemplateData = true;
        storeTemplateData = new_value;
      }
    void unsetTemplateData(void)
      {
        if (flagHasTemplateData)
          {
            storeTemplateData->remove_reference();
          }
        flagHasTemplateData = false;
      }
    void setCombiningTemplateData(TemplateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCombiningTemplateData)
          {
            storeCombiningTemplateData->remove_reference();
          }
        flagHasCombiningTemplateData = true;
        storeCombiningTemplateData = new_value;
      }
    void unsetCombiningTemplateData(void)
      {
        if (flagHasCombiningTemplateData)
          {
            storeCombiningTemplateData->remove_reference();
          }
        flagHasCombiningTemplateData = false;
      }
    void setSmallScreenHTML(std::string new_value)
      {
        flagHasSmallScreenHTML = true;
        storeSmallScreenHTML = new_value;
      }
    void unsetSmallScreenHTML(void)
      {
        flagHasSmallScreenHTML = false;
      }
    void setLargeScreenHTML(std::string new_value)
      {
        flagHasLargeScreenHTML = true;
        storeLargeScreenHTML = new_value;
      }
    void unsetLargeScreenHTML(void)
      {
        flagHasLargeScreenHTML = false;
      }
    void setHints(HintsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHints)
          {
            storeHints->remove_reference();
          }
        flagHasHints = true;
        storeHints = new_value;
      }
    void unsetHints(void)
      {
        if (flagHasHints)
          {
            storeHints->remove_reference();
          }
        flagHasHints = false;
      }
    void setEmotion(EmotionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEmotion)
          {
            storeEmotion->remove_reference();
          }
        flagHasEmotion = true;
        storeEmotion = new_value;
      }
    void setEmotion(EmotionJSON::TypeValue new_value)
      {
        setEmotion(new EmotionJSON(new_value));
      }
    void setEmotion(const char *chars)
      {
        setEmotion(new EmotionJSON(chars));
      }
    void setEmotion(std::string the_string)
      {
        setEmotion(new EmotionJSON(the_string));
      }
    void unsetEmotion(void)
      {
        if (flagHasEmotion)
          {
            storeEmotion->remove_reference();
          }
        flagHasEmotion = false;
      }
    void setIcon(IconJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasIcon)
          {
            storeIcon->remove_reference();
          }
        flagHasIcon = true;
        storeIcon = new_value;
      }
    void setIcon(IconJSON::TypeValue new_value)
      {
        setIcon(new IconJSON(new_value));
      }
    void setIcon(const char *chars)
      {
        setIcon(new IconJSON(chars));
      }
    void setIcon(std::string the_string)
      {
        setIcon(new IconJSON(the_string));
      }
    void unsetIcon(void)
      {
        if (flagHasIcon)
          {
            storeIcon->remove_reference();
          }
        flagHasIcon = false;
      }
    void setResponseAudioBytes(std::string new_value)
      {
        flagHasResponseAudioBytes = true;
        storeResponseAudioBytes = new_value;
      }
    void unsetResponseAudioBytes(void)
      {
        flagHasResponseAudioBytes = false;
      }
    void setResponseAudioError(std::string new_value)
      {
        flagHasResponseAudioError = true;
        storeResponseAudioError = new_value;
      }
    void unsetResponseAudioError(void)
      {
        flagHasResponseAudioError = false;
      }

    virtual void extraDynamicResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDynamicResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDynamicResponseLookup(key);
        if (old_field == NULL)
          {
            extraDynamicResponseAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
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

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasSpokenResponse);
        handler->start_pair("SpokenResponse");
        handler->string_value(storeSpokenResponse);
        assert(flagHasSpokenResponseLong);
        handler->start_pair("SpokenResponseLong");
        handler->string_value(storeSpokenResponseLong);
        assert(flagHasWrittenResponse);
        handler->start_pair("WrittenResponse");
        handler->string_value(storeWrittenResponse);
        assert(flagHasWrittenResponseLong);
        handler->start_pair("WrittenResponseLong");
        handler->string_value(storeWrittenResponseLong);
        if (flagHasSpokenResponseSSML)
          {
            handler->start_pair("SpokenResponseSSML");
            handler->string_value(storeSpokenResponseSSML);
          }
        if (flagHasSpokenResponseSSMLLong)
          {
            handler->start_pair("SpokenResponseSSMLLong");
            handler->string_value(storeSpokenResponseSSMLLong);
          }
        if (flagHasAutoListen)
          {
            handler->start_pair("AutoListen");
            handler->boolean_value(storeAutoListen);
          }
        if (flagHasUserVisibleMode)
          {
            handler->start_pair("UserVisibleMode");
            handler->string_value(storeUserVisibleMode);
          }
        if (flagHasConversationState)
          {
            handler->start_pair("ConversationState");
            storeConversationState->write_as_json(handler);
          }
        if (flagHasViewType)
          {
            handler->start_pair("ViewType");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeViewType.size(); ++num1)
              {
                switch (storeViewType[num1])
                  {
                    case ViewType_Native:
                        handler->string_value("Native");
                        break;
                    case ViewType_Template:
                        handler->string_value("Template");
                        break;
                    case ViewType_HTML:
                        handler->string_value("HTML");
                        break;
                    case ViewType_None:
                        handler->string_value("None");
                        break;
                    case ViewType_Error:
                        handler->string_value("Error");
                        break;
                    default:
                        assert(false);
                  }
              }
            handler->finish_array();
          }
        if (flagHasTemplateName)
          {
            handler->start_pair("TemplateName");
            handler->string_value(storeTemplateName);
          }
        if (flagHasTemplateData)
          {
            handler->start_pair("TemplateData");
            storeTemplateData->write_as_json(handler);
          }
        if (flagHasCombiningTemplateData)
          {
            handler->start_pair("CombiningTemplateData");
            storeCombiningTemplateData->write_as_json(handler);
          }
        if (flagHasSmallScreenHTML)
          {
            handler->start_pair("SmallScreenHTML");
            handler->string_value(storeSmallScreenHTML);
          }
        if (flagHasLargeScreenHTML)
          {
            handler->start_pair("LargeScreenHTML");
            handler->string_value(storeLargeScreenHTML);
          }
        if (flagHasHints)
          {
            handler->start_pair("Hints");
            storeHints->write_as_json(handler);
          }
        if (flagHasEmotion)
          {
            handler->start_pair("Emotion");
            storeEmotion->write_as_json(handler);
          }
        if (flagHasIcon)
          {
            handler->start_pair("Icon");
            storeIcon->write_as_json(handler);
          }
        if (flagHasResponseAudioBytes)
          {
            handler->start_pair("ResponseAudioBytes");
            handler->string_value(storeResponseAudioBytes);
          }
        if (flagHasResponseAudioError)
          {
            handler->start_pair("ResponseAudioError");
            handler->string_value(storeResponseAudioError);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpokenResponse()))
          {
            return "When parsing the object for %what%, the \"SpokenResponse\" field was missing.";
          }
        if (!(hasSpokenResponseLong()))
          {
            return "When parsing the object for %what%, the \"SpokenResponseLong\" field was missing.";
          }
        if (!(hasWrittenResponse()))
          {
            return "When parsing the object for %what%, the \"WrittenResponse\" field was missing.";
          }
        if (!(hasWrittenResponseLong()))
          {
            return "When parsing the object for %what%, the \"WrittenResponseLong\" field was missing.";
          }
        return NULL;
      }

    static DynamicResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DynamicResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DynamicResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool> generator("Type DynamicResponse", ignore_extras);
            parse_json_value(text, "Text for DynamicResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DynamicResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DynamicResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool> generator("Type DynamicResponse", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSMLLong;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUserVisibleMode;
        JSONHoldingGenerator<ConversationStateJSON::Generator, RCHandle<ConversationStateJSON>, ConversationStateJSON *, bool > fieldGeneratorConversationState;
    class FieldGeneratorViewType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorViewType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorViewType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToViewType(result));
              }
            virtual void handle_result(TypeViewType result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorViewType, TypeViewType, TypeViewType > fieldGeneratorViewType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTemplateName;
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorTemplateData;
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorCombiningTemplateData;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSmallScreenHTML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLargeScreenHTML;
        JSONHoldingGenerator<HintsJSON::Generator, RCHandle<HintsJSON>, HintsJSON *, bool > fieldGeneratorHints;
        JSONHoldingGenerator<EmotionJSON::Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool > fieldGeneratorEmotion;
        JSONHoldingGenerator<IconJSON::Generator, RCHandle<IconJSON>, IconJSON *, bool > fieldGeneratorIcon;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioBytes;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioError;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            DynamicResponseJSON *result = new DynamicResponseJSON();
            assert(result != NULL);
            RCHandle<DynamicResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDynamicResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(DynamicResponseJSON *result)
          {
            if (fieldGeneratorSpokenResponse.have_value)
              {
                result->setSpokenResponse(fieldGeneratorSpokenResponse.value);
                fieldGeneratorSpokenResponse.have_value = false;
              }
            else if (!(result->hasSpokenResponse()))
              {
                error("When parsing the object for %what%, the \"SpokenResponse\" field was missing.");
              }
            if (fieldGeneratorSpokenResponseLong.have_value)
              {
                result->setSpokenResponseLong(fieldGeneratorSpokenResponseLong.value);
                fieldGeneratorSpokenResponseLong.have_value = false;
              }
            else if (!(result->hasSpokenResponseLong()))
              {
                error("When parsing the object for %what%, the \"SpokenResponseLong\" field was missing.");
              }
            if (fieldGeneratorWrittenResponse.have_value)
              {
                result->setWrittenResponse(fieldGeneratorWrittenResponse.value);
                fieldGeneratorWrittenResponse.have_value = false;
              }
            else if (!(result->hasWrittenResponse()))
              {
                error("When parsing the object for %what%, the \"WrittenResponse\" field was missing.");
              }
            if (fieldGeneratorWrittenResponseLong.have_value)
              {
                result->setWrittenResponseLong(fieldGeneratorWrittenResponseLong.value);
                fieldGeneratorWrittenResponseLong.have_value = false;
              }
            else if (!(result->hasWrittenResponseLong()))
              {
                error("When parsing the object for %what%, the \"WrittenResponseLong\" field was missing.");
              }
            if (fieldGeneratorSpokenResponseSSML.have_value)
              {
                result->setSpokenResponseSSML(fieldGeneratorSpokenResponseSSML.value);
                fieldGeneratorSpokenResponseSSML.have_value = false;
              }
            if (fieldGeneratorSpokenResponseSSMLLong.have_value)
              {
                result->setSpokenResponseSSMLLong(fieldGeneratorSpokenResponseSSMLLong.value);
                fieldGeneratorSpokenResponseSSMLLong.have_value = false;
              }
            if (fieldGeneratorAutoListen.have_value)
              {
                result->setAutoListen(fieldGeneratorAutoListen.value);
                fieldGeneratorAutoListen.have_value = false;
              }
            if (fieldGeneratorUserVisibleMode.have_value)
              {
                result->setUserVisibleMode(fieldGeneratorUserVisibleMode.value);
                fieldGeneratorUserVisibleMode.have_value = false;
              }
            if (fieldGeneratorConversationState.have_value)
              {
                result->setConversationState(fieldGeneratorConversationState.value.referenced());
                fieldGeneratorConversationState.have_value = false;
              }
            if (fieldGeneratorViewType.have_value)
              {
                result->initViewType();
                size_t count = fieldGeneratorViewType.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendViewType(fieldGeneratorViewType.value[num]);
                  }
                fieldGeneratorViewType.value.clear();
                fieldGeneratorViewType.have_value = false;
              }
            if (fieldGeneratorTemplateName.have_value)
              {
                result->setTemplateName(fieldGeneratorTemplateName.value);
                fieldGeneratorTemplateName.have_value = false;
              }
            if (fieldGeneratorTemplateData.have_value)
              {
                result->setTemplateData(fieldGeneratorTemplateData.value.referenced());
                fieldGeneratorTemplateData.have_value = false;
              }
            if (fieldGeneratorCombiningTemplateData.have_value)
              {
                result->setCombiningTemplateData(fieldGeneratorCombiningTemplateData.value.referenced());
                fieldGeneratorCombiningTemplateData.have_value = false;
              }
            if (fieldGeneratorSmallScreenHTML.have_value)
              {
                result->setSmallScreenHTML(fieldGeneratorSmallScreenHTML.value);
                fieldGeneratorSmallScreenHTML.have_value = false;
              }
            if (fieldGeneratorLargeScreenHTML.have_value)
              {
                result->setLargeScreenHTML(fieldGeneratorLargeScreenHTML.value);
                fieldGeneratorLargeScreenHTML.have_value = false;
              }
            if (fieldGeneratorHints.have_value)
              {
                result->setHints(fieldGeneratorHints.value.referenced());
                fieldGeneratorHints.have_value = false;
              }
            if (fieldGeneratorEmotion.have_value)
              {
                result->setEmotion(fieldGeneratorEmotion.value.referenced());
                fieldGeneratorEmotion.have_value = false;
              }
            if (fieldGeneratorIcon.have_value)
              {
                result->setIcon(fieldGeneratorIcon.value.referenced());
                fieldGeneratorIcon.have_value = false;
              }
            if (fieldGeneratorResponseAudioBytes.have_value)
              {
                result->setResponseAudioBytes(fieldGeneratorResponseAudioBytes.value);
                fieldGeneratorResponseAudioBytes.have_value = false;
              }
            if (fieldGeneratorResponseAudioError.have_value)
              {
                result->setResponseAudioError(fieldGeneratorResponseAudioError.value);
                fieldGeneratorResponseAudioError.have_value = false;
              }
          }
        virtual void handle_result(DynamicResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "utoListen") == 0)
                        return &fieldGeneratorAutoListen;
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'm':
                                if (strcmp(&(field_name[3]), "biningTemplateData") == 0)
                                    return &fieldGeneratorCombiningTemplateData;
                                break;
                            case 'n':
                                if (strcmp(&(field_name[3]), "versationState") == 0)
                                    return &fieldGeneratorConversationState;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "motion") == 0)
                        return &fieldGeneratorEmotion;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ints") == 0)
                        return &fieldGeneratorHints;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "con") == 0)
                        return &fieldGeneratorIcon;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "argeScreenHTML") == 0)
                        return &fieldGeneratorLargeScreenHTML;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "esponseAudio", 12) == 0)
                      {
                        switch ((unsigned char)(field_name[13]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[14]), "ytes") == 0)
                                    return &fieldGeneratorResponseAudioBytes;
                                break;
                            case 'E':
                                if (strcmp(&(field_name[14]), "rror") == 0)
                                    return &fieldGeneratorResponseAudioError;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "allScreenHTML") == 0)
                                return &fieldGeneratorSmallScreenHTML;
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "okenResponse", 12) == 0)
                              {
                                switch ((unsigned char)(field_name[14]))
                                  {
                                    case 0:
                                        return &fieldGeneratorSpokenResponse;
                                    case 'L':
                                        if (strcmp(&(field_name[15]), "ong") == 0)
                                            return &fieldGeneratorSpokenResponseLong;
                                        break;
                                    case 'S':
                                        if (strncmp(&(field_name[15]), "SML", 3) == 0)
                                          {
                                            switch ((unsigned char)(field_name[18]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorSpokenResponseSSML;
                                                case 'L':
                                                    if (strcmp(&(field_name[19]), "ong") == 0)
                                                        return &fieldGeneratorSpokenResponseSSMLLong;
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
                    if (strncmp(&(field_name[1]), "emplate", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[9]), "ata") == 0)
                                    return &fieldGeneratorTemplateData;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[9]), "ame") == 0)
                                    return &fieldGeneratorTemplateName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "serVisibleMode") == 0)
                        return &fieldGeneratorUserVisibleMode;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "iewType") == 0)
                        return &fieldGeneratorViewType;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "rittenResponse", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 0:
                                return &fieldGeneratorWrittenResponse;
                            case 'L':
                                if (strcmp(&(field_name[16]), "ong") == 0)
                                    return &fieldGeneratorWrittenResponseLong;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenResponse("field \"SpokenResponse\" of the DynamicResponse class"), fieldGeneratorSpokenResponseLong("field \"SpokenResponseLong\" of the DynamicResponse class"), fieldGeneratorWrittenResponse("field \"WrittenResponse\" of the DynamicResponse class"), fieldGeneratorWrittenResponseLong("field \"WrittenResponseLong\" of the DynamicResponse class"), fieldGeneratorSpokenResponseSSML("field \"SpokenResponseSSML\" of the DynamicResponse class"), fieldGeneratorSpokenResponseSSMLLong("field \"SpokenResponseSSMLLong\" of the DynamicResponse class"), fieldGeneratorAutoListen("field \"AutoListen\" of the DynamicResponse class"), fieldGeneratorUserVisibleMode("field \"UserVisibleMode\" of the DynamicResponse class"), fieldGeneratorConversationState("field \"ConversationState\" of the DynamicResponse class", ignore_extras), fieldGeneratorViewType("field \"ViewType\" of the DynamicResponse class"), fieldGeneratorTemplateName("field \"TemplateName\" of the DynamicResponse class"), fieldGeneratorTemplateData("field \"TemplateData\" of the DynamicResponse class", ignore_extras), fieldGeneratorCombiningTemplateData("field \"CombiningTemplateData\" of the DynamicResponse class", ignore_extras), fieldGeneratorSmallScreenHTML("field \"SmallScreenHTML\" of the DynamicResponse class"), fieldGeneratorLargeScreenHTML("field \"LargeScreenHTML\" of the DynamicResponse class"), fieldGeneratorHints("field \"Hints\" of the DynamicResponse class", ignore_extras), fieldGeneratorEmotion("field \"Emotion\" of the DynamicResponse class", ignore_extras), fieldGeneratorIcon("field \"Icon\" of the DynamicResponse class", ignore_extras), fieldGeneratorResponseAudioBytes("field \"ResponseAudioBytes\" of the DynamicResponse class"), fieldGeneratorResponseAudioError("field \"ResponseAudioError\" of the DynamicResponse class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DynamicResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpokenResponse.reset();
            fieldGeneratorSpokenResponseLong.reset();
            fieldGeneratorWrittenResponse.reset();
            fieldGeneratorWrittenResponseLong.reset();
            fieldGeneratorSpokenResponseSSML.reset();
            fieldGeneratorSpokenResponseSSMLLong.reset();
            fieldGeneratorAutoListen.reset();
            fieldGeneratorUserVisibleMode.reset();
            fieldGeneratorConversationState.reset();
            fieldGeneratorViewType.reset();
            fieldGeneratorTemplateName.reset();
            fieldGeneratorTemplateData.reset();
            fieldGeneratorCombiningTemplateData.reset();
            fieldGeneratorSmallScreenHTML.reset();
            fieldGeneratorLargeScreenHTML.reset();
            fieldGeneratorHints.reset();
            fieldGeneratorEmotion.reset();
            fieldGeneratorIcon.reset();
            fieldGeneratorResponseAudioBytes.reset();
            fieldGeneratorResponseAudioError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* DYNAMICRESPONSEJSON_H */
