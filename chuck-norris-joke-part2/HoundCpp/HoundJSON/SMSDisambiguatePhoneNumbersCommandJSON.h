/* file "SMSDisambiguatePhoneNumbersCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSDISAMBIGUATEPHONENUMBERSCOMMANDJSON_H
#define SMSDISAMBIGUATEPHONENUMBERSCOMMANDJSON_H

#pragma interface

#include "DisambiguateCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "DisambiguateChoiceJSON.h"
#include "ContactNumberChoicesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSDisambiguatePhoneNumbersCommandJSON : public DisambiguateCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasMultiSelect;
        bool storeMultiSelect;
        bool flagHasChoiceList;
        std::vector< DisambiguateChoiceJSON * > storeChoiceList;
        bool flagHasContactNumberChoices;
        ContactNumberChoicesJSON * storeContactNumberChoices;
        bool flagHasPreviousMessage;
        std::string storePreviousMessage;
        bool flagHasSpokenBody;
        std::string storeSpokenBody;
        bool flagHasWrittenBody;
        std::string storeWrittenBody;
        bool flagHasErrorMessage;
        std::string storeErrorMessage;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONChoiceList(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONContactNumberChoices(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPreviousMessage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasMultiSelect(void) const;
        bool  getMultiSelect(void);
        const bool  getMultiSelect(void) const;
        bool  hasChoiceList(void) const;
        size_t  countOfChoiceList(void) const;
        DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num);
        const DisambiguateChoiceJSON *  elementOfChoiceList(size_t element_num) const;
        std::vector< DisambiguateChoiceJSON * >  getChoiceList(void);
        const std::vector< DisambiguateChoiceJSON * >  getChoiceList(void) const;
        bool  hasContactNumberChoices(void) const;
        ContactNumberChoicesJSON *  getContactNumberChoices(void);
        const ContactNumberChoicesJSON *  getContactNumberChoices(void) const;
        bool  hasPreviousMessage(void) const;
        std::string  getPreviousMessage(void);
        const std::string  getPreviousMessage(void) const;
        bool  hasSpokenBody(void) const;
        std::string  getSpokenBody(void);
        const std::string  getSpokenBody(void) const;
        bool  hasWrittenBody(void) const;
        std::string  getWrittenBody(void);
        const std::string  getWrittenBody(void) const;
        bool  hasErrorMessage(void) const;
        std::string  getErrorMessage(void);
        const std::string  getErrorMessage(void) const;

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

        void setMultiSelect(bool new_value)
          {
            flagHasMultiSelect = true;
            storeMultiSelect = new_value;
          }
        void unsetMultiSelect(void)
          {
            flagHasMultiSelect = false;
          }
        void initChoiceList(void)
          {
            if (flagHasChoiceList)
              {
                for (size_t num2 = 0; num2 < storeChoiceList.size(); ++num2)
                  {
                    storeChoiceList[num2]->remove_reference();
                  }
              }
            flagHasChoiceList = true;
            storeChoiceList.clear();
          }
        void appendChoiceList(DisambiguateChoiceJSON * to_append)
          {
            if (!flagHasChoiceList)
              {
                flagHasChoiceList = true;
                storeChoiceList.clear();
              }
            assert(flagHasChoiceList);
            to_append->add_reference();
            storeChoiceList.push_back(to_append);
          }
        void unsetChoiceList(void)
          {
            if (flagHasChoiceList)
              {
                for (size_t num3 = 0; num3 < storeChoiceList.size(); ++num3)
                  {
                    storeChoiceList[num3]->remove_reference();
                  }
              }
            flagHasChoiceList = false;
            storeChoiceList.clear();
          }
        void setContactNumberChoices(ContactNumberChoicesJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasContactNumberChoices)
              {
                storeContactNumberChoices->remove_reference();
              }
            flagHasContactNumberChoices = true;
            storeContactNumberChoices = new_value;
          }
        void unsetContactNumberChoices(void)
          {
            if (flagHasContactNumberChoices)
              {
                storeContactNumberChoices->remove_reference();
              }
            flagHasContactNumberChoices = false;
          }
        void setPreviousMessage(std::string new_value)
          {
            flagHasPreviousMessage = true;
            storePreviousMessage = new_value;
          }
        void unsetPreviousMessage(void)
          {
            flagHasPreviousMessage = false;
          }
        void setSpokenBody(std::string new_value)
          {
            flagHasSpokenBody = true;
            storeSpokenBody = new_value;
          }
        void unsetSpokenBody(void)
          {
            flagHasSpokenBody = false;
          }
        void setWrittenBody(std::string new_value)
          {
            flagHasWrittenBody = true;
            storeWrittenBody = new_value;
          }
        void unsetWrittenBody(void)
          {
            flagHasWrittenBody = false;
          }
        void setErrorMessage(std::string new_value)
          {
            flagHasErrorMessage = true;
            storeErrorMessage = new_value;
          }
        void unsetErrorMessage(void)
          {
            flagHasErrorMessage = false;
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
            if (flagHasMultiSelect)
              {
                handler->start_pair("MultiSelect");
                handler->boolean_value(storeMultiSelect);
              }
            assert(flagHasChoiceList);
            handler->start_pair("ChoiceList");
            assert(storeChoiceList.size() >= 2);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeChoiceList.size(); ++num1)
              {
                storeChoiceList[num1]->write_as_json(handler);
              }
            handler->finish_array();
            assert(flagHasContactNumberChoices);
            handler->start_pair("ContactNumberChoices");
            storeContactNumberChoices->write_as_json(handler);
            if (flagHasPreviousMessage)
              {
                handler->start_pair("PreviousMessage");
                handler->string_value(storePreviousMessage);
              }
            if (flagHasSpokenBody)
              {
                handler->start_pair("SpokenBody");
                handler->string_value(storeSpokenBody);
              }
            if (flagHasWrittenBody)
              {
                handler->start_pair("WrittenBody");
                handler->string_value(storeWrittenBody);
              }
            if (flagHasErrorMessage)
              {
                handler->start_pair("ErrorMessage");
                handler->string_value(storeErrorMessage);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasChoiceList()))
              {
                return "When parsing the object for %what%, the \"ChoiceList\" field was missing.";
              }
            if (!(hasContactNumberChoices()))
              {
                return "When parsing the object for %what%, the \"ContactNumberChoices\" field was missing.";
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
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorMultiSelect;
            JSONHoldingArrayGenerator<DisambiguateChoiceJSON::Generator, RCHandle<DisambiguateChoiceJSON>, DisambiguateChoiceJSON *, bool > fieldGeneratorChoiceList;
            JSONHoldingGenerator<ContactNumberChoicesJSON::Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool > fieldGeneratorContactNumberChoices;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPreviousMessage;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenBody;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenBody;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
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
                if (fieldGeneratorMultiSelect.have_value)
                  {
                    result->setMultiSelect(fieldGeneratorMultiSelect.value);
                    fieldGeneratorMultiSelect.have_value = false;
                  }
                if (fieldGeneratorChoiceList.have_value)
                  {
                    result->initChoiceList();
                    size_t count = fieldGeneratorChoiceList.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendChoiceList(fieldGeneratorChoiceList.value[num].referenced());
                      }
                    fieldGeneratorChoiceList.value.clear();
                    fieldGeneratorChoiceList.have_value = false;
                  }
                else if (!(result->hasChoiceList()))
                  {
                    error("When parsing the object for %what%, the \"ChoiceList\" field was missing.");
                  }
                if (fieldGeneratorContactNumberChoices.have_value)
                  {
                    result->setContactNumberChoices(fieldGeneratorContactNumberChoices.value.referenced());
                    fieldGeneratorContactNumberChoices.have_value = false;
                  }
                else if (!(result->hasContactNumberChoices()))
                  {
                    error("When parsing the object for %what%, the \"ContactNumberChoices\" field was missing.");
                  }
                if (fieldGeneratorPreviousMessage.have_value)
                  {
                    result->setPreviousMessage(fieldGeneratorPreviousMessage.value);
                    fieldGeneratorPreviousMessage.have_value = false;
                  }
                if (fieldGeneratorSpokenBody.have_value)
                  {
                    result->setSpokenBody(fieldGeneratorSpokenBody.value);
                    fieldGeneratorSpokenBody.have_value = false;
                  }
                if (fieldGeneratorWrittenBody.have_value)
                  {
                    result->setWrittenBody(fieldGeneratorWrittenBody.value);
                    fieldGeneratorWrittenBody.have_value = false;
                  }
                if (fieldGeneratorErrorMessage.have_value)
                  {
                    result->setErrorMessage(fieldGeneratorErrorMessage.value);
                    fieldGeneratorErrorMessage.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strcmp(&(field_name[2]), "oiceList") == 0)
                                    return &fieldGeneratorChoiceList;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "ntactNumberChoices") == 0)
                                    return &fieldGeneratorContactNumberChoices;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'E':
                        if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                            return &fieldGeneratorErrorMessage;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                            return &fieldGeneratorMultiSelect;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "reviousMessage") == 0)
                            return &fieldGeneratorPreviousMessage;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "pokenBody") == 0)
                            return &fieldGeneratorSpokenBody;
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "rittenBody") == 0)
                            return &fieldGeneratorWrittenBody;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMultiSelect("field \"MultiSelect\" of the TypeNativeData class"), fieldGeneratorChoiceList("field \"ChoiceList\" of the TypeNativeData class", ignore_extras), fieldGeneratorContactNumberChoices("field \"ContactNumberChoices\" of the TypeNativeData class", ignore_extras), fieldGeneratorPreviousMessage("field \"PreviousMessage\" of the TypeNativeData class"), fieldGeneratorSpokenBody("field \"SpokenBody\" of the TypeNativeData class"), fieldGeneratorWrittenBody("field \"WrittenBody\" of the TypeNativeData class"), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMultiSelect.reset();
                fieldGeneratorChoiceList.reset();
                fieldGeneratorContactNumberChoices.reset();
                fieldGeneratorPreviousMessage.reset();
                fieldGeneratorSpokenBody.reset();
                fieldGeneratorWrittenBody.reset();
                fieldGeneratorErrorMessage.reset();
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

    SMSDisambiguatePhoneNumbersCommandJSON(const SMSDisambiguatePhoneNumbersCommandJSON &);
    SMSDisambiguatePhoneNumbersCommandJSON & operator=(const SMSDisambiguatePhoneNumbersCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSDisambiguatePhoneNumbersCommandJSON(void);
    virtual ~SMSDisambiguatePhoneNumbersCommandJSON(void);
    const char * getDisambiguateCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraSMSDisambiguatePhoneNumbersCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSDisambiguatePhoneNumbersCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSDisambiguatePhoneNumbersCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSDisambiguatePhoneNumbersCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSDisambiguatePhoneNumbersCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSDisambiguatePhoneNumbersCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraDisambiguateCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        result += extraSMSDisambiguatePhoneNumbersCommandComponentCount();
        return result;
      }
    const char *extraDisambiguateCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        return extraSMSDisambiguatePhoneNumbersCommandComponentKey(remainder);
      }
    JSONValue *extraDisambiguateCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraSMSDisambiguatePhoneNumbersCommandComponentValue(remainder);
      }
    const JSONValue *extraDisambiguateCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        return extraSMSDisambiguatePhoneNumbersCommandComponentValue(remainder);
      }
    JSONValue *extraDisambiguateCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraSMSDisambiguatePhoneNumbersCommandLookup(field_name);
      }
    const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraSMSDisambiguatePhoneNumbersCommandLookup(field_name);
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
        JSONHoldingGenerator<DisambiguateCommandJSON::TypeNativeDataJSON::Generator, RCHandle<DisambiguateCommandJSON::TypeNativeDataJSON>, DisambiguateCommandJSON::TypeNativeDataJSON *> convert_handler("Type DisambiguateCommandJSON::TypeNativeDataJSON");
        new_value->write_as_json(&convert_handler);
        DisambiguateCommandJSON::setNativeData(convert_handler.value.referenced());
      }
    void setNativeData(DisambiguateCommandJSON::TypeNativeDataJSON * new_value)
      {
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *> convert_handler("Type TypeNativeDataJSON");
        new_value->write_as_json(&convert_handler);
        setNativeData(convert_handler.value.referenced());
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
        DisambiguateCommandJSON::unsetNativeData();
      }

    virtual void extraSMSDisambiguatePhoneNumbersCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSDisambiguatePhoneNumbersCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSDisambiguatePhoneNumbersCommandLookup(key);
        if (old_field == NULL)
          {
            extraSMSDisambiguatePhoneNumbersCommandAppendPair(key, new_component);
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
    void extraDisambiguateCommandAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraSMSDisambiguatePhoneNumbersCommandAppendPair(key, new_component);
      }
    void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraSMSDisambiguatePhoneNumbersCommandSetField(key, new_component);
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
        DisambiguateCommandJSON::write_fields_as_json(handler);
      }
    virtual void writeFieldNativeData(JSONHandler *handler) const
      {
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

    static SMSDisambiguatePhoneNumbersCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSDisambiguatePhoneNumbersCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSDisambiguatePhoneNumbersCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguatePhoneNumbersCommandJSON>, SMSDisambiguatePhoneNumbersCommandJSON *, bool> generator("Type SMSDisambiguatePhoneNumbersCommand", ignore_extras);
            parse_json_value(text, "Text for SMSDisambiguatePhoneNumbersCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSDisambiguatePhoneNumbersCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSDisambiguatePhoneNumbersCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguatePhoneNumbersCommandJSON>, SMSDisambiguatePhoneNumbersCommandJSON *, bool> generator("Type SMSDisambiguatePhoneNumbersCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public DisambiguateCommandJSON::Generator
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
            if (!(strcmp(getDisambiguateCommandJSONKey().c_str(), "SMSDisambiguatePhoneNumbersCommand") == 0))
                throw("The key field has a value other than `SMSDisambiguatePhoneNumbersCommand'.");
            SMSDisambiguatePhoneNumbersCommandJSON *result = new SMSDisambiguatePhoneNumbersCommandJSON();
            assert(result != NULL);
            RCHandle<SMSDisambiguatePhoneNumbersCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSDisambiguatePhoneNumbersCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DisambiguateCommandJSON *new_result)
          {
            handle_result((SMSDisambiguatePhoneNumbersCommandJSON *)new_result);
          }
        void finish(SMSDisambiguatePhoneNumbersCommandJSON *result)
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
            DisambiguateCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(SMSDisambiguatePhoneNumbersCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return DisambiguateCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DisambiguateCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the SMSDisambiguatePhoneNumbersCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSDisambiguatePhoneNumbersCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            DisambiguateCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSDISAMBIGUATEPHONENUMBERSCOMMANDJSON_H */
