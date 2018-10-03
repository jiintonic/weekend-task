/* file "SportsGameSchedulesScoresQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSGAMESCHEDULESSCORESQUERYSTATEJSON_H
#define SPORTSGAMESCHEDULESSCORESQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "SportsInputDataJSON.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsGameSchedulesScoresQueryStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasSportsInputData;
    SportsInputDataJSON * storeSportsInputData;
    bool flagHasResponseGameTime;
    DateAndOrTimeJSON * storeResponseGameTime;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsGameSchedulesScoresQueryStateJSON(const SportsGameSchedulesScoresQueryStateJSON &);
    SportsGameSchedulesScoresQueryStateJSON & operator=(const SportsGameSchedulesScoresQueryStateJSON &other);

    void  fromJSONSportsInputData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONResponseGameTime(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsGameSchedulesScoresQueryStateJSON(void);
    virtual ~SportsGameSchedulesScoresQueryStateJSON(void);
    bool  hasSportsInputData(void) const;
    SportsInputDataJSON *  getSportsInputData(void);
    const SportsInputDataJSON *  getSportsInputData(void) const;
    bool  hasResponseGameTime(void) const;
    DateAndOrTimeJSON *  getResponseGameTime(void);
    const DateAndOrTimeJSON *  getResponseGameTime(void) const;

    virtual size_t extraSportsGameSchedulesScoresQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsGameSchedulesScoresQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsGameSchedulesScoresQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsGameSchedulesScoresQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsGameSchedulesScoresQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSportsInputData(SportsInputDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSportsInputData)
          {
            storeSportsInputData->remove_reference();
          }
        flagHasSportsInputData = true;
        storeSportsInputData = new_value;
      }
    void unsetSportsInputData(void)
      {
        if (flagHasSportsInputData)
          {
            storeSportsInputData->remove_reference();
          }
        flagHasSportsInputData = false;
      }
    void setResponseGameTime(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasResponseGameTime)
          {
            storeResponseGameTime->remove_reference();
          }
        flagHasResponseGameTime = true;
        storeResponseGameTime = new_value;
      }
    void unsetResponseGameTime(void)
      {
        if (flagHasResponseGameTime)
          {
            storeResponseGameTime->remove_reference();
          }
        flagHasResponseGameTime = false;
      }

    virtual void extraSportsGameSchedulesScoresQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsGameSchedulesScoresQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsGameSchedulesScoresQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsGameSchedulesScoresQueryStateAppendPair(key, new_component);
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
        if (flagHasSportsInputData)
          {
            handler->start_pair("SportsInputData");
            storeSportsInputData->write_as_json(handler);
          }
        if (flagHasResponseGameTime)
          {
            handler->start_pair("ResponseGameTime");
            storeResponseGameTime->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsGameSchedulesScoresQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsGameSchedulesScoresQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryStateJSON>, SportsGameSchedulesScoresQueryStateJSON *, bool> generator("Type SportsGameSchedulesScoresQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsGameSchedulesScoresQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsGameSchedulesScoresQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsGameSchedulesScoresQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsGameSchedulesScoresQueryStateJSON>, SportsGameSchedulesScoresQueryStateJSON *, bool> generator("Type SportsGameSchedulesScoresQueryState", ignore_extras);
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
        JSONHoldingGenerator<SportsInputDataJSON::Generator, RCHandle<SportsInputDataJSON>, SportsInputDataJSON *, bool > fieldGeneratorSportsInputData;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorResponseGameTime;
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
            SportsGameSchedulesScoresQueryStateJSON *result = new SportsGameSchedulesScoresQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsGameSchedulesScoresQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsGameSchedulesScoresQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsGameSchedulesScoresQueryStateJSON *result)
          {
            if (fieldGeneratorSportsInputData.have_value)
              {
                result->setSportsInputData(fieldGeneratorSportsInputData.value.referenced());
                fieldGeneratorSportsInputData.have_value = false;
              }
            if (fieldGeneratorResponseGameTime.have_value)
              {
                result->setResponseGameTime(fieldGeneratorResponseGameTime.value.referenced());
                fieldGeneratorResponseGameTime.have_value = false;
              }
          }
        virtual void handle_result(SportsGameSchedulesScoresQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'R':
                    if (strcmp(&(field_name[1]), "esponseGameTime") == 0)
                        return &fieldGeneratorResponseGameTime;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "portsInputData") == 0)
                        return &fieldGeneratorSportsInputData;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSportsInputData("field \"SportsInputData\" of the SportsGameSchedulesScoresQueryState class", ignore_extras), fieldGeneratorResponseGameTime("field \"ResponseGameTime\" of the SportsGameSchedulesScoresQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsGameSchedulesScoresQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSportsInputData.reset();
            fieldGeneratorResponseGameTime.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSGAMESCHEDULESSCORESQUERYSTATEJSON_H */
