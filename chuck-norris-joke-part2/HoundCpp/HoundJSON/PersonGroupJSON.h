/* file "PersonGroupJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef PERSONGROUPJSON_H
#define PERSONGROUPJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "OneContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class PersonGroupJSON : public ReferenceCounted
  {
  public:
    class TypePersonsJSON : public ReferenceCounted
      {
      private:
        bool flagHasContacts;
        std::vector< OneContactJSON * > storeContacts;
        bool flagHasToUserWrittenName;
        std::string storeToUserWrittenName;
        bool flagHasToUserSpokenName;
        std::string storeToUserSpokenName;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePersonsJSON(const TypePersonsJSON &);
        TypePersonsJSON & operator=(const TypePersonsJSON &other);

        void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePersonsJSON(void);
        virtual ~TypePersonsJSON(void);
        bool  hasContacts(void) const;
        size_t  countOfContacts(void) const;
        OneContactJSON *  elementOfContacts(size_t element_num);
        const OneContactJSON *  elementOfContacts(size_t element_num) const;
        std::vector< OneContactJSON * >  getContacts(void);
        const std::vector< OneContactJSON * >  getContacts(void) const;
        bool  hasToUserWrittenName(void) const;
        std::string  getToUserWrittenName(void);
        const std::string  getToUserWrittenName(void) const;
        bool  hasToUserSpokenName(void) const;
        std::string  getToUserSpokenName(void);
        const std::string  getToUserSpokenName(void) const;

        virtual size_t extraTypePersonsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePersonsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePersonsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePersonsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePersonsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePersonsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initContacts(void)
          {
            if (flagHasContacts)
              {
                for (size_t num2 = 0; num2 < storeContacts.size(); ++num2)
                  {
                    storeContacts[num2]->remove_reference();
                  }
              }
            flagHasContacts = true;
            storeContacts.clear();
          }
        void appendContacts(OneContactJSON * to_append)
          {
            if (!flagHasContacts)
              {
                flagHasContacts = true;
                storeContacts.clear();
              }
            assert(flagHasContacts);
            to_append->add_reference();
            storeContacts.push_back(to_append);
          }
        void unsetContacts(void)
          {
            if (flagHasContacts)
              {
                for (size_t num3 = 0; num3 < storeContacts.size(); ++num3)
                  {
                    storeContacts[num3]->remove_reference();
                  }
              }
            flagHasContacts = false;
            storeContacts.clear();
          }
        void setToUserWrittenName(std::string new_value)
          {
            flagHasToUserWrittenName = true;
            storeToUserWrittenName = new_value;
          }
        void unsetToUserWrittenName(void)
          {
            flagHasToUserWrittenName = false;
          }
        void setToUserSpokenName(std::string new_value)
          {
            flagHasToUserSpokenName = true;
            storeToUserSpokenName = new_value;
          }
        void unsetToUserSpokenName(void)
          {
            flagHasToUserSpokenName = false;
          }

        virtual void extraTypePersonsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePersonsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePersonsLookup(key);
            if (old_field == NULL)
              {
                extraTypePersonsAppendPair(key, new_component);
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
            if (flagHasContacts)
              {
                handler->start_pair("Contacts");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
                  {
                    storeContacts[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            assert(flagHasToUserWrittenName);
            handler->start_pair("ToUserWrittenName");
            handler->string_value(storeToUserWrittenName);
            assert(flagHasToUserSpokenName);
            handler->start_pair("ToUserSpokenName");
            handler->string_value(storeToUserSpokenName);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasToUserWrittenName()))
              {
                return "When parsing the object for %what%, the \"ToUserWrittenName\" field was missing.";
              }
            if (!(hasToUserSpokenName()))
              {
                return "When parsing the object for %what%, the \"ToUserSpokenName\" field was missing.";
              }
            return NULL;
          }

        static TypePersonsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePersonsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePersonsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePersonsJSON>, TypePersonsJSON *, bool> generator("Type TypePersons", ignore_extras);
                parse_json_value(text, "Text for TypePersonsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePersonsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePersonsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePersonsJSON>, TypePersonsJSON *, bool> generator("Type TypePersons", ignore_extras);
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
            JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorContacts;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserWrittenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserSpokenName;
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
                TypePersonsJSON *result = new TypePersonsJSON();
                assert(result != NULL);
                RCHandle<TypePersonsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePersonsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePersonsJSON *result)
              {
                if (fieldGeneratorContacts.have_value)
                  {
                    result->initContacts();
                    size_t count = fieldGeneratorContacts.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendContacts(fieldGeneratorContacts.value[num].referenced());
                      }
                    fieldGeneratorContacts.value.clear();
                    fieldGeneratorContacts.have_value = false;
                  }
                if (fieldGeneratorToUserWrittenName.have_value)
                  {
                    result->setToUserWrittenName(fieldGeneratorToUserWrittenName.value);
                    fieldGeneratorToUserWrittenName.have_value = false;
                  }
                else if (!(result->hasToUserWrittenName()))
                  {
                    error("When parsing the object for %what%, the \"ToUserWrittenName\" field was missing.");
                  }
                if (fieldGeneratorToUserSpokenName.have_value)
                  {
                    result->setToUserSpokenName(fieldGeneratorToUserSpokenName.value);
                    fieldGeneratorToUserSpokenName.have_value = false;
                  }
                else if (!(result->hasToUserSpokenName()))
                  {
                    error("When parsing the object for %what%, the \"ToUserSpokenName\" field was missing.");
                  }
              }
            virtual void handle_result(TypePersonsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ontacts") == 0)
                            return &fieldGeneratorContacts;
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "oUser", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'S':
                                    if (strcmp(&(field_name[7]), "pokenName") == 0)
                                        return &fieldGeneratorToUserSpokenName;
                                    break;
                                case 'W':
                                    if (strcmp(&(field_name[7]), "rittenName") == 0)
                                        return &fieldGeneratorToUserWrittenName;
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
            Generator(bool ignore_extras = false) : fieldGeneratorContacts("field \"Contacts\" of the TypePersons class", ignore_extras), fieldGeneratorToUserWrittenName("field \"ToUserWrittenName\" of the TypePersons class"), fieldGeneratorToUserSpokenName("field \"ToUserSpokenName\" of the TypePersons class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePersons class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorContacts.reset();
                fieldGeneratorToUserWrittenName.reset();
                fieldGeneratorToUserSpokenName.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasPersons;
    std::vector< TypePersonsJSON * > storePersons;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    PersonGroupJSON(const PersonGroupJSON &);
    PersonGroupJSON & operator=(const PersonGroupJSON &other);

    void  fromJSONPersons(JSONValue *json_value, bool ignore_extras = false);


  public:
    PersonGroupJSON(void);
    virtual ~PersonGroupJSON(void);
    bool  hasPersons(void) const;
    size_t  countOfPersons(void) const;
    TypePersonsJSON *  elementOfPersons(size_t element_num);
    const TypePersonsJSON *  elementOfPersons(size_t element_num) const;
    std::vector< TypePersonsJSON * >  getPersons(void);
    const std::vector< TypePersonsJSON * >  getPersons(void) const;

    virtual size_t extraPersonGroupComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraPersonGroupComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraPersonGroupComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraPersonGroupComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraPersonGroupLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraPersonGroupLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initPersons(void)
      {
        if (flagHasPersons)
          {
            for (size_t num5 = 0; num5 < storePersons.size(); ++num5)
              {
                storePersons[num5]->remove_reference();
              }
          }
        flagHasPersons = true;
        storePersons.clear();
      }
    void appendPersons(TypePersonsJSON * to_append)
      {
        if (!flagHasPersons)
          {
            flagHasPersons = true;
            storePersons.clear();
          }
        assert(flagHasPersons);
        to_append->add_reference();
        storePersons.push_back(to_append);
      }
    void unsetPersons(void)
      {
        if (flagHasPersons)
          {
            for (size_t num6 = 0; num6 < storePersons.size(); ++num6)
              {
                storePersons[num6]->remove_reference();
              }
          }
        flagHasPersons = false;
        storePersons.clear();
      }

    virtual void extraPersonGroupAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraPersonGroupSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraPersonGroupLookup(key);
        if (old_field == NULL)
          {
            extraPersonGroupAppendPair(key, new_component);
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
        assert(flagHasPersons);
        handler->start_pair("Persons");
        assert(storePersons.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storePersons.size(); ++num1)
          {
            storePersons[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPersons()))
          {
            return "When parsing the object for %what%, the \"Persons\" field was missing.";
          }
        return NULL;
      }

    static PersonGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static PersonGroupJSON *from_text(const char *text, bool ignore_extras = false)
      {
        PersonGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PersonGroupJSON>, PersonGroupJSON *, bool> generator("Type PersonGroup", ignore_extras);
            parse_json_value(text, "Text for PersonGroupJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static PersonGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        PersonGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<PersonGroupJSON>, PersonGroupJSON *, bool> generator("Type PersonGroup", ignore_extras);
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
        JSONHoldingArrayGenerator<TypePersonsJSON::Generator, RCHandle<TypePersonsJSON>, TypePersonsJSON *, bool > fieldGeneratorPersons;
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
            PersonGroupJSON *result = new PersonGroupJSON();
            assert(result != NULL);
            RCHandle<PersonGroupJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraPersonGroupAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(PersonGroupJSON *result)
          {
            if (fieldGeneratorPersons.have_value)
              {
                result->initPersons();
                size_t count = fieldGeneratorPersons.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPersons(fieldGeneratorPersons.value[num].referenced());
                  }
                fieldGeneratorPersons.value.clear();
                fieldGeneratorPersons.have_value = false;
              }
            else if (!(result->hasPersons()))
              {
                error("When parsing the object for %what%, the \"Persons\" field was missing.");
              }
          }
        virtual void handle_result(PersonGroupJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Persons") == 0)
                return &fieldGeneratorPersons;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPersons("field \"Persons\" of the PersonGroup class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the PersonGroup class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPersons.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* PERSONGROUPJSON_H */
