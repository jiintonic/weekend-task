/* file "SportsOlympicsMedalStandingsOrganizationMedalCountJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSORGANIZATIONMEDALCOUNTJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSORGANIZATIONMEDALCOUNTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "SportsOlympicsOrganizationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsOrganizationMedalCountJSON : public ReferenceCounted
  {
  private:
    bool flagHasOrganization;
    SportsOlympicsOrganizationJSON * storeOrganization;
    bool flagHasGoldMedals;
    OInteger storeGoldMedals;
    bool flagHasSilverMedals;
    OInteger storeSilverMedals;
    bool flagHasBronzeMedals;
    OInteger storeBronzeMedals;
    bool flagHasTotalMedals;
    OInteger storeTotalMedals;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasRankIsTied;
    bool storeRankIsTied;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsOrganizationMedalCountJSON(const SportsOlympicsMedalStandingsOrganizationMedalCountJSON &);
    SportsOlympicsMedalStandingsOrganizationMedalCountJSON & operator=(const SportsOlympicsMedalStandingsOrganizationMedalCountJSON &other);

    void  fromJSONOrganization(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGoldMedals(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSilverMedals(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBronzeMedals(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTotalMedals(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRankIsTied(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsOrganizationMedalCountJSON(void);
    virtual ~SportsOlympicsMedalStandingsOrganizationMedalCountJSON(void);
    bool  hasOrganization(void) const;
    SportsOlympicsOrganizationJSON *  getOrganization(void);
    const SportsOlympicsOrganizationJSON *  getOrganization(void) const;
    bool  hasGoldMedals(void) const;
    OInteger  getGoldMedals(void);
    const OInteger  getGoldMedals(void) const;
    bool  hasSilverMedals(void) const;
    OInteger  getSilverMedals(void);
    const OInteger  getSilverMedals(void) const;
    bool  hasBronzeMedals(void) const;
    OInteger  getBronzeMedals(void);
    const OInteger  getBronzeMedals(void) const;
    bool  hasTotalMedals(void) const;
    OInteger  getTotalMedals(void);
    const OInteger  getTotalMedals(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasRankIsTied(void) const;
    bool  getRankIsTied(void);
    const bool  getRankIsTied(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsOrganizationMedalCountComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsOrganizationMedalCountComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsOrganizationMedalCountComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsOrganizationMedalCountComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsOrganizationMedalCountLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsOrganizationMedalCountLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setGoldMedals(OInteger new_value)
      {
        flagHasGoldMedals = true;
        if (new_value < 0)
            throw("The value for field GoldMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is less than the lower bound (0) for that field.");
        storeGoldMedals = new_value;
      }
    void unsetGoldMedals(void)
      {
        flagHasGoldMedals = false;
      }
    void setSilverMedals(OInteger new_value)
      {
        flagHasSilverMedals = true;
        if (new_value < 0)
            throw("The value for field SilverMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is less than the lower bound (0) for that field.");
        storeSilverMedals = new_value;
      }
    void unsetSilverMedals(void)
      {
        flagHasSilverMedals = false;
      }
    void setBronzeMedals(OInteger new_value)
      {
        flagHasBronzeMedals = true;
        if (new_value < 0)
            throw("The value for field BronzeMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is less than the lower bound (0) for that field.");
        storeBronzeMedals = new_value;
      }
    void unsetBronzeMedals(void)
      {
        flagHasBronzeMedals = false;
      }
    void setTotalMedals(OInteger new_value)
      {
        flagHasTotalMedals = true;
        if (new_value < 0)
            throw("The value for field TotalMedals of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is less than the lower bound (0) for that field.");
        storeTotalMedals = new_value;
      }
    void unsetTotalMedals(void)
      {
        flagHasTotalMedals = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsOlympicsMedalStandingsOrganizationMedalCountJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setRankIsTied(bool new_value)
      {
        flagHasRankIsTied = true;
        storeRankIsTied = new_value;
      }
    void unsetRankIsTied(void)
      {
        flagHasRankIsTied = false;
      }

    virtual void extraSportsOlympicsMedalStandingsOrganizationMedalCountAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsOrganizationMedalCountSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsOrganizationMedalCountLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsOrganizationMedalCountAppendPair(key, new_component);
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
        assert(flagHasOrganization);
        handler->start_pair("Organization");
        storeOrganization->write_as_json(handler);
        assert(flagHasGoldMedals);
        handler->start_pair("GoldMedals");
        handler->number_value(storeGoldMedals.get_o_integer());
        assert(flagHasSilverMedals);
        handler->start_pair("SilverMedals");
        handler->number_value(storeSilverMedals.get_o_integer());
        assert(flagHasBronzeMedals);
        handler->start_pair("BronzeMedals");
        handler->number_value(storeBronzeMedals.get_o_integer());
        assert(flagHasTotalMedals);
        handler->start_pair("TotalMedals");
        handler->number_value(storeTotalMedals.get_o_integer());
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasRankIsTied)
          {
            handler->start_pair("RankIsTied");
            handler->boolean_value(storeRankIsTied);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOrganization()))
          {
            return "When parsing the object for %what%, the \"Organization\" field was missing.";
          }
        if (!(hasGoldMedals()))
          {
            return "When parsing the object for %what%, the \"GoldMedals\" field was missing.";
          }
        if (!(hasSilverMedals()))
          {
            return "When parsing the object for %what%, the \"SilverMedals\" field was missing.";
          }
        if (!(hasBronzeMedals()))
          {
            return "When parsing the object for %what%, the \"BronzeMedals\" field was missing.";
          }
        if (!(hasTotalMedals()))
          {
            return "When parsing the object for %what%, the \"TotalMedals\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsMedalStandingsOrganizationMedalCountJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsOrganizationMedalCountJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsOrganizationMedalCountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsOrganizationMedalCountJSON>, SportsOlympicsMedalStandingsOrganizationMedalCountJSON *, bool> generator("Type SportsOlympicsMedalStandingsOrganizationMedalCount", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsOrganizationMedalCountJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsOrganizationMedalCountJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsOrganizationMedalCountJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsOrganizationMedalCountJSON>, SportsOlympicsMedalStandingsOrganizationMedalCountJSON *, bool> generator("Type SportsOlympicsMedalStandingsOrganizationMedalCount", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsOrganizationJSON::Generator, RCHandle<SportsOlympicsOrganizationJSON>, SportsOlympicsOrganizationJSON *, bool > fieldGeneratorOrganization;
        static char lowerBoundGoldMedals[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGoldMedals>, OInteger, o_integer > fieldGeneratorGoldMedals;
        static char lowerBoundSilverMedals[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSilverMedals>, OInteger, o_integer > fieldGeneratorSilverMedals;
        static char lowerBoundBronzeMedals[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundBronzeMedals>, OInteger, o_integer > fieldGeneratorBronzeMedals;
        static char lowerBoundTotalMedals[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTotalMedals>, OInteger, o_integer > fieldGeneratorTotalMedals;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRankIsTied;
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
            SportsOlympicsMedalStandingsOrganizationMedalCountJSON *result = new SportsOlympicsMedalStandingsOrganizationMedalCountJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsOrganizationMedalCountJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsOrganizationMedalCountAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsMedalStandingsOrganizationMedalCountJSON *result)
          {
            if (fieldGeneratorOrganization.have_value)
              {
                result->setOrganization(fieldGeneratorOrganization.value.referenced());
                fieldGeneratorOrganization.have_value = false;
              }
            else if (!(result->hasOrganization()))
              {
                error("When parsing the object for %what%, the \"Organization\" field was missing.");
              }
            if (fieldGeneratorGoldMedals.have_value)
              {
                result->setGoldMedals(fieldGeneratorGoldMedals.value);
                fieldGeneratorGoldMedals.have_value = false;
              }
            else if (!(result->hasGoldMedals()))
              {
                error("When parsing the object for %what%, the \"GoldMedals\" field was missing.");
              }
            if (fieldGeneratorSilverMedals.have_value)
              {
                result->setSilverMedals(fieldGeneratorSilverMedals.value);
                fieldGeneratorSilverMedals.have_value = false;
              }
            else if (!(result->hasSilverMedals()))
              {
                error("When parsing the object for %what%, the \"SilverMedals\" field was missing.");
              }
            if (fieldGeneratorBronzeMedals.have_value)
              {
                result->setBronzeMedals(fieldGeneratorBronzeMedals.value);
                fieldGeneratorBronzeMedals.have_value = false;
              }
            else if (!(result->hasBronzeMedals()))
              {
                error("When parsing the object for %what%, the \"BronzeMedals\" field was missing.");
              }
            if (fieldGeneratorTotalMedals.have_value)
              {
                result->setTotalMedals(fieldGeneratorTotalMedals.value);
                fieldGeneratorTotalMedals.have_value = false;
              }
            else if (!(result->hasTotalMedals()))
              {
                error("When parsing the object for %what%, the \"TotalMedals\" field was missing.");
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorRankIsTied.have_value)
              {
                result->setRankIsTied(fieldGeneratorRankIsTied.value);
                fieldGeneratorRankIsTied.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsMedalStandingsOrganizationMedalCountJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "ronzeMedals") == 0)
                        return &fieldGeneratorBronzeMedals;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "oldMedals") == 0)
                        return &fieldGeneratorGoldMedals;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rganization") == 0)
                        return &fieldGeneratorOrganization;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "ank", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorRank;
                            case 'I':
                                if (strcmp(&(field_name[5]), "sTied") == 0)
                                    return &fieldGeneratorRankIsTied;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "ilverMedals") == 0)
                        return &fieldGeneratorSilverMedals;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "otalMedals") == 0)
                        return &fieldGeneratorTotalMedals;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorOrganization("field \"Organization\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class", ignore_extras), fieldGeneratorGoldMedals("field \"GoldMedals\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), fieldGeneratorSilverMedals("field \"SilverMedals\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), fieldGeneratorBronzeMedals("field \"BronzeMedals\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), fieldGeneratorTotalMedals("field \"TotalMedals\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), fieldGeneratorRank("field \"Rank\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), fieldGeneratorRankIsTied("field \"RankIsTied\" of the SportsOlympicsMedalStandingsOrganizationMedalCount class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandingsOrganizationMedalCount class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorOrganization.reset();
            fieldGeneratorGoldMedals.reset();
            fieldGeneratorSilverMedals.reset();
            fieldGeneratorBronzeMedals.reset();
            fieldGeneratorTotalMedals.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorRankIsTied.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSORGANIZATIONMEDALCOUNTJSON_H */
