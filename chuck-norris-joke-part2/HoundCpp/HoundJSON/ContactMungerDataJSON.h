/* file "ContactMungerDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONTACTMUNGERDATAJSON_H
#define CONTACTMUNGERDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "RequestInfoJSON.h"
#include "ContactListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ContactMungerDataJSON : public ReferenceCounted
  {
  public:
    class TypeMetaJSON : public ReferenceCounted
      {
      private:
        bool flagHasRequestInfo;
        RequestInfoJSON * storeRequestInfo;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeMetaJSON(const TypeMetaJSON &);
        TypeMetaJSON & operator=(const TypeMetaJSON &other);

        void  fromJSONRequestInfo(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeMetaJSON(void);
        virtual ~TypeMetaJSON(void);
        bool  hasRequestInfo(void) const;
        RequestInfoJSON *  getRequestInfo(void);
        const RequestInfoJSON *  getRequestInfo(void) const;

        virtual size_t extraTypeMetaComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeMetaComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeMetaComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeMetaComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeMetaLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeMetaLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setRequestInfo(RequestInfoJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasRequestInfo)
              {
                storeRequestInfo->remove_reference();
              }
            flagHasRequestInfo = true;
            storeRequestInfo = new_value;
          }
        void unsetRequestInfo(void)
          {
            if (flagHasRequestInfo)
              {
                storeRequestInfo->remove_reference();
              }
            flagHasRequestInfo = false;
          }

        virtual void extraTypeMetaAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeMetaSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeMetaLookup(key);
            if (old_field == NULL)
              {
                extraTypeMetaAppendPair(key, new_component);
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
            assert(flagHasRequestInfo);
            handler->start_pair("RequestInfo");
            storeRequestInfo->write_as_json(handler);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRequestInfo()))
              {
                return "When parsing the object for %what%, the \"RequestInfo\" field was missing.";
              }
            return NULL;
          }

        static TypeMetaJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeMetaJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeMetaJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMetaJSON>, TypeMetaJSON *, bool> generator("Type TypeMeta", ignore_extras);
                parse_json_value(text, "Text for TypeMetaJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeMetaJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeMetaJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeMetaJSON>, TypeMetaJSON *, bool> generator("Type TypeMeta", ignore_extras);
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
            JSONHoldingGenerator<RequestInfoJSON::Generator, RCHandle<RequestInfoJSON>, RequestInfoJSON *, bool > fieldGeneratorRequestInfo;
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
                TypeMetaJSON *result = new TypeMetaJSON();
                assert(result != NULL);
                RCHandle<TypeMetaJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeMetaAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeMetaJSON *result)
              {
                if (fieldGeneratorRequestInfo.have_value)
                  {
                    result->setRequestInfo(fieldGeneratorRequestInfo.value.referenced());
                    fieldGeneratorRequestInfo.have_value = false;
                  }
                else if (!(result->hasRequestInfo()))
                  {
                    error("When parsing the object for %what%, the \"RequestInfo\" field was missing.");
                  }
              }
            virtual void handle_result(TypeMetaJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strcmp(field_name, "RequestInfo") == 0)
                    return &fieldGeneratorRequestInfo;
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorRequestInfo("field \"RequestInfo\" of the TypeMeta class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeMeta class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorRequestInfo.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasMeta;
    std::vector< TypeMetaJSON * > storeMeta;
    bool flagHasData;
    ContactListJSON * storeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ContactMungerDataJSON(const ContactMungerDataJSON &);
    ContactMungerDataJSON & operator=(const ContactMungerDataJSON &other);

    void  fromJSONMeta(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONData(JSONValue *json_value, bool ignore_extras = false);


  public:
    ContactMungerDataJSON(void);
    virtual ~ContactMungerDataJSON(void);
    bool  hasMeta(void) const;
    size_t  countOfMeta(void) const;
    TypeMetaJSON *  elementOfMeta(size_t element_num);
    const TypeMetaJSON *  elementOfMeta(size_t element_num) const;
    std::vector< TypeMetaJSON * >  getMeta(void);
    const std::vector< TypeMetaJSON * >  getMeta(void) const;
    bool  hasData(void) const;
    ContactListJSON *  getData(void);
    const ContactListJSON *  getData(void) const;

    virtual size_t extraContactMungerDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraContactMungerDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraContactMungerDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraContactMungerDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraContactMungerDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraContactMungerDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initMeta(void)
      {
        if (flagHasMeta)
          {
            for (size_t num2 = 0; num2 < storeMeta.size(); ++num2)
              {
                storeMeta[num2]->remove_reference();
              }
          }
        flagHasMeta = true;
        storeMeta.clear();
      }
    void appendMeta(TypeMetaJSON * to_append)
      {
        if (!flagHasMeta)
          {
            flagHasMeta = true;
            storeMeta.clear();
          }
        assert(flagHasMeta);
        to_append->add_reference();
        storeMeta.push_back(to_append);
      }
    void unsetMeta(void)
      {
        if (flagHasMeta)
          {
            for (size_t num3 = 0; num3 < storeMeta.size(); ++num3)
              {
                storeMeta[num3]->remove_reference();
              }
          }
        flagHasMeta = false;
        storeMeta.clear();
      }
    void setData(ContactListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasData)
          {
            storeData->remove_reference();
          }
        flagHasData = true;
        storeData = new_value;
      }
    void unsetData(void)
      {
        if (flagHasData)
          {
            storeData->remove_reference();
          }
        flagHasData = false;
      }

    virtual void extraContactMungerDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraContactMungerDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraContactMungerDataLookup(key);
        if (old_field == NULL)
          {
            extraContactMungerDataAppendPair(key, new_component);
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
        assert(flagHasMeta);
        handler->start_pair("Meta");
        assert(storeMeta.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeMeta.size(); ++num1)
          {
            storeMeta[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasData);
        handler->start_pair("Data");
        storeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMeta()))
          {
            return "When parsing the object for %what%, the \"Meta\" field was missing.";
          }
        if (!(hasData()))
          {
            return "When parsing the object for %what%, the \"Data\" field was missing.";
          }
        return NULL;
      }

    static ContactMungerDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ContactMungerDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ContactMungerDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactMungerDataJSON>, ContactMungerDataJSON *, bool> generator("Type ContactMungerData", ignore_extras);
            parse_json_value(text, "Text for ContactMungerDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ContactMungerDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ContactMungerDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ContactMungerDataJSON>, ContactMungerDataJSON *, bool> generator("Type ContactMungerData", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeMetaJSON::Generator, RCHandle<TypeMetaJSON>, TypeMetaJSON *, bool > fieldGeneratorMeta;
        JSONHoldingGenerator<ContactListJSON::Generator, RCHandle<ContactListJSON>, ContactListJSON *, bool > fieldGeneratorData;
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
            ContactMungerDataJSON *result = new ContactMungerDataJSON();
            assert(result != NULL);
            RCHandle<ContactMungerDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraContactMungerDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ContactMungerDataJSON *result)
          {
            if (fieldGeneratorMeta.have_value)
              {
                result->initMeta();
                size_t count = fieldGeneratorMeta.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMeta(fieldGeneratorMeta.value[num].referenced());
                  }
                fieldGeneratorMeta.value.clear();
                fieldGeneratorMeta.have_value = false;
              }
            else if (!(result->hasMeta()))
              {
                error("When parsing the object for %what%, the \"Meta\" field was missing.");
              }
            if (fieldGeneratorData.have_value)
              {
                result->setData(fieldGeneratorData.value.referenced());
                fieldGeneratorData.have_value = false;
              }
            else if (!(result->hasData()))
              {
                error("When parsing the object for %what%, the \"Data\" field was missing.");
              }
          }
        virtual void handle_result(ContactMungerDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ata") == 0)
                        return &fieldGeneratorData;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "eta") == 0)
                        return &fieldGeneratorMeta;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMeta("field \"Meta\" of the ContactMungerData class", ignore_extras), fieldGeneratorData("field \"Data\" of the ContactMungerData class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ContactMungerData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMeta.reset();
            fieldGeneratorData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CONTACTMUNGERDATAJSON_H */
