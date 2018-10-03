/* file "SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEPARTICIPANTJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEPARTICIPANTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsOlympicsAthleteJSON.h"
#include "SportsOlympicsOrganizationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON : public ReferenceCounted
  {
  private:
    bool flagHasAthletes;
    std::vector< SportsOlympicsAthleteJSON * > storeAthletes;
    bool flagHasOrganization;
    SportsOlympicsOrganizationJSON * storeOrganization;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON &);
    SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON & operator=(const SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON &other);

    void  fromJSONAthletes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOrganization(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON(void);
    bool  hasAthletes(void) const;
    size_t  countOfAthletes(void) const;
    SportsOlympicsAthleteJSON *  elementOfAthletes(size_t element_num);
    const SportsOlympicsAthleteJSON *  elementOfAthletes(size_t element_num) const;
    std::vector< SportsOlympicsAthleteJSON * >  getAthletes(void);
    const std::vector< SportsOlympicsAthleteJSON * >  getAthletes(void) const;
    bool  hasOrganization(void) const;
    SportsOlympicsOrganizationJSON *  getOrganization(void);
    const SportsOlympicsOrganizationJSON *  getOrganization(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initAthletes(void)
      {
        if (flagHasAthletes)
          {
            for (size_t num2 = 0; num2 < storeAthletes.size(); ++num2)
              {
                storeAthletes[num2]->remove_reference();
              }
          }
        flagHasAthletes = true;
        storeAthletes.clear();
      }
    void appendAthletes(SportsOlympicsAthleteJSON * to_append)
      {
        if (!flagHasAthletes)
          {
            flagHasAthletes = true;
            storeAthletes.clear();
          }
        assert(flagHasAthletes);
        to_append->add_reference();
        storeAthletes.push_back(to_append);
      }
    void unsetAthletes(void)
      {
        if (flagHasAthletes)
          {
            for (size_t num3 = 0; num3 < storeAthletes.size(); ++num3)
              {
                storeAthletes[num3]->remove_reference();
              }
          }
        flagHasAthletes = false;
        storeAthletes.clear();
      }
    void setOrganization(SportsOlympicsOrganizationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = true;
        storeOrganization = new_value;
      }
    void unsetOrganization(void)
      {
        if (flagHasOrganization)
          {
            storeOrganization->remove_reference();
          }
        flagHasOrganization = false;
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantAppendPair(key, new_component);
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
        if (flagHasAthletes)
          {
            handler->start_pair("Athletes");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeAthletes.size(); ++num1)
              {
                storeAthletes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasOrganization);
        handler->start_pair("Organization");
        storeOrganization->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasOrganization()))
          {
            return "When parsing the object for %what%, the \"Organization\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON>, SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstanceParticipant", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON>, SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsInstanceParticipant", ignore_extras);
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
        JSONHoldingArrayGenerator<SportsOlympicsAthleteJSON::Generator, RCHandle<SportsOlympicsAthleteJSON>, SportsOlympicsAthleteJSON *, bool > fieldGeneratorAthletes;
        JSONHoldingGenerator<SportsOlympicsOrganizationJSON::Generator, RCHandle<SportsOlympicsOrganizationJSON>, SportsOlympicsOrganizationJSON *, bool > fieldGeneratorOrganization;
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
            SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *result = new SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsInstanceParticipantAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *result)
          {
            if (fieldGeneratorAthletes.have_value)
              {
                result->initAthletes();
                size_t count = fieldGeneratorAthletes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAthletes(fieldGeneratorAthletes.value[num].referenced());
                  }
                fieldGeneratorAthletes.value.clear();
                fieldGeneratorAthletes.have_value = false;
              }
            if (fieldGeneratorOrganization.have_value)
              {
                result->setOrganization(fieldGeneratorOrganization.value.referenced());
                fieldGeneratorOrganization.have_value = false;
              }
            else if (!(result->hasOrganization()))
              {
                error("When parsing the object for %what%, the \"Organization\" field was missing.");
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsInstanceParticipantJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "thletes") == 0)
                        return &fieldGeneratorAthletes;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "rganization") == 0)
                        return &fieldGeneratorOrganization;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAthletes("field \"Athletes\" of the SportsOlympicsEventSchedulesAndResultsInstanceParticipant class", ignore_extras), fieldGeneratorOrganization("field \"Organization\" of the SportsOlympicsEventSchedulesAndResultsInstanceParticipant class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsInstanceParticipant class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAthletes.reset();
            fieldGeneratorOrganization.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSINSTANCEPARTICIPANTJSON_H */
