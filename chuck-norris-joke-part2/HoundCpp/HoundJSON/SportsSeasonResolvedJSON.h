/* file "SportsSeasonResolvedJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSEASONRESOLVEDJSON_H
#define SPORTSSEASONRESOLVEDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
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


class SportsSeasonResolvedJSON : public ReferenceCounted
  {
  private:
    bool flagHasYear;
    OInteger storeYear;
    bool flagHasYearEnd;
    OInteger storeYearEnd;
    bool flagHasIsCurrentSeason;
    bool storeIsCurrentSeason;
    bool flagHasType;
    SportsSeasonTypeJSON * storeType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsSeasonResolvedJSON(const SportsSeasonResolvedJSON &);
    SportsSeasonResolvedJSON & operator=(const SportsSeasonResolvedJSON &other);

    void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYearEnd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsCurrentSeason(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsSeasonResolvedJSON(void);
    virtual ~SportsSeasonResolvedJSON(void);
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

    virtual size_t extraSportsSeasonResolvedComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsSeasonResolvedComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsSeasonResolvedComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsSeasonResolvedComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsSeasonResolvedLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsSeasonResolvedLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setYear(OInteger new_value)
      {
        flagHasYear = true;
        if (new_value < 1)
            throw("The value for field Year of SportsSeasonResolvedJSON is less than the lower bound (1) for that field.");
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
            throw("The value for field YearEnd of SportsSeasonResolvedJSON is less than the lower bound (1) for that field.");
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

    virtual void extraSportsSeasonResolvedAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsSeasonResolvedSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsSeasonResolvedLookup(key);
        if (old_field == NULL)
          {
            extraSportsSeasonResolvedAppendPair(key, new_component);
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
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsSeasonResolvedJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsSeasonResolvedJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsSeasonResolvedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool> generator("Type SportsSeasonResolved", ignore_extras);
            parse_json_value(text, "Text for SportsSeasonResolvedJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsSeasonResolvedJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsSeasonResolvedJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsSeasonResolvedJSON>, SportsSeasonResolvedJSON *, bool> generator("Type SportsSeasonResolved", ignore_extras);
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
        static char lowerBoundYear[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYear>, OInteger, o_integer > fieldGeneratorYear;
        static char lowerBoundYearEnd[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundYearEnd>, OInteger, o_integer > fieldGeneratorYearEnd;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsCurrentSeason;
        JSONHoldingGenerator<SportsSeasonTypeJSON::Generator, RCHandle<SportsSeasonTypeJSON>, SportsSeasonTypeJSON *, bool > fieldGeneratorType;
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
            SportsSeasonResolvedJSON *result = new SportsSeasonResolvedJSON();
            assert(result != NULL);
            RCHandle<SportsSeasonResolvedJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsSeasonResolvedAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsSeasonResolvedJSON *result)
          {
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
          }
        virtual void handle_result(SportsSeasonResolvedJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "sCurrentSeason") == 0)
                        return &fieldGeneratorIsCurrentSeason;
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
        Generator(bool ignore_extras = false) : fieldGeneratorYear("field \"Year\" of the SportsSeasonResolved class"), fieldGeneratorYearEnd("field \"YearEnd\" of the SportsSeasonResolved class"), fieldGeneratorIsCurrentSeason("field \"IsCurrentSeason\" of the SportsSeasonResolved class"), fieldGeneratorType("field \"Type\" of the SportsSeasonResolved class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsSeasonResolved class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorYear.reset();
            fieldGeneratorYearEnd.reset();
            fieldGeneratorIsCurrentSeason.reset();
            fieldGeneratorType.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSEASONRESOLVEDJSON_H */
