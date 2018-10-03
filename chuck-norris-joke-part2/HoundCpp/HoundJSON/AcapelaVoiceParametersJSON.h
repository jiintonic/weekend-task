/* file "AcapelaVoiceParametersJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ACAPELAVOICEPARAMETERSJSON_H
#define ACAPELAVOICEPARAMETERSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <stdint.h>
#include "AcapelaPauseValueJSON.h"
#include "AcapelaPauseValueJSON.h"
#include "AcapelaPauseValueJSON.h"
#include "AcapelaPauseValueJSON.h"
#include "AcapelaPauseValueJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AcapelaVoiceParametersJSON : public ReferenceCounted
  {
  public:
    enum TypeReadingMode
      {
        ReadingMode_Text,
        ReadingMode_Word,
        ReadingMode_Letter
      };

    static TypeReadingMode  stringToReadingMode(const char *chars);
    static const char * stringFromReadingMode(TypeReadingMode the_enum);

  private:
    bool flagHasUseFilter;
    bool storeUseFilter;
    bool flagHasFilterValue1;
    uint8_t storeFilterValue1;
    bool flagHasFilterValue2;
    uint8_t storeFilterValue2;
    bool flagHasFilterValue3;
    uint8_t storeFilterValue3;
    bool flagHasFilterValue4;
    uint8_t storeFilterValue4;
    bool flagHasLeadingSilence;
    uint16_t storeLeadingSilence;
    bool flagHasTrailingSilence;
    uint16_t storeTrailingSilence;
    bool flagHasAudioBoost;
    uint8_t storeAudioBoost;
    bool flagHasPausePunct;
    AcapelaPauseValueJSON * storePausePunct;
    bool flagHasPauseSemicolon;
    AcapelaPauseValueJSON * storePauseSemicolon;
    bool flagHasPauseComma;
    AcapelaPauseValueJSON * storePauseComma;
    bool flagHasPauseBracket;
    AcapelaPauseValueJSON * storePauseBracket;
    bool flagHasPauseSpell;
    AcapelaPauseValueJSON * storePauseSpell;
    bool flagHasVoiceShaping;
    uint8_t storeVoiceShaping;
    bool flagHasReadingMode;
    TypeReadingMode storeReadingMode;
    bool flagHasSpeed;
    uint16_t storeSpeed;
    bool flagHasVolume;
    uint8_t storeVolume;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AcapelaVoiceParametersJSON(const AcapelaVoiceParametersJSON &);
    AcapelaVoiceParametersJSON & operator=(const AcapelaVoiceParametersJSON &other);

    void  fromJSONUseFilter(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilterValue1(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilterValue2(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilterValue3(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFilterValue4(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeadingSilence(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTrailingSilence(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAudioBoost(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPausePunct(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPauseSemicolon(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPauseComma(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPauseBracket(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPauseSpell(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVoiceShaping(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadingMode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpeed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVolume(JSONValue *json_value, bool ignore_extras = false);


  public:
    AcapelaVoiceParametersJSON(void);
    virtual ~AcapelaVoiceParametersJSON(void);
    bool  hasUseFilter(void) const;
    bool  getUseFilter(void);
    const bool  getUseFilter(void) const;
    bool  hasFilterValue1(void) const;
    uint8_t  getFilterValue1(void);
    const uint8_t  getFilterValue1(void) const;
    bool  hasFilterValue2(void) const;
    uint8_t  getFilterValue2(void);
    const uint8_t  getFilterValue2(void) const;
    bool  hasFilterValue3(void) const;
    uint8_t  getFilterValue3(void);
    const uint8_t  getFilterValue3(void) const;
    bool  hasFilterValue4(void) const;
    uint8_t  getFilterValue4(void);
    const uint8_t  getFilterValue4(void) const;
    bool  hasLeadingSilence(void) const;
    uint16_t  getLeadingSilence(void);
    const uint16_t  getLeadingSilence(void) const;
    bool  hasTrailingSilence(void) const;
    uint16_t  getTrailingSilence(void);
    const uint16_t  getTrailingSilence(void) const;
    bool  hasAudioBoost(void) const;
    uint8_t  getAudioBoost(void);
    const uint8_t  getAudioBoost(void) const;
    bool  hasPausePunct(void) const;
    AcapelaPauseValueJSON *  getPausePunct(void);
    const AcapelaPauseValueJSON *  getPausePunct(void) const;
    AcapelaPauseValueJSON::TypeValue  getPausePunctValue(void);
    const AcapelaPauseValueJSON::TypeValue  getPausePunctValue(void) const;
    const char * getPausePunctAsChars(void) const;
    std::string  getPausePunctAsString(void) const;
    bool  hasPauseSemicolon(void) const;
    AcapelaPauseValueJSON *  getPauseSemicolon(void);
    const AcapelaPauseValueJSON *  getPauseSemicolon(void) const;
    AcapelaPauseValueJSON::TypeValue  getPauseSemicolonValue(void);
    const AcapelaPauseValueJSON::TypeValue  getPauseSemicolonValue(void) const;
    const char * getPauseSemicolonAsChars(void) const;
    std::string  getPauseSemicolonAsString(void) const;
    bool  hasPauseComma(void) const;
    AcapelaPauseValueJSON *  getPauseComma(void);
    const AcapelaPauseValueJSON *  getPauseComma(void) const;
    AcapelaPauseValueJSON::TypeValue  getPauseCommaValue(void);
    const AcapelaPauseValueJSON::TypeValue  getPauseCommaValue(void) const;
    const char * getPauseCommaAsChars(void) const;
    std::string  getPauseCommaAsString(void) const;
    bool  hasPauseBracket(void) const;
    AcapelaPauseValueJSON *  getPauseBracket(void);
    const AcapelaPauseValueJSON *  getPauseBracket(void) const;
    AcapelaPauseValueJSON::TypeValue  getPauseBracketValue(void);
    const AcapelaPauseValueJSON::TypeValue  getPauseBracketValue(void) const;
    const char * getPauseBracketAsChars(void) const;
    std::string  getPauseBracketAsString(void) const;
    bool  hasPauseSpell(void) const;
    AcapelaPauseValueJSON *  getPauseSpell(void);
    const AcapelaPauseValueJSON *  getPauseSpell(void) const;
    AcapelaPauseValueJSON::TypeValue  getPauseSpellValue(void);
    const AcapelaPauseValueJSON::TypeValue  getPauseSpellValue(void) const;
    const char * getPauseSpellAsChars(void) const;
    std::string  getPauseSpellAsString(void) const;
    bool  hasVoiceShaping(void) const;
    uint8_t  getVoiceShaping(void);
    const uint8_t  getVoiceShaping(void) const;
    bool  hasReadingMode(void) const;
    TypeReadingMode  getReadingMode(void);
    const TypeReadingMode  getReadingMode(void) const;
    const char * getReadingModeAsChars(void) const;
    std::string  getReadingModeAsString(void) const;
    bool  hasSpeed(void) const;
    uint16_t  getSpeed(void);
    const uint16_t  getSpeed(void) const;
    bool  hasVolume(void) const;
    uint8_t  getVolume(void);
    const uint8_t  getVolume(void) const;

    virtual size_t extraAcapelaVoiceParametersComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAcapelaVoiceParametersComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAcapelaVoiceParametersComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAcapelaVoiceParametersComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAcapelaVoiceParametersLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAcapelaVoiceParametersLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUseFilter(bool new_value)
      {
        flagHasUseFilter = true;
        storeUseFilter = new_value;
      }
    void unsetUseFilter(void)
      {
        flagHasUseFilter = false;
      }
    void setFilterValue1(uint8_t new_value)
      {
        flagHasFilterValue1 = true;
        if (new_value < 0)
            throw("The value for field FilterValue1 of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 200)
            throw("The value for field FilterValue1 of AcapelaVoiceParametersJSON is greater than the upper bound (200) for that field.");
        storeFilterValue1 = new_value;
      }
    void unsetFilterValue1(void)
      {
        flagHasFilterValue1 = false;
      }
    void setFilterValue2(uint8_t new_value)
      {
        flagHasFilterValue2 = true;
        if (new_value < 0)
            throw("The value for field FilterValue2 of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 200)
            throw("The value for field FilterValue2 of AcapelaVoiceParametersJSON is greater than the upper bound (200) for that field.");
        storeFilterValue2 = new_value;
      }
    void unsetFilterValue2(void)
      {
        flagHasFilterValue2 = false;
      }
    void setFilterValue3(uint8_t new_value)
      {
        flagHasFilterValue3 = true;
        if (new_value < 0)
            throw("The value for field FilterValue3 of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 200)
            throw("The value for field FilterValue3 of AcapelaVoiceParametersJSON is greater than the upper bound (200) for that field.");
        storeFilterValue3 = new_value;
      }
    void unsetFilterValue3(void)
      {
        flagHasFilterValue3 = false;
      }
    void setFilterValue4(uint8_t new_value)
      {
        flagHasFilterValue4 = true;
        if (new_value < 0)
            throw("The value for field FilterValue4 of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 200)
            throw("The value for field FilterValue4 of AcapelaVoiceParametersJSON is greater than the upper bound (200) for that field.");
        storeFilterValue4 = new_value;
      }
    void unsetFilterValue4(void)
      {
        flagHasFilterValue4 = false;
      }
    void setLeadingSilence(uint16_t new_value)
      {
        flagHasLeadingSilence = true;
        if (new_value < 20)
            throw("The value for field LeadingSilence of AcapelaVoiceParametersJSON is less than the lower bound (20) for that field.");
        if (new_value > 5000)
            throw("The value for field LeadingSilence of AcapelaVoiceParametersJSON is greater than the upper bound (5000) for that field.");
        storeLeadingSilence = new_value;
      }
    void unsetLeadingSilence(void)
      {
        flagHasLeadingSilence = false;
      }
    void setTrailingSilence(uint16_t new_value)
      {
        flagHasTrailingSilence = true;
        if (new_value < 20)
            throw("The value for field TrailingSilence of AcapelaVoiceParametersJSON is less than the lower bound (20) for that field.");
        if (new_value > 5000)
            throw("The value for field TrailingSilence of AcapelaVoiceParametersJSON is greater than the upper bound (5000) for that field.");
        storeTrailingSilence = new_value;
      }
    void unsetTrailingSilence(void)
      {
        flagHasTrailingSilence = false;
      }
    void setAudioBoost(uint8_t new_value)
      {
        flagHasAudioBoost = true;
        if (new_value < 0)
            throw("The value for field AudioBoost of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 90)
            throw("The value for field AudioBoost of AcapelaVoiceParametersJSON is greater than the upper bound (90) for that field.");
        storeAudioBoost = new_value;
      }
    void unsetAudioBoost(void)
      {
        flagHasAudioBoost = false;
      }
    void setPausePunct(AcapelaPauseValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPausePunct)
          {
            storePausePunct->remove_reference();
          }
        flagHasPausePunct = true;
        storePausePunct = new_value;
      }
    void setPausePunct(AcapelaPauseValueJSON::TypeValue new_value)
      {
        setPausePunct(new AcapelaPauseValueJSON(new_value));
      }
    void setPausePunct(const char *chars)
      {
        AcapelaPauseValueJSON::TypeValueKnownValues known = AcapelaPauseValueJSON::stringToValue(chars);
        AcapelaPauseValueJSON::TypeValue new_value;
        if (known == AcapelaPauseValueJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPausePunct(new_value);
      }
    void setPausePunct(std::string the_string)
      {
        setPausePunct(the_string.c_str());
      }
    void unsetPausePunct(void)
      {
        if (flagHasPausePunct)
          {
            storePausePunct->remove_reference();
          }
        flagHasPausePunct = false;
      }
    void setPauseSemicolon(AcapelaPauseValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPauseSemicolon)
          {
            storePauseSemicolon->remove_reference();
          }
        flagHasPauseSemicolon = true;
        storePauseSemicolon = new_value;
      }
    void setPauseSemicolon(AcapelaPauseValueJSON::TypeValue new_value)
      {
        setPauseSemicolon(new AcapelaPauseValueJSON(new_value));
      }
    void setPauseSemicolon(const char *chars)
      {
        AcapelaPauseValueJSON::TypeValueKnownValues known = AcapelaPauseValueJSON::stringToValue(chars);
        AcapelaPauseValueJSON::TypeValue new_value;
        if (known == AcapelaPauseValueJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPauseSemicolon(new_value);
      }
    void setPauseSemicolon(std::string the_string)
      {
        setPauseSemicolon(the_string.c_str());
      }
    void unsetPauseSemicolon(void)
      {
        if (flagHasPauseSemicolon)
          {
            storePauseSemicolon->remove_reference();
          }
        flagHasPauseSemicolon = false;
      }
    void setPauseComma(AcapelaPauseValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPauseComma)
          {
            storePauseComma->remove_reference();
          }
        flagHasPauseComma = true;
        storePauseComma = new_value;
      }
    void setPauseComma(AcapelaPauseValueJSON::TypeValue new_value)
      {
        setPauseComma(new AcapelaPauseValueJSON(new_value));
      }
    void setPauseComma(const char *chars)
      {
        AcapelaPauseValueJSON::TypeValueKnownValues known = AcapelaPauseValueJSON::stringToValue(chars);
        AcapelaPauseValueJSON::TypeValue new_value;
        if (known == AcapelaPauseValueJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPauseComma(new_value);
      }
    void setPauseComma(std::string the_string)
      {
        setPauseComma(the_string.c_str());
      }
    void unsetPauseComma(void)
      {
        if (flagHasPauseComma)
          {
            storePauseComma->remove_reference();
          }
        flagHasPauseComma = false;
      }
    void setPauseBracket(AcapelaPauseValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPauseBracket)
          {
            storePauseBracket->remove_reference();
          }
        flagHasPauseBracket = true;
        storePauseBracket = new_value;
      }
    void setPauseBracket(AcapelaPauseValueJSON::TypeValue new_value)
      {
        setPauseBracket(new AcapelaPauseValueJSON(new_value));
      }
    void setPauseBracket(const char *chars)
      {
        AcapelaPauseValueJSON::TypeValueKnownValues known = AcapelaPauseValueJSON::stringToValue(chars);
        AcapelaPauseValueJSON::TypeValue new_value;
        if (known == AcapelaPauseValueJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPauseBracket(new_value);
      }
    void setPauseBracket(std::string the_string)
      {
        setPauseBracket(the_string.c_str());
      }
    void unsetPauseBracket(void)
      {
        if (flagHasPauseBracket)
          {
            storePauseBracket->remove_reference();
          }
        flagHasPauseBracket = false;
      }
    void setPauseSpell(AcapelaPauseValueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPauseSpell)
          {
            storePauseSpell->remove_reference();
          }
        flagHasPauseSpell = true;
        storePauseSpell = new_value;
      }
    void setPauseSpell(AcapelaPauseValueJSON::TypeValue new_value)
      {
        setPauseSpell(new AcapelaPauseValueJSON(new_value));
      }
    void setPauseSpell(const char *chars)
      {
        AcapelaPauseValueJSON::TypeValueKnownValues known = AcapelaPauseValueJSON::stringToValue(chars);
        AcapelaPauseValueJSON::TypeValue new_value;
        if (known == AcapelaPauseValueJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setPauseSpell(new_value);
      }
    void setPauseSpell(std::string the_string)
      {
        setPauseSpell(the_string.c_str());
      }
    void unsetPauseSpell(void)
      {
        if (flagHasPauseSpell)
          {
            storePauseSpell->remove_reference();
          }
        flagHasPauseSpell = false;
      }
    void setVoiceShaping(uint8_t new_value)
      {
        flagHasVoiceShaping = true;
        if (new_value < 50)
            throw("The value for field VoiceShaping of AcapelaVoiceParametersJSON is less than the lower bound (50) for that field.");
        if (new_value > 150)
            throw("The value for field VoiceShaping of AcapelaVoiceParametersJSON is greater than the upper bound (150) for that field.");
        storeVoiceShaping = new_value;
      }
    void unsetVoiceShaping(void)
      {
        flagHasVoiceShaping = false;
      }
    void setReadingMode(TypeReadingMode new_value)
      {
        flagHasReadingMode = true;
        storeReadingMode = new_value;
      }
    void setReadingMode(const char *chars)
      {
        setReadingMode(stringToReadingMode(chars));
      }
    void setReadingMode(std::string the_string)
      {
        setReadingMode(stringToReadingMode(the_string.c_str()));
      }
    void unsetReadingMode(void)
      {
        flagHasReadingMode = false;
      }
    void setSpeed(uint16_t new_value)
      {
        flagHasSpeed = true;
        if (new_value < 30)
            throw("The value for field Speed of AcapelaVoiceParametersJSON is less than the lower bound (30) for that field.");
        if (new_value > 300)
            throw("The value for field Speed of AcapelaVoiceParametersJSON is greater than the upper bound (300) for that field.");
        storeSpeed = new_value;
      }
    void unsetSpeed(void)
      {
        flagHasSpeed = false;
      }
    void setVolume(uint8_t new_value)
      {
        flagHasVolume = true;
        if (new_value < 0)
            throw("The value for field Volume of AcapelaVoiceParametersJSON is less than the lower bound (0) for that field.");
        if (new_value > 150)
            throw("The value for field Volume of AcapelaVoiceParametersJSON is greater than the upper bound (150) for that field.");
        storeVolume = new_value;
      }
    void unsetVolume(void)
      {
        flagHasVolume = false;
      }

    virtual void extraAcapelaVoiceParametersAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAcapelaVoiceParametersSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAcapelaVoiceParametersLookup(key);
        if (old_field == NULL)
          {
            extraAcapelaVoiceParametersAppendPair(key, new_component);
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
        if (flagHasUseFilter)
          {
            handler->start_pair("UseFilter");
            handler->boolean_value(storeUseFilter);
          }
        if (flagHasFilterValue1)
          {
            handler->start_pair("FilterValue1");
            handler->number_value(storeFilterValue1);
          }
        if (flagHasFilterValue2)
          {
            handler->start_pair("FilterValue2");
            handler->number_value(storeFilterValue2);
          }
        if (flagHasFilterValue3)
          {
            handler->start_pair("FilterValue3");
            handler->number_value(storeFilterValue3);
          }
        if (flagHasFilterValue4)
          {
            handler->start_pair("FilterValue4");
            handler->number_value(storeFilterValue4);
          }
        if (flagHasLeadingSilence)
          {
            handler->start_pair("LeadingSilence");
            handler->number_value(storeLeadingSilence);
          }
        if (flagHasTrailingSilence)
          {
            handler->start_pair("TrailingSilence");
            handler->number_value(storeTrailingSilence);
          }
        if (flagHasAudioBoost)
          {
            handler->start_pair("AudioBoost");
            handler->number_value(storeAudioBoost);
          }
        if (flagHasPausePunct)
          {
            handler->start_pair("PausePunct");
            storePausePunct->write_as_json(handler);
          }
        if (flagHasPauseSemicolon)
          {
            handler->start_pair("PauseSemicolon");
            storePauseSemicolon->write_as_json(handler);
          }
        if (flagHasPauseComma)
          {
            handler->start_pair("PauseComma");
            storePauseComma->write_as_json(handler);
          }
        if (flagHasPauseBracket)
          {
            handler->start_pair("PauseBracket");
            storePauseBracket->write_as_json(handler);
          }
        if (flagHasPauseSpell)
          {
            handler->start_pair("PauseSpell");
            storePauseSpell->write_as_json(handler);
          }
        if (flagHasVoiceShaping)
          {
            handler->start_pair("VoiceShaping");
            handler->number_value(storeVoiceShaping);
          }
        if (flagHasReadingMode)
          {
            handler->start_pair("ReadingMode");
            switch (storeReadingMode)
              {
                case ReadingMode_Text:
                    handler->string_value("Text");
                    break;
                case ReadingMode_Word:
                    handler->string_value("Word");
                    break;
                case ReadingMode_Letter:
                    handler->string_value("Letter");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasSpeed)
          {
            handler->start_pair("Speed");
            handler->number_value(storeSpeed);
          }
        if (flagHasVolume)
          {
            handler->start_pair("Volume");
            handler->number_value(storeVolume);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AcapelaVoiceParametersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AcapelaVoiceParametersJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AcapelaVoiceParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AcapelaVoiceParametersJSON>, AcapelaVoiceParametersJSON *, bool> generator("Type AcapelaVoiceParameters", ignore_extras);
            parse_json_value(text, "Text for AcapelaVoiceParametersJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AcapelaVoiceParametersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AcapelaVoiceParametersJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AcapelaVoiceParametersJSON>, AcapelaVoiceParametersJSON *, bool> generator("Type AcapelaVoiceParameters", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUseFilter;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 200>, uint8_t, uint8_t > fieldGeneratorFilterValue1;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 200>, uint8_t, uint8_t > fieldGeneratorFilterValue2;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 200>, uint8_t, uint8_t > fieldGeneratorFilterValue3;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 200>, uint8_t, uint8_t > fieldGeneratorFilterValue4;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 20, 5000>, uint16_t, uint16_t > fieldGeneratorLeadingSilence;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 20, 5000>, uint16_t, uint16_t > fieldGeneratorTrailingSilence;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 90>, uint8_t, uint8_t > fieldGeneratorAudioBoost;
        JSONHoldingGenerator<AcapelaPauseValueJSON::Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool > fieldGeneratorPausePunct;
        JSONHoldingGenerator<AcapelaPauseValueJSON::Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool > fieldGeneratorPauseSemicolon;
        JSONHoldingGenerator<AcapelaPauseValueJSON::Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool > fieldGeneratorPauseComma;
        JSONHoldingGenerator<AcapelaPauseValueJSON::Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool > fieldGeneratorPauseBracket;
        JSONHoldingGenerator<AcapelaPauseValueJSON::Generator, RCHandle<AcapelaPauseValueJSON>, AcapelaPauseValueJSON *, bool > fieldGeneratorPauseSpell;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 50, 150>, uint8_t, uint8_t > fieldGeneratorVoiceShaping;
    class FieldGeneratorReadingMode : public JSONStringGenerator
          {
          protected:
            FieldGeneratorReadingMode(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorReadingMode(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToReadingMode(result));
              }
            virtual void handle_result(TypeReadingMode result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorReadingMode, TypeReadingMode, TypeReadingMode > fieldGeneratorReadingMode;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint16_t, 30, 300>, uint16_t, uint16_t > fieldGeneratorSpeed;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 150>, uint8_t, uint8_t > fieldGeneratorVolume;
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
            AcapelaVoiceParametersJSON *result = new AcapelaVoiceParametersJSON();
            assert(result != NULL);
            RCHandle<AcapelaVoiceParametersJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAcapelaVoiceParametersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AcapelaVoiceParametersJSON *result)
          {
            if (fieldGeneratorUseFilter.have_value)
              {
                result->setUseFilter(fieldGeneratorUseFilter.value);
                fieldGeneratorUseFilter.have_value = false;
              }
            if (fieldGeneratorFilterValue1.have_value)
              {
                result->setFilterValue1(fieldGeneratorFilterValue1.value);
                fieldGeneratorFilterValue1.have_value = false;
              }
            if (fieldGeneratorFilterValue2.have_value)
              {
                result->setFilterValue2(fieldGeneratorFilterValue2.value);
                fieldGeneratorFilterValue2.have_value = false;
              }
            if (fieldGeneratorFilterValue3.have_value)
              {
                result->setFilterValue3(fieldGeneratorFilterValue3.value);
                fieldGeneratorFilterValue3.have_value = false;
              }
            if (fieldGeneratorFilterValue4.have_value)
              {
                result->setFilterValue4(fieldGeneratorFilterValue4.value);
                fieldGeneratorFilterValue4.have_value = false;
              }
            if (fieldGeneratorLeadingSilence.have_value)
              {
                result->setLeadingSilence(fieldGeneratorLeadingSilence.value);
                fieldGeneratorLeadingSilence.have_value = false;
              }
            if (fieldGeneratorTrailingSilence.have_value)
              {
                result->setTrailingSilence(fieldGeneratorTrailingSilence.value);
                fieldGeneratorTrailingSilence.have_value = false;
              }
            if (fieldGeneratorAudioBoost.have_value)
              {
                result->setAudioBoost(fieldGeneratorAudioBoost.value);
                fieldGeneratorAudioBoost.have_value = false;
              }
            if (fieldGeneratorPausePunct.have_value)
              {
                result->setPausePunct(fieldGeneratorPausePunct.value.referenced());
                fieldGeneratorPausePunct.have_value = false;
              }
            if (fieldGeneratorPauseSemicolon.have_value)
              {
                result->setPauseSemicolon(fieldGeneratorPauseSemicolon.value.referenced());
                fieldGeneratorPauseSemicolon.have_value = false;
              }
            if (fieldGeneratorPauseComma.have_value)
              {
                result->setPauseComma(fieldGeneratorPauseComma.value.referenced());
                fieldGeneratorPauseComma.have_value = false;
              }
            if (fieldGeneratorPauseBracket.have_value)
              {
                result->setPauseBracket(fieldGeneratorPauseBracket.value.referenced());
                fieldGeneratorPauseBracket.have_value = false;
              }
            if (fieldGeneratorPauseSpell.have_value)
              {
                result->setPauseSpell(fieldGeneratorPauseSpell.value.referenced());
                fieldGeneratorPauseSpell.have_value = false;
              }
            if (fieldGeneratorVoiceShaping.have_value)
              {
                result->setVoiceShaping(fieldGeneratorVoiceShaping.value);
                fieldGeneratorVoiceShaping.have_value = false;
              }
            if (fieldGeneratorReadingMode.have_value)
              {
                result->setReadingMode(fieldGeneratorReadingMode.value);
                fieldGeneratorReadingMode.have_value = false;
              }
            if (fieldGeneratorSpeed.have_value)
              {
                result->setSpeed(fieldGeneratorSpeed.value);
                fieldGeneratorSpeed.have_value = false;
              }
            if (fieldGeneratorVolume.have_value)
              {
                result->setVolume(fieldGeneratorVolume.value);
                fieldGeneratorVolume.have_value = false;
              }
          }
        virtual void handle_result(AcapelaVoiceParametersJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "udioBoost") == 0)
                        return &fieldGeneratorAudioBoost;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "ilterValue", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case '1':
                                if (field_name[12] == 0)
                                    return &fieldGeneratorFilterValue1;
                                break;
                            case '2':
                                if (field_name[12] == 0)
                                    return &fieldGeneratorFilterValue2;
                                break;
                            case '3':
                                if (field_name[12] == 0)
                                    return &fieldGeneratorFilterValue3;
                                break;
                            case '4':
                                if (field_name[12] == 0)
                                    return &fieldGeneratorFilterValue4;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "eadingSilence") == 0)
                        return &fieldGeneratorLeadingSilence;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "ause", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'B':
                                if (strcmp(&(field_name[6]), "racket") == 0)
                                    return &fieldGeneratorPauseBracket;
                                break;
                            case 'C':
                                if (strcmp(&(field_name[6]), "omma") == 0)
                                    return &fieldGeneratorPauseComma;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[6]), "unct") == 0)
                                    return &fieldGeneratorPausePunct;
                                break;
                            case 'S':
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'e':
                                        if (strcmp(&(field_name[7]), "micolon") == 0)
                                            return &fieldGeneratorPauseSemicolon;
                                        break;
                                    case 'p':
                                        if (strcmp(&(field_name[7]), "ell") == 0)
                                            return &fieldGeneratorPauseSpell;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eadingMode") == 0)
                        return &fieldGeneratorReadingMode;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "peed") == 0)
                        return &fieldGeneratorSpeed;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "railingSilence") == 0)
                        return &fieldGeneratorTrailingSilence;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "seFilter") == 0)
                        return &fieldGeneratorUseFilter;
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "ceShaping") == 0)
                                    return &fieldGeneratorVoiceShaping;
                                break;
                            case 'l':
                                if (strcmp(&(field_name[3]), "ume") == 0)
                                    return &fieldGeneratorVolume;
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
        Generator(bool ignore_extras = false) : fieldGeneratorUseFilter("field \"UseFilter\" of the AcapelaVoiceParameters class"), fieldGeneratorFilterValue1("field \"FilterValue1\" of the AcapelaVoiceParameters class"), fieldGeneratorFilterValue2("field \"FilterValue2\" of the AcapelaVoiceParameters class"), fieldGeneratorFilterValue3("field \"FilterValue3\" of the AcapelaVoiceParameters class"), fieldGeneratorFilterValue4("field \"FilterValue4\" of the AcapelaVoiceParameters class"), fieldGeneratorLeadingSilence("field \"LeadingSilence\" of the AcapelaVoiceParameters class"), fieldGeneratorTrailingSilence("field \"TrailingSilence\" of the AcapelaVoiceParameters class"), fieldGeneratorAudioBoost("field \"AudioBoost\" of the AcapelaVoiceParameters class"), fieldGeneratorPausePunct("field \"PausePunct\" of the AcapelaVoiceParameters class", ignore_extras), fieldGeneratorPauseSemicolon("field \"PauseSemicolon\" of the AcapelaVoiceParameters class", ignore_extras), fieldGeneratorPauseComma("field \"PauseComma\" of the AcapelaVoiceParameters class", ignore_extras), fieldGeneratorPauseBracket("field \"PauseBracket\" of the AcapelaVoiceParameters class", ignore_extras), fieldGeneratorPauseSpell("field \"PauseSpell\" of the AcapelaVoiceParameters class", ignore_extras), fieldGeneratorVoiceShaping("field \"VoiceShaping\" of the AcapelaVoiceParameters class"), fieldGeneratorReadingMode("field \"ReadingMode\" of the AcapelaVoiceParameters class"), fieldGeneratorSpeed("field \"Speed\" of the AcapelaVoiceParameters class"), fieldGeneratorVolume("field \"Volume\" of the AcapelaVoiceParameters class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AcapelaVoiceParameters class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUseFilter.reset();
            fieldGeneratorFilterValue1.reset();
            fieldGeneratorFilterValue2.reset();
            fieldGeneratorFilterValue3.reset();
            fieldGeneratorFilterValue4.reset();
            fieldGeneratorLeadingSilence.reset();
            fieldGeneratorTrailingSilence.reset();
            fieldGeneratorAudioBoost.reset();
            fieldGeneratorPausePunct.reset();
            fieldGeneratorPauseSemicolon.reset();
            fieldGeneratorPauseComma.reset();
            fieldGeneratorPauseBracket.reset();
            fieldGeneratorPauseSpell.reset();
            fieldGeneratorVoiceShaping.reset();
            fieldGeneratorReadingMode.reset();
            fieldGeneratorSpeed.reset();
            fieldGeneratorVolume.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ACAPELAVOICEPARAMETERSJSON_H */
