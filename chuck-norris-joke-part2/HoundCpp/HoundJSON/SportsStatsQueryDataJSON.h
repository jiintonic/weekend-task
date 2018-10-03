/* file "SportsStatsQueryDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSQUERYDATAJSON_H
#define SPORTSSTATSQUERYDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "SportsTeamOrPlayerJSON.h"
#include "SportsStatsTypeAndValueJSON.h"
#include "SportsSeasonResolvedJSON.h"
#include "SportsGameJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsQueryDataJSON : public ReferenceCounted
  {
  public:
    enum TypeCardinalityKnownValues
      {
        Cardinality_Single,
        Cardinality_Multiple,
        Cardinality__none
      };
    struct TypeCardinality
      {
        bool in_known_list;
        std::string string_value;
        TypeCardinalityKnownValues list_value;

        TypeCardinality(void);
        TypeCardinality(const TypeCardinality &other);
        TypeCardinality(TypeCardinalityKnownValues other);
        bool  operator==(const TypeCardinality &other) const;
        bool  operator!=(const TypeCardinality &other) const;
        bool  operator<(const TypeCardinality &other) const;
        bool  operator>(const TypeCardinality &other) const;
        bool  operator>=(const TypeCardinality &other) const;
        bool  operator<=(const TypeCardinality &other) const;

      };

    static TypeCardinalityKnownValues  stringToCardinality(const char *chars);
    static const char * stringFromCardinality(TypeCardinalityKnownValues the_enum);
    enum TypeErrorKnownValues
      {
        Error_DataUnavailable,
        Error__none
      };
    struct TypeError
      {
        bool in_known_list;
        std::string string_value;
        TypeErrorKnownValues list_value;

        TypeError(void);
        TypeError(const TypeError &other);
        TypeError(TypeErrorKnownValues other);
        bool  operator==(const TypeError &other) const;
        bool  operator!=(const TypeError &other) const;
        bool  operator<(const TypeError &other) const;
        bool  operator>(const TypeError &other) const;
        bool  operator>=(const TypeError &other) const;
        bool  operator<=(const TypeError &other) const;

      };

    static TypeErrorKnownValues  stringToError(const char *chars);
    static const char * stringFromError(TypeErrorKnownValues the_enum);

  private:
    bool flagHasTeamOrPlayer;
    SportsTeamOrPlayerJSON * storeTeamOrPlayer;
    bool flagHasStatisticsTypeAndValue;
    std::vector< SportsStatsTypeAndValueJSON * > storeStatisticsTypeAndValue;
    bool flagHasSeason;
    SportsSeasonResolvedJSON * storeSeason;
    bool flagHasGame;
    SportsGameJSON * storeGame;
    bool flagHasCardinality;
    TypeCardinality storeCardinality;
    bool flagHasError;
    TypeError storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStatsQueryDataJSON(const SportsStatsQueryDataJSON &);
    SportsStatsQueryDataJSON & operator=(const SportsStatsQueryDataJSON &other);

    void  fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatisticsTypeAndValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGame(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCardinality(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsQueryDataJSON(void);
    virtual ~SportsStatsQueryDataJSON(void);
    bool  hasTeamOrPlayer(void) const;
    SportsTeamOrPlayerJSON *  getTeamOrPlayer(void);
    const SportsTeamOrPlayerJSON *  getTeamOrPlayer(void) const;
    SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void);
    const SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void) const;
    bool  hasStatisticsTypeAndValue(void) const;
    size_t  countOfStatisticsTypeAndValue(void) const;
    SportsStatsTypeAndValueJSON *  elementOfStatisticsTypeAndValue(size_t element_num);
    const SportsStatsTypeAndValueJSON *  elementOfStatisticsTypeAndValue(size_t element_num) const;
    std::vector< SportsStatsTypeAndValueJSON * >  getStatisticsTypeAndValue(void);
    const std::vector< SportsStatsTypeAndValueJSON * >  getStatisticsTypeAndValue(void) const;
    bool  hasSeason(void) const;
    SportsSeasonResolvedJSON *  getSeason(void);
    const SportsSeasonResolvedJSON *  getSeason(void) const;
    bool  hasGame(void) const;
    SportsGameJSON *  getGame(void);
    const SportsGameJSON *  getGame(void) const;
    bool  hasCardinality(void) const;
    TypeCardinality  getCardinality(void);
    const TypeCardinality  getCardinality(void) const;
    const char * getCardinalityAsChars(void) const;
    std::string  getCardinalityAsString(void) const;
    bool  hasError(void) const;
    TypeError  getError(void);
    const TypeError  getError(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsStatsQueryDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStatsQueryDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStatsQueryDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStatsQueryDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStatsQueryDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStatsQueryDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTeamOrPlayer(SportsTeamOrPlayerJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeamOrPlayer)
          {
            storeTeamOrPlayer->remove_reference();
          }
        flagHasTeamOrPlayer = true;
        storeTeamOrPlayer = new_value;
      }
    void setTeamOrPlayer(SportsTeamOrPlayerJSON::TypeValue new_value)
      {
        setTeamOrPlayer(new SportsTeamOrPlayerJSON(new_value));
      }
    void unsetTeamOrPlayer(void)
      {
        if (flagHasTeamOrPlayer)
          {
            storeTeamOrPlayer->remove_reference();
          }
        flagHasTeamOrPlayer = false;
      }
    void initStatisticsTypeAndValue(void)
      {
        if (flagHasStatisticsTypeAndValue)
          {
            for (size_t num2 = 0; num2 < storeStatisticsTypeAndValue.size(); ++num2)
              {
                storeStatisticsTypeAndValue[num2]->remove_reference();
              }
          }
        flagHasStatisticsTypeAndValue = true;
        storeStatisticsTypeAndValue.clear();
      }
    void appendStatisticsTypeAndValue(SportsStatsTypeAndValueJSON * to_append)
      {
        if (!flagHasStatisticsTypeAndValue)
          {
            flagHasStatisticsTypeAndValue = true;
            storeStatisticsTypeAndValue.clear();
          }
        assert(flagHasStatisticsTypeAndValue);
        to_append->add_reference();
        storeStatisticsTypeAndValue.push_back(to_append);
      }
    void unsetStatisticsTypeAndValue(void)
      {
        if (flagHasStatisticsTypeAndValue)
          {
            for (size_t num3 = 0; num3 < storeStatisticsTypeAndValue.size(); ++num3)
              {
                storeStatisticsTypeAndValue[num3]->remove_reference();
              }
          }
        flagHasStatisticsTypeAndValue = false;
        storeStatisticsTypeAndValue.clear();
      }
    void setSeason(SportsSeasonResolvedJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = true;
        storeSeason = new_value;
      }
    void unsetSeason(void)
      {
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = false;
      }
    void setGame(SportsGameJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGame)
          {
            storeGame->remove_reference();
          }
        flagHasGame = true;
        storeGame = new_value;
      }
    void unsetGame(void)
      {
        if (flagHasGame)
          {
            storeGame->remove_reference();
          }
        flagHasGame = false;
      }
    void setCardinality(TypeCardinality new_value)
      {
        flagHasCardinality = true;
        storeCardinality = new_value;
      }
    void setCardinality(const char *chars)
      {
        TypeCardinalityKnownValues known = stringToCardinality(chars);
        TypeCardinality new_value;
        if (known == Cardinality__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setCardinality(new_value);
      }
    void setCardinality(std::string the_string)
      {
        setCardinality(the_string.c_str());
      }
    void setCardinality(TypeCardinalityKnownValues new_value)
      {
        TypeCardinality new_full_value;
        assert(new_value != Cardinality__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setCardinality(new_full_value);
      }
    void unsetCardinality(void)
      {
        flagHasCardinality = false;
      }
    void setError(TypeError new_value)
      {
        flagHasError = true;
        storeError = new_value;
      }
    void setError(const char *chars)
      {
        TypeErrorKnownValues known = stringToError(chars);
        TypeError new_value;
        if (known == Error__none)
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
    void setError(TypeErrorKnownValues new_value)
      {
        TypeError new_full_value;
        assert(new_value != Error__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setError(new_full_value);
      }
    void unsetError(void)
      {
        flagHasError = false;
      }

    virtual void extraSportsStatsQueryDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStatsQueryDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStatsQueryDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsStatsQueryDataAppendPair(key, new_component);
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
        assert(flagHasTeamOrPlayer);
        handler->start_pair("TeamOrPlayer");
        storeTeamOrPlayer->write_as_json(handler);
        assert(flagHasStatisticsTypeAndValue);
        handler->start_pair("StatisticsTypeAndValue");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeStatisticsTypeAndValue.size(); ++num1)
          {
            storeStatisticsTypeAndValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasSeason)
          {
            handler->start_pair("Season");
            storeSeason->write_as_json(handler);
          }
        if (flagHasGame)
          {
            handler->start_pair("Game");
            storeGame->write_as_json(handler);
          }
        if (flagHasCardinality)
          {
            handler->start_pair("Cardinality");
            if (storeCardinality.in_known_list)
              {
                switch (storeCardinality.list_value)
                  {
                    case Cardinality_Single:
                        handler->string_value("Single");
                        break;
                    case Cardinality_Multiple:
                        handler->string_value("Multiple");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeCardinality.string_value);
              }
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            if (storeError.in_known_list)
              {
                switch (storeError.list_value)
                  {
                    case Error_DataUnavailable:
                        handler->string_value("DataUnavailable");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeError.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTeamOrPlayer()))
          {
            return "When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.";
          }
        if (!(hasStatisticsTypeAndValue()))
          {
            return "When parsing the object for %what%, the \"StatisticsTypeAndValue\" field was missing.";
          }
        return NULL;
      }

    static SportsStatsQueryDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsQueryDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryDataJSON>, SportsStatsQueryDataJSON *, bool> generator("Type SportsStatsQueryData", ignore_extras);
            parse_json_value(text, "Text for SportsStatsQueryDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsQueryDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsQueryDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryDataJSON>, SportsStatsQueryDataJSON *, bool> generator("Type SportsStatsQueryData", ignore_extras);
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
        JSONHoldingGenerator<SportsTeamOrPlayerJSON::Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool > fieldGeneratorTeamOrPlayer;
        JSONHoldingArrayGenerator<SportsStatsTypeAndValueJSON::Generator, RCHandle<SportsStatsTypeAndValueJSON>, SportsStatsTypeAndValueJSON *, bool > fieldGeneratorStatisticsTypeAndValue;
        JSONHoldingGenerator<SportsSeasonResolvedJSON::Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool > fieldGeneratorSeason;
        JSONHoldingGenerator<SportsGameJSON::Generator, RCHandle<SportsGameJSON>, SportsGameJSON *, bool > fieldGeneratorGame;
    class FieldGeneratorCardinality : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCardinality(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCardinality(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeCardinalityKnownValues known = stringToCardinality(result);
                TypeCardinality new_value;
                if (known == Cardinality__none)
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
            virtual void handle_result(TypeCardinality result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCardinality, TypeCardinality, TypeCardinality > fieldGeneratorCardinality;
    class FieldGeneratorError : public JSONStringGenerator
          {
          protected:
            FieldGeneratorError(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorError(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeErrorKnownValues known = stringToError(result);
                TypeError new_value;
                if (known == Error__none)
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
            virtual void handle_result(TypeError result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorError, TypeError, TypeError > fieldGeneratorError;
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
            SportsStatsQueryDataJSON *result = new SportsStatsQueryDataJSON();
            assert(result != NULL);
            RCHandle<SportsStatsQueryDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStatsQueryDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStatsQueryDataJSON *result)
          {
            if (fieldGeneratorTeamOrPlayer.have_value)
              {
                result->setTeamOrPlayer(fieldGeneratorTeamOrPlayer.value.referenced());
                fieldGeneratorTeamOrPlayer.have_value = false;
              }
            else if (!(result->hasTeamOrPlayer()))
              {
                error("When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.");
              }
            if (fieldGeneratorStatisticsTypeAndValue.have_value)
              {
                result->initStatisticsTypeAndValue();
                size_t count = fieldGeneratorStatisticsTypeAndValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStatisticsTypeAndValue(fieldGeneratorStatisticsTypeAndValue.value[num].referenced());
                  }
                fieldGeneratorStatisticsTypeAndValue.value.clear();
                fieldGeneratorStatisticsTypeAndValue.have_value = false;
              }
            else if (!(result->hasStatisticsTypeAndValue()))
              {
                error("When parsing the object for %what%, the \"StatisticsTypeAndValue\" field was missing.");
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            if (fieldGeneratorGame.have_value)
              {
                result->setGame(fieldGeneratorGame.value.referenced());
                fieldGeneratorGame.have_value = false;
              }
            if (fieldGeneratorCardinality.have_value)
              {
                result->setCardinality(fieldGeneratorCardinality.value);
                fieldGeneratorCardinality.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value);
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsStatsQueryDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ardinality") == 0)
                        return &fieldGeneratorCardinality;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorGame;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ason") == 0)
                                return &fieldGeneratorSeason;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "atisticsTypeAndValue") == 0)
                                return &fieldGeneratorStatisticsTypeAndValue;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "eamOrPlayer") == 0)
                        return &fieldGeneratorTeamOrPlayer;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTeamOrPlayer("field \"TeamOrPlayer\" of the SportsStatsQueryData class", ignore_extras), fieldGeneratorStatisticsTypeAndValue("field \"StatisticsTypeAndValue\" of the SportsStatsQueryData class", ignore_extras), fieldGeneratorSeason("field \"Season\" of the SportsStatsQueryData class", ignore_extras), fieldGeneratorGame("field \"Game\" of the SportsStatsQueryData class", ignore_extras), fieldGeneratorCardinality("field \"Cardinality\" of the SportsStatsQueryData class"), fieldGeneratorError("field \"Error\" of the SportsStatsQueryData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStatsQueryData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeamOrPlayer.reset();
            fieldGeneratorStatisticsTypeAndValue.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorGame.reset();
            fieldGeneratorCardinality.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTATSQUERYDATAJSON_H */
