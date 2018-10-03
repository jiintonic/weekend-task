/* file "ShowContactNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWCONTACTNUGGETJSON_H
#define SHOWCONTACTNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
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


class ShowContactNuggetJSON : public InformationNuggetJSON
  {
  public:
    class TypeRequestedFieldsJSON : public ReferenceCounted
      {
      public:
        enum TypeField
          {
            Field_Phone,
            Field_Email,
            Field_Street
          };

        static TypeField  stringToField(const char *chars);
        static const char * stringFromField(TypeField the_enum);

      private:
        bool flagHasField;
        TypeField storeField;
        bool flagHasCategory;
        std::string storeCategory;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeRequestedFieldsJSON(const TypeRequestedFieldsJSON &);
        TypeRequestedFieldsJSON & operator=(const TypeRequestedFieldsJSON &other);

        void  fromJSONField(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCategory(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeRequestedFieldsJSON(void);
        virtual ~TypeRequestedFieldsJSON(void);
        bool  hasField(void) const;
        TypeField  getField(void);
        const TypeField  getField(void) const;
        const char * getFieldAsChars(void) const;
        std::string  getFieldAsString(void) const;
        bool  hasCategory(void) const;
        std::string  getCategory(void);
        const std::string  getCategory(void) const;

        virtual size_t extraTypeRequestedFieldsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeRequestedFieldsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeRequestedFieldsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeRequestedFieldsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeRequestedFieldsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeRequestedFieldsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setField(TypeField new_value)
          {
            flagHasField = true;
            storeField = new_value;
          }
        void setField(const char *chars)
          {
            setField(stringToField(chars));
          }
        void setField(std::string the_string)
          {
            setField(stringToField(the_string.c_str()));
          }
        void unsetField(void)
          {
            flagHasField = false;
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

        virtual void extraTypeRequestedFieldsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeRequestedFieldsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeRequestedFieldsLookup(key);
            if (old_field == NULL)
              {
                extraTypeRequestedFieldsAppendPair(key, new_component);
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
            assert(flagHasField);
            handler->start_pair("Field");
            switch (storeField)
              {
                case Field_Phone:
                    handler->string_value("Phone");
                    break;
                case Field_Email:
                    handler->string_value("Email");
                    break;
                case Field_Street:
                    handler->string_value("Street");
                    break;
                default:
                    assert(false);
              }
            if (flagHasCategory)
              {
                handler->start_pair("Category");
                handler->string_value(storeCategory);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasField()))
              {
                return "When parsing the object for %what%, the \"Field\" field was missing.";
              }
            return NULL;
          }

        static TypeRequestedFieldsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeRequestedFieldsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeRequestedFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRequestedFieldsJSON>, TypeRequestedFieldsJSON *, bool> generator("Type TypeRequestedFields", ignore_extras);
                parse_json_value(text, "Text for TypeRequestedFieldsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeRequestedFieldsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeRequestedFieldsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeRequestedFieldsJSON>, TypeRequestedFieldsJSON *, bool> generator("Type TypeRequestedFields", ignore_extras);
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
        class FieldGeneratorField : public JSONStringGenerator
              {
              protected:
                FieldGeneratorField(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorField(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToField(result));
                  }
                virtual void handle_result(TypeField result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorField, TypeField, TypeField > fieldGeneratorField;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCategory;
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
                TypeRequestedFieldsJSON *result = new TypeRequestedFieldsJSON();
                assert(result != NULL);
                RCHandle<TypeRequestedFieldsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeRequestedFieldsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeRequestedFieldsJSON *result)
              {
                if (fieldGeneratorField.have_value)
                  {
                    result->setField(fieldGeneratorField.value);
                    fieldGeneratorField.have_value = false;
                  }
                else if (!(result->hasField()))
                  {
                    error("When parsing the object for %what%, the \"Field\" field was missing.");
                  }
                if (fieldGeneratorCategory.have_value)
                  {
                    result->setCategory(fieldGeneratorCategory.value);
                    fieldGeneratorCategory.have_value = false;
                  }
              }
            virtual void handle_result(TypeRequestedFieldsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ategory") == 0)
                            return &fieldGeneratorCategory;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "ield") == 0)
                            return &fieldGeneratorField;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorField("field \"Field\" of the TypeRequestedFields class"), fieldGeneratorCategory("field \"Category\" of the TypeRequestedFields class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeRequestedFields class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorField.reset();
                fieldGeneratorCategory.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasContacts;
    std::vector< OneContactJSON * > storeContacts;
    bool flagHasRequestedFields;
    std::vector< TypeRequestedFieldsJSON * > storeRequestedFields;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowContactNuggetJSON(const ShowContactNuggetJSON &);
    ShowContactNuggetJSON & operator=(const ShowContactNuggetJSON &other);

    JSONValue * extraContactsToJSON(void) const;
    JSONValue * extraRequestedFieldsToJSON(void) const;

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequestedFields(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowContactNuggetJSON(void);
    virtual ~ShowContactNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasContacts(void) const;
    size_t  countOfContacts(void) const;
    OneContactJSON *  elementOfContacts(size_t element_num);
    const OneContactJSON *  elementOfContacts(size_t element_num) const;
    std::vector< OneContactJSON * >  getContacts(void);
    const std::vector< OneContactJSON * >  getContacts(void) const;
    bool  hasRequestedFields(void) const;
    size_t  countOfRequestedFields(void) const;
    TypeRequestedFieldsJSON *  elementOfRequestedFields(size_t element_num);
    const TypeRequestedFieldsJSON *  elementOfRequestedFields(size_t element_num) const;
    std::vector< TypeRequestedFieldsJSON * >  getRequestedFields(void);
    const std::vector< TypeRequestedFieldsJSON * >  getRequestedFields(void) const;

    virtual size_t extraShowContactNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowContactNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowContactNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowContactNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowContactNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowContactNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasContacts)
            ++result;
        if (flagHasRequestedFields)
            ++result;
        result += extraShowContactNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return "Contacts";
            --remainder;
          }
        if (flagHasRequestedFields)
          {
            if (remainder == 0)
                return "RequestedFields";
            --remainder;
          }
        return extraShowContactNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        if (flagHasRequestedFields)
          {
            if (remainder == 0)
                return extraRequestedFieldsToJSON();
            --remainder;
          }
        return extraShowContactNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        if (flagHasRequestedFields)
          {
            if (remainder == 0)
                return extraRequestedFieldsToJSON();
            --remainder;
          }
        return extraShowContactNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedFields") == 0)
                    return (flagHasRequestedFields ? extraRequestedFieldsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowContactNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'R':
                if (strcmp(&(field_name[1]), "equestedFields") == 0)
                    return (flagHasRequestedFields ? extraRequestedFieldsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowContactNuggetLookup(field_name);
      }

    void initContacts(void)
      {
        if (flagHasContacts)
          {
            for (size_t num3 = 0; num3 < storeContacts.size(); ++num3)
              {
                storeContacts[num3]->remove_reference();
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
            for (size_t num4 = 0; num4 < storeContacts.size(); ++num4)
              {
                storeContacts[num4]->remove_reference();
              }
          }
        flagHasContacts = false;
        storeContacts.clear();
      }
    void initRequestedFields(void)
      {
        if (flagHasRequestedFields)
          {
            for (size_t num5 = 0; num5 < storeRequestedFields.size(); ++num5)
              {
                storeRequestedFields[num5]->remove_reference();
              }
          }
        flagHasRequestedFields = true;
        storeRequestedFields.clear();
      }
    void appendRequestedFields(TypeRequestedFieldsJSON * to_append)
      {
        if (!flagHasRequestedFields)
          {
            flagHasRequestedFields = true;
            storeRequestedFields.clear();
          }
        assert(flagHasRequestedFields);
        to_append->add_reference();
        storeRequestedFields.push_back(to_append);
      }
    void unsetRequestedFields(void)
      {
        if (flagHasRequestedFields)
          {
            for (size_t num6 = 0; num6 < storeRequestedFields.size(); ++num6)
              {
                storeRequestedFields[num6]->remove_reference();
              }
          }
        flagHasRequestedFields = false;
        storeRequestedFields.clear();
      }

    virtual void extraShowContactNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowContactNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowContactNuggetLookup(key);
        if (old_field == NULL)
          {
            extraShowContactNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ontacts") == 0)
                    {
                    fromJSONContacts(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedFields") == 0)
                    {
                    fromJSONRequestedFields(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowContactNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ontacts") == 0)
                    {
                    fromJSONContacts(new_component, false);
                    return;
                    }
                break;
            case 'R':
                if (strcmp(&(key[1]), "equestedFields") == 0)
                    {
                    fromJSONRequestedFields(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowContactNuggetSetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasContacts);
        handler->start_pair("Contacts");
        assert(storeContacts.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
          {
            storeContacts[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasRequestedFields)
          {
            handler->start_pair("RequestedFields");
            assert(storeRequestedFields.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeRequestedFields.size(); ++num2)
              {
                storeRequestedFields[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasContacts()))
          {
            return "When parsing the object for %what%, the \"Contacts\" field was missing.";
          }
        return NULL;
      }

    static ShowContactNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowContactNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowContactNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowContactNuggetJSON>, ShowContactNuggetJSON *, bool> generator("Type ShowContactNugget", ignore_extras);
            parse_json_value(text, "Text for ShowContactNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowContactNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowContactNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowContactNuggetJSON>, ShowContactNuggetJSON *, bool> generator("Type ShowContactNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorContacts;
        JSONHoldingArrayGenerator<TypeRequestedFieldsJSON::Generator, RCHandle<TypeRequestedFieldsJSON>, TypeRequestedFieldsJSON *, bool > fieldGeneratorRequestedFields;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "ShowContact") == 0))
                throw("The key field has a value other than `ShowContact'.");
            ShowContactNuggetJSON *result = new ShowContactNuggetJSON();
            assert(result != NULL);
            RCHandle<ShowContactNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowContactNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((ShowContactNuggetJSON *)new_result);
          }
        void finish(ShowContactNuggetJSON *result)
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
            if (fieldGeneratorRequestedFields.have_value)
              {
                result->initRequestedFields();
                size_t count = fieldGeneratorRequestedFields.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRequestedFields(fieldGeneratorRequestedFields.value[num].referenced());
                  }
                fieldGeneratorRequestedFields.value.clear();
                fieldGeneratorRequestedFields.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowContactNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontacts") == 0)
                        return &fieldGeneratorContacts;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestedFields") == 0)
                        return &fieldGeneratorRequestedFields;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorContacts("field \"Contacts\" of the ShowContactNugget class", ignore_extras), fieldGeneratorRequestedFields("field \"RequestedFields\" of the ShowContactNugget class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowContactNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContacts.reset();
            fieldGeneratorRequestedFields.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWCONTACTNUGGETJSON_H */
