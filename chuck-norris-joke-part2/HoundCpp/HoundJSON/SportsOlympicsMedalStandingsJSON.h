/* file "SportsOlympicsMedalStandingsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSMEDALSTANDINGSJSON_H
#define SPORTSOLYMPICSMEDALSTANDINGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsOlympicsGamesJSON.h"
#include "SportsOlympicsMedalStandingsOrganizationMedalCountJSON.h"
#include "SportsOlympicsMedalStandingsSortMethodJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsMedalStandingsJSON : public ReferenceCounted
  {
  private:
    bool flagHasGames;
    SportsOlympicsGamesJSON * storeGames;
    bool flagHasStandings;
    std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * > storeStandings;
    bool flagHasSortMethod;
    SportsOlympicsMedalStandingsSortMethodJSON * storeSortMethod;
    bool flagHasIsAbridged;
    bool storeIsAbridged;
    bool flagHasAbridgedMaximumRank;
    OInteger storeAbridgedMaximumRank;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsMedalStandingsJSON(const SportsOlympicsMedalStandingsJSON &);
    SportsOlympicsMedalStandingsJSON & operator=(const SportsOlympicsMedalStandingsJSON &other);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStandings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortMethod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsAbridged(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAbridgedMaximumRank(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsMedalStandingsJSON(void);
    virtual ~SportsOlympicsMedalStandingsJSON(void);
    bool  hasGames(void) const;
    SportsOlympicsGamesJSON *  getGames(void);
    const SportsOlympicsGamesJSON *  getGames(void) const;
    bool  hasStandings(void) const;
    size_t  countOfStandings(void) const;
    SportsOlympicsMedalStandingsOrganizationMedalCountJSON *  elementOfStandings(size_t element_num);
    const SportsOlympicsMedalStandingsOrganizationMedalCountJSON *  elementOfStandings(size_t element_num) const;
    std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * >  getStandings(void);
    const std::vector< SportsOlympicsMedalStandingsOrganizationMedalCountJSON * >  getStandings(void) const;
    bool  hasSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void);
    const SportsOlympicsMedalStandingsSortMethodJSON *  getSortMethod(void) const;
    SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void);
    const SportsOlympicsMedalStandingsSortMethodJSON::TypeValue  getSortMethodValue(void) const;
    const char * getSortMethodAsChars(void) const;
    std::string  getSortMethodAsString(void) const;
    bool  hasIsAbridged(void) const;
    bool  getIsAbridged(void);
    const bool  getIsAbridged(void) const;
    bool  hasAbridgedMaximumRank(void) const;
    OInteger  getAbridgedMaximumRank(void);
    const OInteger  getAbridgedMaximumRank(void) const;

    virtual size_t extraSportsOlympicsMedalStandingsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsMedalStandingsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsMedalStandingsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsMedalStandingsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void initStandings(void)
      {
        if (flagHasStandings)
          {
            for (size_t num2 = 0; num2 < storeStandings.size(); ++num2)
              {
                storeStandings[num2]->remove_reference();
              }
          }
        flagHasStandings = true;
        storeStandings.clear();
      }
    void appendStandings(SportsOlympicsMedalStandingsOrganizationMedalCountJSON * to_append)
      {
        if (!flagHasStandings)
          {
            flagHasStandings = true;
            storeStandings.clear();
          }
        assert(flagHasStandings);
        to_append->add_reference();
        storeStandings.push_back(to_append);
      }
    void unsetStandings(void)
      {
        if (flagHasStandings)
          {
            for (size_t num3 = 0; num3 < storeStandings.size(); ++num3)
              {
                storeStandings[num3]->remove_reference();
              }
          }
        flagHasStandings = false;
        storeStandings.clear();
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
    void setIsAbridged(bool new_value)
      {
        flagHasIsAbridged = true;
        storeIsAbridged = new_value;
      }
    void unsetIsAbridged(void)
      {
        flagHasIsAbridged = false;
      }
    void setAbridgedMaximumRank(OInteger new_value)
      {
        flagHasAbridgedMaximumRank = true;
        if (new_value < 1)
            throw("The value for field AbridgedMaximumRank of SportsOlympicsMedalStandingsJSON is less than the lower bound (1) for that field.");
        storeAbridgedMaximumRank = new_value;
      }
    void unsetAbridgedMaximumRank(void)
      {
        flagHasAbridgedMaximumRank = false;
      }

    virtual void extraSportsOlympicsMedalStandingsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsMedalStandingsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsMedalStandingsLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsMedalStandingsAppendPair(key, new_component);
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
        assert(flagHasGames);
        handler->start_pair("Games");
        storeGames->write_as_json(handler);
        if (flagHasStandings)
          {
            handler->start_pair("Standings");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeStandings.size(); ++num1)
              {
                storeStandings[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSortMethod)
          {
            handler->start_pair("SortMethod");
            storeSortMethod->write_as_json(handler);
          }
        if (flagHasIsAbridged)
          {
            handler->start_pair("IsAbridged");
            handler->boolean_value(storeIsAbridged);
          }
        if (flagHasAbridgedMaximumRank)
          {
            handler->start_pair("AbridgedMaximumRank");
            handler->number_value(storeAbridgedMaximumRank.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasGames()))
          {
            return "When parsing the object for %what%, the \"Games\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsMedalStandingsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsMedalStandingsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsJSON>, SportsOlympicsMedalStandingsJSON *, bool> generator("Type SportsOlympicsMedalStandings", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsMedalStandingsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsMedalStandingsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsMedalStandingsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsMedalStandingsJSON>, SportsOlympicsMedalStandingsJSON *, bool> generator("Type SportsOlympicsMedalStandings", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsGamesJSON::Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool > fieldGeneratorGames;
        JSONHoldingArrayGenerator<SportsOlympicsMedalStandingsOrganizationMedalCountJSON::Generator, RCHandle<SportsOlympicsMedalStandingsOrganizationMedalCountJSON>, SportsOlympicsMedalStandingsOrganizationMedalCountJSON *, bool > fieldGeneratorStandings;
        JSONHoldingGenerator<SportsOlympicsMedalStandingsSortMethodJSON::Generator, RCHandle<SportsOlympicsMedalStandingsSortMethodJSON>, SportsOlympicsMedalStandingsSortMethodJSON *, bool > fieldGeneratorSortMethod;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsAbridged;
        static char lowerBoundAbridgedMaximumRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAbridgedMaximumRank>, OInteger, o_integer > fieldGeneratorAbridgedMaximumRank;
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
            SportsOlympicsMedalStandingsJSON *result = new SportsOlympicsMedalStandingsJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsMedalStandingsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsMedalStandingsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsMedalStandingsJSON *result)
          {
            if (fieldGeneratorGames.have_value)
              {
                result->setGames(fieldGeneratorGames.value.referenced());
                fieldGeneratorGames.have_value = false;
              }
            else if (!(result->hasGames()))
              {
                error("When parsing the object for %what%, the \"Games\" field was missing.");
              }
            if (fieldGeneratorStandings.have_value)
              {
                result->initStandings();
                size_t count = fieldGeneratorStandings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStandings(fieldGeneratorStandings.value[num].referenced());
                  }
                fieldGeneratorStandings.value.clear();
                fieldGeneratorStandings.have_value = false;
              }
            if (fieldGeneratorSortMethod.have_value)
              {
                result->setSortMethod(fieldGeneratorSortMethod.value.referenced());
                fieldGeneratorSortMethod.have_value = false;
              }
            if (fieldGeneratorIsAbridged.have_value)
              {
                result->setIsAbridged(fieldGeneratorIsAbridged.value);
                fieldGeneratorIsAbridged.have_value = false;
              }
            if (fieldGeneratorAbridgedMaximumRank.have_value)
              {
                result->setAbridgedMaximumRank(fieldGeneratorAbridgedMaximumRank.value);
                fieldGeneratorAbridgedMaximumRank.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsMedalStandingsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "bridgedMaximumRank") == 0)
                        return &fieldGeneratorAbridgedMaximumRank;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sAbridged") == 0)
                        return &fieldGeneratorIsAbridged;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[2]), "rtMethod") == 0)
                                return &fieldGeneratorSortMethod;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "andings") == 0)
                                return &fieldGeneratorStandings;
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
        Generator(bool ignore_extras = false) : fieldGeneratorGames("field \"Games\" of the SportsOlympicsMedalStandings class", ignore_extras), fieldGeneratorStandings("field \"Standings\" of the SportsOlympicsMedalStandings class", ignore_extras), fieldGeneratorSortMethod("field \"SortMethod\" of the SportsOlympicsMedalStandings class", ignore_extras), fieldGeneratorIsAbridged("field \"IsAbridged\" of the SportsOlympicsMedalStandings class"), fieldGeneratorAbridgedMaximumRank("field \"AbridgedMaximumRank\" of the SportsOlympicsMedalStandings class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsMedalStandings class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGames.reset();
            fieldGeneratorStandings.reset();
            fieldGeneratorSortMethod.reset();
            fieldGeneratorIsAbridged.reset();
            fieldGeneratorAbridgedMaximumRank.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSMEDALSTANDINGSJSON_H */
