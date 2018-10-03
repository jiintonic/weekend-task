/* file "SportsOlympicsAPIEventScheduleJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSAPIEVENTSCHEDULEJSON_H
#define SPORTSOLYMPICSAPIEVENTSCHEDULEJSON_H

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


class SportsOlympicsAPIEventScheduleJSON : public ReferenceCounted
  {
  public:
    class Typesport_eventsJSON : public ReferenceCounted
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
        class TypestagesJSON : public ReferenceCounted
          {
          private:
            bool flagHasid;
            std::string storeid;
            bool flagHasname;
            std::string storename;
            bool flagHasscheduled;
            std::string storescheduled;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypestagesJSON(const TypestagesJSON &);
            TypestagesJSON & operator=(const TypestagesJSON &other);

            void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONscheduled(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypestagesJSON(void);
            virtual ~TypestagesJSON(void);
            bool  hasid(void) const;
            std::string  getid(void);
            const std::string  getid(void) const;
            bool  hasname(void) const;
            std::string  getname(void);
            const std::string  getname(void) const;
            bool  hasscheduled(void) const;
            std::string  getscheduled(void);
            const std::string  getscheduled(void) const;

            virtual size_t extraTypestagesComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypestagesComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypestagesComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypestagesComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypestagesLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypestagesLookup(const char *field_name) const
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

            virtual void extraTypestagesAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypestagesSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypestagesLookup(key);
                if (old_field == NULL)
                  {
                    extraTypestagesAppendPair(key, new_component);
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
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TypestagesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypestagesJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypestagesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypestagesJSON>, TypestagesJSON *, bool> generator("Type Typestages", ignore_extras);
                    parse_json_value(text, "Text for TypestagesJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypestagesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypestagesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypestagesJSON>, TypestagesJSON *, bool> generator("Type Typestages", ignore_extras);
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
                    TypestagesJSON *result = new TypestagesJSON();
                    assert(result != NULL);
                    RCHandle<TypestagesJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypestagesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypestagesJSON *result)
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
                  }
                virtual void handle_result(TypestagesJSON *new_result) = 0;
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
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typestages class"), fieldGeneratorname("field \"name\" of the Typestages class"), fieldGeneratorscheduled("field \"scheduled\" of the Typestages class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typestages class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorid.reset();
                    fieldGeneratorname.reset();
                    fieldGeneratorscheduled.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };
        class TypecompetitorsJSON : public ReferenceCounted
          {
          private:
            bool flagHasid;
            std::string storeid;
            bool flagHasname;
            std::string storename;
            bool flagHascountry;
            std::string storecountry;
            bool flagHascountry_code;
            std::string storecountry_code;
            bool flagHasioc_code;
            std::string storeioc_code;
            bool flagHasabbreviation;
            std::string storeabbreviation;
            bool flagHasqualifier;
            std::string storequalifier;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypecompetitorsJSON(const TypecompetitorsJSON &);
            TypecompetitorsJSON & operator=(const TypecompetitorsJSON &other);

            void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONcountry(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONcountry_code(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONioc_code(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONabbreviation(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONqualifier(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypecompetitorsJSON(void);
            virtual ~TypecompetitorsJSON(void);
            bool  hasid(void) const;
            std::string  getid(void);
            const std::string  getid(void) const;
            bool  hasname(void) const;
            std::string  getname(void);
            const std::string  getname(void) const;
            bool  hascountry(void) const;
            std::string  getcountry(void);
            const std::string  getcountry(void) const;
            bool  hascountry_code(void) const;
            std::string  getcountry_code(void);
            const std::string  getcountry_code(void) const;
            bool  hasioc_code(void) const;
            std::string  getioc_code(void);
            const std::string  getioc_code(void) const;
            bool  hasabbreviation(void) const;
            std::string  getabbreviation(void);
            const std::string  getabbreviation(void) const;
            bool  hasqualifier(void) const;
            std::string  getqualifier(void);
            const std::string  getqualifier(void) const;

            virtual size_t extraTypecompetitorsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypecompetitorsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypecompetitorsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypecompetitorsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypecompetitorsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypecompetitorsLookup(const char *field_name) const
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
            void setcountry(std::string new_value)
              {
                flagHascountry = true;
                storecountry = new_value;
              }
            void unsetcountry(void)
              {
                flagHascountry = false;
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
            void setabbreviation(std::string new_value)
              {
                flagHasabbreviation = true;
                storeabbreviation = new_value;
              }
            void unsetabbreviation(void)
              {
                flagHasabbreviation = false;
              }
            void setqualifier(std::string new_value)
              {
                flagHasqualifier = true;
                storequalifier = new_value;
              }
            void unsetqualifier(void)
              {
                flagHasqualifier = false;
              }

            virtual void extraTypecompetitorsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypecompetitorsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypecompetitorsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypecompetitorsAppendPair(key, new_component);
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
                if (flagHascountry)
                  {
                    handler->start_pair("country");
                    handler->string_value(storecountry);
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
                if (flagHasabbreviation)
                  {
                    handler->start_pair("abbreviation");
                    handler->string_value(storeabbreviation);
                  }
                if (flagHasqualifier)
                  {
                    handler->start_pair("qualifier");
                    handler->string_value(storequalifier);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TypecompetitorsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypecompetitorsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypecompetitorsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypecompetitorsJSON>, TypecompetitorsJSON *, bool> generator("Type Typecompetitors", ignore_extras);
                    parse_json_value(text, "Text for TypecompetitorsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypecompetitorsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypecompetitorsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypecompetitorsJSON>, TypecompetitorsJSON *, bool> generator("Type Typecompetitors", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountry;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountry_code;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorioc_code;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorabbreviation;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorqualifier;
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
                    TypecompetitorsJSON *result = new TypecompetitorsJSON();
                    assert(result != NULL);
                    RCHandle<TypecompetitorsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypecompetitorsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypecompetitorsJSON *result)
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
                    if (fieldGeneratorcountry.have_value)
                      {
                        result->setcountry(fieldGeneratorcountry.value);
                        fieldGeneratorcountry.have_value = false;
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
                    if (fieldGeneratorabbreviation.have_value)
                      {
                        result->setabbreviation(fieldGeneratorabbreviation.value);
                        fieldGeneratorabbreviation.have_value = false;
                      }
                    if (fieldGeneratorqualifier.have_value)
                      {
                        result->setqualifier(fieldGeneratorqualifier.value);
                        fieldGeneratorqualifier.have_value = false;
                      }
                  }
                virtual void handle_result(TypecompetitorsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[1]), "bbreviation") == 0)
                                return &fieldGeneratorabbreviation;
                            break;
                        case 'c':
                            if (strncmp(&(field_name[1]), "ountry", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 0:
                                        return &fieldGeneratorcountry;
                                    case '_':
                                        if (strcmp(&(field_name[8]), "code") == 0)
                                            return &fieldGeneratorcountry_code;
                                        break;
                                    default:
                                        break;
                                  }
                              }
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
                        case 'q':
                            if (strcmp(&(field_name[1]), "ualifier") == 0)
                                return &fieldGeneratorqualifier;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typecompetitors class"), fieldGeneratorname("field \"name\" of the Typecompetitors class"), fieldGeneratorcountry("field \"country\" of the Typecompetitors class"), fieldGeneratorcountry_code("field \"country_code\" of the Typecompetitors class"), fieldGeneratorioc_code("field \"ioc_code\" of the Typecompetitors class"), fieldGeneratorabbreviation("field \"abbreviation\" of the Typecompetitors class"), fieldGeneratorqualifier("field \"qualifier\" of the Typecompetitors class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the Typecompetitors class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorid.reset();
                    fieldGeneratorname.reset();
                    fieldGeneratorcountry.reset();
                    fieldGeneratorcountry_code.reset();
                    fieldGeneratorioc_code.reset();
                    fieldGeneratorabbreviation.reset();
                    fieldGeneratorqualifier.reset();
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
        bool flagHasstart_time_tbd;
        bool storestart_time_tbd;
        bool flagHasstatus;
        std::string storestatus;
        bool flagHastournament;
        TypetournamentJSON * storetournament;
        bool flagHasstages;
        std::vector< TypestagesJSON * > storestages;
        bool flagHascompetitors;
        std::vector< TypecompetitorsJSON * > storecompetitors;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        Typesport_eventsJSON(const Typesport_eventsJSON &);
        Typesport_eventsJSON & operator=(const Typesport_eventsJSON &other);

        void  fromJSONid(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONscheduled(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONstart_time_tbd(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONstatus(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONtournament(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONstages(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONcompetitors(JSONValue *json_value, bool ignore_extras = false);


      public:
        Typesport_eventsJSON(void);
        virtual ~Typesport_eventsJSON(void);
        bool  hasid(void) const;
        std::string  getid(void);
        const std::string  getid(void) const;
        bool  hasname(void) const;
        std::string  getname(void);
        const std::string  getname(void) const;
        bool  hasscheduled(void) const;
        std::string  getscheduled(void);
        const std::string  getscheduled(void) const;
        bool  hasstart_time_tbd(void) const;
        bool  getstart_time_tbd(void);
        const bool  getstart_time_tbd(void) const;
        bool  hasstatus(void) const;
        std::string  getstatus(void);
        const std::string  getstatus(void) const;
        bool  hastournament(void) const;
        TypetournamentJSON *  gettournament(void);
        const TypetournamentJSON *  gettournament(void) const;
        bool  hasstages(void) const;
        size_t  countOfstages(void) const;
        TypestagesJSON *  elementOfstages(size_t element_num);
        const TypestagesJSON *  elementOfstages(size_t element_num) const;
        std::vector< TypestagesJSON * >  getstages(void);
        const std::vector< TypestagesJSON * >  getstages(void) const;
        bool  hascompetitors(void) const;
        size_t  countOfcompetitors(void) const;
        TypecompetitorsJSON *  elementOfcompetitors(size_t element_num);
        const TypecompetitorsJSON *  elementOfcompetitors(size_t element_num) const;
        std::vector< TypecompetitorsJSON * >  getcompetitors(void);
        const std::vector< TypecompetitorsJSON * >  getcompetitors(void) const;

        virtual size_t extraTypesport_eventsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypesport_eventsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypesport_eventsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypesport_eventsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypesport_eventsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypesport_eventsLookup(const char *field_name) const
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
        void setstart_time_tbd(bool new_value)
          {
            flagHasstart_time_tbd = true;
            storestart_time_tbd = new_value;
          }
        void unsetstart_time_tbd(void)
          {
            flagHasstart_time_tbd = false;
          }
        void setstatus(std::string new_value)
          {
            flagHasstatus = true;
            storestatus = new_value;
          }
        void unsetstatus(void)
          {
            flagHasstatus = false;
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
        void initstages(void)
          {
            if (flagHasstages)
              {
                for (size_t num3 = 0; num3 < storestages.size(); ++num3)
                  {
                    storestages[num3]->remove_reference();
                  }
              }
            flagHasstages = true;
            storestages.clear();
          }
        void appendstages(TypestagesJSON * to_append)
          {
            if (!flagHasstages)
              {
                flagHasstages = true;
                storestages.clear();
              }
            assert(flagHasstages);
            to_append->add_reference();
            storestages.push_back(to_append);
          }
        void unsetstages(void)
          {
            if (flagHasstages)
              {
                for (size_t num4 = 0; num4 < storestages.size(); ++num4)
                  {
                    storestages[num4]->remove_reference();
                  }
              }
            flagHasstages = false;
            storestages.clear();
          }
        void initcompetitors(void)
          {
            if (flagHascompetitors)
              {
                for (size_t num5 = 0; num5 < storecompetitors.size(); ++num5)
                  {
                    storecompetitors[num5]->remove_reference();
                  }
              }
            flagHascompetitors = true;
            storecompetitors.clear();
          }
        void appendcompetitors(TypecompetitorsJSON * to_append)
          {
            if (!flagHascompetitors)
              {
                flagHascompetitors = true;
                storecompetitors.clear();
              }
            assert(flagHascompetitors);
            to_append->add_reference();
            storecompetitors.push_back(to_append);
          }
        void unsetcompetitors(void)
          {
            if (flagHascompetitors)
              {
                for (size_t num6 = 0; num6 < storecompetitors.size(); ++num6)
                  {
                    storecompetitors[num6]->remove_reference();
                  }
              }
            flagHascompetitors = false;
            storecompetitors.clear();
          }

        virtual void extraTypesport_eventsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypesport_eventsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypesport_eventsLookup(key);
            if (old_field == NULL)
              {
                extraTypesport_eventsAppendPair(key, new_component);
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
            if (flagHasstart_time_tbd)
              {
                handler->start_pair("start_time_tbd");
                handler->boolean_value(storestart_time_tbd);
              }
            if (flagHasstatus)
              {
                handler->start_pair("status");
                handler->string_value(storestatus);
              }
            if (flagHastournament)
              {
                handler->start_pair("tournament");
                storetournament->write_as_json(handler);
              }
            if (flagHasstages)
              {
                handler->start_pair("stages");
                handler->start_array();
                for (size_t num1 = 0; num1 < storestages.size(); ++num1)
                  {
                    storestages[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHascompetitors)
              {
                handler->start_pair("competitors");
                handler->start_array();
                for (size_t num2 = 0; num2 < storecompetitors.size(); ++num2)
                  {
                    storecompetitors[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static Typesport_eventsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static Typesport_eventsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            Typesport_eventsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typesport_eventsJSON>, Typesport_eventsJSON *, bool> generator("Type Typesport_events", ignore_extras);
                parse_json_value(text, "Text for Typesport_eventsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static Typesport_eventsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            Typesport_eventsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<Typesport_eventsJSON>, Typesport_eventsJSON *, bool> generator("Type Typesport_events", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorstart_time_tbd;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorstatus;
            JSONHoldingGenerator<TypetournamentJSON::Generator, RCHandle<TypetournamentJSON>, TypetournamentJSON *, bool > fieldGeneratortournament;
            JSONHoldingArrayGenerator<TypestagesJSON::Generator, RCHandle<TypestagesJSON>, TypestagesJSON *, bool > fieldGeneratorstages;
            JSONHoldingArrayGenerator<TypecompetitorsJSON::Generator, RCHandle<TypecompetitorsJSON>, TypecompetitorsJSON *, bool > fieldGeneratorcompetitors;
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
                Typesport_eventsJSON *result = new Typesport_eventsJSON();
                assert(result != NULL);
                RCHandle<Typesport_eventsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypesport_eventsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(Typesport_eventsJSON *result)
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
                if (fieldGeneratorstart_time_tbd.have_value)
                  {
                    result->setstart_time_tbd(fieldGeneratorstart_time_tbd.value);
                    fieldGeneratorstart_time_tbd.have_value = false;
                  }
                if (fieldGeneratorstatus.have_value)
                  {
                    result->setstatus(fieldGeneratorstatus.value);
                    fieldGeneratorstatus.have_value = false;
                  }
                if (fieldGeneratortournament.have_value)
                  {
                    result->settournament(fieldGeneratortournament.value.referenced());
                    fieldGeneratortournament.have_value = false;
                  }
                if (fieldGeneratorstages.have_value)
                  {
                    result->initstages();
                    size_t count = fieldGeneratorstages.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendstages(fieldGeneratorstages.value[num].referenced());
                      }
                    fieldGeneratorstages.value.clear();
                    fieldGeneratorstages.have_value = false;
                  }
                if (fieldGeneratorcompetitors.have_value)
                  {
                    result->initcompetitors();
                    size_t count = fieldGeneratorcompetitors.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendcompetitors(fieldGeneratorcompetitors.value[num].referenced());
                      }
                    fieldGeneratorcompetitors.value.clear();
                    fieldGeneratorcompetitors.have_value = false;
                  }
              }
            virtual void handle_result(Typesport_eventsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'c':
                        if (strcmp(&(field_name[1]), "ompetitors") == 0)
                            return &fieldGeneratorcompetitors;
                        break;
                    case 'i':
                        if (strcmp(&(field_name[1]), "d") == 0)
                            return &fieldGeneratorid;
                        break;
                    case 'n':
                        if (strcmp(&(field_name[1]), "ame") == 0)
                            return &fieldGeneratorname;
                        break;
                    case 's':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'c':
                                if (strcmp(&(field_name[2]), "heduled") == 0)
                                    return &fieldGeneratorscheduled;
                                break;
                            case 't':
                                if (strncmp(&(field_name[2]), "a", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'g':
                                            if (strcmp(&(field_name[4]), "es") == 0)
                                                return &fieldGeneratorstages;
                                            break;
                                        case 'r':
                                            if (strcmp(&(field_name[4]), "t_time_tbd") == 0)
                                                return &fieldGeneratorstart_time_tbd;
                                            break;
                                        case 't':
                                            if (strcmp(&(field_name[4]), "us") == 0)
                                                return &fieldGeneratorstatus;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            default:
                                break;
                          }
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
            Generator(bool ignore_extras = false) : fieldGeneratorid("field \"id\" of the Typesport_events class"), fieldGeneratorname("field \"name\" of the Typesport_events class"), fieldGeneratorscheduled("field \"scheduled\" of the Typesport_events class"), fieldGeneratorstart_time_tbd("field \"start_time_tbd\" of the Typesport_events class"), fieldGeneratorstatus("field \"status\" of the Typesport_events class"), fieldGeneratortournament("field \"tournament\" of the Typesport_events class", ignore_extras), fieldGeneratorstages("field \"stages\" of the Typesport_events class", ignore_extras), fieldGeneratorcompetitors("field \"competitors\" of the Typesport_events class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the Typesport_events class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorid.reset();
                fieldGeneratorname.reset();
                fieldGeneratorscheduled.reset();
                fieldGeneratorstart_time_tbd.reset();
                fieldGeneratorstatus.reset();
                fieldGeneratortournament.reset();
                fieldGeneratorstages.reset();
                fieldGeneratorcompetitors.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHassport_events;
    std::vector< Typesport_eventsJSON * > storesport_events;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsAPIEventScheduleJSON(const SportsOlympicsAPIEventScheduleJSON &);
    SportsOlympicsAPIEventScheduleJSON & operator=(const SportsOlympicsAPIEventScheduleJSON &other);

    void  fromJSONsport_events(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsAPIEventScheduleJSON(void);
    virtual ~SportsOlympicsAPIEventScheduleJSON(void);
    bool  hassport_events(void) const;
    size_t  countOfsport_events(void) const;
    Typesport_eventsJSON *  elementOfsport_events(size_t element_num);
    const Typesport_eventsJSON *  elementOfsport_events(size_t element_num) const;
    std::vector< Typesport_eventsJSON * >  getsport_events(void);
    const std::vector< Typesport_eventsJSON * >  getsport_events(void) const;

    virtual size_t extraSportsOlympicsAPIEventScheduleComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsAPIEventScheduleComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsAPIEventScheduleComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsAPIEventScheduleComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsAPIEventScheduleLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsAPIEventScheduleLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initsport_events(void)
      {
        if (flagHassport_events)
          {
            for (size_t num8 = 0; num8 < storesport_events.size(); ++num8)
              {
                storesport_events[num8]->remove_reference();
              }
          }
        flagHassport_events = true;
        storesport_events.clear();
      }
    void appendsport_events(Typesport_eventsJSON * to_append)
      {
        if (!flagHassport_events)
          {
            flagHassport_events = true;
            storesport_events.clear();
          }
        assert(flagHassport_events);
        to_append->add_reference();
        storesport_events.push_back(to_append);
      }
    void unsetsport_events(void)
      {
        if (flagHassport_events)
          {
            for (size_t num9 = 0; num9 < storesport_events.size(); ++num9)
              {
                storesport_events[num9]->remove_reference();
              }
          }
        flagHassport_events = false;
        storesport_events.clear();
      }

    virtual void extraSportsOlympicsAPIEventScheduleAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsAPIEventScheduleSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsAPIEventScheduleLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsAPIEventScheduleAppendPair(key, new_component);
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
        if (flagHassport_events)
          {
            handler->start_pair("sport_events");
            handler->start_array();
            for (size_t num1 = 0; num1 < storesport_events.size(); ++num1)
              {
                storesport_events[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SportsOlympicsAPIEventScheduleJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsAPIEventScheduleJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsAPIEventScheduleJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventScheduleJSON>, SportsOlympicsAPIEventScheduleJSON *, bool> generator("Type SportsOlympicsAPIEventSchedule", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsAPIEventScheduleJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsAPIEventScheduleJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsAPIEventScheduleJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventScheduleJSON>, SportsOlympicsAPIEventScheduleJSON *, bool> generator("Type SportsOlympicsAPIEventSchedule", ignore_extras);
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
        JSONHoldingArrayGenerator<Typesport_eventsJSON::Generator, RCHandle<Typesport_eventsJSON>, Typesport_eventsJSON *, bool > fieldGeneratorsport_events;
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
            SportsOlympicsAPIEventScheduleJSON *result = new SportsOlympicsAPIEventScheduleJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsAPIEventScheduleJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsAPIEventScheduleAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsAPIEventScheduleJSON *result)
          {
            if (fieldGeneratorsport_events.have_value)
              {
                result->initsport_events();
                size_t count = fieldGeneratorsport_events.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendsport_events(fieldGeneratorsport_events.value[num].referenced());
                  }
                fieldGeneratorsport_events.value.clear();
                fieldGeneratorsport_events.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsAPIEventScheduleJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "sport_events") == 0)
                return &fieldGeneratorsport_events;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorsport_events("field \"sport_events\" of the SportsOlympicsAPIEventSchedule class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsAPIEventSchedule class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorsport_events.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSAPIEVENTSCHEDULEJSON_H */
