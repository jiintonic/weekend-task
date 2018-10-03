/* file "SportsTeamNewJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSTEAMNEWJSON_H
#define SPORTSTEAMNEWJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "SportsLeagueCodeJSON.h"
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


class SportsTeamNewJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasNameShort;
    std::string storeNameShort;
    bool flagHasAlias;
    std::string storeAlias;
    bool flagHasLeague;
    SportsLeagueCodeJSON * storeLeague;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
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

    SportsTeamNewJSON(const SportsTeamNewJSON &);
    SportsTeamNewJSON & operator=(const SportsTeamNewJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNameShort(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONToBeDetermined(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLogos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsTeamNewJSON(void);
    virtual ~SportsTeamNewJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasNameShort(void) const;
    std::string  getNameShort(void);
    const std::string  getNameShort(void) const;
    bool  hasAlias(void) const;
    std::string  getAlias(void);
    const std::string  getAlias(void) const;
    bool  hasLeague(void) const;
    SportsLeagueCodeJSON *  getLeague(void);
    const SportsLeagueCodeJSON *  getLeague(void) const;
    SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
    const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
    const char * getLeagueAsChars(void) const;
    std::string  getLeagueAsString(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
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

    virtual size_t extraSportsTeamNewComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsTeamNewComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsTeamNewComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsTeamNewComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsTeamNewLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsTeamNewLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setNameShort(std::string new_value)
      {
        flagHasNameShort = true;
        storeNameShort = new_value;
      }
    void unsetNameShort(void)
      {
        flagHasNameShort = false;
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
    void setLeague(SportsLeagueCodeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLeague)
          {
            storeLeague->remove_reference();
          }
        flagHasLeague = true;
        storeLeague = new_value;
      }
    void setLeague(SportsLeagueCodeJSON::TypeValue new_value)
      {
        setLeague(new SportsLeagueCodeJSON(new_value));
      }
    void setLeague(const char *chars)
      {
        SportsLeagueCodeJSON::TypeValueKnownValues known = SportsLeagueCodeJSON::stringToValue(chars);
        SportsLeagueCodeJSON::TypeValue new_value;
        if (known == SportsLeagueCodeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setLeague(new_value);
      }
    void setLeague(std::string the_string)
      {
        setLeague(the_string.c_str());
      }
    void unsetLeague(void)
      {
        if (flagHasLeague)
          {
            storeLeague->remove_reference();
          }
        flagHasLeague = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of SportsTeamNewJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of SportsTeamNewJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of SportsTeamNewJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of SportsTeamNewJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of SportsTeamNewJSON is greater than the upper bound (90) for that field.");
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
            throw("The value for field Longitude of SportsTeamNewJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of SportsTeamNewJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of SportsTeamNewJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of SportsTeamNewJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of SportsTeamNewJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
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

    virtual void extraSportsTeamNewAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsTeamNewSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsTeamNewLookup(key);
        if (old_field == NULL)
          {
            extraSportsTeamNewAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasNameShort)
          {
            handler->start_pair("NameShort");
            handler->string_value(storeNameShort);
          }
        if (flagHasAlias)
          {
            handler->start_pair("Alias");
            handler->string_value(storeAlias);
          }
        assert(flagHasLeague);
        handler->start_pair("League");
        storeLeague->write_as_json(handler);
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
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasLeague()))
          {
            return "When parsing the object for %what%, the \"League\" field was missing.";
          }
        return NULL;
      }

    static SportsTeamNewJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsTeamNewJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsTeamNewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool> generator("Type SportsTeamNew", ignore_extras);
            parse_json_value(text, "Text for SportsTeamNewJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsTeamNewJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsTeamNewJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsTeamNewJSON>, SportsTeamNewJSON *, bool> generator("Type SportsTeamNew", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNameShort;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlias;
        JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
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
            SportsTeamNewJSON *result = new SportsTeamNewJSON();
            assert(result != NULL);
            RCHandle<SportsTeamNewJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsTeamNewAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsTeamNewJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorNameShort.have_value)
              {
                result->setNameShort(fieldGeneratorNameShort.value);
                fieldGeneratorNameShort.have_value = false;
              }
            if (fieldGeneratorAlias.have_value)
              {
                result->setAlias(fieldGeneratorAlias.value);
                fieldGeneratorAlias.have_value = false;
              }
            if (fieldGeneratorLeague.have_value)
              {
                result->setLeague(fieldGeneratorLeague.value.referenced());
                fieldGeneratorLeague.have_value = false;
              }
            else if (!(result->hasLeague()))
              {
                error("When parsing the object for %what%, the \"League\" field was missing.");
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
        virtual void handle_result(SportsTeamNewJSON *new_result) = 0;
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
                        case 'e':
                            if (strcmp(&(field_name[2]), "ague") == 0)
                                return &fieldGeneratorLeague;
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
                case 'N':
                    if (strncmp(&(field_name[1]), "ame", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorName;
                            case 'S':
                                if (strcmp(&(field_name[5]), "hort") == 0)
                                    return &fieldGeneratorNameShort;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "oBeDetermined") == 0)
                        return &fieldGeneratorToBeDetermined;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the SportsTeamNew class"), fieldGeneratorNameShort("field \"NameShort\" of the SportsTeamNew class"), fieldGeneratorAlias("field \"Alias\" of the SportsTeamNew class"), fieldGeneratorLeague("field \"League\" of the SportsTeamNew class", ignore_extras), fieldGeneratorLatitude("field \"Latitude\" of the SportsTeamNew class"), fieldGeneratorLongitude("field \"Longitude\" of the SportsTeamNew class"), fieldGeneratorDivision("field \"Division\" of the SportsTeamNew class", ignore_extras), fieldGeneratorToBeDetermined("field \"ToBeDetermined\" of the SportsTeamNew class"), fieldGeneratorLogos("field \"Logos\" of the SportsTeamNew class", ignore_extras), fieldGeneratorID("field \"ID\" of the SportsTeamNew class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsTeamNew class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorNameShort.reset();
            fieldGeneratorAlias.reset();
            fieldGeneratorLeague.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorDivision.reset();
            fieldGeneratorToBeDetermined.reset();
            fieldGeneratorLogos.reset();
            fieldGeneratorID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSTEAMNEWJSON_H */
