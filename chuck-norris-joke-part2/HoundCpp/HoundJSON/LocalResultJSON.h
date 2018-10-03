/* file "LocalResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCALRESULTJSON_H
#define LOCALRESULTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONIntegerRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include <stdint.h>
#include "OInteger.h"
#include "YelpCategoryAliasJSON.h"
#include "YelpCategoryTitleJSON.h"
#include "MapLocationJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "LocalResultBusinessHoursJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class LocalResultJSON : public ReferenceCounted
  {
  public:
    class TypePhoneJSON : public ReferenceCounted
      {
      private:
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasNumber;
        std::string storeNumber;

        TypePhoneJSON(const TypePhoneJSON &);
        TypePhoneJSON & operator=(const TypePhoneJSON &other);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePhoneJSON(void);
        virtual ~TypePhoneJSON(void);
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasNumber(void) const;
        std::string  getNumber(void);
        const std::string  getNumber(void) const;


        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
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


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasNumber);
            handler->start_pair("Number");
            handler->string_value(storeNumber);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasNumber()))
              {
                return "When parsing the object for %what%, the \"Number\" field was missing.";
              }
            return NULL;
          }

        static TypePhoneJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePhoneJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePhoneJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhoneJSON>, TypePhoneJSON *, bool> generator("Type TypePhone", ignore_extras);
                parse_json_value(text, "Text for TypePhoneJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePhoneJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePhoneJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhoneJSON>, TypePhoneJSON *, bool> generator("Type TypePhone", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypePhoneJSON *result = new TypePhoneJSON();
                assert(result != NULL);
                RCHandle<TypePhoneJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypePhoneJSON *result)
              {
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
                  }
                else if (!(result->hasLabel()))
                  {
                    error("When parsing the object for %what%, the \"Label\" field was missing.");
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
            virtual void handle_result(TypePhoneJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
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
            Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the TypePhone class"), fieldGeneratorNumber("field \"Number\" of the TypePhone class")
              {
                set_what("the TypePhone class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLabel.reset();
                fieldGeneratorNumber.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeLinksJSON : public ReferenceCounted
      {
      public:
        enum TypeType
          {
            Type_Web
          };

        static TypeType  stringToType(const char *chars);
        static const char * stringFromType(TypeType the_enum);

      private:
        bool flagHasType;
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasURL;
        std::string storeURL;

        TypeLinksJSON(const TypeLinksJSON &);
        TypeLinksJSON & operator=(const TypeLinksJSON &other);

        void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLinksJSON(void);
        virtual ~TypeLinksJSON(void);
        bool  hasType(void) const;
        TypeType  getType(void);
        const TypeType  getType(void) const;
        const char * getTypeAsChars(void) const;
        std::string  getTypeAsString(void) const;
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasURL(void) const;
        std::string  getURL(void);
        const std::string  getURL(void) const;


        void setType(void)
          {
            flagHasType = true;
          }
        void setType(TypeType new_value)
          {
            setType();
          }
        void setType(const char *chars)
          {
            setType(stringToType(chars));
          }
        void setType(std::string the_string)
          {
            setType(stringToType(the_string.c_str()));
          }
        void unsetType(void)
          {
            flagHasType = false;
          }
        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
          }
        void setURL(std::string new_value)
          {
            flagHasURL = true;
            storeURL = new_value;
          }
        void unsetURL(void)
          {
            flagHasURL = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasType);
            handler->start_pair("Type");
            handler->string_value("Web");
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasURL);
            handler->start_pair("URL");
            handler->string_value(storeURL);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasType()))
              {
                return "When parsing the object for %what%, the \"Type\" field was missing.";
              }
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasURL()))
              {
                return "When parsing the object for %what%, the \"URL\" field was missing.";
              }
            return NULL;
          }

        static TypeLinksJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLinksJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLinksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
                parse_json_value(text, "Text for TypeLinksJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLinksJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLinksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
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
        class FieldGeneratorType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToType(result));
                  }
                virtual void handle_result(TypeType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeLinksJSON *result = new TypeLinksJSON();
                assert(result != NULL);
                RCHandle<TypeLinksJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeLinksJSON *result)
              {
                if (fieldGeneratorType.have_value)
                  {
                    result->setType();
                    fieldGeneratorType.have_value = false;
                  }
                else if (!(result->hasType()))
                  {
                    error("When parsing the object for %what%, the \"Type\" field was missing.");
                  }
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
                  }
                else if (!(result->hasLabel()))
                  {
                    error("When parsing the object for %what%, the \"Label\" field was missing.");
                  }
                if (fieldGeneratorURL.have_value)
                  {
                    result->setURL(fieldGeneratorURL.value);
                    fieldGeneratorURL.have_value = false;
                  }
                else if (!(result->hasURL()))
                  {
                    error("When parsing the object for %what%, the \"URL\" field was missing.");
                  }
              }
            virtual void handle_result(TypeLinksJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ype") == 0)
                            return &fieldGeneratorType;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RL") == 0)
                            return &fieldGeneratorURL;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the TypeLinks class"), fieldGeneratorLabel("field \"Label\" of the TypeLinks class"), fieldGeneratorURL("field \"URL\" of the TypeLinks class")
              {
                set_what("the TypeLinks class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorType.reset();
                fieldGeneratorLabel.reset();
                fieldGeneratorURL.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypePhotosJSON : public ReferenceCounted
      {
      private:
        bool flagHasURL;
        std::string storeURL;
        bool flagHasThumbURL;
        std::string storeThumbURL;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePhotosJSON(const TypePhotosJSON &);
        TypePhotosJSON & operator=(const TypePhotosJSON &other);

        void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONThumbURL(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePhotosJSON(void);
        virtual ~TypePhotosJSON(void);
        bool  hasURL(void) const;
        std::string  getURL(void);
        const std::string  getURL(void) const;
        bool  hasThumbURL(void) const;
        std::string  getThumbURL(void);
        const std::string  getThumbURL(void) const;

        virtual size_t extraTypePhotosComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePhotosComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePhotosComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePhotosComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePhotosLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePhotosLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setURL(std::string new_value)
          {
            flagHasURL = true;
            storeURL = new_value;
          }
        void unsetURL(void)
          {
            flagHasURL = false;
          }
        void setThumbURL(std::string new_value)
          {
            flagHasThumbURL = true;
            storeThumbURL = new_value;
          }
        void unsetThumbURL(void)
          {
            flagHasThumbURL = false;
          }

        virtual void extraTypePhotosAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePhotosSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePhotosLookup(key);
            if (old_field == NULL)
              {
                extraTypePhotosAppendPair(key, new_component);
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
            assert(flagHasURL);
            handler->start_pair("URL");
            handler->string_value(storeURL);
            if (flagHasThumbURL)
              {
                handler->start_pair("ThumbURL");
                handler->string_value(storeThumbURL);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasURL()))
              {
                return "When parsing the object for %what%, the \"URL\" field was missing.";
              }
            return NULL;
          }

        static TypePhotosJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePhotosJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePhotosJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhotosJSON>, TypePhotosJSON *, bool> generator("Type TypePhotos", ignore_extras);
                parse_json_value(text, "Text for TypePhotosJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePhotosJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePhotosJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePhotosJSON>, TypePhotosJSON *, bool> generator("Type TypePhotos", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorThumbURL;
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
                TypePhotosJSON *result = new TypePhotosJSON();
                assert(result != NULL);
                RCHandle<TypePhotosJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePhotosAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePhotosJSON *result)
              {
                if (fieldGeneratorURL.have_value)
                  {
                    result->setURL(fieldGeneratorURL.value);
                    fieldGeneratorURL.have_value = false;
                  }
                else if (!(result->hasURL()))
                  {
                    error("When parsing the object for %what%, the \"URL\" field was missing.");
                  }
                if (fieldGeneratorThumbURL.have_value)
                  {
                    result->setThumbURL(fieldGeneratorThumbURL.value);
                    fieldGeneratorThumbURL.have_value = false;
                  }
              }
            virtual void handle_result(TypePhotosJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'T':
                        if (strcmp(&(field_name[1]), "humbURL") == 0)
                            return &fieldGeneratorThumbURL;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RL") == 0)
                            return &fieldGeneratorURL;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorURL("field \"URL\" of the TypePhotos class"), fieldGeneratorThumbURL("field \"ThumbURL\" of the TypePhotos class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePhotos class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorURL.reset();
                fieldGeneratorThumbURL.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeCategoriesJSON : public ReferenceCounted
      {
      private:
        bool flagHasAlias;
        YelpCategoryAliasJSON * storeAlias;
        bool flagHasTitle;
        YelpCategoryTitleJSON * storeTitle;

        TypeCategoriesJSON(const TypeCategoriesJSON &);
        TypeCategoriesJSON & operator=(const TypeCategoriesJSON &other);

        void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTitle(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeCategoriesJSON(void);
        virtual ~TypeCategoriesJSON(void);
        bool  hasAlias(void) const;
        YelpCategoryAliasJSON *  getAlias(void);
        const YelpCategoryAliasJSON *  getAlias(void) const;
        YelpCategoryAliasJSON::TypeValue  getAliasValue(void);
        const YelpCategoryAliasJSON::TypeValue  getAliasValue(void) const;
        const char * getAliasAsChars(void) const;
        std::string  getAliasAsString(void) const;
        bool  hasTitle(void) const;
        YelpCategoryTitleJSON *  getTitle(void);
        const YelpCategoryTitleJSON *  getTitle(void) const;
        std::string  getTitleValue(void);
        const std::string  getTitleValue(void) const;


        void setAlias(YelpCategoryAliasJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasAlias)
              {
                storeAlias->remove_reference();
              }
            flagHasAlias = true;
            storeAlias = new_value;
          }
        void setAlias(YelpCategoryAliasJSON::TypeValue new_value)
          {
            setAlias(new YelpCategoryAliasJSON(new_value));
          }
        void setAlias(const char *chars)
          {
            YelpCategoryAliasJSON::TypeValueKnownValues known = YelpCategoryAliasJSON::stringToValue(chars);
            YelpCategoryAliasJSON::TypeValue new_value;
            if (known == YelpCategoryAliasJSON::Value__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setAlias(new_value);
          }
        void setAlias(std::string the_string)
          {
            setAlias(the_string.c_str());
          }
        void unsetAlias(void)
          {
            if (flagHasAlias)
              {
                storeAlias->remove_reference();
              }
            flagHasAlias = false;
          }
        void setTitle(YelpCategoryTitleJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTitle)
              {
                storeTitle->remove_reference();
              }
            flagHasTitle = true;
            storeTitle = new_value;
          }
        void setTitle(std::string new_value)
          {
            setTitle(new YelpCategoryTitleJSON(new_value));
          }
        void unsetTitle(void)
          {
            if (flagHasTitle)
              {
                storeTitle->remove_reference();
              }
            flagHasTitle = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasAlias);
            handler->start_pair("Alias");
            storeAlias->write_as_json(handler);
            assert(flagHasTitle);
            handler->start_pair("Title");
            storeTitle->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasAlias()))
              {
                return "When parsing the object for %what%, the \"Alias\" field was missing.";
              }
            if (!(hasTitle()))
              {
                return "When parsing the object for %what%, the \"Title\" field was missing.";
              }
            return NULL;
          }

        static TypeCategoriesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeCategoriesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeCategoriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeCategoriesJSON>, TypeCategoriesJSON *, bool> generator("Type TypeCategories", ignore_extras);
                parse_json_value(text, "Text for TypeCategoriesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeCategoriesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeCategoriesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeCategoriesJSON>, TypeCategoriesJSON *, bool> generator("Type TypeCategories", ignore_extras);
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
            JSONHoldingGenerator<YelpCategoryAliasJSON::Generator, RCHandle<YelpCategoryAliasJSON>, YelpCategoryAliasJSON *, bool > fieldGeneratorAlias;
            JSONHoldingGenerator<YelpCategoryTitleJSON::Generator, RCHandle<YelpCategoryTitleJSON>, YelpCategoryTitleJSON *, bool > fieldGeneratorTitle;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeCategoriesJSON *result = new TypeCategoriesJSON();
                assert(result != NULL);
                RCHandle<TypeCategoriesJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeCategoriesJSON *result)
              {
                if (fieldGeneratorAlias.have_value)
                  {
                    result->setAlias(fieldGeneratorAlias.value.referenced());
                    fieldGeneratorAlias.have_value = false;
                  }
                else if (!(result->hasAlias()))
                  {
                    error("When parsing the object for %what%, the \"Alias\" field was missing.");
                  }
                if (fieldGeneratorTitle.have_value)
                  {
                    result->setTitle(fieldGeneratorTitle.value.referenced());
                    fieldGeneratorTitle.have_value = false;
                  }
                else if (!(result->hasTitle()))
                  {
                    error("When parsing the object for %what%, the \"Title\" field was missing.");
                  }
              }
            virtual void handle_result(TypeCategoriesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "lias") == 0)
                            return &fieldGeneratorAlias;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "itle") == 0)
                            return &fieldGeneratorTitle;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorAlias("field \"Alias\" of the TypeCategories class", ignore_extras), fieldGeneratorTitle("field \"Title\" of the TypeCategories class", ignore_extras)
              {
                set_what("the TypeCategories class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorAlias.reset();
                fieldGeneratorTitle.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeDistanceFromReferenceJSON : public ReferenceCounted
      {
      public:
        enum TypeUnit
          {
            Unit_km,
            Unit_mi
          };

        static TypeUnit  stringToUnit(const char *chars);
        static const char * stringFromUnit(TypeUnit the_enum);

      private:
        bool flagHasValue;
        double storeValue;
        std::string textStoreValue;
        bool flagHasUnit;
        TypeUnit storeUnit;

        TypeDistanceFromReferenceJSON(const TypeDistanceFromReferenceJSON &);
        TypeDistanceFromReferenceJSON & operator=(const TypeDistanceFromReferenceJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDistanceFromReferenceJSON(void);
        virtual ~TypeDistanceFromReferenceJSON(void);
        bool  hasValue(void) const;
        double  getValue(void);
        const double  getValue(void) const;
        std::string  getValueAsText(void) const;
        bool  hasUnit(void) const;
        TypeUnit  getUnit(void);
        const TypeUnit  getUnit(void) const;
        const char * getUnitAsChars(void) const;
        std::string  getUnitAsString(void) const;


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
                throw("The text value for field Value of TypeDistanceFromReferenceJSON is not a valid number.");
            textStoreValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setUnit(TypeUnit new_value)
          {
            flagHasUnit = true;
            storeUnit = new_value;
          }
        void setUnit(const char *chars)
          {
            setUnit(stringToUnit(chars));
          }
        void setUnit(std::string the_string)
          {
            setUnit(stringToUnit(the_string.c_str()));
          }
        void unsetUnit(void)
          {
            flagHasUnit = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasValue);
            handler->start_pair("Value");
            if (textStoreValue != "")
                handler->number_value(textStoreValue.c_str());
            else if (((double)(long int)storeValue) == storeValue)
                handler->number_value((long int)storeValue);
            else
                handler->number_value(storeValue);
            assert(flagHasUnit);
            handler->start_pair("Unit");
            switch (storeUnit)
              {
                case Unit_km:
                    handler->string_value("km");
                    break;
                case Unit_mi:
                    handler->string_value("mi");
                    break;
                default:
                    assert(false);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasUnit()))
              {
                return "When parsing the object for %what%, the \"Unit\" field was missing.";
              }
            return NULL;
          }

        static TypeDistanceFromReferenceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDistanceFromReferenceJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDistanceFromReferenceJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromReferenceJSON>, TypeDistanceFromReferenceJSON *, bool> generator("Type TypeDistanceFromReference", ignore_extras);
                parse_json_value(text, "Text for TypeDistanceFromReferenceJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDistanceFromReferenceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDistanceFromReferenceJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromReferenceJSON>, TypeDistanceFromReferenceJSON *, bool> generator("Type TypeDistanceFromReference", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
        class FieldGeneratorUnit : public JSONStringGenerator
              {
              protected:
                FieldGeneratorUnit(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorUnit(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToUnit(result));
                  }
                virtual void handle_result(TypeUnit result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorUnit, TypeUnit, TypeUnit > fieldGeneratorUnit;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeDistanceFromReferenceJSON *result = new TypeDistanceFromReferenceJSON();
                assert(result != NULL);
                RCHandle<TypeDistanceFromReferenceJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeDistanceFromReferenceJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValueText(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorUnit.have_value)
                  {
                    result->setUnit(fieldGeneratorUnit.value);
                    fieldGeneratorUnit.have_value = false;
                  }
                else if (!(result->hasUnit()))
                  {
                    error("When parsing the object for %what%, the \"Unit\" field was missing.");
                  }
              }
            virtual void handle_result(TypeDistanceFromReferenceJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'U':
                        if (strcmp(&(field_name[1]), "nit") == 0)
                            return &fieldGeneratorUnit;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeDistanceFromReference class"), fieldGeneratorUnit("field \"Unit\" of the TypeDistanceFromReference class")
              {
                set_what("the TypeDistanceFromReference class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorUnit.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeDistanceFromUserJSON : public ReferenceCounted
      {
      public:
        enum TypeUnit
          {
            Unit_km,
            Unit_mi
          };

        static TypeUnit  stringToUnit(const char *chars);
        static const char * stringFromUnit(TypeUnit the_enum);

      private:
        bool flagHasValue;
        double storeValue;
        std::string textStoreValue;
        bool flagHasUnit;
        TypeUnit storeUnit;

        TypeDistanceFromUserJSON(const TypeDistanceFromUserJSON &);
        TypeDistanceFromUserJSON & operator=(const TypeDistanceFromUserJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDistanceFromUserJSON(void);
        virtual ~TypeDistanceFromUserJSON(void);
        bool  hasValue(void) const;
        double  getValue(void);
        const double  getValue(void) const;
        std::string  getValueAsText(void) const;
        bool  hasUnit(void) const;
        TypeUnit  getUnit(void);
        const TypeUnit  getUnit(void) const;
        const char * getUnitAsChars(void) const;
        std::string  getUnitAsString(void) const;


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
                throw("The text value for field Value of TypeDistanceFromUserJSON is not a valid number.");
            textStoreValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setUnit(TypeUnit new_value)
          {
            flagHasUnit = true;
            storeUnit = new_value;
          }
        void setUnit(const char *chars)
          {
            setUnit(stringToUnit(chars));
          }
        void setUnit(std::string the_string)
          {
            setUnit(stringToUnit(the_string.c_str()));
          }
        void unsetUnit(void)
          {
            flagHasUnit = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasValue);
            handler->start_pair("Value");
            if (textStoreValue != "")
                handler->number_value(textStoreValue.c_str());
            else if (((double)(long int)storeValue) == storeValue)
                handler->number_value((long int)storeValue);
            else
                handler->number_value(storeValue);
            assert(flagHasUnit);
            handler->start_pair("Unit");
            switch (storeUnit)
              {
                case Unit_km:
                    handler->string_value("km");
                    break;
                case Unit_mi:
                    handler->string_value("mi");
                    break;
                default:
                    assert(false);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasUnit()))
              {
                return "When parsing the object for %what%, the \"Unit\" field was missing.";
              }
            return NULL;
          }

        static TypeDistanceFromUserJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDistanceFromUserJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDistanceFromUserJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromUserJSON>, TypeDistanceFromUserJSON *, bool> generator("Type TypeDistanceFromUser", ignore_extras);
                parse_json_value(text, "Text for TypeDistanceFromUserJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDistanceFromUserJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDistanceFromUserJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromUserJSON>, TypeDistanceFromUserJSON *, bool> generator("Type TypeDistanceFromUser", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
        class FieldGeneratorUnit : public JSONStringGenerator
              {
              protected:
                FieldGeneratorUnit(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorUnit(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToUnit(result));
                  }
                virtual void handle_result(TypeUnit result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorUnit, TypeUnit, TypeUnit > fieldGeneratorUnit;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeDistanceFromUserJSON *result = new TypeDistanceFromUserJSON();
                assert(result != NULL);
                RCHandle<TypeDistanceFromUserJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeDistanceFromUserJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValueText(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorUnit.have_value)
                  {
                    result->setUnit(fieldGeneratorUnit.value);
                    fieldGeneratorUnit.have_value = false;
                  }
                else if (!(result->hasUnit()))
                  {
                    error("When parsing the object for %what%, the \"Unit\" field was missing.");
                  }
              }
            virtual void handle_result(TypeDistanceFromUserJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'U':
                        if (strcmp(&(field_name[1]), "nit") == 0)
                            return &fieldGeneratorUnit;
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
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeDistanceFromUser class"), fieldGeneratorUnit("field \"Unit\" of the TypeDistanceFromUser class")
              {
                set_what("the TypeDistanceFromUser class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorUnit.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeReviewsJSON : public ReferenceCounted
      {
      public:
        class TypeUserJSON : public ReferenceCounted
          {
          private:
            bool flagHasName;
            std::string storeName;
            bool flagHasID;
            std::string storeID;
            bool flagHasPhotoURL;
            std::string storePhotoURL;

            TypeUserJSON(const TypeUserJSON &);
            TypeUserJSON & operator=(const TypeUserJSON &other);

            void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPhotoURL(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeUserJSON(void);
            virtual ~TypeUserJSON(void);
            bool  hasName(void) const;
            std::string  getName(void);
            const std::string  getName(void) const;
            bool  hasID(void) const;
            std::string  getID(void);
            const std::string  getID(void) const;
            bool  hasPhotoURL(void) const;
            std::string  getPhotoURL(void);
            const std::string  getPhotoURL(void) const;


            void setName(std::string new_value)
              {
                flagHasName = true;
                storeName = new_value;
              }
            void unsetName(void)
              {
                flagHasName = false;
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
            void setPhotoURL(std::string new_value)
              {
                flagHasPhotoURL = true;
                storePhotoURL = new_value;
              }
            void unsetPhotoURL(void)
              {
                flagHasPhotoURL = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                assert(flagHasName);
                handler->start_pair("Name");
                handler->string_value(storeName);
                if (flagHasID)
                  {
                    handler->start_pair("ID");
                    handler->string_value(storeID);
                  }
                if (flagHasPhotoURL)
                  {
                    handler->start_pair("PhotoURL");
                    handler->string_value(storePhotoURL);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasName()))
                  {
                    return "When parsing the object for %what%, the \"Name\" field was missing.";
                  }
                return NULL;
              }

            static TypeUserJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeUserJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeUserJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeUserJSON>, TypeUserJSON *, bool> generator("Type TypeUser", ignore_extras);
                    parse_json_value(text, "Text for TypeUserJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeUserJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeUserJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeUserJSON>, TypeUserJSON *, bool> generator("Type TypeUser", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPhotoURL;


              protected:
                void start(void)
                  {
                  }
                JSONHandler *start_field(const char *field_name)
                  {
                    JSONHandler *result = start_known_field(field_name);
                    if (result != NULL)
                        return result;
                    std::string message("");
                    message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                    char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                    strcpy(message_chars, message.c_str());
                    throw(message_chars);
                  }
                void finish_field(const char *field_name, JSONHandler *field_handler)
                  {
                  }
                void finish(void)
                  {
                    TypeUserJSON *result = new TypeUserJSON();
                    assert(result != NULL);
                    RCHandle<TypeUserJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeUserJSON *result)
                  {
                    if (fieldGeneratorName.have_value)
                      {
                        result->setName(fieldGeneratorName.value);
                        fieldGeneratorName.have_value = false;
                      }
                    else if (!(result->hasName()))
                      {
                        error("When parsing the object for %what%, the \"Name\" field was missing.");
                      }
                    if (fieldGeneratorID.have_value)
                      {
                        result->setID(fieldGeneratorID.value);
                        fieldGeneratorID.have_value = false;
                      }
                    if (fieldGeneratorPhotoURL.have_value)
                      {
                        result->setPhotoURL(fieldGeneratorPhotoURL.value);
                        fieldGeneratorPhotoURL.have_value = false;
                      }
                  }
                virtual void handle_result(TypeUserJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[1]), "D") == 0)
                                return &fieldGeneratorID;
                            break;
                        case 'N':
                            if (strcmp(&(field_name[1]), "ame") == 0)
                                return &fieldGeneratorName;
                            break;
                        case 'P':
                            if (strcmp(&(field_name[1]), "hotoURL") == 0)
                                return &fieldGeneratorPhotoURL;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the TypeUser class"), fieldGeneratorID("field \"ID\" of the TypeUser class"), fieldGeneratorPhotoURL("field \"PhotoURL\" of the TypeUser class")
                  {
                    set_what("the TypeUser class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorName.reset();
                    fieldGeneratorID.reset();
                    fieldGeneratorPhotoURL.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };

      private:
        bool flagHasRating;
        uint8_t storeRating;
        bool flagHasLanguage;
        std::string storeLanguage;
        bool flagHasCreated;
        std::string storeCreated;
        bool flagHasURL;
        std::string storeURL;
        bool flagHasText;
        std::string storeText;
        bool flagHasUser;
        TypeUserJSON * storeUser;

        TypeReviewsJSON(const TypeReviewsJSON &);
        TypeReviewsJSON & operator=(const TypeReviewsJSON &other);

        void  fromJSONRating(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLanguage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCreated(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONText(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUser(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeReviewsJSON(void);
        virtual ~TypeReviewsJSON(void);
        bool  hasRating(void) const;
        uint8_t  getRating(void);
        const uint8_t  getRating(void) const;
        bool  hasLanguage(void) const;
        std::string  getLanguage(void);
        const std::string  getLanguage(void) const;
        bool  hasCreated(void) const;
        std::string  getCreated(void);
        const std::string  getCreated(void) const;
        bool  hasURL(void) const;
        std::string  getURL(void);
        const std::string  getURL(void) const;
        bool  hasText(void) const;
        std::string  getText(void);
        const std::string  getText(void) const;
        bool  hasUser(void) const;
        TypeUserJSON *  getUser(void);
        const TypeUserJSON *  getUser(void) const;


        void setRating(uint8_t new_value)
          {
            flagHasRating = true;
            if (new_value < 0)
                throw("The value for field Rating of TypeReviewsJSON is less than the lower bound (0) for that field.");
            if (new_value > 5)
                throw("The value for field Rating of TypeReviewsJSON is greater than the upper bound (5) for that field.");
            storeRating = new_value;
          }
        void unsetRating(void)
          {
            flagHasRating = false;
          }
        void setLanguage(std::string new_value)
          {
            flagHasLanguage = true;
            storeLanguage = new_value;
          }
        void unsetLanguage(void)
          {
            flagHasLanguage = false;
          }
        void setCreated(std::string new_value)
          {
            flagHasCreated = true;
            storeCreated = new_value;
          }
        void unsetCreated(void)
          {
            flagHasCreated = false;
          }
        void setURL(std::string new_value)
          {
            flagHasURL = true;
            storeURL = new_value;
          }
        void unsetURL(void)
          {
            flagHasURL = false;
          }
        void setText(std::string new_value)
          {
            flagHasText = true;
            storeText = new_value;
          }
        void unsetText(void)
          {
            flagHasText = false;
          }
        void setUser(TypeUserJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasUser)
              {
                storeUser->remove_reference();
              }
            flagHasUser = true;
            storeUser = new_value;
          }
        void unsetUser(void)
          {
            if (flagHasUser)
              {
                storeUser->remove_reference();
              }
            flagHasUser = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasRating);
            handler->start_pair("Rating");
            handler->number_value(storeRating);
            assert(flagHasLanguage);
            handler->start_pair("Language");
            handler->string_value(storeLanguage);
            assert(flagHasCreated);
            handler->start_pair("Created");
            handler->string_value(storeCreated);
            if (flagHasURL)
              {
                handler->start_pair("URL");
                handler->string_value(storeURL);
              }
            if (flagHasText)
              {
                handler->start_pair("Text");
                handler->string_value(storeText);
              }
            assert(flagHasUser);
            handler->start_pair("User");
            storeUser->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRating()))
              {
                return "When parsing the object for %what%, the \"Rating\" field was missing.";
              }
            if (!(hasLanguage()))
              {
                return "When parsing the object for %what%, the \"Language\" field was missing.";
              }
            if (!(hasCreated()))
              {
                return "When parsing the object for %what%, the \"Created\" field was missing.";
              }
            if (!(hasUser()))
              {
                return "When parsing the object for %what%, the \"User\" field was missing.";
              }
            return NULL;
          }

        static TypeReviewsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeReviewsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeReviewsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeReviewsJSON>, TypeReviewsJSON *, bool> generator("Type TypeReviews", ignore_extras);
                parse_json_value(text, "Text for TypeReviewsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeReviewsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeReviewsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeReviewsJSON>, TypeReviewsJSON *, bool> generator("Type TypeReviews", ignore_extras);
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
            JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 5>, uint8_t, uint8_t > fieldGeneratorRating;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLanguage;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCreated;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorText;
            JSONHoldingGenerator<TypeUserJSON::Generator, RCHandle<TypeUserJSON>, TypeUserJSON *, bool > fieldGeneratorUser;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeReviewsJSON *result = new TypeReviewsJSON();
                assert(result != NULL);
                RCHandle<TypeReviewsJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeReviewsJSON *result)
              {
                if (fieldGeneratorRating.have_value)
                  {
                    result->setRating(fieldGeneratorRating.value);
                    fieldGeneratorRating.have_value = false;
                  }
                else if (!(result->hasRating()))
                  {
                    error("When parsing the object for %what%, the \"Rating\" field was missing.");
                  }
                if (fieldGeneratorLanguage.have_value)
                  {
                    result->setLanguage(fieldGeneratorLanguage.value);
                    fieldGeneratorLanguage.have_value = false;
                  }
                else if (!(result->hasLanguage()))
                  {
                    error("When parsing the object for %what%, the \"Language\" field was missing.");
                  }
                if (fieldGeneratorCreated.have_value)
                  {
                    result->setCreated(fieldGeneratorCreated.value);
                    fieldGeneratorCreated.have_value = false;
                  }
                else if (!(result->hasCreated()))
                  {
                    error("When parsing the object for %what%, the \"Created\" field was missing.");
                  }
                if (fieldGeneratorURL.have_value)
                  {
                    result->setURL(fieldGeneratorURL.value);
                    fieldGeneratorURL.have_value = false;
                  }
                if (fieldGeneratorText.have_value)
                  {
                    result->setText(fieldGeneratorText.value);
                    fieldGeneratorText.have_value = false;
                  }
                if (fieldGeneratorUser.have_value)
                  {
                    result->setUser(fieldGeneratorUser.value.referenced());
                    fieldGeneratorUser.have_value = false;
                  }
                else if (!(result->hasUser()))
                  {
                    error("When parsing the object for %what%, the \"User\" field was missing.");
                  }
              }
            virtual void handle_result(TypeReviewsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "reated") == 0)
                            return &fieldGeneratorCreated;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "anguage") == 0)
                            return &fieldGeneratorLanguage;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ating") == 0)
                            return &fieldGeneratorRating;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ext") == 0)
                            return &fieldGeneratorText;
                        break;
                    case 'U':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'R':
                                if (strcmp(&(field_name[2]), "L") == 0)
                                    return &fieldGeneratorURL;
                                break;
                            case 's':
                                if (strcmp(&(field_name[2]), "er") == 0)
                                    return &fieldGeneratorUser;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRating("field \"Rating\" of the TypeReviews class"), fieldGeneratorLanguage("field \"Language\" of the TypeReviews class"), fieldGeneratorCreated("field \"Created\" of the TypeReviews class"), fieldGeneratorURL("field \"URL\" of the TypeReviews class"), fieldGeneratorText("field \"Text\" of the TypeReviews class"), fieldGeneratorUser("field \"User\" of the TypeReviews class", ignore_extras)
              {
                set_what("the TypeReviews class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRating.reset();
                fieldGeneratorLanguage.reset();
                fieldGeneratorCreated.reset();
                fieldGeneratorURL.reset();
                fieldGeneratorText.reset();
                fieldGeneratorUser.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeHoursJSON : public ReferenceCounted
      {
      private:
        bool flagHasMonday;
        std::vector< LocalResultBusinessHoursJSON * > storeMonday;
        bool flagHasTuesday;
        std::vector< LocalResultBusinessHoursJSON * > storeTuesday;
        bool flagHasWednesday;
        std::vector< LocalResultBusinessHoursJSON * > storeWednesday;
        bool flagHasThursday;
        std::vector< LocalResultBusinessHoursJSON * > storeThursday;
        bool flagHasFriday;
        std::vector< LocalResultBusinessHoursJSON * > storeFriday;
        bool flagHasSaturday;
        std::vector< LocalResultBusinessHoursJSON * > storeSaturday;
        bool flagHasSunday;
        std::vector< LocalResultBusinessHoursJSON * > storeSunday;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeHoursJSON(const TypeHoursJSON &);
        TypeHoursJSON & operator=(const TypeHoursJSON &other);

        void  fromJSONMonday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTuesday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWednesday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONThursday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFriday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSaturday(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSunday(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHoursJSON(void);
        virtual ~TypeHoursJSON(void);
        bool  hasMonday(void) const;
        size_t  countOfMonday(void) const;
        LocalResultBusinessHoursJSON *  elementOfMonday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfMonday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getMonday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getMonday(void) const;
        bool  hasTuesday(void) const;
        size_t  countOfTuesday(void) const;
        LocalResultBusinessHoursJSON *  elementOfTuesday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfTuesday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getTuesday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getTuesday(void) const;
        bool  hasWednesday(void) const;
        size_t  countOfWednesday(void) const;
        LocalResultBusinessHoursJSON *  elementOfWednesday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfWednesday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getWednesday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getWednesday(void) const;
        bool  hasThursday(void) const;
        size_t  countOfThursday(void) const;
        LocalResultBusinessHoursJSON *  elementOfThursday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfThursday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getThursday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getThursday(void) const;
        bool  hasFriday(void) const;
        size_t  countOfFriday(void) const;
        LocalResultBusinessHoursJSON *  elementOfFriday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfFriday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getFriday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getFriday(void) const;
        bool  hasSaturday(void) const;
        size_t  countOfSaturday(void) const;
        LocalResultBusinessHoursJSON *  elementOfSaturday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfSaturday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getSaturday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getSaturday(void) const;
        bool  hasSunday(void) const;
        size_t  countOfSunday(void) const;
        LocalResultBusinessHoursJSON *  elementOfSunday(size_t element_num);
        const LocalResultBusinessHoursJSON *  elementOfSunday(size_t element_num) const;
        std::vector< LocalResultBusinessHoursJSON * >  getSunday(void);
        const std::vector< LocalResultBusinessHoursJSON * >  getSunday(void) const;

        virtual size_t extraTypeHoursComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeHoursComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeHoursComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeHoursComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeHoursLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeHoursLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void initMonday(void)
          {
            if (flagHasMonday)
              {
                for (size_t num8 = 0; num8 < storeMonday.size(); ++num8)
                  {
                    storeMonday[num8]->remove_reference();
                  }
              }
            flagHasMonday = true;
            storeMonday.clear();
          }
        void appendMonday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasMonday)
              {
                flagHasMonday = true;
                storeMonday.clear();
              }
            assert(flagHasMonday);
            to_append->add_reference();
            storeMonday.push_back(to_append);
          }
        void unsetMonday(void)
          {
            if (flagHasMonday)
              {
                for (size_t num9 = 0; num9 < storeMonday.size(); ++num9)
                  {
                    storeMonday[num9]->remove_reference();
                  }
              }
            flagHasMonday = false;
            storeMonday.clear();
          }
        void initTuesday(void)
          {
            if (flagHasTuesday)
              {
                for (size_t num10 = 0; num10 < storeTuesday.size(); ++num10)
                  {
                    storeTuesday[num10]->remove_reference();
                  }
              }
            flagHasTuesday = true;
            storeTuesday.clear();
          }
        void appendTuesday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasTuesday)
              {
                flagHasTuesday = true;
                storeTuesday.clear();
              }
            assert(flagHasTuesday);
            to_append->add_reference();
            storeTuesday.push_back(to_append);
          }
        void unsetTuesday(void)
          {
            if (flagHasTuesday)
              {
                for (size_t num11 = 0; num11 < storeTuesday.size(); ++num11)
                  {
                    storeTuesday[num11]->remove_reference();
                  }
              }
            flagHasTuesday = false;
            storeTuesday.clear();
          }
        void initWednesday(void)
          {
            if (flagHasWednesday)
              {
                for (size_t num12 = 0; num12 < storeWednesday.size(); ++num12)
                  {
                    storeWednesday[num12]->remove_reference();
                  }
              }
            flagHasWednesday = true;
            storeWednesday.clear();
          }
        void appendWednesday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasWednesday)
              {
                flagHasWednesday = true;
                storeWednesday.clear();
              }
            assert(flagHasWednesday);
            to_append->add_reference();
            storeWednesday.push_back(to_append);
          }
        void unsetWednesday(void)
          {
            if (flagHasWednesday)
              {
                for (size_t num13 = 0; num13 < storeWednesday.size(); ++num13)
                  {
                    storeWednesday[num13]->remove_reference();
                  }
              }
            flagHasWednesday = false;
            storeWednesday.clear();
          }
        void initThursday(void)
          {
            if (flagHasThursday)
              {
                for (size_t num14 = 0; num14 < storeThursday.size(); ++num14)
                  {
                    storeThursday[num14]->remove_reference();
                  }
              }
            flagHasThursday = true;
            storeThursday.clear();
          }
        void appendThursday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasThursday)
              {
                flagHasThursday = true;
                storeThursday.clear();
              }
            assert(flagHasThursday);
            to_append->add_reference();
            storeThursday.push_back(to_append);
          }
        void unsetThursday(void)
          {
            if (flagHasThursday)
              {
                for (size_t num15 = 0; num15 < storeThursday.size(); ++num15)
                  {
                    storeThursday[num15]->remove_reference();
                  }
              }
            flagHasThursday = false;
            storeThursday.clear();
          }
        void initFriday(void)
          {
            if (flagHasFriday)
              {
                for (size_t num16 = 0; num16 < storeFriday.size(); ++num16)
                  {
                    storeFriday[num16]->remove_reference();
                  }
              }
            flagHasFriday = true;
            storeFriday.clear();
          }
        void appendFriday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasFriday)
              {
                flagHasFriday = true;
                storeFriday.clear();
              }
            assert(flagHasFriday);
            to_append->add_reference();
            storeFriday.push_back(to_append);
          }
        void unsetFriday(void)
          {
            if (flagHasFriday)
              {
                for (size_t num17 = 0; num17 < storeFriday.size(); ++num17)
                  {
                    storeFriday[num17]->remove_reference();
                  }
              }
            flagHasFriday = false;
            storeFriday.clear();
          }
        void initSaturday(void)
          {
            if (flagHasSaturday)
              {
                for (size_t num18 = 0; num18 < storeSaturday.size(); ++num18)
                  {
                    storeSaturday[num18]->remove_reference();
                  }
              }
            flagHasSaturday = true;
            storeSaturday.clear();
          }
        void appendSaturday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasSaturday)
              {
                flagHasSaturday = true;
                storeSaturday.clear();
              }
            assert(flagHasSaturday);
            to_append->add_reference();
            storeSaturday.push_back(to_append);
          }
        void unsetSaturday(void)
          {
            if (flagHasSaturday)
              {
                for (size_t num19 = 0; num19 < storeSaturday.size(); ++num19)
                  {
                    storeSaturday[num19]->remove_reference();
                  }
              }
            flagHasSaturday = false;
            storeSaturday.clear();
          }
        void initSunday(void)
          {
            if (flagHasSunday)
              {
                for (size_t num20 = 0; num20 < storeSunday.size(); ++num20)
                  {
                    storeSunday[num20]->remove_reference();
                  }
              }
            flagHasSunday = true;
            storeSunday.clear();
          }
        void appendSunday(LocalResultBusinessHoursJSON * to_append)
          {
            if (!flagHasSunday)
              {
                flagHasSunday = true;
                storeSunday.clear();
              }
            assert(flagHasSunday);
            to_append->add_reference();
            storeSunday.push_back(to_append);
          }
        void unsetSunday(void)
          {
            if (flagHasSunday)
              {
                for (size_t num21 = 0; num21 < storeSunday.size(); ++num21)
                  {
                    storeSunday[num21]->remove_reference();
                  }
              }
            flagHasSunday = false;
            storeSunday.clear();
          }

        virtual void extraTypeHoursAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeHoursSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeHoursLookup(key);
            if (old_field == NULL)
              {
                extraTypeHoursAppendPair(key, new_component);
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
            if (flagHasMonday)
              {
                handler->start_pair("Monday");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeMonday.size(); ++num1)
                  {
                    storeMonday[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasTuesday)
              {
                handler->start_pair("Tuesday");
                handler->start_array();
                for (size_t num2 = 0; num2 < storeTuesday.size(); ++num2)
                  {
                    storeTuesday[num2]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasWednesday)
              {
                handler->start_pair("Wednesday");
                handler->start_array();
                for (size_t num3 = 0; num3 < storeWednesday.size(); ++num3)
                  {
                    storeWednesday[num3]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasThursday)
              {
                handler->start_pair("Thursday");
                handler->start_array();
                for (size_t num4 = 0; num4 < storeThursday.size(); ++num4)
                  {
                    storeThursday[num4]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasFriday)
              {
                handler->start_pair("Friday");
                handler->start_array();
                for (size_t num5 = 0; num5 < storeFriday.size(); ++num5)
                  {
                    storeFriday[num5]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasSaturday)
              {
                handler->start_pair("Saturday");
                handler->start_array();
                for (size_t num6 = 0; num6 < storeSaturday.size(); ++num6)
                  {
                    storeSaturday[num6]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            if (flagHasSunday)
              {
                handler->start_pair("Sunday");
                handler->start_array();
                for (size_t num7 = 0; num7 < storeSunday.size(); ++num7)
                  {
                    storeSunday[num7]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeHoursJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHoursJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHoursJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHoursJSON>, TypeHoursJSON *, bool> generator("Type TypeHours", ignore_extras);
                parse_json_value(text, "Text for TypeHoursJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHoursJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHoursJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHoursJSON>, TypeHoursJSON *, bool> generator("Type TypeHours", ignore_extras);
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
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorMonday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorTuesday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorWednesday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorThursday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorFriday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorSaturday;
            JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorSunday;
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
                TypeHoursJSON *result = new TypeHoursJSON();
                assert(result != NULL);
                RCHandle<TypeHoursJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeHoursAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeHoursJSON *result)
              {
                if (fieldGeneratorMonday.have_value)
                  {
                    result->initMonday();
                    size_t count = fieldGeneratorMonday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendMonday(fieldGeneratorMonday.value[num].referenced());
                      }
                    fieldGeneratorMonday.value.clear();
                    fieldGeneratorMonday.have_value = false;
                  }
                if (fieldGeneratorTuesday.have_value)
                  {
                    result->initTuesday();
                    size_t count = fieldGeneratorTuesday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendTuesday(fieldGeneratorTuesday.value[num].referenced());
                      }
                    fieldGeneratorTuesday.value.clear();
                    fieldGeneratorTuesday.have_value = false;
                  }
                if (fieldGeneratorWednesday.have_value)
                  {
                    result->initWednesday();
                    size_t count = fieldGeneratorWednesday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendWednesday(fieldGeneratorWednesday.value[num].referenced());
                      }
                    fieldGeneratorWednesday.value.clear();
                    fieldGeneratorWednesday.have_value = false;
                  }
                if (fieldGeneratorThursday.have_value)
                  {
                    result->initThursday();
                    size_t count = fieldGeneratorThursday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendThursday(fieldGeneratorThursday.value[num].referenced());
                      }
                    fieldGeneratorThursday.value.clear();
                    fieldGeneratorThursday.have_value = false;
                  }
                if (fieldGeneratorFriday.have_value)
                  {
                    result->initFriday();
                    size_t count = fieldGeneratorFriday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendFriday(fieldGeneratorFriday.value[num].referenced());
                      }
                    fieldGeneratorFriday.value.clear();
                    fieldGeneratorFriday.have_value = false;
                  }
                if (fieldGeneratorSaturday.have_value)
                  {
                    result->initSaturday();
                    size_t count = fieldGeneratorSaturday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendSaturday(fieldGeneratorSaturday.value[num].referenced());
                      }
                    fieldGeneratorSaturday.value.clear();
                    fieldGeneratorSaturday.have_value = false;
                  }
                if (fieldGeneratorSunday.have_value)
                  {
                    result->initSunday();
                    size_t count = fieldGeneratorSunday.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendSunday(fieldGeneratorSunday.value[num].referenced());
                      }
                    fieldGeneratorSunday.value.clear();
                    fieldGeneratorSunday.have_value = false;
                  }
              }
            virtual void handle_result(TypeHoursJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "riday") == 0)
                            return &fieldGeneratorFriday;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "onday") == 0)
                            return &fieldGeneratorMonday;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "turday") == 0)
                                    return &fieldGeneratorSaturday;
                                break;
                            case 'u':
                                if (strcmp(&(field_name[2]), "nday") == 0)
                                    return &fieldGeneratorSunday;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strcmp(&(field_name[2]), "ursday") == 0)
                                    return &fieldGeneratorThursday;
                                break;
                            case 'u':
                                if (strcmp(&(field_name[2]), "esday") == 0)
                                    return &fieldGeneratorTuesday;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "ednesday") == 0)
                            return &fieldGeneratorWednesday;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMonday("field \"Monday\" of the TypeHours class", ignore_extras), fieldGeneratorTuesday("field \"Tuesday\" of the TypeHours class", ignore_extras), fieldGeneratorWednesday("field \"Wednesday\" of the TypeHours class", ignore_extras), fieldGeneratorThursday("field \"Thursday\" of the TypeHours class", ignore_extras), fieldGeneratorFriday("field \"Friday\" of the TypeHours class", ignore_extras), fieldGeneratorSaturday("field \"Saturday\" of the TypeHours class", ignore_extras), fieldGeneratorSunday("field \"Sunday\" of the TypeHours class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeHours class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMonday.reset();
                fieldGeneratorTuesday.reset();
                fieldGeneratorWednesday.reset();
                fieldGeneratorThursday.reset();
                fieldGeneratorFriday.reset();
                fieldGeneratorSaturday.reset();
                fieldGeneratorSunday.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeAttributesJSON : public ReferenceCounted
      {
      public:
        enum TypeWifi
          {
            Wifi_no,
            Wifi_free,
            Wifi_paid
          };

        static TypeWifi  stringToWifi(const char *chars);
        static const char * stringFromWifi(TypeWifi the_enum);
        enum TypeParking
          {
            Parking_lot,
            Parking_street,
            Parking_garage,
            Parking_valet,
            Parking_validated
          };

        static TypeParking  stringToParking(const char *chars);
        static const char * stringFromParking(TypeParking the_enum);

      private:
        bool flagHasDelivers;
        bool storeDelivers;
        bool flagHasTakesReservations;
        bool storeTakesReservations;
        bool flagHasGoodForKids;
        bool storeGoodForKids;
        bool flagHasOutdoorSeating;
        bool storeOutdoorSeating;
        bool flagHasWifi;
        TypeWifi storeWifi;
        bool flagHasParking;
        std::vector< TypeParking > storeParking;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeAttributesJSON(const TypeAttributesJSON &);
        TypeAttributesJSON & operator=(const TypeAttributesJSON &other);

        void  fromJSONDelivers(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTakesReservations(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONGoodForKids(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONOutdoorSeating(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWifi(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONParking(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAttributesJSON(void);
        virtual ~TypeAttributesJSON(void);
        bool  hasDelivers(void) const;
        bool  getDelivers(void);
        const bool  getDelivers(void) const;
        bool  hasTakesReservations(void) const;
        bool  getTakesReservations(void);
        const bool  getTakesReservations(void) const;
        bool  hasGoodForKids(void) const;
        bool  getGoodForKids(void);
        const bool  getGoodForKids(void) const;
        bool  hasOutdoorSeating(void) const;
        bool  getOutdoorSeating(void);
        const bool  getOutdoorSeating(void) const;
        bool  hasWifi(void) const;
        TypeWifi  getWifi(void);
        const TypeWifi  getWifi(void) const;
        const char * getWifiAsChars(void) const;
        std::string  getWifiAsString(void) const;
        bool  hasParking(void) const;
        size_t  countOfParking(void) const;
        TypeParking  elementOfParking(size_t element_num);
        const TypeParking  elementOfParking(size_t element_num) const;
        std::vector< TypeParking >  getParking(void);
        const std::vector< TypeParking >  getParking(void) const;

        virtual size_t extraTypeAttributesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeAttributesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeAttributesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeAttributesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeAttributesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeAttributesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setDelivers(bool new_value)
          {
            flagHasDelivers = true;
            storeDelivers = new_value;
          }
        void unsetDelivers(void)
          {
            flagHasDelivers = false;
          }
        void setTakesReservations(bool new_value)
          {
            flagHasTakesReservations = true;
            storeTakesReservations = new_value;
          }
        void unsetTakesReservations(void)
          {
            flagHasTakesReservations = false;
          }
        void setGoodForKids(bool new_value)
          {
            flagHasGoodForKids = true;
            storeGoodForKids = new_value;
          }
        void unsetGoodForKids(void)
          {
            flagHasGoodForKids = false;
          }
        void setOutdoorSeating(bool new_value)
          {
            flagHasOutdoorSeating = true;
            storeOutdoorSeating = new_value;
          }
        void unsetOutdoorSeating(void)
          {
            flagHasOutdoorSeating = false;
          }
        void setWifi(TypeWifi new_value)
          {
            flagHasWifi = true;
            storeWifi = new_value;
          }
        void setWifi(const char *chars)
          {
            setWifi(stringToWifi(chars));
          }
        void setWifi(std::string the_string)
          {
            setWifi(stringToWifi(the_string.c_str()));
          }
        void unsetWifi(void)
          {
            flagHasWifi = false;
          }
        void initParking(void)
          {
            flagHasParking = true;
            storeParking.clear();
          }
        void appendParking(TypeParking to_append)
          {
            if (!flagHasParking)
              {
                flagHasParking = true;
                storeParking.clear();
              }
            assert(flagHasParking);
            storeParking.push_back(to_append);
          }
        void appendParking(const char *chars)
          {
            appendParking(stringToParking(chars));
          }
        void appendParking(std::string the_string)
          {
            appendParking(stringToParking(the_string.c_str()));
          }
        void unsetParking(void)
          {
            flagHasParking = false;
            storeParking.clear();
          }

        virtual void extraTypeAttributesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeAttributesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeAttributesLookup(key);
            if (old_field == NULL)
              {
                extraTypeAttributesAppendPair(key, new_component);
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
            if (flagHasDelivers)
              {
                handler->start_pair("Delivers");
                handler->boolean_value(storeDelivers);
              }
            if (flagHasTakesReservations)
              {
                handler->start_pair("TakesReservations");
                handler->boolean_value(storeTakesReservations);
              }
            if (flagHasGoodForKids)
              {
                handler->start_pair("GoodForKids");
                handler->boolean_value(storeGoodForKids);
              }
            if (flagHasOutdoorSeating)
              {
                handler->start_pair("OutdoorSeating");
                handler->boolean_value(storeOutdoorSeating);
              }
            if (flagHasWifi)
              {
                handler->start_pair("Wifi");
                switch (storeWifi)
                  {
                    case Wifi_no:
                        handler->string_value("no");
                        break;
                    case Wifi_free:
                        handler->string_value("free");
                        break;
                    case Wifi_paid:
                        handler->string_value("paid");
                        break;
                    default:
                        assert(false);
                  }
              }
            if (flagHasParking)
              {
                handler->start_pair("Parking");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeParking.size(); ++num1)
                  {
                    switch (storeParking[num1])
                      {
                        case Parking_lot:
                            handler->string_value("lot");
                            break;
                        case Parking_street:
                            handler->string_value("street");
                            break;
                        case Parking_garage:
                            handler->string_value("garage");
                            break;
                        case Parking_valet:
                            handler->string_value("valet");
                            break;
                        case Parking_validated:
                            handler->string_value("validated");
                            break;
                        default:
                            assert(false);
                      }
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeAttributesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAttributesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAttributesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool> generator("Type TypeAttributes", ignore_extras);
                parse_json_value(text, "Text for TypeAttributesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAttributesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAttributesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool> generator("Type TypeAttributes", ignore_extras);
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDelivers;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTakesReservations;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorGoodForKids;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOutdoorSeating;
        class FieldGeneratorWifi : public JSONStringGenerator
              {
              protected:
                FieldGeneratorWifi(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorWifi(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToWifi(result));
                  }
                virtual void handle_result(TypeWifi result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorWifi, TypeWifi, TypeWifi > fieldGeneratorWifi;
        class FieldGeneratorParking : public JSONStringGenerator
              {
              protected:
                FieldGeneratorParking(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorParking(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToParking(result));
                  }
                virtual void handle_result(TypeParking result) = 0;
              };
            JSONHoldingArrayGenerator<FieldGeneratorParking, TypeParking, TypeParking > fieldGeneratorParking;
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
                TypeAttributesJSON *result = new TypeAttributesJSON();
                assert(result != NULL);
                RCHandle<TypeAttributesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeAttributesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeAttributesJSON *result)
              {
                if (fieldGeneratorDelivers.have_value)
                  {
                    result->setDelivers(fieldGeneratorDelivers.value);
                    fieldGeneratorDelivers.have_value = false;
                  }
                if (fieldGeneratorTakesReservations.have_value)
                  {
                    result->setTakesReservations(fieldGeneratorTakesReservations.value);
                    fieldGeneratorTakesReservations.have_value = false;
                  }
                if (fieldGeneratorGoodForKids.have_value)
                  {
                    result->setGoodForKids(fieldGeneratorGoodForKids.value);
                    fieldGeneratorGoodForKids.have_value = false;
                  }
                if (fieldGeneratorOutdoorSeating.have_value)
                  {
                    result->setOutdoorSeating(fieldGeneratorOutdoorSeating.value);
                    fieldGeneratorOutdoorSeating.have_value = false;
                  }
                if (fieldGeneratorWifi.have_value)
                  {
                    result->setWifi(fieldGeneratorWifi.value);
                    fieldGeneratorWifi.have_value = false;
                  }
                if (fieldGeneratorParking.have_value)
                  {
                    result->initParking();
                    size_t count = fieldGeneratorParking.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendParking(fieldGeneratorParking.value[num]);
                      }
                    fieldGeneratorParking.value.clear();
                    fieldGeneratorParking.have_value = false;
                  }
              }
            virtual void handle_result(TypeAttributesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "elivers") == 0)
                            return &fieldGeneratorDelivers;
                        break;
                    case 'G':
                        if (strcmp(&(field_name[1]), "oodForKids") == 0)
                            return &fieldGeneratorGoodForKids;
                        break;
                    case 'O':
                        if (strcmp(&(field_name[1]), "utdoorSeating") == 0)
                            return &fieldGeneratorOutdoorSeating;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "arking") == 0)
                            return &fieldGeneratorParking;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "akesReservations") == 0)
                            return &fieldGeneratorTakesReservations;
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "ifi") == 0)
                            return &fieldGeneratorWifi;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDelivers("field \"Delivers\" of the TypeAttributes class"), fieldGeneratorTakesReservations("field \"TakesReservations\" of the TypeAttributes class"), fieldGeneratorGoodForKids("field \"GoodForKids\" of the TypeAttributes class"), fieldGeneratorOutdoorSeating("field \"OutdoorSeating\" of the TypeAttributes class"), fieldGeneratorWifi("field \"Wifi\" of the TypeAttributes class"), fieldGeneratorParking("field \"Parking\" of the TypeAttributes class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeAttributes class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDelivers.reset();
                fieldGeneratorTakesReservations.reset();
                fieldGeneratorGoodForKids.reset();
                fieldGeneratorOutdoorSeating.reset();
                fieldGeneratorWifi.reset();
                fieldGeneratorParking.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeAttributesForDisplayJSON : public ReferenceCounted
      {
      private:
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasValue;
        std::string storeValue;

        TypeAttributesForDisplayJSON(const TypeAttributesForDisplayJSON &);
        TypeAttributesForDisplayJSON & operator=(const TypeAttributesForDisplayJSON &other);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeAttributesForDisplayJSON(void);
        virtual ~TypeAttributesForDisplayJSON(void);
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasValue(void) const;
        std::string  getValue(void);
        const std::string  getValue(void) const;


        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
          }
        void setValue(std::string new_value)
          {
            flagHasValue = true;
            storeValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasValue);
            handler->start_pair("Value");
            handler->string_value(storeValue);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            return NULL;
          }

        static TypeAttributesForDisplayJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeAttributesForDisplayJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeAttributesForDisplayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesForDisplayJSON>, TypeAttributesForDisplayJSON *, bool> generator("Type TypeAttributesForDisplay", ignore_extras);
                parse_json_value(text, "Text for TypeAttributesForDisplayJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeAttributesForDisplayJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeAttributesForDisplayJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeAttributesForDisplayJSON>, TypeAttributesForDisplayJSON *, bool> generator("Type TypeAttributesForDisplay", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValue;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeAttributesForDisplayJSON *result = new TypeAttributesForDisplayJSON();
                assert(result != NULL);
                RCHandle<TypeAttributesForDisplayJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeAttributesForDisplayJSON *result)
              {
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
                  }
                else if (!(result->hasLabel()))
                  {
                    error("When parsing the object for %what%, the \"Label\" field was missing.");
                  }
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValue(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
              }
            virtual void handle_result(TypeAttributesForDisplayJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
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
            Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the TypeAttributesForDisplay class"), fieldGeneratorValue("field \"Value\" of the TypeAttributesForDisplay class")
              {
                set_what("the TypeAttributesForDisplay class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLabel.reset();
                fieldGeneratorValue.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasAlias;
    std::string storeAlias;
    bool flagHasID;
    std::string storeID;
    bool flagHasRating;
    double storeRating;
    std::string textStoreRating;
    bool flagHasReviewCount;
    OInteger storeReviewCount;
    bool flagHasPrice;
    uint8_t storePrice;
    bool flagHasPhone;
    std::vector< TypePhoneJSON * > storePhone;
    bool flagHasLinks;
    std::vector< TypeLinksJSON * > storeLinks;
    bool flagHasYelpURL;
    std::string storeYelpURL;
    bool flagHasEmail;
    std::string storeEmail;
    bool flagHasPhotos;
    std::vector< TypePhotosJSON * > storePhotos;
    bool flagHasIsRestaurant;
    bool storeIsRestaurant;
    bool flagHasPermanentlyClosed;
    bool storePermanentlyClosed;
    bool flagHasIsClaimed;
    bool storeIsClaimed;
    bool flagHasCategories;
    std::vector< TypeCategoriesJSON * > storeCategories;
    bool flagHasLocation;
    MapLocationJSON * storeLocation;
    bool flagHasDistanceFromReference;
    TypeDistanceFromReferenceJSON * storeDistanceFromReference;
    bool flagHasDistanceFromUser;
    TypeDistanceFromUserJSON * storeDistanceFromUser;
    bool flagHasBearingFromUser;
    double storeBearingFromUser;
    std::string textStoreBearingFromUser;
    bool flagHasReviews;
    std::vector< TypeReviewsJSON * > storeReviews;
    bool flagHasHours;
    TypeHoursJSON * storeHours;
    bool flagHasHoursToday;
    std::vector< LocalResultBusinessHoursJSON * > storeHoursToday;
    bool flagHasOpenNow;
    bool storeOpenNow;
    bool flagHasMinutesToOpen;
    OInteger storeMinutesToOpen;
    bool flagHasMinutesToClose;
    OInteger storeMinutesToClose;
    bool flagHasOpen24Hours;
    bool storeOpen24Hours;
    bool flagHasAttributes;
    TypeAttributesJSON * storeAttributes;
    bool flagHasAttributesForDisplay;
    std::vector< TypeAttributesForDisplayJSON * > storeAttributesForDisplay;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocalResultJSON(const LocalResultJSON &);
    LocalResultJSON & operator=(const LocalResultJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlias(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReviewCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLinks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONYelpURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPhotos(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsRestaurant(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPermanentlyClosed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsClaimed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCategories(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceFromReference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceFromUser(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBearingFromUser(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReviews(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHoursToday(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinutesToOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinutesToClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen24Hours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttributes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAttributesForDisplay(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocalResultJSON(void);
    virtual ~LocalResultJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasAlias(void) const;
    std::string  getAlias(void);
    const std::string  getAlias(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;
    bool  hasRating(void) const;
    double  getRating(void);
    const double  getRating(void) const;
    std::string  getRatingAsText(void) const;
    bool  hasReviewCount(void) const;
    OInteger  getReviewCount(void);
    const OInteger  getReviewCount(void) const;
    bool  hasPrice(void) const;
    uint8_t  getPrice(void);
    const uint8_t  getPrice(void) const;
    bool  hasPhone(void) const;
    size_t  countOfPhone(void) const;
    TypePhoneJSON *  elementOfPhone(size_t element_num);
    const TypePhoneJSON *  elementOfPhone(size_t element_num) const;
    std::vector< TypePhoneJSON * >  getPhone(void);
    const std::vector< TypePhoneJSON * >  getPhone(void) const;
    bool  hasLinks(void) const;
    size_t  countOfLinks(void) const;
    TypeLinksJSON *  elementOfLinks(size_t element_num);
    const TypeLinksJSON *  elementOfLinks(size_t element_num) const;
    std::vector< TypeLinksJSON * >  getLinks(void);
    const std::vector< TypeLinksJSON * >  getLinks(void) const;
    bool  hasYelpURL(void) const;
    std::string  getYelpURL(void);
    const std::string  getYelpURL(void) const;
    bool  hasEmail(void) const;
    std::string  getEmail(void);
    const std::string  getEmail(void) const;
    bool  hasPhotos(void) const;
    size_t  countOfPhotos(void) const;
    TypePhotosJSON *  elementOfPhotos(size_t element_num);
    const TypePhotosJSON *  elementOfPhotos(size_t element_num) const;
    std::vector< TypePhotosJSON * >  getPhotos(void);
    const std::vector< TypePhotosJSON * >  getPhotos(void) const;
    bool  hasIsRestaurant(void) const;
    bool  getIsRestaurant(void);
    const bool  getIsRestaurant(void) const;
    bool  hasPermanentlyClosed(void) const;
    bool  getPermanentlyClosed(void);
    const bool  getPermanentlyClosed(void) const;
    bool  hasIsClaimed(void) const;
    bool  getIsClaimed(void);
    const bool  getIsClaimed(void) const;
    bool  hasCategories(void) const;
    size_t  countOfCategories(void) const;
    TypeCategoriesJSON *  elementOfCategories(size_t element_num);
    const TypeCategoriesJSON *  elementOfCategories(size_t element_num) const;
    std::vector< TypeCategoriesJSON * >  getCategories(void);
    const std::vector< TypeCategoriesJSON * >  getCategories(void) const;
    bool  hasLocation(void) const;
    MapLocationJSON *  getLocation(void);
    const MapLocationJSON *  getLocation(void) const;
    bool  hasDistanceFromReference(void) const;
    TypeDistanceFromReferenceJSON *  getDistanceFromReference(void);
    const TypeDistanceFromReferenceJSON *  getDistanceFromReference(void) const;
    bool  hasDistanceFromUser(void) const;
    TypeDistanceFromUserJSON *  getDistanceFromUser(void);
    const TypeDistanceFromUserJSON *  getDistanceFromUser(void) const;
    bool  hasBearingFromUser(void) const;
    double  getBearingFromUser(void);
    const double  getBearingFromUser(void) const;
    std::string  getBearingFromUserAsText(void) const;
    bool  hasReviews(void) const;
    size_t  countOfReviews(void) const;
    TypeReviewsJSON *  elementOfReviews(size_t element_num);
    const TypeReviewsJSON *  elementOfReviews(size_t element_num) const;
    std::vector< TypeReviewsJSON * >  getReviews(void);
    const std::vector< TypeReviewsJSON * >  getReviews(void) const;
    bool  hasHours(void) const;
    TypeHoursJSON *  getHours(void);
    const TypeHoursJSON *  getHours(void) const;
    bool  hasHoursToday(void) const;
    size_t  countOfHoursToday(void) const;
    LocalResultBusinessHoursJSON *  elementOfHoursToday(size_t element_num);
    const LocalResultBusinessHoursJSON *  elementOfHoursToday(size_t element_num) const;
    std::vector< LocalResultBusinessHoursJSON * >  getHoursToday(void);
    const std::vector< LocalResultBusinessHoursJSON * >  getHoursToday(void) const;
    bool  hasOpenNow(void) const;
    bool  getOpenNow(void);
    const bool  getOpenNow(void) const;
    bool  hasMinutesToOpen(void) const;
    OInteger  getMinutesToOpen(void);
    const OInteger  getMinutesToOpen(void) const;
    bool  hasMinutesToClose(void) const;
    OInteger  getMinutesToClose(void);
    const OInteger  getMinutesToClose(void) const;
    bool  hasOpen24Hours(void) const;
    bool  getOpen24Hours(void);
    const bool  getOpen24Hours(void) const;
    bool  hasAttributes(void) const;
    TypeAttributesJSON *  getAttributes(void);
    const TypeAttributesJSON *  getAttributes(void) const;
    bool  hasAttributesForDisplay(void) const;
    size_t  countOfAttributesForDisplay(void) const;
    TypeAttributesForDisplayJSON *  elementOfAttributesForDisplay(size_t element_num);
    const TypeAttributesForDisplayJSON *  elementOfAttributesForDisplay(size_t element_num) const;
    std::vector< TypeAttributesForDisplayJSON * >  getAttributesForDisplay(void);
    const std::vector< TypeAttributesForDisplayJSON * >  getAttributesForDisplay(void) const;

    virtual size_t extraLocalResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocalResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocalResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocalResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocalResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocalResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setRating(double new_value)
      {
        flagHasRating = true;
        if (new_value < 0)
            throw("The value for field Rating of LocalResultJSON is less than the lower bound (0) for that field.");
        if (new_value > 5)
            throw("The value for field Rating of LocalResultJSON is greater than the upper bound (5) for that field.");
        storeRating = new_value;
        textStoreRating = "";
      }
    void setRatingText(std::string new_value)
      {
        flagHasRating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Rating of LocalResultJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Rating of LocalResultJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "5", "", false, "1") > 0)
            throw("The value for field Rating of LocalResultJSON is greater than the upper bound (5) for that field.");
        textStoreRating = new_value;
      }
    void unsetRating(void)
      {
        flagHasRating = false;
      }
    void setReviewCount(OInteger new_value)
      {
        flagHasReviewCount = true;
        if (new_value < 0)
            throw("The value for field ReviewCount of LocalResultJSON is less than the lower bound (0) for that field.");
        storeReviewCount = new_value;
      }
    void unsetReviewCount(void)
      {
        flagHasReviewCount = false;
      }
    void setPrice(uint8_t new_value)
      {
        flagHasPrice = true;
        if (new_value < 0)
            throw("The value for field Price of LocalResultJSON is less than the lower bound (0) for that field.");
        if (new_value > 5)
            throw("The value for field Price of LocalResultJSON is greater than the upper bound (5) for that field.");
        storePrice = new_value;
      }
    void unsetPrice(void)
      {
        flagHasPrice = false;
      }
    void initPhone(void)
      {
        if (flagHasPhone)
          {
            for (size_t num29 = 0; num29 < storePhone.size(); ++num29)
              {
                storePhone[num29]->remove_reference();
              }
          }
        flagHasPhone = true;
        storePhone.clear();
      }
    void appendPhone(TypePhoneJSON * to_append)
      {
        if (!flagHasPhone)
          {
            flagHasPhone = true;
            storePhone.clear();
          }
        assert(flagHasPhone);
        to_append->add_reference();
        storePhone.push_back(to_append);
      }
    void unsetPhone(void)
      {
        if (flagHasPhone)
          {
            for (size_t num30 = 0; num30 < storePhone.size(); ++num30)
              {
                storePhone[num30]->remove_reference();
              }
          }
        flagHasPhone = false;
        storePhone.clear();
      }
    void initLinks(void)
      {
        if (flagHasLinks)
          {
            for (size_t num31 = 0; num31 < storeLinks.size(); ++num31)
              {
                storeLinks[num31]->remove_reference();
              }
          }
        flagHasLinks = true;
        storeLinks.clear();
      }
    void appendLinks(TypeLinksJSON * to_append)
      {
        if (!flagHasLinks)
          {
            flagHasLinks = true;
            storeLinks.clear();
          }
        assert(flagHasLinks);
        to_append->add_reference();
        storeLinks.push_back(to_append);
      }
    void unsetLinks(void)
      {
        if (flagHasLinks)
          {
            for (size_t num32 = 0; num32 < storeLinks.size(); ++num32)
              {
                storeLinks[num32]->remove_reference();
              }
          }
        flagHasLinks = false;
        storeLinks.clear();
      }
    void setYelpURL(std::string new_value)
      {
        flagHasYelpURL = true;
        storeYelpURL = new_value;
      }
    void unsetYelpURL(void)
      {
        flagHasYelpURL = false;
      }
    void setEmail(std::string new_value)
      {
        flagHasEmail = true;
        storeEmail = new_value;
      }
    void unsetEmail(void)
      {
        flagHasEmail = false;
      }
    void initPhotos(void)
      {
        if (flagHasPhotos)
          {
            for (size_t num33 = 0; num33 < storePhotos.size(); ++num33)
              {
                storePhotos[num33]->remove_reference();
              }
          }
        flagHasPhotos = true;
        storePhotos.clear();
      }
    void appendPhotos(TypePhotosJSON * to_append)
      {
        if (!flagHasPhotos)
          {
            flagHasPhotos = true;
            storePhotos.clear();
          }
        assert(flagHasPhotos);
        to_append->add_reference();
        storePhotos.push_back(to_append);
      }
    void unsetPhotos(void)
      {
        if (flagHasPhotos)
          {
            for (size_t num34 = 0; num34 < storePhotos.size(); ++num34)
              {
                storePhotos[num34]->remove_reference();
              }
          }
        flagHasPhotos = false;
        storePhotos.clear();
      }
    void setIsRestaurant(bool new_value)
      {
        flagHasIsRestaurant = true;
        storeIsRestaurant = new_value;
      }
    void unsetIsRestaurant(void)
      {
        flagHasIsRestaurant = false;
      }
    void setPermanentlyClosed(bool new_value)
      {
        flagHasPermanentlyClosed = true;
        storePermanentlyClosed = new_value;
      }
    void unsetPermanentlyClosed(void)
      {
        flagHasPermanentlyClosed = false;
      }
    void setIsClaimed(bool new_value)
      {
        flagHasIsClaimed = true;
        storeIsClaimed = new_value;
      }
    void unsetIsClaimed(void)
      {
        flagHasIsClaimed = false;
      }
    void initCategories(void)
      {
        if (flagHasCategories)
          {
            for (size_t num35 = 0; num35 < storeCategories.size(); ++num35)
              {
                storeCategories[num35]->remove_reference();
              }
          }
        flagHasCategories = true;
        storeCategories.clear();
      }
    void appendCategories(TypeCategoriesJSON * to_append)
      {
        if (!flagHasCategories)
          {
            flagHasCategories = true;
            storeCategories.clear();
          }
        assert(flagHasCategories);
        to_append->add_reference();
        storeCategories.push_back(to_append);
      }
    void unsetCategories(void)
      {
        if (flagHasCategories)
          {
            for (size_t num36 = 0; num36 < storeCategories.size(); ++num36)
              {
                storeCategories[num36]->remove_reference();
              }
          }
        flagHasCategories = false;
        storeCategories.clear();
      }
    void setLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = true;
        storeLocation = new_value;
      }
    void unsetLocation(void)
      {
        if (flagHasLocation)
          {
            storeLocation->remove_reference();
          }
        flagHasLocation = false;
      }
    void setDistanceFromReference(TypeDistanceFromReferenceJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDistanceFromReference)
          {
            storeDistanceFromReference->remove_reference();
          }
        flagHasDistanceFromReference = true;
        storeDistanceFromReference = new_value;
      }
    void unsetDistanceFromReference(void)
      {
        if (flagHasDistanceFromReference)
          {
            storeDistanceFromReference->remove_reference();
          }
        flagHasDistanceFromReference = false;
      }
    void setDistanceFromUser(TypeDistanceFromUserJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDistanceFromUser)
          {
            storeDistanceFromUser->remove_reference();
          }
        flagHasDistanceFromUser = true;
        storeDistanceFromUser = new_value;
      }
    void unsetDistanceFromUser(void)
      {
        if (flagHasDistanceFromUser)
          {
            storeDistanceFromUser->remove_reference();
          }
        flagHasDistanceFromUser = false;
      }
    void setBearingFromUser(double new_value)
      {
        flagHasBearingFromUser = true;
        if (new_value < 0)
            throw("The value for field BearingFromUser of LocalResultJSON is less than the lower bound (0) for that field.");
        if (new_value > 360)
            throw("The value for field BearingFromUser of LocalResultJSON is greater than the upper bound (360) for that field.");
        storeBearingFromUser = new_value;
        textStoreBearingFromUser = "";
      }
    void setBearingFromUserText(std::string new_value)
      {
        flagHasBearingFromUser = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BearingFromUser of LocalResultJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field BearingFromUser of LocalResultJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "360", "", false, "3") > 0)
            throw("The value for field BearingFromUser of LocalResultJSON is greater than the upper bound (360) for that field.");
        textStoreBearingFromUser = new_value;
      }
    void unsetBearingFromUser(void)
      {
        flagHasBearingFromUser = false;
      }
    void initReviews(void)
      {
        if (flagHasReviews)
          {
            for (size_t num37 = 0; num37 < storeReviews.size(); ++num37)
              {
                storeReviews[num37]->remove_reference();
              }
          }
        flagHasReviews = true;
        storeReviews.clear();
      }
    void appendReviews(TypeReviewsJSON * to_append)
      {
        if (!flagHasReviews)
          {
            flagHasReviews = true;
            storeReviews.clear();
          }
        assert(flagHasReviews);
        to_append->add_reference();
        storeReviews.push_back(to_append);
      }
    void unsetReviews(void)
      {
        if (flagHasReviews)
          {
            for (size_t num38 = 0; num38 < storeReviews.size(); ++num38)
              {
                storeReviews[num38]->remove_reference();
              }
          }
        flagHasReviews = false;
        storeReviews.clear();
      }
    void setHours(TypeHoursJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHours)
          {
            storeHours->remove_reference();
          }
        flagHasHours = true;
        storeHours = new_value;
      }
    void unsetHours(void)
      {
        if (flagHasHours)
          {
            storeHours->remove_reference();
          }
        flagHasHours = false;
      }
    void initHoursToday(void)
      {
        if (flagHasHoursToday)
          {
            for (size_t num39 = 0; num39 < storeHoursToday.size(); ++num39)
              {
                storeHoursToday[num39]->remove_reference();
              }
          }
        flagHasHoursToday = true;
        storeHoursToday.clear();
      }
    void appendHoursToday(LocalResultBusinessHoursJSON * to_append)
      {
        if (!flagHasHoursToday)
          {
            flagHasHoursToday = true;
            storeHoursToday.clear();
          }
        assert(flagHasHoursToday);
        to_append->add_reference();
        storeHoursToday.push_back(to_append);
      }
    void unsetHoursToday(void)
      {
        if (flagHasHoursToday)
          {
            for (size_t num40 = 0; num40 < storeHoursToday.size(); ++num40)
              {
                storeHoursToday[num40]->remove_reference();
              }
          }
        flagHasHoursToday = false;
        storeHoursToday.clear();
      }
    void setOpenNow(bool new_value)
      {
        flagHasOpenNow = true;
        storeOpenNow = new_value;
      }
    void unsetOpenNow(void)
      {
        flagHasOpenNow = false;
      }
    void setMinutesToOpen(OInteger new_value)
      {
        flagHasMinutesToOpen = true;
        if (new_value < 0)
            throw("The value for field MinutesToOpen of LocalResultJSON is less than the lower bound (0) for that field.");
        storeMinutesToOpen = new_value;
      }
    void unsetMinutesToOpen(void)
      {
        flagHasMinutesToOpen = false;
      }
    void setMinutesToClose(OInteger new_value)
      {
        flagHasMinutesToClose = true;
        if (new_value < 0)
            throw("The value for field MinutesToClose of LocalResultJSON is less than the lower bound (0) for that field.");
        storeMinutesToClose = new_value;
      }
    void unsetMinutesToClose(void)
      {
        flagHasMinutesToClose = false;
      }
    void setOpen24Hours(bool new_value)
      {
        flagHasOpen24Hours = true;
        storeOpen24Hours = new_value;
      }
    void unsetOpen24Hours(void)
      {
        flagHasOpen24Hours = false;
      }
    void setAttributes(TypeAttributesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasAttributes)
          {
            storeAttributes->remove_reference();
          }
        flagHasAttributes = true;
        storeAttributes = new_value;
      }
    void unsetAttributes(void)
      {
        if (flagHasAttributes)
          {
            storeAttributes->remove_reference();
          }
        flagHasAttributes = false;
      }
    void initAttributesForDisplay(void)
      {
        if (flagHasAttributesForDisplay)
          {
            for (size_t num41 = 0; num41 < storeAttributesForDisplay.size(); ++num41)
              {
                storeAttributesForDisplay[num41]->remove_reference();
              }
          }
        flagHasAttributesForDisplay = true;
        storeAttributesForDisplay.clear();
      }
    void appendAttributesForDisplay(TypeAttributesForDisplayJSON * to_append)
      {
        if (!flagHasAttributesForDisplay)
          {
            flagHasAttributesForDisplay = true;
            storeAttributesForDisplay.clear();
          }
        assert(flagHasAttributesForDisplay);
        to_append->add_reference();
        storeAttributesForDisplay.push_back(to_append);
      }
    void unsetAttributesForDisplay(void)
      {
        if (flagHasAttributesForDisplay)
          {
            for (size_t num42 = 0; num42 < storeAttributesForDisplay.size(); ++num42)
              {
                storeAttributesForDisplay[num42]->remove_reference();
              }
          }
        flagHasAttributesForDisplay = false;
        storeAttributesForDisplay.clear();
      }

    virtual void extraLocalResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocalResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocalResultLookup(key);
        if (old_field == NULL)
          {
            extraLocalResultAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasAlias)
          {
            handler->start_pair("Alias");
            handler->string_value(storeAlias);
          }
        assert(flagHasID);
        handler->start_pair("ID");
        handler->string_value(storeID);
        assert(flagHasRating);
        handler->start_pair("Rating");
        if (textStoreRating != "")
            handler->number_value(textStoreRating.c_str());
        else if (((double)(long int)storeRating) == storeRating)
            handler->number_value((long int)storeRating);
        else
            handler->number_value(storeRating);
        assert(flagHasReviewCount);
        handler->start_pair("ReviewCount");
        handler->number_value(storeReviewCount.get_o_integer());
        if (flagHasPrice)
          {
            handler->start_pair("Price");
            handler->number_value(storePrice);
          }
        if (flagHasPhone)
          {
            handler->start_pair("Phone");
            handler->start_array();
            for (size_t num1 = 0; num1 < storePhone.size(); ++num1)
              {
                storePhone[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasLinks)
          {
            handler->start_pair("Links");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeLinks.size(); ++num2)
              {
                storeLinks[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        assert(flagHasYelpURL);
        handler->start_pair("YelpURL");
        handler->string_value(storeYelpURL);
        if (flagHasEmail)
          {
            handler->start_pair("Email");
            handler->string_value(storeEmail);
          }
        if (flagHasPhotos)
          {
            handler->start_pair("Photos");
            handler->start_array();
            for (size_t num3 = 0; num3 < storePhotos.size(); ++num3)
              {
                storePhotos[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasIsRestaurant)
          {
            handler->start_pair("IsRestaurant");
            handler->boolean_value(storeIsRestaurant);
          }
        if (flagHasPermanentlyClosed)
          {
            handler->start_pair("PermanentlyClosed");
            handler->boolean_value(storePermanentlyClosed);
          }
        if (flagHasIsClaimed)
          {
            handler->start_pair("IsClaimed");
            handler->boolean_value(storeIsClaimed);
          }
        if (flagHasCategories)
          {
            handler->start_pair("Categories");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeCategories.size(); ++num4)
              {
                storeCategories[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasLocation)
          {
            handler->start_pair("Location");
            storeLocation->write_as_json(handler);
          }
        if (flagHasDistanceFromReference)
          {
            handler->start_pair("DistanceFromReference");
            storeDistanceFromReference->write_as_json(handler);
          }
        if (flagHasDistanceFromUser)
          {
            handler->start_pair("DistanceFromUser");
            storeDistanceFromUser->write_as_json(handler);
          }
        if (flagHasBearingFromUser)
          {
            handler->start_pair("BearingFromUser");
            if (textStoreBearingFromUser != "")
                handler->number_value(textStoreBearingFromUser.c_str());
            else if (((double)(long int)storeBearingFromUser) == storeBearingFromUser)
                handler->number_value((long int)storeBearingFromUser);
            else
                handler->number_value(storeBearingFromUser);
          }
        if (flagHasReviews)
          {
            handler->start_pair("Reviews");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeReviews.size(); ++num5)
              {
                storeReviews[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasHours)
          {
            handler->start_pair("Hours");
            storeHours->write_as_json(handler);
          }
        if (flagHasHoursToday)
          {
            handler->start_pair("HoursToday");
            handler->start_array();
            for (size_t num6 = 0; num6 < storeHoursToday.size(); ++num6)
              {
                storeHoursToday[num6]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOpenNow)
          {
            handler->start_pair("OpenNow");
            handler->boolean_value(storeOpenNow);
          }
        if (flagHasMinutesToOpen)
          {
            handler->start_pair("MinutesToOpen");
            handler->number_value(storeMinutesToOpen.get_o_integer());
          }
        if (flagHasMinutesToClose)
          {
            handler->start_pair("MinutesToClose");
            handler->number_value(storeMinutesToClose.get_o_integer());
          }
        if (flagHasOpen24Hours)
          {
            handler->start_pair("Open24Hours");
            handler->boolean_value(storeOpen24Hours);
          }
        if (flagHasAttributes)
          {
            handler->start_pair("Attributes");
            storeAttributes->write_as_json(handler);
          }
        if (flagHasAttributesForDisplay)
          {
            handler->start_pair("AttributesForDisplay");
            handler->start_array();
            for (size_t num7 = 0; num7 < storeAttributesForDisplay.size(); ++num7)
              {
                storeAttributesForDisplay[num7]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasID()))
          {
            return "When parsing the object for %what%, the \"ID\" field was missing.";
          }
        if (!(hasRating()))
          {
            return "When parsing the object for %what%, the \"Rating\" field was missing.";
          }
        if (!(hasReviewCount()))
          {
            return "When parsing the object for %what%, the \"ReviewCount\" field was missing.";
          }
        if (!(hasYelpURL()))
          {
            return "When parsing the object for %what%, the \"YelpURL\" field was missing.";
          }
        return NULL;
      }

    static LocalResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocalResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocalResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalResultJSON>, LocalResultJSON *, bool> generator("Type LocalResult", ignore_extras);
            parse_json_value(text, "Text for LocalResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocalResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocalResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocalResultJSON>, LocalResultJSON *, bool> generator("Type LocalResult", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAlias;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRating;
        static char lowerBoundReviewCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundReviewCount>, OInteger, o_integer > fieldGeneratorReviewCount;
        JSONHoldingGenerator<JSONIntegerRangeGenerator<uint8_t, 0, 5>, uint8_t, uint8_t > fieldGeneratorPrice;
        JSONHoldingArrayGenerator<TypePhoneJSON::Generator, RCHandle<TypePhoneJSON>, TypePhoneJSON *, bool > fieldGeneratorPhone;
        JSONHoldingArrayGenerator<TypeLinksJSON::Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool > fieldGeneratorLinks;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorYelpURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorEmail;
        JSONHoldingArrayGenerator<TypePhotosJSON::Generator, RCHandle<TypePhotosJSON>, TypePhotosJSON *, bool > fieldGeneratorPhotos;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRestaurant;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPermanentlyClosed;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsClaimed;
        JSONHoldingArrayGenerator<TypeCategoriesJSON::Generator, RCHandle<TypeCategoriesJSON>, TypeCategoriesJSON *, bool > fieldGeneratorCategories;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorLocation;
        JSONHoldingGenerator<TypeDistanceFromReferenceJSON::Generator, RCHandle<TypeDistanceFromReferenceJSON>, TypeDistanceFromReferenceJSON *, bool > fieldGeneratorDistanceFromReference;
        JSONHoldingGenerator<TypeDistanceFromUserJSON::Generator, RCHandle<TypeDistanceFromUserJSON>, TypeDistanceFromUserJSON *, bool > fieldGeneratorDistanceFromUser;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBearingFromUser;
        JSONHoldingArrayGenerator<TypeReviewsJSON::Generator, RCHandle<TypeReviewsJSON>, TypeReviewsJSON *, bool > fieldGeneratorReviews;
        JSONHoldingGenerator<TypeHoursJSON::Generator, RCHandle<TypeHoursJSON>, TypeHoursJSON *, bool > fieldGeneratorHours;
        JSONHoldingArrayGenerator<LocalResultBusinessHoursJSON::Generator, RCHandle<LocalResultBusinessHoursJSON>, LocalResultBusinessHoursJSON *, bool > fieldGeneratorHoursToday;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenNow;
        static char lowerBoundMinutesToOpen[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMinutesToOpen>, OInteger, o_integer > fieldGeneratorMinutesToOpen;
        static char lowerBoundMinutesToClose[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundMinutesToClose>, OInteger, o_integer > fieldGeneratorMinutesToClose;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpen24Hours;
        JSONHoldingGenerator<TypeAttributesJSON::Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool > fieldGeneratorAttributes;
        JSONHoldingArrayGenerator<TypeAttributesForDisplayJSON::Generator, RCHandle<TypeAttributesForDisplayJSON>, TypeAttributesForDisplayJSON *, bool > fieldGeneratorAttributesForDisplay;
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
            LocalResultJSON *result = new LocalResultJSON();
            assert(result != NULL);
            RCHandle<LocalResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocalResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(LocalResultJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorAlias.have_value)
              {
                result->setAlias(fieldGeneratorAlias.value);
                fieldGeneratorAlias.have_value = false;
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
            if (fieldGeneratorRating.have_value)
              {
                result->setRatingText(fieldGeneratorRating.value);
                fieldGeneratorRating.have_value = false;
              }
            else if (!(result->hasRating()))
              {
                error("When parsing the object for %what%, the \"Rating\" field was missing.");
              }
            if (fieldGeneratorReviewCount.have_value)
              {
                result->setReviewCount(fieldGeneratorReviewCount.value);
                fieldGeneratorReviewCount.have_value = false;
              }
            else if (!(result->hasReviewCount()))
              {
                error("When parsing the object for %what%, the \"ReviewCount\" field was missing.");
              }
            if (fieldGeneratorPrice.have_value)
              {
                result->setPrice(fieldGeneratorPrice.value);
                fieldGeneratorPrice.have_value = false;
              }
            if (fieldGeneratorPhone.have_value)
              {
                result->initPhone();
                size_t count = fieldGeneratorPhone.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPhone(fieldGeneratorPhone.value[num].referenced());
                  }
                fieldGeneratorPhone.value.clear();
                fieldGeneratorPhone.have_value = false;
              }
            if (fieldGeneratorLinks.have_value)
              {
                result->initLinks();
                size_t count = fieldGeneratorLinks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLinks(fieldGeneratorLinks.value[num].referenced());
                  }
                fieldGeneratorLinks.value.clear();
                fieldGeneratorLinks.have_value = false;
              }
            if (fieldGeneratorYelpURL.have_value)
              {
                result->setYelpURL(fieldGeneratorYelpURL.value);
                fieldGeneratorYelpURL.have_value = false;
              }
            else if (!(result->hasYelpURL()))
              {
                error("When parsing the object for %what%, the \"YelpURL\" field was missing.");
              }
            if (fieldGeneratorEmail.have_value)
              {
                result->setEmail(fieldGeneratorEmail.value);
                fieldGeneratorEmail.have_value = false;
              }
            if (fieldGeneratorPhotos.have_value)
              {
                result->initPhotos();
                size_t count = fieldGeneratorPhotos.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendPhotos(fieldGeneratorPhotos.value[num].referenced());
                  }
                fieldGeneratorPhotos.value.clear();
                fieldGeneratorPhotos.have_value = false;
              }
            if (fieldGeneratorIsRestaurant.have_value)
              {
                result->setIsRestaurant(fieldGeneratorIsRestaurant.value);
                fieldGeneratorIsRestaurant.have_value = false;
              }
            if (fieldGeneratorPermanentlyClosed.have_value)
              {
                result->setPermanentlyClosed(fieldGeneratorPermanentlyClosed.value);
                fieldGeneratorPermanentlyClosed.have_value = false;
              }
            if (fieldGeneratorIsClaimed.have_value)
              {
                result->setIsClaimed(fieldGeneratorIsClaimed.value);
                fieldGeneratorIsClaimed.have_value = false;
              }
            if (fieldGeneratorCategories.have_value)
              {
                result->initCategories();
                size_t count = fieldGeneratorCategories.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCategories(fieldGeneratorCategories.value[num].referenced());
                  }
                fieldGeneratorCategories.value.clear();
                fieldGeneratorCategories.have_value = false;
              }
            if (fieldGeneratorLocation.have_value)
              {
                result->setLocation(fieldGeneratorLocation.value.referenced());
                fieldGeneratorLocation.have_value = false;
              }
            if (fieldGeneratorDistanceFromReference.have_value)
              {
                result->setDistanceFromReference(fieldGeneratorDistanceFromReference.value.referenced());
                fieldGeneratorDistanceFromReference.have_value = false;
              }
            if (fieldGeneratorDistanceFromUser.have_value)
              {
                result->setDistanceFromUser(fieldGeneratorDistanceFromUser.value.referenced());
                fieldGeneratorDistanceFromUser.have_value = false;
              }
            if (fieldGeneratorBearingFromUser.have_value)
              {
                result->setBearingFromUserText(fieldGeneratorBearingFromUser.value);
                fieldGeneratorBearingFromUser.have_value = false;
              }
            if (fieldGeneratorReviews.have_value)
              {
                result->initReviews();
                size_t count = fieldGeneratorReviews.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendReviews(fieldGeneratorReviews.value[num].referenced());
                  }
                fieldGeneratorReviews.value.clear();
                fieldGeneratorReviews.have_value = false;
              }
            if (fieldGeneratorHours.have_value)
              {
                result->setHours(fieldGeneratorHours.value.referenced());
                fieldGeneratorHours.have_value = false;
              }
            if (fieldGeneratorHoursToday.have_value)
              {
                result->initHoursToday();
                size_t count = fieldGeneratorHoursToday.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHoursToday(fieldGeneratorHoursToday.value[num].referenced());
                  }
                fieldGeneratorHoursToday.value.clear();
                fieldGeneratorHoursToday.have_value = false;
              }
            if (fieldGeneratorOpenNow.have_value)
              {
                result->setOpenNow(fieldGeneratorOpenNow.value);
                fieldGeneratorOpenNow.have_value = false;
              }
            if (fieldGeneratorMinutesToOpen.have_value)
              {
                result->setMinutesToOpen(fieldGeneratorMinutesToOpen.value);
                fieldGeneratorMinutesToOpen.have_value = false;
              }
            if (fieldGeneratorMinutesToClose.have_value)
              {
                result->setMinutesToClose(fieldGeneratorMinutesToClose.value);
                fieldGeneratorMinutesToClose.have_value = false;
              }
            if (fieldGeneratorOpen24Hours.have_value)
              {
                result->setOpen24Hours(fieldGeneratorOpen24Hours.value);
                fieldGeneratorOpen24Hours.have_value = false;
              }
            if (fieldGeneratorAttributes.have_value)
              {
                result->setAttributes(fieldGeneratorAttributes.value.referenced());
                fieldGeneratorAttributes.have_value = false;
              }
            if (fieldGeneratorAttributesForDisplay.have_value)
              {
                result->initAttributesForDisplay();
                size_t count = fieldGeneratorAttributesForDisplay.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendAttributesForDisplay(fieldGeneratorAttributesForDisplay.value[num].referenced());
                  }
                fieldGeneratorAttributesForDisplay.value.clear();
                fieldGeneratorAttributesForDisplay.have_value = false;
              }
          }
        virtual void handle_result(LocalResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "ias") == 0)
                                return &fieldGeneratorAlias;
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "tributes", 8) == 0)
                              {
                                switch ((unsigned char)(field_name[10]))
                                  {
                                    case 0:
                                        return &fieldGeneratorAttributes;
                                    case 'F':
                                        if (strcmp(&(field_name[11]), "orDisplay") == 0)
                                            return &fieldGeneratorAttributesForDisplay;
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
                case 'B':
                    if (strcmp(&(field_name[1]), "earingFromUser") == 0)
                        return &fieldGeneratorBearingFromUser;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ategories") == 0)
                        return &fieldGeneratorCategories;
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "istanceFrom", 11) == 0)
                      {
                        switch ((unsigned char)(field_name[12]))
                          {
                            case 'R':
                                if (strcmp(&(field_name[13]), "eference") == 0)
                                    return &fieldGeneratorDistanceFromReference;
                                break;
                            case 'U':
                                if (strcmp(&(field_name[13]), "ser") == 0)
                                    return &fieldGeneratorDistanceFromUser;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "mail") == 0)
                        return &fieldGeneratorEmail;
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "ours", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 0:
                                return &fieldGeneratorHours;
                            case 'T':
                                if (strcmp(&(field_name[6]), "oday") == 0)
                                    return &fieldGeneratorHoursToday;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'D':
                            if (field_name[2] == 0)
                                return &fieldGeneratorID;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'C':
                                    if (strcmp(&(field_name[3]), "laimed") == 0)
                                        return &fieldGeneratorIsClaimed;
                                    break;
                                case 'R':
                                    if (strcmp(&(field_name[3]), "estaurant") == 0)
                                        return &fieldGeneratorIsRestaurant;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "nks") == 0)
                                return &fieldGeneratorLinks;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "cation") == 0)
                                return &fieldGeneratorLocation;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "inutesTo", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'C':
                                if (strcmp(&(field_name[10]), "lose") == 0)
                                    return &fieldGeneratorMinutesToClose;
                                break;
                            case 'O':
                                if (strcmp(&(field_name[10]), "pen") == 0)
                                    return &fieldGeneratorMinutesToOpen;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'O':
                    if (strncmp(&(field_name[1]), "pen", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case '2':
                                if (strcmp(&(field_name[5]), "4Hours") == 0)
                                    return &fieldGeneratorOpen24Hours;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[5]), "ow") == 0)
                                    return &fieldGeneratorOpenNow;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "rmanentlyClosed") == 0)
                                return &fieldGeneratorPermanentlyClosed;
                            break;
                        case 'h':
                            if (strncmp(&(field_name[2]), "o", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'n':
                                        if (strcmp(&(field_name[4]), "e") == 0)
                                            return &fieldGeneratorPhone;
                                        break;
                                    case 't':
                                        if (strcmp(&(field_name[4]), "os") == 0)
                                            return &fieldGeneratorPhotos;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ice") == 0)
                                return &fieldGeneratorPrice;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ting") == 0)
                                return &fieldGeneratorRating;
                            break;
                        case 'e':
                            if (strncmp(&(field_name[2]), "view", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[7]), "ount") == 0)
                                            return &fieldGeneratorReviewCount;
                                        break;
                                    case 's':
                                        if (field_name[7] == 0)
                                            return &fieldGeneratorReviews;
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
                case 'Y':
                    if (strcmp(&(field_name[1]), "elpURL") == 0)
                        return &fieldGeneratorYelpURL;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the LocalResult class"), fieldGeneratorAlias("field \"Alias\" of the LocalResult class"), fieldGeneratorID("field \"ID\" of the LocalResult class"), fieldGeneratorRating("field \"Rating\" of the LocalResult class"), fieldGeneratorReviewCount("field \"ReviewCount\" of the LocalResult class"), fieldGeneratorPrice("field \"Price\" of the LocalResult class"), fieldGeneratorPhone("field \"Phone\" of the LocalResult class", ignore_extras), fieldGeneratorLinks("field \"Links\" of the LocalResult class", ignore_extras), fieldGeneratorYelpURL("field \"YelpURL\" of the LocalResult class"), fieldGeneratorEmail("field \"Email\" of the LocalResult class"), fieldGeneratorPhotos("field \"Photos\" of the LocalResult class", ignore_extras), fieldGeneratorIsRestaurant("field \"IsRestaurant\" of the LocalResult class"), fieldGeneratorPermanentlyClosed("field \"PermanentlyClosed\" of the LocalResult class"), fieldGeneratorIsClaimed("field \"IsClaimed\" of the LocalResult class"), fieldGeneratorCategories("field \"Categories\" of the LocalResult class", ignore_extras), fieldGeneratorLocation("field \"Location\" of the LocalResult class", ignore_extras), fieldGeneratorDistanceFromReference("field \"DistanceFromReference\" of the LocalResult class", ignore_extras), fieldGeneratorDistanceFromUser("field \"DistanceFromUser\" of the LocalResult class", ignore_extras), fieldGeneratorBearingFromUser("field \"BearingFromUser\" of the LocalResult class"), fieldGeneratorReviews("field \"Reviews\" of the LocalResult class", ignore_extras), fieldGeneratorHours("field \"Hours\" of the LocalResult class", ignore_extras), fieldGeneratorHoursToday("field \"HoursToday\" of the LocalResult class", ignore_extras), fieldGeneratorOpenNow("field \"OpenNow\" of the LocalResult class"), fieldGeneratorMinutesToOpen("field \"MinutesToOpen\" of the LocalResult class"), fieldGeneratorMinutesToClose("field \"MinutesToClose\" of the LocalResult class"), fieldGeneratorOpen24Hours("field \"Open24Hours\" of the LocalResult class"), fieldGeneratorAttributes("field \"Attributes\" of the LocalResult class", ignore_extras), fieldGeneratorAttributesForDisplay("field \"AttributesForDisplay\" of the LocalResult class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the LocalResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorAlias.reset();
            fieldGeneratorID.reset();
            fieldGeneratorRating.reset();
            fieldGeneratorReviewCount.reset();
            fieldGeneratorPrice.reset();
            fieldGeneratorPhone.reset();
            fieldGeneratorLinks.reset();
            fieldGeneratorYelpURL.reset();
            fieldGeneratorEmail.reset();
            fieldGeneratorPhotos.reset();
            fieldGeneratorIsRestaurant.reset();
            fieldGeneratorPermanentlyClosed.reset();
            fieldGeneratorIsClaimed.reset();
            fieldGeneratorCategories.reset();
            fieldGeneratorLocation.reset();
            fieldGeneratorDistanceFromReference.reset();
            fieldGeneratorDistanceFromUser.reset();
            fieldGeneratorBearingFromUser.reset();
            fieldGeneratorReviews.reset();
            fieldGeneratorHours.reset();
            fieldGeneratorHoursToday.reset();
            fieldGeneratorOpenNow.reset();
            fieldGeneratorMinutesToOpen.reset();
            fieldGeneratorMinutesToClose.reset();
            fieldGeneratorOpen24Hours.reset();
            fieldGeneratorAttributes.reset();
            fieldGeneratorAttributesForDisplay.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCALRESULTJSON_H */
