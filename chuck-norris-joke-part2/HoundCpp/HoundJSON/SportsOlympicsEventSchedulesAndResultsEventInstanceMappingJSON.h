/* file "SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSEVENTINSTANCEMAPPINGJSON_H
#define SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSEVENTINSTANCEMAPPINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON : public ReferenceCounted
  {
  private:
    bool flagHasEventInstancesIndex;
    OInteger storeEventInstancesIndex;
    bool flagHasMedalWinnersIndices;
    std::vector< OInteger > storeMedalWinnersIndices;
    bool flagHasParticipantsIndices;
    std::vector< OInteger > storeParticipantsIndices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON &);
    SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON & operator=(const SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON &other);

    void  fromJSONEventInstancesIndex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMedalWinnersIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONParticipantsIndices(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(void);
    virtual ~SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON(void);
    bool  hasEventInstancesIndex(void) const;
    OInteger  getEventInstancesIndex(void);
    const OInteger  getEventInstancesIndex(void) const;
    bool  hasMedalWinnersIndices(void) const;
    size_t  countOfMedalWinnersIndices(void) const;
    OInteger  elementOfMedalWinnersIndices(size_t element_num);
    const OInteger  elementOfMedalWinnersIndices(size_t element_num) const;
    std::vector< OInteger >  getMedalWinnersIndices(void);
    const std::vector< OInteger >  getMedalWinnersIndices(void) const;
    bool  hasParticipantsIndices(void) const;
    size_t  countOfParticipantsIndices(void) const;
    OInteger  elementOfParticipantsIndices(size_t element_num);
    const OInteger  elementOfParticipantsIndices(size_t element_num) const;
    std::vector< OInteger >  getParticipantsIndices(void);
    const std::vector< OInteger >  getParticipantsIndices(void) const;

    virtual size_t extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setEventInstancesIndex(OInteger new_value)
      {
        flagHasEventInstancesIndex = true;
        if (new_value < 0)
            throw("The value for field EventInstancesIndex of SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON is less than the lower bound (0) for that field.");
        storeEventInstancesIndex = new_value;
      }
    void unsetEventInstancesIndex(void)
      {
        flagHasEventInstancesIndex = false;
      }
    void initMedalWinnersIndices(void)
      {
        flagHasMedalWinnersIndices = true;
        storeMedalWinnersIndices.clear();
      }
    void appendMedalWinnersIndices(OInteger to_append)
      {
        if (!flagHasMedalWinnersIndices)
          {
            flagHasMedalWinnersIndices = true;
            storeMedalWinnersIndices.clear();
          }
        assert(flagHasMedalWinnersIndices);
        storeMedalWinnersIndices.push_back(to_append);
      }
    void unsetMedalWinnersIndices(void)
      {
        flagHasMedalWinnersIndices = false;
        storeMedalWinnersIndices.clear();
      }
    void initParticipantsIndices(void)
      {
        flagHasParticipantsIndices = true;
        storeParticipantsIndices.clear();
      }
    void appendParticipantsIndices(OInteger to_append)
      {
        if (!flagHasParticipantsIndices)
          {
            flagHasParticipantsIndices = true;
            storeParticipantsIndices.clear();
          }
        assert(flagHasParticipantsIndices);
        storeParticipantsIndices.push_back(to_append);
      }
    void unsetParticipantsIndices(void)
      {
        flagHasParticipantsIndices = false;
        storeParticipantsIndices.clear();
      }

    virtual void extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingAppendPair(key, new_component);
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
        assert(flagHasEventInstancesIndex);
        handler->start_pair("EventInstancesIndex");
        handler->number_value(storeEventInstancesIndex.get_o_integer());
        if (flagHasMedalWinnersIndices)
          {
            handler->start_pair("MedalWinnersIndices");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeMedalWinnersIndices.size(); ++num1)
              {
                handler->number_value(storeMedalWinnersIndices[num1].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasParticipantsIndices)
          {
            handler->start_pair("ParticipantsIndices");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeParticipantsIndices.size(); ++num2)
              {
                handler->number_value(storeParticipantsIndices[num2].get_o_integer());
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEventInstancesIndex()))
          {
            return "When parsing the object for %what%, the \"EventInstancesIndex\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON>, SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsEventInstanceMapping", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON>, SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *, bool> generator("Type SportsOlympicsEventSchedulesAndResultsEventInstanceMapping", ignore_extras);
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
        static char lowerBoundEventInstancesIndex[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEventInstancesIndex>, OInteger, o_integer > fieldGeneratorEventInstancesIndex;
        static char lowerBoundMedalWinnersIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMedalWinnersIndices>, OInteger, o_integer > fieldGeneratorMedalWinnersIndices;
        static char lowerBoundParticipantsIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundParticipantsIndices>, OInteger, o_integer > fieldGeneratorParticipantsIndices;
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
            SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *result = new SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsEventSchedulesAndResultsEventInstanceMappingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *result)
          {
            if (fieldGeneratorEventInstancesIndex.have_value)
              {
                result->setEventInstancesIndex(fieldGeneratorEventInstancesIndex.value);
                fieldGeneratorEventInstancesIndex.have_value = false;
              }
            else if (!(result->hasEventInstancesIndex()))
              {
                error("When parsing the object for %what%, the \"EventInstancesIndex\" field was missing.");
              }
            if (fieldGeneratorMedalWinnersIndices.have_value)
              {
                result->initMedalWinnersIndices();
                size_t count = fieldGeneratorMedalWinnersIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMedalWinnersIndices(fieldGeneratorMedalWinnersIndices.value[num]);
                  }
                fieldGeneratorMedalWinnersIndices.value.clear();
                fieldGeneratorMedalWinnersIndices.have_value = false;
              }
            if (fieldGeneratorParticipantsIndices.have_value)
              {
                result->initParticipantsIndices();
                size_t count = fieldGeneratorParticipantsIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendParticipantsIndices(fieldGeneratorParticipantsIndices.value[num]);
                  }
                fieldGeneratorParticipantsIndices.value.clear();
                fieldGeneratorParticipantsIndices.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsEventSchedulesAndResultsEventInstanceMappingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ventInstancesIndex") == 0)
                        return &fieldGeneratorEventInstancesIndex;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "edalWinnersIndices") == 0)
                        return &fieldGeneratorMedalWinnersIndices;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "articipantsIndices") == 0)
                        return &fieldGeneratorParticipantsIndices;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorEventInstancesIndex("field \"EventInstancesIndex\" of the SportsOlympicsEventSchedulesAndResultsEventInstanceMapping class"), fieldGeneratorMedalWinnersIndices("field \"MedalWinnersIndices\" of the SportsOlympicsEventSchedulesAndResultsEventInstanceMapping class"), fieldGeneratorParticipantsIndices("field \"ParticipantsIndices\" of the SportsOlympicsEventSchedulesAndResultsEventInstanceMapping class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsEventSchedulesAndResultsEventInstanceMapping class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEventInstancesIndex.reset();
            fieldGeneratorMedalWinnersIndices.reset();
            fieldGeneratorParticipantsIndices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSEVENTSCHEDULESANDRESULTSEVENTINSTANCEMAPPINGJSON_H */
