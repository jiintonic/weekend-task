/* file "SportsLeagueLeadersAPIJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSLEAGUELEADERSAPIJSON_H
#define SPORTSLEAGUELEADERSAPIJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SportsLeagueDivisionJSON.h"
#include "SportsStatsTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsLeagueLeadersAPIJSON : public ReferenceCounted
  {
  public:
    class TypeValueJSON : public ReferenceCounted
      {
      public:
        enum TypeQualifierKnownValues
          {
            Qualifier_Goaltending,
            Qualifier_Offense,
            Qualifier__none
          };
        struct TypeQualifier
          {
            bool in_known_list;
            std::string string_value;
            TypeQualifierKnownValues list_value;

            TypeQualifier(void);
            TypeQualifier(const TypeQualifier &other);
            TypeQualifier(TypeQualifierKnownValues other);
            bool  operator==(const TypeQualifier &other) const;
            bool  operator!=(const TypeQualifier &other) const;
            bool  operator<(const TypeQualifier &other) const;
            bool  operator>(const TypeQualifier &other) const;
            bool  operator>=(const TypeQualifier &other) const;
            bool  operator<=(const TypeQualifier &other) const;

          };

        static TypeQualifierKnownValues  stringToQualifier(const char *chars);
        static const char * stringFromQualifier(TypeQualifierKnownValues the_enum);
        class TypeStatsJSON : public ReferenceCounted
          {
          public:
            class TypeTeamsJSON : public ReferenceCounted
              {
              private:
                bool flagHasTeamName;
                std::string storeTeamName;
                bool flagHasAlias;
                std::string storeAlias;
                bool flagHasID;
                std::string storeID;
                bool flagHasRank;
                OInteger storeRank;
                bool flagHasValue;
                double storeValue;
                std::string textStoreValue;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypeTeamsJSON(const TypeTeamsJSON &);
                TypeTeamsJSON & operator=(const TypeTeamsJSON &other);

                void  fromJSONTeamName(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypeTeamsJSON(void);
                virtual ~TypeTeamsJSON(void);
                bool  hasTeamName(void) const;
                std::string  getTeamName(void);
                const std::string  getTeamName(void) const;
                bool  hasAlias(void) const;
                std::string  getAlias(void);
                const std::string  getAlias(void) const;
                bool  hasID(void) const;
                std::string  getID(void);
                const std::string  getID(void) const;
                bool  hasRank(void) const;
                OInteger  getRank(void);
                const OInteger  getRank(void) const;
                bool  hasValue(void) const;
                double  getValue(void);
                const double  getValue(void) const;
                std::string  getValueAsText(void) const;

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

                void setTeamName(std::string new_value)
                  {
                    flagHasTeamName = true;
                    storeTeamName = new_value;
                  }
                void unsetTeamName(void)
                  {
                    flagHasTeamName = false;
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
                void setID(std::string new_value)
                  {
                    flagHasID = true;
                    storeID = new_value;
                  }
                void unsetID(void)
                  {
                    flagHasID = false;
                  }
                void setRank(OInteger new_value)
                  {
                    flagHasRank = true;
                    if (new_value < 1)
                        throw("The value for field Rank of TypeTeamsJSON is less than the lower bound (1) for that field.");
                    storeRank = new_value;
                  }
                void unsetRank(void)
                  {
                    flagHasRank = false;
                  }
                void setValue(double new_value)
                  {
                    flagHasValue = true;
                    storeValue = new_value;
                    textStoreValue = "";
                  }
                void setValueText(std::string new_value)
                  {
                    flagHasValue = true;
                    if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                        throw("The text value for field Value of TypeTeamsJSON is not a valid number.");
                    textStoreValue = new_value;
                  }
                void unsetValue(void)
                  {
                    flagHasValue = false;
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
                    assert(flagHasTeamName);
                    handler->start_pair("TeamName");
                    handler->string_value(storeTeamName);
                    assert(flagHasAlias);
                    handler->start_pair("Alias");
                    handler->string_value(storeAlias);
                    assert(flagHasID);
                    handler->start_pair("ID");
                    handler->string_value(storeID);
                    assert(flagHasRank);
                    handler->start_pair("Rank");
                    handler->number_value(storeRank.get_o_integer());
                    if (flagHasValue)
                      {
                        handler->start_pair("Value");
                        if (textStoreValue != "")
                            handler->number_value(textStoreValue.c_str());
                        else if (((double)(long int)storeValue) == storeValue)
                            handler->number_value((long int)storeValue);
                        else
                            handler->number_value(storeValue);
                      }
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasTeamName()))
                      {
                        return "When parsing the object for %what%, the \"TeamName\" field was missing.";
                      }
                    if (!(hasAlias()))
                      {
                        return "When parsing the object for %what%, the \"Alias\" field was missing.";
                      }
                    if (!(hasID()))
                      {
                        return "When parsing the object for %what%, the \"ID\" field was missing.";
                      }
                    if (!(hasRank()))
                      {
                        return "When parsing the object for %what%, the \"Rank\" field was missing.";
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
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTeamName;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlias;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
                    static char lowerBoundRank[];
                    JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
                    JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
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
                        if (fieldGeneratorTeamName.have_value)
                          {
                            result->setTeamName(fieldGeneratorTeamName.value);
                            fieldGeneratorTeamName.have_value = false;
                          }
                        else if (!(result->hasTeamName()))
                          {
                            error("When parsing the object for %what%, the \"TeamName\" field was missing.");
                          }
                        if (fieldGeneratorAlias.have_value)
                          {
                            result->setAlias(fieldGeneratorAlias.value);
                            fieldGeneratorAlias.have_value = false;
                          }
                        else if (!(result->hasAlias()))
                          {
                            error("When parsing the object for %what%, the \"Alias\" field was missing.");
                          }
                        if (fieldGeneratorID.have_value)
                          {
                            result->setID(fieldGeneratorID.value);
                            fieldGeneratorID.have_value = false;
                          }
                        else if (!(result->hasID()))
                          {
                            error("When parsing the object for %what%, the \"ID\" field was missing.");
                          }
                        if (fieldGeneratorRank.have_value)
                          {
                            result->setRank(fieldGeneratorRank.value);
                            fieldGeneratorRank.have_value = false;
                          }
                        else if (!(result->hasRank()))
                          {
                            error("When parsing the object for %what%, the \"Rank\" field was missing.");
                          }
                        if (fieldGeneratorValue.have_value)
                          {
                            result->setValueText(fieldGeneratorValue.value);
                            fieldGeneratorValue.have_value = false;
                          }
                      }
                    virtual void handle_result(TypeTeamsJSON *new_result) = 0;
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
                            case 'R':
                                if (strcmp(&(field_name[1]), "ank") == 0)
                                    return &fieldGeneratorRank;
                                break;
                            case 'T':
                                if (strcmp(&(field_name[1]), "eamName") == 0)
                                    return &fieldGeneratorTeamName;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[1]), "alue") == 0)
                                    return &fieldGeneratorValue;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorTeamName("field \"TeamName\" of the TypeTeams class"), fieldGeneratorAlias("field \"Alias\" of the TypeTeams class"), fieldGeneratorID("field \"ID\" of the TypeTeams class"), fieldGeneratorRank("field \"Rank\" of the TypeTeams class"), fieldGeneratorValue("field \"Value\" of the TypeTeams class"), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the TypeTeams class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorTeamName.reset();
                        fieldGeneratorAlias.reset();
                        fieldGeneratorID.reset();
                        fieldGeneratorRank.reset();
                        fieldGeneratorValue.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };
            class TypePlayersJSON : public ReferenceCounted
              {
              private:
                bool flagHasID;
                std::string storeID;
                bool flagHasLastName;
                std::string storeLastName;
                bool flagHasFullName;
                std::string storeFullName;
                bool flagHasRank;
                OInteger storeRank;
                bool flagHasValue;
                double storeValue;
                std::string textStoreValue;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypePlayersJSON(const TypePlayersJSON &);
                TypePlayersJSON & operator=(const TypePlayersJSON &other);

                void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONLastName(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONFullName(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONRank(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypePlayersJSON(void);
                virtual ~TypePlayersJSON(void);
                bool  hasID(void) const;
                std::string  getID(void);
                const std::string  getID(void) const;
                bool  hasLastName(void) const;
                std::string  getLastName(void);
                const std::string  getLastName(void) const;
                bool  hasFullName(void) const;
                std::string  getFullName(void);
                const std::string  getFullName(void) const;
                bool  hasRank(void) const;
                OInteger  getRank(void);
                const OInteger  getRank(void) const;
                bool  hasValue(void) const;
                double  getValue(void);
                const double  getValue(void) const;
                std::string  getValueAsText(void) const;

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
                void setLastName(std::string new_value)
                  {
                    flagHasLastName = true;
                    storeLastName = new_value;
                  }
                void unsetLastName(void)
                  {
                    flagHasLastName = false;
                  }
                void setFullName(std::string new_value)
                  {
                    flagHasFullName = true;
                    storeFullName = new_value;
                  }
                void unsetFullName(void)
                  {
                    flagHasFullName = false;
                  }
                void setRank(OInteger new_value)
                  {
                    flagHasRank = true;
                    if (new_value < 1)
                        throw("The value for field Rank of TypePlayersJSON is less than the lower bound (1) for that field.");
                    storeRank = new_value;
                  }
                void unsetRank(void)
                  {
                    flagHasRank = false;
                  }
                void setValue(double new_value)
                  {
                    flagHasValue = true;
                    storeValue = new_value;
                    textStoreValue = "";
                  }
                void setValueText(std::string new_value)
                  {
                    flagHasValue = true;
                    if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                        throw("The text value for field Value of TypePlayersJSON is not a valid number.");
                    textStoreValue = new_value;
                  }
                void unsetValue(void)
                  {
                    flagHasValue = false;
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
                    assert(flagHasLastName);
                    handler->start_pair("LastName");
                    handler->string_value(storeLastName);
                    assert(flagHasFullName);
                    handler->start_pair("FullName");
                    handler->string_value(storeFullName);
                    assert(flagHasRank);
                    handler->start_pair("Rank");
                    handler->number_value(storeRank.get_o_integer());
                    if (flagHasValue)
                      {
                        handler->start_pair("Value");
                        if (textStoreValue != "")
                            handler->number_value(textStoreValue.c_str());
                        else if (((double)(long int)storeValue) == storeValue)
                            handler->number_value((long int)storeValue);
                        else
                            handler->number_value(storeValue);
                      }
                  }
                virtual const char *missing_field_error(void) const
                  {
                    if (!(hasID()))
                      {
                        return "When parsing the object for %what%, the \"ID\" field was missing.";
                      }
                    if (!(hasLastName()))
                      {
                        return "When parsing the object for %what%, the \"LastName\" field was missing.";
                      }
                    if (!(hasFullName()))
                      {
                        return "When parsing the object for %what%, the \"FullName\" field was missing.";
                      }
                    if (!(hasRank()))
                      {
                        return "When parsing the object for %what%, the \"Rank\" field was missing.";
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
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastName;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullName;
                    static char lowerBoundRank[];
                    JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRank>, OInteger, o_integer > fieldGeneratorRank;
                    JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
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
                        if (fieldGeneratorLastName.have_value)
                          {
                            result->setLastName(fieldGeneratorLastName.value);
                            fieldGeneratorLastName.have_value = false;
                          }
                        else if (!(result->hasLastName()))
                          {
                            error("When parsing the object for %what%, the \"LastName\" field was missing.");
                          }
                        if (fieldGeneratorFullName.have_value)
                          {
                            result->setFullName(fieldGeneratorFullName.value);
                            fieldGeneratorFullName.have_value = false;
                          }
                        else if (!(result->hasFullName()))
                          {
                            error("When parsing the object for %what%, the \"FullName\" field was missing.");
                          }
                        if (fieldGeneratorRank.have_value)
                          {
                            result->setRank(fieldGeneratorRank.value);
                            fieldGeneratorRank.have_value = false;
                          }
                        else if (!(result->hasRank()))
                          {
                            error("When parsing the object for %what%, the \"Rank\" field was missing.");
                          }
                        if (fieldGeneratorValue.have_value)
                          {
                            result->setValueText(fieldGeneratorValue.value);
                            fieldGeneratorValue.have_value = false;
                          }
                      }
                    virtual void handle_result(TypePlayersJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[1]), "ullName") == 0)
                                    return &fieldGeneratorFullName;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[1]), "D") == 0)
                                    return &fieldGeneratorID;
                                break;
                            case 'L':
                                if (strcmp(&(field_name[1]), "astName") == 0)
                                    return &fieldGeneratorLastName;
                                break;
                            case 'R':
                                if (strcmp(&(field_name[1]), "ank") == 0)
                                    return &fieldGeneratorRank;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[1]), "alue") == 0)
                                    return &fieldGeneratorValue;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypePlayers class"), fieldGeneratorLastName("field \"LastName\" of the TypePlayers class"), fieldGeneratorFullName("field \"FullName\" of the TypePlayers class"), fieldGeneratorRank("field \"Rank\" of the TypePlayers class"), fieldGeneratorValue("field \"Value\" of the TypePlayers class"), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the TypePlayers class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorID.reset();
                        fieldGeneratorLastName.reset();
                        fieldGeneratorFullName.reset();
                        fieldGeneratorRank.reset();
                        fieldGeneratorValue.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHasStatType;
            SportsStatsTypeJSON * storeStatType;
            bool flagHasTeams;
            std::vector< TypeTeamsJSON * > storeTeams;
            bool flagHasPlayers;
            std::vector< TypePlayersJSON * > storePlayers;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeStatsJSON(const TypeStatsJSON &);
            TypeStatsJSON & operator=(const TypeStatsJSON &other);

            void  fromJSONStatType(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONTeams(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPlayers(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeStatsJSON(void);
            virtual ~TypeStatsJSON(void);
            bool  hasStatType(void) const;
            SportsStatsTypeJSON *  getStatType(void);
            const SportsStatsTypeJSON *  getStatType(void) const;
            SportsStatsTypeJSON::TypeValue  getStatTypeValue(void);
            const SportsStatsTypeJSON::TypeValue  getStatTypeValue(void) const;
            const char * getStatTypeAsChars(void) const;
            std::string  getStatTypeAsString(void) const;
            bool  hasTeams(void) const;
            size_t  countOfTeams(void) const;
            TypeTeamsJSON *  elementOfTeams(size_t element_num);
            const TypeTeamsJSON *  elementOfTeams(size_t element_num) const;
            std::vector< TypeTeamsJSON * >  getTeams(void);
            const std::vector< TypeTeamsJSON * >  getTeams(void) const;
            bool  hasPlayers(void) const;
            size_t  countOfPlayers(void) const;
            TypePlayersJSON *  elementOfPlayers(size_t element_num);
            const TypePlayersJSON *  elementOfPlayers(size_t element_num) const;
            std::vector< TypePlayersJSON * >  getPlayers(void);
            const std::vector< TypePlayersJSON * >  getPlayers(void) const;

            virtual size_t extraTypeStatsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeStatsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeStatsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeStatsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeStatsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeStatsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setStatType(SportsStatsTypeJSON * new_value)
              {
                new_value->add_reference();
                if (flagHasStatType)
                  {
                    storeStatType->remove_reference();
                  }
                flagHasStatType = true;
                storeStatType = new_value;
              }
            void setStatType(SportsStatsTypeJSON::TypeValue new_value)
              {
                setStatType(new SportsStatsTypeJSON(new_value));
              }
            void setStatType(const char *chars)
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
                setStatType(new_value);
              }
            void setStatType(std::string the_string)
              {
                setStatType(the_string.c_str());
              }
            void unsetStatType(void)
              {
                if (flagHasStatType)
                  {
                    storeStatType->remove_reference();
                  }
                flagHasStatType = false;
              }
            void initTeams(void)
              {
                if (flagHasTeams)
                  {
                    for (size_t num3 = 0; num3 < storeTeams.size(); ++num3)
                      {
                        storeTeams[num3]->remove_reference();
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
                    for (size_t num4 = 0; num4 < storeTeams.size(); ++num4)
                      {
                        storeTeams[num4]->remove_reference();
                      }
                  }
                flagHasTeams = false;
                storeTeams.clear();
              }
            void initPlayers(void)
              {
                if (flagHasPlayers)
                  {
                    for (size_t num5 = 0; num5 < storePlayers.size(); ++num5)
                      {
                        storePlayers[num5]->remove_reference();
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
                    for (size_t num6 = 0; num6 < storePlayers.size(); ++num6)
                      {
                        storePlayers[num6]->remove_reference();
                      }
                  }
                flagHasPlayers = false;
                storePlayers.clear();
              }

            virtual void extraTypeStatsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeStatsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeStatsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeStatsAppendPair(key, new_component);
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
                assert(flagHasStatType);
                handler->start_pair("StatType");
                storeStatType->write_as_json(handler);
                if (flagHasTeams)
                  {
                    handler->start_pair("Teams");
                    handler->start_array();
                    for (size_t num1 = 0; num1 < storeTeams.size(); ++num1)
                      {
                        storeTeams[num1]->write_as_json(handler);
                      }
                    handler->finish_array();
                  }
                if (flagHasPlayers)
                  {
                    handler->start_pair("Players");
                    handler->start_array();
                    for (size_t num2 = 0; num2 < storePlayers.size(); ++num2)
                      {
                        storePlayers[num2]->write_as_json(handler);
                      }
                    handler->finish_array();
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasStatType()))
                  {
                    return "When parsing the object for %what%, the \"StatType\" field was missing.";
                  }
                return NULL;
              }

            static TypeStatsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeStatsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeStatsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
                    parse_json_value(text, "Text for TypeStatsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeStatsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeStatsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool> generator("Type TypeStats", ignore_extras);
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
                JSONHoldingGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorStatType;
                JSONHoldingArrayGenerator<TypeTeamsJSON::Generator, RCHandle<TypeTeamsJSON>, TypeTeamsJSON *, bool > fieldGeneratorTeams;
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
                    TypeStatsJSON *result = new TypeStatsJSON();
                    assert(result != NULL);
                    RCHandle<TypeStatsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeStatsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeStatsJSON *result)
                  {
                    if (fieldGeneratorStatType.have_value)
                      {
                        result->setStatType(fieldGeneratorStatType.value.referenced());
                        fieldGeneratorStatType.have_value = false;
                      }
                    else if (!(result->hasStatType()))
                      {
                        error("When parsing the object for %what%, the \"StatType\" field was missing.");
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
                virtual void handle_result(TypeStatsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'P':
                            if (strcmp(&(field_name[1]), "layers") == 0)
                                return &fieldGeneratorPlayers;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[1]), "tatType") == 0)
                                return &fieldGeneratorStatType;
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
                Generator(bool ignore_extras = false) : fieldGeneratorStatType("field \"StatType\" of the TypeStats class", ignore_extras), fieldGeneratorTeams("field \"Teams\" of the TypeStats class", ignore_extras), fieldGeneratorPlayers("field \"Players\" of the TypeStats class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeStats class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorStatType.reset();
                    fieldGeneratorTeams.reset();
                    fieldGeneratorPlayers.reset();
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
        bool flagHasLeagueDivision;
        SportsLeagueDivisionJSON * storeLeagueDivision;
        bool flagHasQualifier;
        TypeQualifier storeQualifier;
        bool flagHasStats;
        std::vector< TypeStatsJSON * > storeStats;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeValueJSON(const TypeValueJSON &);
        TypeValueJSON & operator=(const TypeValueJSON &other);

        void  fromJSONYear(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeague(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLeagueDivision(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONQualifier(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONStats(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeValueJSON(void);
        virtual ~TypeValueJSON(void);
        bool  hasYear(void) const;
        OInteger  getYear(void);
        const OInteger  getYear(void) const;
        bool  hasLeague(void) const;
        std::string  getLeague(void);
        const std::string  getLeague(void) const;
        bool  hasLeagueDivision(void) const;
        SportsLeagueDivisionJSON *  getLeagueDivision(void);
        const SportsLeagueDivisionJSON *  getLeagueDivision(void) const;
        SportsLeagueDivisionJSON::TypeValue  getLeagueDivisionValue(void);
        const SportsLeagueDivisionJSON::TypeValue  getLeagueDivisionValue(void) const;
        const char * getLeagueDivisionAsChars(void) const;
        std::string  getLeagueDivisionAsString(void) const;
        bool  hasQualifier(void) const;
        TypeQualifier  getQualifier(void);
        const TypeQualifier  getQualifier(void) const;
        const char * getQualifierAsChars(void) const;
        std::string  getQualifierAsString(void) const;
        bool  hasStats(void) const;
        size_t  countOfStats(void) const;
        TypeStatsJSON *  elementOfStats(size_t element_num);
        const TypeStatsJSON *  elementOfStats(size_t element_num) const;
        std::vector< TypeStatsJSON * >  getStats(void);
        const std::vector< TypeStatsJSON * >  getStats(void) const;

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
        void setLeagueDivision(SportsLeagueDivisionJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasLeagueDivision)
              {
                storeLeagueDivision->remove_reference();
              }
            flagHasLeagueDivision = true;
            storeLeagueDivision = new_value;
          }
        void setLeagueDivision(SportsLeagueDivisionJSON::TypeValue new_value)
          {
            setLeagueDivision(new SportsLeagueDivisionJSON(new_value));
          }
        void setLeagueDivision(const char *chars)
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
            setLeagueDivision(new_value);
          }
        void setLeagueDivision(std::string the_string)
          {
            setLeagueDivision(the_string.c_str());
          }
        void unsetLeagueDivision(void)
          {
            if (flagHasLeagueDivision)
              {
                storeLeagueDivision->remove_reference();
              }
            flagHasLeagueDivision = false;
          }
        void setQualifier(TypeQualifier new_value)
          {
            flagHasQualifier = true;
            storeQualifier = new_value;
          }
        void setQualifier(const char *chars)
          {
            TypeQualifierKnownValues known = stringToQualifier(chars);
            TypeQualifier new_value;
            if (known == Qualifier__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setQualifier(new_value);
          }
        void setQualifier(std::string the_string)
          {
            setQualifier(the_string.c_str());
          }
        void setQualifier(TypeQualifierKnownValues new_value)
          {
            TypeQualifier new_full_value;
            assert(new_value != Qualifier__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setQualifier(new_full_value);
          }
        void unsetQualifier(void)
          {
            flagHasQualifier = false;
          }
        void initStats(void)
          {
            if (flagHasStats)
              {
                for (size_t num8 = 0; num8 < storeStats.size(); ++num8)
                  {
                    storeStats[num8]->remove_reference();
                  }
              }
            flagHasStats = true;
            storeStats.clear();
          }
        void appendStats(TypeStatsJSON * to_append)
          {
            if (!flagHasStats)
              {
                flagHasStats = true;
                storeStats.clear();
              }
            assert(flagHasStats);
            to_append->add_reference();
            storeStats.push_back(to_append);
          }
        void unsetStats(void)
          {
            if (flagHasStats)
              {
                for (size_t num9 = 0; num9 < storeStats.size(); ++num9)
                  {
                    storeStats[num9]->remove_reference();
                  }
              }
            flagHasStats = false;
            storeStats.clear();
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
            if (flagHasLeagueDivision)
              {
                handler->start_pair("LeagueDivision");
                storeLeagueDivision->write_as_json(handler);
              }
            if (flagHasQualifier)
              {
                handler->start_pair("Qualifier");
                if (storeQualifier.in_known_list)
                  {
                    switch (storeQualifier.list_value)
                      {
                        case Qualifier_Goaltending:
                            handler->string_value("Goaltending");
                            break;
                        case Qualifier_Offense:
                            handler->string_value("Offense");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeQualifier.string_value);
                  }
              }
            assert(flagHasStats);
            handler->start_pair("Stats");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeStats.size(); ++num1)
              {
                storeStats[num1]->write_as_json(handler);
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
            if (!(hasStats()))
              {
                return "When parsing the object for %what%, the \"Stats\" field was missing.";
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
            JSONHoldingGenerator<SportsLeagueDivisionJSON::Generator, RCHandle<SportsLeagueDivisionJSON>, SportsLeagueDivisionJSON *, bool > fieldGeneratorLeagueDivision;
        class FieldGeneratorQualifier : public JSONStringGenerator
              {
              protected:
                FieldGeneratorQualifier(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorQualifier(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeQualifierKnownValues known = stringToQualifier(result);
                    TypeQualifier new_value;
                    if (known == Qualifier__none)
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
                virtual void handle_result(TypeQualifier result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorQualifier, TypeQualifier, TypeQualifier > fieldGeneratorQualifier;
            JSONHoldingArrayGenerator<TypeStatsJSON::Generator, RCHandle<TypeStatsJSON>, TypeStatsJSON *, bool > fieldGeneratorStats;
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
                if (fieldGeneratorLeagueDivision.have_value)
                  {
                    result->setLeagueDivision(fieldGeneratorLeagueDivision.value.referenced());
                    fieldGeneratorLeagueDivision.have_value = false;
                  }
                if (fieldGeneratorQualifier.have_value)
                  {
                    result->setQualifier(fieldGeneratorQualifier.value);
                    fieldGeneratorQualifier.have_value = false;
                  }
                if (fieldGeneratorStats.have_value)
                  {
                    result->initStats();
                    size_t count = fieldGeneratorStats.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendStats(fieldGeneratorStats.value[num].referenced());
                      }
                    fieldGeneratorStats.value.clear();
                    fieldGeneratorStats.have_value = false;
                  }
                else if (!(result->hasStats()))
                  {
                    error("When parsing the object for %what%, the \"Stats\" field was missing.");
                  }
              }
            virtual void handle_result(TypeValueJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strncmp(&(field_name[1]), "eague", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 0:
                                    return &fieldGeneratorLeague;
                                case 'D':
                                    if (strcmp(&(field_name[7]), "ivision") == 0)
                                        return &fieldGeneratorLeagueDivision;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'Q':
                        if (strcmp(&(field_name[1]), "ualifier") == 0)
                            return &fieldGeneratorQualifier;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tats") == 0)
                            return &fieldGeneratorStats;
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
            Generator(bool ignore_extras = false) : fieldGeneratorYear("field \"Year\" of the TypeValue class"), fieldGeneratorLeague("field \"League\" of the TypeValue class"), fieldGeneratorLeagueDivision("field \"LeagueDivision\" of the TypeValue class", ignore_extras), fieldGeneratorQualifier("field \"Qualifier\" of the TypeValue class"), fieldGeneratorStats("field \"Stats\" of the TypeValue class", ignore_extras), unknownFieldGenerator(ignore_extras)
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
                fieldGeneratorLeagueDivision.reset();
                fieldGeneratorQualifier.reset();
                fieldGeneratorStats.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasValue;
    std::vector< TypeValueJSON * > storeValue;

    SportsLeagueLeadersAPIJSON(const SportsLeagueLeadersAPIJSON &);
    SportsLeagueLeadersAPIJSON & operator=(const SportsLeagueLeadersAPIJSON &other);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsLeagueLeadersAPIJSON(void);
    virtual ~SportsLeagueLeadersAPIJSON(void);
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
            for (size_t num11 = 0; num11 < storeValue.size(); ++num11)
              {
                storeValue[num11]->remove_reference();
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
            for (size_t num12 = 0; num12 < storeValue.size(); ++num12)
              {
                storeValue[num12]->remove_reference();
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

    static SportsLeagueLeadersAPIJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsLeagueLeadersAPIJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsLeagueLeadersAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersAPIJSON>, SportsLeagueLeadersAPIJSON *, bool> generator("Type SportsLeagueLeadersAPI", ignore_extras);
            parse_json_value(text, "Text for SportsLeagueLeadersAPIJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsLeagueLeadersAPIJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsLeagueLeadersAPIJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsLeagueLeadersAPIJSON>, SportsLeagueLeadersAPIJSON *, bool> generator("Type SportsLeagueLeadersAPI", ignore_extras);
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
            SportsLeagueLeadersAPIJSON *result = new SportsLeagueLeadersAPIJSON();
            result->initValue();
            size_t count = value.size();
            for (size_t num = 0; num < count; ++num)
              {
                result->appendValue(value[num].referenced());
              }
            handle_result(result);
          }
        virtual void handle_result(SportsLeagueLeadersAPIJSON *new_result) = 0;

      public:
        Generator(bool ignore_extras = false) : JSONHoldingArrayGenerator<TypeValueJSON::Generator, RCHandle<TypeValueJSON>, TypeValueJSON *, bool >("Type SportsLeagueLeadersAPI", ignore_extras)
          {
          }
        ~Generator(void)  { }
      };
  };

#endif /* SPORTSLEAGUELEADERSAPIJSON_H */
