/* file "WhichContactChoicesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef WHICHCONTACTCHOICESJSON_H
#define WHICHCONTACTCHOICESJSON_H

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


class WhichContactChoicesJSON : public ReferenceCounted
  {
  public:
    class TypeChoicesJSON : public ReferenceCounted
      {
      private:
        bool flagHasContacts;
        std::vector< OneContactJSON * > storeContacts;
        bool flagHasToUserWrittenName;
        std::string storeToUserWrittenName;
        bool flagHasToUserSpokenName;
        std::string storeToUserSpokenName;
        bool flagHasFromUserNames;
        std::vector< std::string > storeFromUserNames;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeChoicesJSON(const TypeChoicesJSON &);
        TypeChoicesJSON & operator=(const TypeChoicesJSON &other);

        void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFromUserNames(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeChoicesJSON(void);
        virtual ~TypeChoicesJSON(void);
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
        bool  hasFromUserNames(void) const;
        size_t  countOfFromUserNames(void) const;
        std::string  elementOfFromUserNames(size_t element_num);
        const std::string  elementOfFromUserNames(size_t element_num) const;
        std::vector< std::string >  getFromUserNames(void);
        const std::vector< std::string >  getFromUserNames(void) const;

        virtual size_t extraTypeChoicesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeChoicesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeChoicesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeChoicesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeChoicesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeChoicesLookup(const char *field_name) const
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
        void initFromUserNames(void)
          {
            flagHasFromUserNames = true;
            storeFromUserNames.clear();
          }
        void appendFromUserNames(std::string to_append)
          {
            if (!flagHasFromUserNames)
              {
                flagHasFromUserNames = true;
                storeFromUserNames.clear();
              }
            assert(flagHasFromUserNames);
            storeFromUserNames.push_back(to_append);
          }
        void unsetFromUserNames(void)
          {
            flagHasFromUserNames = false;
            storeFromUserNames.clear();
          }

        virtual void extraTypeChoicesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeChoicesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeChoicesLookup(key);
            if (old_field == NULL)
              {
                extraTypeChoicesAppendPair(key, new_component);
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
            assert(flagHasContacts);
            handler->start_pair("Contacts");
            assert(storeContacts.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
              {
                storeContacts[num1]->write_as_json(handler);
              }
            handler->finish_array();
            assert(flagHasToUserWrittenName);
            handler->start_pair("ToUserWrittenName");
            handler->string_value(storeToUserWrittenName);
            assert(flagHasToUserSpokenName);
            handler->start_pair("ToUserSpokenName");
            handler->string_value(storeToUserSpokenName);
            assert(flagHasFromUserNames);
            handler->start_pair("FromUserNames");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeFromUserNames.size(); ++num2)
              {
                handler->string_value(storeFromUserNames[num2]);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasContacts()))
              {
                return "When parsing the object for %what%, the \"Contacts\" field was missing.";
              }
            if (!(hasToUserWrittenName()))
              {
                return "When parsing the object for %what%, the \"ToUserWrittenName\" field was missing.";
              }
            if (!(hasToUserSpokenName()))
              {
                return "When parsing the object for %what%, the \"ToUserSpokenName\" field was missing.";
              }
            if (!(hasFromUserNames()))
              {
                return "When parsing the object for %what%, the \"FromUserNames\" field was missing.";
              }
            return NULL;
          }

        static TypeChoicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeChoicesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeChoicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeChoicesJSON>, TypeChoicesJSON *, bool> generator("Type TypeChoices", ignore_extras);
                parse_json_value(text, "Text for TypeChoicesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeChoicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeChoicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeChoicesJSON>, TypeChoicesJSON *, bool> generator("Type TypeChoices", ignore_extras);
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
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFromUserNames;
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
                TypeChoicesJSON *result = new TypeChoicesJSON();
                assert(result != NULL);
                RCHandle<TypeChoicesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeChoicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeChoicesJSON *result)
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
                else if (!(result->hasContacts()))
                  {
                    error("When parsing the object for %what%, the \"Contacts\" field was missing.");
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
                if (fieldGeneratorFromUserNames.have_value)
                  {
                    result->initFromUserNames();
                    size_t count = fieldGeneratorFromUserNames.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendFromUserNames(fieldGeneratorFromUserNames.value[num]);
                      }
                    fieldGeneratorFromUserNames.value.clear();
                    fieldGeneratorFromUserNames.have_value = false;
                  }
                else if (!(result->hasFromUserNames()))
                  {
                    error("When parsing the object for %what%, the \"FromUserNames\" field was missing.");
                  }
              }
            virtual void handle_result(TypeChoicesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ontacts") == 0)
                            return &fieldGeneratorContacts;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "romUserNames") == 0)
                            return &fieldGeneratorFromUserNames;
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
            Generator(bool ignore_extras = false) : fieldGeneratorContacts("field \"Contacts\" of the TypeChoices class", ignore_extras), fieldGeneratorToUserWrittenName("field \"ToUserWrittenName\" of the TypeChoices class"), fieldGeneratorToUserSpokenName("field \"ToUserSpokenName\" of the TypeChoices class"), fieldGeneratorFromUserNames("field \"FromUserNames\" of the TypeChoices class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeChoices class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorContacts.reset();
                fieldGeneratorToUserWrittenName.reset();
                fieldGeneratorToUserSpokenName.reset();
                fieldGeneratorFromUserNames.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasChoices;
    std::vector< TypeChoicesJSON * > storeChoices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    WhichContactChoicesJSON(const WhichContactChoicesJSON &);
    WhichContactChoicesJSON & operator=(const WhichContactChoicesJSON &other);

    void  fromJSONChoices(JSONValue *json_value, bool ignore_extras = false);


  public:
    WhichContactChoicesJSON(void);
    virtual ~WhichContactChoicesJSON(void);
    bool  hasChoices(void) const;
    size_t  countOfChoices(void) const;
    TypeChoicesJSON *  elementOfChoices(size_t element_num);
    const TypeChoicesJSON *  elementOfChoices(size_t element_num) const;
    std::vector< TypeChoicesJSON * >  getChoices(void);
    const std::vector< TypeChoicesJSON * >  getChoices(void) const;

    virtual size_t extraWhichContactChoicesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraWhichContactChoicesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraWhichContactChoicesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraWhichContactChoicesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraWhichContactChoicesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraWhichContactChoicesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initChoices(void)
      {
        if (flagHasChoices)
          {
            for (size_t num5 = 0; num5 < storeChoices.size(); ++num5)
              {
                storeChoices[num5]->remove_reference();
              }
          }
        flagHasChoices = true;
        storeChoices.clear();
      }
    void appendChoices(TypeChoicesJSON * to_append)
      {
        if (!flagHasChoices)
          {
            flagHasChoices = true;
            storeChoices.clear();
          }
        assert(flagHasChoices);
        to_append->add_reference();
        storeChoices.push_back(to_append);
      }
    void unsetChoices(void)
      {
        if (flagHasChoices)
          {
            for (size_t num6 = 0; num6 < storeChoices.size(); ++num6)
              {
                storeChoices[num6]->remove_reference();
              }
          }
        flagHasChoices = false;
        storeChoices.clear();
      }

    virtual void extraWhichContactChoicesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraWhichContactChoicesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraWhichContactChoicesLookup(key);
        if (old_field == NULL)
          {
            extraWhichContactChoicesAppendPair(key, new_component);
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
        assert(flagHasChoices);
        handler->start_pair("Choices");
        assert(storeChoices.size() >= 2);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeChoices.size(); ++num1)
          {
            storeChoices[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasChoices()))
          {
            return "When parsing the object for %what%, the \"Choices\" field was missing.";
          }
        return NULL;
      }

    static WhichContactChoicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static WhichContactChoicesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        WhichContactChoicesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhichContactChoicesJSON>, WhichContactChoicesJSON *, bool> generator("Type WhichContactChoices", ignore_extras);
            parse_json_value(text, "Text for WhichContactChoicesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static WhichContactChoicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        WhichContactChoicesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<WhichContactChoicesJSON>, WhichContactChoicesJSON *, bool> generator("Type WhichContactChoices", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeChoicesJSON::Generator, RCHandle<TypeChoicesJSON>, TypeChoicesJSON *, bool > fieldGeneratorChoices;
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
            WhichContactChoicesJSON *result = new WhichContactChoicesJSON();
            assert(result != NULL);
            RCHandle<WhichContactChoicesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraWhichContactChoicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(WhichContactChoicesJSON *result)
          {
            if (fieldGeneratorChoices.have_value)
              {
                result->initChoices();
                size_t count = fieldGeneratorChoices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendChoices(fieldGeneratorChoices.value[num].referenced());
                  }
                fieldGeneratorChoices.value.clear();
                fieldGeneratorChoices.have_value = false;
              }
            else if (!(result->hasChoices()))
              {
                error("When parsing the object for %what%, the \"Choices\" field was missing.");
              }
          }
        virtual void handle_result(WhichContactChoicesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Choices") == 0)
                return &fieldGeneratorChoices;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorChoices("field \"Choices\" of the WhichContactChoices class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the WhichContactChoices class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorChoices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* WHICHCONTACTCHOICESJSON_H */
