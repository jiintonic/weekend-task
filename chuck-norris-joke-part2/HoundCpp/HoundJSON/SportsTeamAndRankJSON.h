/* file "SportsTeamAndRankJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTEAMANDRANKJSON_H
#define SPORTSTEAMANDRANKJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "SportsTeamNewJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsTeamAndRankJSON : public ReferenceCounted
  {
  private:
    bool flagHasTeam;
    SportsTeamNewJSON * storeTeam;
    bool flagHasOutcomeCount;
    OInteger storeOutcomeCount;
    bool flagHasRank;
    OInteger storeRank;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsTeamAndRankJSON(const SportsTeamAndRankJSON &);
    SportsTeamAndRankJSON & operator=(const SportsTeamAndRankJSON &other);

    void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutcomeCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTeamAndRankJSON(void);
    virtual ~SportsTeamAndRankJSON(void);
    bool  hasTeam(void) const;
    SportsTeamNewJSON *  getTeam(void);
    const SportsTeamNewJSON *  getTeam(void) const;
    bool  hasOutcomeCount(void) const;
    OInteger  getOutcomeCount(void);
    const OInteger  getOutcomeCount(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;

    virtual size_t extraSportsTeamAndRankComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsTeamAndRankComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsTeamAndRankComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsTeamAndRankComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsTeamAndRankLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsTeamAndRankLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTeam(SportsTeamNewJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = true;
        storeTeam = new_value;
      }
    void unsetTeam(void)
      {
        if (flagHasTeam)
          {
            storeTeam->remove_reference();
          }
        flagHasTeam = false;
      }
    void setOutcomeCount(OInteger new_value)
      {
        flagHasOutcomeCount = true;
        if (new_value < -1)
            throw("The value for field OutcomeCount of SportsTeamAndRankJSON is less than the lower bound (-1) for that field.");
        storeOutcomeCount = new_value;
      }
    void unsetOutcomeCount(void)
      {
        flagHasOutcomeCount = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < -1)
            throw("The value for field Rank of SportsTeamAndRankJSON is less than the lower bound (-1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }

    virtual void extraSportsTeamAndRankAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsTeamAndRankSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsTeamAndRankLookup(key);
        if (old_field == NULL)
          {
            extraSportsTeamAndRankAppendPair(key, new_component);
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
        if (flagHasTeam)
          {
            handler->start_pair("Team");
            storeTeam->write_as_json(handler);
          }
        if (flagHasOutcomeCount)
          {
            handler->start_pair("OutcomeCount");
            handler->number_value(storeOutcomeCount.get_o_integer());
          }
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsTeamAndRankJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTeamAndRankJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTeamAndRankJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamAndRankJSON>, SportsTeamAndRankJSON *, bool> generator("Type SportsTeamAndRank", ignore_extras);
            parse_json_value(text, "Text for SportsTeamAndRankJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTeamAndRankJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTeamAndRankJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamAndRankJSON>, SportsTeamAndRankJSON *, bool> generator("Type SportsTeamAndRank", ignore_extras);
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
        JSONHoldingGenerator<SportsTeamNewJSON::Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool > fieldGeneratorTeam;
        static char lowerBoundOutcomeCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundOutcomeCount>, OInteger, o_integer > fieldGeneratorOutcomeCount;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
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
            SportsTeamAndRankJSON *result = new SportsTeamAndRankJSON();
            assert(result != NULL);
            RCHandle<SportsTeamAndRankJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsTeamAndRankAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsTeamAndRankJSON *result)
          {
            if (fieldGeneratorTeam.have_value)
              {
                result->setTeam(fieldGeneratorTeam.value.referenced());
                fieldGeneratorTeam.have_value = false;
              }
            if (fieldGeneratorOutcomeCount.have_value)
              {
                result->setOutcomeCount(fieldGeneratorOutcomeCount.value);
                fieldGeneratorOutcomeCount.have_value = false;
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
          }
        virtual void handle_result(SportsTeamAndRankJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'O':
                    if (strcmp(&(field_name[1]), "utcomeCount") == 0)
                        return &fieldGeneratorOutcomeCount;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ank") == 0)
                        return &fieldGeneratorRank;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "eam") == 0)
                        return &fieldGeneratorTeam;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTeam("field \"Team\" of the SportsTeamAndRank class", ignore_extras), fieldGeneratorOutcomeCount("field \"OutcomeCount\" of the SportsTeamAndRank class"), fieldGeneratorRank("field \"Rank\" of the SportsTeamAndRank class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsTeamAndRank class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeam.reset();
            fieldGeneratorOutcomeCount.reset();
            fieldGeneratorRank.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSTEAMANDRANKJSON_H */
