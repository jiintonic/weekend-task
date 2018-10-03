/* file "NoPhoneNumberCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NOPHONENUMBERCOMMANDJSON_H
#define NOPHONENUMBERCOMMANDJSON_H

#pragma interface

#include "PhoneCommandJSON.h"
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


class NoPhoneNumberCommandJSON : public PhoneCommandJSON
  {
  private:
    bool flagHasContacts;
    std::vector< OneContactJSON * > storeContacts;
    bool flagHasSpecifiedName;
    std::string storeSpecifiedName;
    bool flagHasFullName;
    std::string storeFullName;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NoPhoneNumberCommandJSON(const NoPhoneNumberCommandJSON &);
    NoPhoneNumberCommandJSON & operator=(const NoPhoneNumberCommandJSON &other);

    JSONValue * extraContactsToJSON(void) const;
    JSONValue * extraSpecifiedNameToJSON(void) const;
    JSONValue * extraFullNameToJSON(void) const;

    void  fromJSONContacts(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpecifiedName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFullName(JSONValue *json_value, bool ignore_extras = false);


  public:
    NoPhoneNumberCommandJSON(void);
    virtual ~NoPhoneNumberCommandJSON(void);
    const char * getPhoneCommandKind(void) const;
    bool  hasContacts(void) const;
    size_t  countOfContacts(void) const;
    OneContactJSON *  elementOfContacts(size_t element_num);
    const OneContactJSON *  elementOfContacts(size_t element_num) const;
    std::vector< OneContactJSON * >  getContacts(void);
    const std::vector< OneContactJSON * >  getContacts(void) const;
    bool  hasSpecifiedName(void) const;
    std::string  getSpecifiedName(void);
    const std::string  getSpecifiedName(void) const;
    bool  hasFullName(void) const;
    std::string  getFullName(void);
    const std::string  getFullName(void) const;

    virtual size_t extraNoPhoneNumberCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNoPhoneNumberCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNoPhoneNumberCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNoPhoneNumberCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNoPhoneNumberCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNoPhoneNumberCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPhoneCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasContacts)
            ++result;
        if (flagHasSpecifiedName)
            ++result;
        if (flagHasFullName)
            ++result;
        result += extraNoPhoneNumberCommandComponentCount();
        return result;
      }
    const char *extraPhoneCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return "Contacts";
            --remainder;
          }
        if (flagHasSpecifiedName)
          {
            if (remainder == 0)
                return "SpecifiedName";
            --remainder;
          }
        if (flagHasFullName)
          {
            if (remainder == 0)
                return "FullName";
            --remainder;
          }
        return extraNoPhoneNumberCommandComponentKey(remainder);
      }
    JSONValue *extraPhoneCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        if (flagHasSpecifiedName)
          {
            if (remainder == 0)
                return extraSpecifiedNameToJSON();
            --remainder;
          }
        if (flagHasFullName)
          {
            if (remainder == 0)
                return extraFullNameToJSON();
            --remainder;
          }
        return extraNoPhoneNumberCommandComponentValue(remainder);
      }
    const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasContacts)
          {
            if (remainder == 0)
                return extraContactsToJSON();
            --remainder;
          }
        if (flagHasSpecifiedName)
          {
            if (remainder == 0)
                return extraSpecifiedNameToJSON();
            --remainder;
          }
        if (flagHasFullName)
          {
            if (remainder == 0)
                return extraFullNameToJSON();
            --remainder;
          }
        return extraNoPhoneNumberCommandComponentValue(remainder);
      }
    JSONValue *extraPhoneCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ullName") == 0)
                    return (flagHasFullName ? extraFullNameToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pecifiedName") == 0)
                    return (flagHasSpecifiedName ? extraSpecifiedNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraNoPhoneNumberCommandLookup(field_name);
      }
    const JSONValue *extraPhoneCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ontacts") == 0)
                    return (flagHasContacts ? extraContactsToJSON() : NULL);
                break;
            case 'F':
                if (strcmp(&(field_name[1]), "ullName") == 0)
                    return (flagHasFullName ? extraFullNameToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "pecifiedName") == 0)
                    return (flagHasSpecifiedName ? extraSpecifiedNameToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraNoPhoneNumberCommandLookup(field_name);
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
    void setSpecifiedName(std::string new_value)
      {
        flagHasSpecifiedName = true;
        storeSpecifiedName = new_value;
      }
    void unsetSpecifiedName(void)
      {
        flagHasSpecifiedName = false;
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

    virtual void extraNoPhoneNumberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNoPhoneNumberCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNoPhoneNumberCommandLookup(key);
        if (old_field == NULL)
          {
            extraNoPhoneNumberCommandAppendPair(key, new_component);
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
    void extraPhoneCommandAppendPair(const char *key, JSONValue *new_component)
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
                if (strcmp(&(key[1]), "ullName") == 0)
                    {
                    fromJSONFullName(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pecifiedName") == 0)
                    {
                    fromJSONSpecifiedName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraNoPhoneNumberCommandAppendPair(key, new_component);
      }
    void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
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
                if (strcmp(&(key[1]), "ullName") == 0)
                    {
                    fromJSONFullName(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "pecifiedName") == 0)
                    {
                    fromJSONSpecifiedName(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraNoPhoneNumberCommandSetField(key, new_component);
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
        PhoneCommandJSON::write_fields_as_json(handler);
        assert(flagHasContacts);
        handler->start_pair("Contacts");
        assert(storeContacts.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeContacts.size(); ++num1)
          {
            storeContacts[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasSpecifiedName)
          {
            handler->start_pair("SpecifiedName");
            handler->string_value(storeSpecifiedName);
          }
        if (flagHasFullName)
          {
            handler->start_pair("FullName");
            handler->string_value(storeFullName);
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

    static NoPhoneNumberCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NoPhoneNumberCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NoPhoneNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NoPhoneNumberCommandJSON>, NoPhoneNumberCommandJSON *, bool> generator("Type NoPhoneNumberCommand", ignore_extras);
            parse_json_value(text, "Text for NoPhoneNumberCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NoPhoneNumberCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NoPhoneNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NoPhoneNumberCommandJSON>, NoPhoneNumberCommandJSON *, bool> generator("Type NoPhoneNumberCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public PhoneCommandJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<OneContactJSON::Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool > fieldGeneratorContacts;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpecifiedName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFullName;
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
            if (!(strcmp(getPhoneCommandJSONKey().c_str(), "NoPhoneNumber") == 0))
                throw("The key field has a value other than `NoPhoneNumber'.");
            NoPhoneNumberCommandJSON *result = new NoPhoneNumberCommandJSON();
            assert(result != NULL);
            RCHandle<NoPhoneNumberCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNoPhoneNumberCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PhoneCommandJSON *new_result)
          {
            handle_result((NoPhoneNumberCommandJSON *)new_result);
          }
        void finish(NoPhoneNumberCommandJSON *result)
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
            if (fieldGeneratorSpecifiedName.have_value)
              {
                result->setSpecifiedName(fieldGeneratorSpecifiedName.value);
                fieldGeneratorSpecifiedName.have_value = false;
              }
            if (fieldGeneratorFullName.have_value)
              {
                result->setFullName(fieldGeneratorFullName.value);
                fieldGeneratorFullName.have_value = false;
              }
            PhoneCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(NoPhoneNumberCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ontacts") == 0)
                        return &fieldGeneratorContacts;
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ullName") == 0)
                        return &fieldGeneratorFullName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pecifiedName") == 0)
                        return &fieldGeneratorSpecifiedName;
                    break;
                default:
                    break;
              }
            return PhoneCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PhoneCommandJSON::Generator(ignore_extras), fieldGeneratorContacts("field \"Contacts\" of the NoPhoneNumberCommand class", ignore_extras), fieldGeneratorSpecifiedName("field \"SpecifiedName\" of the NoPhoneNumberCommand class"), fieldGeneratorFullName("field \"FullName\" of the NoPhoneNumberCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NoPhoneNumberCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorContacts.reset();
            fieldGeneratorSpecifiedName.reset();
            fieldGeneratorFullName.reset();
            PhoneCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NOPHONENUMBERCOMMANDJSON_H */
