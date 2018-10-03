/* file "ContactJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONTACTJSON_H
#define CONTACTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ContactJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasId;
    OInteger storeId;
    bool flagHasIsDefault;
    bool storeIsDefault;
    bool flagHasIsSelected;
    bool storeIsSelected;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ContactJSON(const ContactJSON &);
    ContactJSON & operator=(const ContactJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsDefault(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSelected(JSONValue *json_value, bool ignore_extras = false);


  public:
    ContactJSON(void);
    virtual ~ContactJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasId(void) const;
    OInteger  getId(void);
    const OInteger  getId(void) const;
    bool  hasIsDefault(void) const;
    bool  getIsDefault(void);
    const bool  getIsDefault(void) const;
    bool  hasIsSelected(void) const;
    bool  getIsSelected(void);
    const bool  getIsSelected(void) const;

    virtual size_t extraContactComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraContactComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraContactComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraContactComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraContactLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraContactLookup(const char *field_name) const
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
    void setId(OInteger new_value)
      {
        flagHasId = true;
        if (new_value < -1)
            throw("The value for field Id of ContactJSON is less than the lower bound (-1) for that field.");
        storeId = new_value;
      }
    void unsetId(void)
      {
        flagHasId = false;
      }
    void setIsDefault(bool new_value)
      {
        flagHasIsDefault = true;
        storeIsDefault = new_value;
      }
    void unsetIsDefault(void)
      {
        flagHasIsDefault = false;
      }
    void setIsSelected(bool new_value)
      {
        flagHasIsSelected = true;
        storeIsSelected = new_value;
      }
    void unsetIsSelected(void)
      {
        flagHasIsSelected = false;
      }

    virtual void extraContactAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraContactSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraContactLookup(key);
        if (old_field == NULL)
          {
            extraContactAppendPair(key, new_component);
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
        if (flagHasName)
          {
            handler->start_pair("Name");
            handler->string_value(storeName);
          }
        if (flagHasId)
          {
            handler->start_pair("Id");
            handler->number_value(storeId.get_o_integer());
          }
        if (flagHasIsDefault)
          {
            handler->start_pair("IsDefault");
            handler->boolean_value(storeIsDefault);
          }
        if (flagHasIsSelected)
          {
            handler->start_pair("IsSelected");
            handler->boolean_value(storeIsSelected);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static ContactJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ContactJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactJSON>, ContactJSON *, bool> generator("Type Contact", ignore_extras);
            parse_json_value(text, "Text for ContactJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ContactJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ContactJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactJSON>, ContactJSON *, bool> generator("Type Contact", ignore_extras);
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
        static char lowerBoundId[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundId>, OInteger, o_integer > fieldGeneratorId;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsDefault;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSelected;
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
            ContactJSON *result = new ContactJSON();
            assert(result != NULL);
            RCHandle<ContactJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraContactAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ContactJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            if (fieldGeneratorId.have_value)
              {
                result->setId(fieldGeneratorId.value);
                fieldGeneratorId.have_value = false;
              }
            if (fieldGeneratorIsDefault.have_value)
              {
                result->setIsDefault(fieldGeneratorIsDefault.value);
                fieldGeneratorIsDefault.have_value = false;
              }
            if (fieldGeneratorIsSelected.have_value)
              {
                result->setIsSelected(fieldGeneratorIsSelected.value);
                fieldGeneratorIsSelected.have_value = false;
              }
          }
        virtual void handle_result(ContactJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (field_name[2] == 0)
                                return &fieldGeneratorId;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[3]), "efault") == 0)
                                        return &fieldGeneratorIsDefault;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[3]), "elected") == 0)
                                        return &fieldGeneratorIsSelected;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the Contact class"), fieldGeneratorId("field \"Id\" of the Contact class"), fieldGeneratorIsDefault("field \"IsDefault\" of the Contact class"), fieldGeneratorIsSelected("field \"IsSelected\" of the Contact class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Contact class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorId.reset();
            fieldGeneratorIsDefault.reset();
            fieldGeneratorIsSelected.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CONTACTJSON_H */
