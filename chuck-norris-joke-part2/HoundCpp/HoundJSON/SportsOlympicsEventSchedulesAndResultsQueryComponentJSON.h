/* file "SportsOlympicsEventSchedulesAndResultsQueryComponentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYCOMPONENTJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYCOMPONENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsOlympicsEventSchedulesAndResultsQueryTypeJSON.h"
#include "SportsOlympicsEventJSON.h"
#include "SportsOlympicsGamesJSON.h"
#include "DateTimeRangeSpecJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsQueryComponentJSON : public ReferenceCounted
  {
  private:
    bool flagHasQueryType;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * storeQueryType;
    bool flagHasEvents;
    std::vector< SportsOlympicsEventJSON * > storeEvents;
    bool flagHasGames;
    SportsOlympicsGamesJSON * storeGames;
    bool flagHasRank;
    OInteger storeRank;
    bool flagHasDateTimeRange;
    DateTimeRangeSpecJSON * storeDateTimeRange;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON &);
    SportsOlympicsEventSchedulesAndResultsQueryComponentJSON & operator=(const SportsOlympicsEventSchedulesAndResultsQueryComponentJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEvents(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDateTimeRange(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsQueryComponentJSON(void);
    bool  hasQueryType(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *  getQueryType(void);
    const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *  getQueryType(void) const;
    SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue  getQueryTypeValue(void);
    const SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue  getQueryTypeValue(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasEvents(void) const;
    size_t  countOfEvents(void) const;
    SportsOlympicsEventJSON *  elementOfEvents(size_t element_num);
    const SportsOlympicsEventJSON *  elementOfEvents(size_t element_num) const;
    std::vector< SportsOlympicsEventJSON * >  getEvents(void);
    const std::vector< SportsOlympicsEventJSON * >  getEvents(void) const;
    bool  hasGames(void) const;
    SportsOlympicsGamesJSON *  getGames(void);
    const SportsOlympicsGamesJSON *  getGames(void) const;
    bool  hasRank(void) const;
    OInteger  getRank(void);
    const OInteger  getRank(void) const;
    bool  hasDateTimeRange(void) const;
    DateTimeRangeSpecJSON *  getDateTimeRange(void);
    const DateTimeRangeSpecJSON *  getDateTimeRange(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsQueryComponentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsQueryComponentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryComponentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryComponentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryComponentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsQueryComponentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(SportsOlympicsEventSchedulesAndResultsQueryTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasQueryType)
          {
            storeQueryType->remove_reference();
          }
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue new_value)
      {
        setQueryType(new SportsOlympicsEventSchedulesAndResultsQueryTypeJSON(new_value));
      }
    void setQueryType(const char *chars)
      {
        SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValueKnownValues known = SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::stringToValue(chars);
        SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::TypeValue new_value;
        if (known == SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setQueryType(new_value);
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(the_string.c_str());
      }
    void unsetQueryType(void)
      {
        if (flagHasQueryType)
          {
            storeQueryType->remove_reference();
          }
        flagHasQueryType = false;
      }
    void initEvents(void)
      {
        if (flagHasEvents)
          {
            for (size_t num2 = 0; num2 < storeEvents.size(); ++num2)
              {
                storeEvents[num2]->remove_reference();
              }
          }
        flagHasEvents = true;
        storeEvents.clear();
      }
    void appendEvents(SportsOlympicsEventJSON * to_append)
      {
        if (!flagHasEvents)
          {
            flagHasEvents = true;
            storeEvents.clear();
          }
        assert(flagHasEvents);
        to_append->add_reference();
        storeEvents.push_back(to_append);
      }
    void appendEvents(SportsOlympicsEventJSON::TypeValue new_value)
      {
        appendEvents(new SportsOlympicsEventJSON(new_value));
      }
    void appendEvents(const char *chars)
      {
        SportsOlympicsEventJSON::TypeValueKnownValues known = SportsOlympicsEventJSON::stringToValue(chars);
        SportsOlympicsEventJSON::TypeValue new_value;
        if (known == SportsOlympicsEventJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendEvents(new_value);
      }
    void appendEvents(std::string the_string)
      {
        appendEvents(the_string.c_str());
      }
    void unsetEvents(void)
      {
        if (flagHasEvents)
          {
            for (size_t num3 = 0; num3 < storeEvents.size(); ++num3)
              {
                storeEvents[num3]->remove_reference();
              }
          }
        flagHasEvents = false;
        storeEvents.clear();
      }
    void setGames(SportsOlympicsGamesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = true;
        storeGames = new_value;
      }
    void unsetGames(void)
      {
        if (flagHasGames)
          {
            storeGames->remove_reference();
          }
        flagHasGames = false;
      }
    void setRank(OInteger new_value)
      {
        flagHasRank = true;
        if (new_value < 1)
            throw("The value for field Rank of SportsOlympicsEventSchedulesAndResultsQueryComponentJSON is less than the lower bound (1) for that field.");
        storeRank = new_value;
      }
    void unsetRank(void)
      {
        flagHasRank = false;
      }
    void setDateTimeRange(DateTimeRangeSpecJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = true;
        storeDateTimeRange = new_value;
      }
    void unsetDateTimeRange(void)
      {
        if (flagHasDateTimeRange)
          {
            storeDateTimeRange->remove_reference();
          }
        flagHasDateTimeRange = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryComponentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsQueryComponentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsQueryComponentLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsQueryComponentAppendPair(key, new_component);
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        storeQueryType->write_as_json(handler);
        if (flagHasEvents)
          {
            handler->start_pair("Events");
            assert(storeEvents.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeEvents.size(); ++num1)
              {
                storeEvents[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasGames);
        handler->start_pair("Games");
        storeGames->write_as_json(handler);
        if (flagHasRank)
          {
            handler->start_pair("Rank");
            handler->number_value(storeRank.get_o_integer());
          }
        if (flagHasDateTimeRange)
          {
            handler->start_pair("DateTimeRange");
            storeDateTimeRange->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        if (!(hasGames()))
          {
            return "When parsing the object for %what%, the \"Games\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON>, SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryComponent", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsQueryComponentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON>, SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsQueryComponent", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsEventSchedulesAndResultsQueryTypeJSON::Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsQueryTypeJSON>, SportsOlympicsEventSchedulesAndResultsQueryTypeJSON *, bool > fieldGeneratorQueryType;
        JSONHoldingArrayGenerator<SportsOlympicsEventJSON::Generator, RCHandle<SportsOlympicsEventJSON>, SportsOlympicsEventJSON *, bool > fieldGeneratorEvents;
        JSONHoldingGenerator<SportsOlympicsGamesJSON::Generator, RCHandle<SportsOlympicsGamesJSON>, SportsOlympicsGamesJSON *, bool > fieldGeneratorGames;
        static char lowerBoundRank[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
        JSONHoldingGenerator<DateTimeRangeSpecJSON::Generator, RCHandle<DateTimeRangeSpecJSON>, DateTimeRangeSpecJSON *, bool > fieldGeneratorDateTimeRange;
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
            SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *result = new SportsOlympicsEventSchedulesAndResultsQueryComponentJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsQueryComponentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsQueryComponentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value.referenced());
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorEvents.have_value)
              {
                result->initEvents();
                size_t count = fieldGeneratorEvents.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEvents(fieldGeneratorEvents.value[num].referenced());
                  }
                fieldGeneratorEvents.value.clear();
                fieldGeneratorEvents.have_value = false;
              }
            if (fieldGeneratorGames.have_value)
              {
                result->setGames(fieldGeneratorGames.value.referenced());
                fieldGeneratorGames.have_value = false;
              }
            else if (!(result->hasGames()))
              {
                error("When parsing the object for %what%, the \"Games\" field was missing.");
              }
            if (fieldGeneratorRank.have_value)
              {
                result->setRank(fieldGeneratorRank.value);
                fieldGeneratorRank.have_value = false;
              }
            if (fieldGeneratorDateTimeRange.have_value)
              {
                result->setDateTimeRange(fieldGeneratorDateTimeRange.value.referenced());
                fieldGeneratorDateTimeRange.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsQueryComponentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ateTimeRange") == 0)
                        return &fieldGeneratorDateTimeRange;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "vents") == 0)
                        return &fieldGeneratorEvents;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "ames") == 0)
                        return &fieldGeneratorGames;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "ank") == 0)
                        return &fieldGeneratorRank;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the SportsOlympicsEventSchedulesAndResultsQueryComponent class", ignore_extras), fieldGeneratorEvents("field \"Events\" of the SportsOlympicsEventSchedulesAndResultsQueryComponent class", ignore_extras), fieldGeneratorGames("field \"Games\" of the SportsOlympicsEventSchedulesAndResultsQueryComponent class", ignore_extras), fieldGeneratorRank("field \"Rank\" of the SportsOlympicsEventSchedulesAndResultsQueryComponent class"), fieldGeneratorDateTimeRange("field \"DateTimeRange\" of the SportsOlympicsEventSchedulesAndResultsQueryComponent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsQueryComponent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorEvents.reset();
            fieldGeneratorGames.reset();
            fieldGeneratorRank.reset();
            fieldGeneratorDateTimeRange.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSQUERYCOMPONENTJSON_H */
