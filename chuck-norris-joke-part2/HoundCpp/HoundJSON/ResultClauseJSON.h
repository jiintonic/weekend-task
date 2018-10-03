/* file "ResultClauseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef RESULTCLAUSEJSON_H
#define RESULTCLAUSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "TemplateJSON.h"
#include "PreviewJSON.h"
#include "HintsJSON.h"
#include "EmotionJSON.h"
#include "IconJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "CommandErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ResultClauseJSON : public ReferenceCounted
  {
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
    bool flagHasTemplateData;
    TemplateJSON * storeTemplateData;
    bool flagHasPreview;
    PreviewJSON * storePreview;
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
    bool flagHasRequiredFeatures;
    std::vector< std::string > storeRequiredFeatures;
    bool flagHasClientActionSucceededResult;
    DynamicResponseJSON * storeClientActionSucceededResult;
    bool flagHasClientActionFailedResult;
    DynamicResponseJSON * storeClientActionFailedResult;
    bool flagHasRequiredFeaturesSupportedResult;
    DynamicResponseJSON * storeRequiredFeaturesSupportedResult;
    bool flagHasErrorData;
    CommandErrorJSON * storeErrorData;

    ResultClauseJSON(const ResultClauseJSON &);
    ResultClauseJSON & operator=(const ResultClauseJSON &other);

    void  fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIcon(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequiredFeatures(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientActionSucceededResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClientActionFailedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequiredFeaturesSupportedResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorData(JSONValue *json_value, bool ignore_extras = false);


  public:
    ResultClauseJSON(void);
    virtual ~ResultClauseJSON(void);
    virtual const char *getClauseKind(void) const = 0;
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
    bool  hasTemplateData(void) const;
    TemplateJSON *  getTemplateData(void);
    const TemplateJSON *  getTemplateData(void) const;
    bool  hasPreview(void) const;
    PreviewJSON *  getPreview(void);
    const PreviewJSON *  getPreview(void) const;
    JSONValue *  getPreviewValue(void);
    const JSONValue *  getPreviewValue(void) const;
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
    bool  hasRequiredFeatures(void) const;
    size_t  countOfRequiredFeatures(void) const;
    std::string  elementOfRequiredFeatures(size_t element_num);
    const std::string  elementOfRequiredFeatures(size_t element_num) const;
    std::vector< std::string >  getRequiredFeatures(void);
    const std::vector< std::string >  getRequiredFeatures(void) const;
    bool  hasClientActionSucceededResult(void) const;
    DynamicResponseJSON *  getClientActionSucceededResult(void);
    const DynamicResponseJSON *  getClientActionSucceededResult(void) const;
    bool  hasClientActionFailedResult(void) const;
    DynamicResponseJSON *  getClientActionFailedResult(void);
    const DynamicResponseJSON *  getClientActionFailedResult(void) const;
    bool  hasRequiredFeaturesSupportedResult(void) const;
    DynamicResponseJSON *  getRequiredFeaturesSupportedResult(void);
    const DynamicResponseJSON *  getRequiredFeaturesSupportedResult(void) const;
    bool  hasErrorData(void) const;
    CommandErrorJSON *  getErrorData(void);
    const CommandErrorJSON *  getErrorData(void) const;

    virtual size_t extraResultClauseComponentCount(void) const = 0;
    virtual const char *extraResultClauseComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraResultClauseComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraResultClauseComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraResultClauseLookup(const char *field_name) = 0;
    virtual const JSONValue *extraResultClauseLookup(const char *field_name) const = 0;

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
    void initRequiredFeatures(void)
      {
        flagHasRequiredFeatures = true;
        storeRequiredFeatures.clear();
      }
    void appendRequiredFeatures(std::string to_append)
      {
        if (!flagHasRequiredFeatures)
          {
            flagHasRequiredFeatures = true;
            storeRequiredFeatures.clear();
          }
        assert(flagHasRequiredFeatures);
        storeRequiredFeatures.push_back(to_append);
      }
    void unsetRequiredFeatures(void)
      {
        flagHasRequiredFeatures = false;
        storeRequiredFeatures.clear();
      }
    void setClientActionSucceededResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientActionSucceededResult)
          {
            storeClientActionSucceededResult->remove_reference();
          }
        flagHasClientActionSucceededResult = true;
        storeClientActionSucceededResult = new_value;
      }
    void unsetClientActionSucceededResult(void)
      {
        if (flagHasClientActionSucceededResult)
          {
            storeClientActionSucceededResult->remove_reference();
          }
        flagHasClientActionSucceededResult = false;
      }
    void setClientActionFailedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClientActionFailedResult)
          {
            storeClientActionFailedResult->remove_reference();
          }
        flagHasClientActionFailedResult = true;
        storeClientActionFailedResult = new_value;
      }
    void unsetClientActionFailedResult(void)
      {
        if (flagHasClientActionFailedResult)
          {
            storeClientActionFailedResult->remove_reference();
          }
        flagHasClientActionFailedResult = false;
      }
    void setRequiredFeaturesSupportedResult(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasRequiredFeaturesSupportedResult)
          {
            storeRequiredFeaturesSupportedResult->remove_reference();
          }
        flagHasRequiredFeaturesSupportedResult = true;
        storeRequiredFeaturesSupportedResult = new_value;
      }
    void unsetRequiredFeaturesSupportedResult(void)
      {
        if (flagHasRequiredFeaturesSupportedResult)
          {
            storeRequiredFeaturesSupportedResult->remove_reference();
          }
        flagHasRequiredFeaturesSupportedResult = false;
      }
    void setErrorData(CommandErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasErrorData)
          {
            storeErrorData->remove_reference();
          }
        flagHasErrorData = true;
        storeErrorData = new_value;
      }
    void unsetErrorData(void)
      {
        if (flagHasErrorData)
          {
            storeErrorData->remove_reference();
          }
        flagHasErrorData = false;
      }

    virtual void extraResultClauseAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraResultClauseSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("ClauseKind", getClauseKind());
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
        if (flagHasRequiredFeatures)
          {
            handler->start_pair("RequiredFeatures");
            assert(storeRequiredFeatures.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeRequiredFeatures.size(); ++num1)
              {
                handler->string_value(storeRequiredFeatures[num1]);
              }
            handler->finish_array();
          }
        if (flagHasClientActionSucceededResult)
          {
            handler->start_pair("ClientActionSucceededResult");
            storeClientActionSucceededResult->write_as_json(handler);
          }
        if (flagHasClientActionFailedResult)
          {
            handler->start_pair("ClientActionFailedResult");
            storeClientActionFailedResult->write_as_json(handler);
          }
        if (flagHasRequiredFeaturesSupportedResult)
          {
            handler->start_pair("RequiredFeaturesSupportedResult");
            storeRequiredFeaturesSupportedResult->write_as_json(handler);
          }
        if (flagHasErrorData)
          {
            handler->start_pair("ErrorData");
            storeErrorData->write_as_json(handler);
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

    static ResultClauseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ResultClauseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ResultClauseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ResultClauseJSON>, ResultClauseJSON *, bool> generator("Type ResultClause", ignore_extras);
            parse_json_value(text, "Text for ResultClauseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ResultClauseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ResultClauseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ResultClauseJSON>, ResultClauseJSON *, bool> generator("Type ResultClause", ignore_extras);
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
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorTemplateData;
        JSONHoldingGenerator<PreviewJSON::Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool > fieldGeneratorPreview;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSmallScreenHTML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLargeScreenHTML;
        JSONHoldingGenerator<HintsJSON::Generator, RCHandle<HintsJSON>, HintsJSON *, bool > fieldGeneratorHints;
        JSONHoldingGenerator<EmotionJSON::Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool > fieldGeneratorEmotion;
        JSONHoldingGenerator<IconJSON::Generator, RCHandle<IconJSON>, IconJSON *, bool > fieldGeneratorIcon;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioBytes;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorResponseAudioError;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequiredFeatures;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorClientActionSucceededResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorClientActionFailedResult;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorRequiredFeaturesSupportedResult;
        JSONHoldingGenerator<CommandErrorJSON::Generator, RCHandle<CommandErrorJSON>, CommandErrorJSON *, bool > fieldGeneratorErrorData;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `ClauseKind' field is missing.");
            ResultClauseJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<ResultClauseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraResultClauseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getResultClauseJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `ClauseKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(ResultClauseJSON *result)
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
            if (fieldGeneratorRequiredFeatures.have_value)
              {
                result->initRequiredFeatures();
                size_t count = fieldGeneratorRequiredFeatures.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequiredFeatures(fieldGeneratorRequiredFeatures.value[num]);
                  }
                fieldGeneratorRequiredFeatures.value.clear();
                fieldGeneratorRequiredFeatures.have_value = false;
              }
            if (fieldGeneratorClientActionSucceededResult.have_value)
              {
                result->setClientActionSucceededResult(fieldGeneratorClientActionSucceededResult.value.referenced());
                fieldGeneratorClientActionSucceededResult.have_value = false;
              }
            if (fieldGeneratorClientActionFailedResult.have_value)
              {
                result->setClientActionFailedResult(fieldGeneratorClientActionFailedResult.value.referenced());
                fieldGeneratorClientActionFailedResult.have_value = false;
              }
            if (fieldGeneratorRequiredFeaturesSupportedResult.have_value)
              {
                result->setRequiredFeaturesSupportedResult(fieldGeneratorRequiredFeaturesSupportedResult.value.referenced());
                fieldGeneratorRequiredFeaturesSupportedResult.have_value = false;
              }
            if (fieldGeneratorErrorData.have_value)
              {
                result->setErrorData(fieldGeneratorErrorData.value.referenced());
                fieldGeneratorErrorData.have_value = false;
              }
          }
        virtual void handle_result(ResultClauseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "l", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[3]), "useKind") == 0)
                                    {
                                    keyGenerator.reset();
                                    return &keyGenerator;
                                    }
                                break;
                            case 'i':
                                if (strncmp(&(field_name[3]), "entAction", 9) == 0)
                                  {
                                    switch ((unsigned char)(field_name[12]))
                                      {
                                        case 'F':
                                            if (strcmp(&(field_name[13]), "ailedResult") == 0)
                                                return &fieldGeneratorClientActionFailedResult;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[13]), "ucceededResult") == 0)
                                                return &fieldGeneratorClientActionSucceededResult;
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
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "otion") == 0)
                                return &fieldGeneratorEmotion;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "rorData") == 0)
                                return &fieldGeneratorErrorData;
                            break;
                        default:
                            break;
                      }
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
                case 'P':
                    if (strcmp(&(field_name[1]), "review") == 0)
                        return &fieldGeneratorPreview;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'q':
                                if (strncmp(&(field_name[3]), "uiredFeatures", 13) == 0)
                                  {
                                    switch ((unsigned char)(field_name[16]))
                                      {
                                        case 0:
                                            return &fieldGeneratorRequiredFeatures;
                                        case 'S':
                                            if (strcmp(&(field_name[17]), "upportedResult") == 0)
                                                return &fieldGeneratorRequiredFeaturesSupportedResult;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 's':
                                if (strncmp(&(field_name[3]), "ponseAudio", 10) == 0)
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
                    if (strcmp(&(field_name[1]), "emplateData") == 0)
                        return &fieldGeneratorTemplateData;
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
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenResponse("field \"SpokenResponse\" of the ResultClause class"), fieldGeneratorSpokenResponseLong("field \"SpokenResponseLong\" of the ResultClause class"), fieldGeneratorWrittenResponse("field \"WrittenResponse\" of the ResultClause class"), fieldGeneratorWrittenResponseLong("field \"WrittenResponseLong\" of the ResultClause class"), fieldGeneratorSpokenResponseSSML("field \"SpokenResponseSSML\" of the ResultClause class"), fieldGeneratorSpokenResponseSSMLLong("field \"SpokenResponseSSMLLong\" of the ResultClause class"), fieldGeneratorTemplateData("field \"TemplateData\" of the ResultClause class", ignore_extras), fieldGeneratorPreview("field \"Preview\" of the ResultClause class", ignore_extras), fieldGeneratorSmallScreenHTML("field \"SmallScreenHTML\" of the ResultClause class"), fieldGeneratorLargeScreenHTML("field \"LargeScreenHTML\" of the ResultClause class"), fieldGeneratorHints("field \"Hints\" of the ResultClause class", ignore_extras), fieldGeneratorEmotion("field \"Emotion\" of the ResultClause class", ignore_extras), fieldGeneratorIcon("field \"Icon\" of the ResultClause class", ignore_extras), fieldGeneratorResponseAudioBytes("field \"ResponseAudioBytes\" of the ResultClause class"), fieldGeneratorResponseAudioError("field \"ResponseAudioError\" of the ResultClause class"), fieldGeneratorRequiredFeatures("field \"RequiredFeatures\" of the ResultClause class"), fieldGeneratorClientActionSucceededResult("field \"ClientActionSucceededResult\" of the ResultClause class", ignore_extras), fieldGeneratorClientActionFailedResult("field \"ClientActionFailedResult\" of the ResultClause class", ignore_extras), fieldGeneratorRequiredFeaturesSupportedResult("field \"RequiredFeaturesSupportedResult\" of the ResultClause class", ignore_extras), fieldGeneratorErrorData("field \"ErrorData\" of the ResultClause class", ignore_extras), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"ClauseKind\" of the ResultClause class")
          {
            set_what("the ResultClause class");
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
            fieldGeneratorTemplateData.reset();
            fieldGeneratorPreview.reset();
            fieldGeneratorSmallScreenHTML.reset();
            fieldGeneratorLargeScreenHTML.reset();
            fieldGeneratorHints.reset();
            fieldGeneratorEmotion.reset();
            fieldGeneratorIcon.reset();
            fieldGeneratorResponseAudioBytes.reset();
            fieldGeneratorResponseAudioError.reset();
            fieldGeneratorRequiredFeatures.reset();
            fieldGeneratorClientActionSucceededResult.reset();
            fieldGeneratorClientActionFailedResult.reset();
            fieldGeneratorRequiredFeaturesSupportedResult.reset();
            fieldGeneratorErrorData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static ResultClauseJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* RESULTCLAUSEJSON_H */
