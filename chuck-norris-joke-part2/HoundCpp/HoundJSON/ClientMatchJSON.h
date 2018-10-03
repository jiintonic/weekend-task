/* file "ClientMatchJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CLIENTMATCHJSON_H
#define CLIENTMATCHJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "TemplateJSON.h"
#include "PreviewJSON.h"
#include "HTMLDataJSON.h"
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


class ClientMatchJSON : public ReferenceCounted
  {
  public:
    enum TypeExtendedBlock
      {
        ExtendedBlock_RAW_TOP_LEVEL_QUERY,
        ExtendedBlock_IMPERATIVE_PHRASE,
        ExtendedBlock_QUESTION,
        ExtendedBlock_SENTENCE
      };

    static TypeExtendedBlock  stringToExtendedBlock(const char *chars);
    static const char * stringFromExtendedBlock(TypeExtendedBlock the_enum);
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
    bool flagHasExpression;
    std::string storeExpression;
    bool flagHasResult;
    JSONValue * storeResult;
    bool flagHasExtendedBlock;
    TypeExtendedBlock storeExtendedBlock;
    bool flagHasResultIsInformationNugget;
    bool storeResultIsInformationNugget;
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
    bool flagHasSpokenResponsePattern;
    std::string storeSpokenResponsePattern;
    bool flagHasSpokenResponsePatternLong;
    std::string storeSpokenResponsePatternLong;
    bool flagHasWrittenResponsePattern;
    std::string storeWrittenResponsePattern;
    bool flagHasWrittenResponsePatternLong;
    std::string storeWrittenResponsePatternLong;
    bool flagHasSpokenResponsePatternSSML;
    std::string storeSpokenResponsePatternSSML;
    bool flagHasSpokenResponsePatternSSMLLong;
    std::string storeSpokenResponsePatternSSMLLong;
    bool flagHasAutoListen;
    bool storeAutoListen;
    bool flagHasViewType;
    std::vector< TypeViewType > storeViewType;
    bool flagHasTemplateData;
    TemplateJSON * storeTemplateData;
    bool flagHasPreview;
    PreviewJSON * storePreview;
    bool flagHasHTMLData;
    HTMLDataJSON * storeHTMLData;
    bool flagHasHints;
    HintsJSON * storeHints;
    bool flagHasEmotion;
    EmotionJSON * storeEmotion;
    bool flagHasIcon;
    IconJSON * storeIcon;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ClientMatchJSON(const ClientMatchJSON &);
    ClientMatchJSON & operator=(const ClientMatchJSON &other);

    void  fromJSONExpression(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExtendedBlock(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResultIsInformationNugget(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponsePattern(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponsePatternLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponsePattern(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponsePatternLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponsePatternSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponsePatternSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONViewType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHTMLData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIcon(JSONValue *json_value, bool ignore_extras = false);


  public:
    ClientMatchJSON(void);
    virtual ~ClientMatchJSON(void);
    bool  hasExpression(void) const;
    std::string  getExpression(void);
    const std::string  getExpression(void) const;
    bool  hasResult(void) const;
    JSONValue *  getResult(void);
    const JSONValue *  getResult(void) const;
    bool  hasExtendedBlock(void) const;
    TypeExtendedBlock  getExtendedBlock(void);
    const TypeExtendedBlock  getExtendedBlock(void) const;
    const char * getExtendedBlockAsChars(void) const;
    std::string  getExtendedBlockAsString(void) const;
    bool  hasResultIsInformationNugget(void) const;
    bool  getResultIsInformationNugget(void);
    const bool  getResultIsInformationNugget(void) const;
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
    bool  hasSpokenResponsePattern(void) const;
    std::string  getSpokenResponsePattern(void);
    const std::string  getSpokenResponsePattern(void) const;
    bool  hasSpokenResponsePatternLong(void) const;
    std::string  getSpokenResponsePatternLong(void);
    const std::string  getSpokenResponsePatternLong(void) const;
    bool  hasWrittenResponsePattern(void) const;
    std::string  getWrittenResponsePattern(void);
    const std::string  getWrittenResponsePattern(void) const;
    bool  hasWrittenResponsePatternLong(void) const;
    std::string  getWrittenResponsePatternLong(void);
    const std::string  getWrittenResponsePatternLong(void) const;
    bool  hasSpokenResponsePatternSSML(void) const;
    std::string  getSpokenResponsePatternSSML(void);
    const std::string  getSpokenResponsePatternSSML(void) const;
    bool  hasSpokenResponsePatternSSMLLong(void) const;
    std::string  getSpokenResponsePatternSSMLLong(void);
    const std::string  getSpokenResponsePatternSSMLLong(void) const;
    bool  hasAutoListen(void) const;
    bool  getAutoListen(void);
    const bool  getAutoListen(void) const;
    bool  hasViewType(void) const;
    size_t  countOfViewType(void) const;
    TypeViewType  elementOfViewType(size_t element_num);
    const TypeViewType  elementOfViewType(size_t element_num) const;
    std::vector< TypeViewType >  getViewType(void);
    const std::vector< TypeViewType >  getViewType(void) const;
    bool  hasTemplateData(void) const;
    TemplateJSON *  getTemplateData(void);
    const TemplateJSON *  getTemplateData(void) const;
    bool  hasPreview(void) const;
    PreviewJSON *  getPreview(void);
    const PreviewJSON *  getPreview(void) const;
    JSONValue *  getPreviewValue(void);
    const JSONValue *  getPreviewValue(void) const;
    bool  hasHTMLData(void) const;
    HTMLDataJSON *  getHTMLData(void);
    const HTMLDataJSON *  getHTMLData(void) const;
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

    virtual size_t extraClientMatchComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraClientMatchComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraClientMatchComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraClientMatchComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraClientMatchLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraClientMatchLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setExpression(std::string new_value)
      {
        flagHasExpression = true;
        storeExpression = new_value;
      }
    void unsetExpression(void)
      {
        flagHasExpression = false;
      }
    void setResult(JSONValue * new_value)
      {
        new_value->add_reference();
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = true;
        storeResult = new_value;
      }
    void unsetResult(void)
      {
        if (flagHasResult)
          {
            storeResult->remove_reference();
          }
        flagHasResult = false;
      }
    void setExtendedBlock(TypeExtendedBlock new_value)
      {
        flagHasExtendedBlock = true;
        storeExtendedBlock = new_value;
      }
    void setExtendedBlock(const char *chars)
      {
        setExtendedBlock(stringToExtendedBlock(chars));
      }
    void setExtendedBlock(std::string the_string)
      {
        setExtendedBlock(stringToExtendedBlock(the_string.c_str()));
      }
    void unsetExtendedBlock(void)
      {
        flagHasExtendedBlock = false;
      }
    void setResultIsInformationNugget(bool new_value)
      {
        flagHasResultIsInformationNugget = true;
        storeResultIsInformationNugget = new_value;
      }
    void unsetResultIsInformationNugget(void)
      {
        flagHasResultIsInformationNugget = false;
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
    void setSpokenResponsePattern(std::string new_value)
      {
        flagHasSpokenResponsePattern = true;
        storeSpokenResponsePattern = new_value;
      }
    void unsetSpokenResponsePattern(void)
      {
        flagHasSpokenResponsePattern = false;
      }
    void setSpokenResponsePatternLong(std::string new_value)
      {
        flagHasSpokenResponsePatternLong = true;
        storeSpokenResponsePatternLong = new_value;
      }
    void unsetSpokenResponsePatternLong(void)
      {
        flagHasSpokenResponsePatternLong = false;
      }
    void setWrittenResponsePattern(std::string new_value)
      {
        flagHasWrittenResponsePattern = true;
        storeWrittenResponsePattern = new_value;
      }
    void unsetWrittenResponsePattern(void)
      {
        flagHasWrittenResponsePattern = false;
      }
    void setWrittenResponsePatternLong(std::string new_value)
      {
        flagHasWrittenResponsePatternLong = true;
        storeWrittenResponsePatternLong = new_value;
      }
    void unsetWrittenResponsePatternLong(void)
      {
        flagHasWrittenResponsePatternLong = false;
      }
    void setSpokenResponsePatternSSML(std::string new_value)
      {
        flagHasSpokenResponsePatternSSML = true;
        storeSpokenResponsePatternSSML = new_value;
      }
    void unsetSpokenResponsePatternSSML(void)
      {
        flagHasSpokenResponsePatternSSML = false;
      }
    void setSpokenResponsePatternSSMLLong(std::string new_value)
      {
        flagHasSpokenResponsePatternSSMLLong = true;
        storeSpokenResponsePatternSSMLLong = new_value;
      }
    void unsetSpokenResponsePatternSSMLLong(void)
      {
        flagHasSpokenResponsePatternSSMLLong = false;
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
    void setPreview(PreviewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPreview)
          {
            storePreview->remove_reference();
          }
        flagHasPreview = true;
        storePreview = new_value;
      }
    void setPreview(JSONValue * new_value)
      {
        setPreview(new PreviewJSON(new_value));
      }
    void unsetPreview(void)
      {
        if (flagHasPreview)
          {
            storePreview->remove_reference();
          }
        flagHasPreview = false;
      }
    void setHTMLData(HTMLDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHTMLData)
          {
            storeHTMLData->remove_reference();
          }
        flagHasHTMLData = true;
        storeHTMLData = new_value;
      }
    void unsetHTMLData(void)
      {
        if (flagHasHTMLData)
          {
            storeHTMLData->remove_reference();
          }
        flagHasHTMLData = false;
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

    virtual void extraClientMatchAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraClientMatchSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraClientMatchLookup(key);
        if (old_field == NULL)
          {
            extraClientMatchAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        assert(flagHasExpression);
        handler->start_pair("Expression");
        handler->string_value(storeExpression);
        assert(flagHasResult);
        handler->start_pair("Result");
        storeResult->write(handler);
        if (flagHasExtendedBlock)
          {
            handler->start_pair("ExtendedBlock");
            switch (storeExtendedBlock)
              {
                case ExtendedBlock_RAW_TOP_LEVEL_QUERY:
                    handler->string_value("RAW_TOP_LEVEL_QUERY");
                    break;
                case ExtendedBlock_IMPERATIVE_PHRASE:
                    handler->string_value("IMPERATIVE_PHRASE");
                    break;
                case ExtendedBlock_QUESTION:
                    handler->string_value("QUESTION");
                    break;
                case ExtendedBlock_SENTENCE:
                    handler->string_value("SENTENCE");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasResultIsInformationNugget)
          {
            handler->start_pair("ResultIsInformationNugget");
            handler->boolean_value(storeResultIsInformationNugget);
          }
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
        if (flagHasSpokenResponsePattern)
          {
            handler->start_pair("SpokenResponsePattern");
            handler->string_value(storeSpokenResponsePattern);
          }
        if (flagHasSpokenResponsePatternLong)
          {
            handler->start_pair("SpokenResponsePatternLong");
            handler->string_value(storeSpokenResponsePatternLong);
          }
        if (flagHasWrittenResponsePattern)
          {
            handler->start_pair("WrittenResponsePattern");
            handler->string_value(storeWrittenResponsePattern);
          }
        if (flagHasWrittenResponsePatternLong)
          {
            handler->start_pair("WrittenResponsePatternLong");
            handler->string_value(storeWrittenResponsePatternLong);
          }
        if (flagHasSpokenResponsePatternSSML)
          {
            handler->start_pair("SpokenResponsePatternSSML");
            handler->string_value(storeSpokenResponsePatternSSML);
          }
        if (flagHasSpokenResponsePatternSSMLLong)
          {
            handler->start_pair("SpokenResponsePatternSSMLLong");
            handler->string_value(storeSpokenResponsePatternSSMLLong);
          }
        if (flagHasAutoListen)
          {
            handler->start_pair("AutoListen");
            handler->boolean_value(storeAutoListen);
          }
        if (flagHasViewType)
          {
            handler->start_pair("ViewType");
            assert(storeViewType.size() >= 1);
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
        if (flagHasTemplateData)
          {
            handler->start_pair("TemplateData");
            storeTemplateData->write_as_json(handler);
          }
        if (flagHasPreview)
          {
            handler->start_pair("Preview");
            storePreview->write_as_json(handler);
          }
        if (flagHasHTMLData)
          {
            handler->start_pair("HTMLData");
            storeHTMLData->write_as_json(handler);
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasExpression()))
          {
            return "When parsing the object for %what%, the \"Expression\" field was missing.";
          }
        if (!(hasResult()))
          {
            return "When parsing the object for %what%, the \"Result\" field was missing.";
          }
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

    static ClientMatchJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ClientMatchJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ClientMatchJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ClientMatchJSON>, ClientMatchJSON *, bool> generator("Type ClientMatch", ignore_extras);
            parse_json_value(text, "Text for ClientMatchJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ClientMatchJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ClientMatchJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ClientMatchJSON>, ClientMatchJSON *, bool> generator("Type ClientMatch", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorExpression;
        JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorResult;
    class FieldGeneratorExtendedBlock : public JSONStringGenerator
          {
          protected:
            FieldGeneratorExtendedBlock(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorExtendedBlock(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToExtendedBlock(result));
              }
            virtual void handle_result(TypeExtendedBlock result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorExtendedBlock, TypeExtendedBlock, TypeExtendedBlock > fieldGeneratorExtendedBlock;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorResultIsInformationNugget;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponse;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponseLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponseSSMLLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponsePattern;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponsePatternLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponsePattern;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenResponsePatternLong;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponsePatternSSML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenResponsePatternSSMLLong;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
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
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorTemplateData;
        JSONHoldingGenerator<PreviewJSON::Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool > fieldGeneratorPreview;
        JSONHoldingGenerator<HTMLDataJSON::Generator, RCHandle<HTMLDataJSON>, HTMLDataJSON *, bool > fieldGeneratorHTMLData;
        JSONHoldingGenerator<HintsJSON::Generator, RCHandle<HintsJSON>, HintsJSON *, bool > fieldGeneratorHints;
        JSONHoldingGenerator<EmotionJSON::Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool > fieldGeneratorEmotion;
        JSONHoldingGenerator<IconJSON::Generator, RCHandle<IconJSON>, IconJSON *, bool > fieldGeneratorIcon;
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
            ClientMatchJSON *result = new ClientMatchJSON();
            assert(result != NULL);
            RCHandle<ClientMatchJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraClientMatchAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ClientMatchJSON *result)
          {
            if (fieldGeneratorExpression.have_value)
              {
                result->setExpression(fieldGeneratorExpression.value);
                fieldGeneratorExpression.have_value = false;
              }
            else if (!(result->hasExpression()))
              {
                error("When parsing the object for %what%, the \"Expression\" field was missing.");
              }
            if (fieldGeneratorResult.have_value)
              {
                result->setResult(fieldGeneratorResult.value.referenced());
                fieldGeneratorResult.have_value = false;
              }
            else if (!(result->hasResult()))
              {
                error("When parsing the object for %what%, the \"Result\" field was missing.");
              }
            if (fieldGeneratorExtendedBlock.have_value)
              {
                result->setExtendedBlock(fieldGeneratorExtendedBlock.value);
                fieldGeneratorExtendedBlock.have_value = false;
              }
            if (fieldGeneratorResultIsInformationNugget.have_value)
              {
                result->setResultIsInformationNugget(fieldGeneratorResultIsInformationNugget.value);
                fieldGeneratorResultIsInformationNugget.have_value = false;
              }
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
            if (fieldGeneratorSpokenResponsePattern.have_value)
              {
                result->setSpokenResponsePattern(fieldGeneratorSpokenResponsePattern.value);
                fieldGeneratorSpokenResponsePattern.have_value = false;
              }
            if (fieldGeneratorSpokenResponsePatternLong.have_value)
              {
                result->setSpokenResponsePatternLong(fieldGeneratorSpokenResponsePatternLong.value);
                fieldGeneratorSpokenResponsePatternLong.have_value = false;
              }
            if (fieldGeneratorWrittenResponsePattern.have_value)
              {
                result->setWrittenResponsePattern(fieldGeneratorWrittenResponsePattern.value);
                fieldGeneratorWrittenResponsePattern.have_value = false;
              }
            if (fieldGeneratorWrittenResponsePatternLong.have_value)
              {
                result->setWrittenResponsePatternLong(fieldGeneratorWrittenResponsePatternLong.value);
                fieldGeneratorWrittenResponsePatternLong.have_value = false;
              }
            if (fieldGeneratorSpokenResponsePatternSSML.have_value)
              {
                result->setSpokenResponsePatternSSML(fieldGeneratorSpokenResponsePatternSSML.value);
                fieldGeneratorSpokenResponsePatternSSML.have_value = false;
              }
            if (fieldGeneratorSpokenResponsePatternSSMLLong.have_value)
              {
                result->setSpokenResponsePatternSSMLLong(fieldGeneratorSpokenResponsePatternSSMLLong.value);
                fieldGeneratorSpokenResponsePatternSSMLLong.have_value = false;
              }
            if (fieldGeneratorAutoListen.have_value)
              {
                result->setAutoListen(fieldGeneratorAutoListen.value);
                fieldGeneratorAutoListen.have_value = false;
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
            if (fieldGeneratorTemplateData.have_value)
              {
                result->setTemplateData(fieldGeneratorTemplateData.value.referenced());
                fieldGeneratorTemplateData.have_value = false;
              }
            if (fieldGeneratorPreview.have_value)
              {
                result->setPreview(fieldGeneratorPreview.value.referenced());
                fieldGeneratorPreview.have_value = false;
              }
            if (fieldGeneratorHTMLData.have_value)
              {
                result->setHTMLData(fieldGeneratorHTMLData.value.referenced());
                fieldGeneratorHTMLData.have_value = false;
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
          }
        virtual void handle_result(ClientMatchJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "utoListen") == 0)
                        return &fieldGeneratorAutoListen;
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "otion") == 0)
                                return &fieldGeneratorEmotion;
                            break;
                        case 'x':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'p':
                                    if (strcmp(&(field_name[3]), "ression") == 0)
                                        return &fieldGeneratorExpression;
                                    break;
                                case 't':
                                    if (strcmp(&(field_name[3]), "endedBlock") == 0)
                                        return &fieldGeneratorExtendedBlock;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'T':
                            if (strcmp(&(field_name[2]), "MLData") == 0)
                                return &fieldGeneratorHTMLData;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nts") == 0)
                                return &fieldGeneratorHints;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "con") == 0)
                        return &fieldGeneratorIcon;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "review") == 0)
                        return &fieldGeneratorPreview;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "esult", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 0:
                                return &fieldGeneratorResult;
                            case 'I':
                                if (strcmp(&(field_name[7]), "sInformationNugget") == 0)
                                    return &fieldGeneratorResultIsInformationNugget;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "pokenResponse", 13) == 0)
                      {
                        switch ((unsigned char)(field_name[14]))
                          {
                            case 0:
                                return &fieldGeneratorSpokenResponse;
                            case 'L':
                                if (strcmp(&(field_name[15]), "ong") == 0)
                                    return &fieldGeneratorSpokenResponseLong;
                                break;
                            case 'P':
                                if (strncmp(&(field_name[15]), "attern", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[21]))
                                      {
                                        case 0:
                                            return &fieldGeneratorSpokenResponsePattern;
                                        case 'L':
                                            if (strcmp(&(field_name[22]), "ong") == 0)
                                                return &fieldGeneratorSpokenResponsePatternLong;
                                            break;
                                        case 'S':
                                            if (strncmp(&(field_name[22]), "SML", 3) == 0)
                                              {
                                                switch ((unsigned char)(field_name[25]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorSpokenResponsePatternSSML;
                                                    case 'L':
                                                        if (strcmp(&(field_name[26]), "ong") == 0)
                                                            return &fieldGeneratorSpokenResponsePatternSSMLLong;
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
                case 'T':
                    if (strcmp(&(field_name[1]), "emplateData") == 0)
                        return &fieldGeneratorTemplateData;
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
                            case 'P':
                                if (strncmp(&(field_name[16]), "attern", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[22]))
                                      {
                                        case 0:
                                            return &fieldGeneratorWrittenResponsePattern;
                                        case 'L':
                                            if (strcmp(&(field_name[23]), "ong") == 0)
                                                return &fieldGeneratorWrittenResponsePatternLong;
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorExpression("field \"Expression\" of the ClientMatch class"), fieldGeneratorResult("field \"Result\" of the ClientMatch class"), fieldGeneratorExtendedBlock("field \"ExtendedBlock\" of the ClientMatch class"), fieldGeneratorResultIsInformationNugget("field \"ResultIsInformationNugget\" of the ClientMatch class"), fieldGeneratorSpokenResponse("field \"SpokenResponse\" of the ClientMatch class"), fieldGeneratorSpokenResponseLong("field \"SpokenResponseLong\" of the ClientMatch class"), fieldGeneratorWrittenResponse("field \"WrittenResponse\" of the ClientMatch class"), fieldGeneratorWrittenResponseLong("field \"WrittenResponseLong\" of the ClientMatch class"), fieldGeneratorSpokenResponseSSML("field \"SpokenResponseSSML\" of the ClientMatch class"), fieldGeneratorSpokenResponseSSMLLong("field \"SpokenResponseSSMLLong\" of the ClientMatch class"), fieldGeneratorSpokenResponsePattern("field \"SpokenResponsePattern\" of the ClientMatch class"), fieldGeneratorSpokenResponsePatternLong("field \"SpokenResponsePatternLong\" of the ClientMatch class"), fieldGeneratorWrittenResponsePattern("field \"WrittenResponsePattern\" of the ClientMatch class"), fieldGeneratorWrittenResponsePatternLong("field \"WrittenResponsePatternLong\" of the ClientMatch class"), fieldGeneratorSpokenResponsePatternSSML("field \"SpokenResponsePatternSSML\" of the ClientMatch class"), fieldGeneratorSpokenResponsePatternSSMLLong("field \"SpokenResponsePatternSSMLLong\" of the ClientMatch class"), fieldGeneratorAutoListen("field \"AutoListen\" of the ClientMatch class"), fieldGeneratorViewType("field \"ViewType\" of the ClientMatch class"), fieldGeneratorTemplateData("field \"TemplateData\" of the ClientMatch class", ignore_extras), fieldGeneratorPreview("field \"Preview\" of the ClientMatch class", ignore_extras), fieldGeneratorHTMLData("field \"HTMLData\" of the ClientMatch class", ignore_extras), fieldGeneratorHints("field \"Hints\" of the ClientMatch class", ignore_extras), fieldGeneratorEmotion("field \"Emotion\" of the ClientMatch class", ignore_extras), fieldGeneratorIcon("field \"Icon\" of the ClientMatch class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ClientMatch class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorExpression.reset();
            fieldGeneratorResult.reset();
            fieldGeneratorExtendedBlock.reset();
            fieldGeneratorResultIsInformationNugget.reset();
            fieldGeneratorSpokenResponse.reset();
            fieldGeneratorSpokenResponseLong.reset();
            fieldGeneratorWrittenResponse.reset();
            fieldGeneratorWrittenResponseLong.reset();
            fieldGeneratorSpokenResponseSSML.reset();
            fieldGeneratorSpokenResponseSSMLLong.reset();
            fieldGeneratorSpokenResponsePattern.reset();
            fieldGeneratorSpokenResponsePatternLong.reset();
            fieldGeneratorWrittenResponsePattern.reset();
            fieldGeneratorWrittenResponsePatternLong.reset();
            fieldGeneratorSpokenResponsePatternSSML.reset();
            fieldGeneratorSpokenResponsePatternSSMLLong.reset();
            fieldGeneratorAutoListen.reset();
            fieldGeneratorViewType.reset();
            fieldGeneratorTemplateData.reset();
            fieldGeneratorPreview.reset();
            fieldGeneratorHTMLData.reset();
            fieldGeneratorHints.reset();
            fieldGeneratorEmotion.reset();
            fieldGeneratorIcon.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CLIENTMATCHJSON_H */
