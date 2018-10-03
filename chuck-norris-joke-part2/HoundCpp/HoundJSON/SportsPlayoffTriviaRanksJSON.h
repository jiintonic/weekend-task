/* file "SportsPlayoffTriviaRanksJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYOFFTRIVIARANKSJSON_H
#define SPORTSPLAYOFFTRIVIARANKSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "SportsTeamAndRankJSON.h"
#include "SportsPlayoffSpecialGameJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayoffTriviaRanksJSON : public ReferenceCounted
  {
  private:
    bool flagHasTeamsAndRanks;
    std::vector< SportsTeamAndRankJSON * > storeTeamsAndRanks;
    bool flagHasSpecialGameType;
    SportsPlayoffSpecialGameJSON * storeSpecialGameType;
    bool flagHasSortOrderReversed;
    bool storeSortOrderReversed;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayoffTriviaRanksJSON(const SportsPlayoffTriviaRanksJSON &);
    SportsPlayoffTriviaRanksJSON & operator=(const SportsPlayoffTriviaRanksJSON &other);

    void  fromJSONTeamsAndRanks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecialGameType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSortOrderReversed(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayoffTriviaRanksJSON(void);
    virtual ~SportsPlayoffTriviaRanksJSON(void);
    bool  hasTeamsAndRanks(void) const;
    size_t  countOfTeamsAndRanks(void) const;
    SportsTeamAndRankJSON *  elementOfTeamsAndRanks(size_t element_num);
    const SportsTeamAndRankJSON *  elementOfTeamsAndRanks(size_t element_num) const;
    std::vector< SportsTeamAndRankJSON * >  getTeamsAndRanks(void);
    const std::vector< SportsTeamAndRankJSON * >  getTeamsAndRanks(void) const;
    bool  hasSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON *  getSpecialGameType(void);
    const SportsPlayoffSpecialGameJSON *  getSpecialGameType(void) const;
    SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void);
    const SportsPlayoffSpecialGameJSON::TypeValue  getSpecialGameTypeValue(void) const;
    const char * getSpecialGameTypeAsChars(void) const;
    std::string  getSpecialGameTypeAsString(void) const;
    bool  hasSortOrderReversed(void) const;
    bool  getSortOrderReversed(void);
    const bool  getSortOrderReversed(void) const;

    virtual size_t extraSportsPlayoffTriviaRanksComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayoffTriviaRanksComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayoffTriviaRanksComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayoffTriviaRanksComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayoffTriviaRanksLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayoffTriviaRanksLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initTeamsAndRanks(void)
      {
        if (flagHasTeamsAndRanks)
          {
            for (size_t num2 = 0; num2 < storeTeamsAndRanks.size(); ++num2)
              {
                storeTeamsAndRanks[num2]->remove_reference();
              }
          }
        flagHasTeamsAndRanks = true;
        storeTeamsAndRanks.clear();
      }
    void appendTeamsAndRanks(SportsTeamAndRankJSON * to_append)
      {
        if (!flagHasTeamsAndRanks)
          {
            flagHasTeamsAndRanks = true;
            storeTeamsAndRanks.clear();
          }
        assert(flagHasTeamsAndRanks);
        to_append->add_reference();
        storeTeamsAndRanks.push_back(to_append);
      }
    void unsetTeamsAndRanks(void)
      {
        if (flagHasTeamsAndRanks)
          {
            for (size_t num3 = 0; num3 < storeTeamsAndRanks.size(); ++num3)
              {
                storeTeamsAndRanks[num3]->remove_reference();
              }
          }
        flagHasTeamsAndRanks = false;
        storeTeamsAndRanks.clear();
      }
    void setSpecialGameType(SportsPlayoffSpecialGameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSpecialGameType)
          {
            storeSpecialGameType->remove_reference();
          }
        flagHasSpecialGameType = true;
        storeSpecialGameType = new_value;
      }
    void setSpecialGameType(SportsPlayoffSpecialGameJSON::TypeValue new_value)
      {
        setSpecialGameType(new SportsPlayoffSpecialGameJSON(new_value));
      }
    void setSpecialGameType(const char *chars)
      {
        SportsPlayoffSpecialGameJSON::TypeValueKnownValues known = SportsPlayoffSpecialGameJSON::stringToValue(chars);
        SportsPlayoffSpecialGameJSON::TypeValue new_value;
        if (known == SportsPlayoffSpecialGameJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSpecialGameType(new_value);
      }
    void setSpecialGameType(std::string the_string)
      {
        setSpecialGameType(the_string.c_str());
      }
    void unsetSpecialGameType(void)
      {
        if (flagHasSpecialGameType)
          {
            storeSpecialGameType->remove_reference();
          }
        flagHasSpecialGameType = false;
      }
    void setSortOrderReversed(bool new_value)
      {
        flagHasSortOrderReversed = true;
        storeSortOrderReversed = new_value;
      }
    void unsetSortOrderReversed(void)
      {
        flagHasSortOrderReversed = false;
      }

    virtual void extraSportsPlayoffTriviaRanksAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayoffTriviaRanksSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayoffTriviaRanksLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayoffTriviaRanksAppendPair(key, new_component);
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
        if (flagHasTeamsAndRanks)
          {
            handler->start_pair("TeamsAndRanks");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTeamsAndRanks.size(); ++num1)
              {
                storeTeamsAndRanks[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpecialGameType)
          {
            handler->start_pair("SpecialGameType");
            storeSpecialGameType->write_as_json(handler);
          }
        if (flagHasSortOrderReversed)
          {
            handler->start_pair("SortOrderReversed");
            handler->boolean_value(storeSortOrderReversed);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayoffTriviaRanksJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayoffTriviaRanksJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayoffTriviaRanksJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaRanksJSON>, SportsPlayoffTriviaRanksJSON *, bool> generator("Type SportsPlayoffTriviaRanks", ignore_extras);
            parse_json_value(text, "Text for SportsPlayoffTriviaRanksJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayoffTriviaRanksJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayoffTriviaRanksJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayoffTriviaRanksJSON>, SportsPlayoffTriviaRanksJSON *, bool> generator("Type SportsPlayoffTriviaRanks", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsTeamAndRankJSON::Generator, RCHandle<SportsTeamAndRankJSON>, SportsTeamAndRankJSON *, bool > fieldGeneratorTeamsAndRanks;
        JSONHoldingGenerator<SportsPlayoffSpecialGameJSON::Generator, RCHandle<SportsPlayoffSpecialGameJSON>, SportsPlayoffSpecialGameJSON *, bool > fieldGeneratorSpecialGameType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSortOrderReversed;
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
            SportsPlayoffTriviaRanksJSON *result = new SportsPlayoffTriviaRanksJSON();
            assert(result != NULL);
            RCHandle<SportsPlayoffTriviaRanksJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayoffTriviaRanksAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayoffTriviaRanksJSON *result)
          {
            if (fieldGeneratorTeamsAndRanks.have_value)
              {
                result->initTeamsAndRanks();
                size_t count = fieldGeneratorTeamsAndRanks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTeamsAndRanks(fieldGeneratorTeamsAndRanks.value[num].referenced());
                  }
                fieldGeneratorTeamsAndRanks.value.clear();
                fieldGeneratorTeamsAndRanks.have_value = false;
              }
            if (fieldGeneratorSpecialGameType.have_value)
              {
                result->setSpecialGameType(fieldGeneratorSpecialGameType.value.referenced());
                fieldGeneratorSpecialGameType.have_value = false;
              }
            if (fieldGeneratorSortOrderReversed.have_value)
              {
                result->setSortOrderReversed(fieldGeneratorSortOrderReversed.value);
                fieldGeneratorSortOrderReversed.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayoffTriviaRanksJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strcmp(&(field_name[2]), "rtOrderReversed") == 0)
                                return &fieldGeneratorSortOrderReversed;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "ecialGameType") == 0)
                                return &fieldGeneratorSpecialGameType;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "eamsAndRanks") == 0)
                        return &fieldGeneratorTeamsAndRanks;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTeamsAndRanks("field \"TeamsAndRanks\" of the SportsPlayoffTriviaRanks class", ignore_extras), fieldGeneratorSpecialGameType("field \"SpecialGameType\" of the SportsPlayoffTriviaRanks class", ignore_extras), fieldGeneratorSortOrderReversed("field \"SortOrderReversed\" of the SportsPlayoffTriviaRanks class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayoffTriviaRanks class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeamsAndRanks.reset();
            fieldGeneratorSpecialGameType.reset();
            fieldGeneratorSortOrderReversed.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYOFFTRIVIARANKSJSON_H */
