/* file "OneContactJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ONECONTACTJSON_H
#define ONECONTACTJSON_H

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
#include "DateAndOrTimeJSON.h"
#include "DateAndOrTimeJSON.h"
#include "MapLocationForContactsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class OneContactJSON : public ReferenceCounted
  {
  public:
    class TypePhoneEntriesJSON : public ReferenceCounted
      {
      private:
        bool flagHasCategory;
        std::string storeCategory;
        bool flagHasNumber;
        std::string storeNumber;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePhoneEntriesJSON(const TypePhoneEntriesJSON &);
        TypePhoneEntriesJSON & operator=(const TypePhoneEntriesJSON &other);

        void  fromJSONCategory(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePhoneEntriesJSON(void);
        virtual ~TypePhoneEntriesJSON(void);
        bool  hasCategory(void) const;
        std::string  getCategory(void);
        const std::string  getCategory(void) const;
        bool  hasNumber(void) const;
        std::string  getNumber(void);
        const std::string  getNumber(void) const;

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

        void setCategory(std::string new_value)
          {
            flagHasCategory = true;
            storeCategory = new_value;
          }
        void unsetCategory(void)
          {
            flagHasCategory = false;
          }
        void setNumber(std::string new_value)
          {
            flagHasNumber = true;
            storeNumber = new_value;
          }
        void unsetNumber(void)
          {
            flagHasNumber = false;
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
            if (flagHasCategory)
              {
                handler->start_pair("Category");
                handler->string_value(storeCategory);
              }
            assert(flagHasNumber);
            handler->start_pair("Number");
            handler->string_value(storeNumber);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasNumber()))
              {
                return "When parsing the object for %what%, the \"Number\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategory;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;
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
                if (fieldGeneratorCategory.have_value)
                  {
                    result->setCategory(fieldGeneratorCategory.value);
                    fieldGeneratorCategory.have_value = false;
                  }
                if (fieldGeneratorNumber.have_value)
                  {
                    result->setNumber(fieldGeneratorNumber.value);
                    fieldGeneratorNumber.have_value = false;
                  }
                else if (!(result->hasNumber()))
                  {
                    error("When parsing the object for %what%, the \"Number\" field was missing.");
                  }
              }
            virtual void handle_result(TypePhoneEntriesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ategory") == 0)
                            return &fieldGeneratorCategory;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "umber") == 0)
                            return &fieldGeneratorNumber;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCategory("field \"Category\" of the TypePhoneEntries class"), fieldGeneratorNumber("field \"Number\" of the TypePhoneEntries class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePhoneEntries class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCategory.reset();
                fieldGeneratorNumber.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeEmailEntriesJSON : public ReferenceCounted
      {
      private:
        bool flagHasCategory;
        std::string storeCategory;
        bool flagHasAddress;
        std::string storeAddress;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeEmailEntriesJSON(const TypeEmailEntriesJSON &);
        TypeEmailEntriesJSON & operator=(const TypeEmailEntriesJSON &other);

        void  fromJSONCategory(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAddress(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeEmailEntriesJSON(void);
        virtual ~TypeEmailEntriesJSON(void);
        bool  hasCategory(void) const;
        std::string  getCategory(void);
        const std::string  getCategory(void) const;
        bool  hasAddress(void) const;
        std::string  getAddress(void);
        const std::string  getAddress(void) const;

        virtual size_t extraTypeEmailEntriesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeEmailEntriesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeEmailEntriesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeEmailEntriesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeEmailEntriesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeEmailEntriesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCategory(std::string new_value)
          {
            flagHasCategory = true;
            storeCategory = new_value;
          }
        void unsetCategory(void)
          {
            flagHasCategory = false;
          }
        void setAddress(std::string new_value)
          {
            flagHasAddress = true;
            storeAddress = new_value;
          }
        void unsetAddress(void)
          {
            flagHasAddress = false;
          }

        virtual void extraTypeEmailEntriesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeEmailEntriesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeEmailEntriesLookup(key);
            if (old_field == NULL)
              {
                extraTypeEmailEntriesAppendPair(key, new_component);
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
            if (flagHasCategory)
              {
                handler->start_pair("Category");
                handler->string_value(storeCategory);
              }
            assert(flagHasAddress);
            handler->start_pair("Address");
            handler->string_value(storeAddress);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAddress()))
              {
                return "When parsing the object for %what%, the \"Address\" field was missing.";
              }
            return NULL;
          }

        static TypeEmailEntriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeEmailEntriesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeEmailEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEmailEntriesJSON>, TypeEmailEntriesJSON *, bool> generator("Type TypeEmailEntries", ignore_extras);
                parse_json_value(text, "Text for TypeEmailEntriesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeEmailEntriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeEmailEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeEmailEntriesJSON>, TypeEmailEntriesJSON *, bool> generator("Type TypeEmailEntries", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategory;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAddress;
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
                TypeEmailEntriesJSON *result = new TypeEmailEntriesJSON();
                assert(result != NULL);
                RCHandle<TypeEmailEntriesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeEmailEntriesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeEmailEntriesJSON *result)
              {
                if (fieldGeneratorCategory.have_value)
                  {
                    result->setCategory(fieldGeneratorCategory.value);
                    fieldGeneratorCategory.have_value = false;
                  }
                if (fieldGeneratorAddress.have_value)
                  {
                    result->setAddress(fieldGeneratorAddress.value);
                    fieldGeneratorAddress.have_value = false;
                  }
                else if (!(result->hasAddress()))
                  {
                    error("When parsing the object for %what%, the \"Address\" field was missing.");
                  }
              }
            virtual void handle_result(TypeEmailEntriesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "ddress") == 0)
                            return &fieldGeneratorAddress;
                        break;
                    case 'C':
                        if (strcmp(&(field_name[1]), "ategory") == 0)
                            return &fieldGeneratorCategory;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCategory("field \"Category\" of the TypeEmailEntries class"), fieldGeneratorAddress("field \"Address\" of the TypeEmailEntries class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeEmailEntries class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCategory.reset();
                fieldGeneratorAddress.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeMapAddressEntriesJSON : public ReferenceCounted
      {
      private:
        bool flagHasCategory;
        std::string storeCategory;
        bool flagHasAddress;
        MapLocationForContactsJSON * storeAddress;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMapAddressEntriesJSON(const TypeMapAddressEntriesJSON &);
        TypeMapAddressEntriesJSON & operator=(const TypeMapAddressEntriesJSON &other);

        void  fromJSONCategory(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAddress(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMapAddressEntriesJSON(void);
        virtual ~TypeMapAddressEntriesJSON(void);
        bool  hasCategory(void) const;
        std::string  getCategory(void);
        const std::string  getCategory(void) const;
        bool  hasAddress(void) const;
        MapLocationForContactsJSON *  getAddress(void);
        const MapLocationForContactsJSON *  getAddress(void) const;

        virtual size_t extraTypeMapAddressEntriesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMapAddressEntriesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMapAddressEntriesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMapAddressEntriesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMapAddressEntriesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMapAddressEntriesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCategory(std::string new_value)
          {
            flagHasCategory = true;
            storeCategory = new_value;
          }
        void unsetCategory(void)
          {
            flagHasCategory = false;
          }
        void setAddress(MapLocationForContactsJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAddress)
              {
                storeAddress->remove_reference();
              }
            flagHasAddress = true;
            storeAddress = new_value;
          }
        void unsetAddress(void)
          {
            if (flagHasAddress)
              {
                storeAddress->remove_reference();
              }
            flagHasAddress = false;
          }

        virtual void extraTypeMapAddressEntriesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMapAddressEntriesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMapAddressEntriesLookup(key);
            if (old_field == NULL)
              {
                extraTypeMapAddressEntriesAppendPair(key, new_component);
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
            if (flagHasCategory)
              {
                handler->start_pair("Category");
                handler->string_value(storeCategory);
              }
            assert(flagHasAddress);
            handler->start_pair("Address");
            storeAddress->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAddress()))
              {
                return "When parsing the object for %what%, the \"Address\" field was missing.";
              }
            return NULL;
          }

        static TypeMapAddressEntriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMapAddressEntriesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMapAddressEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMapAddressEntriesJSON>, TypeMapAddressEntriesJSON *, bool> generator("Type TypeMapAddressEntries", ignore_extras);
                parse_json_value(text, "Text for TypeMapAddressEntriesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMapAddressEntriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMapAddressEntriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMapAddressEntriesJSON>, TypeMapAddressEntriesJSON *, bool> generator("Type TypeMapAddressEntries", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategory;
            JSONHoldingGenerator<MapLocationForContactsJSON::Generator, RCHandle<MapLocationForContactsJSON>, MapLocationForContactsJSON *, bool > fieldGeneratorAddress;
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
                TypeMapAddressEntriesJSON *result = new TypeMapAddressEntriesJSON();
                assert(result != NULL);
                RCHandle<TypeMapAddressEntriesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMapAddressEntriesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMapAddressEntriesJSON *result)
              {
                if (fieldGeneratorCategory.have_value)
                  {
                    result->setCategory(fieldGeneratorCategory.value);
                    fieldGeneratorCategory.have_value = false;
                  }
                if (fieldGeneratorAddress.have_value)
                  {
                    result->setAddress(fieldGeneratorAddress.value.referenced());
                    fieldGeneratorAddress.have_value = false;
                  }
                else if (!(result->hasAddress()))
                  {
                    error("When parsing the object for %what%, the \"Address\" field was missing.");
                  }
              }
            virtual void handle_result(TypeMapAddressEntriesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "ddress") == 0)
                            return &fieldGeneratorAddress;
                        break;
                    case 'C':
                        if (strcmp(&(field_name[1]), "ategory") == 0)
                            return &fieldGeneratorCategory;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCategory("field \"Category\" of the TypeMapAddressEntries class"), fieldGeneratorAddress("field \"Address\" of the TypeMapAddressEntries class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMapAddressEntries class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCategory.reset();
                fieldGeneratorAddress.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    enum TypeSex
      {
        Sex_Female,
        Sex_Male
      };

    static TypeSex  stringToSex(const char *chars);
    static const char * stringFromSex(TypeSex the_enum);

  private:
    bool flagHasFirstName;
    std::string storeFirstName;
    bool flagHasLastName;
    std::string storeLastName;
    bool flagHasSingleName;
    std::string storeSingleName;
    bool flagHasNickNames;
    std::vector< std::string > storeNickNames;
    bool flagHasPhoneEntries;
    std::vector< TypePhoneEntriesJSON * > storePhoneEntries;
    bool flagHasDefaultPhone;
    std::string storeDefaultPhone;
    bool flagHasTimesCalled;
    OInteger storeTimesCalled;
    bool flagHasLastCalled;
    DateAndOrTimeJSON * storeLastCalled;
    bool flagHasTimesContacted;
    OInteger storeTimesContacted;
    bool flagHasLastContacted;
    DateAndOrTimeJSON * storeLastContacted;
    bool flagHasEmailEntries;
    std::vector< TypeEmailEntriesJSON * > storeEmailEntries;
    bool flagHasDefaultEmail;
    std::string storeDefaultEmail;
    bool flagHasMapAddressEntries;
    std::vector< TypeMapAddressEntriesJSON * > storeMapAddressEntries;
    bool flagHasDefaultMapAddress;
    std::string storeDefaultMapAddress;
    bool flagHasIsFavorite;
    bool storeIsFavorite;
    bool flagHasSex;
    TypeSex storeSex;
    bool flagHasIsVisible;
    bool storeIsVisible;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    OneContactJSON(const OneContactJSON &);
    OneContactJSON & operator=(const OneContactJSON &other);

    void  fromJSONFirstName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSingleName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNickNames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhoneEntries(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultPhone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimesCalled(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastCalled(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimesContacted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastContacted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmailEntries(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMapAddressEntries(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultMapAddress(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsFavorite(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSex(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsVisible(JSONValue *json_value, bool ignore_extras = false);


  public:
    OneContactJSON(void);
    virtual ~OneContactJSON(void);
    bool  hasFirstName(void) const;
    std::string  getFirstName(void);
    const std::string  getFirstName(void) const;
    bool  hasLastName(void) const;
    std::string  getLastName(void);
    const std::string  getLastName(void) const;
    bool  hasSingleName(void) const;
    std::string  getSingleName(void);
    const std::string  getSingleName(void) const;
    bool  hasNickNames(void) const;
    size_t  countOfNickNames(void) const;
    std::string  elementOfNickNames(size_t element_num);
    const std::string  elementOfNickNames(size_t element_num) const;
    std::vector< std::string >  getNickNames(void);
    const std::vector< std::string >  getNickNames(void) const;
    bool  hasPhoneEntries(void) const;
    size_t  countOfPhoneEntries(void) const;
    TypePhoneEntriesJSON *  elementOfPhoneEntries(size_t element_num);
    const TypePhoneEntriesJSON *  elementOfPhoneEntries(size_t element_num) const;
    std::vector< TypePhoneEntriesJSON * >  getPhoneEntries(void);
    const std::vector< TypePhoneEntriesJSON * >  getPhoneEntries(void) const;
    bool  hasDefaultPhone(void) const;
    std::string  getDefaultPhone(void);
    const std::string  getDefaultPhone(void) const;
    bool  hasTimesCalled(void) const;
    OInteger  getTimesCalled(void);
    const OInteger  getTimesCalled(void) const;
    bool  hasLastCalled(void) const;
    DateAndOrTimeJSON *  getLastCalled(void);
    const DateAndOrTimeJSON *  getLastCalled(void) const;
    bool  hasTimesContacted(void) const;
    OInteger  getTimesContacted(void);
    const OInteger  getTimesContacted(void) const;
    bool  hasLastContacted(void) const;
    DateAndOrTimeJSON *  getLastContacted(void);
    const DateAndOrTimeJSON *  getLastContacted(void) const;
    bool  hasEmailEntries(void) const;
    size_t  countOfEmailEntries(void) const;
    TypeEmailEntriesJSON *  elementOfEmailEntries(size_t element_num);
    const TypeEmailEntriesJSON *  elementOfEmailEntries(size_t element_num) const;
    std::vector< TypeEmailEntriesJSON * >  getEmailEntries(void);
    const std::vector< TypeEmailEntriesJSON * >  getEmailEntries(void) const;
    bool  hasDefaultEmail(void) const;
    std::string  getDefaultEmail(void);
    const std::string  getDefaultEmail(void) const;
    bool  hasMapAddressEntries(void) const;
    size_t  countOfMapAddressEntries(void) const;
    TypeMapAddressEntriesJSON *  elementOfMapAddressEntries(size_t element_num);
    const TypeMapAddressEntriesJSON *  elementOfMapAddressEntries(size_t element_num) const;
    std::vector< TypeMapAddressEntriesJSON * >  getMapAddressEntries(void);
    const std::vector< TypeMapAddressEntriesJSON * >  getMapAddressEntries(void) const;
    bool  hasDefaultMapAddress(void) const;
    std::string  getDefaultMapAddress(void);
    const std::string  getDefaultMapAddress(void) const;
    bool  hasIsFavorite(void) const;
    bool  getIsFavorite(void);
    const bool  getIsFavorite(void) const;
    bool  hasSex(void) const;
    TypeSex  getSex(void);
    const TypeSex  getSex(void) const;
    const char * getSexAsChars(void) const;
    std::string  getSexAsString(void) const;
    bool  hasIsVisible(void) const;
    bool  getIsVisible(void);
    const bool  getIsVisible(void) const;

    virtual size_t extraOneContactComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraOneContactComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraOneContactComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraOneContactComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraOneContactLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraOneContactLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFirstName(std::string new_value)
      {
        flagHasFirstName = true;
        storeFirstName = new_value;
      }
    void unsetFirstName(void)
      {
        flagHasFirstName = false;
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
    void setSingleName(std::string new_value)
      {
        flagHasSingleName = true;
        storeSingleName = new_value;
      }
    void unsetSingleName(void)
      {
        flagHasSingleName = false;
      }
    void initNickNames(void)
      {
        flagHasNickNames = true;
        storeNickNames.clear();
      }
    void appendNickNames(std::string to_append)
      {
        if (!flagHasNickNames)
          {
            flagHasNickNames = true;
            storeNickNames.clear();
          }
        assert(flagHasNickNames);
        storeNickNames.push_back(to_append);
      }
    void unsetNickNames(void)
      {
        flagHasNickNames = false;
        storeNickNames.clear();
      }
    void initPhoneEntries(void)
      {
        if (flagHasPhoneEntries)
          {
            for (size_t num4 = 0; num4 < storePhoneEntries.size(); ++num4)
              {
                storePhoneEntries[num4]->remove_reference();
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
            for (size_t num5 = 0; num5 < storePhoneEntries.size(); ++num5)
              {
                storePhoneEntries[num5]->remove_reference();
              }
          }
        flagHasPhoneEntries = false;
        storePhoneEntries.clear();
      }
    void setDefaultPhone(std::string new_value)
      {
        flagHasDefaultPhone = true;
        storeDefaultPhone = new_value;
      }
    void unsetDefaultPhone(void)
      {
        flagHasDefaultPhone = false;
      }
    void setTimesCalled(OInteger new_value)
      {
        flagHasTimesCalled = true;
        if (new_value < 0)
            throw("The value for field TimesCalled of OneContactJSON is less than the lower bound (0) for that field.");
        storeTimesCalled = new_value;
      }
    void unsetTimesCalled(void)
      {
        flagHasTimesCalled = false;
      }
    void setLastCalled(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastCalled)
          {
            storeLastCalled->remove_reference();
          }
        flagHasLastCalled = true;
        storeLastCalled = new_value;
      }
    void unsetLastCalled(void)
      {
        if (flagHasLastCalled)
          {
            storeLastCalled->remove_reference();
          }
        flagHasLastCalled = false;
      }
    void setTimesContacted(OInteger new_value)
      {
        flagHasTimesContacted = true;
        if (new_value < 0)
            throw("The value for field TimesContacted of OneContactJSON is less than the lower bound (0) for that field.");
        storeTimesContacted = new_value;
      }
    void unsetTimesContacted(void)
      {
        flagHasTimesContacted = false;
      }
    void setLastContacted(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastContacted)
          {
            storeLastContacted->remove_reference();
          }
        flagHasLastContacted = true;
        storeLastContacted = new_value;
      }
    void unsetLastContacted(void)
      {
        if (flagHasLastContacted)
          {
            storeLastContacted->remove_reference();
          }
        flagHasLastContacted = false;
      }
    void initEmailEntries(void)
      {
        if (flagHasEmailEntries)
          {
            for (size_t num6 = 0; num6 < storeEmailEntries.size(); ++num6)
              {
                storeEmailEntries[num6]->remove_reference();
              }
          }
        flagHasEmailEntries = true;
        storeEmailEntries.clear();
      }
    void appendEmailEntries(TypeEmailEntriesJSON * to_append)
      {
        if (!flagHasEmailEntries)
          {
            flagHasEmailEntries = true;
            storeEmailEntries.clear();
          }
        assert(flagHasEmailEntries);
        to_append->add_reference();
        storeEmailEntries.push_back(to_append);
      }
    void unsetEmailEntries(void)
      {
        if (flagHasEmailEntries)
          {
            for (size_t num7 = 0; num7 < storeEmailEntries.size(); ++num7)
              {
                storeEmailEntries[num7]->remove_reference();
              }
          }
        flagHasEmailEntries = false;
        storeEmailEntries.clear();
      }
    void setDefaultEmail(std::string new_value)
      {
        flagHasDefaultEmail = true;
        storeDefaultEmail = new_value;
      }
    void unsetDefaultEmail(void)
      {
        flagHasDefaultEmail = false;
      }
    void initMapAddressEntries(void)
      {
        if (flagHasMapAddressEntries)
          {
            for (size_t num8 = 0; num8 < storeMapAddressEntries.size(); ++num8)
              {
                storeMapAddressEntries[num8]->remove_reference();
              }
          }
        flagHasMapAddressEntries = true;
        storeMapAddressEntries.clear();
      }
    void appendMapAddressEntries(TypeMapAddressEntriesJSON * to_append)
      {
        if (!flagHasMapAddressEntries)
          {
            flagHasMapAddressEntries = true;
            storeMapAddressEntries.clear();
          }
        assert(flagHasMapAddressEntries);
        to_append->add_reference();
        storeMapAddressEntries.push_back(to_append);
      }
    void unsetMapAddressEntries(void)
      {
        if (flagHasMapAddressEntries)
          {
            for (size_t num9 = 0; num9 < storeMapAddressEntries.size(); ++num9)
              {
                storeMapAddressEntries[num9]->remove_reference();
              }
          }
        flagHasMapAddressEntries = false;
        storeMapAddressEntries.clear();
      }
    void setDefaultMapAddress(std::string new_value)
      {
        flagHasDefaultMapAddress = true;
        storeDefaultMapAddress = new_value;
      }
    void unsetDefaultMapAddress(void)
      {
        flagHasDefaultMapAddress = false;
      }
    void setIsFavorite(bool new_value)
      {
        flagHasIsFavorite = true;
        storeIsFavorite = new_value;
      }
    void unsetIsFavorite(void)
      {
        flagHasIsFavorite = false;
      }
    void setSex(TypeSex new_value)
      {
        flagHasSex = true;
        storeSex = new_value;
      }
    void setSex(const char *chars)
      {
        setSex(stringToSex(chars));
      }
    void setSex(std::string the_string)
      {
        setSex(stringToSex(the_string.c_str()));
      }
    void unsetSex(void)
      {
        flagHasSex = false;
      }
    void setIsVisible(bool new_value)
      {
        flagHasIsVisible = true;
        storeIsVisible = new_value;
      }
    void unsetIsVisible(void)
      {
        flagHasIsVisible = false;
      }

    virtual void extraOneContactAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraOneContactSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraOneContactLookup(key);
        if (old_field == NULL)
          {
            extraOneContactAppendPair(key, new_component);
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
        if (flagHasFirstName)
          {
            handler->start_pair("FirstName");
            handler->string_value(storeFirstName);
          }
        if (flagHasLastName)
          {
            handler->start_pair("LastName");
            handler->string_value(storeLastName);
          }
        if (flagHasSingleName)
          {
            handler->start_pair("SingleName");
            handler->string_value(storeSingleName);
          }
        if (flagHasNickNames)
          {
            handler->start_pair("NickNames");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeNickNames.size(); ++num1)
              {
                handler->string_value(storeNickNames[num1]);
              }
            handler->finish_array();
          }
        if (flagHasPhoneEntries)
          {
            handler->start_pair("PhoneEntries");
            handler->start_array();
            for (size_t num2 = 0; num2 < storePhoneEntries.size(); ++num2)
              {
                storePhoneEntries[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDefaultPhone)
          {
            handler->start_pair("DefaultPhone");
            handler->string_value(storeDefaultPhone);
          }
        if (flagHasTimesCalled)
          {
            handler->start_pair("TimesCalled");
            handler->number_value(storeTimesCalled.get_o_integer());
          }
        if (flagHasLastCalled)
          {
            handler->start_pair("LastCalled");
            storeLastCalled->write_as_json(handler);
          }
        if (flagHasTimesContacted)
          {
            handler->start_pair("TimesContacted");
            handler->number_value(storeTimesContacted.get_o_integer());
          }
        if (flagHasLastContacted)
          {
            handler->start_pair("LastContacted");
            storeLastContacted->write_as_json(handler);
          }
        if (flagHasEmailEntries)
          {
            handler->start_pair("EmailEntries");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeEmailEntries.size(); ++num3)
              {
                storeEmailEntries[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDefaultEmail)
          {
            handler->start_pair("DefaultEmail");
            handler->string_value(storeDefaultEmail);
          }
        if (flagHasMapAddressEntries)
          {
            handler->start_pair("MapAddressEntries");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeMapAddressEntries.size(); ++num4)
              {
                storeMapAddressEntries[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDefaultMapAddress)
          {
            handler->start_pair("DefaultMapAddress");
            handler->string_value(storeDefaultMapAddress);
          }
        if (flagHasIsFavorite)
          {
            handler->start_pair("IsFavorite");
            handler->boolean_value(storeIsFavorite);
          }
        if (flagHasSex)
          {
            handler->start_pair("Sex");
            switch (storeSex)
              {
                case Sex_Female:
                    handler->string_value("Female");
                    break;
                case Sex_Male:
                    handler->string_value("Male");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasIsVisible)
          {
            handler->start_pair("IsVisible");
            handler->boolean_value(storeIsVisible);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static OneContactJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static OneContactJSON *from_text(const char *text, bool ignore_extras = false)
      {
        OneContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool> generator("Type OneContact", ignore_extras);
            parse_json_value(text, "Text for OneContactJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static OneContactJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        OneContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool> generator("Type OneContact", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFirstName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLastName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSingleName;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNickNames;
        JSONHoldingArrayGenerator<TypePhoneEntriesJSON::Generator, RCHandle<TypePhoneEntriesJSON>, TypePhoneEntriesJSON *, bool > fieldGeneratorPhoneEntries;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefaultPhone;
        static char lowerBoundTimesCalled[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTimesCalled>, OInteger, o_integer > fieldGeneratorTimesCalled;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorLastCalled;
        static char lowerBoundTimesContacted[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTimesContacted>, OInteger, o_integer > fieldGeneratorTimesContacted;
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorLastContacted;
        JSONHoldingArrayGenerator<TypeEmailEntriesJSON::Generator, RCHandle<TypeEmailEntriesJSON>, TypeEmailEntriesJSON *, bool > fieldGeneratorEmailEntries;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefaultEmail;
        JSONHoldingArrayGenerator<TypeMapAddressEntriesJSON::Generator, RCHandle<TypeMapAddressEntriesJSON>, TypeMapAddressEntriesJSON *, bool > fieldGeneratorMapAddressEntries;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefaultMapAddress;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsFavorite;
    class FieldGeneratorSex : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSex(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSex(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSex(result));
              }
            virtual void handle_result(TypeSex result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSex, TypeSex, TypeSex > fieldGeneratorSex;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsVisible;
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
            OneContactJSON *result = new OneContactJSON();
            assert(result != NULL);
            RCHandle<OneContactJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraOneContactAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(OneContactJSON *result)
          {
            if (fieldGeneratorFirstName.have_value)
              {
                result->setFirstName(fieldGeneratorFirstName.value);
                fieldGeneratorFirstName.have_value = false;
              }
            if (fieldGeneratorLastName.have_value)
              {
                result->setLastName(fieldGeneratorLastName.value);
                fieldGeneratorLastName.have_value = false;
              }
            if (fieldGeneratorSingleName.have_value)
              {
                result->setSingleName(fieldGeneratorSingleName.value);
                fieldGeneratorSingleName.have_value = false;
              }
            if (fieldGeneratorNickNames.have_value)
              {
                result->initNickNames();
                size_t count = fieldGeneratorNickNames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNickNames(fieldGeneratorNickNames.value[num]);
                  }
                fieldGeneratorNickNames.value.clear();
                fieldGeneratorNickNames.have_value = false;
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
            if (fieldGeneratorDefaultPhone.have_value)
              {
                result->setDefaultPhone(fieldGeneratorDefaultPhone.value);
                fieldGeneratorDefaultPhone.have_value = false;
              }
            if (fieldGeneratorTimesCalled.have_value)
              {
                result->setTimesCalled(fieldGeneratorTimesCalled.value);
                fieldGeneratorTimesCalled.have_value = false;
              }
            if (fieldGeneratorLastCalled.have_value)
              {
                result->setLastCalled(fieldGeneratorLastCalled.value.referenced());
                fieldGeneratorLastCalled.have_value = false;
              }
            if (fieldGeneratorTimesContacted.have_value)
              {
                result->setTimesContacted(fieldGeneratorTimesContacted.value);
                fieldGeneratorTimesContacted.have_value = false;
              }
            if (fieldGeneratorLastContacted.have_value)
              {
                result->setLastContacted(fieldGeneratorLastContacted.value.referenced());
                fieldGeneratorLastContacted.have_value = false;
              }
            if (fieldGeneratorEmailEntries.have_value)
              {
                result->initEmailEntries();
                size_t count = fieldGeneratorEmailEntries.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendEmailEntries(fieldGeneratorEmailEntries.value[num].referenced());
                  }
                fieldGeneratorEmailEntries.value.clear();
                fieldGeneratorEmailEntries.have_value = false;
              }
            if (fieldGeneratorDefaultEmail.have_value)
              {
                result->setDefaultEmail(fieldGeneratorDefaultEmail.value);
                fieldGeneratorDefaultEmail.have_value = false;
              }
            if (fieldGeneratorMapAddressEntries.have_value)
              {
                result->initMapAddressEntries();
                size_t count = fieldGeneratorMapAddressEntries.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMapAddressEntries(fieldGeneratorMapAddressEntries.value[num].referenced());
                  }
                fieldGeneratorMapAddressEntries.value.clear();
                fieldGeneratorMapAddressEntries.have_value = false;
              }
            if (fieldGeneratorDefaultMapAddress.have_value)
              {
                result->setDefaultMapAddress(fieldGeneratorDefaultMapAddress.value);
                fieldGeneratorDefaultMapAddress.have_value = false;
              }
            if (fieldGeneratorIsFavorite.have_value)
              {
                result->setIsFavorite(fieldGeneratorIsFavorite.value);
                fieldGeneratorIsFavorite.have_value = false;
              }
            if (fieldGeneratorSex.have_value)
              {
                result->setSex(fieldGeneratorSex.value);
                fieldGeneratorSex.have_value = false;
              }
            if (fieldGeneratorIsVisible.have_value)
              {
                result->setIsVisible(fieldGeneratorIsVisible.value);
                fieldGeneratorIsVisible.have_value = false;
              }
          }
        virtual void handle_result(OneContactJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "efault", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[8]), "mail") == 0)
                                    return &fieldGeneratorDefaultEmail;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[8]), "apAddress") == 0)
                                    return &fieldGeneratorDefaultMapAddress;
                                break;
                            case 'P':
                                if (strcmp(&(field_name[8]), "hone") == 0)
                                    return &fieldGeneratorDefaultPhone;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "mailEntries") == 0)
                        return &fieldGeneratorEmailEntries;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "irstName") == 0)
                        return &fieldGeneratorFirstName;
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "s", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[3]), "avorite") == 0)
                                    return &fieldGeneratorIsFavorite;
                                break;
                            case 'V':
                                if (strcmp(&(field_name[3]), "isible") == 0)
                                    return &fieldGeneratorIsVisible;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'L':
                    if (strncmp(&(field_name[1]), "ast", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'C':
                                switch ((unsigned char)(field_name[5]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[6]), "lled") == 0)
                                            return &fieldGeneratorLastCalled;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[6]), "ntacted") == 0)
                                            return &fieldGeneratorLastContacted;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'N':
                                if (strcmp(&(field_name[5]), "ame") == 0)
                                    return &fieldGeneratorLastName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "apAddressEntries") == 0)
                        return &fieldGeneratorMapAddressEntries;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ickNames") == 0)
                        return &fieldGeneratorNickNames;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "honeEntries") == 0)
                        return &fieldGeneratorPhoneEntries;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "x") == 0)
                                return &fieldGeneratorSex;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "ngleName") == 0)
                                return &fieldGeneratorSingleName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    if (strncmp(&(field_name[1]), "imesC", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[7]), "lled") == 0)
                                    return &fieldGeneratorTimesCalled;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[7]), "ntacted") == 0)
                                    return &fieldGeneratorTimesContacted;
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
        Generator(bool ignore_extras = false) : fieldGeneratorFirstName("field \"FirstName\" of the OneContact class"), fieldGeneratorLastName("field \"LastName\" of the OneContact class"), fieldGeneratorSingleName("field \"SingleName\" of the OneContact class"), fieldGeneratorNickNames("field \"NickNames\" of the OneContact class"), fieldGeneratorPhoneEntries("field \"PhoneEntries\" of the OneContact class", ignore_extras), fieldGeneratorDefaultPhone("field \"DefaultPhone\" of the OneContact class"), fieldGeneratorTimesCalled("field \"TimesCalled\" of the OneContact class"), fieldGeneratorLastCalled("field \"LastCalled\" of the OneContact class", ignore_extras), fieldGeneratorTimesContacted("field \"TimesContacted\" of the OneContact class"), fieldGeneratorLastContacted("field \"LastContacted\" of the OneContact class", ignore_extras), fieldGeneratorEmailEntries("field \"EmailEntries\" of the OneContact class", ignore_extras), fieldGeneratorDefaultEmail("field \"DefaultEmail\" of the OneContact class"), fieldGeneratorMapAddressEntries("field \"MapAddressEntries\" of the OneContact class", ignore_extras), fieldGeneratorDefaultMapAddress("field \"DefaultMapAddress\" of the OneContact class"), fieldGeneratorIsFavorite("field \"IsFavorite\" of the OneContact class"), fieldGeneratorSex("field \"Sex\" of the OneContact class"), fieldGeneratorIsVisible("field \"IsVisible\" of the OneContact class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the OneContact class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFirstName.reset();
            fieldGeneratorLastName.reset();
            fieldGeneratorSingleName.reset();
            fieldGeneratorNickNames.reset();
            fieldGeneratorPhoneEntries.reset();
            fieldGeneratorDefaultPhone.reset();
            fieldGeneratorTimesCalled.reset();
            fieldGeneratorLastCalled.reset();
            fieldGeneratorTimesContacted.reset();
            fieldGeneratorLastContacted.reset();
            fieldGeneratorEmailEntries.reset();
            fieldGeneratorDefaultEmail.reset();
            fieldGeneratorMapAddressEntries.reset();
            fieldGeneratorDefaultMapAddress.reset();
            fieldGeneratorIsFavorite.reset();
            fieldGeneratorSex.reset();
            fieldGeneratorIsVisible.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ONECONTACTJSON_H */
