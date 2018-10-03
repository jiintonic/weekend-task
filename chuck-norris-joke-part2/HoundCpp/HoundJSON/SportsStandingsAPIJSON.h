/* file "SportsStandingsAPIJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTANDINGSAPIJSON_H
#define SPORTSSTANDINGSAPIJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsStandingsDataJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStandingsAPIJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      public:
        class TypeDivisionsJSON : public ReferenceCounted
          {
          public:
            class TypeTeamsJSON : public ReferenceCounted
              {
              public:
                class TypeTeamJSON : public ReferenceCounted
                  {
                  private:
                    bool flagHasID;
                    std::string storeID;
                    bool flagHasAlias;
                    std::string storeAlias;
                    bool flagHasName;
                    std::string storeName;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypeTeamJSON(const TypeTeamJSON &);
                    TypeTeamJSON & operator=(const TypeTeamJSON &other);

                    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypeTeamJSON(void);
                    virtual ~TypeTeamJSON(void);
                    bool  hasID(void) const;
                    std::string  getID(void);
                    const std::string  getID(void) const;
                    bool  hasAlias(void) const;
                    std::string  getAlias(void);
                    const std::string  getAlias(void) const;
                    bool  hasName(void) const;
                    std::string  getName(void);
                    const std::string  getName(void) const;

                    virtual size_t extraTypeTeamComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypeTeamComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypeTeamComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypeTeamComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypeTeamLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypeTeamLookup(const char *field_name) const
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
                    void setAlias(std::string new_value)
                      {
                        flagHasAlias = true;
                        storeAlias = new_value;
                      }
                    void unsetAlias(void)
                      {
                        flagHasAlias = false;
                      }
                    void setName(std::string new_value)
                      {
                        flagHasName = true;
                        storeName = new_value;
                      }
                    void unsetName(void)
                      {
                        flagHasName = false;
                      }

                    virtual void extraTypeTeamAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypeTeamSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypeTeamLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypeTeamAppendPair(key, new_component);
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
                        if (flagHasAlias)
                          {
                            handler->start_pair("Alias");
                            handler->string_value(storeAlias);
                          }
                        if (flagHasName)
                          {
                            handler->start_pair("Name");
                            handler->string_value(storeName);
                          }
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        if (!(hasID()))
                          {
                            return "When parsing the object for %what%, the \"ID\" field was missing.";
                          }
                        return NULL;
                      }

                    static TypeTeamJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypeTeamJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypeTeamJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeTeamJSON>, TypeTeamJSON *, bool> generator("Type TypeTeam", ignore_extras);
                            parse_json_value(text, "Text for TypeTeamJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypeTeamJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypeTeamJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeTeamJSON>, TypeTeamJSON *, bool> generator("Type TypeTeam", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlias;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
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
                            TypeTeamJSON *result = new TypeTeamJSON();
                            assert(result != NULL);
                            RCHandle<TypeTeamJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypeTeamAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypeTeamJSON *result)
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
                            if (fieldGeneratorAlias.have_value)
                              {
                                result->setAlias(fieldGeneratorAlias.value);
                                fieldGeneratorAlias.have_value = false;
                              }
                            if (fieldGeneratorName.have_value)
                              {
                                result->setName(fieldGeneratorName.value);
                                fieldGeneratorName.have_value = false;
                              }
                          }
                        virtual void handle_result(TypeTeamJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[1]), "lias") == 0)
                                        return &fieldGeneratorAlias;
                                    break;
                                case 'I':
                                    if (strcmp(&(field_name[1]), "D") == 0)
                                        return &fieldGeneratorID;
                                    break;
                                case 'N':
                                    if (strcmp(&(field_name[1]), "ame") == 0)
                                        return &fieldGeneratorName;
                                    break;
                                default:
                                    break;
                              }
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypeTeam class"), fieldGeneratorAlias("field \"Alias\" of the TypeTeam class"), fieldGeneratorName("field \"Name\" of the TypeTeam class"), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the TypeTeam class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorID.reset();
                            fieldGeneratorAlias.reset();
                            fieldGeneratorName.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };

              private:
                bool flagHasTeam;
                TypeTeamJSON * storeTeam;
                bool flagHasStandingsData;
                SportsStandingsDataJSON * storeStandingsData;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypeTeamsJSON(const TypeTeamsJSON &);
                TypeTeamsJSON & operator=(const TypeTeamsJSON &other);

                void  fromJSONTeam(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONStandingsData(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypeTeamsJSON(void);
                virtual ~TypeTeamsJSON(void);
                bool  hasTeam(void) const;
                TypeTeamJSON *  getTeam(void);
                const TypeTeamJSON *  getTeam(void) const;
                bool  hasStandingsData(void) const;
                SportsStandingsDataJSON *  getStandingsData(void);
                const SportsStandingsDataJSON *  getStandingsData(void) const;

                virtual size_t extraTypeTeamsComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypeTeamsComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypeTeamsComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypeTeamsComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypeTeamsLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypeTeamsLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setTeam(TypeTeamJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHasTeam)
                      {
                        storeTeam->remove_reference();
                      }
                    flagHasTeam = true;
                    storeTeam = new_value;
                  }
                void unsetTeam(void)
                  {
                    if (flagHasTeam)
                      {
                        storeTeam->remove_reference();
                      }
                    flagHasTeam = false;
                  }
                void setStandingsData(SportsStandingsDataJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHasStandingsData)
                      {
                        storeStandingsData->remove_reference();
                      }
                    flagHasStandingsData = true;
                    storeStandingsData = new_value;
                  }
                void unsetStandingsData(void)
                  {
                    if (flagHasStandingsData)
                      {
                        storeStandingsData->remove_reference();
                      }
                    flagHasStandingsData = false;
                  }

                virtual void extraTypeTeamsAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypeTeamsSetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypeTeamsLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypeTeamsAppendPair(key, new_component);
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
                    assert(flagHasTeam);
                    handler->start_pair("Team");
                    storeTeam->write_as_json(handler);
                    assert(flagHasStandingsData);
                    handler->start_pair("StandingsData");
                    storeStandingsData->write_as_json(handler);
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasTeam()))
                      {
                        return "When parsing the object for %what%, the \"Team\" field was missing.";
                      }
                    if (!(hasStandingsData()))
                      {
                        return "When parsing the object for %what%, the \"StandingsData\" field was missing.";
                      }
                    return NULL;
                  }

                static TypeTeamsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypeTeamsJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypeTeamsJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
                        parse_json_value(text, "Text for TypeTeamsJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypeTeamsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypeTeamsJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool> generator("Type TypeTeams", ignore_extras);
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
                    JSONHoldingGenerator<TypeTeamJSON::Generator, RCHandle<TypeTeamJSON>, TypeTeamJSON *, bool > fieldGeneratorTeam;
                    JSONHoldingGenerator<SportsStandingsDataJSON::Generator, RCHandle<SportsStandingsDataJSON>, SportsStandingsDataJSON *, bool > fieldGeneratorStandingsData;
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
                        TypeTeamsJSON *result = new TypeTeamsJSON();
                        assert(result != NULL);
                        RCHandle<TypeTeamsJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypeTeamsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypeTeamsJSON *result)
                      {
                        if (fieldGeneratorTeam.have_value)
                          {
                            result->setTeam(fieldGeneratorTeam.value.referenced());
                            fieldGeneratorTeam.have_value = false;
                          }
                        else if (!(result->hasTeam()))
                          {
                            error("When parsing the object for %what%, the \"Team\" field was missing.");
                          }
                        if (fieldGeneratorStandingsData.have_value)
                          {
                            result->setStandingsData(fieldGeneratorStandingsData.value.referenced());
                            fieldGeneratorStandingsData.have_value = false;
                          }
                        else if (!(result->hasStandingsData()))
                          {
                            error("When parsing the object for %what%, the \"StandingsData\" field was missing.");
                          }
                      }
                    virtual void handle_result(TypeTeamsJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'S':
                                if (strcmp(&(field_name[1]), "tandingsData") == 0)
                                    return &fieldGeneratorStandingsData;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[1]), "eam") == 0)
                                    return &fieldGeneratorTeam;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorTeam("field \"Team\" of the TypeTeams class", ignore_extras), fieldGeneratorStandingsData("field \"StandingsData\" of the TypeTeams class", ignore_extras), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the TypeTeams class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorTeam.reset();
                        fieldGeneratorStandingsData.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHasDivision;
            std::string storeDivision;
            bool flagHasTeams;
            std::vector< TypeTeamsJSON * > storeTeams;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeDivisionsJSON(const TypeDivisionsJSON &);
            TypeDivisionsJSON & operator=(const TypeDivisionsJSON &other);

            void  fromJSONDivision(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeDivisionsJSON(void);
            virtual ~TypeDivisionsJSON(void);
            bool  hasDivision(void) const;
            std::string  getDivision(void);
            const std::string  getDivision(void) const;
            bool  hasTeams(void) const;
            size_t  countOfTeams(void) const;
            TypeTeamsJSON *  elementOfTeams(size_t element_num);
            const TypeTeamsJSON *  elementOfTeams(size_t element_num) const;
            std::vector< TypeTeamsJSON * >  getTeams(void);
            const std::vector< TypeTeamsJSON * >  getTeams(void) const;

            virtual size_t extraTypeDivisionsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeDivisionsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeDivisionsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeDivisionsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeDivisionsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeDivisionsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setDivision(std::string new_value)
              {
                flagHasDivision = true;
                storeDivision = new_value;
              }
            void unsetDivision(void)
              {
                flagHasDivision = false;
              }
            void initTeams(void)
              {
                if (flagHasTeams)
                  {
                    for (size_t num2 = 0; num2 < storeTeams.size(); ++num2)
                      {
                        storeTeams[num2]->remove_reference();
                      }
                  }
                flagHasTeams = true;
                storeTeams.clear();
              }
            void appendTeams(TypeTeamsJSON * to_append)
              {
                if (!flagHasTeams)
                  {
                    flagHasTeams = true;
                    storeTeams.clear();
                  }
                assert(flagHasTeams);
                to_append->add_reference();
                storeTeams.push_back(to_append);
              }
            void unsetTeams(void)
              {
                if (flagHasTeams)
                  {
                    for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
                      {
                        storeTeams[num3]->remove_reference();
                      }
                  }
                flagHasTeams = false;
                storeTeams.clear();
              }

            virtual void extraTypeDivisionsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeDivisionsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeDivisionsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeDivisionsAppendPair(key, new_component);
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
                assert(flagHasDivision);
                handler->start_pair("Division");
                handler->string_value(storeDivision);
                assert(flagHasTeams);
                handler->start_pair("Teams");
                assert(storeTeams.size() >= 1);
                handler->start_array();
                for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
                  {
                    storeTeams[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasDivision()))
                  {
                    return "When parsing the object for %what%, the \"Division\" field was missing.";
                  }
                if (!(hasTeams()))
                  {
                    return "When parsing the object for %what%, the \"Teams\" field was missing.";
                  }
                return NULL;
              }

            static TypeDivisionsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeDivisionsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeDivisionsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
                    parse_json_value(text, "Text for TypeDivisionsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeDivisionsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeDivisionsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool> generator("Type TypeDivisions", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDivision;
                JSONHoldingArrayGenerator<TypeTeamsJSON::Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool > fieldGeneratorTeams;
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
                    TypeDivisionsJSON *result = new TypeDivisionsJSON();
                    assert(result != NULL);
                    RCHandle<TypeDivisionsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeDivisionsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeDivisionsJSON *result)
                  {
                    if (fieldGeneratorDivision.have_value)
                      {
                        result->setDivision(fieldGeneratorDivision.value);
                        fieldGeneratorDivision.have_value = false;
                      }
                    else if (!(result->hasDivision()))
                      {
                        error("When parsing the object for %what%, the \"Division\" field was missing.");
                      }
                    if (fieldGeneratorTeams.have_value)
                      {
                        result->initTeams();
                        size_t count = fieldGeneratorTeams.value.size();
                        for (size_t num = 0; num < count; ++num)
                          {
                            result->appendTeams(fieldGeneratorTeams.value[num].referenced());
                          }
                        fieldGeneratorTeams.value.clear();
                        fieldGeneratorTeams.have_value = false;
                      }
                    else if (!(result->hasTeams()))
                      {
                        error("When parsing the object for %what%, the \"Teams\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeDivisionsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'D':
                            if (strcmp(&(field_name[1]), "ivision") == 0)
                                return &fieldGeneratorDivision;
                            break;
                        case 'T':
                            if (strcmp(&(field_name[1]), "eams") == 0)
                                return &fieldGeneratorTeams;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorDivision("field \"Division\" of the TypeDivisions class"), fieldGeneratorTeams("field \"Teams\" of the TypeDivisions class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeDivisions class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorDivision.reset();
                    fieldGeneratorTeams.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasYear;
        OInteger storeYear;
        bool flagHasLeague;
        std::string storeLeague;
        bool flagHasTournament;
        std::string storeTournament;
        bool flagHasDivisionParent;
        SportsLeagueDivisionJSON * storeDivisionParent;
        bool flagHasWildCard;
        bool storeWildCard;
        bool flagHasConference;
        bool storeConference;
        bool flagHasDivisional;
        bool storeDivisional;
        bool flagHasDivisions;
        std::vector< TypeDivisionsJSON * > storeDivisions;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTournament(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDivisionParent(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWildCard(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONConference(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDivisional(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDivisions(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasYear(void) const;
        OInteger  getYear(void);
        const OInteger  getYear(void) const;
        bool  hasLeague(void) const;
        std::string  getLeague(void);
        const std::string  getLeague(void) const;
        bool  hasTournament(void) const;
        std::string  getTournament(void);
        const std::string  getTournament(void) const;
        bool  hasDivisionParent(void) const;
        SportsLeagueDivisionJSON *  getDivisionParent(void);
        const SportsLeagueDivisionJSON *  getDivisionParent(void) const;
        SportsLeagueDivisionJSON::TypeValue  getDivisionParentValue(void);
        const SportsLeagueDivisionJSON::TypeValue  getDivisionParentValue(void) const;
        const char * getDivisionParentAsChars(void) const;
        std::string  getDivisionParentAsString(void) const;
        bool  hasWildCard(void) const;
        bool  getWildCard(void);
        const bool  getWildCard(void) const;
        bool  hasConference(void) const;
        bool  getConference(void);
        const bool  getConference(void) const;
        bool  hasDivisional(void) const;
        bool  getDivisional(void);
        const bool  getDivisional(void) const;
        bool  hasDivisions(void) const;
        size_t  countOfDivisions(void) const;
        TypeDivisionsJSON *  elementOfDivisions(size_t element_num);
        const TypeDivisionsJSON *  elementOfDivisions(size_t element_num) const;
        std::vector< TypeDivisionsJSON * >  getDivisions(void);
        const std::vector< TypeDivisionsJSON * >  getDivisions(void) const;

        virtual size_t extraTypeValueComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeValueComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeValueComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeValueComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeValueLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeValueLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setYear(OInteger new_value)
          {
            flagHasYear = true;
            if (new_value < 0)
                throw("The value for field Year of TypeValueJSON is less than the lower bound (0) for that field.");
            storeYear = new_value;
          }
        void unsetYear(void)
          {
            flagHasYear = false;
          }
        void setLeague(std::string new_value)
          {
            flagHasLeague = true;
            storeLeague = new_value;
          }
        void unsetLeague(void)
          {
            flagHasLeague = false;
          }
        void setTournament(std::string new_value)
          {
            flagHasTournament = true;
            storeTournament = new_value;
          }
        void unsetTournament(void)
          {
            flagHasTournament = false;
          }
        void setDivisionParent(SportsLeagueDivisionJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasDivisionParent)
              {
                storeDivisionParent->remove_reference();
              }
            flagHasDivisionParent = true;
            storeDivisionParent = new_value;
          }
        void setDivisionParent(SportsLeagueDivisionJSON::TypeValue new_value)
          {
            setDivisionParent(new SportsLeagueDivisionJSON(new_value));
          }
        void setDivisionParent(const char *chars)
          {
            SportsLeagueDivisionJSON::TypeValueKnownValues known = SportsLeagueDivisionJSON::stringToValue(chars);
            SportsLeagueDivisionJSON::TypeValue new_value;
            if (known == SportsLeagueDivisionJSON::Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setDivisionParent(new_value);
          }
        void setDivisionParent(std::string the_string)
          {
            setDivisionParent(the_string.c_str());
          }
        void unsetDivisionParent(void)
          {
            if (flagHasDivisionParent)
              {
                storeDivisionParent->remove_reference();
              }
            flagHasDivisionParent = false;
          }
        void setWildCard(bool new_value)
          {
            flagHasWildCard = true;
            storeWildCard = new_value;
          }
        void unsetWildCard(void)
          {
            flagHasWildCard = false;
          }
        void setConference(bool new_value)
          {
            flagHasConference = true;
            storeConference = new_value;
          }
        void unsetConference(void)
          {
            flagHasConference = false;
          }
        void setDivisional(bool new_value)
          {
            flagHasDivisional = true;
            storeDivisional = new_value;
          }
        void unsetDivisional(void)
          {
            flagHasDivisional = false;
          }
        void initDivisions(void)
          {
            if (flagHasDivisions)
              {
                for (size_t num5 = 0; num5 < storeDivisions.size(); ++num5)
                  {
                    storeDivisions[num5]->remove_reference();
                  }
              }
            flagHasDivisions = true;
            storeDivisions.clear();
          }
        void appendDivisions(TypeDivisionsJSON * to_append)
          {
            if (!flagHasDivisions)
              {
                flagHasDivisions = true;
                storeDivisions.clear();
              }
            assert(flagHasDivisions);
            to_append->add_reference();
            storeDivisions.push_back(to_append);
          }
        void unsetDivisions(void)
          {
            if (flagHasDivisions)
              {
                for (size_t num6 = 0; num6 < storeDivisions.size(); ++num6)
                  {
                    storeDivisions[num6]->remove_reference();
                  }
              }
            flagHasDivisions = false;
            storeDivisions.clear();
          }

        virtual void extraTypeValueAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeValueSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeValueLookup(key);
            if (old_field == NULL)
              {
                extraTypeValueAppendPair(key, new_component);
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
            assert(flagHasYear);
            handler->start_pair("Year");
            handler->number_value(storeYear.get_o_integer());
            assert(flagHasLeague);
            handler->start_pair("League");
            handler->string_value(storeLeague);
            if (flagHasTournament)
              {
                handler->start_pair("Tournament");
                handler->string_value(storeTournament);
              }
            if (flagHasDivisionParent)
              {
                handler->start_pair("DivisionParent");
                storeDivisionParent->write_as_json(handler);
              }
            if (flagHasWildCard)
              {
                handler->start_pair("WildCard");
                handler->boolean_value(storeWildCard);
              }
            if (flagHasConference)
              {
                handler->start_pair("Conference");
                handler->boolean_value(storeConference);
              }
            if (flagHasDivisional)
              {
                handler->start_pair("Divisional");
                handler->boolean_value(storeDivisional);
              }
            assert(flagHasDivisions);
            handler->start_pair("Divisions");
            assert(storeDivisions.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDivisions.size(); ++num1)
              {
                storeDivisions[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasYear()))
              {
                return "When parsing the object for %what%, the \"Year\" field was missing.";
              }
            if (!(hasLeague()))
              {
                return "When parsing the object for %what%, the \"League\" field was missing.";
              }
            if (!(hasDivisions()))
              {
                return "When parsing the object for %what%, the \"Divisions\" field was missing.";
              }
            return NULL;
          }

        static TypeValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeValueJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
                parse_json_value(text, "Text for TypeValueJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeValueJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool> generator("Type TypeValue", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLeague;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTournament;
            JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorDivisionParent;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWildCard;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorConference;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDivisional;
            JSONHoldingArrayGenerator<TypeDivisionsJSON::Generator, RCHandle<TypeDivisionsJSON>, TypeDivisionsJSON *, bool > fieldGeneratorDivisions;
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
                TypeValueJSON *result = new TypeValueJSON();
                assert(result != NULL);
                RCHandle<TypeValueJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeValueJSON *result)
              {
                if (fieldGeneratorYear.have_value)
                  {
                    result->setYear(fieldGeneratorYear.value);
                    fieldGeneratorYear.have_value = false;
                  }
                else if (!(result->hasYear()))
                  {
                    error("When parsing the object for %what%, the \"Year\" field was missing.");
                  }
                if (fieldGeneratorLeague.have_value)
                  {
                    result->setLeague(fieldGeneratorLeague.value);
                    fieldGeneratorLeague.have_value = false;
                  }
                else if (!(result->hasLeague()))
                  {
                    error("When parsing the object for %what%, the \"League\" field was missing.");
                  }
                if (fieldGeneratorTournament.have_value)
                  {
                    result->setTournament(fieldGeneratorTournament.value);
                    fieldGeneratorTournament.have_value = false;
                  }
                if (fieldGeneratorDivisionParent.have_value)
                  {
                    result->setDivisionParent(fieldGeneratorDivisionParent.value.referenced());
                    fieldGeneratorDivisionParent.have_value = false;
                  }
                if (fieldGeneratorWildCard.have_value)
                  {
                    result->setWildCard(fieldGeneratorWildCard.value);
                    fieldGeneratorWildCard.have_value = false;
                  }
                if (fieldGeneratorConference.have_value)
                  {
                    result->setConference(fieldGeneratorConference.value);
                    fieldGeneratorConference.have_value = false;
                  }
                if (fieldGeneratorDivisional.have_value)
                  {
                    result->setDivisional(fieldGeneratorDivisional.value);
                    fieldGeneratorDivisional.have_value = false;
                  }
                if (fieldGeneratorDivisions.have_value)
                  {
                    result->initDivisions();
                    size_t count = fieldGeneratorDivisions.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendDivisions(fieldGeneratorDivisions.value[num].referenced());
                      }
                    fieldGeneratorDivisions.value.clear();
                    fieldGeneratorDivisions.have_value = false;
                  }
                else if (!(result->hasDivisions()))
                  {
                    error("When parsing the object for %what%, the \"Divisions\" field was missing.");
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "onference") == 0)
                            return &fieldGeneratorConference;
                        break;
                    case 'D':
                        if (strncmp(&(field_name[1]), "ivision", 7) == 0)
                          {
                            switch ((unsigned char)(field_name[8]))
                              {
                                case 'P':
                                    if (strcmp(&(field_name[9]), "arent") == 0)
                                        return &fieldGeneratorDivisionParent;
                                    break;
                                case 'a':
                                    if (strcmp(&(field_name[9]), "l") == 0)
                                        return &fieldGeneratorDivisional;
                                    break;
                                case 's':
                                    if (field_name[9] == 0)
                                        return &fieldGeneratorDivisions;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "eague") == 0)
                            return &fieldGeneratorLeague;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ournament") == 0)
                            return &fieldGeneratorTournament;
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "ildCard") == 0)
                            return &fieldGeneratorWildCard;
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
            Generator(bool ignore_extras = false) : fieldGeneratorYear("field \"Year\" of the TypeValue class"), fieldGeneratorLeague("field \"League\" of the TypeValue class"), fieldGeneratorTournament("field \"Tournament\" of the TypeValue class"), fieldGeneratorDivisionParent("field \"DivisionParent\" of the TypeValue class", ignore_extras), fieldGeneratorWildCard("field \"WildCard\" of the TypeValue class"), fieldGeneratorConference("field \"Conference\" of the TypeValue class"), fieldGeneratorDivisional("field \"Divisional\" of the TypeValue class"), fieldGeneratorDivisions("field \"Divisions\" of the TypeValue class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeValue class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorYear.reset();
                fieldGeneratorLeague.reset();
                fieldGeneratorTournament.reset();
                fieldGeneratorDivisionParent.reset();
                fieldGeneratorWildCard.reset();
                fieldGeneratorConference.reset();
                fieldGeneratorDivisional.reset();
                fieldGeneratorDivisions.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    SportsStandingsAPIJSON(const SportsStandingsAPIJSON &);
    SportsStandingsAPIJSON & operator=(const SportsStandingsAPIJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStandingsAPIJSON(void);
    virtual ~SportsStandingsAPIJSON(void);
    bool  hasValue(void) const;
    size_t  countOfValue(void) const;
    TypeValueJSON *  elementOfValue(size_t element_num);
    const TypeValueJSON *  elementOfValue(size_t element_num) const;
    std::vector< TypeValueJSON * >  getValue(void);
    const std::vector< TypeValueJSON * >  getValue(void) const;


    void initValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num8 = 0; num8 < storeValue.size(); ++num8)
              {
                storeValue[num8]->remove_reference();
              }
          }
        flagHasValue = true;
        storeValue.clear();
      }
    void appendValue(TypeValueJSON * to_append)
      {
        if (!flagHasValue)
          {
            flagHasValue = true;
            storeValue.clear();
          }
        assert(flagHasValue);
        to_append->add_reference();
        storeValue.push_back(to_append);
      }
    void unsetValue(void)
      {
        if (flagHasValue)
          {
            for (size_t num9 = 0; num9 < storeValue.size(); ++num9)
              {
                storeValue[num9]->remove_reference();
              }
          }
        flagHasValue = false;
        storeValue.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_array();
        for (size_t num1 = 0; num1 < storeValue.size(); ++num1)
          {
            storeValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }

    static SportsStandingsAPIJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStandingsAPIJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStandingsAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsAPIJSON>, SportsStandingsAPIJSON *, bool> generator("Type SportsStandingsAPI", ignore_extras);
            parse_json_value(text, "Text for SportsStandingsAPIJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStandingsAPIJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStandingsAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStandingsAPIJSON>, SportsStandingsAPIJSON *, bool> generator("Type SportsStandingsAPI", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >
      {
      protected:
        void finish(void)
          {
            assert(have_value);
            SportsStandingsAPIJSON *result = new SportsStandingsAPIJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsStandingsAPIJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type SportsStandingsAPI", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSSTANDINGSAPIJSON_H */
