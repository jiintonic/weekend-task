/* file "SportsResultScoreCricketJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSRESULTSCORECRICKETJSON_H
#define SPORTSRESULTSCORECRICKETJSON_H

#pragma interface

#include "SportsResultScoreJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <stdint.h>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsResultScoreCricketJSON : public SportsResultScoreJSON
  {
  public:
    enum TypeSportsGameKind
      {
        SportsGameKind_Cricket
      };

    static TypeSportsGameKind  stringToSportsGameKind(const char *chars);
    static const char * stringFromSportsGameKind(TypeSportsGameKind the_enum);
    enum TypeMatchFormatKnownValues
      {
        MatchFormat_ODI,
        MatchFormat_T20,
        MatchFormat_T20I,
        MatchFormat_Test,
        MatchFormat_ListA,
        MatchFormat_FirstClass,
        MatchFormat__none
      };
    struct TypeMatchFormat
      {
        bool in_known_list;
        std::string string_value;
        TypeMatchFormatKnownValues list_value;

        TypeMatchFormat(void);
        TypeMatchFormat(const TypeMatchFormat &other);
        TypeMatchFormat(TypeMatchFormatKnownValues other);
        bool  operator==(const TypeMatchFormat &other) const;
        bool  operator!=(const TypeMatchFormat &other) const;
        bool  operator<(const TypeMatchFormat &other) const;
        bool  operator>(const TypeMatchFormat &other) const;
        bool  operator>=(const TypeMatchFormat &other) const;
        bool  operator<=(const TypeMatchFormat &other) const;

      };

    static TypeMatchFormatKnownValues  stringToMatchFormat(const char *chars);
    static const char * stringFromMatchFormat(TypeMatchFormatKnownValues the_enum);
    class TypeInningsJSON : public ReferenceCounted
      {
      private:
        bool flagHasTeamIndex;
        uint8_t storeTeamIndex;
        bool flagHasRuns;
        OInteger storeRuns;
        bool flagHasWicketsLost;
        uint8_t storeWicketsLost;
        bool flagHasOvers;
        double storeOvers;
        std::string textStoreOvers;
        bool flagHasAllottedOvers;
        double storeAllottedOvers;
        std::string textStoreAllottedOvers;
        bool flagHasDeclared;
        bool storeDeclared;
        bool flagHasFollowedOn;
        bool storeFollowedOn;
        bool flagHasTarget;
        OInteger storeTarget;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeInningsJSON(const TypeInningsJSON &);
        TypeInningsJSON & operator=(const TypeInningsJSON &other);

        void  fromJSONTeamIndex(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRuns(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWicketsLost(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOvers(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAllottedOvers(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDeclared(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFollowedOn(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTarget(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeInningsJSON(void);
        virtual ~TypeInningsJSON(void);
        bool  hasTeamIndex(void) const;
        uint8_t  getTeamIndex(void);
        const uint8_t  getTeamIndex(void) const;
        bool  hasRuns(void) const;
        OInteger  getRuns(void);
        const OInteger  getRuns(void) const;
        bool  hasWicketsLost(void) const;
        uint8_t  getWicketsLost(void);
        const uint8_t  getWicketsLost(void) const;
        bool  hasOvers(void) const;
        double  getOvers(void);
        const double  getOvers(void) const;
        std::string  getOversAsText(void) const;
        bool  hasAllottedOvers(void) const;
        double  getAllottedOvers(void);
        const double  getAllottedOvers(void) const;
        std::string  getAllottedOversAsText(void) const;
        bool  hasDeclared(void) const;
        bool  getDeclared(void);
        const bool  getDeclared(void) const;
        bool  hasFollowedOn(void) const;
        bool  getFollowedOn(void);
        const bool  getFollowedOn(void) const;
        bool  hasTarget(void) const;
        OInteger  getTarget(void);
        const OInteger  getTarget(void) const;

        virtual size_t extraTypeInningsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeInningsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeInningsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeInningsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeInningsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeInningsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTeamIndex(uint8_t new_value)
          {
            flagHasTeamIndex = true;
            if (new_value < 0)
                throw("The value for field TeamIndex of TypeInningsJSON is less than the lower bound (0) for that field.");
            if (new_value > 1)
                throw("The value for field TeamIndex of TypeInningsJSON is greater than the upper bound (1) for that field.");
            storeTeamIndex = new_value;
          }
        void unsetTeamIndex(void)
          {
            flagHasTeamIndex = false;
          }
        void setRuns(OInteger new_value)
          {
            flagHasRuns = true;
            if (new_value < 0)
                throw("The value for field Runs of TypeInningsJSON is less than the lower bound (0) for that field.");
            storeRuns = new_value;
          }
        void unsetRuns(void)
          {
            flagHasRuns = false;
          }
        void setWicketsLost(uint8_t new_value)
          {
            flagHasWicketsLost = true;
            if (new_value < 0)
                throw("The value for field WicketsLost of TypeInningsJSON is less than the lower bound (0) for that field.");
            if (new_value > 10)
                throw("The value for field WicketsLost of TypeInningsJSON is greater than the upper bound (10) for that field.");
            storeWicketsLost = new_value;
          }
        void unsetWicketsLost(void)
          {
            flagHasWicketsLost = false;
          }
        void setOvers(double new_value)
          {
            flagHasOvers = true;
            if (new_value < 0)
                throw("The value for field Overs of TypeInningsJSON is less than the lower bound (0) for that field.");
            storeOvers = new_value;
            textStoreOvers = "";
          }
        void setOversText(std::string new_value)
          {
            flagHasOvers = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Overs of TypeInningsJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field Overs of TypeInningsJSON is less than the lower bound (0) for that field.");
            textStoreOvers = new_value;
          }
        void unsetOvers(void)
          {
            flagHasOvers = false;
          }
        void setAllottedOvers(double new_value)
          {
            flagHasAllottedOvers = true;
            if (new_value < 0)
                throw("The value for field AllottedOvers of TypeInningsJSON is less than the lower bound (0) for that field.");
            storeAllottedOvers = new_value;
            textStoreAllottedOvers = "";
          }
        void setAllottedOversText(std::string new_value)
          {
            flagHasAllottedOvers = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field AllottedOvers of TypeInningsJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field AllottedOvers of TypeInningsJSON is less than the lower bound (0) for that field.");
            textStoreAllottedOvers = new_value;
          }
        void unsetAllottedOvers(void)
          {
            flagHasAllottedOvers = false;
          }
        void setDeclared(bool new_value)
          {
            flagHasDeclared = true;
            storeDeclared = new_value;
          }
        void unsetDeclared(void)
          {
            flagHasDeclared = false;
          }
        void setFollowedOn(bool new_value)
          {
            flagHasFollowedOn = true;
            storeFollowedOn = new_value;
          }
        void unsetFollowedOn(void)
          {
            flagHasFollowedOn = false;
          }
        void setTarget(OInteger new_value)
          {
            flagHasTarget = true;
            if (new_value < 0)
                throw("The value for field Target of TypeInningsJSON is less than the lower bound (0) for that field.");
            storeTarget = new_value;
          }
        void unsetTarget(void)
          {
            flagHasTarget = false;
          }

        virtual void extraTypeInningsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeInningsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeInningsLookup(key);
            if (old_field == NULL)
              {
                extraTypeInningsAppendPair(key, new_component);
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
            assert(flagHasTeamIndex);
            handler->start_pair("TeamIndex");
            handler->number_value(storeTeamIndex);
            if (flagHasRuns)
              {
                handler->start_pair("Runs");
                handler->number_value(storeRuns.get_o_integer());
              }
            if (flagHasWicketsLost)
              {
                handler->start_pair("WicketsLost");
                handler->number_value(storeWicketsLost);
              }
            if (flagHasOvers)
              {
                handler->start_pair("Overs");
                if (textStoreOvers != "")
                    handler->number_value(textStoreOvers.c_str());
                else if (((double)(long int)storeOvers) == storeOvers)
                    handler->number_value((long int)storeOvers);
                else
                    handler->number_value(storeOvers);
              }
            if (flagHasAllottedOvers)
              {
                handler->start_pair("AllottedOvers");
                if (textStoreAllottedOvers != "")
                    handler->number_value(textStoreAllottedOvers.c_str());
                else if (((double)(long int)storeAllottedOvers) == storeAllottedOvers)
                    handler->number_value((long int)storeAllottedOvers);
                else
                    handler->number_value(storeAllottedOvers);
              }
            if (flagHasDeclared)
              {
                handler->start_pair("Declared");
                handler->boolean_value(storeDeclared);
              }
            if (flagHasFollowedOn)
              {
                handler->start_pair("FollowedOn");
                handler->boolean_value(storeFollowedOn);
              }
            if (flagHasTarget)
              {
                handler->start_pair("Target");
                handler->number_value(storeTarget.get_o_integer());
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTeamIndex()))
              {
                return "When parsing the object for %what%, the \"TeamIndex\" field was missing.";
              }
            return NULL;
          }

        static TypeInningsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeInningsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeInningsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeInningsJSON>, TypeInningsJSON *, bool> generator("Type TypeInnings", ignore_extras);
                parse_json_value(text, "Text for TypeInningsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeInningsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeInningsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeInningsJSON>, TypeInningsJSON *, bool> generator("Type TypeInnings", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 1>, uint8_t, uint8_t > fieldGeneratorTeamIndex;
            static char lowerBoundRuns[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRuns>, OInteger, o_integer > fieldGeneratorRuns;
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 10>, uint8_t, uint8_t > fieldGeneratorWicketsLost;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorOvers;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAllottedOvers;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDeclared;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFollowedOn;
            static char lowerBoundTarget[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTarget>, OInteger, o_integer > fieldGeneratorTarget;
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
                TypeInningsJSON *result = new TypeInningsJSON();
                assert(result != NULL);
                RCHandle<TypeInningsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeInningsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeInningsJSON *result)
              {
                if (fieldGeneratorTeamIndex.have_value)
                  {
                    result->setTeamIndex(fieldGeneratorTeamIndex.value);
                    fieldGeneratorTeamIndex.have_value = false;
                  }
                else if (!(result->hasTeamIndex()))
                  {
                    error("When parsing the object for %what%, the \"TeamIndex\" field was missing.");
                  }
                if (fieldGeneratorRuns.have_value)
                  {
                    result->setRuns(fieldGeneratorRuns.value);
                    fieldGeneratorRuns.have_value = false;
                  }
                if (fieldGeneratorWicketsLost.have_value)
                  {
                    result->setWicketsLost(fieldGeneratorWicketsLost.value);
                    fieldGeneratorWicketsLost.have_value = false;
                  }
                if (fieldGeneratorOvers.have_value)
                  {
                    result->setOversText(fieldGeneratorOvers.value);
                    fieldGeneratorOvers.have_value = false;
                  }
                if (fieldGeneratorAllottedOvers.have_value)
                  {
                    result->setAllottedOversText(fieldGeneratorAllottedOvers.value);
                    fieldGeneratorAllottedOvers.have_value = false;
                  }
                if (fieldGeneratorDeclared.have_value)
                  {
                    result->setDeclared(fieldGeneratorDeclared.value);
                    fieldGeneratorDeclared.have_value = false;
                  }
                if (fieldGeneratorFollowedOn.have_value)
                  {
                    result->setFollowedOn(fieldGeneratorFollowedOn.value);
                    fieldGeneratorFollowedOn.have_value = false;
                  }
                if (fieldGeneratorTarget.have_value)
                  {
                    result->setTarget(fieldGeneratorTarget.value);
                    fieldGeneratorTarget.have_value = false;
                  }
              }
            virtual void handle_result(TypeInningsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "llottedOvers") == 0)
                            return &fieldGeneratorAllottedOvers;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "eclared") == 0)
                            return &fieldGeneratorDeclared;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "ollowedOn") == 0)
                            return &fieldGeneratorFollowedOn;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[1]), "vers") == 0)
                            return &fieldGeneratorOvers;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "uns") == 0)
                            return &fieldGeneratorRuns;
                        break;
                    case 'T':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "rget") == 0)
                                    return &fieldGeneratorTarget;
                                break;
                            case 'e':
                                if (strcmp(&(field_name[2]), "amIndex") == 0)
                                    return &fieldGeneratorTeamIndex;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "icketsLost") == 0)
                            return &fieldGeneratorWicketsLost;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTeamIndex("field \"TeamIndex\" of the TypeInnings class"), fieldGeneratorRuns("field \"Runs\" of the TypeInnings class"), fieldGeneratorWicketsLost("field \"WicketsLost\" of the TypeInnings class"), fieldGeneratorOvers("field \"Overs\" of the TypeInnings class"), fieldGeneratorAllottedOvers("field \"AllottedOvers\" of the TypeInnings class"), fieldGeneratorDeclared("field \"Declared\" of the TypeInnings class"), fieldGeneratorFollowedOn("field \"FollowedOn\" of the TypeInnings class"), fieldGeneratorTarget("field \"Target\" of the TypeInnings class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeInnings class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTeamIndex.reset();
                fieldGeneratorRuns.reset();
                fieldGeneratorWicketsLost.reset();
                fieldGeneratorOvers.reset();
                fieldGeneratorAllottedOvers.reset();
                fieldGeneratorDeclared.reset();
                fieldGeneratorFollowedOn.reset();
                fieldGeneratorTarget.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasSportsGameKind;
    bool flagHasMatchFormat;
    TypeMatchFormat storeMatchFormat;
    bool flagHasInnings;
    std::vector< TypeInningsJSON * > storeInnings;
    bool flagHasWinningTeamIndex;
    uint8_t storeWinningTeamIndex;
    bool flagHasWinningTeamRunDifference;
    OInteger storeWinningTeamRunDifference;
    bool flagHasWinningTeamWicketDifference;
    uint8_t storeWinningTeamWicketDifference;
    bool flagHasDraw;
    bool storeDraw;
    bool flagHasTie;
    bool storeTie;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsResultScoreCricketJSON(const SportsResultScoreCricketJSON &);
    SportsResultScoreCricketJSON & operator=(const SportsResultScoreCricketJSON &other);

    JSONValue * extraSportsGameKindToJSON(void) const;
    JSONValue * extraMatchFormatToJSON(void) const;
    JSONValue * extraInningsToJSON(void) const;
    JSONValue * extraWinningTeamIndexToJSON(void) const;
    JSONValue * extraWinningTeamRunDifferenceToJSON(void) const;
    JSONValue * extraWinningTeamWicketDifferenceToJSON(void) const;
    JSONValue * extraDrawToJSON(void) const;
    JSONValue * extraTieToJSON(void) const;

    void  fromJSONSportsGameKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInnings(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWinningTeamIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWinningTeamRunDifference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWinningTeamWicketDifference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDraw(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTie(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsResultScoreCricketJSON(void);
    virtual ~SportsResultScoreCricketJSON(void);
    const char * getSportsResultScoreKind(void) const;
    bool  hasSportsGameKind(void) const;
    TypeSportsGameKind  getSportsGameKind(void);
    const TypeSportsGameKind  getSportsGameKind(void) const;
    const char * getSportsGameKindAsChars(void) const;
    std::string  getSportsGameKindAsString(void) const;
    bool  hasMatchFormat(void) const;
    TypeMatchFormat  getMatchFormat(void);
    const TypeMatchFormat  getMatchFormat(void) const;
    const char * getMatchFormatAsChars(void) const;
    std::string  getMatchFormatAsString(void) const;
    bool  hasInnings(void) const;
    size_t  countOfInnings(void) const;
    TypeInningsJSON *  elementOfInnings(size_t element_num);
    const TypeInningsJSON *  elementOfInnings(size_t element_num) const;
    std::vector< TypeInningsJSON * >  getInnings(void);
    const std::vector< TypeInningsJSON * >  getInnings(void) const;
    bool  hasWinningTeamIndex(void) const;
    uint8_t  getWinningTeamIndex(void);
    const uint8_t  getWinningTeamIndex(void) const;
    bool  hasWinningTeamRunDifference(void) const;
    OInteger  getWinningTeamRunDifference(void);
    const OInteger  getWinningTeamRunDifference(void) const;
    bool  hasWinningTeamWicketDifference(void) const;
    uint8_t  getWinningTeamWicketDifference(void);
    const uint8_t  getWinningTeamWicketDifference(void) const;
    bool  hasDraw(void) const;
    bool  getDraw(void);
    const bool  getDraw(void) const;
    bool  hasTie(void) const;
    bool  getTie(void);
    const bool  getTie(void) const;

    virtual size_t extraSportsResultScoreCricketComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsResultScoreCricketComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsResultScoreCricketComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsResultScoreCricketComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsResultScoreCricketLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsResultScoreCricketLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraSportsResultScoreComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSportsGameKind)
            ++result;
        if (flagHasMatchFormat)
            ++result;
        if (flagHasInnings)
            ++result;
        if (flagHasWinningTeamIndex)
            ++result;
        if (flagHasWinningTeamRunDifference)
            ++result;
        if (flagHasWinningTeamWicketDifference)
            ++result;
        if (flagHasDraw)
            ++result;
        if (flagHasTie)
            ++result;
        result += extraSportsResultScoreCricketComponentCount();
        return result;
      }
    const char *extraSportsResultScoreComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSportsGameKind)
          {
            if (remainder == 0)
                return "SportsGameKind";
            --remainder;
          }
        if (flagHasMatchFormat)
          {
            if (remainder == 0)
                return "MatchFormat";
            --remainder;
          }
        if (flagHasInnings)
          {
            if (remainder == 0)
                return "Innings";
            --remainder;
          }
        if (flagHasWinningTeamIndex)
          {
            if (remainder == 0)
                return "WinningTeamIndex";
            --remainder;
          }
        if (flagHasWinningTeamRunDifference)
          {
            if (remainder == 0)
                return "WinningTeamRunDifference";
            --remainder;
          }
        if (flagHasWinningTeamWicketDifference)
          {
            if (remainder == 0)
                return "WinningTeamWicketDifference";
            --remainder;
          }
        if (flagHasDraw)
          {
            if (remainder == 0)
                return "Draw";
            --remainder;
          }
        if (flagHasTie)
          {
            if (remainder == 0)
                return "Tie";
            --remainder;
          }
        return extraSportsResultScoreCricketComponentKey(remainder);
      }
    JSONValue *extraSportsResultScoreComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSportsGameKind)
          {
            if (remainder == 0)
                return extraSportsGameKindToJSON();
            --remainder;
          }
        if (flagHasMatchFormat)
          {
            if (remainder == 0)
                return extraMatchFormatToJSON();
            --remainder;
          }
        if (flagHasInnings)
          {
            if (remainder == 0)
                return extraInningsToJSON();
            --remainder;
          }
        if (flagHasWinningTeamIndex)
          {
            if (remainder == 0)
                return extraWinningTeamIndexToJSON();
            --remainder;
          }
        if (flagHasWinningTeamRunDifference)
          {
            if (remainder == 0)
                return extraWinningTeamRunDifferenceToJSON();
            --remainder;
          }
        if (flagHasWinningTeamWicketDifference)
          {
            if (remainder == 0)
                return extraWinningTeamWicketDifferenceToJSON();
            --remainder;
          }
        if (flagHasDraw)
          {
            if (remainder == 0)
                return extraDrawToJSON();
            --remainder;
          }
        if (flagHasTie)
          {
            if (remainder == 0)
                return extraTieToJSON();
            --remainder;
          }
        return extraSportsResultScoreCricketComponentValue(remainder);
      }
    const JSONValue *extraSportsResultScoreComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSportsGameKind)
          {
            if (remainder == 0)
                return extraSportsGameKindToJSON();
            --remainder;
          }
        if (flagHasMatchFormat)
          {
            if (remainder == 0)
                return extraMatchFormatToJSON();
            --remainder;
          }
        if (flagHasInnings)
          {
            if (remainder == 0)
                return extraInningsToJSON();
            --remainder;
          }
        if (flagHasWinningTeamIndex)
          {
            if (remainder == 0)
                return extraWinningTeamIndexToJSON();
            --remainder;
          }
        if (flagHasWinningTeamRunDifference)
          {
            if (remainder == 0)
                return extraWinningTeamRunDifferenceToJSON();
            --remainder;
          }
        if (flagHasWinningTeamWicketDifference)
          {
            if (remainder == 0)
                return extraWinningTeamWicketDifferenceToJSON();
            --remainder;
          }
        if (flagHasDraw)
          {
            if (remainder == 0)
                return extraDrawToJSON();
            --remainder;
          }
        if (flagHasTie)
          {
            if (remainder == 0)
                return extraTieToJSON();
            --remainder;
          }
        return extraSportsResultScoreCricketComponentValue(remainder);
      }
    JSONValue *extraSportsResultScoreLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "raw") == 0)
                    return (flagHasDraw ? extraDrawToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "nnings") == 0)
                    return (flagHasInnings ? extraInningsToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "atchFormat") == 0)
                    return (flagHasMatchFormat ? extraMatchFormatToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "portsGameKind") == 0)
                    return (flagHasSportsGameKind ? extraSportsGameKindToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ie") == 0)
                    return (flagHasTie ? extraTieToJSON() : NULL);
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "inningTeam", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[12]), "ndex") == 0)
                                return (flagHasWinningTeamIndex ? extraWinningTeamIndexToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[12]), "unDifference") == 0)
                                return (flagHasWinningTeamRunDifference ? extraWinningTeamRunDifferenceToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[12]), "icketDifference") == 0)
                                return (flagHasWinningTeamWicketDifference ? extraWinningTeamWicketDifferenceToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSportsResultScoreCricketLookup(field_name);
      }
    const JSONValue *extraSportsResultScoreLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'D':
                if (strcmp(&(field_name[1]), "raw") == 0)
                    return (flagHasDraw ? extraDrawToJSON() : NULL);
                break;
            case 'I':
                if (strcmp(&(field_name[1]), "nnings") == 0)
                    return (flagHasInnings ? extraInningsToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "atchFormat") == 0)
                    return (flagHasMatchFormat ? extraMatchFormatToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "portsGameKind") == 0)
                    return (flagHasSportsGameKind ? extraSportsGameKindToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ie") == 0)
                    return (flagHasTie ? extraTieToJSON() : NULL);
                break;
            case 'W':
                if (strncmp(&(field_name[1]), "inningTeam", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[11]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[12]), "ndex") == 0)
                                return (flagHasWinningTeamIndex ? extraWinningTeamIndexToJSON() : NULL);
                            break;
                        case 'R':
                            if (strcmp(&(field_name[12]), "unDifference") == 0)
                                return (flagHasWinningTeamRunDifference ? extraWinningTeamRunDifferenceToJSON() : NULL);
                            break;
                        case 'W':
                            if (strcmp(&(field_name[12]), "icketDifference") == 0)
                                return (flagHasWinningTeamWicketDifference ? extraWinningTeamWicketDifferenceToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return extraSportsResultScoreCricketLookup(field_name);
      }

    void setSportsGameKind(void)
      {
        flagHasSportsGameKind = true;
      }
    void setSportsGameKind(TypeSportsGameKind new_value)
      {
        setSportsGameKind();
      }
    void setSportsGameKind(const char *chars)
      {
        setSportsGameKind(stringToSportsGameKind(chars));
      }
    void setSportsGameKind(std::string the_string)
      {
        setSportsGameKind(stringToSportsGameKind(the_string.c_str()));
      }
    void unsetSportsGameKind(void)
      {
        flagHasSportsGameKind = false;
      }
    void setMatchFormat(TypeMatchFormat new_value)
      {
        flagHasMatchFormat = true;
        storeMatchFormat = new_value;
      }
    void setMatchFormat(const char *chars)
      {
        TypeMatchFormatKnownValues known = stringToMatchFormat(chars);
        TypeMatchFormat new_value;
        if (known == MatchFormat__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setMatchFormat(new_value);
      }
    void setMatchFormat(std::string the_string)
      {
        setMatchFormat(the_string.c_str());
      }
    void setMatchFormat(TypeMatchFormatKnownValues new_value)
      {
        TypeMatchFormat new_full_value;
        assert(new_value != MatchFormat__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setMatchFormat(new_full_value);
      }
    void unsetMatchFormat(void)
      {
        flagHasMatchFormat = false;
      }
    void initInnings(void)
      {
        if (flagHasInnings)
          {
            for (size_t num2 = 0; num2 < storeInnings.size(); ++num2)
              {
                storeInnings[num2]->remove_reference();
              }
          }
        flagHasInnings = true;
        storeInnings.clear();
      }
    void appendInnings(TypeInningsJSON * to_append)
      {
        if (!flagHasInnings)
          {
            flagHasInnings = true;
            storeInnings.clear();
          }
        assert(flagHasInnings);
        to_append->add_reference();
        storeInnings.push_back(to_append);
      }
    void unsetInnings(void)
      {
        if (flagHasInnings)
          {
            for (size_t num3 = 0; num3 < storeInnings.size(); ++num3)
              {
                storeInnings[num3]->remove_reference();
              }
          }
        flagHasInnings = false;
        storeInnings.clear();
      }
    void setWinningTeamIndex(uint8_t new_value)
      {
        flagHasWinningTeamIndex = true;
        if (new_value < 0)
            throw("The value for field WinningTeamIndex of SportsResultScoreCricketJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field WinningTeamIndex of SportsResultScoreCricketJSON is greater than the upper bound (1) for that field.");
        storeWinningTeamIndex = new_value;
      }
    void unsetWinningTeamIndex(void)
      {
        flagHasWinningTeamIndex = false;
      }
    void setWinningTeamRunDifference(OInteger new_value)
      {
        flagHasWinningTeamRunDifference = true;
        if (new_value < 1)
            throw("The value for field WinningTeamRunDifference of SportsResultScoreCricketJSON is less than the lower bound (1) for that field.");
        storeWinningTeamRunDifference = new_value;
      }
    void unsetWinningTeamRunDifference(void)
      {
        flagHasWinningTeamRunDifference = false;
      }
    void setWinningTeamWicketDifference(uint8_t new_value)
      {
        flagHasWinningTeamWicketDifference = true;
        if (new_value < 1)
            throw("The value for field WinningTeamWicketDifference of SportsResultScoreCricketJSON is less than the lower bound (1) for that field.");
        if (new_value > 10)
            throw("The value for field WinningTeamWicketDifference of SportsResultScoreCricketJSON is greater than the upper bound (10) for that field.");
        storeWinningTeamWicketDifference = new_value;
      }
    void unsetWinningTeamWicketDifference(void)
      {
        flagHasWinningTeamWicketDifference = false;
      }
    void setDraw(bool new_value)
      {
        flagHasDraw = true;
        storeDraw = new_value;
      }
    void unsetDraw(void)
      {
        flagHasDraw = false;
      }
    void setTie(bool new_value)
      {
        flagHasTie = true;
        storeTie = new_value;
      }
    void unsetTie(void)
      {
        flagHasTie = false;
      }

    virtual void extraSportsResultScoreCricketAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsResultScoreCricketSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsResultScoreCricketLookup(key);
        if (old_field == NULL)
          {
            extraSportsResultScoreCricketAppendPair(key, new_component);
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
    void extraSportsResultScoreAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "raw") == 0)
                    {
                    fromJSONDraw(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "nnings") == 0)
                    {
                    fromJSONInnings(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "atchFormat") == 0)
                    {
                    fromJSONMatchFormat(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "portsGameKind") == 0)
                    {
                    fromJSONSportsGameKind(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ie") == 0)
                    {
                    fromJSONTie(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strncmp(&(key[1]), "inningTeam", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'I':
                            if (strcmp(&(key[12]), "ndex") == 0)
                                {
                                fromJSONWinningTeamIndex(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[12]), "unDifference") == 0)
                                {
                                fromJSONWinningTeamRunDifference(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[12]), "icketDifference") == 0)
                                {
                                fromJSONWinningTeamWicketDifference(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraSportsResultScoreCricketAppendPair(key, new_component);
      }
    void extraSportsResultScoreSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'D':
                if (strcmp(&(key[1]), "raw") == 0)
                    {
                    fromJSONDraw(new_component, false);
                    return;
                    }
                break;
            case 'I':
                if (strcmp(&(key[1]), "nnings") == 0)
                    {
                    fromJSONInnings(new_component, false);
                    return;
                    }
                break;
            case 'M':
                if (strcmp(&(key[1]), "atchFormat") == 0)
                    {
                    fromJSONMatchFormat(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "portsGameKind") == 0)
                    {
                    fromJSONSportsGameKind(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ie") == 0)
                    {
                    fromJSONTie(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strncmp(&(key[1]), "inningTeam", 10) == 0)
                  {
                    switch ((unsigned char)(key[11]))
                      {
                        case 'I':
                            if (strcmp(&(key[12]), "ndex") == 0)
                                {
                                fromJSONWinningTeamIndex(new_component, false);
                                return;
                                }
                            break;
                        case 'R':
                            if (strcmp(&(key[12]), "unDifference") == 0)
                                {
                                fromJSONWinningTeamRunDifference(new_component, false);
                                return;
                                }
                            break;
                        case 'W':
                            if (strcmp(&(key[12]), "icketDifference") == 0)
                                {
                                fromJSONWinningTeamWicketDifference(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        extraSportsResultScoreCricketSetField(key, new_component);
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
        SportsResultScoreJSON::write_fields_as_json(handler);
        assert(flagHasSportsGameKind);
        handler->start_pair("SportsGameKind");
        handler->string_value("Cricket");
        if (flagHasMatchFormat)
          {
            handler->start_pair("MatchFormat");
            if (storeMatchFormat.in_known_list)
              {
                switch (storeMatchFormat.list_value)
                  {
                    case MatchFormat_ODI:
                        handler->string_value("ODI");
                        break;
                    case MatchFormat_T20:
                        handler->string_value("T20");
                        break;
                    case MatchFormat_T20I:
                        handler->string_value("T20I");
                        break;
                    case MatchFormat_Test:
                        handler->string_value("Test");
                        break;
                    case MatchFormat_ListA:
                        handler->string_value("ListA");
                        break;
                    case MatchFormat_FirstClass:
                        handler->string_value("FirstClass");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeMatchFormat.string_value);
              }
          }
        if (flagHasInnings)
          {
            handler->start_pair("Innings");
            assert(storeInnings.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeInnings.size(); ++num1)
              {
                storeInnings[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasWinningTeamIndex)
          {
            handler->start_pair("WinningTeamIndex");
            handler->number_value(storeWinningTeamIndex);
          }
        if (flagHasWinningTeamRunDifference)
          {
            handler->start_pair("WinningTeamRunDifference");
            handler->number_value(storeWinningTeamRunDifference.get_o_integer());
          }
        if (flagHasWinningTeamWicketDifference)
          {
            handler->start_pair("WinningTeamWicketDifference");
            handler->number_value(storeWinningTeamWicketDifference);
          }
        if (flagHasDraw)
          {
            handler->start_pair("Draw");
            handler->boolean_value(storeDraw);
          }
        if (flagHasTie)
          {
            handler->start_pair("Tie");
            handler->boolean_value(storeTie);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSportsGameKind()))
          {
            return "When parsing the object for %what%, the \"SportsGameKind\" field was missing.";
          }
        return NULL;
      }

    static SportsResultScoreCricketJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsResultScoreCricketJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsResultScoreCricketJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreCricketJSON>, SportsResultScoreCricketJSON *, bool> generator("Type SportsResultScoreCricket", ignore_extras);
            parse_json_value(text, "Text for SportsResultScoreCricketJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsResultScoreCricketJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsResultScoreCricketJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsResultScoreCricketJSON>, SportsResultScoreCricketJSON *, bool> generator("Type SportsResultScoreCricket", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public SportsResultScoreJSON::Generator
      {
      private:
    class FieldGeneratorSportsGameKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSportsGameKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSportsGameKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSportsGameKind(result));
              }
            virtual void handle_result(TypeSportsGameKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSportsGameKind, TypeSportsGameKind, TypeSportsGameKind > fieldGeneratorSportsGameKind;
    class FieldGeneratorMatchFormat : public JSONStringGenerator
          {
          protected:
            FieldGeneratorMatchFormat(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorMatchFormat(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeMatchFormatKnownValues known = stringToMatchFormat(result);
                TypeMatchFormat new_value;
                if (known == MatchFormat__none)
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
            virtual void handle_result(TypeMatchFormat result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorMatchFormat, TypeMatchFormat, TypeMatchFormat > fieldGeneratorMatchFormat;
        JSONHoldingArrayGenerator<TypeInningsJSON::Generator, RCHandle<TypeInningsJSON>, TypeInningsJSON *, bool > fieldGeneratorInnings;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 1>, uint8_t, uint8_t > fieldGeneratorWinningTeamIndex;
        static char lowerBoundWinningTeamRunDifference[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundWinningTeamRunDifference>, OInteger, o_integer > fieldGeneratorWinningTeamRunDifference;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 1, 10>, uint8_t, uint8_t > fieldGeneratorWinningTeamWicketDifference;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDraw;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTie;
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
            if (!(strcmp(getSportsResultScoreJSONKey().c_str(), "Cricket") == 0))
                throw("The key field has a value other than `Cricket'.");
            SportsResultScoreCricketJSON *result = new SportsResultScoreCricketJSON();
            assert(result != NULL);
            RCHandle<SportsResultScoreCricketJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsResultScoreCricketAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(SportsResultScoreJSON *new_result)
          {
            handle_result((SportsResultScoreCricketJSON *)new_result);
          }
        void finish(SportsResultScoreCricketJSON *result)
          {
            if (fieldGeneratorSportsGameKind.have_value)
              {
                result->setSportsGameKind();
                fieldGeneratorSportsGameKind.have_value = false;
              }
            else if (!(result->hasSportsGameKind()))
              {
                error("When parsing the object for %what%, the \"SportsGameKind\" field was missing.");
              }
            if (fieldGeneratorMatchFormat.have_value)
              {
                result->setMatchFormat(fieldGeneratorMatchFormat.value);
                fieldGeneratorMatchFormat.have_value = false;
              }
            if (fieldGeneratorInnings.have_value)
              {
                result->initInnings();
                size_t count = fieldGeneratorInnings.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInnings(fieldGeneratorInnings.value[num].referenced());
                  }
                fieldGeneratorInnings.value.clear();
                fieldGeneratorInnings.have_value = false;
              }
            if (fieldGeneratorWinningTeamIndex.have_value)
              {
                result->setWinningTeamIndex(fieldGeneratorWinningTeamIndex.value);
                fieldGeneratorWinningTeamIndex.have_value = false;
              }
            if (fieldGeneratorWinningTeamRunDifference.have_value)
              {
                result->setWinningTeamRunDifference(fieldGeneratorWinningTeamRunDifference.value);
                fieldGeneratorWinningTeamRunDifference.have_value = false;
              }
            if (fieldGeneratorWinningTeamWicketDifference.have_value)
              {
                result->setWinningTeamWicketDifference(fieldGeneratorWinningTeamWicketDifference.value);
                fieldGeneratorWinningTeamWicketDifference.have_value = false;
              }
            if (fieldGeneratorDraw.have_value)
              {
                result->setDraw(fieldGeneratorDraw.value);
                fieldGeneratorDraw.have_value = false;
              }
            if (fieldGeneratorTie.have_value)
              {
                result->setTie(fieldGeneratorTie.value);
                fieldGeneratorTie.have_value = false;
              }
            SportsResultScoreJSON::Generator::finish(result);
          }
        virtual void handle_result(SportsResultScoreCricketJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "raw") == 0)
                        return &fieldGeneratorDraw;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "nnings") == 0)
                        return &fieldGeneratorInnings;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "atchFormat") == 0)
                        return &fieldGeneratorMatchFormat;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "portsGameKind") == 0)
                        return &fieldGeneratorSportsGameKind;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ie") == 0)
                        return &fieldGeneratorTie;
                    break;
                case 'W':
                    if (strncmp(&(field_name[1]), "inningTeam", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'I':
                                if (strcmp(&(field_name[12]), "ndex") == 0)
                                    return &fieldGeneratorWinningTeamIndex;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[12]), "unDifference") == 0)
                                    return &fieldGeneratorWinningTeamRunDifference;
                                break;
                            case 'W':
                                if (strcmp(&(field_name[12]), "icketDifference") == 0)
                                    return &fieldGeneratorWinningTeamWicketDifference;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return SportsResultScoreJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : SportsResultScoreJSON::Generator(ignore_extras), fieldGeneratorSportsGameKind("field \"SportsGameKind\" of the SportsResultScoreCricket class"), fieldGeneratorMatchFormat("field \"MatchFormat\" of the SportsResultScoreCricket class"), fieldGeneratorInnings("field \"Innings\" of the SportsResultScoreCricket class", ignore_extras), fieldGeneratorWinningTeamIndex("field \"WinningTeamIndex\" of the SportsResultScoreCricket class"), fieldGeneratorWinningTeamRunDifference("field \"WinningTeamRunDifference\" of the SportsResultScoreCricket class"), fieldGeneratorWinningTeamWicketDifference("field \"WinningTeamWicketDifference\" of the SportsResultScoreCricket class"), fieldGeneratorDraw("field \"Draw\" of the SportsResultScoreCricket class"), fieldGeneratorTie("field \"Tie\" of the SportsResultScoreCricket class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsResultScoreCricket class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSportsGameKind.reset();
            fieldGeneratorMatchFormat.reset();
            fieldGeneratorInnings.reset();
            fieldGeneratorWinningTeamIndex.reset();
            fieldGeneratorWinningTeamRunDifference.reset();
            fieldGeneratorWinningTeamWicketDifference.reset();
            fieldGeneratorDraw.reset();
            fieldGeneratorTie.reset();
            SportsResultScoreJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSRESULTSCORECRICKETJSON_H */
