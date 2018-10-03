/* file "MusicCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicCommandJSON.h"

#include "MusicCommandJSON.h"
#include "MusicSearchCommandJSON.h"
#include "GuessThatLyricCommandJSON.h"
#include "MusicChartsCommandJSON.h"


MusicCommandJSON::MusicCommandJSON(const MusicCommandJSON &)
  {
    assert(false);
  }

MusicCommandJSON &MusicCommandJSON::operator=(const MusicCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicCommandJSON::extraAutoPlayPreviewResultToJSON(void) const
  {
    JSONValueHandler handler_AutoPlayPreviewResult;
    storeAutoPlayPreviewResult->write_as_json(&handler_AutoPlayPreviewResult);
    handler_AutoPlayPreviewResult.result->add_reference();
    return handler_AutoPlayPreviewResult.result;
  }

JSONValue *MusicCommandJSON::extraAutoPlayResultToJSON(void) const
  {
    JSONValueHandler handler_AutoPlayResult;
    storeAutoPlayResult->write_as_json(&handler_AutoPlayResult);
    handler_AutoPlayResult.result->add_reference();
    return handler_AutoPlayResult.result;
  }

JSONValue *MusicCommandJSON::extraAutoPlayFailedResultToJSON(void) const
  {
    JSONValueHandler handler_AutoPlayFailedResult;
    storeAutoPlayFailedResult->write_as_json(&handler_AutoPlayFailedResult);
    handler_AutoPlayFailedResult.result->add_reference();
    return handler_AutoPlayFailedResult.result;
  }

JSONValue *MusicCommandJSON::extraAutoPlayVideoResultToJSON(void) const
  {
    JSONValueHandler handler_AutoPlayVideoResult;
    storeAutoPlayVideoResult->write_as_json(&handler_AutoPlayVideoResult);
    handler_AutoPlayVideoResult.result->add_reference();
    return handler_AutoPlayVideoResult.result;
  }

JSONValue *MusicCommandJSON::extraShowVideoResultToJSON(void) const
  {
    JSONValueHandler handler_ShowVideoResult;
    storeShowVideoResult->write_as_json(&handler_ShowVideoResult);
    handler_ShowVideoResult.result->add_reference();
    return handler_ShowVideoResult.result;
  }

JSONValue *MusicCommandJSON::extraAutoPlayGenericResultToJSON(void) const
  {
    JSONValueHandler handler_AutoPlayGenericResult;
    storeAutoPlayGenericResult->write_as_json(&handler_AutoPlayGenericResult);
    handler_AutoPlayGenericResult.result->add_reference();
    return handler_AutoPlayGenericResult.result;
  }

JSONValue *MusicCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void MusicCommandJSON::fromJSONAutoPlayPreviewResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAutoPlayPreviewResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONAutoPlayResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAutoPlayResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONAutoPlayFailedResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAutoPlayFailedResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONAutoPlayVideoResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAutoPlayVideoResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONShowVideoResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShowVideoResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONAutoPlayGenericResult(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DynamicResponseJSON *convert_classy = DynamicResponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAutoPlayGenericResult(convert_classy);
    convert_classy->remove_reference();
  }

void MusicCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicCommandNativeDataJSON *convert_classy = MusicCommandNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

MusicCommandJSON::MusicCommandJSON(void) :
        flagHasAutoPlayPreviewResult(false),
        flagHasAutoPlayResult(false),
        flagHasAutoPlayFailedResult(false),
        flagHasAutoPlayVideoResult(false),
        flagHasShowVideoResult(false),
        flagHasAutoPlayGenericResult(false),
        flagHasNativeData(false)
  {
  }

MusicCommandJSON::~MusicCommandJSON(void)
  {
    if (flagHasAutoPlayPreviewResult)
      {
        storeAutoPlayPreviewResult->remove_reference();
      }
    if (flagHasAutoPlayResult)
      {
        storeAutoPlayResult->remove_reference();
      }
    if (flagHasAutoPlayFailedResult)
      {
        storeAutoPlayFailedResult->remove_reference();
      }
    if (flagHasAutoPlayVideoResult)
      {
        storeAutoPlayVideoResult->remove_reference();
      }
    if (flagHasShowVideoResult)
      {
        storeShowVideoResult->remove_reference();
      }
    if (flagHasAutoPlayGenericResult)
      {
        storeAutoPlayGenericResult->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *MusicCommandJSON::getCommandKind(void) const
  {
    return "MusicCommand";
  }

bool MusicCommandJSON::hasAutoPlayPreviewResult(void) const
  {
    return flagHasAutoPlayPreviewResult;
  }

DynamicResponseJSON * MusicCommandJSON::getAutoPlayPreviewResult(void)
  {
    assert(flagHasAutoPlayPreviewResult);
    return storeAutoPlayPreviewResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getAutoPlayPreviewResult(void) const
  {
    assert(flagHasAutoPlayPreviewResult);
    return storeAutoPlayPreviewResult;
  }

bool MusicCommandJSON::hasAutoPlayResult(void) const
  {
    return flagHasAutoPlayResult;
  }

DynamicResponseJSON * MusicCommandJSON::getAutoPlayResult(void)
  {
    assert(flagHasAutoPlayResult);
    return storeAutoPlayResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getAutoPlayResult(void) const
  {
    assert(flagHasAutoPlayResult);
    return storeAutoPlayResult;
  }

bool MusicCommandJSON::hasAutoPlayFailedResult(void) const
  {
    return flagHasAutoPlayFailedResult;
  }

DynamicResponseJSON * MusicCommandJSON::getAutoPlayFailedResult(void)
  {
    assert(flagHasAutoPlayFailedResult);
    return storeAutoPlayFailedResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getAutoPlayFailedResult(void) const
  {
    assert(flagHasAutoPlayFailedResult);
    return storeAutoPlayFailedResult;
  }

bool MusicCommandJSON::hasAutoPlayVideoResult(void) const
  {
    return flagHasAutoPlayVideoResult;
  }

DynamicResponseJSON * MusicCommandJSON::getAutoPlayVideoResult(void)
  {
    assert(flagHasAutoPlayVideoResult);
    return storeAutoPlayVideoResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getAutoPlayVideoResult(void) const
  {
    assert(flagHasAutoPlayVideoResult);
    return storeAutoPlayVideoResult;
  }

bool MusicCommandJSON::hasShowVideoResult(void) const
  {
    return flagHasShowVideoResult;
  }

DynamicResponseJSON * MusicCommandJSON::getShowVideoResult(void)
  {
    assert(flagHasShowVideoResult);
    return storeShowVideoResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getShowVideoResult(void) const
  {
    assert(flagHasShowVideoResult);
    return storeShowVideoResult;
  }

bool MusicCommandJSON::hasAutoPlayGenericResult(void) const
  {
    return flagHasAutoPlayGenericResult;
  }

DynamicResponseJSON * MusicCommandJSON::getAutoPlayGenericResult(void)
  {
    assert(flagHasAutoPlayGenericResult);
    return storeAutoPlayGenericResult;
  }

const DynamicResponseJSON * MusicCommandJSON::getAutoPlayGenericResult(void) const
  {
    assert(flagHasAutoPlayGenericResult);
    return storeAutoPlayGenericResult;
  }

bool MusicCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

MusicCommandNativeDataJSON * MusicCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const MusicCommandNativeDataJSON * MusicCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

MusicCommandJSON *MusicCommandJSON::createForKey(const char *key, string_index *other_field_index)
  {
    switch ((unsigned char)(key[0]))
      {
        case 'G':
            if (strcmp(&(key[1]), "uessThatLyricCommand") == 0)
              {
                JSONValue *key_value = ((other_field_index == NULL) ? NULL : (JSONValue *)(lookup_in_string_index(other_field_index, "GuessThatLyricCommandKind")));
                if (key_value == NULL)
                    throw("The `GuessThatLyricCommandKind' field is missing.");
                JSONStringValue *key_string_value = key_value->string_value();
                if (key_string_value == NULL)
                    throw("The `GuessThatLyricCommandKind' field has a non-string value.");
                return GuessThatLyricCommandJSON::createForKey(key_string_value->getData(), other_field_index);
              }
            break;
        case 'M':
            if (strncmp(&(key[1]), "usic", 4) == 0)
              {
                switch ((unsigned char)(key[5]))
                  {
                    case 'C':
                        if (strcmp(&(key[6]), "hartsCommand") == 0)
                            return new MusicChartsCommandJSON();
                        break;
                    case 'S':
                        if (strcmp(&(key[6]), "earchCommand") == 0)
                            return new MusicSearchCommandJSON();
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }

    class GenericMusicCommandJSON : public MusicCommandJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMusicCommandJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMusicCommandJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMusicCommandKind(void) const  { return key.c_str(); }
        size_t extraMusicCommandComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMusicCommandComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMusicCommandComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMusicCommandComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMusicCommandLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMusicCommandLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMusicCommandAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMusicCommandSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMusicCommandLookup(key);
            if (old_field == NULL)
              {
                extraMusicCommandAppendPair(key, new_component);
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
    return new GenericMusicCommandJSON(key);
  }
MusicCommandJSON *MusicCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicCommandJSON>, MusicCommandJSON *, bool> generator("Type MusicCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
