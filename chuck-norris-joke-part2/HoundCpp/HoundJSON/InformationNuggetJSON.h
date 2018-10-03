/* file "InformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef INFORMATIONNUGGETJSON_H
#define INFORMATIONNUGGETJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "TemplateJSON.h"
#include "TemplateJSON.h"
#include "PreviewJSON.h"
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


class InformationNuggetJSON : public ReferenceCounted
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
    bool flagHasCombiningTemplateData;
    TemplateJSON * storeCombiningTemplateData;
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
    bool flagHasUnderstandingConfidence;
    double storeUnderstandingConfidence;
    std::string textStoreUnderstandingConfidence;
    bool flagHasOutputOverrideDiagnostics;
    std::vector< std::string > storeOutputOverrideDiagnostics;

    InformationNuggetJSON(const InformationNuggetJSON &);
    InformationNuggetJSON & operator=(const InformationNuggetJSON &other);

    void  fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCombiningTemplateData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPreview(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHints(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIcon(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnderstandingConfidence(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputOverrideDiagnostics(JSONValue *json_value, bool ignore_extras = false);


  public:
    InformationNuggetJSON(void);
    virtual ~InformationNuggetJSON(void);
    virtual const char *getNuggetKind(void) const = 0;
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
    bool  hasCombiningTemplateData(void) const;
    TemplateJSON *  getCombiningTemplateData(void);
    const TemplateJSON *  getCombiningTemplateData(void) const;
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
    bool  hasUnderstandingConfidence(void) const;
    double  getUnderstandingConfidence(void);
    const double  getUnderstandingConfidence(void) const;
    std::string  getUnderstandingConfidenceAsText(void) const;
    bool  hasOutputOverrideDiagnostics(void) const;
    size_t  countOfOutputOverrideDiagnostics(void) const;
    std::string  elementOfOutputOverrideDiagnostics(size_t element_num);
    const std::string  elementOfOutputOverrideDiagnostics(size_t element_num) const;
    std::vector< std::string >  getOutputOverrideDiagnostics(void);
    const std::vector< std::string >  getOutputOverrideDiagnostics(void) const;

    virtual size_t extraInformationNuggetComponentCount(void) const = 0;
    virtual const char *extraInformationNuggetComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraInformationNuggetComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraInformationNuggetLookup(const char *field_name) = 0;
    virtual const JSONValue *extraInformationNuggetLookup(const char *field_name) const = 0;

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
    void setUnderstandingConfidence(double new_value)
      {
        flagHasUnderstandingConfidence = true;
        if (new_value < 0)
            throw("The value for field UnderstandingConfidence of InformationNuggetJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field UnderstandingConfidence of InformationNuggetJSON is greater than the upper bound (1) for that field.");
        storeUnderstandingConfidence = new_value;
        textStoreUnderstandingConfidence = "";
      }
    void setUnderstandingConfidenceText(std::string new_value)
      {
        flagHasUnderstandingConfidence = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field UnderstandingConfidence of InformationNuggetJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field UnderstandingConfidence of InformationNuggetJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field UnderstandingConfidence of InformationNuggetJSON is greater than the upper bound (1) for that field.");
        textStoreUnderstandingConfidence = new_value;
      }
    void unsetUnderstandingConfidence(void)
      {
        flagHasUnderstandingConfidence = false;
      }
    void initOutputOverrideDiagnostics(void)
      {
        flagHasOutputOverrideDiagnostics = true;
        storeOutputOverrideDiagnostics.clear();
      }
    void appendOutputOverrideDiagnostics(std::string to_append)
      {
        if (!flagHasOutputOverrideDiagnostics)
          {
            flagHasOutputOverrideDiagnostics = true;
            storeOutputOverrideDiagnostics.clear();
          }
        assert(flagHasOutputOverrideDiagnostics);
        storeOutputOverrideDiagnostics.push_back(to_append);
      }
    void unsetOutputOverrideDiagnostics(void)
      {
        flagHasOutputOverrideDiagnostics = false;
        storeOutputOverrideDiagnostics.clear();
      }

    virtual void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraInformationNuggetSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("NuggetKind", getNuggetKind());
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
        if (flagHasCombiningTemplateData)
          {
            handler->start_pair("CombiningTemplateData");
            storeCombiningTemplateData->write_as_json(handler);
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
        if (flagHasUnderstandingConfidence)
          {
            handler->start_pair("UnderstandingConfidence");
            if (textStoreUnderstandingConfidence != "")
                handler->number_value(textStoreUnderstandingConfidence.c_str());
            else if (((double)(long int)storeUnderstandingConfidence) == storeUnderstandingConfidence)
                handler->number_value((long int)storeUnderstandingConfidence);
            else
                handler->number_value(storeUnderstandingConfidence);
          }
        if (flagHasOutputOverrideDiagnostics)
          {
            handler->start_pair("OutputOverrideDiagnostics");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeOutputOverrideDiagnostics.size(); ++num1)
              {
                handler->string_value(storeOutputOverrideDiagnostics[num1]);
              }
            handler->finish_array();
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

    static InformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static InformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        InformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<InformationNuggetJSON>, InformationNuggetJSON *, bool> generator("Type InformationNugget", ignore_extras);
            parse_json_value(text, "Text for InformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static InformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        InformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<InformationNuggetJSON>, InformationNuggetJSON *, bool> generator("Type InformationNugget", ignore_extras);
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
        JSONHoldingGenerator<TemplateJSON::Generator, RCHandle<TemplateJSON>, TemplateJSON *, bool > fieldGeneratorCombiningTemplateData;
        JSONHoldingGenerator<PreviewJSON::Generator, RCHandle<PreviewJSON>, PreviewJSON *, bool > fieldGeneratorPreview;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSmallScreenHTML;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLargeScreenHTML;
        JSONHoldingGenerator<HintsJSON::Generator, RCHandle<HintsJSON>, HintsJSON *, bool > fieldGeneratorHints;
        JSONHoldingGenerator<EmotionJSON::Generator, RCHandle<EmotionJSON>, EmotionJSON *, bool > fieldGeneratorEmotion;
        JSONHoldingGenerator<IconJSON::Generator, RCHandle<IconJSON>, IconJSON *, bool > fieldGeneratorIcon;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorUnderstandingConfidence;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorOutputOverrideDiagnostics;
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
                throw("The `NuggetKind' field is missing.");
            InformationNuggetJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<InformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
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
        std::string getInformationNuggetJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `NuggetKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(InformationNuggetJSON *result)
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
            if (fieldGeneratorCombiningTemplateData.have_value)
              {
                result->setCombiningTemplateData(fieldGeneratorCombiningTemplateData.value.referenced());
                fieldGeneratorCombiningTemplateData.have_value = false;
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
            if (fieldGeneratorUnderstandingConfidence.have_value)
              {
                result->setUnderstandingConfidenceText(fieldGeneratorUnderstandingConfidence.value);
                fieldGeneratorUnderstandingConfidence.have_value = false;
              }
            if (fieldGeneratorOutputOverrideDiagnostics.have_value)
              {
                result->initOutputOverrideDiagnostics();
                size_t count = fieldGeneratorOutputOverrideDiagnostics.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputOverrideDiagnostics(fieldGeneratorOutputOverrideDiagnostics.value[num]);
                  }
                fieldGeneratorOutputOverrideDiagnostics.value.clear();
                fieldGeneratorOutputOverrideDiagnostics.have_value = false;
              }
          }
        virtual void handle_result(InformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ombiningTemplateData") == 0)
                        return &fieldGeneratorCombiningTemplateData;
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
                case 'N':
                    if (strcmp(&(field_name[1]), "uggetKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputOverrideDiagnostics") == 0)
                        return &fieldGeneratorOutputOverrideDiagnostics;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "review") == 0)
                        return &fieldGeneratorPreview;
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
                case 'U':
                    if (strcmp(&(field_name[1]), "nderstandingConfidence") == 0)
                        return &fieldGeneratorUnderstandingConfidence;
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
        Generator(bool ignore_extras = false) : fieldGeneratorSpokenResponse("field \"SpokenResponse\" of the InformationNugget class"), fieldGeneratorSpokenResponseLong("field \"SpokenResponseLong\" of the InformationNugget class"), fieldGeneratorWrittenResponse("field \"WrittenResponse\" of the InformationNugget class"), fieldGeneratorWrittenResponseLong("field \"WrittenResponseLong\" of the InformationNugget class"), fieldGeneratorSpokenResponseSSML("field \"SpokenResponseSSML\" of the InformationNugget class"), fieldGeneratorSpokenResponseSSMLLong("field \"SpokenResponseSSMLLong\" of the InformationNugget class"), fieldGeneratorTemplateData("field \"TemplateData\" of the InformationNugget class", ignore_extras), fieldGeneratorCombiningTemplateData("field \"CombiningTemplateData\" of the InformationNugget class", ignore_extras), fieldGeneratorPreview("field \"Preview\" of the InformationNugget class", ignore_extras), fieldGeneratorSmallScreenHTML("field \"SmallScreenHTML\" of the InformationNugget class"), fieldGeneratorLargeScreenHTML("field \"LargeScreenHTML\" of the InformationNugget class"), fieldGeneratorHints("field \"Hints\" of the InformationNugget class", ignore_extras), fieldGeneratorEmotion("field \"Emotion\" of the InformationNugget class", ignore_extras), fieldGeneratorIcon("field \"Icon\" of the InformationNugget class", ignore_extras), fieldGeneratorUnderstandingConfidence("field \"UnderstandingConfidence\" of the InformationNugget class"), fieldGeneratorOutputOverrideDiagnostics("field \"OutputOverrideDiagnostics\" of the InformationNugget class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"NuggetKind\" of the InformationNugget class")
          {
            set_what("the InformationNugget class");
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
            fieldGeneratorCombiningTemplateData.reset();
            fieldGeneratorPreview.reset();
            fieldGeneratorSmallScreenHTML.reset();
            fieldGeneratorLargeScreenHTML.reset();
            fieldGeneratorHints.reset();
            fieldGeneratorEmotion.reset();
            fieldGeneratorIcon.reset();
            fieldGeneratorUnderstandingConfidence.reset();
            fieldGeneratorOutputOverrideDiagnostics.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static InformationNuggetJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* INFORMATIONNUGGETJSON_H */
