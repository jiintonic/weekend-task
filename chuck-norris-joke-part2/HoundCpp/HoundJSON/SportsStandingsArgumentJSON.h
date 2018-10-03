/* file "SportsStandingsArgumentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSARGUMENTJSON_H
#define SPORTSSTANDINGSARGUMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONParallelGenerator.h"
#include "OInteger.h"
#include "SportsStandingsArgumentWildCardJSON.h"
#include "SportsSeasonJSON.h"
#include "SportsStandingsArgumentConferenceJSON.h"
#include "SportsStandingsArgumentDivisionalJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsArgumentJSON : public ReferenceCounted
  {
  public:
    struct TypeArgumentData
      {
        size_t key;
        union
          {
            SportsStandingsArgumentWildCardJSON * choice0;
            SportsSeasonJSON * choice1;
            SportsStandingsArgumentConferenceJSON * choice2;
            SportsStandingsArgumentDivisionalJSON * choice3;
          } u;
      };

  private:
    bool flagHasArgumentData;
    TypeArgumentData storeArgumentData;
    bool flagHasArgumentID;
    OInteger storeArgumentID;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStandingsArgumentJSON(const SportsStandingsArgumentJSON &);
    SportsStandingsArgumentJSON & operator=(const SportsStandingsArgumentJSON &other);

    void  fromJSONArgumentData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArgumentID(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsArgumentJSON(void);
    virtual ~SportsStandingsArgumentJSON(void);
    bool  hasArgumentData(void) const;
    TypeArgumentData  getArgumentData(void);
    const TypeArgumentData  getArgumentData(void) const;
    bool  hasArgumentID(void) const;
    OInteger  getArgumentID(void);
    const OInteger  getArgumentID(void) const;

    virtual size_t extraSportsStandingsArgumentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStandingsArgumentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStandingsArgumentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStandingsArgumentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStandingsArgumentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStandingsArgumentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setArgumentData(TypeArgumentData new_value)
      {
        switch (new_value.key)
          {
            case 0:
                new_value.u.choice0->add_reference();
                break;
            case 1:
                new_value.u.choice1->add_reference();
                break;
            case 2:
                new_value.u.choice2->add_reference();
                break;
            case 3:
                new_value.u.choice3->add_reference();
                break;
            default:
                assert(false);
          }
        if (flagHasArgumentData)
          {
            switch (storeArgumentData.key)
              {
                case 0:
                    storeArgumentData.u.choice0->remove_reference();
                    break;
                case 1:
                    storeArgumentData.u.choice1->remove_reference();
                    break;
                case 2:
                    storeArgumentData.u.choice2->remove_reference();
                    break;
                case 3:
                    storeArgumentData.u.choice3->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasArgumentData = true;
        switch (new_value.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
                assert(false);
          }
        storeArgumentData = new_value;
      }
    void unsetArgumentData(void)
      {
        if (flagHasArgumentData)
          {
            switch (storeArgumentData.key)
              {
                case 0:
                    storeArgumentData.u.choice0->remove_reference();
                    break;
                case 1:
                    storeArgumentData.u.choice1->remove_reference();
                    break;
                case 2:
                    storeArgumentData.u.choice2->remove_reference();
                    break;
                case 3:
                    storeArgumentData.u.choice3->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
        flagHasArgumentData = false;
      }
    void setArgumentID(OInteger new_value)
      {
        flagHasArgumentID = true;
        if (new_value < 0)
            throw("The value for field ArgumentID of SportsStandingsArgumentJSON is less than the lower bound (0) for that field.");
        storeArgumentID = new_value;
      }
    void unsetArgumentID(void)
      {
        flagHasArgumentID = false;
      }

    virtual void extraSportsStandingsArgumentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStandingsArgumentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStandingsArgumentLookup(key);
        if (old_field == NULL)
          {
            extraSportsStandingsArgumentAppendPair(key, new_component);
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
        assert(flagHasArgumentData);
        handler->start_pair("ArgumentData");
        switch (storeArgumentData.key)
          {
            case 0:
                storeArgumentData.u.choice0->write_as_json(handler);
                break;
            case 1:
                storeArgumentData.u.choice1->write_as_json(handler);
                break;
            case 2:
                storeArgumentData.u.choice2->write_as_json(handler);
                break;
            case 3:
                storeArgumentData.u.choice3->write_as_json(handler);
                break;
            default:
                assert(false);
          }
        assert(flagHasArgumentID);
        handler->start_pair("ArgumentID");
        handler->number_value(storeArgumentID.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasArgumentData()))
          {
            return "When parsing the object for %what%, the \"ArgumentData\" field was missing.";
          }
        if (!(hasArgumentID()))
          {
            return "When parsing the object for %what%, the \"ArgumentID\" field was missing.";
          }
        return NULL;
      }

    static SportsStandingsArgumentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsArgumentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentJSON>, SportsStandingsArgumentJSON *, bool> generator("Type SportsStandingsArgument", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsArgumentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsArgumentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsArgumentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsArgumentJSON>, SportsStandingsArgumentJSON *, bool> generator("Type SportsStandingsArgument", ignore_extras);
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
    class FieldGeneratorArgumentData : public JSONParallelGenerator
          {
          private:
            JSONHoldingGenerator<SportsStandingsArgumentWildCardJSON::Generator, RCHandle<SportsStandingsArgumentWildCardJSON>, SportsStandingsArgumentWildCardJSON *, bool > field0;
            JSONHoldingGenerator<SportsSeasonJSON::Generator, RCHandle<SportsSeasonJSON>, SportsSeasonJSON *, bool > field1;
            JSONHoldingGenerator<SportsStandingsArgumentConferenceJSON::Generator, RCHandle<SportsStandingsArgumentConferenceJSON>, SportsStandingsArgumentConferenceJSON *, bool > field2;
            JSONHoldingGenerator<SportsStandingsArgumentDivisionalJSON::Generator, RCHandle<SportsStandingsArgumentDivisionalJSON>, SportsStandingsArgumentDivisionalJSON *, bool > field3;
            JSONHandler *all_handlers[4];

          protected:
            size_t start(JSONHandler ***parallel_handlers_location)
              {
                *parallel_handlers_location = &(all_handlers[0]);
                return 4;
              }
            void finish(size_t winning_index)
              {
                TypeArgumentData result;
                result.key = winning_index;
                switch (winning_index)
                  {
                    case 0:
                      {
                        assert(field0.have_value);
                        result.u.choice0 = field0.value.referenced();
                        break;
                      }
                    case 1:
                      {
                        assert(field1.have_value);
                        result.u.choice1 = field1.value.referenced();
                        break;
                      }
                    case 2:
                      {
                        assert(field2.have_value);
                        result.u.choice2 = field2.value.referenced();
                        break;
                      }
                    case 3:
                      {
                        assert(field3.have_value);
                        result.u.choice3 = field3.value.referenced();
                        break;
                      }
                    default:
                      {
                        assert(false);
                      }
                  }
                handle_result(result);
              }
            virtual void handle_result(TypeArgumentData result) = 0;

          public:
            FieldGeneratorArgumentData(bool ignore_extras) : field0("option 0 of field \"ArgumentData\"", ignore_extras), field1("option 1 of field \"ArgumentData\"", ignore_extras), field2("option 2 of field \"ArgumentData\"", ignore_extras), field3("option 3 of field \"ArgumentData\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
                all_handlers[3] = &field3;
              }
            FieldGeneratorArgumentData(std::string what, bool ignore_extras) : field0("option 0 of field \"ArgumentData\"", ignore_extras), field1("option 1 of field \"ArgumentData\"", ignore_extras), field2("option 2 of field \"ArgumentData\"", ignore_extras), field3("option 3 of field \"ArgumentData\"", ignore_extras)
              {
                all_handlers[0] = &field0;
                all_handlers[1] = &field1;
                all_handlers[2] = &field2;
                all_handlers[3] = &field3;
              }
            ~FieldGeneratorArgumentData(void)  { }

            void reset(void)
              {
                field0.reset();
                field1.reset();
                field2.reset();
                field3.reset();
                JSONParallelGenerator::reset();
              }
          };
        class HolderArgumentData
          {
          private:
            bool have_data;
            TypeArgumentData data;

          public:
            HolderArgumentData(void) : have_data(false)  { }
            HolderArgumentData(TypeArgumentData init_data) : have_data(true), data(init_data)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        case 3:
                          data.u.choice3->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            HolderArgumentData(const HolderArgumentData &other) : have_data(other.haveData()), data(other.referenced())
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->add_reference();
                          break;
                        case 1:
                          data.u.choice1->add_reference();
                          break;
                        case 2:
                          data.u.choice2->add_reference();
                          break;
                        case 3:
                          data.u.choice3->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }
            ~HolderArgumentData(void)
              {
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
                          break;
                        case 3:
                          data.u.choice3->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
              }

            void operator=(const HolderArgumentData &other)
              {
                TypeArgumentData new_data;
                if (other.haveData())
                  {
                    new_data = other.referenced();
                    switch (new_data.key)
                      {
                        case 0:
                          new_data.u.choice0->add_reference();
                          break;
                        case 1:
                          new_data.u.choice1->add_reference();
                          break;
                        case 2:
                          new_data.u.choice2->add_reference();
                          break;
                        case 3:
                          new_data.u.choice3->add_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                if (have_data)
                  {
                    switch (data.key)
                      {
                        case 0:
                          data.u.choice0->remove_reference();
                          break;
                        case 1:
                          data.u.choice1->remove_reference();
                          break;
                        case 2:
                          data.u.choice2->remove_reference();
                          break;
                        case 3:
                          data.u.choice3->remove_reference();
                          break;
                        default:
                          assert(false);
                      }
                  }
                have_data = other.haveData();
                if (have_data)
                    data = new_data;
              }
            bool haveData(void) const
              {
                return have_data;
              }
            TypeArgumentData referenced(void) const
              {
                return data;
              }
          };
        JSONHoldingGenerator<FieldGeneratorArgumentData, HolderArgumentData, TypeArgumentData, bool > fieldGeneratorArgumentData;
        static char lowerBoundArgumentID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundArgumentID>, OInteger, o_integer > fieldGeneratorArgumentID;
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
            SportsStandingsArgumentJSON *result = new SportsStandingsArgumentJSON();
            assert(result != NULL);
            RCHandle<SportsStandingsArgumentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStandingsArgumentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStandingsArgumentJSON *result)
          {
            if (fieldGeneratorArgumentData.have_value)
              {
                result->setArgumentData(fieldGeneratorArgumentData.value.referenced());
                fieldGeneratorArgumentData.have_value = false;
              }
            else if (!(result->hasArgumentData()))
              {
                error("When parsing the object for %what%, the \"ArgumentData\" field was missing.");
              }
            if (fieldGeneratorArgumentID.have_value)
              {
                result->setArgumentID(fieldGeneratorArgumentID.value);
                fieldGeneratorArgumentID.have_value = false;
              }
            else if (!(result->hasArgumentID()))
              {
                error("When parsing the object for %what%, the \"ArgumentID\" field was missing.");
              }
          }
        virtual void handle_result(SportsStandingsArgumentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Argument", 8) == 0)
              {
                switch ((unsigned char)(field_name[8]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[9]), "ata") == 0)
                            return &fieldGeneratorArgumentData;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[9]), "D") == 0)
                            return &fieldGeneratorArgumentID;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorArgumentData("field \"ArgumentData\" of the SportsStandingsArgument class", ignore_extras), fieldGeneratorArgumentID("field \"ArgumentID\" of the SportsStandingsArgument class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStandingsArgument class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorArgumentData.reset();
            fieldGeneratorArgumentID.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTANDINGSARGUMENTJSON_H */
