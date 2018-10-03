/* file "SportsOlympicsAPIEventResultsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSAPIEVENTRESULTSJSON_H
#define SPORTSOLYMPICSAPIEVENTRESULTSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsAPIEventResultsJSON : public ReferenceCounted
  {
  public:
    class Typesport_event_resultsJSON : public ReferenceCounted
      {
      public:
        class Typesport_eventJSON : public ReferenceCounted
          {
          public:
            class TypetournamentJSON : public ReferenceCounted
              {
              public:
                class TypesportJSON : public ReferenceCounted
                  {
                  private:
                    bool flagHasid;
                    std::string storeid;
                    bool flagHasname;
                    std::string storename;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypesportJSON(const TypesportJSON &);
                    TypesportJSON & operator=(const TypesportJSON &other);

                    void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypesportJSON(void);
                    virtual ~TypesportJSON(void);
                    bool  hasid(void) const;
                    std::string  getid(void);
                    const std::string  getid(void) const;
                    bool  hasname(void) const;
                    std::string  getname(void);
                    const std::string  getname(void) const;

                    virtual size_t extraTypesportComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypesportComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypesportComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypesportComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypesportLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypesportLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setid(std::string new_value)
                      {
                        flagHasid = true;
                        storeid = new_value;
                      }
                    void unsetid(void)
                      {
                        flagHasid = false;
                      }
                    void setname(std::string new_value)
                      {
                        flagHasname = true;
                        storename = new_value;
                      }
                    void unsetname(void)
                      {
                        flagHasname = false;
                      }

                    virtual void extraTypesportAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypesportSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypesportLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypesportAppendPair(key, new_component);
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
                        if (flagHasid)
                          {
                            handler->start_pair("id");
                            handler->string_value(storeid);
                          }
                        if (flagHasname)
                          {
                            handler->start_pair("name");
                            handler->string_value(storename);
                          }
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        return NULL;
                      }

                    static TypesportJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypesportJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypesportJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypesportJSON>, TypesportJSON *, bool> generator("Type Typesport", ignore_extras);
                            parse_json_value(text, "Text for TypesportJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypesportJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypesportJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypesportJSON>, TypesportJSON *, bool> generator("Type Typesport", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
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
                            TypesportJSON *result = new TypesportJSON();
                            assert(result != NULL);
                            RCHandle<TypesportJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypesportAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypesportJSON *result)
                          {
                            if (fieldGeneratorid.have_value)
                              {
                                result->setid(fieldGeneratorid.value);
                                fieldGeneratorid.have_value = false;
                              }
                            if (fieldGeneratorname.have_value)
                              {
                                result->setname(fieldGeneratorname.value);
                                fieldGeneratorname.have_value = false;
                              }
                          }
                        virtual void handle_result(TypesportJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'i':
                                    if (strcmp(&(field_name[1]), "d") == 0)
                                        return &fieldGeneratorid;
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[1]), "ame") == 0)
                                        return &fieldGeneratorname;
                                    break;
                                default:
                                    break;
                              }
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typesport class"), fieldGeneratorname("field \"name\" of the Typesport class"), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typesport class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorid.reset();
                            fieldGeneratorname.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };
                class TypecategoryJSON : public ReferenceCounted
                  {
                  private:
                    bool flagHasid;
                    std::string storeid;
                    bool flagHasname;
                    std::string storename;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypecategoryJSON(const TypecategoryJSON &);
                    TypecategoryJSON & operator=(const TypecategoryJSON &other);

                    void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypecategoryJSON(void);
                    virtual ~TypecategoryJSON(void);
                    bool  hasid(void) const;
                    std::string  getid(void);
                    const std::string  getid(void) const;
                    bool  hasname(void) const;
                    std::string  getname(void);
                    const std::string  getname(void) const;

                    virtual size_t extraTypecategoryComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypecategoryComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypecategoryComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypecategoryComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypecategoryLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypecategoryLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setid(std::string new_value)
                      {
                        flagHasid = true;
                        storeid = new_value;
                      }
                    void unsetid(void)
                      {
                        flagHasid = false;
                      }
                    void setname(std::string new_value)
                      {
                        flagHasname = true;
                        storename = new_value;
                      }
                    void unsetname(void)
                      {
                        flagHasname = false;
                      }

                    virtual void extraTypecategoryAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypecategorySetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypecategoryLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypecategoryAppendPair(key, new_component);
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
                        if (flagHasid)
                          {
                            handler->start_pair("id");
                            handler->string_value(storeid);
                          }
                        if (flagHasname)
                          {
                            handler->start_pair("name");
                            handler->string_value(storename);
                          }
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        return NULL;
                      }

                    static TypecategoryJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypecategoryJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypecategoryJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypecategoryJSON>, TypecategoryJSON *, bool> generator("Type Typecategory", ignore_extras);
                            parse_json_value(text, "Text for TypecategoryJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypecategoryJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypecategoryJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypecategoryJSON>, TypecategoryJSON *, bool> generator("Type Typecategory", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
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
                            TypecategoryJSON *result = new TypecategoryJSON();
                            assert(result != NULL);
                            RCHandle<TypecategoryJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypecategoryAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypecategoryJSON *result)
                          {
                            if (fieldGeneratorid.have_value)
                              {
                                result->setid(fieldGeneratorid.value);
                                fieldGeneratorid.have_value = false;
                              }
                            if (fieldGeneratorname.have_value)
                              {
                                result->setname(fieldGeneratorname.value);
                                fieldGeneratorname.have_value = false;
                              }
                          }
                        virtual void handle_result(TypecategoryJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'i':
                                    if (strcmp(&(field_name[1]), "d") == 0)
                                        return &fieldGeneratorid;
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[1]), "ame") == 0)
                                        return &fieldGeneratorname;
                                    break;
                                default:
                                    break;
                              }
                            return NULL;
                          }

                      public:
                        Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typecategory class"), fieldGeneratorname("field \"name\" of the Typecategory class"), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typecategory class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorid.reset();
                            fieldGeneratorname.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };

              private:
                bool flagHassport;
                TypesportJSON * storesport;
                bool flagHascategory;
                TypecategoryJSON * storecategory;
                bool flagHasid;
                std::string storeid;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypetournamentJSON(const TypetournamentJSON &);
                TypetournamentJSON & operator=(const TypetournamentJSON &other);

                void  fromJSONsport(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONcategory(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypetournamentJSON(void);
                virtual ~TypetournamentJSON(void);
                bool  hassport(void) const;
                TypesportJSON *  getsport(void);
                const TypesportJSON *  getsport(void) const;
                bool  hascategory(void) const;
                TypecategoryJSON *  getcategory(void);
                const TypecategoryJSON *  getcategory(void) const;
                bool  hasid(void) const;
                std::string  getid(void);
                const std::string  getid(void) const;

                virtual size_t extraTypetournamentComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypetournamentComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypetournamentComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypetournamentComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypetournamentLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypetournamentLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setsport(TypesportJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHassport)
                      {
                        storesport->remove_reference();
                      }
                    flagHassport = true;
                    storesport = new_value;
                  }
                void unsetsport(void)
                  {
                    if (flagHassport)
                      {
                        storesport->remove_reference();
                      }
                    flagHassport = false;
                  }
                void setcategory(TypecategoryJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHascategory)
                      {
                        storecategory->remove_reference();
                      }
                    flagHascategory = true;
                    storecategory = new_value;
                  }
                void unsetcategory(void)
                  {
                    if (flagHascategory)
                      {
                        storecategory->remove_reference();
                      }
                    flagHascategory = false;
                  }
                void setid(std::string new_value)
                  {
                    flagHasid = true;
                    storeid = new_value;
                  }
                void unsetid(void)
                  {
                    flagHasid = false;
                  }

                virtual void extraTypetournamentAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypetournamentSetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypetournamentLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypetournamentAppendPair(key, new_component);
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
                    if (flagHassport)
                      {
                        handler->start_pair("sport");
                        storesport->write_as_json(handler);
                      }
                    if (flagHascategory)
                      {
                        handler->start_pair("category");
                        storecategory->write_as_json(handler);
                      }
                    if (flagHasid)
                      {
                        handler->start_pair("id");
                        handler->string_value(storeid);
                      }
                  }
                virtual const char *missing_field_error(void) const
                  {
                    return NULL;
                  }

                static TypetournamentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypetournamentJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypetournamentJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypetournamentJSON>, TypetournamentJSON *, bool> generator("Type Typetournament", ignore_extras);
                        parse_json_value(text, "Text for TypetournamentJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypetournamentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypetournamentJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypetournamentJSON>, TypetournamentJSON *, bool> generator("Type Typetournament", ignore_extras);
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
                    JSONHoldingGenerator<TypesportJSON::Generator, RCHandle<TypesportJSON>, TypesportJSON *, bool > fieldGeneratorsport;
                    JSONHoldingGenerator<TypecategoryJSON::Generator, RCHandle<TypecategoryJSON>, TypecategoryJSON *, bool > fieldGeneratorcategory;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
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
                        TypetournamentJSON *result = new TypetournamentJSON();
                        assert(result != NULL);
                        RCHandle<TypetournamentJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypetournamentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypetournamentJSON *result)
                      {
                        if (fieldGeneratorsport.have_value)
                          {
                            result->setsport(fieldGeneratorsport.value.referenced());
                            fieldGeneratorsport.have_value = false;
                          }
                        if (fieldGeneratorcategory.have_value)
                          {
                            result->setcategory(fieldGeneratorcategory.value.referenced());
                            fieldGeneratorcategory.have_value = false;
                          }
                        if (fieldGeneratorid.have_value)
                          {
                            result->setid(fieldGeneratorid.value);
                            fieldGeneratorid.have_value = false;
                          }
                      }
                    virtual void handle_result(TypetournamentJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'c':
                                if (strcmp(&(field_name[1]), "ategory") == 0)
                                    return &fieldGeneratorcategory;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[1]), "d") == 0)
                                    return &fieldGeneratorid;
                                break;
                            case 's':
                                if (strcmp(&(field_name[1]), "port") == 0)
                                    return &fieldGeneratorsport;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorsport("field \"sport\" of the Typetournament class", ignore_extras), fieldGeneratorcategory("field \"category\" of the Typetournament class", ignore_extras), fieldGeneratorid("field \"id\" of the Typetournament class"), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the Typetournament class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorsport.reset();
                        fieldGeneratorcategory.reset();
                        fieldGeneratorid.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHasid;
            std::string storeid;
            bool flagHasname;
            std::string storename;
            bool flagHasscheduled;
            std::string storescheduled;
            bool flagHastournament;
            TypetournamentJSON * storetournament;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            Typesport_eventJSON(const Typesport_eventJSON &);
            Typesport_eventJSON & operator=(const Typesport_eventJSON &other);

            void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONscheduled(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONtournament(JSONValue *json_value, bool ignore_extras = false);


          public:
            Typesport_eventJSON(void);
            virtual ~Typesport_eventJSON(void);
            bool  hasid(void) const;
            std::string  getid(void);
            const std::string  getid(void) const;
            bool  hasname(void) const;
            std::string  getname(void);
            const std::string  getname(void) const;
            bool  hasscheduled(void) const;
            std::string  getscheduled(void);
            const std::string  getscheduled(void) const;
            bool  hastournament(void) const;
            TypetournamentJSON *  gettournament(void);
            const TypetournamentJSON *  gettournament(void) const;

            virtual size_t extraTypesport_eventComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypesport_eventComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypesport_eventComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypesport_eventComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypesport_eventLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypesport_eventLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setid(std::string new_value)
              {
                flagHasid = true;
                storeid = new_value;
              }
            void unsetid(void)
              {
                flagHasid = false;
              }
            void setname(std::string new_value)
              {
                flagHasname = true;
                storename = new_value;
              }
            void unsetname(void)
              {
                flagHasname = false;
              }
            void setscheduled(std::string new_value)
              {
                flagHasscheduled = true;
                storescheduled = new_value;
              }
            void unsetscheduled(void)
              {
                flagHasscheduled = false;
              }
            void settournament(TypetournamentJSON * new_value)
              {
                new_value->add_reference();
                if (flagHastournament)
                  {
                    storetournament->remove_reference();
                  }
                flagHastournament = true;
                storetournament = new_value;
              }
            void unsettournament(void)
              {
                if (flagHastournament)
                  {
                    storetournament->remove_reference();
                  }
                flagHastournament = false;
              }

            virtual void extraTypesport_eventAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypesport_eventSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypesport_eventLookup(key);
                if (old_field == NULL)
                  {
                    extraTypesport_eventAppendPair(key, new_component);
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
                if (flagHasid)
                  {
                    handler->start_pair("id");
                    handler->string_value(storeid);
                  }
                if (flagHasname)
                  {
                    handler->start_pair("name");
                    handler->string_value(storename);
                  }
                if (flagHasscheduled)
                  {
                    handler->start_pair("scheduled");
                    handler->string_value(storescheduled);
                  }
                if (flagHastournament)
                  {
                    handler->start_pair("tournament");
                    storetournament->write_as_json(handler);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static Typesport_eventJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static Typesport_eventJSON *from_text(const char *text, bool ignore_extras = false)
              {
                Typesport_eventJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<Typesport_eventJSON>, Typesport_eventJSON *, bool> generator("Type Typesport_event", ignore_extras);
                    parse_json_value(text, "Text for Typesport_eventJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static Typesport_eventJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                Typesport_eventJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<Typesport_eventJSON>, Typesport_eventJSON *, bool> generator("Type Typesport_event", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorscheduled;
                JSONHoldingGenerator<TypetournamentJSON::Generator, RCHandle<TypetournamentJSON>, TypetournamentJSON *, bool > fieldGeneratortournament;
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
                    Typesport_eventJSON *result = new Typesport_eventJSON();
                    assert(result != NULL);
                    RCHandle<Typesport_eventJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypesport_eventAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(Typesport_eventJSON *result)
                  {
                    if (fieldGeneratorid.have_value)
                      {
                        result->setid(fieldGeneratorid.value);
                        fieldGeneratorid.have_value = false;
                      }
                    if (fieldGeneratorname.have_value)
                      {
                        result->setname(fieldGeneratorname.value);
                        fieldGeneratorname.have_value = false;
                      }
                    if (fieldGeneratorscheduled.have_value)
                      {
                        result->setscheduled(fieldGeneratorscheduled.value);
                        fieldGeneratorscheduled.have_value = false;
                      }
                    if (fieldGeneratortournament.have_value)
                      {
                        result->settournament(fieldGeneratortournament.value.referenced());
                        fieldGeneratortournament.have_value = false;
                      }
                  }
                virtual void handle_result(Typesport_eventJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[1]), "d") == 0)
                                return &fieldGeneratorid;
                            break;
                        case 'n':
                            if (strcmp(&(field_name[1]), "ame") == 0)
                                return &fieldGeneratorname;
                            break;
                        case 's':
                            if (strcmp(&(field_name[1]), "cheduled") == 0)
                                return &fieldGeneratorscheduled;
                            break;
                        case 't':
                            if (strcmp(&(field_name[1]), "ournament") == 0)
                                return &fieldGeneratortournament;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typesport_event class"), fieldGeneratorname("field \"name\" of the Typesport_event class"), fieldGeneratorscheduled("field \"scheduled\" of the Typesport_event class"), fieldGeneratortournament("field \"tournament\" of the Typesport_event class", ignore_extras), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typesport_event class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorid.reset();
                    fieldGeneratorname.reset();
                    fieldGeneratorscheduled.reset();
                    fieldGeneratortournament.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };
        class TyperesultsJSON : public ReferenceCounted
          {
          public:
            class TypecompetitorJSON : public ReferenceCounted
              {
              public:
                class TypeathleteJSON : public ReferenceCounted
                  {
                  private:
                    bool flagHasid;
                    std::string storeid;
                    bool flagHasname;
                    std::string storename;
                    bool flagHasnationality;
                    std::string storenationality;
                    bool flagHasioc_code;
                    std::string storeioc_code;
                    bool flagHasgender;
                    std::string storegender;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypeathleteJSON(const TypeathleteJSON &);
                    TypeathleteJSON & operator=(const TypeathleteJSON &other);

                    void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONnationality(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONioc_code(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONgender(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypeathleteJSON(void);
                    virtual ~TypeathleteJSON(void);
                    bool  hasid(void) const;
                    std::string  getid(void);
                    const std::string  getid(void) const;
                    bool  hasname(void) const;
                    std::string  getname(void);
                    const std::string  getname(void) const;
                    bool  hasnationality(void) const;
                    std::string  getnationality(void);
                    const std::string  getnationality(void) const;
                    bool  hasioc_code(void) const;
                    std::string  getioc_code(void);
                    const std::string  getioc_code(void) const;
                    bool  hasgender(void) const;
                    std::string  getgender(void);
                    const std::string  getgender(void) const;

                    virtual size_t extraTypeathleteComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypeathleteComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypeathleteComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypeathleteComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypeathleteLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypeathleteLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setid(std::string new_value)
                      {
                        flagHasid = true;
                        storeid = new_value;
                      }
                    void unsetid(void)
                      {
                        flagHasid = false;
                      }
                    void setname(std::string new_value)
                      {
                        flagHasname = true;
                        storename = new_value;
                      }
                    void unsetname(void)
                      {
                        flagHasname = false;
                      }
                    void setnationality(std::string new_value)
                      {
                        flagHasnationality = true;
                        storenationality = new_value;
                      }
                    void unsetnationality(void)
                      {
                        flagHasnationality = false;
                      }
                    void setioc_code(std::string new_value)
                      {
                        flagHasioc_code = true;
                        storeioc_code = new_value;
                      }
                    void unsetioc_code(void)
                      {
                        flagHasioc_code = false;
                      }
                    void setgender(std::string new_value)
                      {
                        flagHasgender = true;
                        storegender = new_value;
                      }
                    void unsetgender(void)
                      {
                        flagHasgender = false;
                      }

                    virtual void extraTypeathleteAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypeathleteSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypeathleteLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypeathleteAppendPair(key, new_component);
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
                        if (flagHasid)
                          {
                            handler->start_pair("id");
                            handler->string_value(storeid);
                          }
                        if (flagHasname)
                          {
                            handler->start_pair("name");
                            handler->string_value(storename);
                          }
                        if (flagHasnationality)
                          {
                            handler->start_pair("nationality");
                            handler->string_value(storenationality);
                          }
                        if (flagHasioc_code)
                          {
                            handler->start_pair("ioc_code");
                            handler->string_value(storeioc_code);
                          }
                        if (flagHasgender)
                          {
                            handler->start_pair("gender");
                            handler->string_value(storegender);
                          }
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        return NULL;
                      }

                    static TypeathleteJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypeathleteJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypeathleteJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeathleteJSON>, TypeathleteJSON *, bool> generator("Type Typeathlete", ignore_extras);
                            parse_json_value(text, "Text for TypeathleteJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypeathleteJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypeathleteJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeathleteJSON>, TypeathleteJSON *, bool> generator("Type Typeathlete", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratornationality;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorioc_code;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorgender;
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
                            TypeathleteJSON *result = new TypeathleteJSON();
                            assert(result != NULL);
                            RCHandle<TypeathleteJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypeathleteAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypeathleteJSON *result)
                          {
                            if (fieldGeneratorid.have_value)
                              {
                                result->setid(fieldGeneratorid.value);
                                fieldGeneratorid.have_value = false;
                              }
                            if (fieldGeneratorname.have_value)
                              {
                                result->setname(fieldGeneratorname.value);
                                fieldGeneratorname.have_value = false;
                              }
                            if (fieldGeneratornationality.have_value)
                              {
                                result->setnationality(fieldGeneratornationality.value);
                                fieldGeneratornationality.have_value = false;
                              }
                            if (fieldGeneratorioc_code.have_value)
                              {
                                result->setioc_code(fieldGeneratorioc_code.value);
                                fieldGeneratorioc_code.have_value = false;
                              }
                            if (fieldGeneratorgender.have_value)
                              {
                                result->setgender(fieldGeneratorgender.value);
                                fieldGeneratorgender.have_value = false;
                              }
                          }
                        virtual void handle_result(TypeathleteJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'g':
                                    if (strcmp(&(field_name[1]), "ender") == 0)
                                        return &fieldGeneratorgender;
                                    break;
                                case 'i':
                                    switch ((unsigned char)(field_name[1]))
                                      {
                                        case 'd':
                                            if (field_name[2] == 0)
                                                return &fieldGeneratorid;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[2]), "c_code") == 0)
                                                return &fieldGeneratorioc_code;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                                      {
                                        switch ((unsigned char)(field_name[2]))
                                          {
                                            case 'm':
                                                if (strcmp(&(field_name[3]), "e") == 0)
                                                    return &fieldGeneratorname;
                                                break;
                                            case 't':
                                                if (strcmp(&(field_name[3]), "ionality") == 0)
                                                    return &fieldGeneratornationality;
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
                        Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typeathlete class"), fieldGeneratorname("field \"name\" of the Typeathlete class"), fieldGeneratornationality("field \"nationality\" of the Typeathlete class"), fieldGeneratorioc_code("field \"ioc_code\" of the Typeathlete class"), fieldGeneratorgender("field \"gender\" of the Typeathlete class"), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typeathlete class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorid.reset();
                            fieldGeneratorname.reset();
                            fieldGeneratornationality.reset();
                            fieldGeneratorioc_code.reset();
                            fieldGeneratorgender.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };
                class TypeathletesJSON : public ReferenceCounted
                  {
                  private:
                    bool flagHasid;
                    std::string storeid;
                    bool flagHasname;
                    std::string storename;
                    bool flagHasnationality;
                    std::string storenationality;
                    bool flagHasioc_code;
                    std::string storeioc_code;
                    bool flagHasgender;
                    std::string storegender;
                    std::vector<std::string> extraKeys;
                    std::vector<JSONValue *> extraValues;
                    string_index *extraIndex;

                    TypeathletesJSON(const TypeathletesJSON &);
                    TypeathletesJSON & operator=(const TypeathletesJSON &other);

                    void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONnationality(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONioc_code(JSONValue *json_value, bool ignore_extras = false);

                    void  fromJSONgender(JSONValue *json_value, bool ignore_extras = false);


                  public:
                    TypeathletesJSON(void);
                    virtual ~TypeathletesJSON(void);
                    bool  hasid(void) const;
                    std::string  getid(void);
                    const std::string  getid(void) const;
                    bool  hasname(void) const;
                    std::string  getname(void);
                    const std::string  getname(void) const;
                    bool  hasnationality(void) const;
                    std::string  getnationality(void);
                    const std::string  getnationality(void) const;
                    bool  hasioc_code(void) const;
                    std::string  getioc_code(void);
                    const std::string  getioc_code(void) const;
                    bool  hasgender(void) const;
                    std::string  getgender(void);
                    const std::string  getgender(void) const;

                    virtual size_t extraTypeathletesComponentCount(void) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        return extraKeys.size();
                      }
                    virtual const char *extraTypeathletesComponentKey(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraKeys[component_num].c_str();
                      }
                    virtual JSONValue *extraTypeathletesComponentValue(size_t component_num)
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual const JSONValue *extraTypeathletesComponentValue(size_t component_num) const
                      {
                        assert(extraKeys.size() == extraValues.size());
                        assert(component_num < extraValues.size());
                        return extraValues[component_num];
                      }
                    virtual JSONValue *extraTypeathletesLookup(const char *field_name)
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }
                    virtual const JSONValue *extraTypeathletesLookup(const char *field_name) const
                      {
                        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                        if (result != NULL)
                            result->add_reference();
                        return result;
                      }

                    void setid(std::string new_value)
                      {
                        flagHasid = true;
                        storeid = new_value;
                      }
                    void unsetid(void)
                      {
                        flagHasid = false;
                      }
                    void setname(std::string new_value)
                      {
                        flagHasname = true;
                        storename = new_value;
                      }
                    void unsetname(void)
                      {
                        flagHasname = false;
                      }
                    void setnationality(std::string new_value)
                      {
                        flagHasnationality = true;
                        storenationality = new_value;
                      }
                    void unsetnationality(void)
                      {
                        flagHasnationality = false;
                      }
                    void setioc_code(std::string new_value)
                      {
                        flagHasioc_code = true;
                        storeioc_code = new_value;
                      }
                    void unsetioc_code(void)
                      {
                        flagHasioc_code = false;
                      }
                    void setgender(std::string new_value)
                      {
                        flagHasgender = true;
                        storegender = new_value;
                      }
                    void unsetgender(void)
                      {
                        flagHasgender = false;
                      }

                    virtual void extraTypeathletesAppendPair(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        assert(extraKeys.size() == extraValues.size());
                        extraKeys.push_back(key);
                        extraValues.push_back(new_component);
                        enter_into_string_index(extraIndex, key, new_component);
                        new_component->add_reference();
                      }
                    virtual void extraTypeathletesSetField(const char *key, JSONValue *new_component)
                      {
                        assert(key != NULL);
                        assert(new_component != NULL);

                        JSONValue *old_field = extraTypeathletesLookup(key);
                        if (old_field == NULL)
                          {
                            extraTypeathletesAppendPair(key, new_component);
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
                        if (flagHasid)
                          {
                            handler->start_pair("id");
                            handler->string_value(storeid);
                          }
                        if (flagHasname)
                          {
                            handler->start_pair("name");
                            handler->string_value(storename);
                          }
                        if (flagHasnationality)
                          {
                            handler->start_pair("nationality");
                            handler->string_value(storenationality);
                          }
                        if (flagHasioc_code)
                          {
                            handler->start_pair("ioc_code");
                            handler->string_value(storeioc_code);
                          }
                        if (flagHasgender)
                          {
                            handler->start_pair("gender");
                            handler->string_value(storegender);
                          }
                      }
                    virtual const char *missing_field_error(void) const
                      {
                        return NULL;
                      }

                    static TypeathletesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                    static TypeathletesJSON *from_text(const char *text, bool ignore_extras = false)
                      {
                        TypeathletesJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeathletesJSON>, TypeathletesJSON *, bool> generator("Type Typeathletes", ignore_extras);
                            parse_json_value(text, "Text for TypeathletesJSON", &generator);
                            assert(generator.have_value);
                            result = generator.value.referenced();
                            result->add_reference();
                          };
                        result->remove_reference_no_delete();
                        return result;
                      }
                    static TypeathletesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                      {
                        TypeathletesJSON *result;
                          {
                            JSONHoldingGenerator<Generator, RCHandle<TypeathletesJSON>, TypeathletesJSON *, bool> generator("Type Typeathletes", ignore_extras);
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
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratornationality;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorioc_code;
                        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorgender;
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
                            TypeathletesJSON *result = new TypeathletesJSON();
                            assert(result != NULL);
                            RCHandle<TypeathletesJSON> result_holder = result;
                            finish(result);
                            size_t extra_count = unknownFieldGenerator.field_names.size();
                            assert(extra_count == unknownFieldGenerator.field_values.size());
                            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                              {
                                result->extraTypeathletesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                              }
                            unknownFieldGenerator.field_names.clear();
                            unknownFieldGenerator.field_values.clear();
                            destroy_string_index(unknownFieldGenerator.index);
                        unknownFieldGenerator.index = create_string_index();
                            handle_result(result);
                          }
                        void finish(TypeathletesJSON *result)
                          {
                            if (fieldGeneratorid.have_value)
                              {
                                result->setid(fieldGeneratorid.value);
                                fieldGeneratorid.have_value = false;
                              }
                            if (fieldGeneratorname.have_value)
                              {
                                result->setname(fieldGeneratorname.value);
                                fieldGeneratorname.have_value = false;
                              }
                            if (fieldGeneratornationality.have_value)
                              {
                                result->setnationality(fieldGeneratornationality.value);
                                fieldGeneratornationality.have_value = false;
                              }
                            if (fieldGeneratorioc_code.have_value)
                              {
                                result->setioc_code(fieldGeneratorioc_code.value);
                                fieldGeneratorioc_code.have_value = false;
                              }
                            if (fieldGeneratorgender.have_value)
                              {
                                result->setgender(fieldGeneratorgender.value);
                                fieldGeneratorgender.have_value = false;
                              }
                          }
                        virtual void handle_result(TypeathletesJSON *new_result) = 0;
                        virtual JSONHandler *start_known_field(const char *field_name)
                          {
                            switch ((unsigned char)(field_name[0]))
                              {
                                case 'g':
                                    if (strcmp(&(field_name[1]), "ender") == 0)
                                        return &fieldGeneratorgender;
                                    break;
                                case 'i':
                                    switch ((unsigned char)(field_name[1]))
                                      {
                                        case 'd':
                                            if (field_name[2] == 0)
                                                return &fieldGeneratorid;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[2]), "c_code") == 0)
                                                return &fieldGeneratorioc_code;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'n':
                                    if (strncmp(&(field_name[1]), "a", 1) == 0)
                                      {
                                        switch ((unsigned char)(field_name[2]))
                                          {
                                            case 'm':
                                                if (strcmp(&(field_name[3]), "e") == 0)
                                                    return &fieldGeneratorname;
                                                break;
                                            case 't':
                                                if (strcmp(&(field_name[3]), "ionality") == 0)
                                                    return &fieldGeneratornationality;
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
                        Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typeathletes class"), fieldGeneratorname("field \"name\" of the Typeathletes class"), fieldGeneratornationality("field \"nationality\" of the Typeathletes class"), fieldGeneratorioc_code("field \"ioc_code\" of the Typeathletes class"), fieldGeneratorgender("field \"gender\" of the Typeathletes class"), unknownFieldGenerator(ignore_extras)
                          {
                            set_what("the Typeathletes class");
                          }
                        ~Generator(void)
                          {
                          }

                        void reset(void)
                          {
                            fieldGeneratorid.reset();
                            fieldGeneratorname.reset();
                            fieldGeneratornationality.reset();
                            fieldGeneratorioc_code.reset();
                            fieldGeneratorgender.reset();
                            JSONObjectGenerator::reset();
                            unknownFieldGenerator.reset();
                          }
                      };
                  };

              private:
                bool flagHasid;
                std::string storeid;
                bool flagHasname;
                std::string storename;
                bool flagHascountry_code;
                std::string storecountry_code;
                bool flagHasioc_code;
                std::string storeioc_code;
                bool flagHasathlete;
                TypeathleteJSON * storeathlete;
                bool flagHasathletes;
                std::vector< TypeathletesJSON * > storeathletes;
                std::vector<std::string> extraKeys;
                std::vector<JSONValue *> extraValues;
                string_index *extraIndex;

                TypecompetitorJSON(const TypecompetitorJSON &);
                TypecompetitorJSON & operator=(const TypecompetitorJSON &other);

                void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONcountry_code(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONioc_code(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONathlete(JSONValue *json_value, bool ignore_extras = false);

                void  fromJSONathletes(JSONValue *json_value, bool ignore_extras = false);


              public:
                TypecompetitorJSON(void);
                virtual ~TypecompetitorJSON(void);
                bool  hasid(void) const;
                std::string  getid(void);
                const std::string  getid(void) const;
                bool  hasname(void) const;
                std::string  getname(void);
                const std::string  getname(void) const;
                bool  hascountry_code(void) const;
                std::string  getcountry_code(void);
                const std::string  getcountry_code(void) const;
                bool  hasioc_code(void) const;
                std::string  getioc_code(void);
                const std::string  getioc_code(void) const;
                bool  hasathlete(void) const;
                TypeathleteJSON *  getathlete(void);
                const TypeathleteJSON *  getathlete(void) const;
                bool  hasathletes(void) const;
                size_t  countOfathletes(void) const;
                TypeathletesJSON *  elementOfathletes(size_t element_num);
                const TypeathletesJSON *  elementOfathletes(size_t element_num) const;
                std::vector< TypeathletesJSON * >  getathletes(void);
                const std::vector< TypeathletesJSON * >  getathletes(void) const;

                virtual size_t extraTypecompetitorComponentCount(void) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    return extraKeys.size();
                  }
                virtual const char *extraTypecompetitorComponentKey(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraKeys[component_num].c_str();
                  }
                virtual JSONValue *extraTypecompetitorComponentValue(size_t component_num)
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual const JSONValue *extraTypecompetitorComponentValue(size_t component_num) const
                  {
                    assert(extraKeys.size() == extraValues.size());
                    assert(component_num < extraValues.size());
                    return extraValues[component_num];
                  }
                virtual JSONValue *extraTypecompetitorLookup(const char *field_name)
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }
                virtual const JSONValue *extraTypecompetitorLookup(const char *field_name) const
                  {
                    JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                    if (result != NULL)
                        result->add_reference();
                    return result;
                  }

                void setid(std::string new_value)
                  {
                    flagHasid = true;
                    storeid = new_value;
                  }
                void unsetid(void)
                  {
                    flagHasid = false;
                  }
                void setname(std::string new_value)
                  {
                    flagHasname = true;
                    storename = new_value;
                  }
                void unsetname(void)
                  {
                    flagHasname = false;
                  }
                void setcountry_code(std::string new_value)
                  {
                    flagHascountry_code = true;
                    storecountry_code = new_value;
                  }
                void unsetcountry_code(void)
                  {
                    flagHascountry_code = false;
                  }
                void setioc_code(std::string new_value)
                  {
                    flagHasioc_code = true;
                    storeioc_code = new_value;
                  }
                void unsetioc_code(void)
                  {
                    flagHasioc_code = false;
                  }
                void setathlete(TypeathleteJSON * new_value)
                  {
                    new_value->add_reference();
                    if (flagHasathlete)
                      {
                        storeathlete->remove_reference();
                      }
                    flagHasathlete = true;
                    storeathlete = new_value;
                  }
                void unsetathlete(void)
                  {
                    if (flagHasathlete)
                      {
                        storeathlete->remove_reference();
                      }
                    flagHasathlete = false;
                  }
                void initathletes(void)
                  {
                    if (flagHasathletes)
                      {
                        for (size_t num2 = 0; num2 < storeathletes.size(); ++num2)
                          {
                            storeathletes[num2]->remove_reference();
                          }
                      }
                    flagHasathletes = true;
                    storeathletes.clear();
                  }
                void appendathletes(TypeathletesJSON * to_append)
                  {
                    if (!flagHasathletes)
                      {
                        flagHasathletes = true;
                        storeathletes.clear();
                      }
                    assert(flagHasathletes);
                    to_append->add_reference();
                    storeathletes.push_back(to_append);
                  }
                void unsetathletes(void)
                  {
                    if (flagHasathletes)
                      {
                        for (size_t num3 = 0; num3 < storeathletes.size(); ++num3)
                          {
                            storeathletes[num3]->remove_reference();
                          }
                      }
                    flagHasathletes = false;
                    storeathletes.clear();
                  }

                virtual void extraTypecompetitorAppendPair(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    assert(extraKeys.size() == extraValues.size());
                    extraKeys.push_back(key);
                    extraValues.push_back(new_component);
                    enter_into_string_index(extraIndex, key, new_component);
                    new_component->add_reference();
                  }
                virtual void extraTypecompetitorSetField(const char *key, JSONValue *new_component)
                  {
                    assert(key != NULL);
                    assert(new_component != NULL);

                    JSONValue *old_field = extraTypecompetitorLookup(key);
                    if (old_field == NULL)
                      {
                        extraTypecompetitorAppendPair(key, new_component);
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
                    if (flagHasid)
                      {
                        handler->start_pair("id");
                        handler->string_value(storeid);
                      }
                    if (flagHasname)
                      {
                        handler->start_pair("name");
                        handler->string_value(storename);
                      }
                    if (flagHascountry_code)
                      {
                        handler->start_pair("country_code");
                        handler->string_value(storecountry_code);
                      }
                    if (flagHasioc_code)
                      {
                        handler->start_pair("ioc_code");
                        handler->string_value(storeioc_code);
                      }
                    if (flagHasathlete)
                      {
                        handler->start_pair("athlete");
                        storeathlete->write_as_json(handler);
                      }
                    if (flagHasathletes)
                      {
                        handler->start_pair("athletes");
                        handler->start_array();
                        for (size_t num1 = 0; num1 < storeathletes.size(); ++num1)
                          {
                            storeathletes[num1]->write_as_json(handler);
                          }
                        handler->finish_array();
                      }
                  }
                virtual const char *missing_field_error(void) const
                  {
                    return NULL;
                  }

                static TypecompetitorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
                static TypecompetitorJSON *from_text(const char *text, bool ignore_extras = false)
                  {
                    TypecompetitorJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypecompetitorJSON>, TypecompetitorJSON *, bool> generator("Type Typecompetitor", ignore_extras);
                        parse_json_value(text, "Text for TypecompetitorJSON", &generator);
                        assert(generator.have_value);
                        result = generator.value.referenced();
                        result->add_reference();
                      };
                    result->remove_reference_no_delete();
                    return result;
                  }
                static TypecompetitorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
                  {
                    TypecompetitorJSON *result;
                      {
                        JSONHoldingGenerator<Generator, RCHandle<TypecompetitorJSON>, TypecompetitorJSON *, bool> generator("Type Typecompetitor", ignore_extras);
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
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorid;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountry_code;
                    JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorioc_code;
                    JSONHoldingGenerator<TypeathleteJSON::Generator, RCHandle<TypeathleteJSON>, TypeathleteJSON *, bool > fieldGeneratorathlete;
                    JSONHoldingArrayGenerator<TypeathletesJSON::Generator, RCHandle<TypeathletesJSON>, TypeathletesJSON *, bool > fieldGeneratorathletes;
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
                        TypecompetitorJSON *result = new TypecompetitorJSON();
                        assert(result != NULL);
                        RCHandle<TypecompetitorJSON> result_holder = result;
                        finish(result);
                        size_t extra_count = unknownFieldGenerator.field_names.size();
                        assert(extra_count == unknownFieldGenerator.field_values.size());
                        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                          {
                            result->extraTypecompetitorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                          }
                        unknownFieldGenerator.field_names.clear();
                        unknownFieldGenerator.field_values.clear();
                        destroy_string_index(unknownFieldGenerator.index);
                    unknownFieldGenerator.index = create_string_index();
                        handle_result(result);
                      }
                    void finish(TypecompetitorJSON *result)
                      {
                        if (fieldGeneratorid.have_value)
                          {
                            result->setid(fieldGeneratorid.value);
                            fieldGeneratorid.have_value = false;
                          }
                        if (fieldGeneratorname.have_value)
                          {
                            result->setname(fieldGeneratorname.value);
                            fieldGeneratorname.have_value = false;
                          }
                        if (fieldGeneratorcountry_code.have_value)
                          {
                            result->setcountry_code(fieldGeneratorcountry_code.value);
                            fieldGeneratorcountry_code.have_value = false;
                          }
                        if (fieldGeneratorioc_code.have_value)
                          {
                            result->setioc_code(fieldGeneratorioc_code.value);
                            fieldGeneratorioc_code.have_value = false;
                          }
                        if (fieldGeneratorathlete.have_value)
                          {
                            result->setathlete(fieldGeneratorathlete.value.referenced());
                            fieldGeneratorathlete.have_value = false;
                          }
                        if (fieldGeneratorathletes.have_value)
                          {
                            result->initathletes();
                            size_t count = fieldGeneratorathletes.value.size();
                            for (size_t num = 0; num < count; ++num)
                              {
                                result->appendathletes(fieldGeneratorathletes.value[num].referenced());
                              }
                            fieldGeneratorathletes.value.clear();
                            fieldGeneratorathletes.have_value = false;
                          }
                      }
                    virtual void handle_result(TypecompetitorJSON *new_result) = 0;
                    virtual JSONHandler *start_known_field(const char *field_name)
                      {
                        switch ((unsigned char)(field_name[0]))
                          {
                            case 'a':
                                if (strncmp(&(field_name[1]), "thlete", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 0:
                                            return &fieldGeneratorathlete;
                                        case 's':
                                            if (field_name[8] == 0)
                                                return &fieldGeneratorathletes;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'c':
                                if (strcmp(&(field_name[1]), "ountry_code") == 0)
                                    return &fieldGeneratorcountry_code;
                                break;
                            case 'i':
                                switch ((unsigned char)(field_name[1]))
                                  {
                                    case 'd':
                                        if (field_name[2] == 0)
                                            return &fieldGeneratorid;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[2]), "c_code") == 0)
                                            return &fieldGeneratorioc_code;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'n':
                                if (strcmp(&(field_name[1]), "ame") == 0)
                                    return &fieldGeneratorname;
                                break;
                            default:
                                break;
                          }
                        return NULL;
                      }

                  public:
                    Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typecompetitor class"), fieldGeneratorname("field \"name\" of the Typecompetitor class"), fieldGeneratorcountry_code("field \"country_code\" of the Typecompetitor class"), fieldGeneratorioc_code("field \"ioc_code\" of the Typecompetitor class"), fieldGeneratorathlete("field \"athlete\" of the Typecompetitor class", ignore_extras), fieldGeneratorathletes("field \"athletes\" of the Typecompetitor class", ignore_extras), unknownFieldGenerator(ignore_extras)
                      {
                        set_what("the Typecompetitor class");
                      }
                    ~Generator(void)
                      {
                      }

                    void reset(void)
                      {
                        fieldGeneratorid.reset();
                        fieldGeneratorname.reset();
                        fieldGeneratorcountry_code.reset();
                        fieldGeneratorioc_code.reset();
                        fieldGeneratorathlete.reset();
                        fieldGeneratorathletes.reset();
                        JSONObjectGenerator::reset();
                        unknownFieldGenerator.reset();
                      }
                  };
              };

          private:
            bool flagHascompetitor;
            TypecompetitorJSON * storecompetitor;
            bool flagHasposition;
            std::string storeposition;
            bool flagHastime;
            std::string storetime;
            bool flagHasgold;
            bool storegold;
            bool flagHassilver;
            bool storesilver;
            bool flagHasbronze;
            bool storebronze;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TyperesultsJSON(const TyperesultsJSON &);
            TyperesultsJSON & operator=(const TyperesultsJSON &other);

            void  fromJSONcompetitor(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONposition(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONtime(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONgold(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONsilver(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONbronze(JSONValue *json_value, bool ignore_extras = false);


          public:
            TyperesultsJSON(void);
            virtual ~TyperesultsJSON(void);
            bool  hascompetitor(void) const;
            TypecompetitorJSON *  getcompetitor(void);
            const TypecompetitorJSON *  getcompetitor(void) const;
            bool  hasposition(void) const;
            std::string  getposition(void);
            const std::string  getposition(void) const;
            bool  hastime(void) const;
            std::string  gettime(void);
            const std::string  gettime(void) const;
            bool  hasgold(void) const;
            bool  getgold(void);
            const bool  getgold(void) const;
            bool  hassilver(void) const;
            bool  getsilver(void);
            const bool  getsilver(void) const;
            bool  hasbronze(void) const;
            bool  getbronze(void);
            const bool  getbronze(void) const;

            virtual size_t extraTyperesultsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTyperesultsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTyperesultsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTyperesultsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTyperesultsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTyperesultsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setcompetitor(TypecompetitorJSON * new_value)
              {
                new_value->add_reference();
                if (flagHascompetitor)
                  {
                    storecompetitor->remove_reference();
                  }
                flagHascompetitor = true;
                storecompetitor = new_value;
              }
            void unsetcompetitor(void)
              {
                if (flagHascompetitor)
                  {
                    storecompetitor->remove_reference();
                  }
                flagHascompetitor = false;
              }
            void setposition(std::string new_value)
              {
                flagHasposition = true;
                storeposition = new_value;
              }
            void unsetposition(void)
              {
                flagHasposition = false;
              }
            void settime(std::string new_value)
              {
                flagHastime = true;
                storetime = new_value;
              }
            void unsettime(void)
              {
                flagHastime = false;
              }
            void setgold(bool new_value)
              {
                flagHasgold = true;
                storegold = new_value;
              }
            void unsetgold(void)
              {
                flagHasgold = false;
              }
            void setsilver(bool new_value)
              {
                flagHassilver = true;
                storesilver = new_value;
              }
            void unsetsilver(void)
              {
                flagHassilver = false;
              }
            void setbronze(bool new_value)
              {
                flagHasbronze = true;
                storebronze = new_value;
              }
            void unsetbronze(void)
              {
                flagHasbronze = false;
              }

            virtual void extraTyperesultsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTyperesultsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTyperesultsLookup(key);
                if (old_field == NULL)
                  {
                    extraTyperesultsAppendPair(key, new_component);
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
                if (flagHascompetitor)
                  {
                    handler->start_pair("competitor");
                    storecompetitor->write_as_json(handler);
                  }
                if (flagHasposition)
                  {
                    handler->start_pair("position");
                    handler->string_value(storeposition);
                  }
                if (flagHastime)
                  {
                    handler->start_pair("time");
                    handler->string_value(storetime);
                  }
                if (flagHasgold)
                  {
                    handler->start_pair("gold");
                    handler->boolean_value(storegold);
                  }
                if (flagHassilver)
                  {
                    handler->start_pair("silver");
                    handler->boolean_value(storesilver);
                  }
                if (flagHasbronze)
                  {
                    handler->start_pair("bronze");
                    handler->boolean_value(storebronze);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TyperesultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TyperesultsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TyperesultsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TyperesultsJSON>, TyperesultsJSON *, bool> generator("Type Typeresults", ignore_extras);
                    parse_json_value(text, "Text for TyperesultsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TyperesultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TyperesultsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TyperesultsJSON>, TyperesultsJSON *, bool> generator("Type Typeresults", ignore_extras);
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
                JSONHoldingGenerator<TypecompetitorJSON::Generator, RCHandle<TypecompetitorJSON>, TypecompetitorJSON *, bool > fieldGeneratorcompetitor;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorposition;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratortime;
                JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorgold;
                JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorsilver;
                JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorbronze;
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
                    TyperesultsJSON *result = new TyperesultsJSON();
                    assert(result != NULL);
                    RCHandle<TyperesultsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTyperesultsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TyperesultsJSON *result)
                  {
                    if (fieldGeneratorcompetitor.have_value)
                      {
                        result->setcompetitor(fieldGeneratorcompetitor.value.referenced());
                        fieldGeneratorcompetitor.have_value = false;
                      }
                    if (fieldGeneratorposition.have_value)
                      {
                        result->setposition(fieldGeneratorposition.value);
                        fieldGeneratorposition.have_value = false;
                      }
                    if (fieldGeneratortime.have_value)
                      {
                        result->settime(fieldGeneratortime.value);
                        fieldGeneratortime.have_value = false;
                      }
                    if (fieldGeneratorgold.have_value)
                      {
                        result->setgold(fieldGeneratorgold.value);
                        fieldGeneratorgold.have_value = false;
                      }
                    if (fieldGeneratorsilver.have_value)
                      {
                        result->setsilver(fieldGeneratorsilver.value);
                        fieldGeneratorsilver.have_value = false;
                      }
                    if (fieldGeneratorbronze.have_value)
                      {
                        result->setbronze(fieldGeneratorbronze.value);
                        fieldGeneratorbronze.have_value = false;
                      }
                  }
                virtual void handle_result(TyperesultsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'b':
                            if (strcmp(&(field_name[1]), "ronze") == 0)
                                return &fieldGeneratorbronze;
                            break;
                        case 'c':
                            if (strcmp(&(field_name[1]), "ompetitor") == 0)
                                return &fieldGeneratorcompetitor;
                            break;
                        case 'g':
                            if (strcmp(&(field_name[1]), "old") == 0)
                                return &fieldGeneratorgold;
                            break;
                        case 'p':
                            if (strcmp(&(field_name[1]), "osition") == 0)
                                return &fieldGeneratorposition;
                            break;
                        case 's':
                            if (strcmp(&(field_name[1]), "ilver") == 0)
                                return &fieldGeneratorsilver;
                            break;
                        case 't':
                            if (strcmp(&(field_name[1]), "ime") == 0)
                                return &fieldGeneratortime;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorcompetitor("field \"competitor\" of the Typeresults class", ignore_extras), fieldGeneratorposition("field \"position\" of the Typeresults class"), fieldGeneratortime("field \"time\" of the Typeresults class"), fieldGeneratorgold("field \"gold\" of the Typeresults class"), fieldGeneratorsilver("field \"silver\" of the Typeresults class"), fieldGeneratorbronze("field \"bronze\" of the Typeresults class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typeresults class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorcompetitor.reset();
                    fieldGeneratorposition.reset();
                    fieldGeneratortime.reset();
                    fieldGeneratorgold.reset();
                    fieldGeneratorsilver.reset();
                    fieldGeneratorbronze.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHassport_event;
        Typesport_eventJSON * storesport_event;
        bool flagHasresults;
        std::vector< TyperesultsJSON * > storeresults;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        Typesport_event_resultsJSON(const Typesport_event_resultsJSON &);
        Typesport_event_resultsJSON & operator=(const Typesport_event_resultsJSON &other);

        void  fromJSONsport_event(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONresults(JSONValue *json_value, bool ignore_extras = false);


      public:
        Typesport_event_resultsJSON(void);
        virtual ~Typesport_event_resultsJSON(void);
        bool  hassport_event(void) const;
        Typesport_eventJSON *  getsport_event(void);
        const Typesport_eventJSON *  getsport_event(void) const;
        bool  hasresults(void) const;
        size_t  countOfresults(void) const;
        TyperesultsJSON *  elementOfresults(size_t element_num);
        const TyperesultsJSON *  elementOfresults(size_t element_num) const;
        std::vector< TyperesultsJSON * >  getresults(void);
        const std::vector< TyperesultsJSON * >  getresults(void) const;

        virtual size_t extraTypesport_event_resultsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypesport_event_resultsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypesport_event_resultsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypesport_event_resultsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypesport_event_resultsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypesport_event_resultsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setsport_event(Typesport_eventJSON * new_value)
          {
            new_value->add_reference();
            if (flagHassport_event)
              {
                storesport_event->remove_reference();
              }
            flagHassport_event = true;
            storesport_event = new_value;
          }
        void unsetsport_event(void)
          {
            if (flagHassport_event)
              {
                storesport_event->remove_reference();
              }
            flagHassport_event = false;
          }
        void initresults(void)
          {
            if (flagHasresults)
              {
                for (size_t num5 = 0; num5 < storeresults.size(); ++num5)
                  {
                    storeresults[num5]->remove_reference();
                  }
              }
            flagHasresults = true;
            storeresults.clear();
          }
        void appendresults(TyperesultsJSON * to_append)
          {
            if (!flagHasresults)
              {
                flagHasresults = true;
                storeresults.clear();
              }
            assert(flagHasresults);
            to_append->add_reference();
            storeresults.push_back(to_append);
          }
        void unsetresults(void)
          {
            if (flagHasresults)
              {
                for (size_t num6 = 0; num6 < storeresults.size(); ++num6)
                  {
                    storeresults[num6]->remove_reference();
                  }
              }
            flagHasresults = false;
            storeresults.clear();
          }

        virtual void extraTypesport_event_resultsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypesport_event_resultsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypesport_event_resultsLookup(key);
            if (old_field == NULL)
              {
                extraTypesport_event_resultsAppendPair(key, new_component);
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
            if (flagHassport_event)
              {
                handler->start_pair("sport_event");
                storesport_event->write_as_json(handler);
              }
            if (flagHasresults)
              {
                handler->start_pair("results");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeresults.size(); ++num1)
                  {
                    storeresults[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static Typesport_event_resultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static Typesport_event_resultsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            Typesport_event_resultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typesport_event_resultsJSON>, Typesport_event_resultsJSON *, bool> generator("Type Typesport_event_results", ignore_extras);
                parse_json_value(text, "Text for Typesport_event_resultsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static Typesport_event_resultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            Typesport_event_resultsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typesport_event_resultsJSON>, Typesport_event_resultsJSON *, bool> generator("Type Typesport_event_results", ignore_extras);
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
            JSONHoldingGenerator<Typesport_eventJSON::Generator, RCHandle<Typesport_eventJSON>, Typesport_eventJSON *, bool > fieldGeneratorsport_event;
            JSONHoldingArrayGenerator<TyperesultsJSON::Generator, RCHandle<TyperesultsJSON>, TyperesultsJSON *, bool > fieldGeneratorresults;
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
                Typesport_event_resultsJSON *result = new Typesport_event_resultsJSON();
                assert(result != NULL);
                RCHandle<Typesport_event_resultsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypesport_event_resultsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(Typesport_event_resultsJSON *result)
              {
                if (fieldGeneratorsport_event.have_value)
                  {
                    result->setsport_event(fieldGeneratorsport_event.value.referenced());
                    fieldGeneratorsport_event.have_value = false;
                  }
                if (fieldGeneratorresults.have_value)
                  {
                    result->initresults();
                    size_t count = fieldGeneratorresults.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendresults(fieldGeneratorresults.value[num].referenced());
                      }
                    fieldGeneratorresults.value.clear();
                    fieldGeneratorresults.have_value = false;
                  }
              }
            virtual void handle_result(Typesport_event_resultsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'r':
                        if (strcmp(&(field_name[1]), "esults") == 0)
                            return &fieldGeneratorresults;
                        break;
                    case 's':
                        if (strcmp(&(field_name[1]), "port_event") == 0)
                            return &fieldGeneratorsport_event;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorsport_event("field \"sport_event\" of the Typesport_event_results class", ignore_extras), fieldGeneratorresults("field \"results\" of the Typesport_event_results class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the Typesport_event_results class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorsport_event.reset();
                fieldGeneratorresults.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHassport_event_results;
    std::vector< std::vector< Typesport_event_resultsJSON * > > storesport_event_results;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsAPIEventResultsJSON(const SportsOlympicsAPIEventResultsJSON &);
    SportsOlympicsAPIEventResultsJSON & operator=(const SportsOlympicsAPIEventResultsJSON &other);

    void  fromJSONsport_event_results(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsAPIEventResultsJSON(void);
    virtual ~SportsOlympicsAPIEventResultsJSON(void);
    bool  hassport_event_results(void) const;
    size_t  countOfsport_event_results(void) const;
    std::vector< Typesport_event_resultsJSON * >  elementOfsport_event_results(size_t element_num);
    const std::vector< Typesport_event_resultsJSON * >  elementOfsport_event_results(size_t element_num) const;
    std::vector< std::vector< Typesport_event_resultsJSON * > >  getsport_event_results(void);
    const std::vector< std::vector< Typesport_event_resultsJSON * > >  getsport_event_results(void) const;

    virtual size_t extraSportsOlympicsAPIEventResultsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsAPIEventResultsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsAPIEventResultsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsAPIEventResultsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsAPIEventResultsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsAPIEventResultsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initsport_event_results(void)
      {
        if (flagHassport_event_results)
          {
            for (size_t num9 = 0; num9 < storesport_event_results.size(); ++num9)
              {
                for (size_t num10 = 0; num10 < storesport_event_results[num9].size(); ++num10)
                  {
                    storesport_event_results[num9][num10]->remove_reference();
                  }
              }
          }
        flagHassport_event_results = true;
        storesport_event_results.clear();
      }
    void appendsport_event_results(std::vector< Typesport_event_resultsJSON * > to_append)
      {
        if (!flagHassport_event_results)
          {
            flagHassport_event_results = true;
            storesport_event_results.clear();
          }
        assert(flagHassport_event_results);
        for (size_t num1 = 0; num1 < to_append.size(); ++num1)
          {
            to_append[num1]->add_reference();
          }
        storesport_event_results.push_back(to_append);
      }
    void unsetsport_event_results(void)
      {
        if (flagHassport_event_results)
          {
            for (size_t num11 = 0; num11 < storesport_event_results.size(); ++num11)
              {
                for (size_t num12 = 0; num12 < storesport_event_results[num11].size(); ++num12)
                  {
                    storesport_event_results[num11][num12]->remove_reference();
                  }
              }
          }
        flagHassport_event_results = false;
        storesport_event_results.clear();
      }

    virtual void extraSportsOlympicsAPIEventResultsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsAPIEventResultsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsAPIEventResultsLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsAPIEventResultsAppendPair(key, new_component);
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
        if (flagHassport_event_results)
          {
            handler->start_pair("sport_event_results");
            handler->start_array();
            for (size_t num1 = 0; num1 < storesport_event_results.size(); ++num1)
              {
                handler->start_array();
                for (size_t num2 = 0; num2 < storesport_event_results[num1].size(); ++num2)
                  {
                    storesport_event_results[num1][num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsAPIEventResultsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsAPIEventResultsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsAPIEventResultsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventResultsJSON>, SportsOlympicsAPIEventResultsJSON *, bool> generator("Type SportsOlympicsAPIEventResults", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsAPIEventResultsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsAPIEventResultsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsAPIEventResultsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventResultsJSON>, SportsOlympicsAPIEventResultsJSON *, bool> generator("Type SportsOlympicsAPIEventResults", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONHoldingArrayGenerator<Typesport_event_resultsJSON::Generator, RCHandle<Typesport_event_resultsJSON>, Typesport_event_resultsJSON *, bool >, std::vector<RCHandle<Typesport_event_resultsJSON> >, std::vector<RCHandle<Typesport_event_resultsJSON> >, bool > fieldGeneratorsport_event_results;
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
            SportsOlympicsAPIEventResultsJSON *result = new SportsOlympicsAPIEventResultsJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsAPIEventResultsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsAPIEventResultsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsAPIEventResultsJSON *result)
          {
            if (fieldGeneratorsport_event_results.have_value)
              {
                result->initsport_event_results();
                size_t count = fieldGeneratorsport_event_results.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    std::vector< Typesport_event_resultsJSON * > unwrapped0;
                    for (size_t num0 = 0; num0 < fieldGeneratorsport_event_results.value[num].size(); ++num0)
                      {
                        unwrapped0.push_back(fieldGeneratorsport_event_results.value[num][num0].referenced());
                      }
                    result->appendsport_event_results(unwrapped0);
                  }
                fieldGeneratorsport_event_results.value.clear();
                fieldGeneratorsport_event_results.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsAPIEventResultsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "sport_event_results") == 0)
                return &fieldGeneratorsport_event_results;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorsport_event_results("field \"sport_event_results\" of the SportsOlympicsAPIEventResults class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsAPIEventResults class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorsport_event_results.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSAPIEVENTRESULTSJSON_H */
