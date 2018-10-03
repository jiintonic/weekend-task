/* file "ResultClauseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ResultClauseJSON.h"

#include "ResultClauseJSON.h"


ResultClauseJSON::ResultClauseJSON(const ResultClauseJSON &)
  {
    assert(false);
  }

ResultClauseJSON &ResultClauseJSON::operator=(const ResultClauseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ResultClauseJSON::fromJSONSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponse of ResultClauseJSON is not a string.");
    setSpokenResponse(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseLong of ResultClauseJSON is not a string.");
    setSpokenResponseLong(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponse of ResultClauseJSON is not a string.");
    setWrittenResponse(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenResponseLong of ResultClauseJSON is not a string.");
    setWrittenResponseLong(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONSpokenResponseSSML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSML of ResultClauseJSON is not a string.");
    setSpokenResponseSSML(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONSpokenResponseSSMLLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenResponseSSMLLong of ResultClauseJSON is not a string.");
    setSpokenResponseSSMLLong(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONTemplateData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TemplateJSON *convert_classy = TemplateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTemplateData(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONPreview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PreviewJSON *convert_classy = PreviewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPreview(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONSmallScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SmallScreenHTML of ResultClauseJSON is not a string.");
    setSmallScreenHTML(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONLargeScreenHTML(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LargeScreenHTML of ResultClauseJSON is not a string.");
    setLargeScreenHTML(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HintsJSON *convert_classy = HintsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHints(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONEmotion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmotionJSON *convert_classy = EmotionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmotion(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONIcon(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IconJSON *convert_classy = IconJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIcon(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONResponseAudioBytes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioBytes of ResultClauseJSON is not a string.");
    setResponseAudioBytes(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONResponseAudioError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioError of ResultClauseJSON is not a string.");
    setResponseAudioError(std::string(json_string->getData()));
  }

void ResultClauseJSON::fromJSONRequiredFeatures(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequiredFeatures of ResultClauseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field RequiredFeatures of ResultClauseJSON has too few elements.");
    std::vector< std::string > vector_RequiredFeatures1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field RequiredFeatures of ResultClauseJSON is not a string.");
        vector_RequiredFeatures1[num1] = std::string(json_string->getData());
      }
    assert(vector_RequiredFeatures1.size() >= 1);
    initRequiredFeatures();
    for (size_t num2 = 0; num2 < vector_RequiredFeatures1.size(); ++num2)
        appendRequiredFeatures(vector_RequiredFeatures1[num2]);
    for (size_t num1 = 0; num1 < vector_RequiredFeatures1.size(); ++num1)
      {
      }
  }

void ResultClauseJSON::fromJSONClientActionSucceededResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientActionSucceededResult(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONClientActionFailedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientActionFailedResult(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONRequiredFeaturesSupportedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequiredFeaturesSupportedResult(convert_classy);
    convert_classy->remove_reference();
  }

void ResultClauseJSON::fromJSONErrorData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommandErrorJSON *convert_classy = CommandErrorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setErrorData(convert_classy);
    convert_classy->remove_reference();
  }

ResultClauseJSON::ResultClauseJSON(void) :
        flagHasSpokenResponse(false),
        flagHasSpokenResponseLong(false),
        flagHasWrittenResponse(false),
        flagHasWrittenResponseLong(false),
        flagHasSpokenResponseSSML(false),
        flagHasSpokenResponseSSMLLong(false),
        flagHasTemplateData(false),
        flagHasPreview(false),
        flagHasSmallScreenHTML(false),
        flagHasLargeScreenHTML(false),
        flagHasHints(false),
        flagHasEmotion(false),
        flagHasIcon(false),
        flagHasResponseAudioBytes(false),
        flagHasResponseAudioError(false),
        flagHasRequiredFeatures(false),
        flagHasClientActionSucceededResult(false),
        flagHasClientActionFailedResult(false),
        flagHasRequiredFeaturesSupportedResult(false),
        flagHasErrorData(false)
  {
  }

ResultClauseJSON::~ResultClauseJSON(void)
  {
    if (flagHasTemplateData)
      {
        storeTemplateData->remove_reference();
      }
    if (flagHasPreview)
      {
        storePreview->remove_reference();
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
    if (flagHasErrorData)
      {
        storeErrorData->remove_reference();
      }
  }

bool ResultClauseJSON::hasSpokenResponse(void) const
  {
    return flagHasSpokenResponse;
  }

std::string ResultClauseJSON::getSpokenResponse(void)
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

const std::string ResultClauseJSON::getSpokenResponse(void) const
  {
    assert(flagHasSpokenResponse);
    return storeSpokenResponse;
  }

bool ResultClauseJSON::hasSpokenResponseLong(void) const
  {
    return flagHasSpokenResponseLong;
  }

std::string ResultClauseJSON::getSpokenResponseLong(void)
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

const std::string ResultClauseJSON::getSpokenResponseLong(void) const
  {
    assert(flagHasSpokenResponseLong);
    return storeSpokenResponseLong;
  }

bool ResultClauseJSON::hasWrittenResponse(void) const
  {
    return flagHasWrittenResponse;
  }

std::string ResultClauseJSON::getWrittenResponse(void)
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

const std::string ResultClauseJSON::getWrittenResponse(void) const
  {
    assert(flagHasWrittenResponse);
    return storeWrittenResponse;
  }

bool ResultClauseJSON::hasWrittenResponseLong(void) const
  {
    return flagHasWrittenResponseLong;
  }

std::string ResultClauseJSON::getWrittenResponseLong(void)
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

const std::string ResultClauseJSON::getWrittenResponseLong(void) const
  {
    assert(flagHasWrittenResponseLong);
    return storeWrittenResponseLong;
  }

bool ResultClauseJSON::hasSpokenResponseSSML(void) const
  {
    return flagHasSpokenResponseSSML;
  }

std::string ResultClauseJSON::getSpokenResponseSSML(void)
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

const std::string ResultClauseJSON::getSpokenResponseSSML(void) const
  {
    assert(flagHasSpokenResponseSSML);
    return storeSpokenResponseSSML;
  }

bool ResultClauseJSON::hasSpokenResponseSSMLLong(void) const
  {
    return flagHasSpokenResponseSSMLLong;
  }

std::string ResultClauseJSON::getSpokenResponseSSMLLong(void)
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

const std::string ResultClauseJSON::getSpokenResponseSSMLLong(void) const
  {
    assert(flagHasSpokenResponseSSMLLong);
    return storeSpokenResponseSSMLLong;
  }

bool ResultClauseJSON::hasTemplateData(void) const
  {
    return flagHasTemplateData;
  }

TemplateJSON * ResultClauseJSON::getTemplateData(void)
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

const TemplateJSON * ResultClauseJSON::getTemplateData(void) const
  {
    assert(flagHasTemplateData);
    return storeTemplateData;
  }

bool ResultClauseJSON::hasPreview(void) const
  {
    return flagHasPreview;
  }

PreviewJSON * ResultClauseJSON::getPreview(void)
  {
    assert(flagHasPreview);
    return storePreview;
  }

const PreviewJSON * ResultClauseJSON::getPreview(void) const
  {
    assert(flagHasPreview);
    return storePreview;
  }

JSONValue * ResultClauseJSON::getPreviewValue(void)
  {
    return getPreview()->getValue();
  }

const JSONValue * ResultClauseJSON::getPreviewValue(void) const
  {
    return getPreview()->getValue();
  }

bool ResultClauseJSON::hasSmallScreenHTML(void) const
  {
    return flagHasSmallScreenHTML;
  }

std::string ResultClauseJSON::getSmallScreenHTML(void)
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

const std::string ResultClauseJSON::getSmallScreenHTML(void) const
  {
    assert(flagHasSmallScreenHTML);
    return storeSmallScreenHTML;
  }

bool ResultClauseJSON::hasLargeScreenHTML(void) const
  {
    return flagHasLargeScreenHTML;
  }

std::string ResultClauseJSON::getLargeScreenHTML(void)
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

const std::string ResultClauseJSON::getLargeScreenHTML(void) const
  {
    assert(flagHasLargeScreenHTML);
    return storeLargeScreenHTML;
  }

bool ResultClauseJSON::hasHints(void) const
  {
    return flagHasHints;
  }

HintsJSON * ResultClauseJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const HintsJSON * ResultClauseJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

bool ResultClauseJSON::hasEmotion(void) const
  {
    return flagHasEmotion;
  }

EmotionJSON * ResultClauseJSON::getEmotion(void)
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

const EmotionJSON * ResultClauseJSON::getEmotion(void) const
  {
    assert(flagHasEmotion);
    return storeEmotion;
  }

EmotionJSON::TypeValue ResultClauseJSON::getEmotionValue(void)
  {
    return getEmotion()->getValue();
  }

const EmotionJSON::TypeValue ResultClauseJSON::getEmotionValue(void) const
  {
    return getEmotion()->getValue();
  }

const char *ResultClauseJSON::getEmotionAsChars(void) const
  {
    return getEmotion()->getValueAsChars();
  }

std::string ResultClauseJSON::getEmotionAsString(void) const
  {
    return getEmotion()->getValueAsString();
  }

bool ResultClauseJSON::hasIcon(void) const
  {
    return flagHasIcon;
  }

IconJSON * ResultClauseJSON::getIcon(void)
  {
    assert(flagHasIcon);
    return storeIcon;
  }

const IconJSON * ResultClauseJSON::getIcon(void) const
  {
    assert(flagHasIcon);
    return storeIcon;
  }

IconJSON::TypeValue ResultClauseJSON::getIconValue(void)
  {
    return getIcon()->getValue();
  }

const IconJSON::TypeValue ResultClauseJSON::getIconValue(void) const
  {
    return getIcon()->getValue();
  }

const char *ResultClauseJSON::getIconAsChars(void) const
  {
    return getIcon()->getValueAsChars();
  }

std::string ResultClauseJSON::getIconAsString(void) const
  {
    return getIcon()->getValueAsString();
  }

bool ResultClauseJSON::hasResponseAudioBytes(void) const
  {
    return flagHasResponseAudioBytes;
  }

std::string ResultClauseJSON::getResponseAudioBytes(void)
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

const std::string ResultClauseJSON::getResponseAudioBytes(void) const
  {
    assert(flagHasResponseAudioBytes);
    return storeResponseAudioBytes;
  }

bool ResultClauseJSON::hasResponseAudioError(void) const
  {
    return flagHasResponseAudioError;
  }

std::string ResultClauseJSON::getResponseAudioError(void)
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

const std::string ResultClauseJSON::getResponseAudioError(void) const
  {
    assert(flagHasResponseAudioError);
    return storeResponseAudioError;
  }

bool ResultClauseJSON::hasRequiredFeatures(void) const
  {
    return flagHasRequiredFeatures;
  }

size_t ResultClauseJSON::countOfRequiredFeatures(void) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures.size();
  }

std::string ResultClauseJSON::elementOfRequiredFeatures(size_t element_num)
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures[element_num];
  }

const std::string ResultClauseJSON::elementOfRequiredFeatures(size_t element_num) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures[element_num];
  }

std::vector< std::string > ResultClauseJSON::getRequiredFeatures(void)
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures;
  }

const std::vector< std::string > ResultClauseJSON::getRequiredFeatures(void) const
  {
    assert(flagHasRequiredFeatures);
    return storeRequiredFeatures;
  }

bool ResultClauseJSON::hasClientActionSucceededResult(void) const
  {
    return flagHasClientActionSucceededResult;
  }

DynamicResponseJSON * ResultClauseJSON::getClientActionSucceededResult(void)
  {
    assert(flagHasClientActionSucceededResult);
    return storeClientActionSucceededResult;
  }

const DynamicResponseJSON * ResultClauseJSON::getClientActionSucceededResult(void) const
  {
    assert(flagHasClientActionSucceededResult);
    return storeClientActionSucceededResult;
  }

bool ResultClauseJSON::hasClientActionFailedResult(void) const
  {
    return flagHasClientActionFailedResult;
  }

DynamicResponseJSON * ResultClauseJSON::getClientActionFailedResult(void)
  {
    assert(flagHasClientActionFailedResult);
    return storeClientActionFailedResult;
  }

const DynamicResponseJSON * ResultClauseJSON::getClientActionFailedResult(void) const
  {
    assert(flagHasClientActionFailedResult);
    return storeClientActionFailedResult;
  }

bool ResultClauseJSON::hasRequiredFeaturesSupportedResult(void) const
  {
    return flagHasRequiredFeaturesSupportedResult;
  }

DynamicResponseJSON * ResultClauseJSON::getRequiredFeaturesSupportedResult(void)
  {
    assert(flagHasRequiredFeaturesSupportedResult);
    return storeRequiredFeaturesSupportedResult;
  }

const DynamicResponseJSON * ResultClauseJSON::getRequiredFeaturesSupportedResult(void) const
  {
    assert(flagHasRequiredFeaturesSupportedResult);
    return storeRequiredFeaturesSupportedResult;
  }

bool ResultClauseJSON::hasErrorData(void) const
  {
    return flagHasErrorData;
  }

CommandErrorJSON * ResultClauseJSON::getErrorData(void)
  {
    assert(flagHasErrorData);
    return storeErrorData;
  }

const CommandErrorJSON * ResultClauseJSON::getErrorData(void) const
  {
    assert(flagHasErrorData);
    return storeErrorData;
  }

ResultClauseJSON *ResultClauseJSON::createForKey(const char *key, string_index *other_field_index)
  {

    class GenericResultClauseJSON : public ResultClauseJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericResultClauseJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericResultClauseJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getClauseKind(void) const  { return key.c_str(); }
        size_t extraResultClauseComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraResultClauseComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraResultClauseComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraResultClauseComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraResultClauseLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraResultClauseLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraResultClauseAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraResultClauseSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraResultClauseLookup(key);
            if (old_field == NULL)
              {
                extraResultClauseAppendPair(key, new_component);
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
    return new GenericResultClauseJSON(key);
  }
ResultClauseJSON *ResultClauseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ResultClauseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ResultClauseJSON>, ResultClauseJSON *, bool> generator("Type ResultClause", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
