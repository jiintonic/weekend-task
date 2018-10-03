/* file "SportsOlympicsGamesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSGAMESJSON_H
#define SPORTSOLYMPICSGAMESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <string>
#include "OInteger.h"
#include "SportsOlympicsGamesCodeJSON.h"
#include "SportsOlympicsSeasonJSON.h"
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsGamesJSON : public ReferenceCounted
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_Completed,
        Status_Ongoing,
        Status_Upcoming,
        Status__none
      };
    struct TypeStatus
      {
        bool in_known_list;
        std::string string_value;
        TypeStatusKnownValues list_value;

        TypeStatus(void);
        TypeStatus(const TypeStatus &other);
        TypeStatus(TypeStatusKnownValues other);
        bool  operator==(const TypeStatus &other) const;
        bool  operator!=(const TypeStatus &other) const;
        bool  operator<(const TypeStatus &other) const;
        bool  operator>(const TypeStatus &other) const;
        bool  operator>=(const TypeStatus &other) const;
        bool  operator<=(const TypeStatus &other) const;

      };

    static TypeStatusKnownValues  stringToStatus(const char *chars);
    static const char * stringFromStatus(TypeStatusKnownValues the_enum);

  private:
    bool flagHasCode;
    SportsOlympicsGamesCodeJSON * storeCode;
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasHostCity;
    std::string storeHostCity;
    bool flagHasHostCountry;
    std::string storeHostCountry;
    bool flagHasSeason;
    SportsOlympicsSeasonJSON * storeSeason;
    bool flagHasOpeningCeremonyDate;
    DateAndOrTimeJSON * storeOpeningCeremonyDate;
    bool flagHasClosingCeremonyDate;
    DateAndOrTimeJSON * storeClosingCeremonyDate;
    bool flagHasStatus;
    TypeStatus storeStatus;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsGamesJSON(const SportsOlympicsGamesJSON &);
    SportsOlympicsGamesJSON & operator=(const SportsOlympicsGamesJSON &other);

    void  fromJSONCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHostCity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHostCountry(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpeningCeremonyDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClosingCeremonyDate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsGamesJSON(void);
    virtual ~SportsOlympicsGamesJSON(void);
    bool  hasCode(void) const;
    SportsOlympicsGamesCodeJSON *  getCode(void);
    const SportsOlympicsGamesCodeJSON *  getCode(void) const;
    SportsOlympicsGamesCodeJSON::TypeValue  getCodeValue(void);
    const SportsOlympicsGamesCodeJSON::TypeValue  getCodeValue(void) const;
    const char * getCodeAsChars(void) const;
    std::string  getCodeAsString(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;
    bool  hasHostCity(void) const;
    std::string  getHostCity(void);
    const std::string  getHostCity(void) const;
    bool  hasHostCountry(void) const;
    std::string  getHostCountry(void);
    const std::string  getHostCountry(void) const;
    bool  hasSeason(void) const;
    SportsOlympicsSeasonJSON *  getSeason(void);
    const SportsOlympicsSeasonJSON *  getSeason(void) const;
    SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void);
    const SportsOlympicsSeasonJSON::TypeValue  getSeasonValue(void) const;
    const char * getSeasonAsChars(void) const;
    std::string  getSeasonAsString(void) const;
    bool  hasOpeningCeremonyDate(void) const;
    DateAndOrTimeJSON *  getOpeningCeremonyDate(void);
    const DateAndOrTimeJSON *  getOpeningCeremonyDate(void) const;
    bool  hasClosingCeremonyDate(void) const;
    DateAndOrTimeJSON *  getClosingCeremonyDate(void);
    const DateAndOrTimeJSON *  getClosingCeremonyDate(void) const;
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;

    virtual size_t extraSportsOlympicsGamesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsGamesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsGamesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsGamesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsGamesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsGamesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCode(SportsOlympicsGamesCodeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCode)
          {
            storeCode->remove_reference();
          }
        flagHasCode = true;
        storeCode = new_value;
      }
    void setCode(SportsOlympicsGamesCodeJSON::TypeValue new_value)
      {
        setCode(new SportsOlympicsGamesCodeJSON(new_value));
      }
    void setCode(const char *chars)
      {
        SportsOlympicsGamesCodeJSON::TypeValueKnownValues known = SportsOlympicsGamesCodeJSON::stringToValue(chars);
        SportsOlympicsGamesCodeJSON::TypeValue new_value;
        if (known == SportsOlympicsGamesCodeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setCode(new_value);
      }
    void setCode(std::string the_string)
      {
        setCode(the_string.c_str());
      }
    void unsetCode(void)
      {
        if (flagHasCode)
          {
            storeCode->remove_reference();
          }
        flagHasCode = false;
      }
    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        if (new_value < 0)
            throw("The value for field Year of SportsOlympicsGamesJSON is less than the lower bound (0) for that field.");
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }
    void setHostCity(std::string new_value)
      {
        flagHasHostCity = true;
        storeHostCity = new_value;
      }
    void unsetHostCity(void)
      {
        flagHasHostCity = false;
      }
    void setHostCountry(std::string new_value)
      {
        flagHasHostCountry = true;
        storeHostCountry = new_value;
      }
    void unsetHostCountry(void)
      {
        flagHasHostCountry = false;
      }
    void setSeason(SportsOlympicsSeasonJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = true;
        storeSeason = new_value;
      }
    void setSeason(SportsOlympicsSeasonJSON::TypeValue new_value)
      {
        setSeason(new SportsOlympicsSeasonJSON(new_value));
      }
    void setSeason(const char *chars)
      {
        SportsOlympicsSeasonJSON::TypeValueKnownValues known = SportsOlympicsSeasonJSON::stringToValue(chars);
        SportsOlympicsSeasonJSON::TypeValue new_value;
        if (known == SportsOlympicsSeasonJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSeason(new_value);
      }
    void setSeason(std::string the_string)
      {
        setSeason(the_string.c_str());
      }
    void unsetSeason(void)
      {
        if (flagHasSeason)
          {
            storeSeason->remove_reference();
          }
        flagHasSeason = false;
      }
    void setOpeningCeremonyDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpeningCeremonyDate)
          {
            storeOpeningCeremonyDate->remove_reference();
          }
        flagHasOpeningCeremonyDate = true;
        storeOpeningCeremonyDate = new_value;
      }
    void unsetOpeningCeremonyDate(void)
      {
        if (flagHasOpeningCeremonyDate)
          {
            storeOpeningCeremonyDate->remove_reference();
          }
        flagHasOpeningCeremonyDate = false;
      }
    void setClosingCeremonyDate(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasClosingCeremonyDate)
          {
            storeClosingCeremonyDate->remove_reference();
          }
        flagHasClosingCeremonyDate = true;
        storeClosingCeremonyDate = new_value;
      }
    void unsetClosingCeremonyDate(void)
      {
        if (flagHasClosingCeremonyDate)
          {
            storeClosingCeremonyDate->remove_reference();
          }
        flagHasClosingCeremonyDate = false;
      }
    void setStatus(TypeStatus new_value)
      {
        flagHasStatus = true;
        storeStatus = new_value;
      }
    void setStatus(const char *chars)
      {
        TypeStatusKnownValues known = stringToStatus(chars);
        TypeStatus new_value;
        if (known == Status__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setStatus(new_value);
      }
    void setStatus(std::string the_string)
      {
        setStatus(the_string.c_str());
      }
    void setStatus(TypeStatusKnownValues new_value)
      {
        TypeStatus new_full_value;
        assert(new_value != Status__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setStatus(new_full_value);
      }
    void unsetStatus(void)
      {
        flagHasStatus = false;
      }

    virtual void extraSportsOlympicsGamesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsGamesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsGamesLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsGamesAppendPair(key, new_component);
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
        assert(flagHasCode);
        handler->start_pair("Code");
        storeCode->write_as_json(handler);
        assert(flagHasYear);
        handler->start_pair("Year");
        handler->number_value(storeYear.get_o_integer());
        if (flagHasHostCity)
          {
            handler->start_pair("HostCity");
            handler->string_value(storeHostCity);
          }
        if (flagHasHostCountry)
          {
            handler->start_pair("HostCountry");
            handler->string_value(storeHostCountry);
          }
        assert(flagHasSeason);
        handler->start_pair("Season");
        storeSeason->write_as_json(handler);
        if (flagHasOpeningCeremonyDate)
          {
            handler->start_pair("OpeningCeremonyDate");
            storeOpeningCeremonyDate->write_as_json(handler);
          }
        if (flagHasClosingCeremonyDate)
          {
            handler->start_pair("ClosingCeremonyDate");
            storeClosingCeremonyDate->write_as_json(handler);
          }
        if (flagHasStatus)
          {
            handler->start_pair("Status");
            if (storeStatus.in_known_list)
              {
                switch (storeStatus.list_value)
                  {
                    case Status_Completed:
                        handler->string_value("Completed");
                        break;
                    case Status_Ongoing:
                        handler->string_value("Ongoing");
                        break;
                    case Status_Upcoming:
                        handler->string_value("Upcoming");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeStatus.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCode()))
          {
            return "When parsing the object for %what%, the \"Code\" field was missing.";
          }
        if (!(hasYear()))
          {
            return "When parsing the object for %what%, the \"Year\" field was missing.";
          }
        if (!(hasSeason()))
          {
            return "When parsing the object for %what%, the \"Season\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsGamesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsGamesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsGamesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool> generator("Type SportsOlympicsGames", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsGamesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsGamesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsGamesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool> generator("Type SportsOlympicsGames", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsGamesCodeJSON::Generator, RCHandle<SportsOlympicsGamesCodeJSON>, SportsOlympicsGamesCodeJSON *, bool > fieldGeneratorCode;
        static char lowerBoundYear[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYear>, OInteger, o_integer > fieldGeneratorYear;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHostCity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHostCountry;
        JSONHoldingGenerator<SportsOlympicsSeasonJSON::Generator, RCHandle<SportsOlympicsSeasonJSON>, SportsOlympicsSeasonJSON *, bool > fieldGeneratorSeason;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorOpeningCeremonyDate;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorClosingCeremonyDate;
    class FieldGeneratorStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeStatusKnownValues known = stringToStatus(result);
                TypeStatus new_value;
                if (known == Status__none)
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
            virtual void handle_result(TypeStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorStatus, TypeStatus, TypeStatus > fieldGeneratorStatus;
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
            SportsOlympicsGamesJSON *result = new SportsOlympicsGamesJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsGamesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsGamesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsGamesJSON *result)
          {
            if (fieldGeneratorCode.have_value)
              {
                result->setCode(fieldGeneratorCode.value.referenced());
                fieldGeneratorCode.have_value = false;
              }
            else if (!(result->hasCode()))
              {
                error("When parsing the object for %what%, the \"Code\" field was missing.");
              }
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            else if (!(result->hasYear()))
              {
                error("When parsing the object for %what%, the \"Year\" field was missing.");
              }
            if (fieldGeneratorHostCity.have_value)
              {
                result->setHostCity(fieldGeneratorHostCity.value);
                fieldGeneratorHostCity.have_value = false;
              }
            if (fieldGeneratorHostCountry.have_value)
              {
                result->setHostCountry(fieldGeneratorHostCountry.value);
                fieldGeneratorHostCountry.have_value = false;
              }
            if (fieldGeneratorSeason.have_value)
              {
                result->setSeason(fieldGeneratorSeason.value.referenced());
                fieldGeneratorSeason.have_value = false;
              }
            else if (!(result->hasSeason()))
              {
                error("When parsing the object for %what%, the \"Season\" field was missing.");
              }
            if (fieldGeneratorOpeningCeremonyDate.have_value)
              {
                result->setOpeningCeremonyDate(fieldGeneratorOpeningCeremonyDate.value.referenced());
                fieldGeneratorOpeningCeremonyDate.have_value = false;
              }
            if (fieldGeneratorClosingCeremonyDate.have_value)
              {
                result->setClosingCeremonyDate(fieldGeneratorClosingCeremonyDate.value.referenced());
                fieldGeneratorClosingCeremonyDate.have_value = false;
              }
            if (fieldGeneratorStatus.have_value)
              {
                result->setStatus(fieldGeneratorStatus.value);
                fieldGeneratorStatus.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsGamesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "osingCeremonyDate") == 0)
                                return &fieldGeneratorClosingCeremonyDate;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "de") == 0)
                                return &fieldGeneratorCode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "ostC", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[6]), "ty") == 0)
                                    return &fieldGeneratorHostCity;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[6]), "untry") == 0)
                                    return &fieldGeneratorHostCountry;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "peningCeremonyDate") == 0)
                        return &fieldGeneratorOpeningCeremonyDate;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ason") == 0)
                                return &fieldGeneratorSeason;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "atus") == 0)
                                return &fieldGeneratorStatus;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'Y':
                    if (strcmp(&(field_name[1]), "ear") == 0)
                        return &fieldGeneratorYear;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCode("field \"Code\" of the SportsOlympicsGames class", ignore_extras), fieldGeneratorYear("field \"Year\" of the SportsOlympicsGames class"), fieldGeneratorHostCity("field \"HostCity\" of the SportsOlympicsGames class"), fieldGeneratorHostCountry("field \"HostCountry\" of the SportsOlympicsGames class"), fieldGeneratorSeason("field \"Season\" of the SportsOlympicsGames class", ignore_extras), fieldGeneratorOpeningCeremonyDate("field \"OpeningCeremonyDate\" of the SportsOlympicsGames class", ignore_extras), fieldGeneratorClosingCeremonyDate("field \"ClosingCeremonyDate\" of the SportsOlympicsGames class", ignore_extras), fieldGeneratorStatus("field \"Status\" of the SportsOlympicsGames class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsGames class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCode.reset();
            fieldGeneratorYear.reset();
            fieldGeneratorHostCity.reset();
            fieldGeneratorHostCountry.reset();
            fieldGeneratorSeason.reset();
            fieldGeneratorOpeningCeremonyDate.reset();
            fieldGeneratorClosingCeremonyDate.reset();
            fieldGeneratorStatus.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSGAMESJSON_H */
