/* file "CallNumberCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CALLNUMBERCOMMANDJSON_H
#define CALLNUMBERCOMMANDJSON_H

#pragma interface

#include "PhoneCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "PhoneableEntityJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CallNumberCommandJSON : public PhoneCommandJSON
  {
  private:
    bool flagHasNumber;
    std::string storeNumber;
    bool flagHasEntity;
    PhoneableEntityJSON * storeEntity;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CallNumberCommandJSON(const CallNumberCommandJSON &);
    CallNumberCommandJSON & operator=(const CallNumberCommandJSON &other);

    JSONValue * extraNumberToJSON(void) const;
    JSONValue * extraEntityToJSON(void) const;

    void  fromJSONNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEntity(JSONValue *json_value, bool ignore_extras = false);


  public:
    CallNumberCommandJSON(void);
    virtual ~CallNumberCommandJSON(void);
    const char * getPhoneCommandKind(void) const;
    bool  hasNumber(void) const;
    std::string  getNumber(void);
    const std::string  getNumber(void) const;
    bool  hasEntity(void) const;
    PhoneableEntityJSON *  getEntity(void);
    const PhoneableEntityJSON *  getEntity(void) const;

    virtual size_t extraCallNumberCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCallNumberCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCallNumberCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCallNumberCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCallNumberCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCallNumberCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPhoneCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNumber)
            ++result;
        if (flagHasEntity)
            ++result;
        result += extraCallNumberCommandComponentCount();
        return result;
      }
    const char *extraPhoneCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return "Number";
            --remainder;
          }
        if (flagHasEntity)
          {
            if (remainder == 0)
                return "Entity";
            --remainder;
          }
        return extraCallNumberCommandComponentKey(remainder);
      }
    JSONValue *extraPhoneCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return extraNumberToJSON();
            --remainder;
          }
        if (flagHasEntity)
          {
            if (remainder == 0)
                return extraEntityToJSON();
            --remainder;
          }
        return extraCallNumberCommandComponentValue(remainder);
      }
    const JSONValue *extraPhoneCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNumber)
          {
            if (remainder == 0)
                return extraNumberToJSON();
            --remainder;
          }
        if (flagHasEntity)
          {
            if (remainder == 0)
                return extraEntityToJSON();
            --remainder;
          }
        return extraCallNumberCommandComponentValue(remainder);
      }
    JSONValue *extraPhoneCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ntity") == 0)
                    return (flagHasEntity ? extraEntityToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umber") == 0)
                    return (flagHasNumber ? extraNumberToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCallNumberCommandLookup(field_name);
      }
    const JSONValue *extraPhoneCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'E':
                if (strcmp(&(field_name[1]), "ntity") == 0)
                    return (flagHasEntity ? extraEntityToJSON() : NULL);
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "umber") == 0)
                    return (flagHasNumber ? extraNumberToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCallNumberCommandLookup(field_name);
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
    void setEntity(PhoneableEntityJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEntity)
          {
            storeEntity->remove_reference();
          }
        flagHasEntity = true;
        storeEntity = new_value;
      }
    void unsetEntity(void)
      {
        if (flagHasEntity)
          {
            storeEntity->remove_reference();
          }
        flagHasEntity = false;
      }

    virtual void extraCallNumberCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCallNumberCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCallNumberCommandLookup(key);
        if (old_field == NULL)
          {
            extraCallNumberCommandAppendPair(key, new_component);
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
            case 'E':
                if (strcmp(&(key[1]), "ntity") == 0)
                    {
                    fromJSONEntity(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umber") == 0)
                    {
                    fromJSONNumber(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCallNumberCommandAppendPair(key, new_component);
      }
    void extraPhoneCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'E':
                if (strcmp(&(key[1]), "ntity") == 0)
                    {
                    fromJSONEntity(new_component, false);
                    return;
                    }
                break;
            case 'N':
                if (strcmp(&(key[1]), "umber") == 0)
                    {
                    fromJSONNumber(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCallNumberCommandSetField(key, new_component);
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
        assert(flagHasNumber);
        handler->start_pair("Number");
        handler->string_value(storeNumber);
        if (flagHasEntity)
          {
            handler->start_pair("Entity");
            storeEntity->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNumber()))
          {
            return "When parsing the object for %what%, the \"Number\" field was missing.";
          }
        return NULL;
      }

    static CallNumberCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CallNumberCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CallNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CallNumberCommandJSON>, CallNumberCommandJSON *, bool> generator("Type CallNumberCommand", ignore_extras);
            parse_json_value(text, "Text for CallNumberCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CallNumberCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CallNumberCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CallNumberCommandJSON>, CallNumberCommandJSON *, bool> generator("Type CallNumberCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNumber;
        JSONHoldingGenerator<PhoneableEntityJSON::Generator, RCHandle<PhoneableEntityJSON>, PhoneableEntityJSON *, bool > fieldGeneratorEntity;
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
            if (!(strcmp(getPhoneCommandJSONKey().c_str(), "CallNumber") == 0))
                throw("The key field has a value other than `CallNumber'.");
            CallNumberCommandJSON *result = new CallNumberCommandJSON();
            assert(result != NULL);
            RCHandle<CallNumberCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCallNumberCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PhoneCommandJSON *new_result)
          {
            handle_result((CallNumberCommandJSON *)new_result);
          }
        void finish(CallNumberCommandJSON *result)
          {
            if (fieldGeneratorNumber.have_value)
              {
                result->setNumber(fieldGeneratorNumber.value);
                fieldGeneratorNumber.have_value = false;
              }
            else if (!(result->hasNumber()))
              {
                error("When parsing the object for %what%, the \"Number\" field was missing.");
              }
            if (fieldGeneratorEntity.have_value)
              {
                result->setEntity(fieldGeneratorEntity.value.referenced());
                fieldGeneratorEntity.have_value = false;
              }
            PhoneCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CallNumberCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "ntity") == 0)
                        return &fieldGeneratorEntity;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "umber") == 0)
                        return &fieldGeneratorNumber;
                    break;
                default:
                    break;
              }
            return PhoneCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PhoneCommandJSON::Generator(ignore_extras), fieldGeneratorNumber("field \"Number\" of the CallNumberCommand class"), fieldGeneratorEntity("field \"Entity\" of the CallNumberCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CallNumberCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNumber.reset();
            fieldGeneratorEntity.reset();
            PhoneCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CALLNUMBERCOMMANDJSON_H */
