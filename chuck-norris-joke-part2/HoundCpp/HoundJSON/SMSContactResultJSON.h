/* file "SMSContactResultJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSCONTACTRESULTJSON_H
#define SMSCONTACTRESULTJSON_H

#pragma interface

#include "ContactResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "SMSContactJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSContactResultJSON : public ContactResultJSON
  {
  public:
    enum TypeFieldType
      {
        FieldType_To,
        FieldType_Unknown
      };

    static TypeFieldType  stringToFieldType(const char *chars);
    static const char * stringFromFieldType(TypeFieldType the_enum);

  private:
    bool flagHasFieldType;
    TypeFieldType storeFieldType;
    bool flagHasContacts;
    std::vector< SMSContactJSON * > storeContacts;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSContactResultJSON(const SMSContactResultJSON &);
    SMSContactResultJSON & operator=(const SMSContactResultJSON &other);

    JSONValue * extraFieldTypeToJSON(void) const;
    JSONValue * extraContactsToJSON(void) const;

    void  fromJSONFieldType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSContactResultJSON(void);
    virtual ~SMSContactResultJSON(void);
    bool  hasFieldType(void) const;
    TypeFieldType  getFieldType(void);
    const TypeFieldType  getFieldType(void) const;
    const char * getFieldTypeAsChars(void) const;
    std::string  getFieldTypeAsString(void) const;
    bool  hasContacts(void) const;
    size_t  countOfContacts(void) const;
    SMSContactJSON *  elementOfContacts(size_t element_num);
    const SMSContactJSON *  elementOfContacts(size_t element_num) const;
    std::vector< SMSContactJSON * >  getContacts(void);
    const std::vector< SMSContactJSON * >  getContacts(void) const;

    virtual size_t extraSMSContactResultComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSContactResultComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSContactResultComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSContactResultComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSContactResultLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSContactResultLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraContactResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasFieldType)
            ++result;
        if (flagHasContacts)
            ++result;
        result += extraSMSContactResultComponentCount();
        return result;
      }
    const char *extraContactResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasFieldType)
          {
            if (remainder == 0)
                return "FieldType";
            --remainder;
          }
        if (flagHasContacts)
          {
            if (remainder == 0)
                return "Contacts";
            --remainder;
          }
        return extraSMSContactResultComponentKey(remainder);
      }
    JSONValue *extraContactResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasFieldType)
          {
            if (remainder == 0)
                return extraFieldTypeToJSON();
            --remainder;
          }
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        return extraSMSContactResultComponentValue(remainder);
      }
    const JSONValue *extraContactResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasFieldType)
          {
            if (remainder == 0)
                return extraFieldTypeToJSON();
            --remainder;
          }
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        return extraSMSContactResultComponentValue(remainder);
      }
    JSONValue *extraContactResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ieldType") == 0)
                    return (flagHasFieldType ? extraFieldTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSMSContactResultLookup(field_name);
      }
    const JSONValue *extraContactResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ieldType") == 0)
                    return (flagHasFieldType ? extraFieldTypeToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraSMSContactResultLookup(field_name);
      }

    void setFieldType(TypeFieldType new_value)
      {
        flagHasFieldType = true;
        storeFieldType = new_value;
      }
    void setFieldType(const char *chars)
      {
        setFieldType(stringToFieldType(chars));
      }
    void setFieldType(std::string the_string)
      {
        setFieldType(stringToFieldType(the_string.c_str()));
      }
    void unsetFieldType(void)
      {
        flagHasFieldType = false;
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
    void appendContacts(SMSContactJSON * to_append)
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

    virtual void extraSMSContactResultAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSContactResultSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSContactResultLookup(key);
        if (old_field == NULL)
          {
            extraSMSContactResultAppendPair(key, new_component);
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
    void extraContactResultAppendPair(const char *key, JSONValue *new_component)
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
            case 'F':
                if (strcmp(&(key[1]), "ieldType") == 0)
                    {
                    fromJSONFieldType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSMSContactResultAppendPair(key, new_component);
      }
    void extraContactResultSetField(const char *key, JSONValue *new_component)
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
            case 'F':
                if (strcmp(&(key[1]), "ieldType") == 0)
                    {
                    fromJSONFieldType(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraSMSContactResultSetField(key, new_component);
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
        ContactResultJSON::write_fields_as_json(handler);
        if (flagHasFieldType)
          {
            handler->start_pair("FieldType");
            switch (storeFieldType)
              {
                case FieldType_To:
                    handler->string_value("To");
                    break;
                case FieldType_Unknown:
                    handler->string_value("Unknown");
                    break;
                default:
                    assert(false);
              }
          }
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
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSContactResultJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSContactResultJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSContactResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool> generator("Type SMSContactResult", ignore_extras);
            parse_json_value(text, "Text for SMSContactResultJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSContactResultJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSContactResultJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool> generator("Type SMSContactResult", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public ContactResultJSON::Generator
      {
      private:
    class FieldGeneratorFieldType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFieldType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFieldType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFieldType(result));
              }
            virtual void handle_result(TypeFieldType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFieldType, TypeFieldType, TypeFieldType > fieldGeneratorFieldType;
        JSONHoldingArrayGenerator<SMSContactJSON::Generator, RCHandle<SMSContactJSON>, SMSContactJSON *, bool > fieldGeneratorContacts;
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
            SMSContactResultJSON *result = new SMSContactResultJSON();
            assert(result != NULL);
            RCHandle<SMSContactResultJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSContactResultAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(ContactResultJSON *new_result)
          {
            handle_result((SMSContactResultJSON *)new_result);
          }
        void finish(SMSContactResultJSON *result)
          {
            if (fieldGeneratorFieldType.have_value)
              {
                result->setFieldType(fieldGeneratorFieldType.value);
                fieldGeneratorFieldType.have_value = false;
              }
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
            ContactResultJSON::Generator::finish(result);
          }
        virtual void handle_result(SMSContactResultJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontacts") == 0)
                        return &fieldGeneratorContacts;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ieldType") == 0)
                        return &fieldGeneratorFieldType;
                    break;
                default:
                    break;
              }
            return ContactResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : ContactResultJSON::Generator(ignore_extras), fieldGeneratorFieldType("field \"FieldType\" of the SMSContactResult class"), fieldGeneratorContacts("field \"Contacts\" of the SMSContactResult class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSContactResult class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFieldType.reset();
            fieldGeneratorContacts.reset();
            ContactResultJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SMSContactResultJSON *from_ContactResultJSON_json(const ContactResultJSON * ancestor, bool ignore_extras = false)
      {
        assert(ancestor != NULL);
        SMSContactResultJSON * result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool> handler("Type SMSContactResult", ignore_extras);
            ancestor->write_as_json(&handler);
            result = handler.value.referenced();
            result->add_reference();
          }
        result->remove_reference_no_delete();
        return result;
      }
  };

#endif /* SMSCONTACTRESULTJSON_H */
