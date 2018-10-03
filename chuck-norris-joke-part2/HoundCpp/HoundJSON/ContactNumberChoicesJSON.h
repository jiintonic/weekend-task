/* file "ContactNumberChoicesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONTACTNUMBERCHOICESJSON_H
#define CONTACTNUMBERCHOICESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "OneContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ContactNumberChoicesJSON : public ReferenceCounted
  {
  public:
    class TypeChoicesJSON : public ReferenceCounted
      {
      public:
        class TypePhoneEntriesJSON : public ReferenceCounted
          {
          private:
            bool flagHasContactIndex;
            OInteger storeContactIndex;
            bool flagHasEntryIndex;
            OInteger storeEntryIndex;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypePhoneEntriesJSON(const TypePhoneEntriesJSON &);
            TypePhoneEntriesJSON & operator=(const TypePhoneEntriesJSON &other);

            void  fromJSONContactIndex(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONEntryIndex(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypePhoneEntriesJSON(void);
            virtual ~TypePhoneEntriesJSON(void);
            bool  hasContactIndex(void) const;
            OInteger  getContactIndex(void);
            const OInteger  getContactIndex(void) const;
            bool  hasEntryIndex(void) const;
            OInteger  getEntryIndex(void);
            const OInteger  getEntryIndex(void) const;

            virtual size_t extraTypePhoneEntriesComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypePhoneEntriesComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypePhoneEntriesComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypePhoneEntriesComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypePhoneEntriesLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypePhoneEntriesLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setContactIndex(OInteger new_value)
              {
                flagHasContactIndex = true;
                if (new_value < 0)
                    throw("The value for field ContactIndex of TypePhoneEntriesJSON is less than the lower bound (0) for that field.");
                storeContactIndex = new_value;
              }
            void unsetContactIndex(void)
              {
                flagHasContactIndex = false;
              }
            void setEntryIndex(OInteger new_value)
              {
                flagHasEntryIndex = true;
                if (new_value < 0)
                    throw("The value for field EntryIndex of TypePhoneEntriesJSON is less than the lower bound (0) for that field.");
                storeEntryIndex = new_value;
              }
            void unsetEntryIndex(void)
              {
                flagHasEntryIndex = false;
              }

            virtual void extraTypePhoneEntriesAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypePhoneEntriesSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypePhoneEntriesLookup(key);
                if (old_field == NULL)
                  {
                    extraTypePhoneEntriesAppendPair(key, new_component);
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
                assert(flagHasContactIndex);
                handler->start_pair("ContactIndex");
                handler->number_value(storeContactIndex.get_o_integer());
                assert(flagHasEntryIndex);
                handler->start_pair("EntryIndex");
                handler->number_value(storeEntryIndex.get_o_integer());
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasContactIndex()))
                  {
                    return "When parsing the object for %what%, the \"ContactIndex\" field was missing.";
                  }
                if (!(hasEntryIndex()))
                  {
                    return "When parsing the object for %what%, the \"EntryIndex\" field was missing.";
                  }
                return NULL;
              }

            static TypePhoneEntriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypePhoneEntriesJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypePhoneEntriesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePhoneEntriesJSON>, TypePhoneEntriesJSON *, bool> generator("Type TypePhoneEntries", ignore_extras);
                    parse_json_value(text, "Text for TypePhoneEntriesJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypePhoneEntriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypePhoneEntriesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePhoneEntriesJSON>, TypePhoneEntriesJSON *, bool> generator("Type TypePhoneEntries", ignore_extras);
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
                static char lowerBoundContactIndex[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundContactIndex>, OInteger, o_integer > fieldGeneratorContactIndex;
                static char lowerBoundEntryIndex[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundEntryIndex>, OInteger, o_integer > fieldGeneratorEntryIndex;
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
                    TypePhoneEntriesJSON *result = new TypePhoneEntriesJSON();
                    assert(result != NULL);
                    RCHandle<TypePhoneEntriesJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypePhoneEntriesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypePhoneEntriesJSON *result)
                  {
                    if (fieldGeneratorContactIndex.have_value)
                      {
                        result->setContactIndex(fieldGeneratorContactIndex.value);
                        fieldGeneratorContactIndex.have_value = false;
                      }
                    else if (!(result->hasContactIndex()))
                      {
                        error("When parsing the object for %what%, the \"ContactIndex\" field was missing.");
                      }
                    if (fieldGeneratorEntryIndex.have_value)
                      {
                        result->setEntryIndex(fieldGeneratorEntryIndex.value);
                        fieldGeneratorEntryIndex.have_value = false;
                      }
                    else if (!(result->hasEntryIndex()))
                      {
                        error("When parsing the object for %what%, the \"EntryIndex\" field was missing.");
                      }
                  }
                virtual void handle_result(TypePhoneEntriesJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[1]), "ontactIndex") == 0)
                                return &fieldGeneratorContactIndex;
                            break;
                        case 'E':
                            if (strcmp(&(field_name[1]), "ntryIndex") == 0)
                                return &fieldGeneratorEntryIndex;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorContactIndex("field \"ContactIndex\" of the TypePhoneEntries class"), fieldGeneratorEntryIndex("field \"EntryIndex\" of the TypePhoneEntries class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypePhoneEntries class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorContactIndex.reset();
                    fieldGeneratorEntryIndex.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasPhoneNumber;
        std::string storePhoneNumber;
        bool flagHasPhoneEntries;
        std::vector< TypePhoneEntriesJSON * > storePhoneEntries;
        bool flagHasToUserWrittenName;
        std::string storeToUserWrittenName;
        bool flagHasToUserSpokenName;
        std::string storeToUserSpokenName;
        bool flagHasFromUserNames;
        std::vector< std::string > storeFromUserNames;
        bool flagHasDefiningCategory;
        std::string storeDefiningCategory;
        bool flagHasCategories;
        std::vector< std::string > storeCategories;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeChoicesJSON(const TypeChoicesJSON &);
        TypeChoicesJSON & operator=(const TypeChoicesJSON &other);

        void  fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPhoneEntries(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFromUserNames(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDefiningCategory(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCategories(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeChoicesJSON(void);
        virtual ~TypeChoicesJSON(void);
        bool  hasPhoneNumber(void) const;
        std::string  getPhoneNumber(void);
        const std::string  getPhoneNumber(void) const;
        bool  hasPhoneEntries(void) const;
        size_t  countOfPhoneEntries(void) const;
        TypePhoneEntriesJSON *  elementOfPhoneEntries(size_t element_num);
        const TypePhoneEntriesJSON *  elementOfPhoneEntries(size_t element_num) const;
        std::vector< TypePhoneEntriesJSON * >  getPhoneEntries(void);
        const std::vector< TypePhoneEntriesJSON * >  getPhoneEntries(void) const;
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
        bool  hasDefiningCategory(void) const;
        std::string  getDefiningCategory(void);
        const std::string  getDefiningCategory(void) const;
        bool  hasCategories(void) const;
        size_t  countOfCategories(void) const;
        std::string  elementOfCategories(size_t element_num);
        const std::string  elementOfCategories(size_t element_num) const;
        std::vector< std::string >  getCategories(void);
        const std::vector< std::string >  getCategories(void) const;

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

        void setPhoneNumber(std::string new_value)
          {
            flagHasPhoneNumber = true;
            storePhoneNumber = new_value;
          }
        void unsetPhoneNumber(void)
          {
            flagHasPhoneNumber = false;
          }
        void initPhoneEntries(void)
          {
            if (flagHasPhoneEntries)
              {
                for (size_t num2 = 0; num2 < storePhoneEntries.size(); ++num2)
                  {
                    storePhoneEntries[num2]->remove_reference();
                  }
              }
            flagHasPhoneEntries = true;
            storePhoneEntries.clear();
          }
        void appendPhoneEntries(TypePhoneEntriesJSON * to_append)
          {
            if (!flagHasPhoneEntries)
              {
                flagHasPhoneEntries = true;
                storePhoneEntries.clear();
              }
            assert(flagHasPhoneEntries);
            to_append->add_reference();
            storePhoneEntries.push_back(to_append);
          }
        void unsetPhoneEntries(void)
          {
            if (flagHasPhoneEntries)
              {
                for (size_t num3 = 0; num3 < storePhoneEntries.size(); ++num3)
                  {
                    storePhoneEntries[num3]->remove_reference();
                  }
              }
            flagHasPhoneEntries = false;
            storePhoneEntries.clear();
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
        void setDefiningCategory(std::string new_value)
          {
            flagHasDefiningCategory = true;
            storeDefiningCategory = new_value;
          }
        void unsetDefiningCategory(void)
          {
            flagHasDefiningCategory = false;
          }
        void initCategories(void)
          {
            flagHasCategories = true;
            storeCategories.clear();
          }
        void appendCategories(std::string to_append)
          {
            if (!flagHasCategories)
              {
                flagHasCategories = true;
                storeCategories.clear();
              }
            assert(flagHasCategories);
            storeCategories.push_back(to_append);
          }
        void unsetCategories(void)
          {
            flagHasCategories = false;
            storeCategories.clear();
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
            assert(flagHasPhoneNumber);
            handler->start_pair("PhoneNumber");
            handler->string_value(storePhoneNumber);
            assert(flagHasPhoneEntries);
            handler->start_pair("PhoneEntries");
            assert(storePhoneEntries.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storePhoneEntries.size(); ++num1)
              {
                storePhoneEntries[num1]->write_as_json(handler);
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
            if (flagHasDefiningCategory)
              {
                handler->start_pair("DefiningCategory");
                handler->string_value(storeDefiningCategory);
              }
            assert(flagHasCategories);
            handler->start_pair("Categories");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeCategories.size(); ++num3)
              {
                handler->string_value(storeCategories[num3]);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasPhoneNumber()))
              {
                return "When parsing the object for %what%, the \"PhoneNumber\" field was missing.";
              }
            if (!(hasPhoneEntries()))
              {
                return "When parsing the object for %what%, the \"PhoneEntries\" field was missing.";
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
            if (!(hasCategories()))
              {
                return "When parsing the object for %what%, the \"Categories\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhoneNumber;
            JSONHoldingArrayGenerator<TypePhoneEntriesJSON::Generator, RCHandle<TypePhoneEntriesJSON>, TypePhoneEntriesJSON *, bool > fieldGeneratorPhoneEntries;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserWrittenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorToUserSpokenName;
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFromUserNames;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefiningCategory;
            JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategories;
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
                if (fieldGeneratorPhoneNumber.have_value)
                  {
                    result->setPhoneNumber(fieldGeneratorPhoneNumber.value);
                    fieldGeneratorPhoneNumber.have_value = false;
                  }
                else if (!(result->hasPhoneNumber()))
                  {
                    error("When parsing the object for %what%, the \"PhoneNumber\" field was missing.");
                  }
                if (fieldGeneratorPhoneEntries.have_value)
                  {
                    result->initPhoneEntries();
                    size_t count = fieldGeneratorPhoneEntries.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendPhoneEntries(fieldGeneratorPhoneEntries.value[num].referenced());
                      }
                    fieldGeneratorPhoneEntries.value.clear();
                    fieldGeneratorPhoneEntries.have_value = false;
                  }
                else if (!(result->hasPhoneEntries()))
                  {
                    error("When parsing the object for %what%, the \"PhoneEntries\" field was missing.");
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
                if (fieldGeneratorDefiningCategory.have_value)
                  {
                    result->setDefiningCategory(fieldGeneratorDefiningCategory.value);
                    fieldGeneratorDefiningCategory.have_value = false;
                  }
                if (fieldGeneratorCategories.have_value)
                  {
                    result->initCategories();
                    size_t count = fieldGeneratorCategories.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendCategories(fieldGeneratorCategories.value[num]);
                      }
                    fieldGeneratorCategories.value.clear();
                    fieldGeneratorCategories.have_value = false;
                  }
                else if (!(result->hasCategories()))
                  {
                    error("When parsing the object for %what%, the \"Categories\" field was missing.");
                  }
              }
            virtual void handle_result(TypeChoicesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ategories") == 0)
                            return &fieldGeneratorCategories;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "efiningCategory") == 0)
                            return &fieldGeneratorDefiningCategory;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "romUserNames") == 0)
                            return &fieldGeneratorFromUserNames;
                        break;
                    case 'P':
                        if (strncmp(&(field_name[1]), "hone", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'E':
                                    if (strcmp(&(field_name[6]), "ntries") == 0)
                                        return &fieldGeneratorPhoneEntries;
                                    break;
                                case 'N':
                                    if (strcmp(&(field_name[6]), "umber") == 0)
                                        return &fieldGeneratorPhoneNumber;
                                    break;
                                default:
                                    break;
                              }
                          }
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
            Generator(bool ignore_extras = false) : fieldGeneratorPhoneNumber("field \"PhoneNumber\" of the TypeChoices class"), fieldGeneratorPhoneEntries("field \"PhoneEntries\" of the TypeChoices class", ignore_extras), fieldGeneratorToUserWrittenName("field \"ToUserWrittenName\" of the TypeChoices class"), fieldGeneratorToUserSpokenName("field \"ToUserSpokenName\" of the TypeChoices class"), fieldGeneratorFromUserNames("field \"FromUserNames\" of the TypeChoices class"), fieldGeneratorDefiningCategory("field \"DefiningCategory\" of the TypeChoices class"), fieldGeneratorCategories("field \"Categories\" of the TypeChoices class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeChoices class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorPhoneNumber.reset();
                fieldGeneratorPhoneEntries.reset();
                fieldGeneratorToUserWrittenName.reset();
                fieldGeneratorToUserSpokenName.reset();
                fieldGeneratorFromUserNames.reset();
                fieldGeneratorDefiningCategory.reset();
                fieldGeneratorCategories.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasContacts;
    std::vector< OneContactJSON * > storeContacts;
    bool flagHasChoices;
    std::vector< TypeChoicesJSON * > storeChoices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ContactNumberChoicesJSON(const ContactNumberChoicesJSON &);
    ContactNumberChoicesJSON & operator=(const ContactNumberChoicesJSON &other);

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONChoices(JSONValue *json_value, bool ignore_extras = false);


  public:
    ContactNumberChoicesJSON(void);
    virtual ~ContactNumberChoicesJSON(void);
    bool  hasContacts(void) const;
    size_t  countOfContacts(void) const;
    OneContactJSON *  elementOfContacts(size_t element_num);
    const OneContactJSON *  elementOfContacts(size_t element_num) const;
    std::vector< OneContactJSON * >  getContacts(void);
    const std::vector< OneContactJSON * >  getContacts(void) const;
    bool  hasChoices(void) const;
    size_t  countOfChoices(void) const;
    TypeChoicesJSON *  elementOfChoices(size_t element_num);
    const TypeChoicesJSON *  elementOfChoices(size_t element_num) const;
    std::vector< TypeChoicesJSON * >  getChoices(void);
    const std::vector< TypeChoicesJSON * >  getChoices(void) const;

    virtual size_t extraContactNumberChoicesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraContactNumberChoicesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraContactNumberChoicesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraContactNumberChoicesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraContactNumberChoicesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraContactNumberChoicesLookup(const char *field_name) const
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
            for (size_t num6 = 0; num6 < storeContacts.size(); ++num6)
              {
                storeContacts[num6]->remove_reference();
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
            for (size_t num7 = 0; num7 < storeContacts.size(); ++num7)
              {
                storeContacts[num7]->remove_reference();
              }
          }
        flagHasContacts = false;
        storeContacts.clear();
      }
    void initChoices(void)
      {
        if (flagHasChoices)
          {
            for (size_t num8 = 0; num8 < storeChoices.size(); ++num8)
              {
                storeChoices[num8]->remove_reference();
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
            for (size_t num9 = 0; num9 < storeChoices.size(); ++num9)
              {
                storeChoices[num9]->remove_reference();
              }
          }
        flagHasChoices = false;
        storeChoices.clear();
      }

    virtual void extraContactNumberChoicesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraContactNumberChoicesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraContactNumberChoicesLookup(key);
        if (old_field == NULL)
          {
            extraContactNumberChoicesAppendPair(key, new_component);
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
        assert(flagHasChoices);
        handler->start_pair("Choices");
        assert(storeChoices.size() >= 2);
        handler->start_array();
        for (size_t num2 = 0; num2 < storeChoices.size(); ++num2)
          {
            storeChoices[num2]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasContacts()))
          {
            return "When parsing the object for %what%, the \"Contacts\" field was missing.";
          }
        if (!(hasChoices()))
          {
            return "When parsing the object for %what%, the \"Choices\" field was missing.";
          }
        return NULL;
      }

    static ContactNumberChoicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ContactNumberChoicesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ContactNumberChoicesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool> generator("Type ContactNumberChoices", ignore_extras);
            parse_json_value(text, "Text for ContactNumberChoicesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ContactNumberChoicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ContactNumberChoicesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool> generator("Type ContactNumberChoices", ignore_extras);
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
            ContactNumberChoicesJSON *result = new ContactNumberChoicesJSON();
            assert(result != NULL);
            RCHandle<ContactNumberChoicesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraContactNumberChoicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ContactNumberChoicesJSON *result)
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
        virtual void handle_result(ContactNumberChoicesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "C", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'h':
                        if (strcmp(&(field_name[2]), "oices") == 0)
                            return &fieldGeneratorChoices;
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "ntacts") == 0)
                            return &fieldGeneratorContacts;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorContacts("field \"Contacts\" of the ContactNumberChoices class", ignore_extras), fieldGeneratorChoices("field \"Choices\" of the ContactNumberChoices class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ContactNumberChoices class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContacts.reset();
            fieldGeneratorChoices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CONTACTNUMBERCHOICESJSON_H */
