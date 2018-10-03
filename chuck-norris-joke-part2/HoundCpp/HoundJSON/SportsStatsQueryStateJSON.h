/* file "SportsStatsQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSQUERYSTATEJSON_H
#define SPORTSSTATSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "SportsTeamOrPlayerJSON.h"
#include "SportsStatsTypeJSON.h"
#include "SportsStatsArgumentArrayJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsQueryStateJSON : public ReferenceCounted
  {
  public:
    class TypeStatRequestsJSON : public ReferenceCounted
      {
      private:
        bool flagHasTeamOrPlayer;
        SportsTeamOrPlayerJSON * storeTeamOrPlayer;
        bool flagHasStatisticType;
        SportsStatsTypeJSON * storeStatisticType;
        bool flagHasArguments;
        std::vector< SportsStatsArgumentArrayJSON * > storeArguments;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeStatRequestsJSON(const TypeStatRequestsJSON &);
        TypeStatRequestsJSON & operator=(const TypeStatRequestsJSON &other);

        void  fromJSONTeamOrPlayer(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStatisticType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONArguments(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeStatRequestsJSON(void);
        virtual ~TypeStatRequestsJSON(void);
        bool  hasTeamOrPlayer(void) const;
        SportsTeamOrPlayerJSON *  getTeamOrPlayer(void);
        const SportsTeamOrPlayerJSON *  getTeamOrPlayer(void) const;
        SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void);
        const SportsTeamOrPlayerJSON::TypeValue  getTeamOrPlayerValue(void) const;
        bool  hasStatisticType(void) const;
        SportsStatsTypeJSON *  getStatisticType(void);
        const SportsStatsTypeJSON *  getStatisticType(void) const;
        SportsStatsTypeJSON::TypeValue  getStatisticTypeValue(void);
        const SportsStatsTypeJSON::TypeValue  getStatisticTypeValue(void) const;
        const char * getStatisticTypeAsChars(void) const;
        std::string  getStatisticTypeAsString(void) const;
        bool  hasArguments(void) const;
        size_t  countOfArguments(void) const;
        SportsStatsArgumentArrayJSON *  elementOfArguments(size_t element_num);
        const SportsStatsArgumentArrayJSON *  elementOfArguments(size_t element_num) const;
        std::vector< SportsStatsArgumentArrayJSON * >  getArguments(void);
        const std::vector< SportsStatsArgumentArrayJSON * >  getArguments(void) const;

        virtual size_t extraTypeStatRequestsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeStatRequestsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeStatRequestsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeStatRequestsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeStatRequestsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeStatRequestsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setTeamOrPlayer(SportsTeamOrPlayerJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTeamOrPlayer)
              {
                storeTeamOrPlayer->remove_reference();
              }
            flagHasTeamOrPlayer = true;
            storeTeamOrPlayer = new_value;
          }
        void setTeamOrPlayer(SportsTeamOrPlayerJSON::TypeValue new_value)
          {
            setTeamOrPlayer(new SportsTeamOrPlayerJSON(new_value));
          }
        void unsetTeamOrPlayer(void)
          {
            if (flagHasTeamOrPlayer)
              {
                storeTeamOrPlayer->remove_reference();
              }
            flagHasTeamOrPlayer = false;
          }
        void setStatisticType(SportsStatsTypeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStatisticType)
              {
                storeStatisticType->remove_reference();
              }
            flagHasStatisticType = true;
            storeStatisticType = new_value;
          }
        void setStatisticType(SportsStatsTypeJSON::TypeValue new_value)
          {
            setStatisticType(new SportsStatsTypeJSON(new_value));
          }
        void setStatisticType(const char *chars)
          {
            SportsStatsTypeJSON::TypeValueKnownValues known = SportsStatsTypeJSON::stringToValue(chars);
            SportsStatsTypeJSON::TypeValue new_value;
            if (known == SportsStatsTypeJSON::Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setStatisticType(new_value);
          }
        void setStatisticType(std::string the_string)
          {
            setStatisticType(the_string.c_str());
          }
        void unsetStatisticType(void)
          {
            if (flagHasStatisticType)
              {
                storeStatisticType->remove_reference();
              }
            flagHasStatisticType = false;
          }
        void initArguments(void)
          {
            if (flagHasArguments)
              {
                for (size_t num2 = 0; num2 < storeArguments.size(); ++num2)
                  {
                    storeArguments[num2]->remove_reference();
                  }
              }
            flagHasArguments = true;
            storeArguments.clear();
          }
        void appendArguments(SportsStatsArgumentArrayJSON * to_append)
          {
            if (!flagHasArguments)
              {
                flagHasArguments = true;
                storeArguments.clear();
              }
            assert(flagHasArguments);
            to_append->add_reference();
            storeArguments.push_back(to_append);
          }
        void unsetArguments(void)
          {
            if (flagHasArguments)
              {
                for (size_t num3 = 0; num3 < storeArguments.size(); ++num3)
                  {
                    storeArguments[num3]->remove_reference();
                  }
              }
            flagHasArguments = false;
            storeArguments.clear();
          }

        virtual void extraTypeStatRequestsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeStatRequestsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeStatRequestsLookup(key);
            if (old_field == NULL)
              {
                extraTypeStatRequestsAppendPair(key, new_component);
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
            assert(flagHasTeamOrPlayer);
            handler->start_pair("TeamOrPlayer");
            storeTeamOrPlayer->write_as_json(handler);
            assert(flagHasStatisticType);
            handler->start_pair("StatisticType");
            storeStatisticType->write_as_json(handler);
            if (flagHasArguments)
              {
                handler->start_pair("Arguments");
                assert(storeArguments.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeArguments.size(); ++num1)
                  {
                    storeArguments[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTeamOrPlayer()))
              {
                return "When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.";
              }
            if (!(hasStatisticType()))
              {
                return "When parsing the object for %what%, the \"StatisticType\" field was missing.";
              }
            return NULL;
          }

        static TypeStatRequestsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeStatRequestsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeStatRequestsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStatRequestsJSON>, TypeStatRequestsJSON *, bool> generator("Type TypeStatRequests", ignore_extras);
                parse_json_value(text, "Text for TypeStatRequestsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeStatRequestsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeStatRequestsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeStatRequestsJSON>, TypeStatRequestsJSON *, bool> generator("Type TypeStatRequests", ignore_extras);
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
            JSONHoldingGenerator<SportsTeamOrPlayerJSON::Generator, RCHandle<SportsTeamOrPlayerJSON>, SportsTeamOrPlayerJSON *, bool > fieldGeneratorTeamOrPlayer;
            JSONHoldingGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorStatisticType;
            JSONHoldingArrayGenerator<SportsStatsArgumentArrayJSON::Generator, RCHandle<SportsStatsArgumentArrayJSON>, SportsStatsArgumentArrayJSON *, bool > fieldGeneratorArguments;
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
                TypeStatRequestsJSON *result = new TypeStatRequestsJSON();
                assert(result != NULL);
                RCHandle<TypeStatRequestsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeStatRequestsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeStatRequestsJSON *result)
              {
                if (fieldGeneratorTeamOrPlayer.have_value)
                  {
                    result->setTeamOrPlayer(fieldGeneratorTeamOrPlayer.value.referenced());
                    fieldGeneratorTeamOrPlayer.have_value = false;
                  }
                else if (!(result->hasTeamOrPlayer()))
                  {
                    error("When parsing the object for %what%, the \"TeamOrPlayer\" field was missing.");
                  }
                if (fieldGeneratorStatisticType.have_value)
                  {
                    result->setStatisticType(fieldGeneratorStatisticType.value.referenced());
                    fieldGeneratorStatisticType.have_value = false;
                  }
                else if (!(result->hasStatisticType()))
                  {
                    error("When parsing the object for %what%, the \"StatisticType\" field was missing.");
                  }
                if (fieldGeneratorArguments.have_value)
                  {
                    result->initArguments();
                    size_t count = fieldGeneratorArguments.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendArguments(fieldGeneratorArguments.value[num].referenced());
                      }
                    fieldGeneratorArguments.value.clear();
                    fieldGeneratorArguments.have_value = false;
                  }
              }
            virtual void handle_result(TypeStatRequestsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "rguments") == 0)
                            return &fieldGeneratorArguments;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tatisticType") == 0)
                            return &fieldGeneratorStatisticType;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "eamOrPlayer") == 0)
                            return &fieldGeneratorTeamOrPlayer;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTeamOrPlayer("field \"TeamOrPlayer\" of the TypeStatRequests class", ignore_extras), fieldGeneratorStatisticType("field \"StatisticType\" of the TypeStatRequests class", ignore_extras), fieldGeneratorArguments("field \"Arguments\" of the TypeStatRequests class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeStatRequests class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTeamOrPlayer.reset();
                fieldGeneratorStatisticType.reset();
                fieldGeneratorArguments.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasStatRequests;
    std::vector< TypeStatRequestsJSON * > storeStatRequests;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStatsQueryStateJSON(const SportsStatsQueryStateJSON &);
    SportsStatsQueryStateJSON & operator=(const SportsStatsQueryStateJSON &other);

    void  fromJSONStatRequests(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsQueryStateJSON(void);
    virtual ~SportsStatsQueryStateJSON(void);
    bool  hasStatRequests(void) const;
    size_t  countOfStatRequests(void) const;
    TypeStatRequestsJSON *  elementOfStatRequests(size_t element_num);
    const TypeStatRequestsJSON *  elementOfStatRequests(size_t element_num) const;
    std::vector< TypeStatRequestsJSON * >  getStatRequests(void);
    const std::vector< TypeStatRequestsJSON * >  getStatRequests(void) const;

    virtual size_t extraSportsStatsQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStatsQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStatsQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStatsQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStatsQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStatsQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initStatRequests(void)
      {
        if (flagHasStatRequests)
          {
            for (size_t num5 = 0; num5 < storeStatRequests.size(); ++num5)
              {
                storeStatRequests[num5]->remove_reference();
              }
          }
        flagHasStatRequests = true;
        storeStatRequests.clear();
      }
    void appendStatRequests(TypeStatRequestsJSON * to_append)
      {
        if (!flagHasStatRequests)
          {
            flagHasStatRequests = true;
            storeStatRequests.clear();
          }
        assert(flagHasStatRequests);
        to_append->add_reference();
        storeStatRequests.push_back(to_append);
      }
    void unsetStatRequests(void)
      {
        if (flagHasStatRequests)
          {
            for (size_t num6 = 0; num6 < storeStatRequests.size(); ++num6)
              {
                storeStatRequests[num6]->remove_reference();
              }
          }
        flagHasStatRequests = false;
        storeStatRequests.clear();
      }

    virtual void extraSportsStatsQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStatsQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStatsQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsStatsQueryStateAppendPair(key, new_component);
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
        if (flagHasStatRequests)
          {
            handler->start_pair("StatRequests");
            assert(storeStatRequests.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeStatRequests.size(); ++num1)
              {
                storeStatRequests[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsStatsQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryStateJSON>, SportsStatsQueryStateJSON *, bool> generator("Type SportsStatsQueryState", ignore_extras);
            parse_json_value(text, "Text for SportsStatsQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsQueryStateJSON>, SportsStatsQueryStateJSON *, bool> generator("Type SportsStatsQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeStatRequestsJSON::Generator, RCHandle<TypeStatRequestsJSON>, TypeStatRequestsJSON *, bool > fieldGeneratorStatRequests;
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
            SportsStatsQueryStateJSON *result = new SportsStatsQueryStateJSON();
            assert(result != NULL);
            RCHandle<SportsStatsQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStatsQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStatsQueryStateJSON *result)
          {
            if (fieldGeneratorStatRequests.have_value)
              {
                result->initStatRequests();
                size_t count = fieldGeneratorStatRequests.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendStatRequests(fieldGeneratorStatRequests.value[num].referenced());
                  }
                fieldGeneratorStatRequests.value.clear();
                fieldGeneratorStatRequests.have_value = false;
              }
          }
        virtual void handle_result(SportsStatsQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "StatRequests") == 0)
                return &fieldGeneratorStatRequests;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStatRequests("field \"StatRequests\" of the SportsStatsQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStatsQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStatRequests.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTATSQUERYSTATEJSON_H */
