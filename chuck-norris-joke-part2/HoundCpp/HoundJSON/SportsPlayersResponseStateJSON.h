/* file "SportsPlayersResponseStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSPLAYERSRESPONSESTATEJSON_H
#define SPORTSPLAYERSRESPONSESTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "SportsLeagueCodeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsPlayersResponseStateJSON : public ReferenceCounted
  {
  public:
    class TypePlayersJSON : public ReferenceCounted
      {
      private:
        bool flagHasID;
        std::string storeID;
        bool flagHasLeague;
        SportsLeagueCodeJSON * storeLeague;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePlayersJSON(const TypePlayersJSON &);
        TypePlayersJSON & operator=(const TypePlayersJSON &other);

        void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePlayersJSON(void);
        virtual ~TypePlayersJSON(void);
        bool  hasID(void) const;
        std::string  getID(void);
        const std::string  getID(void) const;
        bool  hasLeague(void) const;
        SportsLeagueCodeJSON *  getLeague(void);
        const SportsLeagueCodeJSON *  getLeague(void) const;
        SportsLeagueCodeJSON::TypeValue  getLeagueValue(void);
        const SportsLeagueCodeJSON::TypeValue  getLeagueValue(void) const;
        const char * getLeagueAsChars(void) const;
        std::string  getLeagueAsString(void) const;

        virtual size_t extraTypePlayersComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePlayersComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePlayersComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePlayersComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePlayersLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePlayersLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
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

        virtual void extraTypePlayersAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePlayersSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePlayersLookup(key);
            if (old_field == NULL)
              {
                extraTypePlayersAppendPair(key, new_component);
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
            assert(flagHasID);
            handler->start_pair("ID");
            handler->string_value(storeID);
            assert(flagHasLeague);
            handler->start_pair("League");
            storeLeague->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasID()))
              {
                return "When parsing the object for %what%, the \"ID\" field was missing.";
              }
            if (!(hasLeague()))
              {
                return "When parsing the object for %what%, the \"League\" field was missing.";
              }
            return NULL;
          }

        static TypePlayersJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePlayersJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePlayersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
                parse_json_value(text, "Text for TypePlayersJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePlayersJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePlayersJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool> generator("Type TypePlayers", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
            JSONHoldingGenerator<SportsLeagueCodeJSON::Generator, RCHandle<SportsLeagueCodeJSON>, SportsLeagueCodeJSON *, bool > fieldGeneratorLeague;
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
                TypePlayersJSON *result = new TypePlayersJSON();
                assert(result != NULL);
                RCHandle<TypePlayersJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePlayersAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePlayersJSON *result)
              {
                if (fieldGeneratorID.have_value)
                  {
                    result->setID(fieldGeneratorID.value);
                    fieldGeneratorID.have_value = false;
                  }
                else if (!(result->hasID()))
                  {
                    error("When parsing the object for %what%, the \"ID\" field was missing.");
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
              }
            virtual void handle_result(TypePlayersJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'I':
                        if (strcmp(&(field_name[1]), "D") == 0)
                            return &fieldGeneratorID;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "eague") == 0)
                            return &fieldGeneratorLeague;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypePlayers class"), fieldGeneratorLeague("field \"League\" of the TypePlayers class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePlayers class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorID.reset();
                fieldGeneratorLeague.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasPlayers;
    std::vector< TypePlayersJSON * > storePlayers;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsPlayersResponseStateJSON(const SportsPlayersResponseStateJSON &);
    SportsPlayersResponseStateJSON & operator=(const SportsPlayersResponseStateJSON &other);

    void  fromJSONPlayers(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsPlayersResponseStateJSON(void);
    virtual ~SportsPlayersResponseStateJSON(void);
    bool  hasPlayers(void) const;
    size_t  countOfPlayers(void) const;
    TypePlayersJSON *  elementOfPlayers(size_t element_num);
    const TypePlayersJSON *  elementOfPlayers(size_t element_num) const;
    std::vector< TypePlayersJSON * >  getPlayers(void);
    const std::vector< TypePlayersJSON * >  getPlayers(void) const;

    virtual size_t extraSportsPlayersResponseStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsPlayersResponseStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsPlayersResponseStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsPlayersResponseStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsPlayersResponseStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsPlayersResponseStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initPlayers(void)
      {
        if (flagHasPlayers)
          {
            for (size_t num2 = 0; num2 < storePlayers.size(); ++num2)
              {
                storePlayers[num2]->remove_reference();
              }
          }
        flagHasPlayers = true;
        storePlayers.clear();
      }
    void appendPlayers(TypePlayersJSON * to_append)
      {
        if (!flagHasPlayers)
          {
            flagHasPlayers = true;
            storePlayers.clear();
          }
        assert(flagHasPlayers);
        to_append->add_reference();
        storePlayers.push_back(to_append);
      }
    void unsetPlayers(void)
      {
        if (flagHasPlayers)
          {
            for (size_t num3 = 0; num3 < storePlayers.size(); ++num3)
              {
                storePlayers[num3]->remove_reference();
              }
          }
        flagHasPlayers = false;
        storePlayers.clear();
      }

    virtual void extraSportsPlayersResponseStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsPlayersResponseStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsPlayersResponseStateLookup(key);
        if (old_field == NULL)
          {
            extraSportsPlayersResponseStateAppendPair(key, new_component);
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
        if (flagHasPlayers)
          {
            handler->start_pair("Players");
            assert(storePlayers.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePlayers.size(); ++num1)
              {
                storePlayers[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsPlayersResponseStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsPlayersResponseStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsPlayersResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersResponseStateJSON>, SportsPlayersResponseStateJSON *, bool> generator("Type SportsPlayersResponseState", ignore_extras);
            parse_json_value(text, "Text for SportsPlayersResponseStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsPlayersResponseStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsPlayersResponseStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsPlayersResponseStateJSON>, SportsPlayersResponseStateJSON *, bool> generator("Type SportsPlayersResponseState", ignore_extras);
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
        JSONHoldingArrayGenerator<TypePlayersJSON::Generator, RCHandle<TypePlayersJSON>, TypePlayersJSON *, bool > fieldGeneratorPlayers;
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
            SportsPlayersResponseStateJSON *result = new SportsPlayersResponseStateJSON();
            assert(result != NULL);
            RCHandle<SportsPlayersResponseStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsPlayersResponseStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsPlayersResponseStateJSON *result)
          {
            if (fieldGeneratorPlayers.have_value)
              {
                result->initPlayers();
                size_t count = fieldGeneratorPlayers.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPlayers(fieldGeneratorPlayers.value[num].referenced());
                  }
                fieldGeneratorPlayers.value.clear();
                fieldGeneratorPlayers.have_value = false;
              }
          }
        virtual void handle_result(SportsPlayersResponseStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Players") == 0)
                return &fieldGeneratorPlayers;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPlayers("field \"Players\" of the SportsPlayersResponseState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsPlayersResponseState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPlayers.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSPLAYERSRESPONSESTATEJSON_H */
