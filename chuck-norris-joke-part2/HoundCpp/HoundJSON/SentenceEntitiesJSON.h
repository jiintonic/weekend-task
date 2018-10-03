/* file "SentenceEntitiesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SENTENCEENTITIESJSON_H
#define SENTENCEENTITIESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "WhoJSON.h"
#include "WhenJSON.h"
#include "MapLocationJSON.h"
#include "AmountJSON.h"
#include "WhatWordJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SentenceEntitiesJSON : public ReferenceCounted
  {
  private:
    bool flagHasWho;
    std::vector< WhoJSON * > storeWho;
    bool flagHasSpecialPersonIndex;
    OInteger storeSpecialPersonIndex;
    bool flagHasWhen;
    std::vector< WhenJSON * > storeWhen;
    bool flagHasSpecialTimeIndex;
    OInteger storeSpecialTimeIndex;
    bool flagHasWhere;
    std::vector< MapLocationJSON * > storeWhere;
    bool flagHasSpecialPlaceIndex;
    OInteger storeSpecialPlaceIndex;
    bool flagHasHowMuch;
    std::vector< AmountJSON * > storeHowMuch;
    bool flagHasSpecialAmountIndex;
    OInteger storeSpecialAmountIndex;
    bool flagHasWhatWord;
    std::vector< WhatWordJSON * > storeWhatWord;
    bool flagHasSpecialWhatWordIndex;
    OInteger storeSpecialWhatWordIndex;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SentenceEntitiesJSON(const SentenceEntitiesJSON &);
    SentenceEntitiesJSON & operator=(const SentenceEntitiesJSON &other);

    void  fromJSONWho(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialPersonIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWhen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialTimeIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWhere(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialPlaceIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHowMuch(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialAmountIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWhatWord(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialWhatWordIndex(JSONValue *json_value, bool ignore_extras = false);


  public:
    SentenceEntitiesJSON(void);
    virtual ~SentenceEntitiesJSON(void);
    bool  hasWho(void) const;
    size_t  countOfWho(void) const;
    WhoJSON *  elementOfWho(size_t element_num);
    const WhoJSON *  elementOfWho(size_t element_num) const;
    std::vector< WhoJSON * >  getWho(void);
    const std::vector< WhoJSON * >  getWho(void) const;
    bool  hasSpecialPersonIndex(void) const;
    OInteger  getSpecialPersonIndex(void);
    const OInteger  getSpecialPersonIndex(void) const;
    bool  hasWhen(void) const;
    size_t  countOfWhen(void) const;
    WhenJSON *  elementOfWhen(size_t element_num);
    const WhenJSON *  elementOfWhen(size_t element_num) const;
    std::vector< WhenJSON * >  getWhen(void);
    const std::vector< WhenJSON * >  getWhen(void) const;
    bool  hasSpecialTimeIndex(void) const;
    OInteger  getSpecialTimeIndex(void);
    const OInteger  getSpecialTimeIndex(void) const;
    bool  hasWhere(void) const;
    size_t  countOfWhere(void) const;
    MapLocationJSON *  elementOfWhere(size_t element_num);
    const MapLocationJSON *  elementOfWhere(size_t element_num) const;
    std::vector< MapLocationJSON * >  getWhere(void);
    const std::vector< MapLocationJSON * >  getWhere(void) const;
    bool  hasSpecialPlaceIndex(void) const;
    OInteger  getSpecialPlaceIndex(void);
    const OInteger  getSpecialPlaceIndex(void) const;
    bool  hasHowMuch(void) const;
    size_t  countOfHowMuch(void) const;
    AmountJSON *  elementOfHowMuch(size_t element_num);
    const AmountJSON *  elementOfHowMuch(size_t element_num) const;
    std::vector< AmountJSON * >  getHowMuch(void);
    const std::vector< AmountJSON * >  getHowMuch(void) const;
    bool  hasSpecialAmountIndex(void) const;
    OInteger  getSpecialAmountIndex(void);
    const OInteger  getSpecialAmountIndex(void) const;
    bool  hasWhatWord(void) const;
    size_t  countOfWhatWord(void) const;
    WhatWordJSON *  elementOfWhatWord(size_t element_num);
    const WhatWordJSON *  elementOfWhatWord(size_t element_num) const;
    std::vector< WhatWordJSON * >  getWhatWord(void);
    const std::vector< WhatWordJSON * >  getWhatWord(void) const;
    bool  hasSpecialWhatWordIndex(void) const;
    OInteger  getSpecialWhatWordIndex(void);
    const OInteger  getSpecialWhatWordIndex(void) const;

    virtual size_t extraSentenceEntitiesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSentenceEntitiesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSentenceEntitiesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSentenceEntitiesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSentenceEntitiesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSentenceEntitiesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initWho(void)
      {
        if (flagHasWho)
          {
            for (size_t num6 = 0; num6 < storeWho.size(); ++num6)
              {
                storeWho[num6]->remove_reference();
              }
          }
        flagHasWho = true;
        storeWho.clear();
      }
    void appendWho(WhoJSON * to_append)
      {
        if (!flagHasWho)
          {
            flagHasWho = true;
            storeWho.clear();
          }
        assert(flagHasWho);
        to_append->add_reference();
        storeWho.push_back(to_append);
      }
    void unsetWho(void)
      {
        if (flagHasWho)
          {
            for (size_t num7 = 0; num7 < storeWho.size(); ++num7)
              {
                storeWho[num7]->remove_reference();
              }
          }
        flagHasWho = false;
        storeWho.clear();
      }
    void setSpecialPersonIndex(OInteger new_value)
      {
        flagHasSpecialPersonIndex = true;
        if (new_value < 0)
            throw("The value for field SpecialPersonIndex of SentenceEntitiesJSON is less than the lower bound (0) for that field.");
        storeSpecialPersonIndex = new_value;
      }
    void unsetSpecialPersonIndex(void)
      {
        flagHasSpecialPersonIndex = false;
      }
    void initWhen(void)
      {
        if (flagHasWhen)
          {
            for (size_t num8 = 0; num8 < storeWhen.size(); ++num8)
              {
                storeWhen[num8]->remove_reference();
              }
          }
        flagHasWhen = true;
        storeWhen.clear();
      }
    void appendWhen(WhenJSON * to_append)
      {
        if (!flagHasWhen)
          {
            flagHasWhen = true;
            storeWhen.clear();
          }
        assert(flagHasWhen);
        to_append->add_reference();
        storeWhen.push_back(to_append);
      }
    void unsetWhen(void)
      {
        if (flagHasWhen)
          {
            for (size_t num9 = 0; num9 < storeWhen.size(); ++num9)
              {
                storeWhen[num9]->remove_reference();
              }
          }
        flagHasWhen = false;
        storeWhen.clear();
      }
    void setSpecialTimeIndex(OInteger new_value)
      {
        flagHasSpecialTimeIndex = true;
        if (new_value < 0)
            throw("The value for field SpecialTimeIndex of SentenceEntitiesJSON is less than the lower bound (0) for that field.");
        storeSpecialTimeIndex = new_value;
      }
    void unsetSpecialTimeIndex(void)
      {
        flagHasSpecialTimeIndex = false;
      }
    void initWhere(void)
      {
        if (flagHasWhere)
          {
            for (size_t num10 = 0; num10 < storeWhere.size(); ++num10)
              {
                storeWhere[num10]->remove_reference();
              }
          }
        flagHasWhere = true;
        storeWhere.clear();
      }
    void appendWhere(MapLocationJSON * to_append)
      {
        if (!flagHasWhere)
          {
            flagHasWhere = true;
            storeWhere.clear();
          }
        assert(flagHasWhere);
        to_append->add_reference();
        storeWhere.push_back(to_append);
      }
    void unsetWhere(void)
      {
        if (flagHasWhere)
          {
            for (size_t num11 = 0; num11 < storeWhere.size(); ++num11)
              {
                storeWhere[num11]->remove_reference();
              }
          }
        flagHasWhere = false;
        storeWhere.clear();
      }
    void setSpecialPlaceIndex(OInteger new_value)
      {
        flagHasSpecialPlaceIndex = true;
        if (new_value < 0)
            throw("The value for field SpecialPlaceIndex of SentenceEntitiesJSON is less than the lower bound (0) for that field.");
        storeSpecialPlaceIndex = new_value;
      }
    void unsetSpecialPlaceIndex(void)
      {
        flagHasSpecialPlaceIndex = false;
      }
    void initHowMuch(void)
      {
        if (flagHasHowMuch)
          {
            for (size_t num12 = 0; num12 < storeHowMuch.size(); ++num12)
              {
                storeHowMuch[num12]->remove_reference();
              }
          }
        flagHasHowMuch = true;
        storeHowMuch.clear();
      }
    void appendHowMuch(AmountJSON * to_append)
      {
        if (!flagHasHowMuch)
          {
            flagHasHowMuch = true;
            storeHowMuch.clear();
          }
        assert(flagHasHowMuch);
        to_append->add_reference();
        storeHowMuch.push_back(to_append);
      }
    void unsetHowMuch(void)
      {
        if (flagHasHowMuch)
          {
            for (size_t num13 = 0; num13 < storeHowMuch.size(); ++num13)
              {
                storeHowMuch[num13]->remove_reference();
              }
          }
        flagHasHowMuch = false;
        storeHowMuch.clear();
      }
    void setSpecialAmountIndex(OInteger new_value)
      {
        flagHasSpecialAmountIndex = true;
        if (new_value < 0)
            throw("The value for field SpecialAmountIndex of SentenceEntitiesJSON is less than the lower bound (0) for that field.");
        storeSpecialAmountIndex = new_value;
      }
    void unsetSpecialAmountIndex(void)
      {
        flagHasSpecialAmountIndex = false;
      }
    void initWhatWord(void)
      {
        if (flagHasWhatWord)
          {
            for (size_t num14 = 0; num14 < storeWhatWord.size(); ++num14)
              {
                storeWhatWord[num14]->remove_reference();
              }
          }
        flagHasWhatWord = true;
        storeWhatWord.clear();
      }
    void appendWhatWord(WhatWordJSON * to_append)
      {
        if (!flagHasWhatWord)
          {
            flagHasWhatWord = true;
            storeWhatWord.clear();
          }
        assert(flagHasWhatWord);
        to_append->add_reference();
        storeWhatWord.push_back(to_append);
      }
    void unsetWhatWord(void)
      {
        if (flagHasWhatWord)
          {
            for (size_t num15 = 0; num15 < storeWhatWord.size(); ++num15)
              {
                storeWhatWord[num15]->remove_reference();
              }
          }
        flagHasWhatWord = false;
        storeWhatWord.clear();
      }
    void setSpecialWhatWordIndex(OInteger new_value)
      {
        flagHasSpecialWhatWordIndex = true;
        if (new_value < 0)
            throw("The value for field SpecialWhatWordIndex of SentenceEntitiesJSON is less than the lower bound (0) for that field.");
        storeSpecialWhatWordIndex = new_value;
      }
    void unsetSpecialWhatWordIndex(void)
      {
        flagHasSpecialWhatWordIndex = false;
      }

    virtual void extraSentenceEntitiesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSentenceEntitiesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSentenceEntitiesLookup(key);
        if (old_field == NULL)
          {
            extraSentenceEntitiesAppendPair(key, new_component);
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
        if (flagHasWho)
          {
            handler->start_pair("Who");
            assert(storeWho.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeWho.size(); ++num1)
              {
                storeWho[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialPersonIndex)
          {
            handler->start_pair("SpecialPersonIndex");
            handler->number_value(storeSpecialPersonIndex.get_o_integer());
          }
        if (flagHasWhen)
          {
            handler->start_pair("When");
            assert(storeWhen.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeWhen.size(); ++num2)
              {
                storeWhen[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialTimeIndex)
          {
            handler->start_pair("SpecialTimeIndex");
            handler->number_value(storeSpecialTimeIndex.get_o_integer());
          }
        if (flagHasWhere)
          {
            handler->start_pair("Where");
            assert(storeWhere.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeWhere.size(); ++num3)
              {
                storeWhere[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialPlaceIndex)
          {
            handler->start_pair("SpecialPlaceIndex");
            handler->number_value(storeSpecialPlaceIndex.get_o_integer());
          }
        if (flagHasHowMuch)
          {
            handler->start_pair("HowMuch");
            assert(storeHowMuch.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeHowMuch.size(); ++num4)
              {
                storeHowMuch[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialAmountIndex)
          {
            handler->start_pair("SpecialAmountIndex");
            handler->number_value(storeSpecialAmountIndex.get_o_integer());
          }
        if (flagHasWhatWord)
          {
            handler->start_pair("WhatWord");
            assert(storeWhatWord.size() >= 1);
            handler->start_array();
            for (size_t num5 = 0; num5 < storeWhatWord.size(); ++num5)
              {
                storeWhatWord[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialWhatWordIndex)
          {
            handler->start_pair("SpecialWhatWordIndex");
            handler->number_value(storeSpecialWhatWordIndex.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SentenceEntitiesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SentenceEntitiesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SentenceEntitiesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SentenceEntitiesJSON>, SentenceEntitiesJSON *, bool> generator("Type SentenceEntities", ignore_extras);
            parse_json_value(text, "Text for SentenceEntitiesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SentenceEntitiesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SentenceEntitiesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SentenceEntitiesJSON>, SentenceEntitiesJSON *, bool> generator("Type SentenceEntities", ignore_extras);
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
        JSONHoldingArrayGenerator<WhoJSON::Generator, RCHandle<WhoJSON>, WhoJSON *, bool > fieldGeneratorWho;
        static char lowerBoundSpecialPersonIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSpecialPersonIndex>, OInteger, o_integer > fieldGeneratorSpecialPersonIndex;
        JSONHoldingArrayGenerator<WhenJSON::Generator, RCHandle<WhenJSON>, WhenJSON *, bool > fieldGeneratorWhen;
        static char lowerBoundSpecialTimeIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSpecialTimeIndex>, OInteger, o_integer > fieldGeneratorSpecialTimeIndex;
        JSONHoldingArrayGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorWhere;
        static char lowerBoundSpecialPlaceIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSpecialPlaceIndex>, OInteger, o_integer > fieldGeneratorSpecialPlaceIndex;
        JSONHoldingArrayGenerator<AmountJSON::Generator, RCHandle<AmountJSON>, AmountJSON *, bool > fieldGeneratorHowMuch;
        static char lowerBoundSpecialAmountIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSpecialAmountIndex>, OInteger, o_integer > fieldGeneratorSpecialAmountIndex;
        JSONHoldingArrayGenerator<WhatWordJSON::Generator, RCHandle<WhatWordJSON>, WhatWordJSON *, bool > fieldGeneratorWhatWord;
        static char lowerBoundSpecialWhatWordIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSpecialWhatWordIndex>, OInteger, o_integer > fieldGeneratorSpecialWhatWordIndex;
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
            SentenceEntitiesJSON *result = new SentenceEntitiesJSON();
            assert(result != NULL);
            RCHandle<SentenceEntitiesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSentenceEntitiesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SentenceEntitiesJSON *result)
          {
            if (fieldGeneratorWho.have_value)
              {
                result->initWho();
                size_t count = fieldGeneratorWho.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWho(fieldGeneratorWho.value[num].referenced());
                  }
                fieldGeneratorWho.value.clear();
                fieldGeneratorWho.have_value = false;
              }
            if (fieldGeneratorSpecialPersonIndex.have_value)
              {
                result->setSpecialPersonIndex(fieldGeneratorSpecialPersonIndex.value);
                fieldGeneratorSpecialPersonIndex.have_value = false;
              }
            if (fieldGeneratorWhen.have_value)
              {
                result->initWhen();
                size_t count = fieldGeneratorWhen.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWhen(fieldGeneratorWhen.value[num].referenced());
                  }
                fieldGeneratorWhen.value.clear();
                fieldGeneratorWhen.have_value = false;
              }
            if (fieldGeneratorSpecialTimeIndex.have_value)
              {
                result->setSpecialTimeIndex(fieldGeneratorSpecialTimeIndex.value);
                fieldGeneratorSpecialTimeIndex.have_value = false;
              }
            if (fieldGeneratorWhere.have_value)
              {
                result->initWhere();
                size_t count = fieldGeneratorWhere.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWhere(fieldGeneratorWhere.value[num].referenced());
                  }
                fieldGeneratorWhere.value.clear();
                fieldGeneratorWhere.have_value = false;
              }
            if (fieldGeneratorSpecialPlaceIndex.have_value)
              {
                result->setSpecialPlaceIndex(fieldGeneratorSpecialPlaceIndex.value);
                fieldGeneratorSpecialPlaceIndex.have_value = false;
              }
            if (fieldGeneratorHowMuch.have_value)
              {
                result->initHowMuch();
                size_t count = fieldGeneratorHowMuch.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHowMuch(fieldGeneratorHowMuch.value[num].referenced());
                  }
                fieldGeneratorHowMuch.value.clear();
                fieldGeneratorHowMuch.have_value = false;
              }
            if (fieldGeneratorSpecialAmountIndex.have_value)
              {
                result->setSpecialAmountIndex(fieldGeneratorSpecialAmountIndex.value);
                fieldGeneratorSpecialAmountIndex.have_value = false;
              }
            if (fieldGeneratorWhatWord.have_value)
              {
                result->initWhatWord();
                size_t count = fieldGeneratorWhatWord.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWhatWord(fieldGeneratorWhatWord.value[num].referenced());
                  }
                fieldGeneratorWhatWord.value.clear();
                fieldGeneratorWhatWord.have_value = false;
              }
            if (fieldGeneratorSpecialWhatWordIndex.have_value)
              {
                result->setSpecialWhatWordIndex(fieldGeneratorSpecialWhatWordIndex.value);
                fieldGeneratorSpecialWhatWordIndex.have_value = false;
              }
          }
        virtual void handle_result(SentenceEntitiesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'H':
                    if (strcmp(&(field_name[1]), "owMuch") == 0)
                        return &fieldGeneratorHowMuch;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "pecial", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[8]), "mountIndex") == 0)
                                    return &fieldGeneratorSpecialAmountIndex;
                                break;
                            case 'P':
                                switch ((unsigned char)(field_name[8]))
                                  {
                                    case 'e':
                                        if (strcmp(&(field_name[9]), "rsonIndex") == 0)
                                            return &fieldGeneratorSpecialPersonIndex;
                                        break;
                                    case 'l':
                                        if (strcmp(&(field_name[9]), "aceIndex") == 0)
                                            return &fieldGeneratorSpecialPlaceIndex;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(field_name[8]), "imeIndex") == 0)
                                    return &fieldGeneratorSpecialTimeIndex;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[8]), "hatWordIndex") == 0)
                                    return &fieldGeneratorSpecialWhatWordIndex;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "h", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[3]), "tWord") == 0)
                                    return &fieldGeneratorWhatWord;
                                break;
                            case 'e':
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'n':
                                        if (field_name[4] == 0)
                                            return &fieldGeneratorWhen;
                                        break;
                                    case 'r':
                                        if (strcmp(&(field_name[4]), "e") == 0)
                                            return &fieldGeneratorWhere;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'o':
                                if (field_name[3] == 0)
                                    return &fieldGeneratorWho;
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
        Generator(bool ignore_extras = false) : fieldGeneratorWho("field \"Who\" of the SentenceEntities class", ignore_extras), fieldGeneratorSpecialPersonIndex("field \"SpecialPersonIndex\" of the SentenceEntities class"), fieldGeneratorWhen("field \"When\" of the SentenceEntities class", ignore_extras), fieldGeneratorSpecialTimeIndex("field \"SpecialTimeIndex\" of the SentenceEntities class"), fieldGeneratorWhere("field \"Where\" of the SentenceEntities class", ignore_extras), fieldGeneratorSpecialPlaceIndex("field \"SpecialPlaceIndex\" of the SentenceEntities class"), fieldGeneratorHowMuch("field \"HowMuch\" of the SentenceEntities class", ignore_extras), fieldGeneratorSpecialAmountIndex("field \"SpecialAmountIndex\" of the SentenceEntities class"), fieldGeneratorWhatWord("field \"WhatWord\" of the SentenceEntities class", ignore_extras), fieldGeneratorSpecialWhatWordIndex("field \"SpecialWhatWordIndex\" of the SentenceEntities class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SentenceEntities class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorWho.reset();
            fieldGeneratorSpecialPersonIndex.reset();
            fieldGeneratorWhen.reset();
            fieldGeneratorSpecialTimeIndex.reset();
            fieldGeneratorWhere.reset();
            fieldGeneratorSpecialPlaceIndex.reset();
            fieldGeneratorHowMuch.reset();
            fieldGeneratorSpecialAmountIndex.reset();
            fieldGeneratorWhatWord.reset();
            fieldGeneratorSpecialWhatWordIndex.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SENTENCEENTITIESJSON_H */
