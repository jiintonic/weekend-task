/* file "NoRecipientInfoCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef NORECIPIENTINFOCOMMANDJSON_H
#define NORECIPIENTINFOCOMMANDJSON_H

#pragma interface

#include "CommunicationCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "CommunicationTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class NoRecipientInfoCommandJSON : public CommunicationCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasCommunicationType;
        CommunicationTypeJSON * storeCommunicationType;
        bool flagHasAutoListen;
        bool storeAutoListen;
        bool flagHasNameWithMissingInfo;
        std::string storeNameWithMissingInfo;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNameWithMissingInfo(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasCommunicationType(void) const;
        CommunicationTypeJSON *  getCommunicationType(void);
        const CommunicationTypeJSON *  getCommunicationType(void) const;
        CommunicationTypeJSON::TypeValue  getCommunicationTypeValue(void);
        const CommunicationTypeJSON::TypeValue  getCommunicationTypeValue(void) const;
        const char * getCommunicationTypeAsChars(void) const;
        std::string  getCommunicationTypeAsString(void) const;
        bool  hasAutoListen(void) const;
        bool  getAutoListen(void);
        const bool  getAutoListen(void) const;
        bool  hasNameWithMissingInfo(void) const;
        std::string  getNameWithMissingInfo(void);
        const std::string  getNameWithMissingInfo(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCommunicationType(CommunicationTypeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasCommunicationType)
              {
                storeCommunicationType->remove_reference();
              }
            flagHasCommunicationType = true;
            storeCommunicationType = new_value;
          }
        void setCommunicationType(CommunicationTypeJSON::TypeValue new_value)
          {
            setCommunicationType(new CommunicationTypeJSON(new_value));
          }
        void setCommunicationType(const char *chars)
          {
            setCommunicationType(new CommunicationTypeJSON(chars));
          }
        void setCommunicationType(std::string the_string)
          {
            setCommunicationType(new CommunicationTypeJSON(the_string));
          }
        void unsetCommunicationType(void)
          {
            if (flagHasCommunicationType)
              {
                storeCommunicationType->remove_reference();
              }
            flagHasCommunicationType = false;
          }
        void setAutoListen(bool new_value)
          {
            flagHasAutoListen = true;
            storeAutoListen = new_value;
          }
        void unsetAutoListen(void)
          {
            flagHasAutoListen = false;
          }
        void setNameWithMissingInfo(std::string new_value)
          {
            flagHasNameWithMissingInfo = true;
            storeNameWithMissingInfo = new_value;
          }
        void unsetNameWithMissingInfo(void)
          {
            flagHasNameWithMissingInfo = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
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
            assert(flagHasCommunicationType);
            handler->start_pair("CommunicationType");
            storeCommunicationType->write_as_json(handler);
            if (flagHasAutoListen)
              {
                handler->start_pair("AutoListen");
                handler->boolean_value(storeAutoListen);
              }
            assert(flagHasNameWithMissingInfo);
            handler->start_pair("NameWithMissingInfo");
            handler->string_value(storeNameWithMissingInfo);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasCommunicationType()))
              {
                return "When parsing the object for %what%, the \"CommunicationType\" field was missing.";
              }
            if (!(hasNameWithMissingInfo()))
              {
                return "When parsing the object for %what%, the \"NameWithMissingInfo\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<CommunicationTypeJSON::Generator, RCHandle<CommunicationTypeJSON>, CommunicationTypeJSON *, bool > fieldGeneratorCommunicationType;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNameWithMissingInfo;
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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorCommunicationType.have_value)
                  {
                    result->setCommunicationType(fieldGeneratorCommunicationType.value.referenced());
                    fieldGeneratorCommunicationType.have_value = false;
                  }
                else if (!(result->hasCommunicationType()))
                  {
                    error("When parsing the object for %what%, the \"CommunicationType\" field was missing.");
                  }
                if (fieldGeneratorAutoListen.have_value)
                  {
                    result->setAutoListen(fieldGeneratorAutoListen.value);
                    fieldGeneratorAutoListen.have_value = false;
                  }
                if (fieldGeneratorNameWithMissingInfo.have_value)
                  {
                    result->setNameWithMissingInfo(fieldGeneratorNameWithMissingInfo.value);
                    fieldGeneratorNameWithMissingInfo.have_value = false;
                  }
                else if (!(result->hasNameWithMissingInfo()))
                  {
                    error("When parsing the object for %what%, the \"NameWithMissingInfo\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "utoListen") == 0)
                            return &fieldGeneratorAutoListen;
                        break;
                    case 'C':
                        if (strcmp(&(field_name[1]), "ommunicationType") == 0)
                            return &fieldGeneratorCommunicationType;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ameWithMissingInfo") == 0)
                            return &fieldGeneratorNameWithMissingInfo;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCommunicationType("field \"CommunicationType\" of the TypeNativeData class", ignore_extras), fieldGeneratorAutoListen("field \"AutoListen\" of the TypeNativeData class"), fieldGeneratorNameWithMissingInfo("field \"NameWithMissingInfo\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCommunicationType.reset();
                fieldGeneratorAutoListen.reset();
                fieldGeneratorNameWithMissingInfo.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    NoRecipientInfoCommandJSON(const NoRecipientInfoCommandJSON &);
    NoRecipientInfoCommandJSON & operator=(const NoRecipientInfoCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    NoRecipientInfoCommandJSON(void);
    virtual ~NoRecipientInfoCommandJSON(void);
    const char * getCommunicationCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraNoRecipientInfoCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraNoRecipientInfoCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraNoRecipientInfoCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraNoRecipientInfoCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraNoRecipientInfoCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraNoRecipientInfoCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCommunicationCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraNoRecipientInfoCommandComponentCount();
        return result;
      }
    const char *extraCommunicationCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraNoRecipientInfoCommandComponentKey(remainder);
      }
    JSONValue *extraCommunicationCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraNoRecipientInfoCommandComponentValue(remainder);
      }
    const JSONValue *extraCommunicationCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraNoRecipientInfoCommandComponentValue(remainder);
      }
    JSONValue *extraCommunicationCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraNoRecipientInfoCommandLookup(field_name);
      }
    const JSONValue *extraCommunicationCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraNoRecipientInfoCommandLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    virtual void extraNoRecipientInfoCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraNoRecipientInfoCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraNoRecipientInfoCommandLookup(key);
        if (old_field == NULL)
          {
            extraNoRecipientInfoCommandAppendPair(key, new_component);
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
    void extraCommunicationCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraNoRecipientInfoCommandAppendPair(key, new_component);
      }
    void extraCommunicationCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraNoRecipientInfoCommandSetField(key, new_component);
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
        CommunicationCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static NoRecipientInfoCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static NoRecipientInfoCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        NoRecipientInfoCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NoRecipientInfoCommandJSON>, NoRecipientInfoCommandJSON *, bool> generator("Type NoRecipientInfoCommand", ignore_extras);
            parse_json_value(text, "Text for NoRecipientInfoCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static NoRecipientInfoCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        NoRecipientInfoCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<NoRecipientInfoCommandJSON>, NoRecipientInfoCommandJSON *, bool> generator("Type NoRecipientInfoCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommunicationCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
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
            if (!(strcmp(getCommunicationCommandJSONKey().c_str(), "NoRecipientInfoCommand") == 0))
                throw("The key field has a value other than `NoRecipientInfoCommand'.");
            NoRecipientInfoCommandJSON *result = new NoRecipientInfoCommandJSON();
            assert(result != NULL);
            RCHandle<NoRecipientInfoCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraNoRecipientInfoCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CommunicationCommandJSON *new_result)
          {
            handle_result((NoRecipientInfoCommandJSON *)new_result);
          }
        void finish(NoRecipientInfoCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommunicationCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(NoRecipientInfoCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return CommunicationCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommunicationCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the NoRecipientInfoCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the NoRecipientInfoCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            CommunicationCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* NORECIPIENTINFOCOMMANDJSON_H */