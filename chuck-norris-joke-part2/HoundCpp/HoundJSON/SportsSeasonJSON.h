/* file "SportsSeasonJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSEASONJSON_H
#define SPORTSSEASONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "SportsSeasonTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsSeasonJSON : public ReferenceCounted
  {
  public:
    enum TypeArgumentType
      {
        ArgumentType_SportsSeason
      };

    static TypeArgumentType  stringToArgumentType(const char *chars);
    static const char * stringFromArgumentType(TypeArgumentType the_enum);
    enum TypeSeasonPhrasingKnownValues
      {
        SeasonPhrasing_CurrentSeason,
        SeasonPhrasing_LastSeason,
        SeasonPhrasing_Year,
        SeasonPhrasing__none
      };
    struct TypeSeasonPhrasing
      {
        bool in_known_list;
        std::string string_value;
        TypeSeasonPhrasingKnownValues list_value;

        TypeSeasonPhrasing(void);
        TypeSeasonPhrasing(const TypeSeasonPhrasing &other);
        TypeSeasonPhrasing(TypeSeasonPhrasingKnownValues other);
        bool  operator==(const TypeSeasonPhrasing &other) const;
        bool  operator!=(const TypeSeasonPhrasing &other) const;
        bool  operator<(const TypeSeasonPhrasing &other) const;
        bool  operator>(const TypeSeasonPhrasing &other) const;
        bool  operator>=(const TypeSeasonPhrasing &other) const;
        bool  operator<=(const TypeSeasonPhrasing &other) const;

      };

    static TypeSeasonPhrasingKnownValues  stringToSeasonPhrasing(const char *chars);
    static const char * stringFromSeasonPhrasing(TypeSeasonPhrasingKnownValues the_enum);

  private:
    bool flagHasArgumentType;
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasYearEnd;
    OInteger storeYearEnd;
    bool flagHasIsCurrentSeason;
    bool storeIsCurrentSeason;
    bool flagHasType;
    SportsSeasonTypeJSON * storeType;
    bool flagHasSeasonPhrasing;
    TypeSeasonPhrasing storeSeasonPhrasing;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsSeasonJSON(const SportsSeasonJSON &);
    SportsSeasonJSON & operator=(const SportsSeasonJSON &other);

    void  fromJSONArgumentType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsCurrentSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeasonPhrasing(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsSeasonJSON(void);
    virtual ~SportsSeasonJSON(void);
    bool  hasArgumentType(void) const;
    TypeArgumentType  getArgumentType(void);
    const TypeArgumentType  getArgumentType(void) const;
    const char * getArgumentTypeAsChars(void) const;
    std::string  getArgumentTypeAsString(void) const;
    bool  hasYear(void) const;
    OInteger  getYear(void);
    const OInteger  getYear(void) const;
    bool  hasYearEnd(void) const;
    OInteger  getYearEnd(void);
    const OInteger  getYearEnd(void) const;
    bool  hasIsCurrentSeason(void) const;
    bool  getIsCurrentSeason(void);
    const bool  getIsCurrentSeason(void) const;
    bool  hasType(void) const;
    SportsSeasonTypeJSON *  getType(void);
    const SportsSeasonTypeJSON *  getType(void) const;
    SportsSeasonTypeJSON::TypeValue  getTypeValue(void);
    const SportsSeasonTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasSeasonPhrasing(void) const;
    TypeSeasonPhrasing  getSeasonPhrasing(void);
    const TypeSeasonPhrasing  getSeasonPhrasing(void) const;
    const char * getSeasonPhrasingAsChars(void) const;
    std::string  getSeasonPhrasingAsString(void) const;

    virtual size_t extraSportsSeasonComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsSeasonComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsSeasonComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsSeasonComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsSeasonLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsSeasonLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setArgumentType(void)
      {
        flagHasArgumentType = true;
      }
    void setArgumentType(TypeArgumentType new_value)
      {
        setArgumentType();
      }
    void setArgumentType(const char *chars)
      {
        setArgumentType(stringToArgumentType(chars));
      }
    void setArgumentType(std::string the_string)
      {
        setArgumentType(stringToArgumentType(the_string.c_str()));
      }
    void unsetArgumentType(void)
      {
        flagHasArgumentType = false;
      }
    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        if (new_value < 1)
            throw("The value for field Year of SportsSeasonJSON is less than the lower bound (1) for that field.");
        storeYear = new_value;
      }
    void unsetYear(void)
      {
        flagHasYear = false;
      }
    void setYearEnd(OInteger new_value)
      {
        flagHasYearEnd = true;
        if (new_value < 1)
            throw("The value for field YearEnd of SportsSeasonJSON is less than the lower bound (1) for that field.");
        storeYearEnd = new_value;
      }
    void unsetYearEnd(void)
      {
        flagHasYearEnd = false;
      }
    void setIsCurrentSeason(bool new_value)
      {
        flagHasIsCurrentSeason = true;
        storeIsCurrentSeason = new_value;
      }
    void unsetIsCurrentSeason(void)
      {
        flagHasIsCurrentSeason = false;
      }
    void setType(SportsSeasonTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsSeasonTypeJSON::TypeValue new_value)
      {
        setType(new SportsSeasonTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsSeasonTypeJSON::TypeValueKnownValues known = SportsSeasonTypeJSON::stringToValue(chars);
        SportsSeasonTypeJSON::TypeValue new_value;
        if (known == SportsSeasonTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void unsetType(void)
      {
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = false;
      }
    void setSeasonPhrasing(TypeSeasonPhrasing new_value)
      {
        flagHasSeasonPhrasing = true;
        storeSeasonPhrasing = new_value;
      }
    void setSeasonPhrasing(const char *chars)
      {
        TypeSeasonPhrasingKnownValues known = stringToSeasonPhrasing(chars);
        TypeSeasonPhrasing new_value;
        if (known == SeasonPhrasing__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSeasonPhrasing(new_value);
      }
    void setSeasonPhrasing(std::string the_string)
      {
        setSeasonPhrasing(the_string.c_str());
      }
    void setSeasonPhrasing(TypeSeasonPhrasingKnownValues new_value)
      {
        TypeSeasonPhrasing new_full_value;
        assert(new_value != SeasonPhrasing__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setSeasonPhrasing(new_full_value);
      }
    void unsetSeasonPhrasing(void)
      {
        flagHasSeasonPhrasing = false;
      }

    virtual void extraSportsSeasonAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsSeasonSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsSeasonLookup(key);
        if (old_field == NULL)
          {
            extraSportsSeasonAppendPair(key, new_component);
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
        if (flagHasArgumentType)
          {
            handler->start_pair("ArgumentType");
            handler->string_value("SportsSeason");
          }
        if (flagHasYear)
          {
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
          }
        if (flagHasYearEnd)
          {
            handler->start_pair("YearEnd");
            handler->number_value(storeYearEnd.get_o_integer());
          }
        if (flagHasIsCurrentSeason)
          {
            handler->start_pair("IsCurrentSeason");
            handler->boolean_value(storeIsCurrentSeason);
          }
        if (flagHasType)
          {
            handler->start_pair("Type");
            storeType->write_as_json(handler);
          }
        if (flagHasSeasonPhrasing)
          {
            handler->start_pair("SeasonPhrasing");
            if (storeSeasonPhrasing.in_known_list)
              {
                switch (storeSeasonPhrasing.list_value)
                  {
                    case SeasonPhrasing_CurrentSeason:
                        handler->string_value("CurrentSeason");
                        break;
                    case SeasonPhrasing_LastSeason:
                        handler->string_value("LastSeason");
                        break;
                    case SeasonPhrasing_Year:
                        handler->string_value("Year");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeSeasonPhrasing.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsSeasonJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsSeasonJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeasonJSON>, SportsSeasonJSON *, bool> generator("Type SportsSeason", ignore_extras);
            parse_json_value(text, "Text for SportsSeasonJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsSeasonJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsSeasonJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeasonJSON>, SportsSeasonJSON *, bool> generator("Type SportsSeason", ignore_extras);
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
    class FieldGeneratorArgumentType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorArgumentType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorArgumentType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToArgumentType(result));
              }
            virtual void handle_result(TypeArgumentType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorArgumentType, TypeArgumentType, TypeArgumentType > fieldGeneratorArgumentType;
        static char lowerBoundYear[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYear>, OInteger, o_integer > fieldGeneratorYear;
        static char lowerBoundYearEnd[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYearEnd>, OInteger, o_integer > fieldGeneratorYearEnd;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsCurrentSeason;
        JSONHoldingGenerator<SportsSeasonTypeJSON::Generator, RCHandle<SportsSeasonTypeJSON>, SportsSeasonTypeJSON *, bool > fieldGeneratorType;
    class FieldGeneratorSeasonPhrasing : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSeasonPhrasing(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSeasonPhrasing(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeSeasonPhrasingKnownValues known = stringToSeasonPhrasing(result);
                TypeSeasonPhrasing new_value;
                if (known == SeasonPhrasing__none)
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
            virtual void handle_result(TypeSeasonPhrasing result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSeasonPhrasing, TypeSeasonPhrasing, TypeSeasonPhrasing > fieldGeneratorSeasonPhrasing;
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
            SportsSeasonJSON *result = new SportsSeasonJSON();
            assert(result != NULL);
            RCHandle<SportsSeasonJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsSeasonAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsSeasonJSON *result)
          {
            if (fieldGeneratorArgumentType.have_value)
              {
                result->setArgumentType();
                fieldGeneratorArgumentType.have_value = false;
              }
            if (fieldGeneratorYear.have_value)
              {
                result->setYear(fieldGeneratorYear.value);
                fieldGeneratorYear.have_value = false;
              }
            if (fieldGeneratorYearEnd.have_value)
              {
                result->setYearEnd(fieldGeneratorYearEnd.value);
                fieldGeneratorYearEnd.have_value = false;
              }
            if (fieldGeneratorIsCurrentSeason.have_value)
              {
                result->setIsCurrentSeason(fieldGeneratorIsCurrentSeason.value);
                fieldGeneratorIsCurrentSeason.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            if (fieldGeneratorSeasonPhrasing.have_value)
              {
                result->setSeasonPhrasing(fieldGeneratorSeasonPhrasing.value);
                fieldGeneratorSeasonPhrasing.have_value = false;
              }
          }
        virtual void handle_result(SportsSeasonJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rgumentType") == 0)
                        return &fieldGeneratorArgumentType;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "sCurrentSeason") == 0)
                        return &fieldGeneratorIsCurrentSeason;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "easonPhrasing") == 0)
                        return &fieldGeneratorSeasonPhrasing;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                case 'Y':
                    if (strncmp(&(field_name[1]), "ear", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorYear;
                            case 'E':
                                if (strcmp(&(field_name[5]), "nd") == 0)
                                    return &fieldGeneratorYearEnd;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentType("field \"ArgumentType\" of the SportsSeason class"), fieldGeneratorYear("field \"Year\" of the SportsSeason class"), fieldGeneratorYearEnd("field \"YearEnd\" of the SportsSeason class"), fieldGeneratorIsCurrentSeason("field \"IsCurrentSeason\" of the SportsSeason class"), fieldGeneratorType("field \"Type\" of the SportsSeason class", ignore_extras), fieldGeneratorSeasonPhrasing("field \"SeasonPhrasing\" of the SportsSeason class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsSeason class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentType.reset();
            fieldGeneratorYear.reset();
            fieldGeneratorYearEnd.reset();
            fieldGeneratorIsCurrentSeason.reset();
            fieldGeneratorType.reset();
            fieldGeneratorSeasonPhrasing.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSEASONJSON_H */
