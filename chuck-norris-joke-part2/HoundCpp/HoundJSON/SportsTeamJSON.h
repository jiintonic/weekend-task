/* file "SportsTeamJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTEAMJSON_H
#define SPORTSTEAMJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsLeagueJSON.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsTeamLogoJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsTeamJSON : public ReferenceCounted
  {
  public:
    enum TypeHAKnownValues
      {
        HA_Unknown,
        HA_Home,
        HA_Away,
        HA__none
      };
    struct TypeHA
      {
        bool in_known_list;
        std::string string_value;
        TypeHAKnownValues list_value;

        TypeHA(void);
        TypeHA(const TypeHA &other);
        TypeHA(TypeHAKnownValues other);
        bool  operator==(const TypeHA &other) const;
        bool  operator!=(const TypeHA &other) const;
        bool  operator<(const TypeHA &other) const;
        bool  operator>(const TypeHA &other) const;
        bool  operator>=(const TypeHA &other) const;
        bool  operator<=(const TypeHA &other) const;

      };

    static TypeHAKnownValues  stringToHA(const char *chars);
    static const char * stringFromHA(TypeHAKnownValues the_enum);

  private:
    bool flagHasTeamName;
    std::string storeTeamName;
    bool flagHasTeamNameShort;
    std::string storeTeamNameShort;
    bool flagHasAlias;
    std::string storeAlias;
    bool flagHasTeamLeague;
    SportsLeagueJSON * storeTeamLeague;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    bool flagHasScore;
    OInteger storeScore;
    bool flagHasHA;
    TypeHA storeHA;
    bool flagHasDivision;
    SportsLeagueDivisionJSON * storeDivision;
    bool flagHasToBeDetermined;
    bool storeToBeDetermined;
    bool flagHasLogos;
    std::vector< SportsTeamLogoJSON * > storeLogos;
    bool flagHasID;
    std::string storeID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsTeamJSON(const SportsTeamJSON &);
    SportsTeamJSON & operator=(const SportsTeamJSON &other);

    void  fromJSONTeamName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeamNameShort(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTeamLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONScore(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHA(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONToBeDetermined(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLogos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTeamJSON(void);
    virtual ~SportsTeamJSON(void);
    bool  hasTeamName(void) const;
    std::string  getTeamName(void);
    const std::string  getTeamName(void) const;
    bool  hasTeamNameShort(void) const;
    std::string  getTeamNameShort(void);
    const std::string  getTeamNameShort(void) const;
    bool  hasAlias(void) const;
    std::string  getAlias(void);
    const std::string  getAlias(void) const;
    bool  hasTeamLeague(void) const;
    SportsLeagueJSON *  getTeamLeague(void);
    const SportsLeagueJSON *  getTeamLeague(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
    bool  hasScore(void) const;
    OInteger  getScore(void);
    const OInteger  getScore(void) const;
    bool  hasHA(void) const;
    TypeHA  getHA(void);
    const TypeHA  getHA(void) const;
    const char * getHAAsChars(void) const;
    std::string  getHAAsString(void) const;
    bool  hasDivision(void) const;
    SportsLeagueDivisionJSON *  getDivision(void);
    const SportsLeagueDivisionJSON *  getDivision(void) const;
    SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void);
    const SportsLeagueDivisionJSON::TypeValue  getDivisionValue(void) const;
    const char * getDivisionAsChars(void) const;
    std::string  getDivisionAsString(void) const;
    bool  hasToBeDetermined(void) const;
    bool  getToBeDetermined(void);
    const bool  getToBeDetermined(void) const;
    bool  hasLogos(void) const;
    size_t  countOfLogos(void) const;
    SportsTeamLogoJSON *  elementOfLogos(size_t element_num);
    const SportsTeamLogoJSON *  elementOfLogos(size_t element_num) const;
    std::vector< SportsTeamLogoJSON * >  getLogos(void);
    const std::vector< SportsTeamLogoJSON * >  getLogos(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;

    virtual size_t extraSportsTeamComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsTeamComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsTeamComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsTeamComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsTeamLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsTeamLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTeamName(std::string new_value)
      {
        flagHasTeamName = true;
        storeTeamName = new_value;
      }
    void unsetTeamName(void)
      {
        flagHasTeamName = false;
      }
    void setTeamNameShort(std::string new_value)
      {
        flagHasTeamNameShort = true;
        storeTeamNameShort = new_value;
      }
    void unsetTeamNameShort(void)
      {
        flagHasTeamNameShort = false;
      }
    void setAlias(std::string new_value)
      {
        flagHasAlias = true;
        storeAlias = new_value;
      }
    void unsetAlias(void)
      {
        flagHasAlias = false;
      }
    void setTeamLeague(SportsLeagueJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTeamLeague)
          {
            storeTeamLeague->remove_reference();
          }
        flagHasTeamLeague = true;
        storeTeamLeague = new_value;
      }
    void unsetTeamLeague(void)
      {
        if (flagHasTeamLeague)
          {
            storeTeamLeague->remove_reference();
          }
        flagHasTeamLeague = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of SportsTeamJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of SportsTeamJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of SportsTeamJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of SportsTeamJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of SportsTeamJSON is greater than the upper bound (90) for that field.");
        textStoreLatitude = new_value;
      }
    void unsetLatitude(void)
      {
        flagHasLatitude = false;
      }
    void setLongitude(double new_value)
      {
        flagHasLongitude = true;
        if (new_value < -180)
            throw("The value for field Longitude of SportsTeamJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of SportsTeamJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of SportsTeamJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of SportsTeamJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of SportsTeamJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }
    void setScore(OInteger new_value)
      {
        flagHasScore = true;
        if (new_value < 0)
            throw("The value for field Score of SportsTeamJSON is less than the lower bound (0) for that field.");
        storeScore = new_value;
      }
    void unsetScore(void)
      {
        flagHasScore = false;
      }
    void setHA(TypeHA new_value)
      {
        flagHasHA = true;
        storeHA = new_value;
      }
    void setHA(const char *chars)
      {
        TypeHAKnownValues known = stringToHA(chars);
        TypeHA new_value;
        if (known == HA__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setHA(new_value);
      }
    void setHA(std::string the_string)
      {
        setHA(the_string.c_str());
      }
    void setHA(TypeHAKnownValues new_value)
      {
        TypeHA new_full_value;
        assert(new_value != HA__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setHA(new_full_value);
      }
    void unsetHA(void)
      {
        flagHasHA = false;
      }
    void setDivision(SportsLeagueDivisionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDivision)
          {
            storeDivision->remove_reference();
          }
        flagHasDivision = true;
        storeDivision = new_value;
      }
    void setDivision(SportsLeagueDivisionJSON::TypeValue new_value)
      {
        setDivision(new SportsLeagueDivisionJSON(new_value));
      }
    void setDivision(const char *chars)
      {
        SportsLeagueDivisionJSON::TypeValueKnownValues known = SportsLeagueDivisionJSON::stringToValue(chars);
        SportsLeagueDivisionJSON::TypeValue new_value;
        if (known == SportsLeagueDivisionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDivision(new_value);
      }
    void setDivision(std::string the_string)
      {
        setDivision(the_string.c_str());
      }
    void unsetDivision(void)
      {
        if (flagHasDivision)
          {
            storeDivision->remove_reference();
          }
        flagHasDivision = false;
      }
    void setToBeDetermined(bool new_value)
      {
        flagHasToBeDetermined = true;
        storeToBeDetermined = new_value;
      }
    void unsetToBeDetermined(void)
      {
        flagHasToBeDetermined = false;
      }
    void initLogos(void)
      {
        if (flagHasLogos)
          {
            for (size_t num2 = 0; num2 < storeLogos.size(); ++num2)
              {
                storeLogos[num2]->remove_reference();
              }
          }
        flagHasLogos = true;
        storeLogos.clear();
      }
    void appendLogos(SportsTeamLogoJSON * to_append)
      {
        if (!flagHasLogos)
          {
            flagHasLogos = true;
            storeLogos.clear();
          }
        assert(flagHasLogos);
        to_append->add_reference();
        storeLogos.push_back(to_append);
      }
    void unsetLogos(void)
      {
        if (flagHasLogos)
          {
            for (size_t num3 = 0; num3 < storeLogos.size(); ++num3)
              {
                storeLogos[num3]->remove_reference();
              }
          }
        flagHasLogos = false;
        storeLogos.clear();
      }
    void setID(std::string new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }

    virtual void extraSportsTeamAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsTeamSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsTeamLookup(key);
        if (old_field == NULL)
          {
            extraSportsTeamAppendPair(key, new_component);
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
        assert(flagHasTeamName);
        handler->start_pair("TeamName");
        handler->string_value(storeTeamName);
        if (flagHasTeamNameShort)
          {
            handler->start_pair("TeamNameShort");
            handler->string_value(storeTeamNameShort);
          }
        assert(flagHasAlias);
        handler->start_pair("Alias");
        handler->string_value(storeAlias);
        assert(flagHasTeamLeague);
        handler->start_pair("TeamLeague");
        storeTeamLeague->write_as_json(handler);
        if (flagHasLatitude)
          {
            handler->start_pair("Latitude");
            if (textStoreLatitude != "")
                handler->number_value(textStoreLatitude.c_str());
            else if (((double)(long int)storeLatitude) == storeLatitude)
                handler->number_value((long int)storeLatitude);
            else
                handler->number_value(storeLatitude);
          }
        if (flagHasLongitude)
          {
            handler->start_pair("Longitude");
            if (textStoreLongitude != "")
                handler->number_value(textStoreLongitude.c_str());
            else if (((double)(long int)storeLongitude) == storeLongitude)
                handler->number_value((long int)storeLongitude);
            else
                handler->number_value(storeLongitude);
          }
        if (flagHasScore)
          {
            handler->start_pair("Score");
            handler->number_value(storeScore.get_o_integer());
          }
        if (flagHasHA)
          {
            handler->start_pair("HA");
            if (storeHA.in_known_list)
              {
                switch (storeHA.list_value)
                  {
                    case HA_Unknown:
                        handler->string_value("Unknown");
                        break;
                    case HA_Home:
                        handler->string_value("Home");
                        break;
                    case HA_Away:
                        handler->string_value("Away");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeHA.string_value);
              }
          }
        if (flagHasDivision)
          {
            handler->start_pair("Division");
            storeDivision->write_as_json(handler);
          }
        if (flagHasToBeDetermined)
          {
            handler->start_pair("ToBeDetermined");
            handler->boolean_value(storeToBeDetermined);
          }
        if (flagHasLogos)
          {
            handler->start_pair("Logos");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLogos.size(); ++num1)
              {
                storeLogos[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasID)
          {
            handler->start_pair("ID");
            handler->string_value(storeID);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTeamName()))
          {
            return "When parsing the object for %what%, the \"TeamName\" field was missing.";
          }
        if (!(hasAlias()))
          {
            return "When parsing the object for %what%, the \"Alias\" field was missing.";
          }
        if (!(hasTeamLeague()))
          {
            return "When parsing the object for %what%, the \"TeamLeague\" field was missing.";
          }
        return NULL;
      }

    static SportsTeamJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTeamJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTeamJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool> generator("Type SportsTeam", ignore_extras);
            parse_json_value(text, "Text for SportsTeamJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTeamJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTeamJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamJSON>, SportsTeamJSON *, bool> generator("Type SportsTeam", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamNameShort;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlias;
        JSONHoldingGenerator<SportsLeagueJSON::Generator, RCHandle<SportsLeagueJSON>, SportsLeagueJSON *, bool > fieldGeneratorTeamLeague;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
        static char lowerBoundScore[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundScore>, OInteger, o_integer > fieldGeneratorScore;
    class FieldGeneratorHA : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHA(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHA(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeHAKnownValues known = stringToHA(result);
                TypeHA new_value;
                if (known == HA__none)
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
            virtual void handle_result(TypeHA result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHA, TypeHA, TypeHA > fieldGeneratorHA;
        JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivision;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorToBeDetermined;
        JSONHoldingArrayGenerator<SportsTeamLogoJSON::Generator, RCHandle<SportsTeamLogoJSON>, SportsTeamLogoJSON *, bool > fieldGeneratorLogos;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
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
            SportsTeamJSON *result = new SportsTeamJSON();
            assert(result != NULL);
            RCHandle<SportsTeamJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsTeamAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsTeamJSON *result)
          {
            if (fieldGeneratorTeamName.have_value)
              {
                result->setTeamName(fieldGeneratorTeamName.value);
                fieldGeneratorTeamName.have_value = false;
              }
            else if (!(result->hasTeamName()))
              {
                error("When parsing the object for %what%, the \"TeamName\" field was missing.");
              }
            if (fieldGeneratorTeamNameShort.have_value)
              {
                result->setTeamNameShort(fieldGeneratorTeamNameShort.value);
                fieldGeneratorTeamNameShort.have_value = false;
              }
            if (fieldGeneratorAlias.have_value)
              {
                result->setAlias(fieldGeneratorAlias.value);
                fieldGeneratorAlias.have_value = false;
              }
            else if (!(result->hasAlias()))
              {
                error("When parsing the object for %what%, the \"Alias\" field was missing.");
              }
            if (fieldGeneratorTeamLeague.have_value)
              {
                result->setTeamLeague(fieldGeneratorTeamLeague.value.referenced());
                fieldGeneratorTeamLeague.have_value = false;
              }
            else if (!(result->hasTeamLeague()))
              {
                error("When parsing the object for %what%, the \"TeamLeague\" field was missing.");
              }
            if (fieldGeneratorLatitude.have_value)
              {
                result->setLatitudeText(fieldGeneratorLatitude.value);
                fieldGeneratorLatitude.have_value = false;
              }
            if (fieldGeneratorLongitude.have_value)
              {
                result->setLongitudeText(fieldGeneratorLongitude.value);
                fieldGeneratorLongitude.have_value = false;
              }
            if (fieldGeneratorScore.have_value)
              {
                result->setScore(fieldGeneratorScore.value);
                fieldGeneratorScore.have_value = false;
              }
            if (fieldGeneratorHA.have_value)
              {
                result->setHA(fieldGeneratorHA.value);
                fieldGeneratorHA.have_value = false;
              }
            if (fieldGeneratorDivision.have_value)
              {
                result->setDivision(fieldGeneratorDivision.value.referenced());
                fieldGeneratorDivision.have_value = false;
              }
            if (fieldGeneratorToBeDetermined.have_value)
              {
                result->setToBeDetermined(fieldGeneratorToBeDetermined.value);
                fieldGeneratorToBeDetermined.have_value = false;
              }
            if (fieldGeneratorLogos.have_value)
              {
                result->initLogos();
                size_t count = fieldGeneratorLogos.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLogos(fieldGeneratorLogos.value[num].referenced());
                  }
                fieldGeneratorLogos.value.clear();
                fieldGeneratorLogos.have_value = false;
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
          }
        virtual void handle_result(SportsTeamJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "lias") == 0)
                        return &fieldGeneratorAlias;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ivision") == 0)
                        return &fieldGeneratorDivision;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "A") == 0)
                        return &fieldGeneratorHA;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "D") == 0)
                        return &fieldGeneratorID;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "titude") == 0)
                                return &fieldGeneratorLatitude;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'g':
                                    if (strcmp(&(field_name[3]), "os") == 0)
                                        return &fieldGeneratorLogos;
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[3]), "gitude") == 0)
                                        return &fieldGeneratorLongitude;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "core") == 0)
                        return &fieldGeneratorScore;
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strncmp(&(field_name[2]), "am", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'L':
                                        if (strcmp(&(field_name[5]), "eague") == 0)
                                            return &fieldGeneratorTeamLeague;
                                        break;
                                    case 'N':
                                        if (strncmp(&(field_name[5]), "ame", 3) == 0)
                                          {
                                            switch ((unsigned char)(field_name[8]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorTeamName;
                                                case 'S':
                                                    if (strcmp(&(field_name[9]), "hort") == 0)
                                                        return &fieldGeneratorTeamNameShort;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "BeDetermined") == 0)
                                return &fieldGeneratorToBeDetermined;
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
        Generator(bool ignore_extras = false) : fieldGeneratorTeamName("field \"TeamName\" of the SportsTeam class"), fieldGeneratorTeamNameShort("field \"TeamNameShort\" of the SportsTeam class"), fieldGeneratorAlias("field \"Alias\" of the SportsTeam class"), fieldGeneratorTeamLeague("field \"TeamLeague\" of the SportsTeam class", ignore_extras), fieldGeneratorLatitude("field \"Latitude\" of the SportsTeam class"), fieldGeneratorLongitude("field \"Longitude\" of the SportsTeam class"), fieldGeneratorScore("field \"Score\" of the SportsTeam class"), fieldGeneratorHA("field \"HA\" of the SportsTeam class"), fieldGeneratorDivision("field \"Division\" of the SportsTeam class", ignore_extras), fieldGeneratorToBeDetermined("field \"ToBeDetermined\" of the SportsTeam class"), fieldGeneratorLogos("field \"Logos\" of the SportsTeam class", ignore_extras), fieldGeneratorID("field \"ID\" of the SportsTeam class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsTeam class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTeamName.reset();
            fieldGeneratorTeamNameShort.reset();
            fieldGeneratorAlias.reset();
            fieldGeneratorTeamLeague.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorScore.reset();
            fieldGeneratorHA.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorToBeDetermined.reset();
            fieldGeneratorLogos.reset();
            fieldGeneratorID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSTEAMJSON_H */
