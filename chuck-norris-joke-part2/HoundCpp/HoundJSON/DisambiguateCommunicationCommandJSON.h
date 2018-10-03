/* file "DisambiguateCommunicationCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef DISAMBIGUATECOMMUNICATIONCOMMANDJSON_H
#define DISAMBIGUATECOMMUNICATIONCOMMANDJSON_H

#pragma interface

#include "DisambiguateCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONParallelGenerator.h"
#include <vector>
#include <string>
#include "DisambiguateChoiceJSON.h"
#include "CommunicationTypeJSON.h"
#include "SMSContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class DisambiguateCommunicationCommandJSON : public DisambiguateCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        struct TypeContactResultChoices
          {
            size_t key;
            union
              {
                SMSContactResultJSON * choice0;
                EmailContactResultJSON * choice1;
              } u;
          };
        class TypeLastSelectedInfoAsStringsJSON : public ReferenceCounted
          {
          private:
            bool flagHasSpoken;
            std::string storeSpoken;
            bool flagHasWritten;
            std::string storeWritten;
            std::vector<std::string> extraKeys;
            std::vector<JSONValue *> extraValues;
            string_index *extraIndex;

            TypeLastSelectedInfoAsStringsJSON(const TypeLastSelectedInfoAsStringsJSON &);
            TypeLastSelectedInfoAsStringsJSON & operator=(const TypeLastSelectedInfoAsStringsJSON &other);

            void  fromJSONSpoken(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONWritten(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeLastSelectedInfoAsStringsJSON(void);
            virtual ~TypeLastSelectedInfoAsStringsJSON(void);
            bool  hasSpoken(void) const;
            std::string  getSpoken(void);
            const std::string  getSpoken(void) const;
            bool  hasWritten(void) const;
            std::string  getWritten(void);
            const std::string  getWritten(void) const;

            virtual size_t extraTypeLastSelectedInfoAsStringsComponentCount(void) const
              {
                assert(extraKeys.size() == extraValues.size());
                return extraKeys.size();
              }
            virtual const char *extraTypeLastSelectedInfoAsStringsComponentKey(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraKeys[component_num].c_str();
              }
            virtual JSONValue *extraTypeLastSelectedInfoAsStringsComponentValue(size_t component_num)
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual const JSONValue *extraTypeLastSelectedInfoAsStringsComponentValue(size_t component_num) const
              {
                assert(extraKeys.size() == extraValues.size());
                assert(component_num < extraValues.size());
                return extraValues[component_num];
              }
            virtual JSONValue *extraTypeLastSelectedInfoAsStringsLookup(const char *field_name)
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }
            virtual const JSONValue *extraTypeLastSelectedInfoAsStringsLookup(const char *field_name) const
              {
                JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
                if (result != NULL)
                    result->add_reference();
                return result;
              }

            void setSpoken(std::string new_value)
              {
                flagHasSpoken = true;
                storeSpoken = new_value;
              }
            void unsetSpoken(void)
              {
                flagHasSpoken = false;
              }
            void setWritten(std::string new_value)
              {
                flagHasWritten = true;
                storeWritten = new_value;
              }
            void unsetWritten(void)
              {
                flagHasWritten = false;
              }

            virtual void extraTypeLastSelectedInfoAsStringsAppendPair(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                assert(extraKeys.size() == extraValues.size());
                extraKeys.push_back(key);
                extraValues.push_back(new_component);
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
              }
            virtual void extraTypeLastSelectedInfoAsStringsSetField(const char *key, JSONValue *new_component)
              {
                assert(key != NULL);
                assert(new_component != NULL);

                JSONValue *old_field = extraTypeLastSelectedInfoAsStringsLookup(key);
                if (old_field == NULL)
                  {
                    extraTypeLastSelectedInfoAsStringsAppendPair(key, new_component);
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
                assert(flagHasSpoken);
                handler->start_pair("Spoken");
                handler->string_value(storeSpoken);
                assert(flagHasWritten);
                handler->start_pair("Written");
                handler->string_value(storeWritten);
              }
            virtual const char *missing_field_error(void) const
              {
                if (!(hasSpoken()))
                  {
                    return "When parsing the object for %what%, the \"Spoken\" field was missing.";
                  }
                if (!(hasWritten()))
                  {
                    return "When parsing the object for %what%, the \"Written\" field was missing.";
                  }
                return NULL;
              }

            static TypeLastSelectedInfoAsStringsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeLastSelectedInfoAsStringsJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeLastSelectedInfoAsStringsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeLastSelectedInfoAsStringsJSON>, TypeLastSelectedInfoAsStringsJSON *, bool> generator("Type TypeLastSelectedInfoAsStrings", ignore_extras);
                    parse_json_value(text, "Text for TypeLastSelectedInfoAsStringsJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeLastSelectedInfoAsStringsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeLastSelectedInfoAsStringsJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeLastSelectedInfoAsStringsJSON>, TypeLastSelectedInfoAsStringsJSON *, bool> generator("Type TypeLastSelectedInfoAsStrings", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpoken;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWritten;
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
                    TypeLastSelectedInfoAsStringsJSON *result = new TypeLastSelectedInfoAsStringsJSON();
                    assert(result != NULL);
                    RCHandle<TypeLastSelectedInfoAsStringsJSON> result_holder = result;
                    finish(result);
                    size_t extra_count = unknownFieldGenerator.field_names.size();
                    assert(extra_count == unknownFieldGenerator.field_values.size());
                    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                      {
                        result->extraTypeLastSelectedInfoAsStringsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                      }
                    unknownFieldGenerator.field_names.clear();
                    unknownFieldGenerator.field_values.clear();
                    destroy_string_index(unknownFieldGenerator.index);
                unknownFieldGenerator.index = create_string_index();
                    handle_result(result);
                  }
                void finish(TypeLastSelectedInfoAsStringsJSON *result)
                  {
                    if (fieldGeneratorSpoken.have_value)
                      {
                        result->setSpoken(fieldGeneratorSpoken.value);
                        fieldGeneratorSpoken.have_value = false;
                      }
                    else if (!(result->hasSpoken()))
                      {
                        error("When parsing the object for %what%, the \"Spoken\" field was missing.");
                      }
                    if (fieldGeneratorWritten.have_value)
                      {
                        result->setWritten(fieldGeneratorWritten.value);
                        fieldGeneratorWritten.have_value = false;
                      }
                    else if (!(result->hasWritten()))
                      {
                        error("When parsing the object for %what%, the \"Written\" field was missing.");
                      }
                  }
                virtual void handle_result(TypeLastSelectedInfoAsStringsJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'S':
                            if (strcmp(&(field_name[1]), "poken") == 0)
                                return &fieldGeneratorSpoken;
                            break;
                        case 'W':
                            if (strcmp(&(field_name[1]), "ritten") == 0)
                                return &fieldGeneratorWritten;
                            break;
                        default:
                            break;
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorSpoken("field \"Spoken\" of the TypeLastSelectedInfoAsStrings class"), fieldGeneratorWritten("field \"Written\" of the TypeLastSelectedInfoAsStrings class"), unknownFieldGenerator(ignore_extras)
                  {
                    set_what("the TypeLastSelectedInfoAsStrings class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorSpoken.reset();
                    fieldGeneratorWritten.reset();
                    JSONObjectGenerator::reset();
                    unknownFieldGenerator.reset();
                  }
              };
          };

      private:
        bool flagHasMultiSelect;
        bool storeMultiSelect;
        bool flagHasChoiceList;
        std::vector< DisambiguateChoiceJSON * > storeChoiceList;
        bool flagHasErrorSpokenResponse;
        std::string storeErrorSpokenResponse;
        bool flagHasErrorSpokenResponseLong;
        std::string storeErrorSpokenResponseLong;
        bool flagHasErrorWrittenResponse;
        std::string storeErrorWrittenResponse;
        bool flagHasErrorWrittenResponseLong;
        std::string storeErrorWrittenResponseLong;
        bool flagHasHadInvalidChoice;
        bool storeHadInvalidChoice;
        bool flagHasCommunicationType;
        CommunicationTypeJSON * storeCommunicationType;
        bool flagHasAutoListen;
        bool storeAutoListen;
        bool flagHasContactResultChoices;
        std::vector< TypeContactResultChoices > storeContactResultChoices;
        bool flagHasLastSelectedInfoAsStrings;
        std::vector< TypeLastSelectedInfoAsStringsJSON * > storeLastSelectedInfoAsStrings;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONChoiceList(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorSpokenResponse(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorSpokenResponseLong(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorWrittenResponse(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorWrittenResponseLong(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONHadInvalidChoice(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONContactResultChoices(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastSelectedInfoAsStrings(JSONValue *json_value, bool ignore_extras = false);


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
        bool  hasErrorSpokenResponse(void) const;
        std::string  getErrorSpokenResponse(void);
        const std::string  getErrorSpokenResponse(void) const;
        bool  hasErrorSpokenResponseLong(void) const;
        std::string  getErrorSpokenResponseLong(void);
        const std::string  getErrorSpokenResponseLong(void) const;
        bool  hasErrorWrittenResponse(void) const;
        std::string  getErrorWrittenResponse(void);
        const std::string  getErrorWrittenResponse(void) const;
        bool  hasErrorWrittenResponseLong(void) const;
        std::string  getErrorWrittenResponseLong(void);
        const std::string  getErrorWrittenResponseLong(void) const;
        bool  hasHadInvalidChoice(void) const;
        bool  getHadInvalidChoice(void);
        const bool  getHadInvalidChoice(void) const;
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
        bool  hasContactResultChoices(void) const;
        size_t  countOfContactResultChoices(void) const;
        TypeContactResultChoices  elementOfContactResultChoices(size_t element_num);
        const TypeContactResultChoices  elementOfContactResultChoices(size_t element_num) const;
        std::vector< TypeContactResultChoices >  getContactResultChoices(void);
        const std::vector< TypeContactResultChoices >  getContactResultChoices(void) const;
        bool  hasLastSelectedInfoAsStrings(void) const;
        size_t  countOfLastSelectedInfoAsStrings(void) const;
        TypeLastSelectedInfoAsStringsJSON *  elementOfLastSelectedInfoAsStrings(size_t element_num);
        const TypeLastSelectedInfoAsStringsJSON *  elementOfLastSelectedInfoAsStrings(size_t element_num) const;
        std::vector< TypeLastSelectedInfoAsStringsJSON * >  getLastSelectedInfoAsStrings(void);
        const std::vector< TypeLastSelectedInfoAsStringsJSON * >  getLastSelectedInfoAsStrings(void) const;

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
                for (size_t num4 = 0; num4 < storeChoiceList.size(); ++num4)
                  {
                    storeChoiceList[num4]->remove_reference();
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
                for (size_t num5 = 0; num5 < storeChoiceList.size(); ++num5)
                  {
                    storeChoiceList[num5]->remove_reference();
                  }
              }
            flagHasChoiceList = false;
            storeChoiceList.clear();
          }
        void setErrorSpokenResponse(std::string new_value)
          {
            flagHasErrorSpokenResponse = true;
            storeErrorSpokenResponse = new_value;
          }
        void unsetErrorSpokenResponse(void)
          {
            flagHasErrorSpokenResponse = false;
          }
        void setErrorSpokenResponseLong(std::string new_value)
          {
            flagHasErrorSpokenResponseLong = true;
            storeErrorSpokenResponseLong = new_value;
          }
        void unsetErrorSpokenResponseLong(void)
          {
            flagHasErrorSpokenResponseLong = false;
          }
        void setErrorWrittenResponse(std::string new_value)
          {
            flagHasErrorWrittenResponse = true;
            storeErrorWrittenResponse = new_value;
          }
        void unsetErrorWrittenResponse(void)
          {
            flagHasErrorWrittenResponse = false;
          }
        void setErrorWrittenResponseLong(std::string new_value)
          {
            flagHasErrorWrittenResponseLong = true;
            storeErrorWrittenResponseLong = new_value;
          }
        void unsetErrorWrittenResponseLong(void)
          {
            flagHasErrorWrittenResponseLong = false;
          }
        void setHadInvalidChoice(bool new_value)
          {
            flagHasHadInvalidChoice = true;
            storeHadInvalidChoice = new_value;
          }
        void unsetHadInvalidChoice(void)
          {
            flagHasHadInvalidChoice = false;
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
        void initContactResultChoices(void)
          {
            if (flagHasContactResultChoices)
              {
                for (size_t num6 = 0; num6 < storeContactResultChoices.size(); ++num6)
                  {
                    switch (storeContactResultChoices[num6].key)
                      {
                        case 0:
                            storeContactResultChoices[num6].u.choice0->remove_reference();
                            break;
                        case 1:
                            storeContactResultChoices[num6].u.choice1->remove_reference();
                            break;
                        default:
                            assert(false);
                      }
                  }
              }
            flagHasContactResultChoices = true;
            storeContactResultChoices.clear();
          }
        void appendContactResultChoices(TypeContactResultChoices to_append)
          {
            if (!flagHasContactResultChoices)
              {
                flagHasContactResultChoices = true;
                storeContactResultChoices.clear();
              }
            assert(flagHasContactResultChoices);
            switch (to_append.key)
              {
                case 0:
                    to_append.u.choice0->add_reference();
                    break;
                case 1:
                    to_append.u.choice1->add_reference();
                    break;
                default:
                    assert(false);
              }
            storeContactResultChoices.push_back(to_append);
          }
        void unsetContactResultChoices(void)
          {
            if (flagHasContactResultChoices)
              {
                for (size_t num7 = 0; num7 < storeContactResultChoices.size(); ++num7)
                  {
                    switch (storeContactResultChoices[num7].key)
                      {
                        case 0:
                            storeContactResultChoices[num7].u.choice0->remove_reference();
                            break;
                        case 1:
                            storeContactResultChoices[num7].u.choice1->remove_reference();
                            break;
                        default:
                            assert(false);
                      }
                  }
              }
            flagHasContactResultChoices = false;
            storeContactResultChoices.clear();
          }
        void initLastSelectedInfoAsStrings(void)
          {
            if (flagHasLastSelectedInfoAsStrings)
              {
                for (size_t num8 = 0; num8 < storeLastSelectedInfoAsStrings.size(); ++num8)
                  {
                    storeLastSelectedInfoAsStrings[num8]->remove_reference();
                  }
              }
            flagHasLastSelectedInfoAsStrings = true;
            storeLastSelectedInfoAsStrings.clear();
          }
        void appendLastSelectedInfoAsStrings(TypeLastSelectedInfoAsStringsJSON * to_append)
          {
            if (!flagHasLastSelectedInfoAsStrings)
              {
                flagHasLastSelectedInfoAsStrings = true;
                storeLastSelectedInfoAsStrings.clear();
              }
            assert(flagHasLastSelectedInfoAsStrings);
            to_append->add_reference();
            storeLastSelectedInfoAsStrings.push_back(to_append);
          }
        void unsetLastSelectedInfoAsStrings(void)
          {
            if (flagHasLastSelectedInfoAsStrings)
              {
                for (size_t num9 = 0; num9 < storeLastSelectedInfoAsStrings.size(); ++num9)
                  {
                    storeLastSelectedInfoAsStrings[num9]->remove_reference();
                  }
              }
            flagHasLastSelectedInfoAsStrings = false;
            storeLastSelectedInfoAsStrings.clear();
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
            if (flagHasErrorSpokenResponse)
              {
                handler->start_pair("ErrorSpokenResponse");
                handler->string_value(storeErrorSpokenResponse);
              }
            if (flagHasErrorSpokenResponseLong)
              {
                handler->start_pair("ErrorSpokenResponseLong");
                handler->string_value(storeErrorSpokenResponseLong);
              }
            if (flagHasErrorWrittenResponse)
              {
                handler->start_pair("ErrorWrittenResponse");
                handler->string_value(storeErrorWrittenResponse);
              }
            if (flagHasErrorWrittenResponseLong)
              {
                handler->start_pair("ErrorWrittenResponseLong");
                handler->string_value(storeErrorWrittenResponseLong);
              }
            assert(flagHasHadInvalidChoice);
            handler->start_pair("HadInvalidChoice");
            handler->boolean_value(storeHadInvalidChoice);
            assert(flagHasCommunicationType);
            handler->start_pair("CommunicationType");
            storeCommunicationType->write_as_json(handler);
            if (flagHasAutoListen)
              {
                handler->start_pair("AutoListen");
                handler->boolean_value(storeAutoListen);
              }
            if (flagHasContactResultChoices)
              {
                handler->start_pair("ContactResultChoices");
                handler->start_array();
                for (size_t num2 = 0; num2 < storeContactResultChoices.size(); ++num2)
                  {
                    switch (storeContactResultChoices[num2].key)
                      {
                        case 0:
                            storeContactResultChoices[num2].u.choice0->write_as_json(handler);
                            break;
                        case 1:
                            storeContactResultChoices[num2].u.choice1->write_as_json(handler);
                            break;
                        default:
                            assert(false);
                      }
                  }
                handler->finish_array();
              }
            if (flagHasLastSelectedInfoAsStrings)
              {
                handler->start_pair("LastSelectedInfoAsStrings");
                handler->start_array();
                for (size_t num3 = 0; num3 < storeLastSelectedInfoAsStrings.size(); ++num3)
                  {
                    storeLastSelectedInfoAsStrings[num3]->write_as_json(handler);
                  }
                handler->finish_array();
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasChoiceList()))
              {
                return "When parsing the object for %what%, the \"ChoiceList\" field was missing.";
              }
            if (!(hasHadInvalidChoice()))
              {
                return "When parsing the object for %what%, the \"HadInvalidChoice\" field was missing.";
              }
            if (!(hasCommunicationType()))
              {
                return "When parsing the object for %what%, the \"CommunicationType\" field was missing.";
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorSpokenResponse;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorSpokenResponseLong;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorWrittenResponse;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorWrittenResponseLong;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHadInvalidChoice;
            JSONHoldingGenerator<CommunicationTypeJSON::Generator, RCHandle<CommunicationTypeJSON>, CommunicationTypeJSON *, bool > fieldGeneratorCommunicationType;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
        class FieldGeneratorContactResultChoices : public JSONParallelGenerator
              {
              private:
                JSONHoldingGenerator<SMSContactResultJSON::Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool > field0;
                JSONHoldingGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > field1;
                JSONHandler *all_handlers[2];

              protected:
                size_t start(JSONHandler ***parallel_handlers_location)
                  {
                    *parallel_handlers_location = &(all_handlers[0]);
                    return 2;
                  }
                void finish(size_t winning_index)
                  {
                    TypeContactResultChoices result;
                    result.key = winning_index;
                    switch (winning_index)
                      {
                        case 0:
                          {
                            assert(field0.have_value);
                            result.u.choice0 = field0.value.referenced();
                            break;
                          }
                        case 1:
                          {
                            assert(field1.have_value);
                            result.u.choice1 = field1.value.referenced();
                            break;
                          }
                        default:
                          {
                            assert(false);
                          }
                      }
                    handle_result(result);
                  }
                virtual void handle_result(TypeContactResultChoices result) = 0;

              public:
                FieldGeneratorContactResultChoices(bool ignore_extras) : field0("option 0 of field \"ContactResultChoices\"", ignore_extras), field1("option 1 of field \"ContactResultChoices\"", ignore_extras)
                  {
                    all_handlers[0] = &field0;
                    all_handlers[1] = &field1;
                  }
                FieldGeneratorContactResultChoices(std::string what, bool ignore_extras) : field0("option 0 of field \"ContactResultChoices\"", ignore_extras), field1("option 1 of field \"ContactResultChoices\"", ignore_extras)
                  {
                    all_handlers[0] = &field0;
                    all_handlers[1] = &field1;
                  }
                ~FieldGeneratorContactResultChoices(void)  { }

                void reset(void)
                  {
                    field0.reset();
                    field1.reset();
                    JSONParallelGenerator::reset();
                  }
              };
            class HolderContactResultChoices
              {
              private:
                bool have_data;
                TypeContactResultChoices data;

              public:
                HolderContactResultChoices(void) : have_data(false)  { }
                HolderContactResultChoices(TypeContactResultChoices init_data) : have_data(true), data(init_data)
                  {
                    if (have_data)
                      {
                        switch (data.key)
                          {
                            case 0:
                              data.u.choice0->add_reference();
                              break;
                            case 1:
                              data.u.choice1->add_reference();
                              break;
                            default:
                              assert(false);
                          }
                      }
                  }
                HolderContactResultChoices(const HolderContactResultChoices &other) : have_data(other.haveData()), data(other.referenced())
                  {
                    if (have_data)
                      {
                        switch (data.key)
                          {
                            case 0:
                              data.u.choice0->add_reference();
                              break;
                            case 1:
                              data.u.choice1->add_reference();
                              break;
                            default:
                              assert(false);
                          }
                      }
                  }
                ~HolderContactResultChoices(void)
                  {
                    if (have_data)
                      {
                        switch (data.key)
                          {
                            case 0:
                              data.u.choice0->remove_reference();
                              break;
                            case 1:
                              data.u.choice1->remove_reference();
                              break;
                            default:
                              assert(false);
                          }
                      }
                  }

                void operator=(const HolderContactResultChoices &other)
                  {
                    TypeContactResultChoices new_data;
                    if (other.haveData())
                      {
                        new_data = other.referenced();
                        switch (new_data.key)
                          {
                            case 0:
                              new_data.u.choice0->add_reference();
                              break;
                            case 1:
                              new_data.u.choice1->add_reference();
                              break;
                            default:
                              assert(false);
                          }
                      }
                    if (have_data)
                      {
                        switch (data.key)
                          {
                            case 0:
                              data.u.choice0->remove_reference();
                              break;
                            case 1:
                              data.u.choice1->remove_reference();
                              break;
                            default:
                              assert(false);
                          }
                      }
                    have_data = other.haveData();
                    if (have_data)
                        data = new_data;
                  }
                bool haveData(void) const
                  {
                    return have_data;
                  }
                TypeContactResultChoices referenced(void) const
                  {
                    return data;
                  }
              };
            JSONHoldingArrayGenerator<FieldGeneratorContactResultChoices, HolderContactResultChoices, TypeContactResultChoices, bool > fieldGeneratorContactResultChoices;
            JSONHoldingArrayGenerator<TypeLastSelectedInfoAsStringsJSON::Generator, RCHandle<TypeLastSelectedInfoAsStringsJSON>, TypeLastSelectedInfoAsStringsJSON *, bool > fieldGeneratorLastSelectedInfoAsStrings;
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
                if (fieldGeneratorErrorSpokenResponse.have_value)
                  {
                    result->setErrorSpokenResponse(fieldGeneratorErrorSpokenResponse.value);
                    fieldGeneratorErrorSpokenResponse.have_value = false;
                  }
                if (fieldGeneratorErrorSpokenResponseLong.have_value)
                  {
                    result->setErrorSpokenResponseLong(fieldGeneratorErrorSpokenResponseLong.value);
                    fieldGeneratorErrorSpokenResponseLong.have_value = false;
                  }
                if (fieldGeneratorErrorWrittenResponse.have_value)
                  {
                    result->setErrorWrittenResponse(fieldGeneratorErrorWrittenResponse.value);
                    fieldGeneratorErrorWrittenResponse.have_value = false;
                  }
                if (fieldGeneratorErrorWrittenResponseLong.have_value)
                  {
                    result->setErrorWrittenResponseLong(fieldGeneratorErrorWrittenResponseLong.value);
                    fieldGeneratorErrorWrittenResponseLong.have_value = false;
                  }
                if (fieldGeneratorHadInvalidChoice.have_value)
                  {
                    result->setHadInvalidChoice(fieldGeneratorHadInvalidChoice.value);
                    fieldGeneratorHadInvalidChoice.have_value = false;
                  }
                else if (!(result->hasHadInvalidChoice()))
                  {
                    error("When parsing the object for %what%, the \"HadInvalidChoice\" field was missing.");
                  }
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
                if (fieldGeneratorContactResultChoices.have_value)
                  {
                    result->initContactResultChoices();
                    size_t count = fieldGeneratorContactResultChoices.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendContactResultChoices(fieldGeneratorContactResultChoices.value[num].referenced());
                      }
                    fieldGeneratorContactResultChoices.value.clear();
                    fieldGeneratorContactResultChoices.have_value = false;
                  }
                if (fieldGeneratorLastSelectedInfoAsStrings.have_value)
                  {
                    result->initLastSelectedInfoAsStrings();
                    size_t count = fieldGeneratorLastSelectedInfoAsStrings.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendLastSelectedInfoAsStrings(fieldGeneratorLastSelectedInfoAsStrings.value[num].referenced());
                      }
                    fieldGeneratorLastSelectedInfoAsStrings.value.clear();
                    fieldGeneratorLastSelectedInfoAsStrings.have_value = false;
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
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'h':
                                if (strcmp(&(field_name[2]), "oiceList") == 0)
                                    return &fieldGeneratorChoiceList;
                                break;
                            case 'o':
                                switch ((unsigned char)(field_name[2]))
                                  {
                                    case 'm':
                                        if (strcmp(&(field_name[3]), "municationType") == 0)
                                            return &fieldGeneratorCommunicationType;
                                        break;
                                    case 'n':
                                        if (strcmp(&(field_name[3]), "tactResultChoices") == 0)
                                            return &fieldGeneratorContactResultChoices;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'E':
                        if (strncmp(&(field_name[1]), "rror", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'S':
                                    if (strncmp(&(field_name[6]), "pokenResponse", 13) == 0)
                                      {
                                        switch ((unsigned char)(field_name[19]))
                                          {
                                            case 0:
                                                return &fieldGeneratorErrorSpokenResponse;
                                            case 'L':
                                                if (strcmp(&(field_name[20]), "ong") == 0)
                                                    return &fieldGeneratorErrorSpokenResponseLong;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'W':
                                    if (strncmp(&(field_name[6]), "rittenResponse", 14) == 0)
                                      {
                                        switch ((unsigned char)(field_name[20]))
                                          {
                                            case 0:
                                                return &fieldGeneratorErrorWrittenResponse;
                                            case 'L':
                                                if (strcmp(&(field_name[21]), "ong") == 0)
                                                    return &fieldGeneratorErrorWrittenResponseLong;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'H':
                        if (strcmp(&(field_name[1]), "adInvalidChoice") == 0)
                            return &fieldGeneratorHadInvalidChoice;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "astSelectedInfoAsStrings") == 0)
                            return &fieldGeneratorLastSelectedInfoAsStrings;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[1]), "ultiSelect") == 0)
                            return &fieldGeneratorMultiSelect;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorMultiSelect("field \"MultiSelect\" of the TypeNativeData class"), fieldGeneratorChoiceList("field \"ChoiceList\" of the TypeNativeData class", ignore_extras), fieldGeneratorErrorSpokenResponse("field \"ErrorSpokenResponse\" of the TypeNativeData class"), fieldGeneratorErrorSpokenResponseLong("field \"ErrorSpokenResponseLong\" of the TypeNativeData class"), fieldGeneratorErrorWrittenResponse("field \"ErrorWrittenResponse\" of the TypeNativeData class"), fieldGeneratorErrorWrittenResponseLong("field \"ErrorWrittenResponseLong\" of the TypeNativeData class"), fieldGeneratorHadInvalidChoice("field \"HadInvalidChoice\" of the TypeNativeData class"), fieldGeneratorCommunicationType("field \"CommunicationType\" of the TypeNativeData class", ignore_extras), fieldGeneratorAutoListen("field \"AutoListen\" of the TypeNativeData class"), fieldGeneratorContactResultChoices("field \"ContactResultChoices\" of the TypeNativeData class", ignore_extras), fieldGeneratorLastSelectedInfoAsStrings("field \"LastSelectedInfoAsStrings\" of the TypeNativeData class", ignore_extras), unknownFieldGenerator(ignore_extras)
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
                fieldGeneratorErrorSpokenResponse.reset();
                fieldGeneratorErrorSpokenResponseLong.reset();
                fieldGeneratorErrorWrittenResponse.reset();
                fieldGeneratorErrorWrittenResponseLong.reset();
                fieldGeneratorHadInvalidChoice.reset();
                fieldGeneratorCommunicationType.reset();
                fieldGeneratorAutoListen.reset();
                fieldGeneratorContactResultChoices.reset();
                fieldGeneratorLastSelectedInfoAsStrings.reset();
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

    DisambiguateCommunicationCommandJSON(const DisambiguateCommunicationCommandJSON &);
    DisambiguateCommunicationCommandJSON & operator=(const DisambiguateCommunicationCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    DisambiguateCommunicationCommandJSON(void);
    virtual ~DisambiguateCommunicationCommandJSON(void);
    const char * getDisambiguateCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    virtual size_t extraDisambiguateCommunicationCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraDisambiguateCommunicationCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraDisambiguateCommunicationCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraDisambiguateCommunicationCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraDisambiguateCommunicationCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraDisambiguateCommunicationCommandLookup(const char *field_name) const
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
        result += extraDisambiguateCommunicationCommandComponentCount();
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
        return extraDisambiguateCommunicationCommandComponentKey(remainder);
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
        return extraDisambiguateCommunicationCommandComponentValue(remainder);
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
        return extraDisambiguateCommunicationCommandComponentValue(remainder);
      }
    JSONValue *extraDisambiguateCommandLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraDisambiguateCommunicationCommandLookup(field_name);
      }
    const JSONValue *extraDisambiguateCommandLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return extraDisambiguateCommunicationCommandLookup(field_name);
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

    virtual void extraDisambiguateCommunicationCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraDisambiguateCommunicationCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraDisambiguateCommunicationCommandLookup(key);
        if (old_field == NULL)
          {
            extraDisambiguateCommunicationCommandAppendPair(key, new_component);
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
        extraDisambiguateCommunicationCommandAppendPair(key, new_component);
      }
    void extraDisambiguateCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
        extraDisambiguateCommunicationCommandSetField(key, new_component);
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

    static DisambiguateCommunicationCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static DisambiguateCommunicationCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        DisambiguateCommunicationCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommunicationCommandJSON>, DisambiguateCommunicationCommandJSON *, bool> generator("Type DisambiguateCommunicationCommand", ignore_extras);
            parse_json_value(text, "Text for DisambiguateCommunicationCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static DisambiguateCommunicationCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        DisambiguateCommunicationCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommunicationCommandJSON>, DisambiguateCommunicationCommandJSON *, bool> generator("Type DisambiguateCommunicationCommand", ignore_extras);
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
            if (!(strcmp(getDisambiguateCommandJSONKey().c_str(), "DisambiguateCommunicationCommand") == 0))
                throw("The key field has a value other than `DisambiguateCommunicationCommand'.");
            DisambiguateCommunicationCommandJSON *result = new DisambiguateCommunicationCommandJSON();
            assert(result != NULL);
            RCHandle<DisambiguateCommunicationCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraDisambiguateCommunicationCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(DisambiguateCommandJSON *new_result)
          {
            handle_result((DisambiguateCommunicationCommandJSON *)new_result);
          }
        void finish(DisambiguateCommunicationCommandJSON *result)
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
        virtual void handle_result(DisambiguateCommunicationCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return DisambiguateCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : DisambiguateCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the DisambiguateCommunicationCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the DisambiguateCommunicationCommand class");
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

#endif /* DISAMBIGUATECOMMUNICATIONCOMMANDJSON_H */
