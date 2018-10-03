/* file "SportsLeagueJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUEJSON_H
#define SPORTSLEAGUEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueJSON : public ReferenceCounted
  {
  public:
    enum TypeLeagueCodeKnownValues
      {
        LeagueCode_MLB,
        LeagueCode_NBA,
        LeagueCode_NFL,
        LeagueCode_NHL,
        LeagueCode_NCAAMB,
        LeagueCode_NCAAFB,
        LeagueCode_MLS,
        LeagueCode_CFL,
        LeagueCode_SoccerUEFAChampionsLeague,
        LeagueCode_SoccerPrimeraDivision,
        LeagueCode_SoccerPremierLeague,
        LeagueCode_SoccerSerieA,
        LeagueCode_SoccerLigue1,
        LeagueCode_SoccerBundesliga,
        LeagueCode_SoccerEredivisie,
        LeagueCode_SoccerFirstDivisionA,
        LeagueCode_SoccerSuperLig,
        LeagueCode_SoccerSuperLeague,
        LeagueCode_SoccerPremierLeagueRUS,
        LeagueCode_SoccerPremierLeagueUKR,
        LeagueCode_SoccerPrimeiraLiga,
        LeagueCode_SoccerUEFASuperCup,
        LeagueCode_SoccerEuropaLeague,
        LeagueCode_SoccerYouthLeague,
        LeagueCode_CricketICC,
        LeagueCode_CricketIPL,
        LeagueCode_SoccerPrimeraDivisionARG,
        LeagueCode_SoccerPrimeraDivisionMEX,
        LeagueCode_SoccerBrasileiroSerieA,
        LeagueCode_SoccerInternational,
        LeagueCode__none
      };
    struct TypeLeagueCode
      {
        bool in_known_list;
        std::string string_value;
        TypeLeagueCodeKnownValues list_value;

        TypeLeagueCode(void);
        TypeLeagueCode(const TypeLeagueCode &other);
        TypeLeagueCode(TypeLeagueCodeKnownValues other);
        bool  operator==(const TypeLeagueCode &other) const;
        bool  operator!=(const TypeLeagueCode &other) const;
        bool  operator<(const TypeLeagueCode &other) const;
        bool  operator>(const TypeLeagueCode &other) const;
        bool  operator>=(const TypeLeagueCode &other) const;
        bool  operator<=(const TypeLeagueCode &other) const;

      };

    static TypeLeagueCodeKnownValues  stringToLeagueCode(const char *chars);
    static const char * stringFromLeagueCode(TypeLeagueCodeKnownValues the_enum);

  private:
    bool flagHasLeagueCode;
    TypeLeagueCode storeLeagueCode;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsLeagueJSON(const SportsLeagueJSON &);
    SportsLeagueJSON & operator=(const SportsLeagueJSON &other);

    void  fromJSONLeagueCode(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueJSON(void);
    virtual ~SportsLeagueJSON(void);
    bool  hasLeagueCode(void) const;
    TypeLeagueCode  getLeagueCode(void);
    const TypeLeagueCode  getLeagueCode(void) const;
    const char * getLeagueCodeAsChars(void) const;
    std::string  getLeagueCodeAsString(void) const;

    virtual size_t extraSportsLeagueComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsLeagueComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsLeagueComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsLeagueComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsLeagueLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsLeagueLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLeagueCode(TypeLeagueCode new_value)
      {
        flagHasLeagueCode = true;
        storeLeagueCode = new_value;
      }
    void setLeagueCode(const char *chars)
      {
        TypeLeagueCodeKnownValues known = stringToLeagueCode(chars);
        TypeLeagueCode new_value;
        if (known == LeagueCode__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setLeagueCode(new_value);
      }
    void setLeagueCode(std::string the_string)
      {
        setLeagueCode(the_string.c_str());
      }
    void setLeagueCode(TypeLeagueCodeKnownValues new_value)
      {
        TypeLeagueCode new_full_value;
        assert(new_value != LeagueCode__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setLeagueCode(new_full_value);
      }
    void unsetLeagueCode(void)
      {
        flagHasLeagueCode = false;
      }

    virtual void extraSportsLeagueAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsLeagueSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsLeagueLookup(key);
        if (old_field == NULL)
          {
            extraSportsLeagueAppendPair(key, new_component);
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
        assert(flagHasLeagueCode);
        handler->start_pair("LeagueCode");
        if (storeLeagueCode.in_known_list)
          {
            switch (storeLeagueCode.list_value)
              {
                case LeagueCode_MLB:
                    handler->string_value("MLB");
                    break;
                case LeagueCode_NBA:
                    handler->string_value("NBA");
                    break;
                case LeagueCode_NFL:
                    handler->string_value("NFL");
                    break;
                case LeagueCode_NHL:
                    handler->string_value("NHL");
                    break;
                case LeagueCode_NCAAMB:
                    handler->string_value("NCAAMB");
                    break;
                case LeagueCode_NCAAFB:
                    handler->string_value("NCAAFB");
                    break;
                case LeagueCode_MLS:
                    handler->string_value("MLS");
                    break;
                case LeagueCode_CFL:
                    handler->string_value("CFL");
                    break;
                case LeagueCode_SoccerUEFAChampionsLeague:
                    handler->string_value("SoccerUEFAChampionsLeague");
                    break;
                case LeagueCode_SoccerPrimeraDivision:
                    handler->string_value("SoccerPrimeraDivision");
                    break;
                case LeagueCode_SoccerPremierLeague:
                    handler->string_value("SoccerPremierLeague");
                    break;
                case LeagueCode_SoccerSerieA:
                    handler->string_value("SoccerSerieA");
                    break;
                case LeagueCode_SoccerLigue1:
                    handler->string_value("SoccerLigue1");
                    break;
                case LeagueCode_SoccerBundesliga:
                    handler->string_value("SoccerBundesliga");
                    break;
                case LeagueCode_SoccerEredivisie:
                    handler->string_value("SoccerEredivisie");
                    break;
                case LeagueCode_SoccerFirstDivisionA:
                    handler->string_value("SoccerFirstDivisionA");
                    break;
                case LeagueCode_SoccerSuperLig:
                    handler->string_value("SoccerSuperLig");
                    break;
                case LeagueCode_SoccerSuperLeague:
                    handler->string_value("SoccerSuperLeague");
                    break;
                case LeagueCode_SoccerPremierLeagueRUS:
                    handler->string_value("SoccerPremierLeagueRUS");
                    break;
                case LeagueCode_SoccerPremierLeagueUKR:
                    handler->string_value("SoccerPremierLeagueUKR");
                    break;
                case LeagueCode_SoccerPrimeiraLiga:
                    handler->string_value("SoccerPrimeiraLiga");
                    break;
                case LeagueCode_SoccerUEFASuperCup:
                    handler->string_value("SoccerUEFASuperCup");
                    break;
                case LeagueCode_SoccerEuropaLeague:
                    handler->string_value("SoccerEuropaLeague");
                    break;
                case LeagueCode_SoccerYouthLeague:
                    handler->string_value("SoccerYouthLeague");
                    break;
                case LeagueCode_CricketICC:
                    handler->string_value("CricketICC");
                    break;
                case LeagueCode_CricketIPL:
                    handler->string_value("CricketIPL");
                    break;
                case LeagueCode_SoccerPrimeraDivisionARG:
                    handler->string_value("SoccerPrimeraDivisionARG");
                    break;
                case LeagueCode_SoccerPrimeraDivisionMEX:
                    handler->string_value("SoccerPrimeraDivisionMEX");
                    break;
                case LeagueCode_SoccerBrasileiroSerieA:
                    handler->string_value("SoccerBrasileiroSerieA");
                    break;
                case LeagueCode_SoccerInternational:
                    handler->string_value("SoccerInternational");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeLeagueCode.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLeagueCode()))
          {
            return "When parsing the object for %what%, the \"LeagueCode\" field was missing.";
          }
        return NULL;
      }

    static SportsLeagueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueJSON>, SportsLeagueJSON *, bool> generator("Type SportsLeague", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueJSON>, SportsLeagueJSON *, bool> generator("Type SportsLeague", ignore_extras);
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
    class FieldGeneratorLeagueCode : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLeagueCode(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLeagueCode(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeLeagueCodeKnownValues known = stringToLeagueCode(result);
                TypeLeagueCode new_value;
                if (known == LeagueCode__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeLeagueCode result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLeagueCode, TypeLeagueCode, TypeLeagueCode > fieldGeneratorLeagueCode;
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
            SportsLeagueJSON *result = new SportsLeagueJSON();
            assert(result != NULL);
            RCHandle<SportsLeagueJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsLeagueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsLeagueJSON *result)
          {
            if (fieldGeneratorLeagueCode.have_value)
              {
                result->setLeagueCode(fieldGeneratorLeagueCode.value);
                fieldGeneratorLeagueCode.have_value = false;
              }
            else if (!(result->hasLeagueCode()))
              {
                error("When parsing the object for %what%, the \"LeagueCode\" field was missing.");
              }
          }
        virtual void handle_result(SportsLeagueJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "LeagueCode") == 0)
                return &fieldGeneratorLeagueCode;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLeagueCode("field \"LeagueCode\" of the SportsLeague class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsLeague class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLeagueCode.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSLEAGUEJSON_H */
