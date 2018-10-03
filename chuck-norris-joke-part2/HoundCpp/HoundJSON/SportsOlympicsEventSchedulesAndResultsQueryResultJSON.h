/* file "SportsOlympicsEventSchedulesAndResultsQueryResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYRESULTJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON.h"
#include "SportsOlympicsEventSchedulesAndResultsErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsQueryResultJSON : public ReferenceCounted
  {
  private:
    bool flagHasRankResult;
    OInteger storeRankResult;
    bool flagHasEventInstancesMappings;
    std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * > storeEventInstancesMappings;
    bool flagHasError;
    SportsOlympicsEventSchedulesAndResultsErrorJSON * storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsQueryResultJSON(const SportsOlympicsEventSchedulesAndResultsQueryResultJSON &);
    SportsOlympicsEventSchedulesAndResultsQueryResultJSON & operator=(const SportsOlympicsEventSchedulesAndResultsQueryResultJSON &other);

    void  fromJSONRankResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEventInstancesMappings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsQueryResultJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsQueryResultJSON(void);
    bool  hasRankResult(void) const;
    OInteger  getRankResult(void);
    const OInteger  getRankResult(void) const;
    bool  hasEventInstancesMappings(void) const;
    size_t  countOfEventInstancesMappings(void) const;
    SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *  elementOfEventInstancesMappings(size_t element_num);
    const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *  elementOfEventInstancesMappings(size_t element_num) const;
    std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * >  getEventInstancesMappings(void);
    const std::vector< SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * >  getEventInstancesMappings(void) const;
    bool  hasError(void) const;
    SportsOlympicsEventSchedulesAndResultsErrorJSON *  getError(void);
    const SportsOlympicsEventSchedulesAndResultsErrorJSON *  getError(void) const;
    SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue  getErrorValue(void);
    const SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue  getErrorValue(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsQueryResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsQueryResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setRankResult(OInteger new_value)
      {
        flagHasRankResult = true;
        if (new_value < 1)
            throw("The value for field RankResult of SportsOlympicsEventSchedulesAndResultsQueryResultJSON is less than the lower bound (1) for that field.");
        storeRankResult = new_value;
      }
    void unsetRankResult(void)
      {
        flagHasRankResult = false;
      }
    void initEventInstancesMappings(void)
      {
        if (flagHasEventInstancesMappings)
          {
            for (size_t num2 = 0; num2 < storeEventInstancesMappings.size(); ++num2)
              {
                storeEventInstancesMappings[num2]->remove_reference();
              }
          }
        flagHasEventInstancesMappings = true;
        storeEventInstancesMappings.clear();
      }
    void appendEventInstancesMappings(SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON * to_append)
      {
        if (!flagHasEventInstancesMappings)
          {
            flagHasEventInstancesMappings = true;
            storeEventInstancesMappings.clear();
          }
        assert(flagHasEventInstancesMappings);
        to_append->add_reference();
        storeEventInstancesMappings.push_back(to_append);
      }
    void unsetEventInstancesMappings(void)
      {
        if (flagHasEventInstancesMappings)
          {
            for (size_t num3 = 0; num3 < storeEventInstancesMappings.size(); ++num3)
              {
                storeEventInstancesMappings[num3]->remove_reference();
              }
          }
        flagHasEventInstancesMappings = false;
        storeEventInstancesMappings.clear();
      }
    void setError(SportsOlympicsEventSchedulesAndResultsErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = true;
        storeError = new_value;
      }
    void setError(SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue new_value)
      {
        setError(new SportsOlympicsEventSchedulesAndResultsErrorJSON(new_value));
      }
    void setError(const char *chars)
      {
        SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValueKnownValues known = SportsOlympicsEventSchedulesAndResultsErrorJSON::stringToValue(chars);
        SportsOlympicsEventSchedulesAndResultsErrorJSON::TypeValue new_value;
        if (known == SportsOlympicsEventSchedulesAndResultsErrorJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setError(new_value);
      }
    void setError(std::string the_string)
      {
        setError(the_string.c_str());
      }
    void unsetError(void)
      {
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsQueryResultLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsQueryResultAppendPair(key, new_component);
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
        if (flagHasRankResult)
          {
            handler->start_pair("RankResult");
            handler->number_value(storeRankResult.get_o_integer());
          }
        if (flagHasEventInstancesMappings)
          {
            handler->start_pair("EventInstancesMappings");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEventInstancesMappings.size(); ++num1)
              {
                storeEventInstancesMappings[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            storeError->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsQueryResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsQueryResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryResultJSON>, SportsOlympicsEventSchedulesAndResultsQueryResultJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryResult", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsQueryResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsQueryResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryResultJSON>, SportsOlympicsEventSchedulesAndResultsQueryResultJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryResult", ignore_extras);
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
        static char lowerBoundRankResult[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRankResult>, OInteger, o_integer > fieldGeneratorRankResult;
        JSONHoldingArrayGenerator<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON>, SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *, bool > fieldGeneratorEventInstancesMappings;
        JSONHoldingGenerator<SportsOlympicsEventSchedulesAndResultsErrorJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsErrorJSON>, SportsOlympicsEventSchedulesAndResultsErrorJSON *, bool > fieldGeneratorError;
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
            SportsOlympicsEventSchedulesAndResultsQueryResultJSON *result = new SportsOlympicsEventSchedulesAndResultsQueryResultJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsQueryResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsQueryResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsQueryResultJSON *result)
          {
            if (fieldGeneratorRankResult.have_value)
              {
                result->setRankResult(fieldGeneratorRankResult.value);
                fieldGeneratorRankResult.have_value = false;
              }
            if (fieldGeneratorEventInstancesMappings.have_value)
              {
                result->initEventInstancesMappings();
                size_t count = fieldGeneratorEventInstancesMappings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEventInstancesMappings(fieldGeneratorEventInstancesMappings.value[num].referenced());
                  }
                fieldGeneratorEventInstancesMappings.value.clear();
                fieldGeneratorEventInstancesMappings.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value.referenced());
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsQueryResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'r':
                            if (strcmp(&(field_name[2]), "ror") == 0)
                                return &fieldGeneratorError;
                            break;
                        case 'v':
                            if (strcmp(&(field_name[2]), "entInstancesMappings") == 0)
                                return &fieldGeneratorEventInstancesMappings;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ankResult") == 0)
                        return &fieldGeneratorRankResult;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRankResult("field \"RankResult\" of the SportsOlympicsEventSchedulesAndResultsQueryResult class"), fieldGeneratorEventInstancesMappings("field \"EventInstancesMappings\" of the SportsOlympicsEventSchedulesAndResultsQueryResult class", ignore_extras), fieldGeneratorError("field \"Error\" of the SportsOlympicsEventSchedulesAndResultsQueryResult class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsQueryResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRankResult.reset();
            fieldGeneratorEventInstancesMappings.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYRESULTJSON_H */
