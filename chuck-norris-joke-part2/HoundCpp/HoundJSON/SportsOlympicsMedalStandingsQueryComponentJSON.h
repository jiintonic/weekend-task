/* file "SportsOlympicsMedalStandingsQueryComponentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSQUERYCOMPONENTJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSQUERYCOMPONENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsOlympicsMedalStandingsQueryTypeJSON.h"
#include "SportsOlympicsOrganizationJSON.h"
#include "SportsOlympicsMedalJSON.h"
#include "SportsOlympicsGamesJSON.h"
#include "SportsOlympicsMedalStandingsSortMethodJSON.h"
#include "SportsOlympicsMedalStandingsErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsQueryComponentJSON : public ReferenceCounted
  {
  private:
    bool flagHasQueryType;
    SportsOlympicsMedalStandingsQueryTypeJSON * storeQueryType;
    bool flagHasOrganization;
    SportsOlympicsOrganizationJSON * storeOrganization;
    bool flagHasMedalType;
    SportsOlympicsMedalJSON * storeMedalType;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasRankResult;
    OInteger storeRankResult;
    bool flagHasGames;
    SportsOlympicsGamesJSON * storeGames;
    bool flagHasSortMethod;
    SportsOlympicsMedalStandingsSortMethodJSON * storeSortMethod;
    bool flagHasStandingsIndex;
    OInteger storeStandingsIndex;
    bool flagHasOrganizationIndices;
    std::vector< OInteger > storeOrganizationIndices;
    bool flagHasError;
    SportsOlympicsMedalStandingsErrorJSON * storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsQueryComponentJSON(const SportsOlympicsMedalStandingsQueryComponentJSON &);
    SportsOlympicsMedalStandingsQueryComponentJSON & operator=(const SportsOlympicsMedalStandingsQueryComponentJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganization(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMedalType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRankResult(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortMethod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStandingsIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganizationIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsQueryComponentJSON(void);
    virtual ~SportsOlympicsMedalStandingsQueryComponentJSON(void);
    bool  hasQueryType(void) const;
    SportsOlympicsMedalStandingsQueryTypeJSON *  getQueryType(void);
    const SportsOlympicsMedalStandingsQueryTypeJSON *  getQueryType(void) const;
    SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue  getQueryTypeValue(void);
    const SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue  getQueryTypeValue(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasOrganization(void) const;
    SportsOlympicsOrganizationJSON *  getOrganization(void);
    const SportsOlympicsOrganizationJSON *  getOrganization(void) const;
    bool  hasMedalType(void) const;
    SportsOlympicsMedalJSON *  getMedalType(void);
    const SportsOlympicsMedalJSON *  getMedalType(void) const;
    SportsOlympicsMedalJSON::TypeValue  getMedalTypeValue(void);
    const SportsOlympicsMedalJSON::TypeValue  getMedalTypeValue(void) const;
    const char * getMedalTypeAsChars(void) const;
    std::string  getMedalTypeAsString(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasRankResult(void) const;
    OInteger  getRankResult(void);
    const OInteger  getRankResult(void) const;
    bool  hasGames(void) const;
    SportsOlympicsGamesJSON *  getGames(void);
    const SportsOlympicsGamesJSON *  getGames(void) const;
    bool  hasSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void);
    const SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void);
    const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void) const;
    const char * getSortMethodAsChars(void) const;
    std::string  getSortMethodAsString(void) const;
    bool  hasStandingsIndex(void) const;
    OInteger  getStandingsIndex(void);
    const OInteger  getStandingsIndex(void) const;
    bool  hasOrganizationIndices(void) const;
    size_t  countOfOrganizationIndices(void) const;
    OInteger  elementOfOrganizationIndices(size_t element_num);
    const OInteger  elementOfOrganizationIndices(size_t element_num) const;
    std::vector< OInteger >  getOrganizationIndices(void);
    const std::vector< OInteger >  getOrganizationIndices(void) const;
    bool  hasError(void) const;
    SportsOlympicsMedalStandingsErrorJSON *  getError(void);
    const SportsOlympicsMedalStandingsErrorJSON *  getError(void) const;
    SportsOlympicsMedalStandingsErrorJSON::TypeValue  getErrorValue(void);
    const SportsOlympicsMedalStandingsErrorJSON::TypeValue  getErrorValue(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsQueryComponentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsQueryComponentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsQueryComponentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsQueryComponentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsQueryComponentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsQueryComponentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(SportsOlympicsMedalStandingsQueryTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQueryType)
          {
            storeQueryType->remove_reference();
          }
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue new_value)
      {
        setQueryType(new SportsOlympicsMedalStandingsQueryTypeJSON(new_value));
      }
    void setQueryType(const char *chars)
      {
        SportsOlympicsMedalStandingsQueryTypeJSON::TypeValueKnownValues known = SportsOlympicsMedalStandingsQueryTypeJSON::stringToValue(chars);
        SportsOlympicsMedalStandingsQueryTypeJSON::TypeValue new_value;
        if (known == SportsOlympicsMedalStandingsQueryTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setQueryType(new_value);
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(the_string.c_str());
      }
    void unsetQueryType(void)
      {
        if (flagHasQueryType)
          {
            storeQueryType->remove_reference();
          }
        flagHasQueryType = false;
      }
    void setOrganization(SportsOlympicsOrganizationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = true;
        storeOrganization = new_value;
      }
    void unsetOrganization(void)
      {
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = false;
      }
    void setMedalType(SportsOlympicsMedalJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMedalType)
          {
            storeMedalType->remove_reference();
          }
        flagHasMedalType = true;
        storeMedalType = new_value;
      }
    void setMedalType(SportsOlympicsMedalJSON::TypeValue new_value)
      {
        setMedalType(new SportsOlympicsMedalJSON(new_value));
      }
    void setMedalType(const char *chars)
      {
        SportsOlympicsMedalJSON::TypeValueKnownValues known = SportsOlympicsMedalJSON::stringToValue(chars);
        SportsOlympicsMedalJSON::TypeValue new_value;
        if (known == SportsOlympicsMedalJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setMedalType(new_value);
      }
    void setMedalType(std::string the_string)
      {
        setMedalType(the_string.c_str());
      }
    void unsetMedalType(void)
      {
        if (flagHasMedalType)
          {
            storeMedalType->remove_reference();
          }
        flagHasMedalType = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsOlympicsMedalStandingsQueryComponentJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setRankResult(OInteger new_value)
      {
        flagHasRankResult = true;
        if (new_value < 1)
            throw("The value for field RankResult of SportsOlympicsMedalStandingsQueryComponentJSON is less than the lower bound (1) for that field.");
        storeRankResult = new_value;
      }
    void unsetRankResult(void)
      {
        flagHasRankResult = false;
      }
    void setGames(SportsOlympicsGamesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = true;
        storeGames = new_value;
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = false;
      }
    void setSortMethod(SportsOlympicsMedalStandingsSortMethodJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSortMethod)
          {
            storeSortMethod->remove_reference();
          }
        flagHasSortMethod = true;
        storeSortMethod = new_value;
      }
    void setSortMethod(SportsOlympicsMedalStandingsSortMethodJSON::TypeValue new_value)
      {
        setSortMethod(new SportsOlympicsMedalStandingsSortMethodJSON(new_value));
      }
    void setSortMethod(const char *chars)
      {
        SportsOlympicsMedalStandingsSortMethodJSON::TypeValueKnownValues known = SportsOlympicsMedalStandingsSortMethodJSON::stringToValue(chars);
        SportsOlympicsMedalStandingsSortMethodJSON::TypeValue new_value;
        if (known == SportsOlympicsMedalStandingsSortMethodJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSortMethod(new_value);
      }
    void setSortMethod(std::string the_string)
      {
        setSortMethod(the_string.c_str());
      }
    void unsetSortMethod(void)
      {
        if (flagHasSortMethod)
          {
            storeSortMethod->remove_reference();
          }
        flagHasSortMethod = false;
      }
    void setStandingsIndex(OInteger new_value)
      {
        flagHasStandingsIndex = true;
        if (new_value < 0)
            throw("The value for field StandingsIndex of SportsOlympicsMedalStandingsQueryComponentJSON is less than the lower bound (0) for that field.");
        storeStandingsIndex = new_value;
      }
    void unsetStandingsIndex(void)
      {
        flagHasStandingsIndex = false;
      }
    void initOrganizationIndices(void)
      {
        flagHasOrganizationIndices = true;
        storeOrganizationIndices.clear();
      }
    void appendOrganizationIndices(OInteger to_append)
      {
        if (!flagHasOrganizationIndices)
          {
            flagHasOrganizationIndices = true;
            storeOrganizationIndices.clear();
          }
        assert(flagHasOrganizationIndices);
        storeOrganizationIndices.push_back(to_append);
      }
    void unsetOrganizationIndices(void)
      {
        flagHasOrganizationIndices = false;
        storeOrganizationIndices.clear();
      }
    void setError(SportsOlympicsMedalStandingsErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = true;
        storeError = new_value;
      }
    void setError(SportsOlympicsMedalStandingsErrorJSON::TypeValue new_value)
      {
        setError(new SportsOlympicsMedalStandingsErrorJSON(new_value));
      }
    void setError(const char *chars)
      {
        SportsOlympicsMedalStandingsErrorJSON::TypeValueKnownValues known = SportsOlympicsMedalStandingsErrorJSON::stringToValue(chars);
        SportsOlympicsMedalStandingsErrorJSON::TypeValue new_value;
        if (known == SportsOlympicsMedalStandingsErrorJSON::Value__none)
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

    virtual void extraSportsOlympicsMedalStandingsQueryComponentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsQueryComponentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsQueryComponentLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsQueryComponentAppendPair(key, new_component);
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        storeQueryType->write_as_json(handler);
        if (flagHasOrganization)
          {
            handler->start_pair("Organization");
            storeOrganization->write_as_json(handler);
          }
        if (flagHasMedalType)
          {
            handler->start_pair("MedalType");
            storeMedalType->write_as_json(handler);
          }
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasRankResult)
          {
            handler->start_pair("RankResult");
            handler->number_value(storeRankResult.get_o_integer());
          }
        assert(flagHasGames);
        handler->start_pair("Games");
        storeGames->write_as_json(handler);
        if (flagHasSortMethod)
          {
            handler->start_pair("SortMethod");
            storeSortMethod->write_as_json(handler);
          }
        if (flagHasStandingsIndex)
          {
            handler->start_pair("StandingsIndex");
            handler->number_value(storeStandingsIndex.get_o_integer());
          }
        if (flagHasOrganizationIndices)
          {
            handler->start_pair("OrganizationIndices");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeOrganizationIndices.size(); ++num1)
              {
                handler->number_value(storeOrganizationIndices[num1].get_o_integer());
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
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        if (!(hasGames()))
          {
            return "When parsing the object for %what%, the \"Games\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsMedalStandingsQueryComponentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsQueryComponentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsQueryComponentJSON>, SportsOlympicsMedalStandingsQueryComponentJSON *, bool> generator("Type SportsOlympicsMedalStandingsQueryComponent", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsQueryComponentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsQueryComponentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsQueryComponentJSON>, SportsOlympicsMedalStandingsQueryComponentJSON *, bool> generator("Type SportsOlympicsMedalStandingsQueryComponent", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsMedalStandingsQueryTypeJSON::Generator, RCHandle<SportsOlympicsMedalStandingsQueryTypeJSON>, SportsOlympicsMedalStandingsQueryTypeJSON *, bool > fieldGeneratorQueryType;
        JSONHoldingGenerator<SportsOlympicsOrganizationJSON::Generator, RCHandle<SportsOlympicsOrganizationJSON>, SportsOlympicsOrganizationJSON *, bool > fieldGeneratorOrganization;
        JSONHoldingGenerator<SportsOlympicsMedalJSON::Generator, RCHandle<SportsOlympicsMedalJSON>, SportsOlympicsMedalJSON *, bool > fieldGeneratorMedalType;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        static char lowerBoundRankResult[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRankResult>, OInteger, o_integer > fieldGeneratorRankResult;
        JSONHoldingGenerator<SportsOlympicsGamesJSON::Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool > fieldGeneratorGames;
        JSONHoldingGenerator<SportsOlympicsMedalStandingsSortMethodJSON::Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool > fieldGeneratorSortMethod;
        static char lowerBoundStandingsIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundStandingsIndex>, OInteger, o_integer > fieldGeneratorStandingsIndex;
        static char lowerBoundOrganizationIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOrganizationIndices>, OInteger, o_integer > fieldGeneratorOrganizationIndices;
        JSONHoldingGenerator<SportsOlympicsMedalStandingsErrorJSON::Generator, RCHandle<SportsOlympicsMedalStandingsErrorJSON>, SportsOlympicsMedalStandingsErrorJSON *, bool > fieldGeneratorError;
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
            SportsOlympicsMedalStandingsQueryComponentJSON *result = new SportsOlympicsMedalStandingsQueryComponentJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsQueryComponentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsQueryComponentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsMedalStandingsQueryComponentJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value.referenced());
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorOrganization.have_value)
              {
                result->setOrganization(fieldGeneratorOrganization.value.referenced());
                fieldGeneratorOrganization.have_value = false;
              }
            if (fieldGeneratorMedalType.have_value)
              {
                result->setMedalType(fieldGeneratorMedalType.value.referenced());
                fieldGeneratorMedalType.have_value = false;
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorRankResult.have_value)
              {
                result->setRankResult(fieldGeneratorRankResult.value);
                fieldGeneratorRankResult.have_value = false;
              }
            if (fieldGeneratorGames.have_value)
              {
                result->setGames(fieldGeneratorGames.value.referenced());
                fieldGeneratorGames.have_value = false;
              }
            else if (!(result->hasGames()))
              {
                error("When parsing the object for %what%, the \"Games\" field was missing.");
              }
            if (fieldGeneratorSortMethod.have_value)
              {
                result->setSortMethod(fieldGeneratorSortMethod.value.referenced());
                fieldGeneratorSortMethod.have_value = false;
              }
            if (fieldGeneratorStandingsIndex.have_value)
              {
                result->setStandingsIndex(fieldGeneratorStandingsIndex.value);
                fieldGeneratorStandingsIndex.have_value = false;
              }
            if (fieldGeneratorOrganizationIndices.have_value)
              {
                result->initOrganizationIndices();
                size_t count = fieldGeneratorOrganizationIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOrganizationIndices(fieldGeneratorOrganizationIndices.value[num]);
                  }
                fieldGeneratorOrganizationIndices.value.clear();
                fieldGeneratorOrganizationIndices.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value.referenced());
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsMedalStandingsQueryComponentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "edalType") == 0)
                        return &fieldGeneratorMedalType;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "rganization", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 0:
                                return &fieldGeneratorOrganization;
                            case 'I':
                                if (strcmp(&(field_name[13]), "ndices") == 0)
                                    return &fieldGeneratorOrganizationIndices;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "ank", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorRank;
                            case 'R':
                                if (strcmp(&(field_name[5]), "esult") == 0)
                                    return &fieldGeneratorRankResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[2]), "rtMethod") == 0)
                                return &fieldGeneratorSortMethod;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "andingsIndex") == 0)
                                return &fieldGeneratorStandingsIndex;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), fieldGeneratorOrganization("field \"Organization\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), fieldGeneratorMedalType("field \"MedalType\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the SportsOlympicsMedalStandingsQueryComponent class"), fieldGeneratorRankResult("field \"RankResult\" of the SportsOlympicsMedalStandingsQueryComponent class"), fieldGeneratorGames("field \"Games\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), fieldGeneratorSortMethod("field \"SortMethod\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), fieldGeneratorStandingsIndex("field \"StandingsIndex\" of the SportsOlympicsMedalStandingsQueryComponent class"), fieldGeneratorOrganizationIndices("field \"OrganizationIndices\" of the SportsOlympicsMedalStandingsQueryComponent class"), fieldGeneratorError("field \"Error\" of the SportsOlympicsMedalStandingsQueryComponent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsQueryComponent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorOrganization.reset();
            fieldGeneratorMedalType.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorRankResult.reset();
            fieldGeneratorGames.reset();
            fieldGeneratorSortMethod.reset();
            fieldGeneratorStandingsIndex.reset();
            fieldGeneratorOrganizationIndices.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSQUERYCOMPONENTJSON_H */
